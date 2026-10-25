// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d43060 FUN_140d43060 body=2099 status=ok
// SIG undefined FUN_140d43060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d43060(longlong *param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_208 [32];
  int local_1e8;
  int local_1e4;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined4 local_1c0 [2];
  longlong local_1b8 [6];
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (*param_2 != 0) {
    if (param_3 < 2) {
      lVar7 = FUN_142b45e90();
      uVar3 = *(undefined8 *)(lVar7 + 0x18);
      local_178 = *param_2;
      local_170 = (longlong *)param_2[1];
      if (local_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      FUN_142b4a990(uVar3,&local_1d0,&local_178);
      plVar11 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_170 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (local_1d0 != 0) {
        Chaos::TPBDRigidParticle<float,3>::GetWakeEvent();
        local_1b8[4] = 0;
        Online::GetIdentityInterface(&local_188,0);
        if (local_188 != (longlong *)0x0) {
          iVar5 = (**(code **)(*local_188 + 0x38))();
          iVar6 = FUN_142b49100(local_1d0);
          if (iVar6 != iVar5) {
            FUN_142b67df0(local_1d0,iVar5);
          }
        }
        local_168 = *param_2;
        local_160 = (longlong *)param_2[1];
        if (local_160 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_160 + 1) = (int)local_160[1] + 1;
          UNLOCK();
        }
        uVar8 = FUN_14203c4a0(local_1d0);
        FUN_140d28250(param_1,&local_168,uVar8);
        plVar11 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_160 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        local_1b8[5] = 0;
        FUN_1404cf890(&local_1e0,0);
        plVar11 = local_1e0;
        if (local_1e0 != (longlong *)0x0) {
          local_158 = *param_2;
          local_150 = (longlong *)param_2[1];
          local_1e8 = 1;
          local_1e4 = 1;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_150 + 1) = (int)local_150[1] + 1;
            UNLOCK();
          }
          (**(code **)(*local_1e0 + 0x140))(local_1e0,&local_158,3,&local_1e8);
          plVar10 = local_150;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_150 + 1;
            lVar7 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            plVar11 = local_1e0;
            if ((int)lVar7 == 1) {
              (**(code **)*local_150)(local_150);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar11 = local_1e0;
              if (iVar5 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
                plVar11 = local_1e0;
              }
            }
          }
          local_148 = *param_2;
          local_140 = (longlong *)param_2[1];
          if (local_140 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_140 + 1) = (int)local_140[1] + 1;
            UNLOCK();
            plVar11 = local_1e0;
          }
          (**(code **)(*plVar11 + 0x140))(plVar11,&local_148,9,&local_1e4);
          plVar11 = local_140;
          if (local_140 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_140 + 1;
            lVar7 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_140)(local_140);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          *(bool *)(local_1d0 + 600) = local_1e8 != 1;
          *(bool *)(local_1d0 + 0x259) = local_1e4 != 1;
        }
        plVar11 = local_1d8;
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_1d8 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1d8)(local_1d8);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_1d8 + 8))(local_1d8,1);
            }
          }
        }
        plVar11 = local_180;
        if (local_180 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_180 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_180)(local_180);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_180 + 8))(local_180,1);
            }
          }
        }
      }
      local_138 = *param_2;
      local_130 = (longlong *)param_2[1];
      if (local_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
      }
      FUN_140d4bcb0(param_1,&local_138);
      plVar11 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_130 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = param_1 + 0x47;
      cVar4 = FWeakObjectPtr::IsValid(plVar11);
      if (cVar4 != '\0') {
        uVar8 = FWeakObjectPtr::Get(plVar11);
        FUN_140bb4330(uVar8);
      }
      local_128 = *param_2;
      local_120 = (longlong *)param_2[1];
      if (local_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_120 + 1) = (int)local_120[1] + 1;
        UNLOCK();
      }
      FUN_140c0e560(&local_128);
      plVar10 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_120 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      cVar4 = FWeakObjectPtr::IsValid(plVar11);
      if (cVar4 == '\0') {
        local_1c0[0] = 1;
      }
      else {
        uVar8 = FWeakObjectPtr::Get(plVar11);
        local_1c0[0] = FUN_14046e5c0(uVar8);
      }
      uStack_b0 = local_1c0;
      local_a8 = &local_1d0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_b8 = param_2;
      puVar9 = (undefined8 *)FUN_140438ef0(0x20,local_88);
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar9 + 1) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar9 + 0xc) = local_b8._4_4_;
        *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_b0._4_4_;
        *puVar9 = &PTR_FUN_143f4d0b0;
        puVar9[3] = local_a8;
      }
      local_1b8[2] = 0;
      local_98[0] = &LAB_140d28ae0;
      local_1b8[3] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 2,0);
      FGenericPlatformString::Memcpy(local_1b8[2],L"local_player_added",0x26);
      local_1b8[0] = 0;
      local_1b8[1] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8,0);
      FGenericPlatformString::Memcpy(local_1b8[0],&DAT_14450b4c4,6);
      local_118 = *param_2;
      local_110 = (longlong *)param_2[1];
      if (local_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_110 + 1) = (int)local_110[1] + 1;
        UNLOCK();
      }
      FUN_142b62c30(&local_118,local_1b8,local_1b8 + 2,local_98);
      plVar10 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_110 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (local_1b8[0] != 0) {
        FMemory::Free();
      }
      if (local_1b8[2] != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        plVar10 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar10 = local_68;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_142b62940();
      lVar7 = param_1[0x45];
      if (lVar7 != 0) {
        local_108 = *param_2;
        local_100 = (longlong *)param_2[1];
        if (local_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_100 + 1) = (int)local_100[1] + 1;
          UNLOCK();
          lVar7 = param_1[0x45];
        }
        FUN_140e02c80(lVar7,&local_108);
        plVar10 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_100 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      cVar4 = FWeakObjectPtr::IsValid(plVar11);
      if (cVar4 != '\0') {
        local_f8 = *param_2;
        local_f0 = (longlong *)param_2[1];
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
          UNLOCK();
        }
        uVar8 = FWeakObjectPtr::Get(plVar11);
        FUN_140bd6aa0(uVar8,&local_f8);
        plVar10 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_f0 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        uVar8 = FWeakObjectPtr::Get(plVar11);
        FUN_140be5350(uVar8);
        uVar8 = FWeakObjectPtr::Get(plVar11);
        FUN_140bccff0(uVar8);
      }
      FUN_142b4b220(uVar3,&local_d8);
      if (local_d8 != 0) {
        local_e8 = *param_2;
        local_e0 = (longlong *)param_2[1];
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
          UNLOCK();
        }
        FUN_142b3f500(local_d8,&local_e8);
        plVar11 = local_e0;
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_e0 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_d0 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)local_d0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1c8 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1c8)(local_1c8);
          LOCK();
          piVar1 = (int *)((longlong)local_1c8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_1c8 + 8))(local_1c8,1);
          }
        }
      }
    }
    local_c8 = *param_2;
    local_c0 = (longlong *)param_2[1];
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x98))(param_1,&local_c8);
    plVar11 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_c0 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d438a0 FUN_140d438a0 body=1390 status=ok
// SIG undefined FUN_140d438a0(void)

void FUN_140d438a0(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong local_108 [3];
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  
  lVar9 = *param_2;
  bVar4 = false;
  if (lVar9 == 0) {
LAB_140d43907:
    bVar5 = false;
  }
  else {
    local_e0 = (longlong *)param_2[1];
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    bVar4 = true;
    local_e8 = lVar9;
    cVar8 = FUN_142d868e0(param_1,&local_e8);
    if (cVar8 == '\0') goto LAB_140d43907;
    bVar5 = true;
  }
  plVar12 = local_e0;
  if ((bVar4) && (local_e0 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_e0 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  bVar6 = false;
  bVar4 = false;
  if (!bVar5) {
    return;
  }
  if (1 < param_3) {
    lVar9 = FUN_142b45e90();
    FUN_142b4b220(*(undefined8 *)(lVar9 + 0x18),&local_58);
    plVar12 = local_50;
    if (local_58 != 0) {
      local_68 = *param_2;
      local_60 = (longlong *)param_2[1];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_142b66a60(local_58,&local_68);
      plVar11 = local_60;
      plVar12 = local_50;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar12 = local_50;
          if (iVar3 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
            plVar12 = local_50;
          }
        }
      }
    }
    goto LAB_140d43dbb;
  }
  FUN_142b62940();
  lVar9 = FUN_142b45e90();
  uVar10 = *(undefined8 *)(lVar9 + 0x18);
  local_d8 = *param_2;
  local_d0 = (longlong *)param_2[1];
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  FUN_142b4a990(uVar10,&local_78,&local_d8);
  plVar12 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_d0 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (local_78 != 0) {
    local_c8 = *param_2;
    local_c0 = (longlong *)param_2[1];
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    uVar10 = FUN_14203c4a0();
    FUN_140d28250(param_1,&local_c8,uVar10);
    plVar12 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_c0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  local_b8 = *param_2;
  local_b0 = (longlong *)param_2[1];
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  FUN_140d4bcb0(param_1,&local_b8);
  plVar12 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_b0 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x238);
  if (cVar8 != '\0') {
    local_a8 = *param_2;
    local_a0 = (longlong *)param_2[1];
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x238);
    FUN_140bd6aa0(uVar10,&local_a8);
    plVar12 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_a0 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x238);
    FUN_140be5350(uVar10);
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x238);
    FUN_140bccff0(uVar10);
  }
  lVar9 = FUN_142b45e90();
  FUN_142b4b220(*(undefined8 *)(lVar9 + 0x18),local_108 + 2);
  if ((local_108[2] != 0) && (local_78 != 0)) {
    plVar11 = (longlong *)FUN_142b4b250(local_78,local_48);
    plVar12 = *(longlong **)(*plVar11 + 0x10);
    lVar9 = *(longlong *)(*plVar11 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_40 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (lVar9 == 0) {
LAB_140d43c18:
      bVar5 = false;
    }
    else {
      local_108[1] = 0xc;
      local_108[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
      FGenericPlatformString::Memcpy(local_108[0],L"EndpointUrl",0x18);
      bVar6 = true;
      bVar4 = true;
      lVar9 = FUN_142afb430(lVar9,local_38,local_108);
      if (*(int *)(lVar9 + 8) < 2) goto LAB_140d43c18;
      bVar5 = true;
    }
    if ((bVar4) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar6) && (local_108[0] != 0)) {
      FMemory::Free();
    }
    lVar9 = *param_2;
    plVar11 = (longlong *)param_2[1];
    if (bVar5) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_98 = lVar9;
      local_90 = plVar11;
      FUN_142b3f500(local_108[2],&local_98);
      plVar11 = local_90;
    }
    else {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_88 = lVar9;
      local_80 = plVar11;
      FUN_142b66a60(local_108[2],&local_88);
      plVar11 = local_80;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar11 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar12 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  plVar12 = local_70;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_f0 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar12 = local_70;
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
        plVar12 = local_70;
      }
    }
  }
LAB_140d43dbb:
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar12 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 140d43e10 FUN_140d43e10 body=2125 status=ok
// SIG undefined FUN_140d43e10(void)

void FUN_140d43e10(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  undefined8 *puVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  void **ppvVar10;
  undefined8 uVar11;
  longlong lVar12;
  wchar_t *_Src_00;
  longlong lVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  undefined4 local_198;
  void *local_190;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  ushort *local_170;
  int local_168;
  undefined4 local_164;
  ushort *local_160;
  undefined8 local_158;
  longlong local_150 [16];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  void **local_a0;
  longlong *local_98;
  ushort **local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong local_50 [2];
  longlong local_40 [3];
  
  cVar5 = FUN_142d868e0();
  if (cVar5 != '\0') {
    iVar16 = 0;
    if ((undefined *)*param_3 != &DAT_1445087d8) {
      *(undefined4 *)(param_3 + 1) = 0;
      iVar6 = iVar16;
      if (*(int *)((longlong)param_3 + 0xc) != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,5);
        iVar6 = (int)param_3[1];
      }
      *(int *)(param_3 + 1) = iVar6 + 5;
      if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
      }
      puVar4 = (undefined8 *)*param_3;
      *puVar4 = 0x45004c00440049;
      *(undefined2 *)(puVar4 + 1) = 0;
    }
    param_1 = param_1 + 0x238;
    cVar5 = FWeakObjectPtr::IsValid(param_1);
    if (cVar5 != '\0') {
      local_198 = 0;
      uVar8 = FName::FName(local_58,L"SPARK",1);
      plVar9 = (longlong *)FUN_1404b0000(uVar8);
      if (plVar9 != (longlong *)0x0) {
        local_198 = (**(code **)(*plVar9 + 0x158))(plVar9);
      }
      local_190 = (void *)0x0;
      local_188 = 0;
      uVar8 = FWeakObjectPtr::Get(param_1);
      cVar5 = FUN_140bca8a0(uVar8);
      _Src_00 = L"GAMEPLAY";
      if (cVar5 != '\0') {
        _Src_00 = L"MENU";
      }
      if ((wchar_t *)*param_3 != _Src_00) {
        iVar6 = iVar16;
        if (*_Src_00 != L'\0') {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (_Src_00[lVar13] != L'\0');
          iVar6 = (int)lVar13 + 1;
        }
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) != iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,iVar6);
          iVar16 = (int)param_3[1];
        }
        *(int *)(param_3 + 1) = iVar6 + iVar16;
        if (*(int *)((longlong)param_3 + 0xc) < iVar6 + iVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
        }
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop((void *)*param_3,_Src_00,(longlong)iVar6 * 2);
        }
      }
      lVar13 = FWeakObjectPtr::Get();
      plVar9 = *(longlong **)(lVar13 + 0x4e8);
      lVar13 = *(longlong *)(lVar13 + 0x4e0);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      cVar5 = *(char *)(lVar13 + 0x10);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar9)();
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (cVar5 != '\0') {
        iVar16 = (int)param_3[1];
        iVar6 = (0xd - (uint)(iVar16 != 0)) + iVar16;
        *(int *)(param_3 + 1) = iVar6;
        if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar16);
        }
        lVar12 = (longlong)iVar16 - (ulonglong)(iVar16 != 0);
        lVar13 = *param_3;
        builtin_wcsncpy((wchar_t *)(lVar13 + lVar12 * 2),L"_MATCHMA",8);
        builtin_wcsncpy((wchar_t *)(lVar13 + 0x10 + lVar12 * 2),L"KING",4);
        *(undefined2 *)(lVar13 + 0x18 + lVar12 * 2) = 0;
        lVar13 = FWeakObjectPtr::Get(param_1);
        plVar9 = *(longlong **)(lVar13 + 0x4e8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        cVar5 = FUN_140678610();
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar9)();
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar16 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        if (cVar5 != '\0') {
          iVar16 = (int)param_3[1];
          iVar6 = (0xd - (uint)(iVar16 != 0)) + iVar16;
          *(int *)(param_3 + 1) = iVar6;
          if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar16);
          }
          lVar12 = (longlong)iVar16 - (ulonglong)(iVar16 != 0);
          lVar13 = *param_3;
          builtin_wcsncpy((wchar_t *)(lVar13 + lVar12 * 2),L"_BACKFIL",8);
          builtin_wcsncpy((wchar_t *)(lVar13 + 0x10 + lVar12 * 2),L"LING",4);
          *(undefined2 *)(lVar13 + 0x18 + lVar12 * 2) = 0;
        }
        lVar13 = FWeakObjectPtr::Get(param_1);
        plVar9 = *(longlong **)(lVar13 + 0x4e8);
        uVar8 = *(undefined8 *)(lVar13 + 0x4e0);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        ppvVar10 = (void **)FUN_140573010(uVar8);
        if (&local_190 != ppvVar10) {
          iVar16 = *(int *)(ppvVar10 + 1);
          _Src = *ppvVar10;
          local_188 = CONCAT44(local_188._4_4_,iVar16);
          if ((iVar16 == 0) && (local_188._4_4_ == 0)) {
            local_188 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_190,iVar16);
            _guard_xfg_dispatch_icall_nop(local_190,_Src,(longlong)iVar16 * 2);
          }
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar16 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      local_180 = 0;
      local_178 = 0;
      uVar8 = FWeakObjectPtr::Get(param_1);
      uVar11 = FWeakObjectPtr::Get(param_1);
      uVar7 = FUN_140bb6bd0(uVar8,param_2);
      lVar13 = FUN_140bbaee0(uVar11,uVar7);
      if (lVar13 != 0) {
        plVar9 = (longlong *)FName::ToString(lVar13 + 0x88,local_50);
        if (&local_180 != plVar9) {
          if (local_180 != 0) {
            FMemory::Free();
          }
          local_180 = *plVar9;
          *plVar9 = 0;
          local_178 = plVar9[1];
          plVar9[1] = 0;
        }
        if (local_50[0] != 0) {
          FMemory::Free();
        }
      }
      uVar8 = FWeakObjectPtr::Get(param_1);
      FUN_140bb7010(uVar8,&local_170);
      if (1 < local_168) {
        uVar14 = 0xffffffff;
        puVar15 = &DAT_143f3eda8;
        if (local_168 != 0) {
          puVar15 = local_170;
        }
        uVar3 = *puVar15;
        while (uVar3 != 0) {
          puVar15 = puVar15 + 1;
          uVar14 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(byte)((byte)uVar14 ^ (byte)uVar3) * 4) ^
                   uVar14 >> 8;
          uVar14 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((uVar3 >> 8 ^ uVar14) & 0xff) * 4) ^
                   uVar14 >> 8;
          uVar14 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar14 & 0xff) * 4) ^ uVar14 >> 8;
          uVar14 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar14 & 0xff) * 4) ^ uVar14 >> 8;
          uVar3 = *puVar15;
        }
        local_160 = (ushort *)0x0;
        local_158 = 0;
        FString::AppendInt(&local_160,~uVar14);
        if (local_170 != (ushort *)0x0) {
          FMemory::Free();
        }
        local_170 = local_160;
        local_168 = (int)local_158;
        local_164 = local_158._4_4_;
      }
      local_150[0] = 0;
      local_150[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_150,0);
      FGenericPlatformString::Memcpy(local_150[0],L"map_name",0x12);
      uVar8 = FWeakObjectPtr::Get(param_1);
      local_b8 = local_150;
      local_b0 = FUN_140bb69d0(uVar8,local_40);
      FUN_140497620(param_4,local_d0,&local_b8,0);
      if (local_40[0] != 0) {
        FMemory::Free();
      }
      if (local_150[0] != 0) {
        FMemory::Free();
      }
      local_150[2] = 0;
      local_150[3] = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_150 + 2,0);
      FGenericPlatformString::Memcpy(local_150[2],L"experience_guid",0x20);
      local_a8 = local_150 + 2;
      local_a0 = &local_190;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(param_4,local_cc,&local_a8,0);
      if (local_150[2] != 0) {
        FMemory::Free();
      }
      local_150[4] = 0;
      local_150[5] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_150 + 4,0);
      FGenericPlatformString::Memcpy(local_150[4],L"session_id",0x16);
      local_98 = local_150 + 4;
      local_90 = &local_170;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(param_4,local_c8,&local_98,0);
      if (local_150[4] != 0) {
        FMemory::Free();
      }
      local_150[6] = 0;
      local_150[7] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_150 + 6,0);
      FGenericPlatformString::Memcpy(local_150[6],L"player_level",0x1a);
      uVar8 = FWeakObjectPtr::Get(param_1);
      uVar7 = FUN_140bb6e30(uVar8,param_2);
      local_150[0xc] = 0;
      local_150[0xd] = 0;
      FString::AppendInt(local_150 + 0xc,uVar7);
      local_88 = local_150 + 6;
      local_80 = local_150 + 0xc;
      FUN_140497620(param_4,local_c4,&local_88,0);
      if (local_150[0xc] != 0) {
        FMemory::Free();
      }
      if (local_150[6] != 0) {
        FMemory::Free();
      }
      local_150[8] = 0;
      local_150[9] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_150 + 8,0);
      FGenericPlatformString::Memcpy(local_150[8],L"player_class",0x1a);
      local_78 = local_150 + 8;
      local_70 = &local_180;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(param_4,local_c0,&local_78,0);
      if (local_150[8] != 0) {
        FMemory::Free();
      }
      local_150[10] = 0;
      local_150[0xb] = 0x1d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_150 + 10,0);
      FGenericPlatformString::Memcpy(local_150[10],L"num_local_players_in_channel",0x3a);
      local_150[0xe] = 0;
      local_150[0xf] = 0;
      FString::AppendInt(local_150 + 0xe,local_198);
      local_68 = local_150 + 10;
      local_60 = local_150 + 0xe;
      FUN_140497620(param_4,local_bc,&local_68,0);
      if (local_150[0xe] != 0) {
        FMemory::Free();
      }
      if (local_150[10] != 0) {
        FMemory::Free();
      }
      if (local_170 != (ushort *)0x0) {
        FMemory::Free();
      }
      if (local_180 != 0) {
        FMemory::Free();
      }
      if (local_190 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140d44660 FUN_140d44660 body=107 status=ok
// SIG undefined FUN_140d44660(void)

void FUN_140d44660(longlong *param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  
  if (param_1[0x56] != 0) {
    cVar1 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0xe8))(param_1,param_1 + 0x5b);
      if (param_3 != '\0') {
        FUN_140d3dde0();
        return;
      }
      FUN_140d2d520(param_1,2);
    }
  }
  return;
}



// FUNCTION 140d446d0 FUN_140d446d0 body=292 status=ok
// SIG undefined FUN_140d446d0(void)

void FUN_140d446d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined4 uStack_10;
  
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    cVar1 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar1 != '\0') {
      if (*(int *)(param_3 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*param_3;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,PTR_u_profile_14629a5b0);
      if (iVar2 == 0) {
        TBaseMulticastDelegate<void>::Remove
                  (*(longlong *)(param_1 + 0x5c8) + 0x18,*(undefined8 *)(param_1 + 0x2f0));
        *(undefined8 *)(param_1 + 0x2f0) = 0;
        if ((param_4 == 1) || (param_4 == 6)) {
          FUN_140d2d680(param_1,param_4);
        }
        else {
          cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x238);
          if (cVar1 != '\0') {
            local_18 = FUN_140d417b0;
            uStack_10 = 0;
            lVar3 = FWeakObjectPtr::Get(param_1 + 0x238);
            puVar4 = (undefined8 *)FUN_140d1b8e0(lVar3 + 0xc48,local_res8,param_1,&local_18);
            *(undefined8 *)(param_1 + 0x2f8) = *puVar4;
            uVar5 = FWeakObjectPtr::Get(param_1 + 0x238);
            FUN_140beda70(uVar5,param_2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d44800 FUN_140d44800 body=847 status=ok
// SIG undefined FUN_140d44800(void)

void FUN_140d44800(longlong param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined1 local_a8 [8];
  undefined ***local_a0;
  int *local_98;
  undefined **local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((*(longlong *)(param_1 + 0x358) != 0) &&
     (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 != '\0')) {
    puVar8 = &DAT_143f3eda8;
    if (*(int *)(param_3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_3;
    }
    if (*(int *)(param_1 + 0x378) != 0) {
      puVar8 = *(undefined2 **)(param_1 + 0x370);
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar6 == 0) {
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(param_1 + 0x5c8) + 0x18,*(undefined8 *)(param_1 + 0x388));
      *(undefined8 *)(param_1 + 0x388) = 0;
      if (param_4 == 1) {
        if (*(char *)(param_1 + 0x380) != '\0') {
          plVar2 = (longlong *)*param_2;
          local_80 = param_2[1];
          if (local_80 != 0) {
            LOCK();
            *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
            UNLOCK();
          }
          plVar1 = (longlong *)(param_1 + 0x528);
          local_90 = &PTR_FUN_143f740c8;
          local_78 = 0;
          local_70 = 0;
          local_88 = plVar2;
          if (*(int *)(param_1 + 0x530) != *(int *)(param_1 + 0x55c)) {
            if ((plVar2 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar2 + 0x20))(), cVar5 == '\0')) {
              iVar6 = -1;
            }
            else {
              iVar6 = GetTypeHash(plVar2);
            }
            lVar7 = *(longlong *)(param_1 + 0x568);
            if (*(longlong *)(param_1 + 0x568) == 0) {
              lVar7 = param_1 + 0x560;
            }
            iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x570) - 1U & (longlong)iVar6) *
                                     4);
            if (iVar6 != -1) {
              lVar7 = *plVar1;
              do {
                lVar10 = (longlong)iVar6 * 0x38;
                plVar3 = *(longlong **)(lVar7 + 8 + lVar10);
                if ((((plVar3 == (longlong *)0x0) ||
                     (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0')) ||
                    (plVar2 == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2), cVar5 == '\0')) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                plVar3 = *(longlong **)(lVar7 + lVar10 + 8);
                if ((((plVar3 == (longlong *)0x0) ||
                     (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0')) &&
                    ((plVar2 == (longlong *)0x0 ||
                     (cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2), cVar5 == '\0')))) ||
                   ((bVar4 && (cVar5 = (**(code **)*plVar2)
                                                 (plVar2,*(undefined8 *)(lVar7 + lVar10 + 8)),
                              cVar5 != '\0')))) {
                  if ((iVar6 != -1) && (*plVar1 + lVar10 != 0)) {
                    iVar6 = *(int *)(*plVar1 + lVar10 + 0x28);
                    goto LAB_140d44a13;
                  }
                  break;
                }
                lVar7 = *plVar1;
                iVar6 = *(int *)(lVar7 + 0x30 + lVar10);
              } while (iVar6 != -1);
            }
          }
          iVar6 = 0;
LAB_140d44a13:
          FUN_1404bf980(&local_90);
          if (-1 < iVar6) {
            local_res8[0] = iVar6 + 1;
            local_60 = *param_2;
            local_58 = param_2[1];
            if (local_58 != 0) {
              LOCK();
              *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
              UNLOCK();
            }
            local_50 = 0;
            local_68 = &PTR_FUN_143f740c8;
            local_a0 = &local_68;
            local_48 = 0;
            local_98 = local_res8;
            FUN_140d1d390(plVar1,local_a8,&local_a0,0);
            FUN_1404bf980(&local_68);
          }
        }
        FUN_140d4cab0(param_1,param_2,1);
        lVar7 = FUN_140d3a750(param_1,param_2);
        if (((lVar7 != 0) && (iVar6 = FUN_140d4d650(param_3), iVar6 != 0)) &&
           (*(int *)(lVar7 + 0xa8) != iVar6)) {
          *(int *)(lVar7 + 0xa8) = iVar6;
          *(undefined1 *)(lVar7 + 0x28) = 1;
          FUN_140d589a0(param_1,param_2);
        }
      }
      FUN_140d2d8d0(param_1,param_4 == 1);
    }
  }
  return;
}



// FUNCTION 140d44b50 FUN_140d44b50 body=69 status=ok
// SIG undefined FUN_140d44b50(void)

void FUN_140d44b50(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x14];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x000140d44b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d44b91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,3);
  return;
}



// FUNCTION 140d44ba0 FUN_140d44ba0 body=1339 status=ok
// SIG undefined FUN_140d44ba0(void)

void FUN_140d44ba0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_118;
  int local_110;
  longlong *local_108;
  int local_100;
  longlong *local_f8;
  int local_f0;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  local_c8 = param_1[0xc];
  local_c0 = (longlong *)param_1[0xd];
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  FUN_140d28a10(param_1 + 0x11,&local_c8,0,*(undefined4 *)((longlong)param_1 + 0x3c));
  plVar6 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_c0)(local_c0);
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
  (**(code **)(*param_1 + 0x48))(param_1);
  switch(*(undefined4 *)((longlong)param_1 + 0x3c)) {
  case 0:
    (**(code **)(*param_1 + 0x38))(param_1);
    break;
  case 1:
    FUN_140d28cc0(param_1);
    break;
  case 2:
    FUN_1404cdd50(&local_d8,0);
    if (local_d8 == (longlong *)0x0) {
      (**(code **)(*param_1 + 0x38))(param_1);
    }
    else {
      lVar4 = *local_d8;
      local_78 = 0x40d41a10;
      uStack_74 = 1;
      uStack_70 = 0;
      uVar5 = FUN_140d1c3d0(&local_118,param_1,&local_78);
      plVar6 = (longlong *)(**(code **)(lVar4 + 0xf0))(local_d8,local_res10,uVar5);
      param_1[0x18] = *plVar6;
      if (local_110 == 0) {
LAB_140d44d1e:
        if (local_118 != (longlong *)0x0) {
          FMemory::Free(local_118);
        }
      }
      else if (local_118 != (longlong *)0x0) {
        (**(code **)(*local_118 + 0x28))(local_118,0);
        if (local_118 != (longlong *)0x0) {
          local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
        }
        local_110 = 0;
        goto LAB_140d44d1e;
      }
      (**(code **)(*local_d8 + 0x110))(local_d8);
    }
    plVar6 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    break;
  case 3:
    if (((longlong *)param_1[0x14] == (longlong *)0x0) || (param_1[0xc] == 0)) {
      (**(code **)(*param_1 + 0x40))(param_1,4);
      return;
    }
    lVar4 = *(longlong *)param_1[0x14];
    local_68 = 0x40d42390;
    uStack_64 = 1;
    uStack_60 = 0;
    uVar5 = FUN_140d1c3d0(&local_108,param_1,&local_68);
    plVar6 = (longlong *)(**(code **)(lVar4 + 0xc0))(param_1[0x14],local_res18,uVar5);
    param_1[0x1b] = *plVar6;
    if (local_100 == 0) {
LAB_140d44e41:
      if (local_108 != (longlong *)0x0) {
        FMemory::Free(local_108);
      }
    }
    else if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x28))(local_108,0);
      if (local_108 != (longlong *)0x0) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
      local_100 = 0;
      goto LAB_140d44e41;
    }
    local_b8 = param_1[0xc];
    local_b0 = (longlong *)param_1[0xd];
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_140d46ca0(param_1[0x14],&local_b8);
    plVar6 = local_b0;
    goto LAB_140d45084;
  case 4:
    FUN_140d466e0(param_1);
    break;
  case 5:
    if (((longlong *)param_1[0x14] == (longlong *)0x0) || (param_1[0xc] == 0)) {
      (**(code **)(*param_1 + 0x40))(param_1,3);
      return;
    }
    lVar4 = *(longlong *)param_1[0x14];
    local_58 = 0x40d44b50;
    uStack_54 = 1;
    uStack_50 = 0;
    uVar5 = FUN_140d1c270(&local_f8,param_1,&local_58);
    plVar6 = (longlong *)(**(code **)(lVar4 + 0x60))(param_1[0x14],local_res20,uVar5);
    param_1[0x17] = *plVar6;
    if (local_f0 == 0) {
LAB_140d44f49:
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free(local_f8);
      }
    }
    else if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x28))(local_f8,0);
      if (local_f8 != (longlong *)0x0) {
        local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
      }
      local_f0 = 0;
      goto LAB_140d44f49;
    }
    local_a8 = param_1[0xc];
    local_a0 = (longlong *)param_1[0xd];
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    FUN_140d2ae90(param_1[0x14],&local_a8);
    plVar6 = local_a0;
    goto LAB_140d45084;
  case 6:
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      return;
    }
    if (param_1[0xc] == 0) {
      return;
    }
    lVar4 = *(longlong *)param_1[0x14];
    local_48 = 0x40d3fe90;
    uStack_44 = 1;
    uStack_40 = 0;
    uVar5 = FUN_140d1c270(&local_e8,param_1,&local_48);
    plVar6 = (longlong *)(**(code **)(lVar4 + 0x80))(param_1[0x14],local_88,uVar5);
    param_1[0x1c] = *plVar6;
    if (local_e0 == 0) {
LAB_140d45047:
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free(local_e8);
      }
    }
    else if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x28))(local_e8,0);
      if (local_e8 != (longlong *)0x0) {
        local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
      }
      local_e0 = 0;
      goto LAB_140d45047;
    }
    local_98 = param_1[0xc];
    local_90 = (longlong *)param_1[0xd];
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    FUN_140d2abc0(param_1[0x14],&local_98,0);
    plVar6 = local_90;
LAB_140d45084:
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
    break;
  case 7:
    FUN_140d46940(param_1);
    break;
  case 8:
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  return;
}



// FUNCTION 140d45100 FUN_140d45100 body=180 status=ok
// SIG undefined FUN_140d45100(void)

void FUN_140d45100(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar3 = FUN_142238430();
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    uVar3 = DAT_1468b5da8;
  }
  else {
    local_18 = *(float *)(lVar1 + 0x210);
    fStack_14 = *(float *)(lVar1 + 0x214);
    fStack_10 = *(float *)(lVar1 + 0x218);
    fStack_c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
    iVar4 = movmskps(uVar3,auVar2);
    if (iVar4 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
      *(undefined8 *)(lVar1 + 0x260) = *puVar5;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    uVar3 = *(undefined4 *)(lVar1 + 0x268);
  }
  *(ulonglong *)(param_1 + 0x4e0) = CONCAT44(uVar7,uVar6);
  *(undefined4 *)(param_1 + 0x4e8) = uVar3;
  return;
}



// FUNCTION 140d451c0 FUN_140d451c0 body=198 status=ok
// SIG undefined FUN_140d451c0(void)

void FUN_140d451c0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  FUN_1422384a0();
  if (0 < *(int *)(param_1 + 0x568)) {
    puVar4 = (undefined8 *)operator_new(0x78);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 1) = 4;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 5) = 0;
      puVar4[10] = 0;
      *puVar4 = &PTR_FUN_1445109e0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x548);
      uVar2 = *(undefined4 *)(param_1 + 0x54c);
      uVar3 = *(undefined4 *)(param_1 + 0x550);
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(param_1 + 0x544);
      *(undefined4 *)((longlong)puVar4 + 0x34) = uVar1;
      *(undefined4 *)(puVar4 + 7) = uVar2;
      *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar3;
      puVar4[8] = *(undefined8 *)(param_1 + 0x554);
      *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(param_1 + 0x55c);
      *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)(param_1 + 0x538);
      *(undefined4 *)((longlong)puVar4 + 0x5c) = *(undefined4 *)(param_1 + 0x53c);
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(param_1 + 0x540);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(puVar4 + 0xd,param_1 + 0x560);
    }
    *(undefined8 **)(param_1 + 0x570) = puVar4;
    FUN_141edf270(puVar4);
  }
  return;
}



// FUNCTION 140d45290 FUN_140d45290 body=4055 status=ok
// SIG undefined FUN_140d45290(void)

void FUN_140d45290(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined *puVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  uint uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  wchar_t *pwVar23;
  longlong *plVar24;
  uint uVar25;
  uint local_res10 [2];
  int local_res18;
  longlong *local_res20;
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar26;
  ulonglong in_stack_fffffffffffffde0;
  wchar_t *local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  int local_1d0;
  wchar_t *local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  ulonglong local_1a0;
  wchar_t *local_198;
  ulonglong local_190;
  undefined2 *local_188;
  undefined8 local_180;
  wchar_t *local_178;
  ulonglong local_170;
  wchar_t *local_168;
  ulonglong local_160;
  wchar_t *local_158;
  ulonglong local_150;
  wchar_t *local_148;
  ulonglong local_140;
  wchar_t *local_138;
  ulonglong local_130;
  wchar_t *local_128;
  ulonglong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  void *local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  
  plVar24 = param_1 + 0x50;
  plVar10 = (longlong *)*plVar24;
  iVar19 = (int)param_1[0x51];
  iVar5 = *(int *)((longlong)param_1 + 0x28c);
  local_res20 = plVar24;
  if (iVar5 < 0) {
    if (iVar19 != 0) {
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 2;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0x28c);
    }
    *(undefined4 *)(param_1 + 0x51) = 0;
    if (iVar5 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar24,0);
    }
  }
  else {
    for (; iVar19 != 0; iVar19 = iVar19 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    *(undefined4 *)(param_1 + 0x51) = 0;
  }
  pwVar16 = (wchar_t *)0x0;
  lVar6 = FUN_142b45e90();
  uVar8 = *(undefined8 *)(lVar6 + 0x18);
  pcVar7 = (code *)FUN_140d3b170();
  local_1e8 = pcVar7;
  FOnlineSubsystemEOS::GetLeaderboardsInterface(uVar8,&local_58);
  uVar15 = 0;
  if (local_58 != 0) {
    TBaseMulticastDelegate<void>::Remove(local_58 + 0x18,param_1[0x4c]);
    param_1[0x4c] = 0;
    local_res18 = FUN_140953d20(local_58);
    local_res10[0] = 0;
    pwVar17 = pwVar16;
    iVar19 = local_res18;
    if (0 < local_res18) {
      do {
        local_118 = 0;
        local_110 = 0;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = (longlong *)0x0;
        local_e0 = 0;
        local_d8 = (longlong *)0x0;
        local_d0 = 0;
        local_c8 = (void *)0x0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        cVar4 = FUN_142b46080(local_58,pwVar17,&local_118);
        puVar3 = PTR_u_oakasset__14629aab0;
        uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
        uVar25 = (uint)pwVar17;
        if (cVar4 != '\0') {
          if (1 < (int)local_e0) {
            local_208 = (wchar_t *)0x0;
            local_200 = 0;
            local_178 = (wchar_t *)0x0;
            local_170 = 0;
            pwVar17 = pwVar16;
            pwVar23 = pwVar16;
            if ((PTR_u_oakasset__14629aab0 == (undefined *)0x0) ||
               (*(short *)PTR_u_oakasset__14629aab0 == 0)) {
LAB_140d454f6:
              uVar25 = (uint)pwVar17;
              pwVar14 = L"";
            }
            else {
              lVar6 = -1;
              do {
                lVar18 = lVar6 * 2;
                lVar6 = lVar6 + 1;
              } while (*(short *)(PTR_u_oakasset__14629aab0 + lVar18 + 2) != 0);
              uVar20 = (int)lVar6 + 1;
              local_170 = (ulonglong)uVar20;
              uVar25 = uVar20;
              if (0 < (int)uVar20) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
                uVar25 = (uint)local_170;
              }
              pwVar14 = local_178;
              pwVar17 = (wchar_t *)(ulonglong)uVar25;
              FGenericPlatformString::Memcpy(local_178,puVar3,(longlong)(int)uVar20 * 2);
              pwVar23 = pwVar14;
              if (uVar25 == 0) goto LAB_140d454f6;
            }
            in_stack_fffffffffffffdd8 = CONCAT44(uVar26,0xffffffff);
            iVar19 = FUN_141592950(&local_e8,pwVar14,1,0,in_stack_fffffffffffffdd8);
            if (iVar19 < 0) {
              bVar2 = false;
            }
            else {
              uVar20 = uVar15;
              if (uVar25 != 0) {
                uVar20 = uVar25 - 1;
              }
              uVar20 = iVar19 + uVar20;
              uVar25 = uVar20 + 0x7fffffff;
              uVar12 = (int)local_e0 - 1;
              if ((int)local_e0 == 0) {
                uVar12 = uVar15;
              }
              if (uVar20 < uVar12) {
                uVar12 = uVar20;
              }
              uVar20 = uVar15;
              if ((int)local_e0 != 0) {
                uVar20 = (int)local_e0 - 1;
              }
              uVar21 = uVar12;
              if ((uVar12 <= uVar25) && (uVar21 = uVar20, uVar25 < uVar20)) {
                uVar21 = uVar25;
              }
              local_1c8 = (wchar_t *)0x0;
              local_1d8 = (longlong *)&DAT_143f3eda8;
              if ((int)local_e0 != 0) {
                local_1d8 = local_e8;
              }
              iVar19 = uVar21 - uVar12;
              pwVar17 = (wchar_t *)(ulonglong)(iVar19 + 1);
              if (iVar19 == 0) {
                pwVar17 = pwVar16;
              }
              iVar5 = (int)pwVar17;
              local_1c0._4_4_ = 0;
              pwVar17 = pwVar16;
              uVar25 = uVar15;
              local_1c0._0_4_ = iVar5;
              if ((0 < iVar5) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0),
                 uVar25 = local_1c0._4_4_, iVar5 = (int)local_1c0, pwVar17 = local_1c8,
                 0 < (int)local_1c0)) {
                wcsncpy(local_1c8,(wchar_t *)((longlong)local_1d8 + (longlong)(int)uVar12 * 2),
                        (longlong)iVar19);
                pwVar17[iVar19] = L'\0';
              }
              if (local_208 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              bVar2 = true;
              local_1c8 = (wchar_t *)0x0;
              local_200 = CONCAT44(uVar25,iVar5);
              local_1c0 = 0;
              plVar24 = local_res20;
              local_208 = pwVar17;
            }
            if (pwVar23 != (wchar_t *)0x0) {
              FMemory::Free(pwVar23);
            }
            puVar3 = PTR_u_frame__14629aab8;
            uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
            if (bVar2) {
              local_168 = (wchar_t *)0x0;
              local_160 = 0;
              pwVar17 = pwVar16;
              pwVar23 = pwVar16;
              if ((PTR_u_frame__14629aab8 == (undefined *)0x0) ||
                 (*(short *)PTR_u_frame__14629aab8 == 0)) {
LAB_140d45693:
                uVar25 = (uint)pwVar17;
                pwVar14 = L"";
              }
              else {
                lVar6 = -1;
                do {
                  lVar18 = lVar6 * 2;
                  lVar6 = lVar6 + 1;
                } while (*(short *)(PTR_u_frame__14629aab8 + lVar18 + 2) != 0);
                uVar20 = (int)lVar6 + 1;
                local_160 = (ulonglong)uVar20;
                uVar25 = uVar20;
                if (0 < (int)uVar20) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
                  uVar25 = (uint)local_160;
                }
                pwVar14 = local_168;
                pwVar17 = (wchar_t *)(ulonglong)uVar25;
                FGenericPlatformString::Memcpy(local_168,puVar3,(longlong)(int)uVar20 * 2);
                pwVar23 = pwVar14;
                if (uVar25 == 0) goto LAB_140d45693;
              }
              in_stack_fffffffffffffdd8 = CONCAT44(uVar26,0xffffffff);
              iVar5 = FUN_141592950(&local_208,pwVar14,1,0,in_stack_fffffffffffffdd8);
              pwVar17 = pwVar16;
              iVar19 = (int)local_200;
              if (iVar5 < 0) {
                bVar2 = false;
              }
              else {
                pwVar14 = pwVar16;
                if (uVar25 != 0) {
                  pwVar14 = (wchar_t *)(ulonglong)(uVar25 - 1);
                }
                uVar12 = iVar5 + (int)pwVar14;
                uVar25 = uVar12 + 0x7fffffff;
                uVar20 = (int)local_200 - 1;
                if ((int)local_200 == 0) {
                  uVar20 = uVar15;
                }
                if (uVar12 < uVar20) {
                  uVar20 = uVar12;
                }
                uVar12 = (int)local_200 - 1;
                if ((int)local_200 == 0) {
                  uVar12 = uVar15;
                }
                uVar21 = uVar20;
                if ((uVar20 <= uVar25) && (uVar21 = uVar12, uVar25 < uVar12)) {
                  uVar21 = uVar25;
                }
                local_1a8 = (wchar_t *)0x0;
                pwVar14 = L"";
                if ((int)local_200 != 0) {
                  pwVar14 = local_208;
                }
                iVar5 = uVar21 - uVar20;
                uVar25 = iVar5 + 1;
                if (iVar5 == 0) {
                  uVar25 = uVar15;
                }
                local_1a0 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
                  pwVar17 = local_1a8;
                  iVar19 = (int)local_200;
                  if (0 < (int)local_1a0) {
                    wcsncpy(local_1a8,pwVar14 + (int)uVar20,(longlong)iVar5);
                    pwVar17[iVar5] = L'\0';
                    iVar19 = (int)local_200;
                  }
                }
                local_1a8 = (wchar_t *)0x0;
                bVar2 = true;
                local_1a0 = 0;
              }
              if (pwVar23 != (wchar_t *)0x0) {
                FMemory::Free(pwVar23);
                iVar19 = (int)local_200;
              }
              uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
              if (!bVar2) {
                pwVar23 = L"";
                if (iVar19 != 0) {
                  pwVar23 = local_208;
                }
                uVar8 = UTexture2D::GetPrivateStaticClass();
                in_stack_fffffffffffffde0 = 0;
                in_stack_fffffffffffffdd8 = CONCAT44(uVar26,2);
                lVar6 = FUN_141799c90(uVar8,0,pwVar23,0,in_stack_fffffffffffffdd8,0,1);
                if ((lVar6 != 0) && (local_1e8 != (code *)0x0)) {
                  FUN_1404c4000(local_1e8,&local_e8,2);
                }
              }
              if (pwVar17 != (wchar_t *)0x0) {
                FMemory::Free(pwVar17);
              }
            }
            else {
              puVar9 = (undefined8 *)*plVar24;
              lVar6 = plVar24[1];
              for (puVar22 = puVar9; puVar22 != puVar9 + (longlong)(int)lVar6 * 2;
                  puVar22 = puVar22 + 2) {
                plVar10 = (longlong *)&DAT_143f3eda8;
                if ((int)local_e0 != 0) {
                  plVar10 = local_e8;
                }
                if (*(int *)(puVar22 + 1) == 0) {
                  puVar13 = &DAT_143f3eda8;
                }
                else {
                  puVar13 = (undefined2 *)*puVar22;
                }
                iVar19 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,plVar10);
                if (iVar19 == 0) {
                  if ((int)((longlong)puVar22 - (longlong)puVar9 >> 4) != -1) goto LAB_140d458ad;
                  break;
                }
              }
              iVar19 = (int)plVar24[1];
              *(int *)(plVar24 + 1) = iVar19 + 1;
              if (*(int *)((longlong)plVar24 + 0xc) < iVar19 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar24,iVar19);
              }
              plVar10 = local_e8;
              puVar9 = (undefined8 *)((longlong)iVar19 * 0x10 + *plVar24);
              *puVar9 = 0;
              lVar6 = (longlong)(int)local_e0;
              *(int *)(puVar9 + 1) = (int)local_e0;
              if ((int)local_e0 == 0) {
                *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,local_e0 & 0xffffffff,0);
                _guard_xfg_dispatch_icall_nop((void *)*puVar9,plVar10,lVar6 * 2);
              }
            }
LAB_140d458ad:
            if (local_208 != (wchar_t *)0x0) {
              FMemory::Free();
            }
          }
          puVar3 = PTR_u_oakasset__14629aab0;
          uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
          if (1 < (int)local_d0) {
            local_1f8 = (wchar_t *)0x0;
            local_1f0 = 0;
            local_158 = (wchar_t *)0x0;
            local_150 = 0;
            pwVar17 = pwVar16;
            pwVar23 = pwVar16;
            if ((PTR_u_oakasset__14629aab0 == (undefined *)0x0) ||
               (*(short *)PTR_u_oakasset__14629aab0 == 0)) {
LAB_140d45943:
              uVar25 = (uint)pwVar17;
              pwVar14 = L"";
            }
            else {
              lVar6 = -1;
              do {
                lVar18 = lVar6 * 2;
                lVar6 = lVar6 + 1;
              } while (*(short *)(PTR_u_oakasset__14629aab0 + lVar18 + 2) != 0);
              uVar20 = (int)lVar6 + 1;
              local_150 = (ulonglong)uVar20;
              uVar25 = uVar20;
              if (0 < (int)uVar20) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
                uVar25 = (uint)local_150;
              }
              pwVar14 = local_158;
              pwVar17 = (wchar_t *)(ulonglong)uVar25;
              FGenericPlatformString::Memcpy(local_158,puVar3,(longlong)(int)uVar20 * 2);
              pwVar23 = pwVar14;
              if (uVar25 == 0) goto LAB_140d45943;
            }
            in_stack_fffffffffffffdd8 = CONCAT44(uVar26,0xffffffff);
            iVar19 = FUN_141592950(&local_d8,pwVar14,1,0,in_stack_fffffffffffffdd8);
            if (iVar19 < 0) {
              bVar2 = false;
            }
            else {
              uVar20 = uVar15;
              if (uVar25 != 0) {
                uVar20 = uVar25 - 1;
              }
              uVar20 = iVar19 + uVar20;
              uVar25 = uVar20 + 0x7fffffff;
              uVar12 = (int)local_d0 - 1;
              if ((int)local_d0 == 0) {
                uVar12 = uVar15;
              }
              if (uVar20 < uVar12) {
                uVar12 = uVar20;
              }
              uVar20 = uVar15;
              if ((int)local_d0 != 0) {
                uVar20 = (int)local_d0 - 1;
              }
              uVar21 = uVar12;
              if ((uVar12 <= uVar25) && (uVar21 = uVar20, uVar25 < uVar20)) {
                uVar21 = uVar25;
              }
              local_1b8 = (wchar_t *)0x0;
              local_1d8 = (longlong *)&DAT_143f3eda8;
              if ((int)local_d0 != 0) {
                local_1d8 = local_d8;
              }
              iVar19 = uVar21 - uVar12;
              pwVar17 = (wchar_t *)(ulonglong)(iVar19 + 1);
              if (iVar19 == 0) {
                pwVar17 = pwVar16;
              }
              iVar5 = (int)pwVar17;
              local_1b0._4_4_ = 0;
              pwVar17 = pwVar16;
              uVar25 = uVar15;
              local_1b0._0_4_ = iVar5;
              if ((0 < iVar5) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0),
                 uVar25 = local_1b0._4_4_, iVar5 = (int)local_1b0, pwVar17 = local_1b8,
                 0 < (int)local_1b0)) {
                wcsncpy(local_1b8,(wchar_t *)((longlong)local_1d8 + (longlong)(int)uVar12 * 2),
                        (longlong)iVar19);
                pwVar17[iVar19] = L'\0';
              }
              if (local_1f8 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              bVar2 = true;
              local_1b8 = (wchar_t *)0x0;
              local_1f0 = CONCAT44(uVar25,iVar5);
              local_1b0 = 0;
              local_1f8 = pwVar17;
            }
            if (pwVar23 != (wchar_t *)0x0) {
              FMemory::Free(pwVar23);
            }
            plVar24 = local_res20;
            puVar3 = PTR_u_frame__14629aab8;
            uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
            if (bVar2) {
              local_148 = (wchar_t *)0x0;
              local_140 = 0;
              pwVar17 = pwVar16;
              pwVar23 = pwVar16;
              if ((PTR_u_frame__14629aab8 == (undefined *)0x0) ||
                 (*(short *)PTR_u_frame__14629aab8 == 0)) {
LAB_140d45ad4:
                uVar25 = (uint)pwVar17;
                pwVar14 = L"";
              }
              else {
                lVar6 = -1;
                do {
                  lVar18 = lVar6 * 2;
                  lVar6 = lVar6 + 1;
                } while (*(short *)(PTR_u_frame__14629aab8 + lVar18 + 2) != 0);
                uVar20 = (int)lVar6 + 1;
                local_140 = (ulonglong)uVar20;
                uVar25 = uVar20;
                if (0 < (int)uVar20) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
                  uVar25 = (uint)local_140;
                }
                pwVar14 = local_148;
                pwVar17 = (wchar_t *)(ulonglong)uVar25;
                FGenericPlatformString::Memcpy(local_148,puVar3,(longlong)(int)uVar20 * 2);
                pwVar23 = pwVar14;
                if (uVar25 == 0) goto LAB_140d45ad4;
              }
              in_stack_fffffffffffffdd8 = CONCAT44(uVar26,0xffffffff);
              iVar5 = FUN_141592950(&local_1f8,pwVar14,1,0,in_stack_fffffffffffffdd8);
              pwVar17 = pwVar16;
              iVar19 = (int)local_1f0;
              if (iVar5 < 0) {
                bVar2 = false;
              }
              else {
                pwVar14 = pwVar16;
                if (uVar25 != 0) {
                  pwVar14 = (wchar_t *)(ulonglong)(uVar25 - 1);
                }
                uVar12 = iVar5 + (int)pwVar14;
                uVar25 = uVar12 + 0x7fffffff;
                uVar20 = (int)local_1f0 - 1;
                if ((int)local_1f0 == 0) {
                  uVar20 = uVar15;
                }
                if (uVar12 < uVar20) {
                  uVar20 = uVar12;
                }
                uVar12 = (int)local_1f0 - 1;
                if ((int)local_1f0 == 0) {
                  uVar12 = uVar15;
                }
                uVar21 = uVar20;
                if ((uVar20 <= uVar25) && (uVar21 = uVar12, uVar25 < uVar12)) {
                  uVar21 = uVar25;
                }
                local_198 = (wchar_t *)0x0;
                pwVar14 = L"";
                if ((int)local_1f0 != 0) {
                  pwVar14 = local_1f8;
                }
                iVar5 = uVar21 - uVar20;
                uVar25 = iVar5 + 1;
                if (iVar5 == 0) {
                  uVar25 = uVar15;
                }
                local_190 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
                  pwVar17 = local_198;
                  iVar19 = (int)local_1f0;
                  if (0 < (int)local_190) {
                    wcsncpy(local_198,pwVar14 + (int)uVar20,(longlong)iVar5);
                    pwVar17[iVar5] = L'\0';
                    iVar19 = (int)local_1f0;
                  }
                }
                local_198 = (wchar_t *)0x0;
                bVar2 = true;
                local_190 = 0;
              }
              if (pwVar23 != (wchar_t *)0x0) {
                FMemory::Free(pwVar23);
                iVar19 = (int)local_1f0;
              }
              uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
              if (!bVar2) {
                pwVar23 = L"";
                if (iVar19 != 0) {
                  pwVar23 = local_1f8;
                }
                uVar8 = UTexture2D::GetPrivateStaticClass();
                in_stack_fffffffffffffde0 = 0;
                in_stack_fffffffffffffdd8 = CONCAT44(uVar26,2);
                lVar6 = FUN_141799c90(uVar8,0,pwVar23,0,in_stack_fffffffffffffdd8,0,1);
                if ((lVar6 != 0) && (local_1e8 != (code *)0x0)) {
                  FUN_1404c4000(local_1e8,&local_d8,2);
                }
              }
              if (pwVar17 != (wchar_t *)0x0) {
                FMemory::Free(pwVar17);
              }
            }
            else {
              puVar9 = (undefined8 *)*local_res20;
              lVar6 = local_res20[1];
              for (puVar22 = puVar9; puVar22 != puVar9 + (longlong)(int)lVar6 * 2;
                  puVar22 = puVar22 + 2) {
                plVar10 = (longlong *)&DAT_143f3eda8;
                if ((int)local_d0 != 0) {
                  plVar10 = local_d8;
                }
                if (*(int *)(puVar22 + 1) == 0) {
                  puVar13 = &DAT_143f3eda8;
                }
                else {
                  puVar13 = (undefined2 *)*puVar22;
                }
                iVar19 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,plVar10);
                if (iVar19 == 0) {
                  if ((int)((longlong)puVar22 - (longlong)puVar9 >> 4) != -1) goto LAB_140d45ce9;
                  break;
                }
              }
              iVar19 = (int)plVar24[1];
              *(int *)(plVar24 + 1) = iVar19 + 1;
              if (*(int *)((longlong)plVar24 + 0xc) < iVar19 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar24,iVar19);
              }
              plVar10 = local_d8;
              puVar9 = (undefined8 *)((longlong)iVar19 * 0x10 + *plVar24);
              *puVar9 = 0;
              lVar6 = (longlong)(int)local_d0;
              *(int *)(puVar9 + 1) = (int)local_d0;
              if ((int)local_d0 == 0) {
                *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,local_d0 & 0xffffffff,0);
                _guard_xfg_dispatch_icall_nop((void *)*puVar9,plVar10,lVar6 * 2);
              }
            }
LAB_140d45ce9:
            if (local_1f8 != (wchar_t *)0x0) {
              FMemory::Free();
            }
          }
          puVar3 = PTR_u_oakasset__14629aab0;
          uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
          plVar24 = local_res20;
          uVar25 = local_res10[0];
          iVar19 = local_res18;
          if (1 < (int)local_c0) {
            local_188 = (undefined2 *)0x0;
            local_180 = 0;
            local_138 = (wchar_t *)0x0;
            local_130 = 0;
            pwVar17 = pwVar16;
            if ((PTR_u_oakasset__14629aab0 != (undefined *)0x0) &&
               (*(short *)PTR_u_oakasset__14629aab0 != 0)) {
              lVar6 = -1;
              do {
                lVar18 = lVar6 * 2;
                lVar6 = lVar6 + 1;
              } while (*(short *)(PTR_u_oakasset__14629aab0 + lVar18 + 2) != 0);
              uVar25 = (int)lVar6 + 1;
              local_130 = (ulonglong)uVar25;
              if (0 < (int)uVar25) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
              }
              pwVar17 = local_138;
              FGenericPlatformString::Memcpy(local_138,puVar3,(longlong)(int)uVar25 * 2);
            }
            in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffff00000000;
            in_stack_fffffffffffffdd8 = CONCAT44(uVar26,1);
            cVar4 = FUN_1404e14f0(&local_c8,&local_138,0,&local_188,in_stack_fffffffffffffdd8,
                                  in_stack_fffffffffffffde0);
            if (pwVar17 != (wchar_t *)0x0) {
              FMemory::Free(pwVar17);
            }
            plVar24 = local_res20;
            puVar3 = PTR_u_frame__14629aab8;
            uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
            if (cVar4 == '\0') {
              iVar19 = TArray<FString,FDefaultAllocator>::Find(local_res20,&local_c8);
              if (iVar19 == -1) {
                iVar19 = (int)plVar24[1];
                *(int *)(plVar24 + 1) = iVar19 + 1;
                if (*(int *)((longlong)plVar24 + 0xc) < iVar19 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar24,iVar19);
                }
                _Src = local_c8;
                puVar9 = (undefined8 *)((longlong)iVar19 * 0x10 + *plVar24);
                *puVar9 = 0;
                lVar6 = (longlong)(int)local_c0;
                *(int *)(puVar9 + 1) = (int)local_c0;
                if ((int)local_c0 == 0) {
                  *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,local_c0 & 0xffffffff,0);
                  _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,lVar6 * 2);
                }
              }
            }
            else {
              local_68 = 0;
              local_60 = 0;
              local_128 = (wchar_t *)0x0;
              local_120 = 0;
              pwVar17 = pwVar16;
              if ((PTR_u_frame__14629aab8 != (undefined *)0x0) &&
                 (*(short *)PTR_u_frame__14629aab8 != 0)) {
                lVar6 = -1;
                do {
                  lVar18 = lVar6 * 2;
                  lVar6 = lVar6 + 1;
                } while (*(short *)(PTR_u_frame__14629aab8 + lVar18 + 2) != 0);
                uVar25 = (int)lVar6 + 1;
                local_120 = (ulonglong)uVar25;
                if (0 < (int)uVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
                }
                pwVar17 = local_128;
                FGenericPlatformString::Memcpy(local_128,puVar3,(longlong)(int)uVar25 * 2);
              }
              in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffff00000000;
              in_stack_fffffffffffffdd8 = CONCAT44(uVar26,1);
              cVar4 = FUN_1404e14f0(&local_188,&local_128,0,&local_68,in_stack_fffffffffffffdd8,
                                    in_stack_fffffffffffffde0);
              if (pwVar17 != (wchar_t *)0x0) {
                FMemory::Free(pwVar17);
              }
              if (cVar4 == '\0') {
                in_stack_fffffffffffffdd8 = 0;
                puVar13 = &DAT_143f3eda8;
                if ((int)local_180 != 0) {
                  puVar13 = local_188;
                }
                lVar6 = LoadObject<UTexture2D>(0,puVar13,0,2,0);
                if ((lVar6 != 0) && (local_1e8 != (code *)0x0)) {
                  FUN_1404c4000(local_1e8,&local_c8,2);
                }
              }
              plVar24 = local_res20;
              if (local_68 != 0) {
                FMemory::Free();
                plVar24 = local_res20;
              }
            }
            uVar25 = local_res10[0];
            iVar19 = local_res18;
            if (local_188 != (undefined2 *)0x0) {
              FMemory::Free();
              uVar25 = local_res10[0];
              iVar19 = local_res18;
            }
          }
        }
        TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
        ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(&local_78);
        if (local_88 != 0) {
          FMemory::Free();
        }
        TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_98);
        if (local_a8 != 0) {
          FMemory::Free();
        }
        if (local_b8 != 0) {
          FMemory::Free();
        }
        if (local_c8 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_f8 != 0) {
          FMemory::Free();
        }
        if (local_108 != 0) {
          FMemory::Free();
        }
        if (local_118 != 0) {
          FMemory::Free();
        }
        local_res10[0] = uVar25 + 1;
        pwVar17 = (wchar_t *)(ulonglong)local_res10[0];
        pcVar7 = local_1e8;
      } while ((int)local_res10[0] < iVar19);
    }
  }
  if (pcVar7 == (code *)0x0) {
    FUN_140d4b2c0(plVar24,0);
    (**(code **)(*param_1 + 0xb8))(param_1,0);
    goto LAB_140d46195;
  }
  if ((int)param_1[0x51] < 1) {
    (**(code **)(*param_1 + 0xb8))(param_1,0);
    FUN_1404c6de0(pcVar7,1,plVar24);
    goto LAB_140d46195;
  }
  uStack_1e0._0_4_ = 0;
  local_1e8 = FUN_140d403f0;
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  puVar9 = (undefined8 *)operator_new(0x30,&local_1d8);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_GetPoolName_143f77ac8;
    *(undefined4 *)(puVar9 + 2) = (undefined4)local_1e8;
    *(undefined4 *)((longlong)puVar9 + 0x14) = local_1e8._4_4_;
    *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_1e0;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_1e0._4_4_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar9[5] = uVar8;
    *puVar9 = &PTR_GetPoolName_143f77b10;
  }
  plVar10 = (longlong *)(**(code **)(*(longlong *)pcVar7 + 0x48))(pcVar7,local_res10,&local_1d8);
  param_1[0x52] = *plVar10;
  if (local_1d0 == 0) {
LAB_140d46101:
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
  }
  else if (local_1d8 != (longlong *)0x0) {
    (**(code **)(*local_1d8 + 0x28))(local_1d8,0);
    if (local_1d8 != (longlong *)0x0) {
      local_1d8 = (longlong *)FMemory::Realloc(local_1d8,0,0);
    }
    local_1d0 = 0;
    goto LAB_140d46101;
  }
  lVar6 = *plVar24;
  lVar18 = lVar6 + (longlong)(int)plVar24[1] * 0x10;
  for (; lVar6 != lVar18; lVar6 = lVar6 + 0x10) {
    lVar11 = FUN_1404cd290(pcVar7,lVar6);
    if (lVar11 == 0) {
      FUN_1404df320(pcVar7,lVar6,2);
    }
  }
  FUN_1404c6de0(pcVar7,1,plVar24);
LAB_140d46195:
  uStack_1e0 = (longlong *)0x0;
  if (param_1 + 0x4d != &local_1e8) {
    param_1[0x4d] = 0;
    local_1e8 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4e,&uStack_1e0);
    plVar24 = uStack_1e0;
    if (uStack_1e0 != (longlong *)0x0) {
      LOCK();
      plVar10 = uStack_1e0 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*uStack_1e0)(uStack_1e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*uStack_1e0 + 8))(uStack_1e0,1);
        }
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_50 + 1;
    lVar6 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 140d46270 FUN_140d46270 body=1128 status=ok
// SIG undefined FUN_140d46270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140d46270(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined **ppuVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined **local_100;
  undefined **ppuStack_f8;
  longlong local_f0 [2];
  int local_e0;
  uint uStack_dc;
  uint *puStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  int local_88;
  int local_84;
  longlong local_80;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar10 = *(int *)(param_1 + 0x310) - *(int *)(param_1 + 0x33c);
  if (*(int *)(param_1 + 0x358) < iVar10) {
    plVar3 = (longlong *)(param_1 + 0x308);
    local_80 = param_1;
    do {
      uVar4 = *(uint *)(param_1 + 0x330);
      local_108 = &PTR_FUN_143f740c8;
      local_f0[0] = 0;
      puVar1 = (uint *)(param_1 + 0x318);
      local_f0[1] = 0;
      local_e0 = 0;
      uVar14 = 0xffffffff;
      uStack_dc = 1;
      uStack_cc = 0;
      iStack_c8 = 0;
      local_100 = (undefined **)0x0;
      ppuStack_f8 = (undefined **)0x0;
      if (uVar4 != 0) {
        puVar16 = *(uint **)(param_1 + 0x328);
        if (*(uint **)(param_1 + 0x328) == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar12 = *puVar16;
        iStack_c8 = 0;
        local_e0 = 0;
        while (uVar12 == 0) {
          lVar13 = (longlong)local_e0;
          iStack_c8 = iStack_c8 + 0x20;
          iVar10 = local_e0 + 1;
          bVar8 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_e0;
          local_e0 = iVar10;
          if (bVar8) goto LAB_140d46392;
          uVar12 = puVar16[lVar13 + 1];
        }
        uStack_dc = -uVar12 & uVar12;
        local_88 = 0x1f;
        if (uStack_dc != 0) {
          for (; uStack_dc >> local_88 == 0; local_88 = local_88 + -1) {
          }
        }
        if (uStack_dc == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - local_88;
        }
        uStack_cc = (iStack_c8 - iVar10) + 0x1f;
        if ((int)uVar4 < (int)uStack_cc) {
LAB_140d46392:
          uStack_cc = uVar4;
        }
      }
      local_d0 = 0xffffffff;
      uStack_9c = *(uint *)(param_1 + 0x330);
      uStack_a8 = CONCAT44(uStack_dc,local_e0);
      uStack_60 = 0xffffffff;
      uStack_5c = uStack_cc;
      uStack_90 = CONCAT44(uStack_c4,iStack_c8);
      local_b0 = (int)uStack_9c >> 5;
      uStack_ac = (undefined4)((ulonglong)plVar3 >> 0x20);
      uStack_a0 = -1 << ((byte)uStack_9c & 0x1f);
      uStack_98 = uStack_9c & 0xffffffe0;
      uStack_94 = uStack_cc;
      iStack_70 = local_e0;
      uStack_6c = uStack_dc;
      puStack_d8 = puVar1;
      local_68 = puVar1;
      local_58 = uStack_90;
      plVar11 = plVar3;
      uVar12 = uStack_9c;
      if (uStack_9c != uVar4) {
        puVar16 = *(uint **)(param_1 + 0x328);
        if (*(uint **)(param_1 + 0x328) == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar12 = puVar16[local_b0] & uStack_a0;
        while (uVar12 == 0) {
          lVar13 = (longlong)local_b0;
          uStack_98 = uStack_98 + 0x20;
          iVar10 = local_b0 + 1;
          bVar8 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b0;
          local_b0 = iVar10;
          if (bVar8) goto LAB_140d4647d;
          uVar12 = puVar16[lVar13 + 1];
          uStack_a0 = 0xffffffff;
        }
        uVar12 = -uVar12 & uVar12;
        local_84 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> local_84 == 0; local_84 = local_84 + -1) {
          }
        }
        if (uVar12 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - local_84;
        }
        uStack_9c = (uStack_98 - iVar10) + 0x1f;
        uVar12 = uStack_9c;
        if ((int)uVar4 < (int)uStack_9c) {
LAB_140d4647d:
          uStack_9c = uVar4;
          uVar12 = uVar4;
        }
      }
      while (((lVar13 = local_80, local_78 = plVar11, uStack_5c != uVar12 || (local_68 != puVar1))
             || (plVar11 != plVar3))) {
        pppuVar15 = (undefined ***)((longlong)(int)uStack_5c * 0x40 + *plVar11);
        plVar11 = (longlong *)FDateTime::Now(local_50);
        ppuVar9 = ppuStack_f8;
        lVar13 = (*plVar11 - (longlong)pppuVar15[6]) % 864000000000;
        iVar10 = 0x23 - (int)((*plVar11 - (longlong)pppuVar15[6]) / 864000000000);
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        if ((uint)(iVar10 + *(int *)(pppuVar15 + 5)) <= uVar14) {
          ppuVar6 = ppuStack_f8;
          if (pppuVar15 != &local_108) {
            ppuVar5 = pppuVar15[1];
            ppuVar6 = pppuVar15[2];
            if (ppuVar6 != (undefined **)0x0) {
              LOCK();
              *(int *)(ppuVar6 + 1) = *(int *)(ppuVar6 + 1) + 1;
              UNLOCK();
            }
            local_c0._0_4_ = SUB84(ppuVar5,0);
            local_40 = (undefined4)local_c0;
            local_c0._4_4_ = (undefined4)((ulonglong)ppuVar5 >> 0x20);
            uStack_3c = local_c0._4_4_;
            uStack_b8._0_4_ = SUB84(ppuVar6,0);
            uStack_38 = (undefined4)uStack_b8;
            uStack_b8._4_4_ = (undefined4)((ulonglong)ppuVar6 >> 0x20);
            uStack_34 = uStack_b8._4_4_;
            local_c0 = local_100;
            uStack_b8 = ppuStack_f8;
            local_100 = ppuVar5;
            if (ppuStack_f8 != (undefined **)0x0) {
              LOCK();
              ppuVar5 = ppuStack_f8 + 1;
              iVar10 = *(int *)ppuVar5;
              *(int *)ppuVar5 = *(int *)ppuVar5 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                puVar7 = (undefined8 *)*ppuStack_f8;
                ppuStack_f8 = ppuVar6;
                (*(code *)*puVar7)(ppuVar9,lVar13);
                LOCK();
                piVar2 = (int *)((longlong)ppuVar9 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                ppuVar6 = ppuStack_f8;
                if (iVar10 == 1) {
                  (**(code **)(*uStack_b8 + 8))(uStack_b8,1);
                  ppuVar6 = ppuStack_f8;
                }
              }
            }
          }
          ppuStack_f8 = ppuVar6;
          TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                    (local_f0,pppuVar15 + 3);
          plVar11 = (longlong *)FDateTime::Now(local_48);
          lVar13 = (*plVar11 - (longlong)pppuVar15[6]) % 864000000000;
          iVar10 = 0x23 - (int)((*plVar11 - (longlong)pppuVar15[6]) / 864000000000);
          if (iVar10 < 1) {
            iVar10 = 0;
          }
          uVar14 = iVar10 + *(int *)(pppuVar15 + 5);
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70,lVar13);
        plVar11 = local_78;
      }
      if (local_100 == (undefined **)0x0) {
LAB_140d4668b:
        if (local_f0[0] != 0) {
          plVar11 = (longlong *)FMemory::Free();
        }
        ppuVar9 = ppuStack_f8;
        if (ppuStack_f8 != (undefined **)0x0) {
          LOCK();
          ppuVar6 = ppuStack_f8 + 1;
          iVar10 = *(int *)ppuVar6;
          *(int *)ppuVar6 = *(int *)ppuVar6 + -1;
          UNLOCK();
          plVar11 = (longlong *)(ulonglong)(iVar10 - 1U);
          if (iVar10 - 1U == 0) {
            plVar11 = (longlong *)(**(code **)*ppuStack_f8)(ppuStack_f8);
            LOCK();
            piVar2 = (int *)((longlong)ppuVar9 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              plVar11 = (longlong *)(**(code **)(*ppuStack_f8 + 8))(ppuStack_f8,1);
            }
          }
        }
        return (ulonglong)plVar11 & 0xffffffffffffff00;
      }
      plVar11 = (longlong *)(**(code **)(*local_100 + 0x20))();
      if ((char)plVar11 == '\0') goto LAB_140d4668b;
      plVar11 = (longlong *)FUN_140d48910(plVar3,&local_108);
      if ((int)plVar11 == 0) goto LAB_140d4668b;
      if (local_f0[0] != 0) {
        FMemory::Free();
      }
      ppuVar9 = ppuStack_f8;
      if (ppuStack_f8 != (undefined **)0x0) {
        LOCK();
        ppuVar6 = ppuStack_f8 + 1;
        iVar10 = *(int *)ppuVar6;
        *(int *)ppuVar6 = *(int *)ppuVar6 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)*ppuStack_f8)(ppuStack_f8);
          LOCK();
          piVar2 = (int *)((longlong)ppuVar9 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*ppuStack_f8 + 8))(ppuStack_f8,1);
          }
        }
      }
      iVar10 = *(int *)(lVar13 + 0x310) - *(int *)(lVar13 + 0x33c);
    } while (*(int *)(lVar13 + 0x358) < iVar10);
  }
  return CONCAT71((uint7)(uint3)((uint)iVar10 >> 8),1);
}



// FUNCTION 140d466e0 FUN_140d466e0 body=598 status=ok
// SIG undefined FUN_140d466e0(void)

void FUN_140d466e0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *_Dst;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [8];
  code *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar2 = (longlong *)FUN_140d3abb0();
  puVar6 = (undefined8 *)0x0;
  if (plVar2 == (longlong *)0x0) {
    _Dst = (undefined8 *)operator_new(400);
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,400);
      FUN_1404bd050(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144510268;
      _Dst[2] = &PTR_LAB_143f74750;
      _Dst[3] = &PTR_FUN_143f74760;
      puVar6 = _Dst;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14686e7b8) &&
       (_Init_thread_header(&DAT_14686e7b8), DAT_14686e7b8 == -1)) {
      FName::FName(&DAT_14686e7b0,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_14686e7b8);
    }
    lVar3 = FModuleManager::GetModulePtr_Internal(DAT_14686e7b0);
    if (lVar3 != 0) {
      FMemFileOut::seekp(lVar3,puVar6);
    }
    plVar2 = (longlong *)FUN_140d3abb0();
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d467b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
  }
  cVar1 = FUN_1404d5240(plVar2);
  lVar3 = *plVar2;
  iStack_30 = 0;
  if (cVar1 != '\0') {
    local_38 = FUN_140d3f9f0;
    local_28 = 0x40d3f9f0;
    uStack_24 = 1;
    uStack_20 = 0;
    uStack_1c = uStack_2c;
    uVar4 = FUN_140d1c110(&local_38,param_1,&local_28);
    plVar2 = (longlong *)(**(code **)(lVar3 + 0x20))(plVar2,local_res10,uVar4);
    param_1[0x1a] = *plVar2;
    if (iStack_30 != 0) {
      if (local_38 == (code *)0x0) {
        return;
      }
      (**(code **)(*(longlong *)local_38 + 0x28))(local_38,0);
      if (local_38 != (code *)0x0) {
        local_38 = (code *)FMemory::Realloc(local_38,0,0);
      }
      iStack_30 = 0;
    }
    if (local_38 == (code *)0x0) {
      return;
    }
    FMemory::Free(local_38);
    return;
  }
  local_38 = FUN_140d3f990;
  local_28 = 0x40d3f990;
  uStack_24 = 1;
  uStack_20 = 0;
  uStack_1c = uStack_2c;
  uVar4 = FUN_140d1c110(&local_38,param_1,&local_28);
  plVar5 = (longlong *)(**(code **)(lVar3 + 0x20))(plVar2,local_res10,uVar4);
  param_1[0x1a] = *plVar5;
  if (iStack_30 != 0) {
    if (local_38 == (code *)0x0) goto LAB_140d4685c;
    (**(code **)(*(longlong *)local_38 + 0x28))(local_38,0);
    if (local_38 != (code *)0x0) {
      local_38 = (code *)FMemory::Realloc(local_38,0,0);
    }
    iStack_30 = 0;
  }
  if (local_38 != (code *)0x0) {
    FMemory::Free(local_38);
  }
LAB_140d4685c:
  FUN_1404dd800(plVar2,0);
  return;
}



// FUNCTION 140d46940 FUN_140d46940 body=864 status=ok
// SIG undefined FUN_140d46940(void)

void FUN_140d46940(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (param_1[0xc] == 0) {
    return;
  }
  FUN_1404cf890(&local_68,0);
  if (local_68 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x40))(param_1,10);
    goto LAB_140d46c37;
  }
  puVar3 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  FUN_1404cf890(&local_78,*puVar3);
  plVar7 = local_78;
  if (local_78 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x40))(param_1,10);
  }
  else {
    local_98 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    local_90 = 2;
    local_98 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)IDelegateInstance::vftable;
      *plVar4 = (longlong)&PTR_GetPoolName_144510b20;
      plVar4[1] = (longlong)param_1;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144510b68;
    }
    plVar4 = (longlong *)(**(code **)(*local_68 + 0x120))(local_68,local_res18,&local_98);
    param_1[0x1d] = *plVar4;
    if (local_90 == 0) {
LAB_140d46a8a:
      if (local_98 != (longlong *)0x0) {
        FMemory::Free(local_98);
      }
    }
    else if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x28))(local_98,0);
      if (local_98 != (longlong *)0x0) {
        local_98 = (longlong *)FMemory::Realloc(local_98,0,0);
      }
      local_90 = 0;
      goto LAB_140d46a8a;
    }
    local_88 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    local_80 = 2;
    local_88 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)IDelegateInstance::vftable;
      *plVar4 = (longlong)&PTR_GetPoolName_144510bb0;
      plVar4[1] = (longlong)param_1;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144510bf8;
    }
    plVar4 = (longlong *)(**(code **)(*plVar7 + 0x120))(plVar7,local_res20,&local_88);
    param_1[0x1e] = *plVar4;
    if (local_80 == 0) {
LAB_140d46b39:
      if (local_88 != (longlong *)0x0) {
        FMemory::Free(local_88);
      }
    }
    else if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x28))(local_88,0);
      if (local_88 != (longlong *)0x0) {
        local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
      }
      local_80 = 0;
      goto LAB_140d46b39;
    }
    lVar5 = *local_68;
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1[0xc] + 8,local_58);
    (**(code **)(lVar5 + 0x118))(local_68,uVar6);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = local_78;
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = local_78;
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          plVar7 = local_78;
        }
      }
    }
    lVar5 = *plVar7;
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1[0xc] + 8,local_48);
    (**(code **)(lVar5 + 0x118))(plVar7,uVar6);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  plVar7 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
LAB_140d46c37:
  plVar7 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140d46ca0 FUN_140d46ca0 body=581 status=ok
// SIG undefined FUN_140d46ca0(void)

void FUN_140d46ca0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  plVar3 = param_1 + 0x56;
  local_48 = (code *)*param_2;
  if (*plVar3 == 0) {
    uStack_40 = (longlong *)param_2[1];
    if (uStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
      UNLOCK();
    }
    lVar8 = 0;
    if (plVar3 != &local_48) {
      *plVar3 = (longlong)local_48;
      local_48 = (code *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x57,&uStack_40);
    }
    plVar3 = uStack_40;
    lVar12 = -1;
    if (uStack_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = uStack_40 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*uStack_40)(uStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*uStack_40 + 8))(uStack_40,1);
        }
      }
    }
    plVar3 = (longlong *)param_1[0xb9];
    local_48 = FUN_140d42020;
    uStack_40 = (longlong *)((ulonglong)uStack_40 & 0xffffffff00000000);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = (longlong)param_1;
      *plVar7 = (longlong)&PTR_GetPoolName_144159a58;
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
      *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_40._4_4_;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_144159aa0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
      plVar9 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
      iVar2 = (int)plVar3[1];
      lVar8 = *plVar9;
      *(int *)(plVar3 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
      }
      puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar3);
      *puVar10 = plVar7;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
    param_1[0x58] = lVar8;
    puVar5 = PTR_u_profile_14629a5b0;
    local_38 = 0;
    local_30 = 0;
    if ((PTR_u_profile_14629a5b0 != (undefined *)0x0) && (*(short *)PTR_u_profile_14629a5b0 != 0)) {
      do {
        lVar12 = lVar12 + 1;
      } while (*(short *)(PTR_u_profile_14629a5b0 + lVar12 * 2) != 0);
      uVar11 = (int)lVar12 + 1;
      local_30 = (ulonglong)uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,puVar5,(longlong)(int)uVar11 * 2);
    }
    FUN_140e8c6f0(param_1[0xb9],param_2,&local_38);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  else {
    cVar6 = (*(code *)**(undefined8 **)local_48)(local_48);
    if (cVar6 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140d46ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd8))(param_1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 140d46ef0 FUN_140d46ef0 body=567 status=ok
// SIG undefined FUN_140d46ef0(void)

void FUN_140d46ef0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar2 = param_1 + 0x60;
  local_38 = (code *)*param_2;
  if (*plVar2 != 0) {
    cVar4 = (*(code *)**(undefined8 **)local_38)(local_38);
    if (cVar4 != '\0') {
      puVar10 = &DAT_143f3eda8;
      if (*(int *)(param_3 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*param_3;
      }
      if ((int)param_1[99] != 0) {
        puVar10 = (undefined2 *)param_1[0x62];
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        return;
      }
    }
    (**(code **)(*param_1 + 0x138))(param_1,param_2,param_3,0,0,2);
    return;
  }
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  lVar7 = 0;
  if (plVar2 != &local_38) {
    *plVar2 = (longlong)local_38;
    local_38 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x61,&uStack_30);
  }
  plVar2 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = uStack_30 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  FString::operator=(param_1 + 0x62,param_3);
  plVar2 = (longlong *)param_1[0xb9];
  local_38 = FUN_140d42400;
  uStack_30 = (longlong *)((ulonglong)uStack_30 & 0xffffffff00000000);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = (longlong)param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_144159a58;
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_30._4_4_;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_144159aa0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    plVar8 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
    iVar5 = (int)plVar2[1];
    lVar7 = *plVar8;
    *(int *)(plVar2 + 1) = iVar5 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar5);
    }
    puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar2);
    *puVar9 = plVar6;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  param_1[100] = lVar7;
  if (param_4 == 0) {
    FUN_140e8c6f0(param_1[0xb9],param_2,param_3);
    return;
  }
  FUN_140e8c830(param_1[0xb9],param_2,param_3,param_4);
  return;
}



// FUNCTION 140d47130 FUN_140d47130 body=1270 status=ok
// SIG undefined FUN_140d47130(void)

/* WARNING: Removing unreachable block (ram,0x000140d47547) */
/* WARNING: Removing unreachable block (ram,0x000140d47555) */
/* WARNING: Removing unreachable block (ram,0x000140d47563) */

void FUN_140d47130(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code *local_88;
  undefined4 uStack_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_50;
  
  plVar11 = (longlong *)param_1[0x65];
  if (plVar11 != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[0x66];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_50 = plVar11;
    if ((int)param_1[0xb0] != *(int *)((longlong)param_1 + 0x5ac)) {
      cVar4 = (**(code **)(*plVar11 + 0x20))();
      if (cVar4 == '\0') {
        iVar5 = -1;
      }
      else {
        iVar5 = GetTypeHash(plVar11);
      }
      plVar6 = (longlong *)param_1[0xb7];
      if ((longlong *)param_1[0xb7] == (longlong *)0x0) {
        plVar6 = param_1 + 0xb6;
      }
      iVar5 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[0xb8] - 1U & (longlong)iVar5) * 4)
      ;
      if (iVar5 != -1) {
        lVar10 = param_1[0xaf];
        do {
          lVar13 = (longlong)iVar5 * 0x40;
          plVar6 = *(longlong **)(lVar13 + 8 + lVar10);
          if ((((plVar6 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar6 + 0x20))(), cVar4 == '\0')) ||
              (plVar11 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar11 + 0x20))(plVar11), cVar4 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          plVar6 = *(longlong **)(lVar13 + lVar10 + 8);
          if ((((plVar6 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar6 + 0x20))(), cVar4 == '\0')) &&
              ((plVar11 == (longlong *)0x0 ||
               (cVar4 = (**(code **)(*plVar11 + 0x20))(plVar11), cVar4 == '\0')))) ||
             ((bVar2 && (cVar4 = (**(code **)*plVar11)(plVar11,*(undefined8 *)(lVar13 + lVar10 + 8))
                        , cVar4 != '\0')))) {
            if (iVar5 != -1) {
              lVar13 = param_1[0xaf] + lVar13;
              goto LAB_140d47296;
            }
            break;
          }
          lVar10 = param_1[0xaf];
          iVar5 = *(int *)(lVar13 + 0x38 + lVar10);
        } while (iVar5 != -1);
      }
    }
    lVar13 = 0;
LAB_140d47296:
    plVar11 = (longlong *)(lVar13 + 0x28);
    if (lVar13 == 0) {
      plVar11 = (longlong *)0x0;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (plVar11 == (longlong *)0x0) {
      uVar9 = 0;
    }
    else {
      iVar5 = (int)param_1[0x6a];
      if ((-1 < iVar5) && (iVar5 < (int)plVar11[1])) {
        if (*(int *)((longlong)iVar5 * 0x1a0 + 0x10 + *plVar11) != 1) {
          local_68 = param_1[0x65];
          local_60 = (longlong *)param_1[0x66];
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          (**(code **)(*param_1 + 0x1b8))(param_1,&local_68,plVar11);
          plVar7 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_60 + 1;
            lVar10 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          lVar10 = *plVar11;
          local_c8 = 0;
          lVar13 = (longlong)(int)plVar11[1] * 0x1a0 + lVar10;
          local_c0 = 0;
          for (; lVar10 != lVar13; lVar10 = lVar10 + 0x1a0) {
            FName::ToString(lVar10 + 0x30,&local_b8);
            FDateTime::ToString(lVar10 + 0x38,&local_a8);
            FUN_141682af0(lVar10 + 400,&local_98,0);
            uVar3 = local_c0;
            lVar12 = (longlong)(int)local_c0;
            iVar5 = (int)local_c0 + 1;
            local_c0 = CONCAT44(local_c0._4_4_,iVar5);
            if (local_c0._4_4_ < iVar5) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_c8,uVar3 & 0xffffffff);
            }
            puVar8 = (undefined8 *)(lVar12 * 0x30 + local_c8);
            *puVar8 = 0;
            *puVar8 = local_b8;
            *(undefined4 *)(puVar8 + 1) = (undefined4)local_b0;
            *(undefined4 *)((longlong)puVar8 + 0xc) = local_b0._4_4_;
            puVar8[2] = 0;
            puVar8[2] = local_a8;
            *(undefined4 *)(puVar8 + 3) = (undefined4)local_a0;
            *(undefined4 *)((longlong)puVar8 + 0x1c) = local_a0._4_4_;
            puVar8[4] = 0;
            puVar8[4] = local_98;
            *(undefined4 *)(puVar8 + 5) = (undefined4)local_90;
            *(undefined4 *)((longlong)puVar8 + 0x2c) = local_90._4_4_;
            local_90 = 0;
            local_98 = 0;
            local_a0 = 0;
            local_a8 = 0;
            local_b0 = 0;
            local_b8 = 0;
          }
          TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 0xbd,&local_c8,1);
          *(int *)(param_1 + 0x6a) = (int)param_1[0x6a] + 1;
          FUN_140d47130(param_1);
          if ((int)local_c0 != 0) {
            plVar11 = (longlong *)(local_c8 + 0x10);
            iVar5 = (int)local_c0;
            do {
              if (plVar11[2] != 0) {
                FMemory::Free();
              }
              if (*plVar11 != 0) {
                FMemory::Free();
              }
              if (plVar11[-2] != 0) {
                FMemory::Free();
              }
              plVar11 = plVar11 + 6;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (local_c8 == 0) {
            return;
          }
          FMemory::Free();
          return;
        }
        local_88 = FUN_140d42690;
        uStack_80 = 0;
        plVar7 = (longlong *)FUN_1408fb470(param_1[0xb9],local_res8,param_1,&local_88);
        lVar13 = param_1[0x6a];
        param_1[0x67] = *plVar7;
        local_78 = param_1[0x65];
        lVar10 = *plVar11;
        local_70 = (longlong *)param_1[0x66];
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        FUN_140e8c6f0(param_1[0xb9],&local_78,(longlong)(int)lVar13 * 0x1a0 + lVar10);
        plVar11 = local_70;
        if (local_70 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar7 = local_70 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 != 1) {
          return;
        }
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar11 + 8))(plVar11,1);
        return;
      }
      uVar9 = 1;
    }
    FUN_140d2cff0(param_1,uVar9);
  }
  return;
}



// FUNCTION 140d47630 FUN_140d47630 body=676 status=ok
// SIG undefined FUN_140d47630(void)

void FUN_140d47630(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
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
  
  iVar8 = *(int *)(param_1 + 0x288) - *(int *)(param_1 + 0x2b4);
  if ((*(char *)(param_1 + 0x2d0) != '\0') || ((0 < iVar8 && (iVar8 != *(int *)(param_1 + 0x278)))))
  {
    plVar1 = (longlong *)(param_1 + 0x270);
    TArray<FString,FDefaultAllocator>::Empty(plVar1);
    uStack_94 = 1;
    plVar2 = (longlong *)(param_1 + 0x280);
    uVar4 = *(uint *)(param_1 + 0x2a8);
    puVar3 = (uint *)(param_1 + 0x290);
    local_98 = 0;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar4 != 0) {
      puVar12 = *(uint **)(param_1 + 0x2a0);
      if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
        puVar12 = puVar3;
      }
      uVar5 = *puVar12;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar5 == 0) {
        lVar10 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar8 = local_98 + 1;
        bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar8;
        if (bVar7) goto LAB_140d4775c;
        uVar5 = puVar12[lVar10 + 1];
      }
      uStack_94 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_84 = (iStack_80 - iVar8) + 0x1f;
      if ((int)uVar4 < (int)uStack_84) {
LAB_140d4775c:
        uStack_84 = uVar4;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x2a8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar11 = uVar5 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar3;
    local_50 = plVar2;
    puStack_40 = puVar3;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar5;
    if (uVar5 != uVar4) {
      puVar12 = *(uint **)(param_1 + 0x2a0);
      if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
        puVar12 = puVar3;
      }
      uVar9 = puVar12[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
      iVar8 = (int)uVar5 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_140d47822;
        uVar9 = puVar12[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_84 = (uVar11 - iVar8) + 0x1f;
      if ((int)uVar4 < (int)uStack_84) {
LAB_140d47822:
        uStack_84 = uVar4;
      }
    }
    while ((lVar10 = (longlong)(int)uStack_5c, uStack_5c != uStack_84 || (local_68 != puVar3))) {
      iVar8 = *(int *)(param_1 + 0x278);
      lVar6 = *plVar2;
      *(int *)(param_1 + 0x278) = iVar8 + 1;
      if (*(int *)(param_1 + 0x27c) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar8);
      }
      FString::FString((longlong)iVar8 * 0x10 + *plVar1,lVar10 * 0x40 + lVar6 + 0x28);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
    *(undefined1 *)(param_1 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 140d478e0 FUN_140d478e0 body=201 status=ok
// SIG undefined FUN_140d478e0(void)

void FUN_140d478e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res18 [2];
  undefined8 local_res20;
  
  plVar3 = (longlong *)FDateTime::Now(local_res18);
  lVar1 = *plVar3;
  cVar2 = FUN_140d46270(param_1);
  if (cVar2 != '\0') {
    FUN_140d2cd70(param_1 + 0x308,local_res18,param_2);
    if ((local_res18[0] == -1) ||
       (lVar4 = (longlong)local_res18[0] * 0x40 + *(longlong *)(param_1 + 0x308), lVar4 == 0)) {
      local_res20 = param_2;
      FUN_140d1ce60(param_1 + 0x308,local_res18,&local_res20,0);
      lVar4 = (longlong)local_res18[0] * 0x40 + *(longlong *)(param_1 + 0x308);
    }
    if (71999999999 < lVar1 - *(longlong *)(lVar4 + 0x30)) {
      *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + 1;
      *(longlong *)(lVar4 + 0x30) = lVar1;
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    FUN_140d46270(param_1);
    return;
  }
  return;
}



// FUNCTION 140d479b0 FUN_140d479b0 body=1190 status=ok
// SIG undefined FUN_140d479b0(void)

/* WARNING: Removing unreachable block (ram,0x000140d47d64) */
/* WARNING: Removing unreachable block (ram,0x000140d47d4f) */
/* WARNING: Removing unreachable block (ram,0x000140d47d88) */

void FUN_140d479b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res20 [8];
  undefined4 uStack_cc;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar7 = 0;
  FUN_1404cf890(&local_78,0);
  if (local_78 != (longlong *)0x0) {
    local_c8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_c0 = 3;
    local_c8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)IDelegateInstance::vftable;
      *plVar4 = (longlong)&PTR_GetPoolName_143f77ac8;
      *(undefined4 *)(plVar4 + 2) = 0x40d410c0;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_cc;
      plVar4[1] = param_1;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f77b10;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_78 + 0x80))(local_78,local_res20,&local_c8);
    *(undefined8 *)(param_1 + 0x1c0) = *puVar6;
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) goto LAB_140d47abf;
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
LAB_140d47abf:
  Online::GetIdentityInterface(&local_88,0);
  if (local_88 != (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_b0 = 3;
    local_b8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)IDelegateInstance::vftable;
      *plVar4 = (longlong)&PTR_GetPoolName_143fc2050;
      *(undefined4 *)(plVar4 + 2) = 0x40d40480;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_cc;
      plVar4[1] = param_1;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143fc2098;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_88 + 0x18))(local_88,local_58,&local_b8);
    *(undefined8 *)(param_1 + 0x1c8) = *puVar6;
    if (local_b0 != 0) {
      if (local_b8 == (longlong *)0x0) goto LAB_140d47b9c;
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
LAB_140d47b9c:
  FUN_1404cdd50(&local_98,0);
  if (local_98 != (longlong *)0x0) {
    local_a8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_a0 = 3;
    local_a8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)IDelegateInstance::vftable;
      *plVar4 = (longlong)&PTR_GetPoolName_143fc2050;
      *(undefined4 *)(plVar4 + 2) = 0x40437760;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      *(undefined4 *)(plVar4 + 3) = 0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_cc;
      plVar4[1] = param_1;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143fc2098;
    }
    puVar6 = (undefined8 *)(**(code **)(*local_98 + 0x1a8))(local_98,local_50,&local_a8);
    *(undefined8 *)(param_1 + 0x240) = *puVar6;
    if (local_a0 != 0) {
      if (local_a8 == (longlong *)0x0) goto LAB_140d47c7c;
      (**(code **)(*local_a8 + 0x28))(local_a8,0);
      if (local_a8 != (longlong *)0x0) {
        local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
      }
      local_a0 = 0;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
LAB_140d47c7c:
  uStack_60 = 0;
  local_68 = FUN_140d43060;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&PTR_GetPoolName_143f77ac8;
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_68._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_60;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_5c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f77b10;
  }
  lVar5 = FUN_142b45e90();
  lVar5 = *(longlong *)(lVar5 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x40,1);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
    iVar3 = *(int *)(lVar5 + 0x48);
    uVar7 = *puVar6;
    *(int *)(lVar5 + 0x48) = iVar3 + 1;
    if (*(int *)(lVar5 + 0x4c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x40,iVar3);
    }
    puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar5 + 0x40));
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  plVar4 = local_90;
  *(undefined8 *)(param_1 + 0x248) = uVar7;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar4 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 140d47e60 FUN_140d47e60 body=618 status=ok
// SIG undefined FUN_140d47e60(void)

void FUN_140d47e60(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar8 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar8;
  }
  uVar7 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar7 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar7) {
      uVar15 = 0;
      uVar16 = (ulonglong)uVar7;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar15;
        uVar15 = uVar15 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar9 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_38;
      }
      uVar7 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        lVar8 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar13 = local_68 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar13;
        if (bVar5) goto LAB_140d47f8f;
        uVar7 = puVar11[lVar8 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      iVar13 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      iStack_54 = (iStack_50 - iVar13) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140d47f8f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar8 = (longlong)iStack_2c * 0x40 + *param_1;
        if (*(longlong **)(lVar8 + 8) == (longlong *)0x0) {
LAB_140d48037:
          uVar7 = 0xffffffff;
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))();
          if (cVar6 == '\0') goto LAB_140d48037;
          plVar14 = *(longlong **)(lVar8 + 8);
          uVar7 = (**(code **)(*plVar14 + 0x18))(plVar14);
          if (uVar7 < 4) {
            pbVar10 = (byte *)(**(code **)(*plVar14 + 0x10))(plVar14);
            uVar7 = (uint)*pbVar10;
          }
          else {
            pcVar4 = *(code **)(*plVar14 + 0x10);
            if (uVar7 < 8) {
              puVar11 = (uint *)(*pcVar4)();
              uVar7 = *puVar11;
            }
            else {
              puVar12 = (undefined8 *)(*pcVar4)(plVar14);
              uVar7 = (int)*puVar12 + (int)((ulonglong)*puVar12 >> 0x20) * 0x17;
            }
          }
        }
        uVar7 = (int)*plVar2 - 1U & uVar7;
        *(uint *)(lVar8 + 0x3c) = uVar7;
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(lVar8 + 0x38) =
             *(undefined4 *)
              ((longlong)plVar14 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar7) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar7) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140d480d0 FUN_140d480d0 body=618 status=ok
// SIG undefined FUN_140d480d0(void)

void FUN_140d480d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar8 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar8;
  }
  uVar7 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar7 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar7) {
      uVar15 = 0;
      uVar16 = (ulonglong)uVar7;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar15;
        uVar15 = uVar15 + 1;
        *(undefined4 *)((longlong)plVar14 + uVar9 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_38;
      }
      uVar7 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        lVar8 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar13 = local_68 + 1;
        bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar13;
        if (bVar5) goto LAB_140d481ff;
        uVar7 = puVar11[lVar8 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      iVar13 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      iStack_54 = (iStack_50 - iVar13) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140d481ff:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar8 = (longlong)iStack_2c * 0x38 + *param_1;
        if (*(longlong **)(lVar8 + 8) == (longlong *)0x0) {
LAB_140d482a7:
          uVar7 = 0xffffffff;
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))();
          if (cVar6 == '\0') goto LAB_140d482a7;
          plVar14 = *(longlong **)(lVar8 + 8);
          uVar7 = (**(code **)(*plVar14 + 0x18))(plVar14);
          if (uVar7 < 4) {
            pbVar10 = (byte *)(**(code **)(*plVar14 + 0x10))(plVar14);
            uVar7 = (uint)*pbVar10;
          }
          else {
            pcVar4 = *(code **)(*plVar14 + 0x10);
            if (uVar7 < 8) {
              puVar11 = (uint *)(*pcVar4)();
              uVar7 = *puVar11;
            }
            else {
              puVar12 = (undefined8 *)(*pcVar4)(plVar14);
              uVar7 = (int)*puVar12 + (int)((ulonglong)*puVar12 >> 0x20) * 0x17;
            }
          }
        }
        uVar7 = (int)*plVar2 - 1U & uVar7;
        *(uint *)(lVar8 + 0x34) = uVar7;
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)(lVar8 + 0x30) =
             *(undefined4 *)
              ((longlong)plVar14 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar7) * 4);
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(int *)((longlong)plVar14 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar7) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140d48340 FUN_140d48340 body=530 status=ok
// SIG undefined FUN_140d48340(void)

void FUN_140d48340(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_140d4847f;
        uVar8 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_140d4847f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x40 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x3c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 7) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140d48570 FUN_140d48570 body=546 status=ok
// SIG undefined FUN_140d48570(void)

void FUN_140d48570(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    plVar9 = *(longlong **)(param_1 + 0x38);
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res18);
    (**(code **)(*plVar9 + 0x30))(plVar9);
    (**(code **)*plVar9)(plVar9,1);
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = TlsGetValue(*pDVar5);
  plVar9 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar9 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar9);
    plVar6 = plVar9;
  }
  plVar9 = (longlong *)plVar6[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)*plVar6;
    if (plVar9 == (longlong *)0x0) {
      lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
      plVar6[1] = lVar7;
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar6[1] = (longlong)puVar8;
        lVar7 = 0x1f;
        do {
          puVar2 = puVar8 + 0x20;
          *puVar8 = puVar2;
          lVar7 = lVar7 + -1;
          puVar8 = puVar2;
        } while (lVar7 != 0);
        *puVar2 = 0;
      }
      plVar9 = (longlong *)plVar6[1];
      iVar10 = 0x20;
      *(undefined4 *)(plVar6 + 2) = 0x20;
    }
    else {
      iVar10 = 0x20;
      plVar6[1] = (longlong)plVar9;
      *(undefined4 *)(plVar6 + 2) = 0x20;
      *plVar6 = 0;
    }
  }
  else {
    iVar10 = (int)plVar6[2];
  }
  plVar6[1] = *plVar9;
  *(int *)(plVar6 + 2) = iVar10 + -1;
  *plVar9 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar9 + 1) = 0xff;
  local_res20 = 0;
  *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
  *plVar9 = (longlong)&PTR_FUN_144510a60;
  *(undefined1 *)(plVar9 + 3) = 0;
  plVar9[4] = 0;
  plVar9[2] = *(longlong *)(param_1 + 0x38);
  lVar7 = plVar9[4];
  piVar1 = (int *)(lVar7 + 0x48);
  if (lVar7 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res10 = lVar7;
  FUN_140445100(plVar9,0,0xff,1,0);
  if (lVar7 != 0) {
    LOCK();
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      FGraphEvent::Recycle(local_res10);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 140d487a0 FUN_140d487a0 body=363 status=ok
// SIG undefined FUN_140d487a0(void)

undefined8 FUN_140d487a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = GetTypeHash(*(undefined8 *)(param_2 + 8));
  }
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar4);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar5 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar6 = (longlong)iVar1 * 0x38 + *param_1;
    cVar3 = FUniqueNetIdWrapper::operator==(lVar6,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar6 + 0x30);
    piVar7 = (int *)(lVar6 + 0x30);
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x38;
    lVar8 = (longlong)(int)(*(uint *)(lVar9 + 0x34 + lVar6) & (int)param_1[9] - 1U);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x30 + lVar6);
        break;
      }
      piVar7 = (int *)((longlong)iVar2 * 0x38 + 0x30 + lVar6);
      iVar2 = *piVar7;
    }
  }
  FUN_1404bf980((longlong)iVar1 * 0x38 + *param_1);
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140d48910 FUN_140d48910 body=366 status=ok
// SIG undefined FUN_140d48910(void)

undefined8 FUN_140d48910(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = GetTypeHash(*(undefined8 *)(param_2 + 8));
  }
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar4);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar5 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar6 = (longlong)iVar1 * 0x40 + *param_1;
    cVar3 = FUniqueNetIdWrapper::operator==(lVar6,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar6 + 0x38);
    piVar7 = (int *)(lVar6 + 0x38);
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x40;
    lVar8 = (longlong)(int)(*(uint *)(lVar9 + 0x3c + lVar6) & (int)param_1[9] - 1U);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x38 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x38 + (longlong)iVar2 * 0x40);
      iVar2 = *piVar7;
    }
  }
  FUN_1404bf980((longlong)iVar1 * 0x40 + *param_1);
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140d48a80 FUN_140d48a80 body=378 status=ok
// SIG undefined FUN_140d48a80(void)

undefined8 FUN_140d48a80(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = GetTypeHash(*(undefined8 *)(param_2 + 8));
  }
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar4);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar5 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar6 = (longlong)iVar1 * 0x40 + *param_1;
    cVar3 = FUniqueNetIdWrapper::operator==(lVar6,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar6 + 0x38);
    piVar7 = (int *)(lVar6 + 0x38);
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x40;
    lVar8 = (longlong)(int)(*(uint *)(lVar9 + 0x3c + lVar6) & (int)param_1[9] - 1U);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x38 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x38 + (longlong)iVar2 * 0x40);
      iVar2 = *piVar7;
    }
  }
  lVar6 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_140d22900(lVar6 + 0x28);
  FUN_1404bf980(lVar6);
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140d48c00 FUN_140d48c00 body=366 status=ok
// SIG undefined FUN_140d48c00(void)

undefined8 FUN_140d48c00(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = GetTypeHash(*(undefined8 *)(param_2 + 8));
  }
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar4);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar7 = (int *)((longlong)plVar5 + lVar6 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar6 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar6 = (longlong)iVar1 * 0x40 + *param_1;
    cVar3 = FUniqueNetIdWrapper::operator==(lVar6,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar6 + 0x38);
    piVar7 = (int *)(lVar6 + 0x38);
  }
  iVar1 = *piVar7;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar9 = (longlong)iVar1 * 0x40;
    lVar8 = (longlong)(int)(*(uint *)(lVar9 + 0x3c + lVar6) & (int)param_1[9] - 1U);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar7 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar7 = *(int *)(lVar9 + 0x38 + lVar6);
        break;
      }
      piVar7 = (int *)(lVar6 + 0x38 + (longlong)iVar2 * 0x40);
      iVar2 = *piVar7;
    }
  }
  FUN_140d23320((longlong)iVar1 * 0x40 + *param_1);
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140d48d70 FUN_140d48d70 body=3328 status=ok
// SIG undefined FUN_140d48d70(void)

ulonglong FUN_140d48d70(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 **ppuVar14;
  char *pcVar15;
  char *pcVar16;
  byte bVar17;
  undefined2 *local_b8;
  ulonglong local_b0;
  undefined2 *local_a8;
  ulonglong local_a0;
  undefined2 *local_98;
  ulonglong local_90;
  undefined2 *local_88;
  ulonglong local_80;
  undefined2 *local_78;
  ulonglong local_70;
  undefined2 *local_68;
  ulonglong local_60;
  undefined2 *local_58;
  ulonglong local_50;
  undefined2 *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  ulonglong local_30;
  
  uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  uVar9 = (ulonglong)uVar2;
  if (((int)uVar2 < DAT_14686e7f8) &&
     (uVar9 = _Init_thread_header(&DAT_14686e7f8), DAT_14686e7f8 == -1)) {
    FName::FName(&DAT_14686e7f0,L"Mission_Ep04_EarnSpaceship_C",1);
    uVar9 = _Init_thread_footer(&DAT_14686e7f8);
  }
  bVar17 = 0;
  if (*(char *)(param_1 + 0x3a2) != '\0') {
    return uVar9 & 0xffffffffffffff00;
  }
  *(undefined1 *)(param_1 + 0x3a2) = 1;
  if (0 < *(int *)(param_1 + 0x158)) {
    pcVar16 = (char *)**(undefined8 **)(param_1 + 0x150);
    pcVar15 = pcVar16 + (longlong)*(int *)(*(undefined8 **)(param_1 + 0x150) + 1) * 0x78;
    if (pcVar16 != pcVar15) {
LAB_140d48e20:
      if ((*pcVar16 == '\x02') && (lVar6 = FUN_140c498b0(pcVar16 + 0x20), lVar6 != 0)) {
        lVar7 = FUN_142f71d80();
        lVar8 = lVar6;
        do {
          if (lVar8 == lVar7) {
            lVar7 = FUN_142f71d80();
            lVar8 = lVar6;
            goto LAB_140d48e60;
          }
          lVar8 = *(longlong *)(lVar8 + 0x30);
        } while (lVar8 != 0);
      }
      goto LAB_140d48e7e;
    }
  }
  goto LAB_140d49092;
  while (lVar8 = *(longlong *)(lVar8 + 0x30), lVar12 = 0, lVar8 != 0) {
LAB_140d48e60:
    lVar12 = lVar6;
    if (lVar8 == lVar7) break;
  }
  if (*(longlong *)(lVar12 + 0x18) == DAT_14686e7f0) {
    local_a8 = (undefined2 *)0x0;
    local_a0 = 0x5c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy
              (local_a8,
               L"/Game/Vehicles/Technical/Design/WT_Technical_AllTerrainWheels.WT_Technical_AllTerrainWheels"
               ,0xb8);
    puVar4 = *(undefined8 **)(param_1 + 400);
    iVar3 = *(int *)(param_1 + 0x198);
    puVar13 = puVar4;
    if (puVar4 == puVar4 + (longlong)iVar3 * 3) goto LAB_140d48f39;
    goto LAB_140d48ee0;
  }
LAB_140d48e7e:
  pcVar16 = pcVar16 + 0x78;
  if (pcVar16 == pcVar15) goto LAB_140d49092;
  goto LAB_140d48e20;
  while (puVar13 = puVar13 + 3, puVar13 != puVar4 + (longlong)iVar3 * 3) {
LAB_140d48ee0:
    puVar11 = &DAT_143f3eda8;
    if ((int)local_a0 != 0) {
      puVar11 = local_a8;
    }
    if (*(int *)(puVar13 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar13;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
    if (iVar5 == 0) {
      if ((int)(((longlong)puVar13 - (longlong)puVar4) / 0x18) != -1) goto LAB_140d48f8a;
      break;
    }
  }
LAB_140d48f39:
  ppuVar14 = (undefined2 **)FUN_140d26f70(param_1 + 400);
  puVar11 = local_a8;
  if (ppuVar14 != &local_a8) {
    lVar6 = (longlong)(int)local_a0;
    *(int *)(ppuVar14 + 1) = (int)local_a0;
    if (((int)local_a0 == 0) && (*(int *)((longlong)ppuVar14 + 0xc) == 0)) {
      *(undefined4 *)((longlong)ppuVar14 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_a0 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
    }
  }
LAB_140d48f8a:
  local_b8 = (undefined2 *)0x0;
  local_b0 = 0x8a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy
            (local_b8,
             L"/Game/Vehicles/Technical/Design/Parts/Materials/VehiclePart_Mat_VehiclePart_Technical_Ellie1.VehiclePart_Mat_VehiclePart_Technical_Ellie1"
             ,0x114);
  puVar4 = *(undefined8 **)(param_1 + 0x1a0);
  iVar3 = *(int *)(param_1 + 0x1a8);
  for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 2; puVar13 = puVar13 + 2) {
    puVar11 = &DAT_143f3eda8;
    if ((int)local_b0 != 0) {
      puVar11 = local_b8;
    }
    if (*(int *)(puVar13 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar13;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
    if (iVar5 == 0) {
      if ((int)((longlong)puVar13 - (longlong)puVar4 >> 4) != -1) goto LAB_140d49073;
      break;
    }
  }
  ppuVar14 = (undefined2 **)
             TArray<FAsyncLoadingThread2::FQueuedFailedPackageCallback,TSizedDefaultAllocator<32>_>
             ::AddDefaulted_GetRef(param_1 + 0x1a0);
  puVar11 = local_b8;
  if (ppuVar14 != &local_b8) {
    lVar6 = (longlong)(int)local_b0;
    *(int *)(ppuVar14 + 1) = (int)local_b0;
    if (((int)local_b0 == 0) && (*(int *)((longlong)ppuVar14 + 0xc) == 0)) {
      *(undefined4 *)((longlong)ppuVar14 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_b0 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
    }
  }
LAB_140d49073:
  bVar17 = 1;
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_140d49092:
  if (*(char *)(param_1 + 0x2e) != '\0') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
    local_38 = (undefined2 *)0x0;
    local_30 = 0x4b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy
              (local_38,
               L"/Game/Vehicles/Revolver/Design/WT_Revolver_MonoWheel.WT_Revolver_MonoWheel",0x96);
    plVar1 = (longlong *)(param_1 + 400);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x198);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 3; puVar13 = puVar13 + 3) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar11 = local_38;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)(((longlong)puVar13 - (longlong)puVar4) / 0x18) != -1) goto LAB_140d491b7;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x198);
    lVar6 = (longlong)iVar3;
    *(int *)(param_1 + 0x198) = iVar3 + 1;
    if (*(int *)(param_1 + 0x19c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar3);
    }
    puVar11 = local_38;
    lVar8 = *plVar1;
    *(undefined8 *)(lVar8 + lVar6 * 0x18) = 0;
    *(undefined8 *)(lVar8 + 8 + lVar6 * 0x18) = 0;
    *(undefined1 *)(lVar8 + 0x10 + lVar6 * 0x18) = 0;
    ppuVar14 = (undefined2 **)(lVar8 + lVar6 * 0x18);
    if (ppuVar14 != &local_38) {
      lVar6 = (longlong)(int)local_30;
      *(int *)(ppuVar14 + 1) = (int)local_30;
      if ((int)local_30 == 0) {
        *(undefined4 *)((longlong)ppuVar14 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_30 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d491b7:
    local_48 = (undefined2 *)0x0;
    local_40 = 0x56;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy
              (local_48,
               L"/Game/Vehicles/Technical/Design/WT_Technical_MonsterWheels.WT_Technical_MonsterWheels"
               ,0xac);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x198);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 3; puVar13 = puVar13 + 3) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar11 = local_48;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)(((longlong)puVar13 - (longlong)puVar4) / 0x18) != -1) goto LAB_140d492c7;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x198);
    lVar6 = (longlong)iVar3;
    *(int *)(param_1 + 0x198) = iVar3 + 1;
    if (*(int *)(param_1 + 0x19c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar3);
    }
    puVar11 = local_48;
    lVar8 = *plVar1;
    *(undefined8 *)(lVar8 + lVar6 * 0x18) = 0;
    *(undefined8 *)(lVar8 + 8 + lVar6 * 0x18) = 0;
    *(undefined1 *)(lVar8 + 0x10 + lVar6 * 0x18) = 0;
    ppuVar14 = (undefined2 **)(lVar8 + lVar6 * 0x18);
    if (ppuVar14 != &local_48) {
      lVar6 = (longlong)(int)local_40;
      *(int *)(ppuVar14 + 1) = (int)local_40;
      if ((int)local_40 == 0) {
        *(undefined4 *)((longlong)ppuVar14 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_40 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d492c7:
    local_58 = (undefined2 *)0x0;
    local_50 = 0x79;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy
              (local_58,
               L"/Game/Vehicles/Technical/Design/Parts/Accessory/JetBooster/VehiclePart_CoreMod_JetBooster.VehiclePart_CoreMod_JetBooster"
               ,0xf2);
    plVar1 = (longlong *)(param_1 + 0x1a0);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 2; puVar13 = puVar13 + 2) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar11 = local_58;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar13 - (longlong)puVar4 >> 4) != -1) goto LAB_140d493c7;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar11 = local_58;
    ppuVar14 = (undefined2 **)((longlong)iVar3 * 0x10 + *plVar1);
    *ppuVar14 = (undefined2 *)0x0;
    ppuVar14[1] = (undefined2 *)0x0;
    if (ppuVar14 != &local_58) {
      lVar6 = (longlong)(int)local_50;
      *(int *)(ppuVar14 + 1) = (int)local_50;
      if (((int)local_50 != 0) || (*(int *)((longlong)ppuVar14 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_50 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d493c7:
    local_68 = (undefined2 *)0x0;
    local_60 = 0x88;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy
              (local_68,
               L"/Game/Vehicles/Outrunner/Design/Parts/Materials/VehiclePart_Mat_VehiclePart_Outrunner_Atlas.VehiclePart_Mat_VehiclePart_Outrunner_Atlas"
               ,0x110);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 2; puVar13 = puVar13 + 2) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_60 != 0) {
        puVar11 = local_68;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar13 - (longlong)puVar4 >> 4) != -1) goto LAB_140d494b7;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar11 = local_68;
    ppuVar14 = (undefined2 **)((longlong)iVar3 * 0x10 + *plVar1);
    *ppuVar14 = (undefined2 *)0x0;
    ppuVar14[1] = (undefined2 *)0x0;
    if (ppuVar14 != &local_68) {
      lVar6 = (longlong)(int)local_60;
      *(int *)(ppuVar14 + 1) = (int)local_60;
      if (((int)local_60 != 0) || (*(int *)((longlong)ppuVar14 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_60 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d494b7:
    local_78 = (undefined2 *)0x0;
    local_70 = 0x88;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy
              (local_78,
               L"/Game/Vehicles/Technical/Design/Parts/Materials/VehiclePart_Mat_VehiclePart_Technical_Atlas.VehiclePart_Mat_VehiclePart_Technical_Atlas"
               ,0x110);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 2; puVar13 = puVar13 + 2) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_70 != 0) {
        puVar11 = local_78;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar13 - (longlong)puVar4 >> 4) != -1) goto LAB_140d495a7;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar11 = local_78;
    ppuVar14 = (undefined2 **)((longlong)iVar3 * 0x10 + *plVar1);
    *ppuVar14 = (undefined2 *)0x0;
    ppuVar14[1] = (undefined2 *)0x0;
    if (ppuVar14 != &local_78) {
      lVar6 = (longlong)(int)local_70;
      *(int *)(ppuVar14 + 1) = (int)local_70;
      if (((int)local_70 != 0) || (*(int *)((longlong)ppuVar14 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_70 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d495a7:
    local_88 = (undefined2 *)0x0;
    local_80 = 0x96;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy
              (local_88,
               L"/Game/Vehicles/Technical/Design/Parts/Materials/VehiclePart_Mat_VehiclePart_Technical_GoldenTicket.VehiclePart_Mat_VehiclePart_Technical_GoldenTicket"
               ,300);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 2; puVar13 = puVar13 + 2) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_80 != 0) {
        puVar11 = local_88;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar13 - (longlong)puVar4 >> 4) != -1) goto LAB_140d49697;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar11 = local_88;
    ppuVar14 = (undefined2 **)((longlong)iVar3 * 0x10 + *plVar1);
    *ppuVar14 = (undefined2 *)0x0;
    ppuVar14[1] = (undefined2 *)0x0;
    if (ppuVar14 != &local_88) {
      lVar6 = (longlong)(int)local_80;
      *(int *)(ppuVar14 + 1) = (int)local_80;
      if (((int)local_80 != 0) || (*(int *)((longlong)ppuVar14 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_80 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d49697:
    local_98 = (undefined2 *)0x0;
    local_90 = 0x86;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy
              (local_98,
               L"/Game/Vehicles/Technical/Design/Parts/Materials/VehiclePart_Mat_VehiclePart_Technical_Maya.VehiclePart_Mat_VehiclePart_Technical_Maya"
               ,0x10c);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 2; puVar13 = puVar13 + 2) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_90 != 0) {
        puVar11 = local_98;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar13 - (longlong)puVar4 >> 4) != -1) goto LAB_140d49787;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar11 = local_98;
    ppuVar14 = (undefined2 **)((longlong)iVar3 * 0x10 + *plVar1);
    *ppuVar14 = (undefined2 *)0x0;
    ppuVar14[1] = (undefined2 *)0x0;
    if (ppuVar14 != &local_98) {
      lVar6 = (longlong)(int)local_90;
      *(int *)(ppuVar14 + 1) = (int)local_90;
      if (((int)local_90 != 0) || (*(int *)((longlong)ppuVar14 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_90 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d49787:
    local_b8 = (undefined2 *)0x0;
    local_b0 = 0x8a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy
              (local_b8,
               L"/Game/Vehicles/Technical/Design/Parts/Materials/VehiclePart_Mat_VehiclePart_Technical_Vaughn.VehiclePart_Mat_VehiclePart_Technical_Vaughn"
               ,0x114);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 2; puVar13 = puVar13 + 2) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_b0 != 0) {
        puVar11 = local_b8;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar13 - (longlong)puVar4 >> 4) != -1) goto LAB_140d49877;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar11 = local_b8;
    ppuVar14 = (undefined2 **)((longlong)iVar3 * 0x10 + *plVar1);
    *ppuVar14 = (undefined2 *)0x0;
    ppuVar14[1] = (undefined2 *)0x0;
    if (ppuVar14 != &local_b8) {
      lVar6 = (longlong)(int)local_b0;
      *(int *)(ppuVar14 + 1) = (int)local_b0;
      if (((int)local_b0 != 0) || (*(int *)((longlong)ppuVar14 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_b0 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d49877:
    local_a8 = (undefined2 *)0x0;
    local_a0 = 0x85;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy
              (local_a8,
               L"/Game/Vehicles/Revolver/Design/Parts/Materials/VehiclePart_Mat_VehiclePart_Revolver_Atlas.VehiclePart_Mat_VehiclePart_Revolver_Atlas"
               ,0x10a);
    puVar4 = (undefined8 *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x1a8);
    for (puVar13 = puVar4; puVar13 != puVar4 + (longlong)iVar3 * 2; puVar13 = puVar13 + 2) {
      puVar11 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar11 = local_a8;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar13 - (longlong)puVar4 >> 4) != -1) goto LAB_140d49967;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1a8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1ac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar11 = local_a8;
    ppuVar14 = (undefined2 **)((longlong)iVar3 * 0x10 + *plVar1);
    *ppuVar14 = (undefined2 *)0x0;
    ppuVar14[1] = (undefined2 *)0x0;
    if (ppuVar14 != &local_a8) {
      lVar6 = (longlong)(int)local_a0;
      *(int *)(ppuVar14 + 1) = (int)local_a0;
      if (((int)local_a0 != 0) || (*(int *)((longlong)ppuVar14 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar14,local_a0 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar14,puVar11,lVar6 * 2);
      }
    }
LAB_140d49967:
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_98 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return (ulonglong)bVar17;
}



// FUNCTION 140d49a70 FUN_140d49a70 body=2196 status=ok
// SIG undefined FUN_140d49a70(void)

undefined8 FUN_140d49a70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  char *pcVar16;
  char *pcVar17;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  char *local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [24];
  
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    return 0;
  }
  lVar15 = 0;
  *(undefined1 *)(param_1 + 0x3a0) = 1;
  local_d8 = 0;
  local_d0 = 0x49;
  local_res10 = param_2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy
            (local_d8,L"/Game/Missions/Plot/MIssion_Ep09_AtlasHQ.Default__MIssion_Ep09_AtlasHQ_C",
             0x92);
  uVar6 = FUN_142f71d80();
  puVar7 = (undefined8 *)FName::FName(&local_70,L"Default__MIssion_Ep09_AtlasHQ_C",1);
  lVar8 = StaticFindObjectFastExplicit(uVar6,*puVar7,&local_d8,0,0);
  if (lVar8 == 0) {
LAB_140d49b5d:
    lVar8 = lVar15;
  }
  else {
    lVar9 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d49b5d;
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_c8 = 0;
  local_c0 = 0x57;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy
            (local_c8,
             L"/Game/Missions/Plot/Mission_Ep16_SiblingRivalry.Default__Mission_Ep16_SiblingRivalry_C"
             ,0xae);
  uVar6 = FUN_142f71d80();
  puVar7 = (undefined8 *)FName::FName(&local_78,L"Default__Mission_Ep16_SiblingRivalry_C",1);
  lVar9 = StaticFindObjectFastExplicit(uVar6,*puVar7,&local_c8,0,0);
  if (lVar9 == 0) {
LAB_140d49c10:
    lVar9 = lVar15;
  }
  else {
    lVar10 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d49c10;
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0x51;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy
            (local_b8,
             L"/Game/Missions/Plot/Mission_Ep16_DesertVault.Default__Mission_Ep16_DesertVault_C",
             0xa2);
  uVar6 = FUN_142f71d80();
  puVar7 = (undefined8 *)FName::FName(&local_100,L"Default__Mission_Ep16_DesertVault_C",1);
  lVar10 = StaticFindObjectFastExplicit(uVar6,*puVar7,&local_b8,0,0);
  if (lVar10 == 0) {
LAB_140d49cbf:
    lVar10 = lVar15;
  }
  else {
    lVar11 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d49cbf;
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x55;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy
            (local_a8,
             L"/Game/Missions/Side/Zone_1/City/Mission_WizardOfNogs.Default__Mission_WizardOfNogs_C"
             ,0xaa);
  uVar6 = FUN_142f71d80();
  puVar7 = (undefined8 *)FName::FName(local_68,L"Default__Mission_WizardOfNogs_C",1);
  lVar11 = StaticFindObjectFastExplicit(uVar6,*puVar7,&local_a8,0,0);
  if (lVar11 == 0) {
LAB_140d49d6c:
    lVar11 = lVar15;
  }
  else {
    lVar12 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d49d6c;
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_f8 = (undefined8 *)0x0;
  local_f0 = (char *)0x53;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy
            (local_f8,
             L"/Game/Missions/Side/Zone_4/Desolate/Mission_ItsAlive2.Default__Mission_ItsAlive2_C",
             0xa6);
  uVar6 = FUN_142f71d80();
  puVar7 = (undefined8 *)FName::FName(local_60,L"Default__Mission_ItsAlive2_C",1);
  lVar12 = StaticFindObjectFastExplicit(uVar6,*puVar7,&local_f8,0,0);
  if (lVar12 == 0) {
LAB_140d49e1e:
    lVar12 = lVar15;
  }
  else {
    lVar13 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d49e1e;
  }
  if (local_f8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (lVar8 == 0) {
    return 1;
  }
  if ((DAT_14629aac0 < 0) || (*(int *)(lVar8 + 0x218) <= DAT_14629aac0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return 1;
  }
  if (lVar9 == 0) {
    return 1;
  }
  if ((DAT_14629aac4 < 0) || (*(int *)(lVar9 + 0x218) <= DAT_14629aac4)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return 1;
  }
  if (lVar10 == 0) {
    return 1;
  }
  if ((DAT_14629aac8 < 0) || (*(int *)(lVar10 + 0x218) <= DAT_14629aac8)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return 1;
  }
  if (lVar11 == 0) {
    return 1;
  }
  if ((DAT_14629aacc < 0) || (*(int *)(lVar11 + 0x218) <= DAT_14629aacc)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return 1;
  }
  if (lVar12 == 0) {
    return 1;
  }
  if ((DAT_14629aad0 < 0) || (*(int *)(lVar12 + 0x218) <= DAT_14629aad0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return 1;
  }
  lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x210) + 8) + 0xc0);
  if (lVar13 == 0) {
LAB_140d49f5f:
    local_res18 = 0;
  }
  else {
    lVar14 = FUN_1413ea0d0();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d49f5f;
    local_res18 = FUN_140c499e0(lVar13 + 0xd0);
  }
  lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x210) + 0x200) + 0xc0);
  if (lVar13 == 0) {
LAB_140d49fc5:
    local_res20 = 0;
  }
  else {
    lVar14 = FUN_1413ea0d0();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d49fc5;
    local_res20 = FUN_140c499e0(lVar13 + 0xd0);
  }
  lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x210) + 0x180) + 0xc0);
  if (lVar13 == 0) {
LAB_140d4a02c:
    local_108 = 0;
  }
  else {
    lVar14 = FUN_1413ea0d0();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d4a02c;
    local_108 = FUN_140c499e0(lVar13 + 0xd0);
  }
  lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x210) + 0x118) + 0xc0);
  if (lVar13 != 0) {
    lVar14 = FUN_1413ea0d0();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar15 = FUN_140c499e0(lVar13 + 0xd0);
    }
  }
  local_98 = 0;
  local_90 = 0x90;
  local_88 = lVar15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy
            (local_98,
             L"/Game/Gear/WeaponTrinkets/_Design/ItemPools/ItemPool_Customizations_WeaponTrinkets_Mission_22.ItemPool_Customizations_WeaponTrinkets_Mission_22"
             ,0x120);
  uVar6 = FUN_14302b3d0();
  puVar7 = (undefined8 *)
           FName::FName(local_58,L"ItemPool_Customizations_WeaponTrinkets_Mission_22",1);
  lVar13 = StaticFindObjectFastExplicit(uVar6,*puVar7,&local_98,0,0);
  if (lVar13 != 0) {
    local_80 = lVar13;
    lVar14 = FUN_14302b3d0();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140d4a13f;
  }
  lVar13 = 0;
  local_80 = 0;
LAB_140d4a13f:
  if (local_98 != 0) {
    FMemory::Free();
  }
  if ((((local_res18 != 0) && (local_res20 != 0)) && (local_108 != 0)) &&
     ((lVar15 != 0 && (lVar13 != 0)))) {
    uVar6 = *(undefined8 *)(lVar8 + 0x10);
    uVar1 = *(undefined8 *)(lVar10 + 0x10);
    uVar2 = *(undefined8 *)(lVar9 + 0x10);
    local_100 = *(undefined8 **)(param_1 + 0x150);
    uVar3 = *(undefined8 *)(lVar11 + 0x10);
    uVar4 = *(undefined8 *)(lVar12 + 0x10);
    local_70 = local_100 + (longlong)*(int *)(param_1 + 0x158) * 7;
    if (local_100 != local_70) {
      do {
        pcVar17 = (char *)*local_100;
        pcVar16 = pcVar17 + (longlong)*(int *)(local_100 + 1) * 0x78;
        for (; pcVar17 != pcVar16; pcVar17 = pcVar17 + 0x78) {
          if (*pcVar17 == '\x02') {
            local_78 = FUN_140c498b0(pcVar17 + 0x20);
            local_f8 = &local_78;
            local_e0 = &local_res10;
            local_f0 = pcVar17;
            local_e8 = param_1;
            FUN_140d25d90(&local_f8,uVar6,DAT_14629aac0,local_res18);
            FUN_140d25d90(&local_f8,uVar2,DAT_14629aac4,local_res20);
            FUN_140d25d90(&local_f8,uVar1,DAT_14629aac8,local_108);
            FUN_140d25d90(&local_f8,uVar3,DAT_14629aacc,local_88);
            FUN_140d25d90(&local_f8,uVar4,DAT_14629aad0,local_80);
          }
        }
        local_100 = local_100 + 7;
      } while (local_100 != local_70);
    }
  }
  return 1;
}



// FUNCTION 140d4a310 FUN_140d4a310 body=1023 status=ok
// SIG undefined FUN_140d4a310(void)

undefined8 FUN_140d4a310(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 **ppuVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined2 *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar12 < DAT_14686e7d8) && (_Init_thread_header(&DAT_14686e7d8), DAT_14686e7d8 == -1)) {
    FName::FName(&DAT_14686e7d0,L"Mission_Ep17_BigChase_C",1);
    _Init_thread_footer(&DAT_14686e7d8);
  }
  if ((*piVar12 < DAT_14686e7e8) && (_Init_thread_header(&DAT_14686e7e8), DAT_14686e7e8 == -1)) {
    FName::FName(&DAT_14686e7e0,L"Mission_Ep19_MinerDetails_C",1);
    _Init_thread_footer(&DAT_14686e7e8);
  }
  if (*(char *)(param_1 + 0x3a1) != '\0') {
    return 0;
  }
  bVar4 = false;
  bVar3 = false;
  *(undefined1 *)(param_1 + 0x3a1) = 1;
  if (0 < *(int *)(param_1 + 0x158)) {
    pcVar15 = (char *)**(undefined8 **)(param_1 + 0x150);
    pcVar14 = pcVar15 + (longlong)*(int *)(*(undefined8 **)(param_1 + 0x150) + 1) * 0x78;
    if (pcVar15 != pcVar14) {
LAB_140d4a3d0:
      if ((*pcVar15 == '\x02') && (lVar6 = FUN_140c498b0(pcVar15 + 0x20), lVar6 != 0)) {
        lVar7 = FUN_142f71d80();
        lVar9 = lVar6;
        do {
          if (lVar9 == lVar7) {
            lVar7 = FUN_142f71d80();
            lVar9 = lVar6;
            goto LAB_140d4a413;
          }
          lVar9 = *(longlong *)(lVar9 + 0x30);
        } while (lVar9 != 0);
      }
      goto LAB_140d4a638;
    }
  }
  return 1;
  while (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0) {
LAB_140d4a413:
    if (lVar9 == lVar7) goto LAB_140d4a423;
  }
  lVar6 = 0;
LAB_140d4a423:
  if (*(longlong *)(lVar6 + 0x18) == DAT_14686e7d0) {
    local_48 = (undefined2 *)0x0;
    local_40 = 0x79;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy
              (local_48,
               L"/Game/Vehicles/Technical/Design/Parts/Accessory/JetBooster/VehiclePart_CoreMod_JetBooster.VehiclePart_CoreMod_JetBooster"
               ,0xf2);
    puVar2 = *(undefined8 **)(param_1 + 0x1a0);
    iVar1 = *(int *)(param_1 + 0x1a8);
    for (puVar13 = puVar2; puVar13 != puVar2 + (longlong)iVar1 * 2; puVar13 = puVar13 + 2) {
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10);
      if (iVar5 == 0) {
        if ((int)((longlong)puVar13 - (longlong)puVar2 >> 4) != -1) goto LAB_140d4a528;
        break;
      }
    }
    ppuVar8 = (undefined2 **)
              TArray<FAsyncLoadingThread2::FQueuedFailedPackageCallback,TSizedDefaultAllocator<32>_>
              ::AddDefaulted_GetRef(param_1 + 0x1a0);
    puVar10 = local_48;
    if (ppuVar8 != &local_48) {
      lVar6 = (longlong)(int)local_40;
      *(int *)(ppuVar8 + 1) = (int)local_40;
      if (((int)local_40 == 0) && (*(int *)((longlong)ppuVar8 + 0xc) == 0)) {
        *(undefined4 *)((longlong)ppuVar8 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar8,local_40 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppuVar8,puVar10,lVar6 * 2);
      }
    }
LAB_140d4a528:
    puVar10 = local_48;
    if (bVar3) {
LAB_140d4a647:
      if (puVar10 == (undefined2 *)0x0) {
        return 1;
      }
      FMemory::Free();
      return 1;
    }
    bVar4 = true;
  }
  else {
    if (*(longlong *)(lVar6 + 0x18) != DAT_14686e7e0) goto LAB_140d4a638;
    local_38 = (undefined2 *)0x0;
    local_30 = 0x56;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy
              (local_38,
               L"/Game/Vehicles/Technical/Design/WT_Technical_MonsterWheels.WT_Technical_MonsterWheels"
               ,0xac);
    puVar2 = *(undefined8 **)(param_1 + 400);
    iVar1 = *(int *)(param_1 + 0x198);
    for (puVar13 = puVar2; puVar13 != puVar2 + (longlong)iVar1 * 3; puVar13 = puVar13 + 3) {
      puVar10 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar10 = local_38;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar13;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar10);
      if (iVar5 == 0) {
        if ((int)(((longlong)puVar13 - (longlong)puVar2) / 0x18) != -1) goto LAB_140d4a61c;
        break;
      }
    }
    lVar6 = FUN_140d26f70(param_1 + 400);
    FString::operator=(lVar6);
    *(undefined1 *)(lVar6 + 0x10) = 0;
LAB_140d4a61c:
    puVar10 = local_38;
    if (bVar4) goto LAB_140d4a647;
    bVar3 = true;
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_140d4a638:
  pcVar15 = pcVar15 + 0x78;
  if (pcVar15 == pcVar14) {
    return 1;
  }
  goto LAB_140d4a3d0;
}



// FUNCTION 140d4a710 FUN_140d4a710 body=184 status=ok
// SIG undefined FUN_140d4a710(void)

void FUN_140d4a710(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28 [2];
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404cf890(&local_18,0);
  if (local_18 == (longlong *)0x0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_140d401b0(param_1,param_2,0,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    (**(code **)(*local_18 + 200))();
  }
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
  return;
}



// FUNCTION 140d4a7d0 FUN_140d4a7d0 body=17 status=ok
// SIG undefined FUN_140d4a7d0(void)

void FUN_140d4a7d0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    iVar1 = 0;
    if ((param_2 != 0) && (iVar1 = FMemory::QuantizeSize((longlong)param_2,0), iVar1 < param_2)) {
      iVar1 = 0x7fffffff;
    }
    if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      if ((*param_1 != 0) || (iVar1 != 0)) {
        lVar2 = FMemory::Realloc(*param_1,(longlong)iVar1,0);
        *param_1 = lVar2;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140d4a7f0 FUN_140d4a7f0 body=17 status=ok
// SIG undefined FUN_140d4a7f0(void)

void FUN_140d4a7f0(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    iVar1 = 0;
    if (param_2 != 0) {
      uVar2 = FMemory::QuantizeSize((longlong)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      if (iVar1 < param_2) {
        iVar1 = 0x7fffffff;
      }
    }
    if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      if ((*param_1 != 0) || (iVar1 != 0)) {
        lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 2,0);
        *param_1 = lVar3;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140d4a810 Reset body=154 status=ok
// SIG undefined Reset(void)

void TArray<TSoftClassPtr<UGWearableItemEffect>,TSizedDefaultAllocator<32>_>::Reset
               (longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x18);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x18);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4a8b0 FUN_140d4a8b0 body=154 status=ok
// SIG undefined FUN_140d4a8b0(void)

void FUN_140d4a8b0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x20);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x20);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4a950 FUN_140d4a950 body=303 status=ok
// SIG undefined FUN_140d4a950(void)

void FUN_140d4a950(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      do {
        if (plVar2[0xf] != 0) {
          FMemory::Free();
        }
        if (plVar2[0xc] != 0) {
          FMemory::Free();
        }
        if (plVar2[10] != 0) {
          FMemory::Free();
        }
        if (plVar2[8] != 0) {
          FMemory::Free();
        }
        if (plVar2[6] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0x11;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (plVar2[0xf] != 0) {
        FMemory::Free();
      }
      if (plVar2[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar2[10] != 0) {
        FMemory::Free();
      }
      if (plVar2[8] != 0) {
        FMemory::Free();
      }
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x11;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4aa80 FUN_140d4aa80 body=17 status=ok
// SIG undefined FUN_140d4aa80(void)

void FUN_140d4aa80(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    iVar3 = 0;
    if (param_2 != 0) {
      uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x28,0);
      iVar3 = (int)(uVar1 / 0x28);
      if (iVar3 < param_2) {
        iVar3 = 0x7fffffff;
      }
    }
    if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar3;
      if ((*param_1 != 0) || (iVar3 != 0)) {
        lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x28,0);
        *param_1 = lVar2;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140d4aaa0 FUN_140d4aaa0 body=182 status=ok
// SIG undefined FUN_140d4aaa0(void)

void FUN_140d4aaa0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x18);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 7;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x18);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 7;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4ab60 FUN_140d4ab60 body=17 status=ok
// SIG undefined FUN_140d4ab60(void)

void FUN_140d4ab60(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    iVar3 = 0;
    if (param_2 != 0) {
      uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xc,0);
      iVar3 = (int)(uVar1 / 0xc);
      if (iVar3 < param_2) {
        iVar3 = 0x7fffffff;
      }
    }
    if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar3;
      if ((*param_1 != 0) || (iVar3 != 0)) {
        lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xc,0);
        *param_1 = lVar2;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140d4ab80 FUN_140d4ab80 body=267 status=ok
// SIG undefined FUN_140d4ab80(void)

void FUN_140d4ab80(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      do {
        if (plVar2[0xc] != 0) {
          FMemory::Free();
        }
        if (plVar2[10] != 0) {
          FMemory::Free();
        }
        if (plVar2[8] != 0) {
          FMemory::Free();
        }
        if (plVar2[6] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (plVar2[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar2[10] != 0) {
        FMemory::Free();
      }
      if (plVar2[8] != 0) {
        FMemory::Free();
      }
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x10;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4ac90 FUN_140d4ac90 body=17 status=ok
// SIG undefined FUN_140d4ac90(void)

void FUN_140d4ac90(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    iVar1 = 0;
    if (param_2 != 0) {
      uVar2 = FMemory::QuantizeSize((longlong)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < param_2) {
        iVar1 = 0x7fffffff;
      }
    }
    if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      if ((*param_1 != 0) || (iVar1 != 0)) {
        lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 4,0);
        *param_1 = lVar3;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140d4acb0 FUN_140d4acb0 body=449 status=ok
// SIG undefined FUN_140d4acb0(void)

void FUN_140d4acb0(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      do {
        if (plVar2[0x12] != 0) {
          FMemory::Free();
        }
        if (plVar2[0x10] != 0) {
          FMemory::Free();
        }
        if (plVar2[0xe] != 0) {
          FMemory::Free();
        }
        if (plVar2[0xc] != 0) {
          FMemory::Free();
        }
        if (plVar2[10] != 0) {
          FMemory::Free();
        }
        if (plVar2[8] != 0) {
          FMemory::Free();
        }
        if (plVar2[6] != 0) {
          FMemory::Free();
        }
        if (plVar2[4] != 0) {
          FMemory::Free();
        }
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0x16;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (plVar2[0x12] != 0) {
        FMemory::Free();
      }
      if (plVar2[0x10] != 0) {
        FMemory::Free();
      }
      if (plVar2[0xe] != 0) {
        FMemory::Free();
      }
      if (plVar2[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar2[10] != 0) {
        FMemory::Free();
      }
      if (plVar2[8] != 0) {
        FMemory::Free();
      }
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (plVar2[4] != 0) {
        FMemory::Free();
      }
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x16;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4ae80 FUN_140d4ae80 body=202 status=ok
// SIG undefined FUN_140d4ae80(void)

void FUN_140d4ae80(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x20);
      do {
        if (plVar2[5] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FUN_140ce1840(plVar2 + -2);
        plVar2 = plVar2 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x20);
      do {
        if (plVar2[5] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FUN_140ce1840(plVar2 + -2);
        plVar2 = plVar2 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4af50 FUN_140d4af50 body=612 status=ok
// SIG undefined FUN_140d4af50(void)

void FUN_140d4af50(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar6 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x68);
      do {
        FUN_1404bf980(plVar7 + 4);
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        if (plVar7[-3] != 0) {
          FMemory::Free();
        }
        plVar3 = (longlong *)plVar7[-5];
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
        plVar3 = (longlong *)plVar7[-8];
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
        plVar3 = (longlong *)plVar7[-0xb];
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
        plVar7 = plVar7 + 0x17;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x68);
      do {
        FUN_1404bf980(plVar7 + 4);
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        if (plVar7[-3] != 0) {
          FMemory::Free();
        }
        plVar3 = (longlong *)plVar7[-5];
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
        plVar3 = (longlong *)plVar7[-8];
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
        plVar3 = (longlong *)plVar7[-0xb];
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
        plVar7 = plVar7 + 0x17;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4b1c0 FUN_140d4b1c0 body=17 status=ok
// SIG undefined FUN_140d4b1c0(void)

void FUN_140d4b1c0(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    iVar1 = 0;
    if (param_2 != 0) {
      uVar2 = FMemory::QuantizeSize((longlong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < param_2) {
        iVar1 = 0x7fffffff;
      }
    }
    if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
      *(int *)((longlong)param_1 + 0xc) = iVar1;
      if ((*param_1 != 0) || (iVar1 != 0)) {
        lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 3,0);
        *param_1 = lVar3;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140d4b1e0 FUN_140d4b1e0 body=210 status=ok
// SIG undefined FUN_140d4b1e0(void)

void FUN_140d4b1e0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x38);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-2] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xb;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x38);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-2] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xb;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d4b2c0 FUN_140d4b2c0 body=89 status=ok
// SIG undefined FUN_140d4b2c0(void)

void FUN_140d4b2c0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    TArray<FString,FDefaultAllocator>::Empty();
    return;
  }
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 140d4b320 FUN_140d4b320 body=272 status=ok
// SIG undefined FUN_140d4b320(void)

void FUN_140d4b320(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_1404bf980((longlong)local_1c * 0x40 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140d4b430 FUN_140d4b430 body=188 status=ok
// SIG undefined FUN_140d4b430(void)

void FUN_140d4b430(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140d2b6e0(param_1,0);
  }
  else {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      plVar1 = (longlong *)(*param_1 + 0x38);
      do {
        if (plVar1[5] != 0) {
          FMemory::Free();
        }
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        if (plVar1[-6] != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 0xf;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
  }
  if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 140d4b4f0 FUN_140d4b4f0 body=49 status=ok
// SIG undefined FUN_140d4b4f0(void)

void FUN_140d4b4f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1a8,0);
  }
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  return;
}



// FUNCTION 140d4b530 FUN_140d4b530 body=696 status=ok
// SIG undefined FUN_140d4b530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d4b530(longlong param_1,longlong param_2)

{
  size_t _Size;
  longlong lVar1;
  byte *pbVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  byte *local_a8 [3];
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar4 = *(ulonglong *)(param_1 + 8);
  lVar7 = *(longlong *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  _Size = param_2 * 8;
  *(longlong *)(param_1 + 8) = param_2;
  local_80 = lVar7;
  local_78 = uVar4;
  if (lVar1 == 0) {
    _Dst = (void *)operator_new(_Size);
  }
  else {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1439f01b0(lVar1,0,_Size);
    }
    _Dst = (void *)FUN_1439efd10(lVar1);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  uVar6 = *(ulonglong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(void **)(param_1 + 0x20) = _Dst;
  local_88 = uVar6;
  if (uVar6 < uVar4) {
    do {
      pbVar5 = *(byte **)(lVar7 + uVar6 * 8);
      local_88 = uVar6;
      if (pbVar5 != (byte *)0x0) {
        if (pbVar5 == *(byte **)(lVar7 + (uVar6 ^ 1) * 8)) {
          if ((pbVar5 != (byte *)0x0) && (pbVar5 == *(byte **)(lVar7 + (uVar6 ^ 1) * 8))) {
            FUN_140d56f60(param_1,lVar7,uVar6);
            local_88 = uVar6 + 1;
          }
        }
        else {
          do {
            uVar4 = 0;
            lVar1 = *(longlong *)(param_1 + 0x20);
            pbVar2 = *(byte **)(pbVar5 + 0x10);
            uVar6 = *(longlong *)(param_1 + 0x10) +
                    (((((ulonglong)*pbVar5 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)pbVar5[1]) * 0x100000001b3 ^ (ulonglong)pbVar5[2]) * 0x100000001b3
                    ^ (ulonglong)pbVar5[3]) * 0x100000001b3 & *(longlong *)(param_1 + 8) - 1U;
            lVar7 = uVar6 * 8;
            lVar3 = *(longlong *)(lVar7 + lVar1);
            if (lVar3 == 0) {
              pbVar5[0x10] = 0;
              pbVar5[0x11] = 0;
              pbVar5[0x12] = 0;
              pbVar5[0x13] = 0;
              pbVar5[0x14] = 0;
              pbVar5[0x15] = 0;
              pbVar5[0x16] = 0;
              pbVar5[0x17] = 0;
              *(byte **)(lVar7 + *(longlong *)(param_1 + 0x20)) = pbVar5;
LAB_140d4b6f2:
              uVar4 = *(ulonglong *)(param_1 + 0x18);
              if (uVar6 < *(ulonglong *)(param_1 + 0x18)) {
                uVar4 = uVar6;
              }
              *(ulonglong *)(param_1 + 0x18) = uVar4;
              local_90 = uVar6;
              local_60 = uVar6;
            }
            else if (lVar3 == *(longlong *)(lVar1 + (uVar6 ^ 1) * 8)) {
              pbVar5[0x10] = 0;
              pbVar5[0x11] = 0;
              pbVar5[0x12] = 0;
              pbVar5[0x13] = 0;
              pbVar5[0x14] = 0;
              pbVar5[0x15] = 0;
              pbVar5[0x16] = 0;
              pbVar5[0x17] = 0;
              local_a8[0] = pbVar5;
              FUN_140d1e6d0(*(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x20)),local_48,local_a8
                           );
            }
            else {
              lVar7 = uVar6 * 8;
              do {
                lVar3 = *(longlong *)(lVar3 + 0x10);
                uVar4 = uVar4 + 1;
              } while (lVar3 != 0);
              if (7 < uVar4) {
                FUN_140d57400(param_1,uVar6);
                pbVar5[0x10] = 0;
                pbVar5[0x11] = 0;
                pbVar5[0x12] = 0;
                pbVar5[0x13] = 0;
                pbVar5[0x14] = 0;
                pbVar5[0x15] = 0;
                pbVar5[0x16] = 0;
                pbVar5[0x17] = 0;
                local_a8[0] = pbVar5;
                FUN_140d1e6d0(*(undefined8 *)(lVar7 + *(longlong *)(param_1 + 0x20)),local_58,
                              local_a8);
                uVar6 = uVar6 & 0xfffffffffffffffe;
                goto LAB_140d4b6f2;
              }
              *(undefined8 *)(pbVar5 + 0x10) = *(undefined8 *)(lVar7 + lVar1);
              *(byte **)(lVar7 + *(longlong *)(param_1 + 0x20)) = pbVar5;
            }
            pbVar5 = pbVar2;
            lVar7 = local_80;
            uVar4 = local_78;
          } while (pbVar2 != (byte *)0x0);
        }
      }
      uVar6 = local_88 + 1;
      local_88 = uVar6;
    } while (uVar6 < uVar4);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FMemory::operator_delete(lVar7,uVar4 * 8);
  }
  return;
}



// FUNCTION 140d4b7f0 FUN_140d4b7f0 body=670 status=ok
// SIG undefined FUN_140d4b7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d4b7f0(longlong param_1,longlong param_2)

{
  size_t _Size;
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98 [3];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar7 = *(ulonglong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  _Size = param_2 * 8;
  *(longlong *)(param_1 + 8) = param_2;
  local_78 = uVar7;
  if (lVar3 == 0) {
    _Dst = (void *)operator_new(_Size);
  }
  else {
    if (*(longlong *)(lVar3 + 0x70) != 0) {
      FUN_1439f01b0(lVar3,0,_Size);
    }
    _Dst = (void *)FUN_1439efd10(lVar3);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
  uVar11 = *(ulonglong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(void **)(param_1 + 0x20) = _Dst;
  if (uVar11 < uVar7) {
    do {
      plVar10 = *(longlong **)(lVar2 + uVar11 * 8);
      if (plVar10 != (longlong *)0x0) {
        if (plVar10 == *(longlong **)(lVar2 + (uVar11 ^ 1) * 8)) {
          if ((plVar10 != (longlong *)0x0) && (plVar10 == *(longlong **)(lVar2 + (uVar11 ^ 1) * 8)))
          {
            FUN_140d571c0(param_1,lVar2);
            uVar11 = uVar11 + 1;
          }
        }
        else {
          do {
            uVar7 = 0;
            plVar4 = (longlong *)plVar10[5];
            plVar9 = plVar10;
            if (0xf < (ulonglong)plVar10[3]) {
              plVar9 = (longlong *)*plVar10;
            }
            cVar1 = (char)*plVar9;
            uVar6 = uVar7;
            while (cVar1 != '\0') {
              uVar6 = uVar6 * 5 + (longlong)cVar1;
              plVar9 = (longlong *)((longlong)plVar9 + 1);
              cVar1 = *(char *)plVar9;
            }
            lVar5 = *(longlong *)(param_1 + 0x20);
            uVar6 = *(longlong *)(param_1 + 0x10) + uVar6 & *(longlong *)(param_1 + 8) - 1U;
            lVar3 = uVar6 * 8;
            lVar8 = *(longlong *)(lVar3 + lVar5);
            if (lVar8 == 0) {
              plVar10[5] = 0;
              *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x20)) = plVar10;
LAB_140d4b9a2:
              uVar7 = *(ulonglong *)(param_1 + 0x18);
              if (uVar6 < *(ulonglong *)(param_1 + 0x18)) {
                uVar7 = uVar6;
              }
              *(ulonglong *)(param_1 + 0x18) = uVar7;
              local_80 = uVar6;
              local_60 = uVar6;
            }
            else if (lVar8 == *(longlong *)(lVar5 + (uVar6 ^ 1) * 8)) {
              plVar10[5] = 0;
              local_98[0] = plVar10;
              FUN_140d1e830(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x20)),local_48,local_98
                           );
            }
            else {
              lVar3 = uVar6 * 8;
              do {
                lVar8 = *(longlong *)(lVar8 + 0x28);
                uVar7 = uVar7 + 1;
              } while (lVar8 != 0);
              if (7 < uVar7) {
                FUN_140d575e0(param_1,uVar6);
                plVar10[5] = 0;
                local_98[0] = plVar10;
                FUN_140d1e830(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x20)),local_58,
                              local_98);
                uVar6 = uVar6 & 0xfffffffffffffffe;
                goto LAB_140d4b9a2;
              }
              plVar10[5] = *(longlong *)(lVar3 + lVar5);
              *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x20)) = plVar10;
            }
            plVar10 = plVar4;
            uVar7 = local_78;
          } while (plVar4 != (longlong *)0x0);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar7);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FMemory::operator_delete(lVar2,uVar7 * 8);
  }
  return;
}



// FUNCTION 140d4ba90 ResizeForCopy body=124 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x58,0);
    iVar3 = (int)(uVar1 / 0x58);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x58,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140d4bb10 ResizeForCopy body=130 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FPrimitiveUniformShaderParameters,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x1a0,0);
    iVar3 = (int)(uVar1 / 0x1a0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x1a0,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140d4bba0 FUN_140d4bba0 body=138 status=ok
// SIG undefined FUN_140d4bba0(void)

void FUN_140d4bba0(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x1a0,0);
  iVar4 = (int)(uVar3 / 0x1a0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1a0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140d4bc30 FUN_140d4bc30 body=118 status=ok
// SIG undefined FUN_140d4bc30(void)

void FUN_140d4bc30(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x1a0,0);
    iVar3 = (int)(uVar1 / 0x1a0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x1a0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140d4bcb0 FUN_140d4bcb0 body=878 status=ok
// SIG undefined FUN_140d4bcb0(void)

/* WARNING: Removing unreachable block (ram,0x000140d4bee2) */
/* WARNING: Removing unreachable block (ram,0x000140d4becd) */
/* WARNING: Removing unreachable block (ram,0x000140d4bf06) */

void FUN_140d4bcb0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res20 [8];
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_1[0x4c] != 0) {
    return;
  }
  lVar6 = 0;
  FUN_1404cf890(&local_68,0);
  Online::GetIdentityInterface(&local_78,0);
  if ((local_68 == (longlong *)0x0) || (local_78 == (longlong *)0x0)) {
    uVar9 = 1;
  }
  else {
    iVar3 = (**(code **)(*local_68 + 0x78))(local_68,param_2);
    if ((iVar3 == 2) && (cVar2 = (**(code **)(*local_78 + 0x10))(local_78), cVar2 != '\0')) {
      lVar4 = FUN_142b45e90();
      FOnlineSubsystemEOS::GetLeaderboardsInterface(*(undefined8 *)(lVar4 + 0x18),&local_88);
      if (local_88 == 0) {
        (**(code **)(*param_1 + 0xb8))(param_1,1);
      }
      else {
        local_90 = (longlong *)param_2[1];
        local_98 = *param_2;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
        }
        if (param_1 + 0x4d != &local_98) {
          param_1[0x4d] = local_98;
          local_98 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4e,&local_90);
        }
        plVar5 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_90 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
        uStack_40 = 0;
        local_48 = FUN_140d41280;
        plVar5 = (longlong *)FMemory::Realloc(0,0x30);
        local_58 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          plVar5[1] = (longlong)param_1;
          *plVar5 = (longlong)&PTR_GetPoolName_143fc2050;
          *(undefined4 *)(plVar5 + 2) = (undefined4)local_48;
          *(undefined4 *)((longlong)plVar5 + 0x14) = local_48._4_4_;
          *(undefined4 *)(plVar5 + 3) = uStack_40;
          *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_3c;
          lVar6 = FDelegateHandle::GenerateNewID();
          lVar4 = local_88;
          plVar5[5] = lVar6;
          *plVar5 = (longlong)&PTR_GetPoolName_143fc2098;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_88 + 0x18,1);
          plVar7 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res20);
          iVar3 = *(int *)(lVar4 + 0x20);
          lVar6 = *plVar7;
          *(int *)(lVar4 + 0x20) = iVar3 + 1;
          if (*(int *)(lVar4 + 0x24) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x18,iVar3);
          }
          puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar4 + 0x18));
          *puVar8 = plVar5;
          *(undefined4 *)(puVar8 + 1) = 3;
          local_58 = (longlong *)0x0;
        }
        param_1[0x4c] = lVar6;
        FUN_142b69c80(local_88,param_2);
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_80 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      goto LAB_140d4bf86;
    }
    uVar9 = 2;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,uVar9);
LAB_140d4bf86:
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_70 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140d4c020 Conv_IntToString body=33 status=ok
// SIG undefined Conv_IntToString(void)

undefined8 UKismetStringLibrary::Conv_IntToString(undefined8 param_1,undefined4 param_2)

{
  FString::PrintfImpl(param_1,&DAT_1444f8e44,param_2);
  return param_1;
}



// FUNCTION 140d4c050 FUN_140d4c050 body=89 status=ok
// SIG undefined FUN_140d4c050(void)

void FUN_140d4c050(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[2] = param_2;
  do {
    if (*(ulonglong *)(param_1[1] + 8) <= param_2) {
      return;
    }
    lVar1 = *(longlong *)(param_1[1] + 0x20);
    lVar2 = *(longlong *)(lVar1 + param_2 * 8);
    if (lVar2 != 0) {
      if (lVar2 != *(longlong *)(lVar1 + (param_2 ^ 1) * 8)) {
        *param_1 = lVar2;
        return;
      }
      if ((lVar2 != 0) && (lVar2 == *(longlong *)(lVar1 + (param_2 ^ 1) * 8))) {
        *param_1 = *(longlong *)(**(longlong **)(lVar2 + 8) + 0x20);
        return;
      }
    }
    param_2 = param_2 + 1;
    param_1[2] = param_2;
  } while( true );
}



// FUNCTION 140d4c0b0 FUN_140d4c0b0 body=82 status=ok
// SIG undefined FUN_140d4c0b0(void)

void FUN_140d4c0b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_14629aaa0);
  iVar1 = FArchive::CustomVer(param_2,&DAT_14629aaa0);
  if (0 < iVar1) {
    FUN_140d24ab0(param_2,param_1 + 0x538);
  }
  return;
}



// FUNCTION 140d4c110 FUN_140d4c110 body=363 status=ok
// SIG undefined FUN_140d4c110(void)

void FUN_140d4c110(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      FUN_141763960();
    }
    else {
      FUN_140d2db20();
    }
  }
  else {
    FUN_140d4de60();
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if ((0 < *(int *)(param_1 + 0x548)) && (*(int *)(param_1 + 0x368) == 0)) {
      plVar1 = (longlong *)(param_1 + 0x360);
      if (*(int *)(param_1 + 0x36c) < *(int *)(param_1 + 0x548)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(plVar1);
      }
      puVar6 = *(undefined8 **)(param_1 + 0x540);
      puVar4 = puVar6 + (longlong)*(int *)(param_1 + 0x548) * 2;
      for (; puVar6 != puVar4; puVar6 = puVar6 + 2) {
        iVar2 = *(int *)(param_1 + 0x368);
        *(int *)(param_1 + 0x368) = iVar2 + 1;
        if (*(int *)(param_1 + 0x36c) < iVar2 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        FUN_140d1f3a0((longlong)iVar2 * 0x30 + *plVar1,*puVar6,*(undefined4 *)(puVar6 + 1));
      }
      *(undefined4 *)(param_1 + 0x548) = 0;
      if (*(int *)(param_1 + 0x54c) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x540,0);
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x380);
    lVar5 = (longlong)*(int *)(param_1 + 0x388) * 0x80 + lVar3;
    for (; lVar3 != lVar5; lVar3 = lVar3 + 0x80) {
      FUN_142fe9ef0(lVar3);
    }
    lVar3 = *(longlong *)(param_1 + 0x390);
    lVar5 = (longlong)*(int *)(param_1 + 0x398) * 0x80 + lVar3;
    for (; lVar3 != lVar5; lVar3 = lVar3 + 0x80) {
      FUN_142fe9ef0(lVar3);
    }
  }
  return;
}



// FUNCTION 140d4c280 FUN_140d4c280 body=162 status=ok
// SIG undefined FUN_140d4c280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d4c280(undefined8 param_1,longlong *param_2)

{
  DWORD DVar1;
  undefined4 extraout_var;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      FUN_141763960();
    }
    else {
      FUN_140d32ac0();
    }
  }
  else {
    uVar3 = _DAT_14629d1f0;
    uVar4 = uRam000000014629d1f8;
    (**(code **)(*param_2 + 0x120))(param_2);
    DVar1 = FCustomVersionContainer::GetVersion();
    if (CONCAT44(extraout_var,DVar1) == 0) {
      puVar2 = (undefined8 *)FName::FName(local_res10,L"OakSaveDataCompressionVersion",DVar1 + 1);
      FArchive::SetCustomVersion(param_2,&DAT_14629d1f0,0,*puVar2,uVar3,uVar4);
    }
    FUN_140d51d40(param_1,param_2);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_140d28af0(param_1);
  }
  return;
}



// FUNCTION 140d4c330 FUN_140d4c330 body=162 status=ok
// SIG undefined FUN_140d4c330(void)

void FUN_140d4c330(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if ((*(int *)(param_1 + 0x6c) < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
    }
    if (*(undefined2 **)(param_1 + 0x60) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  uVar1 = FSoftObjectPath::FSoftObjectPath(local_28);
  FSoftObjectPath::operator=(param_1 + 0x58,uVar1);
  FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x48),param_2);
  LOCK();
  if (DAT_1464b56f4 == 0) {
    DAT_1464b56f4 = 0;
  }
  UNLOCK();
  *(int *)(param_1 + 0x50) = DAT_1464b56f4;
  return;
}



// FUNCTION 140d4c3e0 FUN_140d4c3e0 body=190 status=ok
// SIG undefined FUN_140d4c3e0(void)

void FUN_140d4c3e0(longlong param_1)

{
  longlong *plVar1;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FString::FString(local_48);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_1 + 0x38,local_30 + 2);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d4c4a0 FUN_140d4c4a0 body=212 status=ok
// SIG undefined FUN_140d4c4a0(void)

void FUN_140d4c4a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  undefined ***local_48;
  undefined8 *local_40;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_20 = 0;
  local_18 = 0;
  local_48 = &local_38;
  local_38 = &PTR_FUN_143f740c8;
  local_40 = local_res18;
  local_res18[0] = param_3;
  FUN_140d1d5e0(param_1 + 0x3d8,local_res8,&local_48,0);
  local_38 = &PTR_FUN_143f740c8;
  if (local_20 != 0) {
    FMemory::Free();
  }
  plVar5 = local_28;
  local_38 = &PTR_FUN_143f73d18;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
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



// FUNCTION 140d4c580 FUN_140d4c580 body=611 status=ok
// SIG undefined FUN_140d4c580(void)

void FUN_140d4c580(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined **local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined ***local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined1 *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_d0 = *param_2;
  local_c8 = (longlong *)param_2[1];
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  local_88 = &local_d8;
  local_80 = &local_res18;
  local_d8 = &PTR_FUN_143f740c8;
  local_c0 = 0;
  local_b8 = 0;
  local_res18 = param_3;
  FUN_140d1d5e0(param_1 + 0x428,local_res8,&local_88,0);
  local_d8 = &PTR_FUN_143f740c8;
  if (local_c0 != 0) {
    FMemory::Free();
  }
  plVar3 = local_c8;
  local_d8 = &PTR_FUN_143f73d18;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c8)(local_c8);
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
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x238);
  if (cVar5 != '\0') {
    local_78 = *param_2;
    local_70 = param_2[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x238);
    uVar6 = FUN_140bb7440(uVar6);
    FUN_140d9f870(uVar6,&local_78,2);
  }
  if ((local_res18 != 0) && (lVar7 = FUN_140d3b710(local_res18), lVar7 != 0)) {
    local_68 = 0;
    local_60 = 0;
    uVar6 = FUN_140d3b710(local_res18);
    uVar8 = thunk_FUN_1422ca050();
    FUN_1409f97d0(uVar8,local_48,uVar6,&local_68);
    local_a8 = *param_2;
    local_a0 = (longlong *)param_2[1];
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_58 = &local_b0;
    local_b0 = &PTR_FUN_143f740c8;
    local_50 = local_48;
    local_98 = 0;
    local_90 = 0;
    FUN_140d1d8b0(param_1 + 0x478,local_res10,&local_58,0);
    local_b0 = &PTR_FUN_143f740c8;
    if (local_98 != 0) {
      FMemory::Free();
    }
    plVar3 = local_a0;
    local_b0 = &PTR_FUN_143f73d18;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a0)(local_a0);
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
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
            (param_1 + 0xf8,param_2,local_res18);
  return;
}



// FUNCTION 140d4c7f0 FUN_140d4c7f0 body=190 status=ok
// SIG undefined FUN_140d4c7f0(void)

void FUN_140d4c7f0(longlong param_1)

{
  longlong *plVar1;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FString::FString(local_48);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_1 + 0x40,local_30 + 2);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d4c8b0 FUN_140d4c8b0 body=190 status=ok
// SIG undefined FUN_140d4c8b0(void)

void FUN_140d4c8b0(longlong param_1)

{
  longlong *plVar1;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FString::FString(local_48);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_1 + 0x18,local_30 + 2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d4c970 FUN_140d4c970 body=24 status=ok
// SIG undefined FUN_140d4c970(void)

void FUN_140d4c970(longlong param_1,undefined1 *param_2)

{
  *(undefined1 *)(param_1 + 0x1e0) = *param_2;
  *(undefined1 *)(param_1 + 0x1e1) = param_2[1];
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 140d4c990 FUN_140d4c990 body=22 status=ok
// SIG undefined FUN_140d4c990(void)

void FUN_140d4c990(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x17a) = param_2;
  *(undefined1 *)(param_1 + 0x28) = 1;
  TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x490);
  return;
}



// FUNCTION 140d4c9b0 FUN_140d4c9b0 body=191 status=ok
// SIG undefined FUN_140d4c9b0(void)

void FUN_140d4c9b0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  undefined4 *local_10;
  
  if (((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
      (local_res18[0] = param_3, cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(),
      cVar1 != '\0')) && (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x238), cVar1 != '\0')) {
    local_28 = *(undefined8 *)(param_2 + 8);
    local_20 = *(longlong *)(param_2 + 0x10);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x238);
    uVar2 = FUN_140bb7440(uVar2);
    FUN_140d9f870(uVar2,&local_28,0x10);
    local_10 = local_res18;
    local_18 = param_2;
    FUN_140d1d390(param_1 + 0x4c8,local_res10,&local_18,0);
  }
  return;
}



// FUNCTION 140d4ca70 FUN_140d4ca70 body=50 status=ok
// SIG undefined FUN_140d4ca70(void)

void FUN_140d4ca70(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((((param_2[3] != 0 || param_2[2] != 0) || param_2[1] != 0) || *param_2 != 0) &&
     (((*(int *)(param_1 + 0x428) == 0 && *(int *)(param_1 + 0x424) == 0) &&
      *(int *)(param_1 + 0x420) == 0) && *(int *)(param_1 + 0x41c) == 0)) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x41c) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x424) = uVar1;
  }
  return;
}



// FUNCTION 140d4cab0 FUN_140d4cab0 body=386 status=ok
// SIG undefined FUN_140d4cab0(void)

void FUN_140d4cab0(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined ***local_res20;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar3 = *param_2;
  plVar6 = (longlong *)param_2[1];
  if (param_3 == '\0') {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_res20 = &local_68;
    local_50 = 0;
    local_68 = &PTR_FUN_143f740c8;
    local_48 = 0;
    local_60 = uVar3;
    local_58 = plVar6;
    FUN_1404bb710(param_1 + 0x518,&local_res20);
    local_68 = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    local_68 = &PTR_FUN_143f73d18;
    plVar6 = local_58;
  }
  else {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar2 = (longlong *)(param_1 + 0x518);
    local_28 = 0;
    local_40 = &PTR_FUN_143f740c8;
    local_20 = 0;
    local_38 = uVar3;
    local_30 = plVar6;
    iVar5 = FUN_1404cc060(plVar2,&local_40);
    if (iVar5 == -1) {
      iVar5 = *(int *)(param_1 + 0x520);
      lVar7 = (longlong)iVar5;
      *(int *)(param_1 + 0x520) = iVar5 + 1;
      if (*(int *)(param_1 + 0x524) < iVar5 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar2,iVar5);
      }
      lVar4 = *plVar2;
      *(undefined ***)(lVar4 + lVar7 * 0x28) = &PTR_FUN_143f73d18;
      *(undefined8 *)(lVar4 + 8 + lVar7 * 0x28) = uVar3;
      *(longlong **)(lVar4 + 0x10 + lVar7 * 0x28) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      *(undefined ***)(lVar4 + lVar7 * 0x28) = &PTR_FUN_143f740c8;
      *(undefined8 *)(lVar4 + 0x18 + lVar7 * 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x20 + lVar7 * 0x28) = 0;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 140d4cc40 FUN_140d4cc40 body=7 status=ok
// SIG undefined FUN_140d4cc40(void)

void FUN_140d4cc40(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1ba) = param_2;
  return;
}



// FUNCTION 140d4cc50 FUN_140d4cc50 body=308 status=ok
// SIG undefined FUN_140d4cc50(void)

void FUN_140d4cc50(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  plVar1 = (longlong *)(param_1 + 0x1a8);
  if (param_3 != '\0') {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar1);
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x1b0);
  if (*(int *)(param_1 + 0x1b0) == 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  iVar7 = 0;
  bVar8 = *(longlong *)*plVar1 != *param_2;
  lVar4 = 0;
  iVar5 = 0;
  do {
    lVar4 = lVar4 + 1;
    iVar6 = iVar5 + 1;
    if (lVar4 < lVar3) {
      plVar2 = (longlong *)(*plVar1 + lVar4 * 8);
      do {
        if (bVar8 != (*plVar2 != *param_2)) break;
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 1;
        plVar2 = plVar2 + 1;
      } while (lVar4 < lVar3);
    }
    if (bVar8 != false) {
      if (iVar7 != iVar5) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar7 * 8),(void *)(*plVar1 + (longlong)iVar5 * 8),
                   (longlong)(iVar6 - iVar5) << 3);
      }
      iVar7 = iVar7 + (iVar6 - iVar5);
    }
    bVar8 = (bool)(bVar8 ^ 1);
    iVar5 = iVar6;
    if (lVar3 <= lVar4) {
      *(int *)(param_1 + 0x1b0) = iVar7;
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
  } while( true );
}



// FUNCTION 140d4cd90 FUN_140d4cd90 body=137 status=ok
// SIG undefined FUN_140d4cd90(void)

void FUN_140d4cd90(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uStack_c;
  
  plVar1 = (longlong *)(param_1 + 0x198);
  plVar4 = (longlong *)*plVar1;
  iVar3 = *(int *)(param_1 + 0x1a0);
  plVar2 = plVar4 + (longlong)iVar3 * 2;
  do {
    if (plVar4 == plVar2) {
      *(int *)(param_1 + 0x1a0) = iVar3 + 1;
      if (*(int *)(param_1 + 0x1a4) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
      }
      plVar1 = (longlong *)(*plVar1 + (longlong)iVar3 * 0x10);
      *plVar1 = param_2;
      plVar1[1] = CONCAT44(uStack_c,param_3);
LAB_140d4cdf9:
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
    if (*plVar4 == param_2) {
      if ((int)plVar4[1] == param_3) {
        return;
      }
      *(int *)(plVar4 + 1) = param_3;
      goto LAB_140d4cdf9;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}



// FUNCTION 140d4ce20 FUN_140d4ce20 body=169 status=ok
// SIG undefined FUN_140d4ce20(void)

void FUN_140d4ce20(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 < 0) || (*(int *)(param_1 + 0x188) <= param_3)) {
    iVar3 = (param_3 - *(int *)(param_1 + 0x188)) + 1;
    iVar1 = *(int *)(param_1 + 0x188);
    iVar2 = iVar1 + iVar3;
    *(int *)(param_1 + 0x188) = iVar2;
    if (*(int *)(param_1 + 0x18c) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x180);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x180)),0,
               (longlong)iVar3 << 4);
  }
  FString::operator=((longlong)param_3 * 0x10 + *(longlong *)(param_1 + 0x180),param_2);
  return;
}



// FUNCTION 140d4ced0 FUN_140d4ced0 body=39 status=ok
// SIG undefined FUN_140d4ced0(void)

void FUN_140d4ced0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FDateTime::UtcNow(local_res8);
  *(undefined8 *)(param_1 + 0x2d8) = *puVar1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 140d4cf00 FUN_140d4cf00 body=39 status=ok
// SIG undefined FUN_140d4cf00(void)

void FUN_140d4cf00(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FDateTime::UtcNow(local_res8);
  *(undefined8 *)(param_1 + 0x2e0) = *puVar1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 140d4cf30 FUN_140d4cf30 body=405 status=ok
// SIG undefined FUN_140d4cf30(void)

void FUN_140d4cf30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_38 [32];
  
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x44)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  if (*(undefined2 **)(param_1 + 0x38) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  plVar1 = (longlong *)FUN_142f71d80();
  plVar4 = param_2;
  while (plVar4 != plVar1) {
    plVar4 = (longlong *)plVar4[6];
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  }
  plVar1 = (longlong *)FUN_142f71d80();
  plVar4 = param_2;
  do {
    plVar5 = param_2;
    if (plVar4 == plVar1) break;
    plVar4 = (longlong *)plVar4[6];
    plVar5 = (longlong *)0x0;
  } while (plVar4 != (longlong *)0x0);
  if (plVar5 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if ((*(int *)(param_1 + 0x44) < 0) && (*(int *)(param_1 + 0x44) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
    }
    if (*(undefined2 **)(param_1 + 0x38) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_38,plVar5);
    FSoftObjectPath::operator=(param_1 + 0x30,uVar2);
    FWeakObjectPtr::operator=(param_1 + 0x20,plVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x28) = DAT_1464b56f4;
  }
  plVar1 = (longlong *)FUN_142f71d80();
  plVar4 = param_2;
  do {
    plVar5 = param_2;
    if (plVar4 == plVar1) break;
    plVar4 = (longlong *)plVar4[6];
    plVar5 = (longlong *)0x0;
  } while (plVar4 != (longlong *)0x0);
  if ((((plVar5[0x1f] != 0) || ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] != 0)) &&
      (lVar3 = FUN_142f5a280(), lVar3 != 0)) && (*(longlong *)(lVar3 + 0x30) != 0)) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0x30);
  }
  return;
}



// FUNCTION 140d4d0d0 FUN_140d4d0d0 body=182 status=ok
// SIG undefined FUN_140d4d0d0(void)

undefined8 * FUN_140d4d0d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *in_RAX;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != param_2) {
    if (puVar2 != param_3) {
      in_RAX = (undefined8 *)
               std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               _Tidy_deallocate(puVar2);
      uVar1 = param_3[1];
      *puVar2 = *param_3;
      puVar2[1] = uVar1;
      uVar1 = param_3[3];
      puVar2[2] = param_3[2];
      puVar2[3] = uVar1;
      param_3[2] = 0;
      param_3[3] = 0xf;
      *(undefined1 *)param_3 = 0;
    }
    return in_RAX;
  }
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar1 = param_3[1];
    *puVar2 = *param_3;
    puVar2[1] = uVar1;
    uVar1 = param_3[3];
    puVar2[2] = param_3[2];
    puVar2[3] = uVar1;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
    *param_1 = puVar2;
    return puVar2;
  }
  *param_1 = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 140d4d190 FUN_140d4d190 body=57 status=ok
// SIG undefined FUN_140d4d190(void)

void FUN_140d4d190(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140d1dbf0(param_1 + 0x280,local_res8,&local_18,0);
  *(undefined1 *)(param_1 + 0x2d0) = 1;
  return;
}



// FUNCTION 140d4d1d0 FUN_140d4d1d0 body=198 status=ok
// SIG undefined FUN_140d4d1d0(void)

void FUN_140d4d1d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    if ((*(int *)(param_1 + 0x74) < 0) && (*(int *)(param_1 + 0x74) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x68,0);
    }
    if (*(undefined2 **)(param_1 + 0x68) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x68) = 0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_28);
    FSoftObjectPath::operator=(param_1 + 0x60,uVar2);
    FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x50),param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x58) = DAT_1464b56f4;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0xe0) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x30), lVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar1 + 0x30);
  }
  return;
}



// FUNCTION 140d4d2a0 FUN_140d4d2a0 body=167 status=ok
// SIG undefined FUN_140d4d2a0(void)

void FUN_140d4d2a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
    }
    if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  uVar1 = FSoftObjectPath::FSoftObjectPath(local_28);
  FSoftObjectPath::operator=(param_1 + 0x18,uVar1);
  FWeakObjectPtr::operator=((undefined4 *)(param_1 + 8),param_2);
  LOCK();
  if (DAT_1464b56f4 == 0) {
    DAT_1464b56f4 = 0;
  }
  UNLOCK();
  *(int *)(param_1 + 0x10) = DAT_1464b56f4;
  return;
}



// FUNCTION 140d4d350 FUN_140d4d350 body=9 status=ok
// SIG undefined FUN_140d4d350(void)

void FUN_140d4d350(longlong param_1)

{
  FString::operator=(param_1 + 8);
  return;
}



// FUNCTION 140d4d360 FUN_140d4d360 body=246 status=ok
// SIG undefined FUN_140d4d360(void)

void FUN_140d4d360(longlong param_1,undefined8 *param_2)

{
  wchar_t **ppwVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *_Source;
  int iVar6;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  iVar4 = *(int *)(param_2 + 1);
  iVar2 = *(int *)(param_1 + 0x418);
  if (iVar4 == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  pwVar5 = (wchar_t *)0x0;
  iVar6 = 0;
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar3 = iVar6;
  }
  if ((-1 < iVar2) && (iVar6 = iVar3, iVar2 < iVar3)) {
    iVar6 = iVar2;
  }
  local_28 = (wchar_t *)0x0;
  local_1c = 0;
  iVar4 = iVar6 + 1;
  if (iVar6 == 0) {
    iVar4 = 0;
  }
  local_20 = iVar4;
  if ((0 < iVar4) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar4 = local_20,
     pwVar5 = local_28, 0 < local_20)) {
    wcsncpy(local_28,_Source,(longlong)iVar6);
    pwVar5[iVar6] = L'\0';
  }
  ppwVar1 = (wchar_t **)(param_1 + 0x408);
  if (ppwVar1 == &local_28) {
    if (pwVar5 != (wchar_t *)0x0) {
      FMemory::Free(pwVar5);
    }
    return;
  }
  if (*ppwVar1 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  *ppwVar1 = pwVar5;
  *(int *)(param_1 + 0x410) = iVar4;
  *(undefined4 *)(param_1 + 0x414) = local_1c;
  return;
}



// FUNCTION 140d4d460 FUN_140d4d460 body=22 status=ok
// SIG undefined FUN_140d4d460(void)

void FUN_140d4d460(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x17d) = param_2;
  *(undefined1 *)(param_1 + 0x28) = 1;
  TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x4d0);
  return;
}



// FUNCTION 140d4d480 FUN_140d4d480 body=189 status=ok
// SIG undefined FUN_140d4d480(void)

void FUN_140d4d480(undefined4 *param_1)

{
  longlong *plVar1;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FString::FString(local_48);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_1 + 4,local_30 + 2);
  param_1[2] = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d4d540 FUN_140d4d540 body=203 status=ok
// SIG undefined FUN_140d4d540(void)

void FUN_140d4d540(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  lVar4 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      lVar4 = param_2;
      if (lVar3 == lVar1) break;
      lVar3 = *(longlong *)(lVar3 + 0x30);
      lVar4 = 0;
    } while (lVar3 != 0);
  }
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((*(int *)(param_1 + 0x34) < 0) && (*(int *)(param_1 + 0x34) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
    }
    if (*(undefined2 **)(param_1 + 0x28) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_28,lVar4);
    FSoftObjectPath::operator=(param_1 + 0x20,uVar2);
    FWeakObjectPtr::operator=(param_1 + 0x10,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x18) = DAT_1464b56f4;
  }
  return;
}



// FUNCTION 140d4d610 FUN_140d4d610 body=61 status=ok
// SIG undefined FUN_140d4d610(void)

undefined1 FUN_140d4d610(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x238);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x238);
    cVar2 = FUN_140bca8a0(uVar1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d4d650 FUN_140d4d650 body=42 status=ok
// SIG undefined FUN_140d4d650(void)

void FUN_140d4d650(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d4d65f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    wcstoul((wchar_t *)*param_1,(wchar_t **)0x0,0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d4d673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  wcstoul(L"",(wchar_t **)0x0,0x10);
  return;
}



// FUNCTION 140d4d680 FUN_140d4d680 body=132 status=ok
// SIG undefined FUN_140d4d680(void)

undefined8 FUN_140d4d680(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  FUN_140a6ec50(param_1,4);
  puVar3 = (undefined8 *)param_1[4];
  if ((undefined8 *)param_1[5] < puVar3 + 2) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level>
              (param_1 + 1,1);
    puVar3 = (undefined8 *)param_1[4];
  }
  param_1[4] = (longlong)(puVar3 + 2);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
  lVar1 = *param_1;
  puVar2 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) < puVar2 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar1,1);
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
  *puVar2 = 0x5b;
  return CONCAT71((int7)((ulonglong)(puVar2 + 1) >> 8),1);
}



// FUNCTION 140d4d710 FUN_140d4d710 body=132 status=ok
// SIG undefined FUN_140d4d710(void)

undefined8 FUN_140d4d710(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
  FUN_140a6ec50(param_1,3);
  puVar3 = (undefined8 *)param_1[4];
  if ((undefined8 *)param_1[5] < puVar3 + 2) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::
    Expand<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0>::Level>
              (param_1 + 1,1);
    puVar3 = (undefined8 *)param_1[4];
  }
  param_1[4] = (longlong)(puVar3 + 2);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  lVar1 = *param_1;
  puVar2 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) < puVar2 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar1,1);
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
  *puVar2 = 0x7b;
  return CONCAT71((int7)((ulonglong)(puVar2 + 1) >> 8),1);
}



// FUNCTION 140d4d7a0 FUN_140d4d7a0 body=574 status=ok
// SIG undefined FUN_140d4d7a0(void)

void FUN_140d4d7a0(longlong param_1,undefined8 *param_2,char param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar4 = FUN_142b45e90();
  local_b0 = *(undefined8 *)(lVar4 + 0x18);
  if (param_3 == '\0') {
    local_a0 = *param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_a8 = &PTR_FUN_143f740c8;
    local_90 = 0;
    local_88 = 0;
    local_98 = plVar5;
    FUN_140d487a0(param_1 + 0x3d8,&local_a8);
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
    plVar5 = (longlong *)param_2[1];
    local_78 = *param_2;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_68 = 0;
    local_80 = &PTR_FUN_143f740c8;
    local_60 = 0;
    local_70 = plVar5;
    FUN_140d487a0(param_1 + 0x428,&local_80);
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
    plVar5 = (longlong *)param_2[1];
    local_50 = *param_2;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_40 = 0;
    local_58 = &PTR_FUN_143f740c8;
    local_38 = 0;
    local_48 = plVar5;
    FUN_140d48c00(param_1 + 0x478,&local_58);
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
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (param_1 + 0xf8,param_2,0);
    FUN_142b41880(local_b0,param_2);
    FUN_142b41f30(local_b0,param_2);
  }
  else {
    local_b8 = 0;
    plVar5 = (longlong *)FUN_1404b0000(&local_b8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x148))(plVar5,param_2,1);
    }
  }
  FUN_142d92ac0(param_1,param_2,param_3,param_4,param_5);
  FUN_142b62940();
  return;
}



// FUNCTION 140d4d9e0 FUN_140d4d9e0 body=389 status=ok
// SIG undefined FUN_140d4d9e0(void)

void FUN_140d4d9e0(longlong param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_1422406d0();
  FUN_140d4db70(param_1);
  param_2 = param_2 + *(float *)(param_1 + 0x50c);
  fVar3 = *(float *)(param_1 + 0x510);
  *(float *)(param_1 + 0x50c) = param_2;
  if (param_2 < fVar3) {
    param_2 = param_2 / fVar3;
    fVar3 = 0.0;
    if ((0.0 <= param_2) && (fVar3 = param_2, 1.0 <= param_2)) {
      fVar3 = 1.0;
    }
    fVar5 = (*(float *)(param_1 + 0x51c) - *(float *)(param_1 + 0x518)) * fVar3 +
            *(float *)(param_1 + 0x518);
    *(float *)(param_1 + 0x534) = fVar5;
    goto LAB_140d4db13;
  }
  fVar5 = (param_2 - fVar3) / *(float *)(param_1 + 0x514);
  fVar4 = 0.0;
  if ((0.0 <= fVar5) && (fVar4 = fVar5, 1.0 <= fVar5)) {
    fVar4 = 1.0;
  }
  fVar5 = (*(float *)(param_1 + 0x488) - *(float *)(param_1 + 0x51c)) * fVar4 +
          *(float *)(param_1 + 0x51c);
  *(float *)(param_1 + 0x534) = fVar5;
  if (*(char *)(param_1 + 0x128) != '\x03') goto LAB_140d4db13;
  if (*(char *)(param_1 + 0x524) == '\0') {
    if (param_2 < *(float *)(param_1 + 0x514) + fVar3 + *(float *)(param_1 + 0x520))
    goto LAB_140d4db13;
    *(undefined1 *)(param_1 + 0x524) = 1;
LAB_140d4db03:
    FUN_140d3a3e0(param_1);
  }
  else if (0.5 < fVar4) {
    *(undefined1 *)(param_1 + 0x524) = 0;
    iVar2 = rand();
    if ((float)iVar2 * 3.051851e-05 < *(float *)(param_1 + 0x484)) goto LAB_140d4db03;
  }
  fVar5 = *(float *)(param_1 + 0x534);
LAB_140d4db13:
  FUN_142537e80(param_1,*(undefined8 *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x4b8),fVar5);
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    UWindDirectionalSourceComponent::SetRadius(lVar1,*(undefined4 *)(param_1 + 0x534));
    SCircularThrobber::SetPeriod(lVar1,*(undefined4 *)(param_1 + 0x534));
  }
  return;
}



// FUNCTION 140d4db70 FUN_140d4db70 body=750 status=ok
// SIG undefined FUN_140d4db70(void)

void FUN_140d4db70(longlong *param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong local_58;
  undefined4 local_50;
  
  param_2 = param_2 + *(float *)((longlong)param_1 + 0x4f4);
  *(float *)((longlong)param_1 + 0x4f4) = param_2;
  fVar8 = param_2 / *(float *)(param_1 + 0x9f);
  if (0.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = 0.0;
  }
  fVar8 = (*(float *)(param_1 + 0xa0) - *(float *)((longlong)param_1 + 0x4fc)) * fVar8 +
          *(float *)((longlong)param_1 + 0x4fc);
  *(float *)((longlong)param_1 + 0x504) = fVar8;
  if (((char)param_1[0x25] == '\x03') && (*(float *)(param_1 + 0x9f) <= param_2)) {
    fVar9 = *(float *)(param_1 + 0x8c);
    fVar10 = -fVar9;
    iVar5 = rand();
    fVar1 = *(float *)((longlong)param_1 + 0x464);
    fVar8 = fVar8 + (float)iVar5 * 3.051851e-05 * (fVar9 - fVar10) + fVar10;
    fVar9 = -fVar1;
    if ((-fVar1 <= fVar8) && (fVar9 = fVar1, fVar8 <= fVar1)) {
      fVar9 = fVar8;
    }
    *(float *)((longlong)param_1 + 0x4ec) = fVar9;
    uVar7 = FUN_142c49730(param_1 + 0x8d);
    *(undefined4 *)((longlong)param_1 + 0x4fc) = *(undefined4 *)((longlong)param_1 + 0x504);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)((longlong)param_1 + 0x4ec);
    *(undefined4 *)(param_1 + 0x9e) = uVar7;
    *(undefined4 *)(param_1 + 0x9f) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
    (**(code **)(*param_1 + 0x600))(param_1);
  }
  param_1[0xa5] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0xa6) = DAT_1468b5da8;
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((char)param_1[0x94] == '\0') || (lVar6 == 0)) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    if ((char)param_1[0x25] == '\x03') {
      fVar8 = *(float *)(lVar6 + 0x790);
    }
    else {
      plVar2 = *(longlong **)(lVar6 + 0x148);
      if (plVar2 != (longlong *)0x0) {
        lVar6 = FUN_141424d10();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          fVar8 = (float)(**(code **)(*plVar2 + 0x6f0))(plVar2);
        }
      }
    }
    fVar8 = _guard_xfg_dispatch_icall_nop(fVar8 * *(float *)(param_1 + 0x95));
    fVar8 = fVar8 * *(float *)((longlong)param_1 + 0x4a4) * 0.5;
  }
  fVar8 = *(float *)((longlong)param_1 + 0x4e4) + *(float *)((longlong)param_1 + 0x504) + fVar8;
  fVar9 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
  if (ABS(fVar8) < ABS(fVar9)) {
    fVar9 = fVar8;
  }
  fVar8 = fVar8 - fVar9;
  if (fVar8 < 0.0) {
    fVar8 = fVar8 + 360.0;
  }
  if (180.0 < fVar8) {
    fVar8 = fVar8 - 360.0;
  }
  *(float *)((longlong)param_1 + 0x52c) = fVar8;
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar6 != 0) && (cVar4 = UWorld::IsGameWorld(lVar6), cVar4 != '\0')) {
    local_58 = param_1[0xa5];
    local_50 = (undefined4)param_1[0xa6];
    AActor::SetActorRotation(param_1,&local_58,0);
  }
  return;
}



// FUNCTION 140d4de60 FUN_140d4de60 body=16084 status=ok
// SIG undefined FUN_140d4de60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d4de60(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined4 *puVar23;
  longlong *plVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  ulonglong uVar27;
  undefined4 *puVar28;
  longlong *plVar29;
  undefined1 *puVar30;
  uint uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  byte bVar34;
  longlong lVar35;
  byte *pbVar36;
  byte *pbVar37;
  ulonglong uVar38;
  undefined1 auStack_1d48 [32];
  undefined1 local_1d28;
  undefined4 local_1d20 [2];
  undefined8 *local_1d18;
  undefined8 *local_1d10;
  int local_1d08;
  byte *local_1d00;
  ulonglong local_1cf8;
  undefined8 *local_1cf0;
  int local_1ce8;
  undefined8 *local_1ce0;
  int local_1cd8;
  undefined8 *local_1cd0;
  int local_1cc8;
  undefined **local_1cc0;
  undefined8 uStack_1cb8;
  byte *pbStack_1cb0;
  uint uStack_1ca8;
  int iStack_1ca4;
  undefined8 uStack_1ca0;
  undefined8 local_1c98;
  undefined8 uStack_1c90;
  undefined4 local_1c88;
  undefined4 uStack_1c84;
  byte *pbStack_1c80;
  uint local_1c78;
  int iStack_1c74;
  undefined4 uStack_1c70;
  undefined4 uStack_1c6c;
  undefined8 local_1c68;
  undefined2 *local_1c60;
  int local_1c58;
  undefined2 *local_1c50;
  int local_1c48;
  undefined **local_1c40;
  undefined8 uStack_1c38;
  byte *local_1c30;
  uint uStack_1c28;
  int iStack_1c24;
  undefined8 local_1c20;
  undefined2 *local_1c18;
  int local_1c10;
  byte *local_1c00;
  int local_1bf8;
  int iStack_1bf4;
  longlong local_1be8 [2];
  longlong local_1bd8 [2];
  longlong local_1bc8 [2];
  longlong local_1bb8 [2];
  longlong local_1ba8 [2];
  longlong local_1b98 [2];
  undefined1 local_1b88 [8];
  longlong *local_1b80;
  longlong local_1b78 [2];
  longlong local_1b68 [2];
  undefined1 local_1b58 [8];
  longlong *local_1b50;
  longlong local_1b48 [2];
  undefined1 local_1b38 [8];
  longlong *local_1b30;
  longlong local_1b28 [2];
  undefined1 local_1b18 [8];
  longlong *local_1b10;
  longlong local_1b08 [2];
  undefined1 local_1af8 [8];
  longlong *local_1af0;
  undefined1 local_1ae8;
  undefined7 uStack_1ae7;
  undefined8 local_1ad8;
  ulonglong local_1ad0;
  undefined1 local_1ac8;
  undefined7 uStack_1ac7;
  undefined8 local_1ab8;
  ulonglong local_1ab0;
  undefined1 local_1aa8;
  undefined7 uStack_1aa7;
  undefined8 local_1a98;
  ulonglong local_1a90;
  undefined1 local_1a88;
  undefined7 uStack_1a87;
  undefined8 local_1a78;
  ulonglong local_1a70;
  undefined1 local_1a68;
  undefined7 uStack_1a67;
  undefined8 local_1a58;
  ulonglong local_1a50;
  undefined1 local_1a48;
  undefined7 uStack_1a47;
  undefined8 local_1a38;
  ulonglong local_1a30;
  undefined1 local_1a28;
  undefined7 uStack_1a27;
  undefined8 local_1a18;
  ulonglong local_1a10;
  undefined1 local_1a08;
  undefined7 uStack_1a07;
  undefined8 local_19f8;
  ulonglong local_19f0;
  undefined1 local_19e8 [16];
  undefined8 local_19d8;
  undefined8 local_19d0;
  undefined1 local_19c8 [16];
  undefined8 local_19b8;
  undefined8 local_19b0;
  undefined1 local_19a8 [16];
  undefined8 local_1998;
  undefined8 local_1990;
  undefined1 local_1988 [16];
  undefined8 local_1978;
  undefined8 local_1970;
  undefined1 local_1968 [16];
  undefined8 local_1958;
  undefined8 local_1950;
  undefined1 local_1948 [16];
  undefined8 local_1938;
  undefined8 local_1930;
  undefined1 local_1928 [16];
  undefined8 local_1918;
  undefined8 local_1910;
  undefined1 local_1908 [16];
  undefined8 local_18f8;
  undefined8 local_18f0;
  undefined1 local_18e8 [16];
  undefined8 local_18d8;
  undefined8 local_18d0;
  undefined1 local_18c8 [16];
  undefined8 local_18b8;
  undefined8 local_18b0;
  undefined1 local_18a8 [16];
  undefined8 local_1898;
  undefined8 local_1890;
  undefined1 local_1888 [16];
  undefined8 local_1878;
  undefined8 local_1870;
  undefined1 local_1868 [16];
  undefined8 local_1858;
  undefined8 local_1850;
  undefined1 local_1848 [16];
  undefined8 local_1838;
  undefined8 local_1830;
  undefined1 local_1828 [16];
  undefined8 local_1818;
  undefined8 local_1810;
  undefined1 local_1808 [16];
  undefined8 local_17f8;
  undefined8 local_17f0;
  undefined1 local_17e8 [16];
  undefined8 local_17d8;
  undefined8 local_17d0;
  undefined1 local_17c8;
  undefined7 uStack_17c7;
  undefined8 local_17b8;
  ulonglong uStack_17b0;
  undefined1 local_17a8;
  undefined7 uStack_17a7;
  undefined8 local_1798;
  ulonglong uStack_1790;
  undefined1 local_1788 [16];
  undefined8 local_1778;
  undefined8 local_1770;
  undefined1 local_1768 [128];
  longlong local_16e8;
  longlong local_16e0;
  undefined4 local_16d8;
  undefined1 local_16c8 [128];
  longlong local_1648;
  ulonglong local_1640;
  undefined4 local_1638;
  undefined1 local_1628 [128];
  longlong local_15a8;
  ulonglong local_15a0;
  undefined4 local_1598;
  undefined1 local_1588 [128];
  longlong local_1508;
  ulonglong local_1500;
  undefined4 local_14f8;
  undefined1 local_14e8 [128];
  longlong local_1468;
  ulonglong local_1460;
  undefined4 local_1458;
  undefined1 local_1448 [128];
  longlong local_13c8;
  longlong local_13c0;
  undefined4 local_13b8;
  undefined1 local_13a8 [128];
  longlong local_1328;
  longlong local_1320;
  undefined4 local_1318;
  undefined1 local_1308 [128];
  longlong local_1288;
  longlong local_1280;
  undefined4 local_1278;
  undefined1 local_1268 [128];
  longlong local_11e8;
  longlong local_11e0;
  undefined4 local_11d8;
  undefined1 local_11c8 [128];
  longlong local_1148;
  longlong local_1140;
  undefined4 local_1138;
  undefined1 local_1128 [128];
  longlong local_10a8;
  longlong local_10a0;
  undefined4 local_1098;
  undefined1 local_1088 [128];
  longlong local_1008;
  longlong local_1000;
  undefined1 local_fe8 [128];
  longlong local_f68;
  longlong local_f60;
  undefined1 local_f48 [128];
  longlong local_ec8;
  longlong local_ec0;
  undefined1 local_ea8 [128];
  longlong local_e28;
  longlong local_e20;
  undefined1 local_e08 [128];
  longlong local_d88;
  longlong local_d80;
  undefined1 local_d68 [128];
  longlong local_ce8;
  longlong local_ce0;
  undefined1 local_cc8 [128];
  longlong local_c48;
  longlong local_c40;
  undefined1 local_c28 [128];
  longlong local_ba8;
  longlong local_ba0;
  undefined1 local_b88 [128];
  longlong local_b08;
  longlong local_b00;
  undefined1 local_ae8 [128];
  longlong local_a68;
  longlong local_a60;
  undefined1 local_a48 [128];
  longlong local_9c8;
  longlong local_9c0;
  undefined1 local_9a8 [128];
  longlong local_928;
  longlong local_920;
  undefined1 local_908 [128];
  longlong local_888;
  longlong local_880;
  undefined1 local_868 [128];
  longlong local_7e8;
  longlong local_7e0;
  undefined1 local_7c8 [128];
  longlong local_748;
  longlong local_740;
  undefined1 local_728 [128];
  longlong local_6a8;
  longlong local_6a0;
  undefined1 local_688 [128];
  longlong local_608;
  longlong local_600;
  undefined1 local_5e8 [128];
  longlong local_568;
  longlong local_560;
  undefined1 local_548 [128];
  longlong local_4c8;
  longlong local_4c0;
  undefined1 local_4a8 [128];
  longlong local_428;
  longlong local_420;
  undefined1 local_408 [128];
  longlong local_388;
  longlong local_380;
  undefined1 local_368 [128];
  longlong local_2e8;
  longlong local_2e0;
  undefined1 local_2c8 [128];
  longlong local_248;
  longlong local_240;
  undefined1 local_228 [128];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_188 [128];
  longlong local_108;
  longlong local_100;
  undefined1 local_e8 [128];
  longlong local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d48;
  uVar38 = 0;
  local_1d20[0] = 0;
  uVar10 = *(ulonglong *)(param_1 + 0x538);
  local_1d00 = param_1;
  local_1c68 = param_2;
  if (uVar10 == 0) {
    lVar9 = operator_new(0x4f8);
    uVar10 = uVar38;
    if (lVar9 != 0) {
      uVar10 = FUN_1415005e0(lVar9);
    }
    *(ulonglong *)(param_1 + 0x538) = uVar10;
  }
  *(byte *)(uVar10 + 0x2e0) = param_1[0x2a];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2e1) = param_1[0x2b];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2e2) = param_1[0x2c];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2e3) = param_1[0x2d];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2e4) = param_1[0x2e];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2e5) = param_1[0x32];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x4e2) = param_1[0x33];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2e6) = param_1[0x35];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2e7) = param_1[0x36];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x2e8) = *(undefined4 *)(param_1 + 0x38);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2ec) = param_1[0x3c];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2ed) = param_1[0x3d];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2ee) = param_1[0x3e];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2ef) = param_1[0x90];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2f0) = param_1[0x40];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2f1) = param_1[0x41];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2f2) = param_1[0x42];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x2f3) = param_1[0x43];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x2f4) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x2f8) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x2fc) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x300) = *(undefined4 *)(param_1 + 0x54);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x304) = param_1[0x58];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x305) = param_1[0x59];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x306) = param_1[0x5a];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x308) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x30c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x310) = *(undefined4 *)(param_1 + 100);
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x314) = (uint)param_1[0x68];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x307) = param_1[0x69];
  *(bool *)(*(longlong *)(param_1 + 0x538) + 0x49b) = param_1[0x6a] == 0;
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x35c) = param_1[0x74];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4a4) = *(undefined4 *)(param_1 + 0x500);
  lVar9 = *(longlong *)(param_1 + 0x538);
  if (*(longlong *)(lVar9 + 0x2c0) == 0) {
    uVar11 = FUN_1414fd580(0);
    *(undefined8 *)(lVar9 + 0x2c0) = uVar11;
  }
  lVar9 = *(longlong *)(lVar9 + 0x2c0);
  iVar20 = *(int *)(lVar9 + 0x18);
  if (0 < iVar20) {
    lVar12 = *(longlong *)(lVar9 + 0x20);
    uVar10 = uVar38;
    do {
      FUN_141504840(*(undefined8 *)(lVar12 + 8 + uVar10 * 8));
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar20);
    *(undefined4 *)(lVar9 + 0x18) = 0;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x80);
  local_1ce0 = puVar13 + (longlong)*(int *)(param_1 + 0x88) * 8;
  local_1d18 = puVar13;
  if (puVar13 != local_1ce0) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x538);
      lVar12 = *(longlong *)(lVar9 + 0x2c0);
      local_1d18 = puVar13;
      if (lVar12 == 0) {
        lVar12 = FUN_1414fd580(0);
        *(longlong *)(lVar9 + 0x2c0) = lVar12;
      }
      piVar18 = *(int **)(lVar12 + 0x20);
      if (piVar18 == (int *)0x0) {
LAB_140d4e1fe:
        FUN_1439f23d0(lVar12 + 0x10,*(int *)(lVar12 + 0x1c) + 1);
        piVar18 = *(int **)(lVar12 + 0x20);
        iVar6 = *piVar18;
LAB_140d4e212:
        *piVar18 = iVar6 + 1;
        puVar17 = (undefined8 *)FUN_1414fd520(*(undefined8 *)(lVar12 + 0x10));
        *(undefined8 **)(*(longlong *)(lVar12 + 0x20) + 8 + (longlong)*(int *)(lVar12 + 0x18) * 8) =
             puVar17;
        *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
      }
      else {
        iVar20 = *(int *)(lVar12 + 0x18);
        iVar6 = *piVar18;
        if (iVar6 <= iVar20) {
          if (iVar6 == *(int *)(lVar12 + 0x1c)) goto LAB_140d4e1fe;
          goto LAB_140d4e212;
        }
        puVar17 = *(undefined8 **)(piVar18 + (longlong)iVar20 * 2 + 2);
        *(int *)(lVar12 + 0x18) = iVar20 + 1;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar13;
      }
      local_1d10 = puVar17;
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1088,puVar21);
      lVar9 = -1;
      local_1ad8 = 0;
      local_1ad0 = 0xf;
      local_1ae8 = 0;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(local_1000 + lVar9) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_1ae8);
      FUN_140d4d0d0(puVar17 + 8,&DAT_146ba2f50,&local_1ae8);
      if (0xf < local_1ad0) {
        lVar12 = CONCAT71(uStack_1ae7,local_1ae8);
        uVar10 = local_1ad0 + 1;
        lVar9 = lVar12;
        if (0xfff < uVar10) {
          lVar9 = *(longlong *)(lVar12 + -8);
          uVar10 = local_1ad0 + 0x28;
          if (0x1f < (lVar12 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar9,uVar10);
      }
      if (local_1008 != 0) {
        FMemory::Free();
      }
      if (*(int *)(puVar13 + 3) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)puVar13[2];
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_fe8,puVar21);
      lVar9 = -1;
      local_1ab8 = 0;
      local_1ab0 = 0xf;
      local_1ac8 = 0;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(local_f60 + lVar9) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_1ac8);
      FUN_140d4d0d0(puVar17 + 9,&DAT_146ba2f50,&local_1ac8);
      if (0xf < local_1ab0) {
        lVar12 = CONCAT71(uStack_1ac7,local_1ac8);
        uVar10 = local_1ab0 + 1;
        lVar9 = lVar12;
        if (0xfff < uVar10) {
          lVar9 = *(longlong *)(lVar12 + -8);
          uVar10 = local_1ab0 + 0x28;
          if (0x1f < (lVar12 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar9,uVar10);
      }
      if (local_f68 != 0) {
        FMemory::Free();
      }
      puVar14 = (undefined8 *)puVar13[4];
      local_1cf0 = puVar14 + (longlong)*(int *)(puVar13 + 5) * 4;
      puVar33 = puVar17;
      if (puVar14 != local_1cf0) {
        do {
          piVar18 = (int *)puVar17[4];
          if (piVar18 == (int *)0x0) {
LAB_140d4e408:
            FUN_1439f23d0(puVar17 + 2,*(int *)((longlong)puVar17 + 0x1c) + 1);
            piVar18 = (int *)puVar17[4];
LAB_140d4e419:
            *piVar18 = *piVar18 + 1;
            lVar9 = FUN_1414fd470(puVar17[2]);
            *(longlong *)(puVar17[4] + 8 + (longlong)*(int *)(puVar17 + 3) * 8) = lVar9;
            *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + 1;
          }
          else {
            iVar20 = *(int *)(puVar17 + 3);
            if (*piVar18 <= iVar20) {
              if (*piVar18 == *(int *)((longlong)puVar17 + 0x1c)) goto LAB_140d4e408;
              goto LAB_140d4e419;
            }
            lVar9 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
            *(int *)(puVar17 + 3) = iVar20 + 1;
          }
          if (*(int *)(puVar14 + 1) == 0) {
            puVar21 = &DAT_143f3eda8;
          }
          else {
            puVar21 = (undefined2 *)*puVar14;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_f48,puVar21);
          lVar12 = -1;
          local_1a98 = 0;
          local_1a90 = 0xf;
          local_1aa8 = 0;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(local_ec0 + lVar12) != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_1aa8);
          FUN_140d4d0d0(lVar9 + 0x28,&DAT_146ba2f50,&local_1aa8);
          if (0xf < local_1a90) {
            lVar32 = CONCAT71(uStack_1aa7,local_1aa8);
            uVar10 = local_1a90 + 1;
            lVar12 = lVar32;
            if (0xfff < uVar10) {
              lVar12 = *(longlong *)(lVar32 + -8);
              uVar10 = local_1a90 + 0x28;
              if (0x1f < (lVar32 - lVar12) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar12,uVar10);
          }
          if (local_ec8 != 0) {
            FMemory::Free();
          }
          lVar32 = puVar14[2];
          lVar12 = lVar32 + (longlong)*(int *)(puVar14 + 3) * 8;
          if (lVar32 != lVar12) {
            do {
              puVar13 = (undefined8 *)FName::ToString(lVar32,local_1be8);
              if (*(int *)(puVar13 + 1) == 0) {
                puVar21 = &DAT_143f3eda8;
              }
              else {
                puVar21 = (undefined2 *)*puVar13;
              }
              TStringConversion<TStringConvert<wchar_t,char>,128>::
              TStringConversion<TStringConvert<wchar_t,char>,128>(local_ea8,puVar21);
              lVar15 = local_e20;
              uVar11 = FUN_1439f1a80(lVar9 + 0x10);
              lVar35 = -1;
              do {
                lVar35 = lVar35 + 1;
              } while (*(char *)(lVar15 + lVar35) != '\0');
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                        (uVar11,lVar15);
              if (local_e28 != 0) {
                FMemory::Free();
              }
              if (local_1be8[0] != 0) {
                FMemory::Free();
              }
              lVar32 = lVar32 + 8;
              param_1 = local_1d00;
            } while (lVar32 != lVar12);
          }
          puVar14 = puVar14 + 4;
          puVar13 = local_1d18;
          puVar33 = local_1d10;
        } while (puVar14 != local_1cf0);
      }
      puVar17 = (undefined8 *)puVar13[6];
      local_1cd0 = puVar17 + (longlong)*(int *)(puVar13 + 7) * 4;
      if (puVar17 != local_1cd0) {
        do {
          piVar18 = (int *)puVar33[7];
          if (piVar18 == (int *)0x0) {
LAB_140d4e60b:
            FUN_1439f23d0(puVar33 + 5,*(int *)((longlong)puVar33 + 0x34) + 1);
            piVar18 = (int *)puVar33[7];
            iVar6 = *piVar18;
LAB_140d4e621:
            *piVar18 = iVar6 + 1;
            lVar9 = FUN_1414fd320(puVar33[5]);
            *(longlong *)(puVar33[7] + 8 + (longlong)*(int *)(puVar33 + 6) * 8) = lVar9;
            *(int *)(puVar33 + 6) = *(int *)(puVar33 + 6) + 1;
          }
          else {
            iVar20 = *(int *)(puVar33 + 6);
            iVar6 = *piVar18;
            if (iVar6 <= iVar20) {
              if (iVar6 == *(int *)((longlong)puVar33 + 0x34)) goto LAB_140d4e60b;
              goto LAB_140d4e621;
            }
            lVar9 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
            *(int *)(puVar33 + 6) = iVar20 + 1;
          }
          if (*(int *)(puVar17 + 1) == 0) {
            puVar21 = &DAT_143f3eda8;
          }
          else {
            puVar21 = (undefined2 *)*puVar17;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_e08,puVar21);
          lVar12 = -1;
          local_1a78 = 0;
          local_1a70 = 0xf;
          local_1a88 = 0;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(local_d80 + lVar12) != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_1a88);
          FUN_140d4d0d0(lVar9 + 0x28,&DAT_146ba2f50,&local_1a88);
          if (0xf < local_1a70) {
            lVar32 = CONCAT71(uStack_1a87,local_1a88);
            uVar10 = local_1a70 + 1;
            lVar12 = lVar32;
            if (0xfff < uVar10) {
              lVar12 = *(longlong *)(lVar32 + -8);
              uVar10 = local_1a70 + 0x28;
              if (0x1f < (lVar32 - lVar12) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FMemory::operator_delete(lVar12,uVar10);
          }
          if (local_d88 != 0) {
            FMemory::Free();
          }
          puVar13 = (undefined8 *)puVar17[2];
          local_1cf0 = puVar13 + (longlong)*(int *)(puVar17 + 3) * 3;
          if (puVar13 != local_1cf0) {
            do {
              piVar18 = *(int **)(lVar9 + 0x20);
              if (piVar18 == (int *)0x0) {
LAB_140d4e755:
                FUN_1439f23d0(lVar9 + 0x10,*(int *)(lVar9 + 0x1c) + 1);
                piVar18 = *(int **)(lVar9 + 0x20);
                iVar6 = *piVar18;
LAB_140d4e769:
                *piVar18 = iVar6 + 1;
                lVar12 = FUN_1414fd3c0(*(undefined8 *)(lVar9 + 0x10));
                *(longlong *)
                 (*(longlong *)(lVar9 + 0x20) + 8 + (longlong)*(int *)(lVar9 + 0x18) * 8) = lVar12;
                *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
              }
              else {
                iVar20 = *(int *)(lVar9 + 0x18);
                iVar6 = *piVar18;
                if (iVar6 <= iVar20) {
                  if (iVar6 == *(int *)(lVar9 + 0x1c)) goto LAB_140d4e755;
                  goto LAB_140d4e769;
                }
                lVar12 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
                *(int *)(lVar9 + 0x18) = iVar20 + 1;
              }
              puVar14 = (undefined8 *)FName::ToString(puVar13,local_1bd8);
              if (*(int *)(puVar14 + 1) == 0) {
                puVar21 = &DAT_143f3eda8;
              }
              else {
                puVar21 = (undefined2 *)*puVar14;
              }
              TStringConversion<TStringConvert<wchar_t,char>,128>::
              TStringConversion<TStringConvert<wchar_t,char>,128>(local_d68,puVar21);
              lVar32 = -1;
              local_1a58 = 0;
              local_1a50 = 0xf;
              local_1a68 = 0;
              do {
                lVar32 = lVar32 + 1;
              } while (*(char *)(local_ce0 + lVar32) != '\0');
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                        (&local_1a68);
              FUN_140d4d0d0(lVar12 + 0x10,&DAT_146ba2f50,&local_1a68);
              if (0xf < local_1a50) {
                lVar15 = CONCAT71(uStack_1a67,local_1a68);
                uVar10 = local_1a50 + 1;
                lVar32 = lVar15;
                if (0xfff < uVar10) {
                  lVar32 = *(longlong *)(lVar15 + -8);
                  uVar10 = local_1a50 + 0x28;
                  if (0x1f < (lVar15 - lVar32) - 8U) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                FMemory::operator_delete(lVar32,uVar10);
              }
              if (local_ce8 != 0) {
                FMemory::Free();
              }
              if (local_1bd8[0] != 0) {
                FMemory::Free();
              }
              lVar32 = *(longlong *)(lVar12 + 0x18);
              if (lVar32 == 0) {
                lVar32 = FUN_141544530(0);
                *(longlong *)(lVar12 + 0x18) = lVar32;
              }
              *(undefined4 *)(lVar32 + 0x10) = *(undefined4 *)(puVar13 + 1);
              lVar32 = *(longlong *)(lVar12 + 0x18);
              if (lVar32 == 0) {
                lVar32 = FUN_141544530(0);
                *(longlong *)(lVar12 + 0x18) = lVar32;
              }
              *(undefined4 *)(lVar32 + 0x14) = *(undefined4 *)((longlong)puVar13 + 0xc);
              lVar32 = *(longlong *)(lVar12 + 0x18);
              if (lVar32 == 0) {
                lVar32 = FUN_141544530(0);
                *(longlong *)(lVar12 + 0x18) = lVar32;
              }
              puVar14 = puVar13 + 2;
              puVar13 = puVar13 + 3;
              *(undefined4 *)(lVar32 + 0x18) = *(undefined4 *)puVar14;
            } while (puVar13 != local_1cf0);
          }
          puVar17 = puVar17 + 4;
          puVar13 = local_1d18;
        } while (puVar17 != local_1cd0);
      }
      puVar13 = puVar13 + 8;
      local_1d18 = puVar13;
    } while (puVar13 != local_1ce0);
  }
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear
            (*(longlong *)(param_1 + 0x538) + 0x10);
  puVar23 = *(undefined4 **)(param_1 + 0x98);
  uVar10 = (longlong)*(int *)(param_1 + 0xa0) & 0x3fffffffffffffff;
  if (puVar23 + *(int *)(param_1 + 0xa0) < puVar23) {
    uVar10 = uVar38;
  }
  uVar27 = uVar38;
  if (uVar10 != 0) {
    do {
      local_1d20[0] = *puVar23;
      FUN_1439f19c0(*(longlong *)(param_1 + 0x538) + 0x10,local_1d20);
      uVar27 = uVar27 + 1;
      puVar23 = puVar23 + 1;
    } while (uVar27 != uVar10);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x318) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x31c) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 800) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x324) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x328) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x32c) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x330) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x334) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x338) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x33c) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x340) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x344) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x348) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x34c) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x350) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x354) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x358) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x360) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x364) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x368) = *(undefined4 *)(param_1 + 0xf8);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x4ad) = param_1[0xfc];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x36c) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x370) = *(undefined4 *)(param_1 + 0x104);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x35d) = param_1[0x108];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x35e) = param_1[0x109];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x35f) = param_1[0x10a];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x374) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x378) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x37c) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x380) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 900) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x388) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x38c) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x390) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x394) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x398) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x39c) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3a0) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3a4) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3a8) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3ac) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3b0) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3b4) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3b8) = *(undefined4 *)(param_1 + 0x150);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x3cc) = param_1[0x154];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x488) = (uint)param_1[0x158];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x48c) = (uint)param_1[0x160];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3bc) = (uint)param_1[0x15c];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3c0) = (uint)param_1[0x164];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3c4) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3c8) = *(undefined4 *)(param_1 + 0x16c);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x3cd) = param_1[0x170];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3d0) = (uint)param_1[0x174];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x3ce) = param_1[0x178];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x3cf) = param_1[0x179];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x3d4) = param_1[0x17a];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x4e3) = param_1[0x17b];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x3d5) = param_1[0x17e];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x3d6) = param_1[0x17f];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3d8) = (uint)param_1[0x180];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x3d7) = param_1[0x181];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3dc) = *(undefined4 *)(param_1 + 0x6c);
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3e0) = (uint)param_1[0x2ec];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3e4) = (uint)param_1[0x2ed];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 1000) = (uint)param_1[0x2ee];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x414) = param_1[0x2e9];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x415) = param_1[0x2ea];
  puVar13 = (undefined8 *)FName::ToString(param_1 + 400,local_1bc8);
  if (*(int *)(puVar13 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*puVar13;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_cc8,puVar21);
  lVar12 = -1;
  lVar9 = *(longlong *)(param_1 + 0x538);
  local_17b8 = 0;
  uStack_17b0 = 0xf;
  local_17c8 = 0;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)(local_c40 + lVar12) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_17c8);
  FUN_140d4d0d0(lVar9 + 0x2b0,&DAT_146ba2f50,&local_17c8);
  if (0xf < uStack_17b0) {
    lVar12 = CONCAT71(uStack_17c7,local_17c8);
    uVar10 = uStack_17b0 + 1;
    lVar9 = lVar12;
    if (0xfff < uVar10) {
      lVar9 = *(longlong *)(lVar12 + -8);
      uVar10 = uStack_17b0 + 0x28;
      if (0x1f < (lVar12 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar9,uVar10);
  }
  if (local_c48 != 0) {
    FMemory::Free();
  }
  if (local_1bc8[0] != 0) {
    FMemory::Free();
  }
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x490) = (uint)param_1[0x34];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x495) = param_1[0x29];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x496) = param_1[0x2eb];
  lVar9 = *(longlong *)(param_1 + 0x538);
  iVar20 = *(int *)(lVar9 + 0x30);
  if (0 < iVar20) {
    lVar12 = *(longlong *)(lVar9 + 0x38);
    uVar10 = uVar38;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar12 + 8 + uVar10 * 8));
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar20);
    *(undefined4 *)(lVar9 + 0x30) = 0;
  }
  lVar9 = *(longlong *)(param_1 + 0x198);
  lVar12 = (longlong)*(int *)(param_1 + 0x1a0) * 0x10 + lVar9;
  for (; lVar9 != lVar12; lVar9 = lVar9 + 0x10) {
    lVar32 = *(longlong *)(param_1 + 0x538);
    piVar18 = *(int **)(lVar32 + 0x38);
    if (piVar18 == (int *)0x0) {
LAB_140d4f08c:
      FUN_1439f23d0(lVar32 + 0x28,*(int *)(lVar32 + 0x34) + 1);
      piVar18 = *(int **)(lVar32 + 0x38);
      iVar6 = *piVar18;
LAB_140d4f0a0:
      *piVar18 = iVar6 + 1;
      lVar15 = FUN_1414fd1d0(*(undefined8 *)(lVar32 + 0x28));
      *(longlong *)(*(longlong *)(lVar32 + 0x38) + 8 + (longlong)*(int *)(lVar32 + 0x30) * 8) =
           lVar15;
      *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
    }
    else {
      iVar20 = *(int *)(lVar32 + 0x30);
      iVar6 = *piVar18;
      if (iVar6 <= iVar20) {
        if (iVar6 == *(int *)(lVar32 + 0x34)) goto LAB_140d4f08c;
        goto LAB_140d4f0a0;
      }
      lVar15 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
      *(int *)(lVar32 + 0x30) = iVar20 + 1;
    }
    puVar13 = (undefined8 *)FName::ToString(lVar9,local_1bb8);
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_c28,puVar21);
    lVar32 = -1;
    local_1a38 = 0;
    local_1a30 = 0xf;
    local_1a48 = 0;
    do {
      lVar32 = lVar32 + 1;
    } while (*(char *)(local_ba0 + lVar32) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_1a48);
    FUN_140d4d0d0(lVar15 + 0x10,&DAT_146ba2f50,&local_1a48);
    if (0xf < local_1a30) {
      lVar35 = CONCAT71(uStack_1a47,local_1a48);
      uVar10 = local_1a30 + 1;
      lVar32 = lVar35;
      if (0xfff < uVar10) {
        lVar32 = *(longlong *)(lVar35 + -8);
        uVar10 = local_1a30 + 0x28;
        if (0x1f < (lVar35 - lVar32) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar32,uVar10);
    }
    if (local_ba8 != 0) {
      FMemory::Free();
    }
    if (local_1bb8[0] != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar15 + 0x18) = *(undefined4 *)(lVar9 + 8);
  }
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2c8);
  if (lVar12 == 0) {
    lVar12 = FUN_1414fd280();
    *(longlong *)(lVar9 + 0x2c8) = lVar12;
  }
  FUN_1439f1c30(lVar12 + 0x10);
  lVar12 = *(longlong *)(param_1 + 0x1a8);
  lVar9 = lVar12 + (longlong)*(int *)(param_1 + 0x1b0) * 8;
  for (; lVar12 != lVar9; lVar12 = lVar12 + 8) {
    puVar13 = (undefined8 *)FName::ToString(lVar12,local_1ba8);
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_b88,puVar21);
    lVar35 = local_b00;
    lVar32 = *(longlong *)(param_1 + 0x538);
    lVar15 = *(longlong *)(lVar32 + 0x2c8);
    if (lVar15 == 0) {
      lVar15 = FUN_1414fd280();
      *(longlong *)(lVar32 + 0x2c8) = lVar15;
    }
    uVar11 = FUN_1439f1a80(lVar15 + 0x10);
    lVar32 = -1;
    do {
      lVar32 = lVar32 + 1;
    } while (*(char *)(lVar35 + lVar32) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar11,lVar35);
    if (local_b08 != 0) {
      FMemory::Free();
    }
    if (local_1ba8[0] != 0) {
      FMemory::Free();
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2c8);
  if (lVar12 == 0) {
    lVar12 = FUN_1414fd280();
    *(longlong *)(lVar9 + 0x2c8) = lVar12;
  }
  *(byte *)(lVar12 + 0x28) = param_1[0x1b8];
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2c8);
  if (lVar12 == 0) {
    lVar12 = FUN_1414fd280();
    *(longlong *)(lVar9 + 0x2c8) = lVar12;
  }
  *(byte *)(lVar12 + 0x29) = param_1[0x1b9];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3ec) = (uint)param_1[0x1e0];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3f0) = (uint)param_1[0x1e1];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x410) = (uint)param_1[0x1e2];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x4b0) = (uint)param_1[0x1e3];
  *(bool *)(*(longlong *)(param_1 + 0x538) + 0x4af) = param_1[0x1f9] == 0;
  *(bool *)(*(longlong *)(param_1 + 0x538) + 0x4e8) = param_1[0x1fa] == 0;
  if (*(int *)(param_1 + 0x1f0) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = *(undefined2 **)(param_1 + 0x1e8);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_ae8,puVar21);
  lVar12 = -1;
  lVar9 = *(longlong *)(param_1 + 0x538);
  local_1798 = 0;
  uStack_1790 = 0xf;
  local_17a8 = 0;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)(local_a60 + lVar12) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_17a8);
  FUN_140d4d0d0(lVar9 + 0x2b8,&DAT_146ba2f50,&local_17a8);
  if (0xf < uStack_1790) {
    lVar12 = CONCAT71(uStack_17a7,local_17a8);
    uVar10 = uStack_1790 + 1;
    lVar9 = lVar12;
    if (0xfff < uVar10) {
      lVar9 = *(longlong *)(lVar12 + -8);
      uVar10 = uStack_1790 + 0x28;
      if (0x1f < (lVar12 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar9,uVar10);
  }
  if (local_a68 != 0) {
    FMemory::Free();
  }
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x3f4) = (uint)param_1[0x1f8];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x497) = param_1[0x1fb];
  *(bool *)(*(longlong *)(param_1 + 0x538) + 0x498) = param_1[0x1fc] == 0;
  *(bool *)(*(longlong *)(param_1 + 0x538) + 0x499) = param_1[0x1fd] == 0;
  *(bool *)(*(longlong *)(param_1 + 0x538) + 0x49a) = param_1[0x204] == 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x49c) = *(undefined4 *)(param_1 + 0x200);
  *(bool *)(*(longlong *)(param_1 + 0x538) + 0x4ac) = param_1[0x205] == 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4a8) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3f8) = *(undefined4 *)(param_1 + 0x254);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x3fc) = *(undefined4 *)(param_1 + 600);
  FUN_1439f1c30(*(longlong *)(param_1 + 0x538) + 0x40);
  puVar13 = *(undefined8 **)(param_1 + 0x260);
  puVar17 = puVar13 + (longlong)*(int *)(param_1 + 0x268) * 2;
  for (; puVar13 != puVar17; puVar13 = puVar13 + 2) {
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_a48,puVar21);
    lVar9 = local_9c0;
    uVar11 = FUN_1439f1a80(*(longlong *)(param_1 + 0x538) + 0x40);
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(lVar9 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar11,lVar9);
    if (local_9c8 != 0) {
      FMemory::Free();
    }
  }
  FUN_1439f1c30(*(longlong *)(param_1 + 0x538) + 0x58);
  FUN_140d47630(param_1);
  puVar13 = *(undefined8 **)(param_1 + 0x270);
  puVar17 = puVar13 + (longlong)*(int *)(param_1 + 0x278) * 2;
  for (; puVar13 != puVar17; puVar13 = puVar13 + 2) {
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    local_16e8 = 0;
    if (puVar21 == (undefined2 *)0x0) {
      local_16d8 = 0;
      local_16e0 = 0;
    }
    else {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (puVar21[lVar9] != 0);
      FUN_140d3cf10(local_1768,puVar21,lVar9,1);
    }
    lVar9 = local_16e0;
    uVar11 = FUN_1439f1a80(*(longlong *)(param_1 + 0x538) + 0x58);
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(lVar9 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar11,lVar9);
    if (local_16e8 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x538) + 0x400) = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x538) + 0x408) = *(undefined8 *)(param_1 + 0x2e0);
  lVar9 = *(longlong *)(param_1 + 0x538);
  iVar20 = *(int *)(lVar9 + 0x2a0);
  if (0 < iVar20) {
    lVar12 = *(longlong *)(lVar9 + 0x2a8);
    uVar10 = uVar38;
    do {
      FUN_141504f10(*(undefined8 *)(lVar12 + 8 + uVar10 * 8));
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar20);
    *(undefined4 *)(lVar9 + 0x2a0) = 0;
  }
  lVar9 = *(longlong *)(param_1 + 0x2f8);
  lVar12 = (longlong)*(int *)(param_1 + 0x300) * 0x58 + lVar9;
  uVar10 = uVar38;
  for (; lVar9 != lVar12; lVar9 = lVar9 + 0x58) {
    lVar32 = *(longlong *)(param_1 + 0x538);
    piVar18 = *(int **)(lVar32 + 0x2a8);
    if (piVar18 == (int *)0x0) {
LAB_140d4f773:
      FUN_1439f23d0((undefined8 *)(lVar32 + 0x298),*(int *)(lVar32 + 0x2a4) + 1);
      piVar18 = *(int **)(lVar32 + 0x2a8);
      iVar6 = *piVar18;
LAB_140d4f786:
      *piVar18 = iVar6 + 1;
      lVar15 = FUN_1414fd720(*(undefined8 *)(lVar32 + 0x298));
      *(longlong *)(*(longlong *)(lVar32 + 0x2a8) + 8 + (longlong)*(int *)(lVar32 + 0x2a0) * 8) =
           lVar15;
      *(int *)(lVar32 + 0x2a0) = *(int *)(lVar32 + 0x2a0) + 1;
    }
    else {
      iVar20 = *(int *)(lVar32 + 0x2a0);
      iVar6 = *piVar18;
      if (iVar6 <= iVar20) {
        if (iVar6 == *(int *)(lVar32 + 0x2a4)) goto LAB_140d4f773;
        goto LAB_140d4f786;
      }
      lVar15 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
      *(int *)(lVar32 + 0x2a0) = iVar20 + 1;
    }
    if ((*(longlong **)(lVar9 + 0x30) == (longlong *)0x0) ||
       (cVar5 = (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x20))(), cVar5 == '\0')) {
      uVar31 = (uint)uVar10 | 8;
      local_1648 = 0;
      puVar21 = &DAT_143f3eda8;
      if (DAT_14629aa98 != 0) {
        puVar21 = DAT_14629aa90;
      }
      if (puVar21 == (undefined2 *)0x0) {
        uVar10 = 0;
        local_1638 = 0;
        local_1640 = 0;
      }
      else {
        lVar32 = -1;
        do {
          lVar32 = lVar32 + 1;
        } while (puVar21[lVar32] != 0);
        FUN_140d3cf10(local_16c8,puVar21,lVar32,1);
        uVar10 = local_1640;
      }
    }
    else {
      uVar31 = (uint)uVar10 | 7;
      puVar13 = (undefined8 *)FUN_1425f5be0(lVar9 + 0x28,local_1b88);
      puVar13 = (undefined8 *)FJsonValue::AsString(*puVar13,local_1b98);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar13;
      }
      local_15a8 = 0;
      if (puVar21 == (undefined2 *)0x0) {
        local_1598 = 0;
        local_15a0 = 0;
        uVar10 = uVar38;
      }
      else {
        lVar32 = -1;
        do {
          lVar32 = lVar32 + 1;
        } while (puVar21[lVar32] != 0);
        FUN_140d3cf10(local_1628,puVar21,lVar32,1);
        uVar10 = local_15a0;
      }
    }
    local_1a18 = 0;
    lVar32 = -1;
    local_1a10 = 0xf;
    local_1a28 = 0;
    do {
      lVar32 = lVar32 + 1;
    } while (*(char *)(uVar10 + lVar32) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_1a28);
    FUN_140d4d0d0(lVar15 + 0x10,&DAT_146ba2f50,&local_1a28);
    if (0xf < local_1a10) {
      lVar35 = CONCAT71(uStack_1a27,local_1a28);
      uVar10 = local_1a10 + 1;
      lVar32 = lVar35;
      if (0xfff < uVar10) {
        lVar32 = *(longlong *)(lVar35 + -8);
        uVar10 = local_1a10 + 0x28;
        if (0x1f < (lVar35 - lVar32) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar32,uVar10);
    }
    if (((uVar31 & 8) != 0) && (uVar31 = uVar31 & 0xfffffff7, local_1648 != 0)) {
      FMemory::Free();
    }
    if (((uVar31 & 4) != 0) && (uVar31 = uVar31 & 0xfffffffb, local_15a8 != 0)) {
      FMemory::Free();
    }
    if (((uVar31 & 2) != 0) && (uVar31 = uVar31 & 0xfffffffd, local_1b98[0] != 0)) {
      FMemory::Free();
    }
    plVar24 = local_1b80;
    if (((uVar31 & 1) != 0) && (uVar31 = uVar31 & 0xfffffffe, local_1b80 != (longlong *)0x0)) {
      LOCK();
      plVar29 = local_1b80 + 1;
      lVar32 = *plVar29;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)lVar32 == 1) {
        (**(code **)*local_1b80)(local_1b80);
        LOCK();
        piVar18 = (int *)((longlong)plVar24 + 0xc);
        iVar20 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar24 + 8))(plVar24,1);
        }
      }
    }
    if ((*(longlong **)(lVar9 + 8) == (longlong *)0x0) ||
       (cVar5 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x20))(), cVar5 == '\0')) {
      local_1508 = 0;
      puVar21 = &DAT_143f3eda8;
      if (DAT_14629aa98 != 0) {
        puVar21 = DAT_14629aa90;
      }
      if (puVar21 == (undefined2 *)0x0) {
        local_14f8 = 0;
        local_1500 = 0;
      }
      else {
        lVar32 = -1;
        do {
          lVar32 = lVar32 + 1;
        } while (puVar21[lVar32] != 0);
        FUN_140d3cf10(local_1588,puVar21,lVar32,1);
      }
      uVar8 = 0x80;
      uVar27 = local_1500;
    }
    else {
      puVar13 = (undefined8 *)FUN_1425f5be0(lVar9,local_1af8);
      puVar13 = (undefined8 *)FJsonValue::AsString(*puVar13,local_1b78);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar13;
      }
      local_1468 = 0;
      if (puVar21 == (undefined2 *)0x0) {
        local_1458 = 0;
        local_1460 = 0;
        uVar8 = 0x70;
        uVar27 = uVar38;
      }
      else {
        lVar32 = -1;
        do {
          lVar32 = lVar32 + 1;
        } while (puVar21[lVar32] != 0);
        FUN_140d3cf10(local_14e8,puVar21,lVar32,1);
        uVar8 = 0x70;
        uVar27 = local_1460;
      }
    }
    uVar31 = uVar31 | uVar8;
    uVar10 = (ulonglong)uVar31;
    local_19f8 = 0;
    local_19f0 = 0xf;
    lVar32 = -1;
    local_1a08 = 0;
    do {
      lVar32 = lVar32 + 1;
    } while (*(char *)(uVar27 + lVar32) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_1a08);
    FUN_140d4d0d0(lVar15 + 0x18,&DAT_146ba2f50,&local_1a08);
    if (0xf < local_19f0) {
      lVar35 = CONCAT71(uStack_1a07,local_1a08);
      uVar27 = local_19f0 + 1;
      lVar32 = lVar35;
      if (0xfff < uVar27) {
        lVar32 = *(longlong *)(lVar35 + -8);
        uVar27 = local_19f0 + 0x28;
        if (0x1f < (lVar35 - lVar32) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar32,uVar27);
    }
    if (((char)uVar31 < '\0') && (uVar10 = (ulonglong)(uVar31 & 0xffffff7f), local_1508 != 0)) {
      FMemory::Free();
    }
    if (((uVar10 & 0x40) != 0) && (uVar10 = (ulonglong)((uint)uVar10 & 0xffffffbf), local_1468 != 0)
       ) {
      FMemory::Free();
    }
    if (((uVar10 & 0x20) != 0) &&
       (uVar10 = (ulonglong)((uint)uVar10 & 0xffffffdf), local_1b78[0] != 0)) {
      FMemory::Free();
    }
    plVar24 = local_1af0;
    if (((uVar10 & 0x10) != 0) &&
       (uVar10 = (ulonglong)((uint)uVar10 & 0xffffffef), local_1af0 != (longlong *)0x0)) {
      LOCK();
      plVar29 = local_1af0 + 1;
      lVar32 = *plVar29;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)lVar32 == 1) {
        (**(code **)*local_1af0)(local_1af0);
        LOCK();
        piVar18 = (int *)((longlong)plVar24 + 0xc);
        iVar20 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar24 + 8))(plVar24,1);
        }
      }
    }
    *(undefined1 *)(lVar15 + 0x20) = *(undefined1 *)(lVar9 + 0x50);
  }
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x70) + 0x50))();
  ppuVar2 = (undefined **)(param_1 + 0x308);
  local_1c88 = 0;
  local_1c00 = param_1 + 0x318;
  uStack_1c84 = 1;
  local_1c78 = 0xffffffff;
  iStack_1c74 = 0;
  uStack_1c70 = 0;
  iVar20 = 0;
  pbStack_1c80 = local_1c00;
  if (*(int *)(param_1 + 0x330) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c88);
    iVar20 = *(int *)(param_1 + 0x330);
  }
  uStack_1cb8 = CONCAT44(uStack_1c84,local_1c88);
  uStack_1c28 = local_1c78;
  iStack_1c24 = iStack_1c74;
  uStack_1ca0 = CONCAT44(uStack_1c6c,uStack_1c70);
  pbStack_1cb0 = pbStack_1c80;
  local_1bf8 = -1 << ((byte)iVar20 & 0x1f);
  local_1c30 = pbStack_1c80;
  local_1cc0 = ppuVar2;
  local_1c40 = ppuVar2;
  uStack_1c38 = uStack_1cb8;
  local_1c20 = uStack_1ca0;
  iStack_1bf4 = iVar20;
  uStack_1ca8 = uStack_1c28;
  iStack_1ca4 = iStack_1c24;
  while( true ) {
    if (((iStack_1c24 == iVar20) && (local_1c30 == local_1c00)) && (local_1c40 == ppuVar2)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) break;
    puVar3 = *local_1c40;
    uStack_1cb8 = *(undefined8 *)(puVar3 + (longlong)iStack_1c24 * 0x40 + 8);
    pbStack_1cb0 = *(byte **)(puVar3 + (longlong)iStack_1c24 * 0x40 + 0x10);
    if (pbStack_1cb0 != (byte *)0x0) {
      LOCK();
      *(int *)(pbStack_1cb0 + 8) = *(int *)(pbStack_1cb0 + 8) + 1;
      UNLOCK();
    }
    local_1cc0 = &PTR_FUN_143f740c8;
    uStack_1ca8 = 0;
    iStack_1ca4 = 0;
    uStack_1ca0 = 0;
    local_1c98 = *(undefined8 *)(puVar3 + (longlong)iStack_1c24 * 0x40 + 0x28);
    uStack_1c90 = *(undefined8 *)(puVar3 + (longlong)iStack_1c24 * 0x40 + 0x30);
    puVar13 = (undefined8 *)FUN_1425f5be0(&local_1cc0,local_1b58);
    puVar13 = (undefined8 *)FJsonValue::AsString(*puVar13,local_1b68);
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    local_13c8 = 0;
    if (puVar21 == (undefined2 *)0x0) {
      local_13b8 = 0;
      local_13c0 = 0;
    }
    else {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (puVar21[lVar9] != 0);
      FUN_140d3cf10(local_1448,puVar21,lVar9,1);
    }
    local_1778 = 0;
    lVar9 = -1;
    local_1770 = 0xf;
    local_1788[0] = 0;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)(local_13c0 + lVar9) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1788);
    uVar11 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x70) + 0x98))();
    lVar9 = FUN_140d25830(uVar11,local_1788);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_1788);
    if (local_13c8 != 0) {
      FMemory::Free();
    }
    if (local_1b68[0] != 0) {
      FMemory::Free();
    }
    plVar24 = local_1b50;
    if (local_1b50 != (longlong *)0x0) {
      LOCK();
      plVar29 = local_1b50 + 1;
      lVar12 = *plVar29;
      *(int *)plVar29 = (int)*plVar29 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_1b50)(local_1b50);
        LOCK();
        piVar18 = (int *)((longlong)plVar24 + 0xc);
        iVar6 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar24 + 8))(plVar24,1);
        }
      }
    }
    *(undefined4 *)(lVar9 + 0x18) = (undefined4)local_1c98;
    *(undefined8 *)(lVar9 + 0x10) = uStack_1c90;
    FUN_1404bf980(&local_1cc0);
    uStack_1c28 = uStack_1c28 & ~uStack_1c38._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1c38);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x418) = *(undefined4 *)(param_1 + 0x358);
  FUN_141515590(*(undefined8 *)(param_1 + 0x538));
  puVar23 = *(undefined4 **)(param_1 + 0x360);
  puVar28 = puVar23 + (longlong)*(int *)(param_1 + 0x368) * 0xc;
  for (; puVar23 != puVar28; puVar23 = puVar23 + 0xc) {
    lVar9 = FUN_140d26a70(*(longlong *)(param_1 + 0x538) + 0x100);
    *(undefined4 *)(lVar9 + 0x18) = *puVar23;
    FSoftObjectPath::ToString(puVar23 + 6,&local_1ce0);
    puVar13 = (undefined8 *)&DAT_143f3eda8;
    if (local_1cd8 != 0) {
      puVar13 = local_1ce0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_9a8,puVar13);
    lVar12 = -1;
    local_19d8 = 0;
    local_19d0 = 0xf;
    local_19e8[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_920 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_19e8);
    FUN_140d4d0d0(lVar9 + 0x10,&DAT_146ba2f50,local_19e8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_19e8);
    if (local_928 != 0) {
      FMemory::Free();
    }
    if (local_1ce0 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1415153d0(*(undefined8 *)(param_1 + 0x538));
  plVar24 = *(longlong **)(param_1 + 0x370);
  plVar29 = plVar24 + (longlong)*(int *)(param_1 + 0x378) * 2;
  for (; plVar24 != plVar29; plVar24 = plVar24 + 2) {
    lVar9 = FUN_140d26ae0(*(longlong *)(param_1 + 0x538) + 0x118);
    if ((longlong *)*plVar24 != (longlong *)0x0) {
      uVar7 = (**(code **)(*(longlong *)*plVar24 + 0x278))();
      *(undefined4 *)(lVar9 + 0x10) = uVar7;
    }
    *(int *)(lVar9 + 0x14) = (int)plVar24[1];
  }
  FUN_1439f1c30(*(longlong *)(param_1 + 0x538) + 0x130);
  puVar13 = *(undefined8 **)(param_1 + 0x380);
  puVar17 = puVar13 + (longlong)*(int *)(param_1 + 0x388) * 0x10;
  for (; puVar13 != puVar17; puVar13 = puVar13 + 0x10) {
    uVar11 = *puVar13;
    iVar20 = *(int *)(puVar13 + 1);
    uVar16 = FUN_1439f1a80(*(longlong *)(param_1 + 0x538) + 0x130);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (uVar16,uVar11,(longlong)iVar20);
  }
  FUN_1439f1c30(*(longlong *)(param_1 + 0x538) + 0x148);
  puVar13 = *(undefined8 **)(param_1 + 0x390);
  puVar17 = puVar13 + (longlong)*(int *)(param_1 + 0x398) * 0x10;
  for (; puVar13 != puVar17; puVar13 = puVar13 + 0x10) {
    uVar11 = *puVar13;
    iVar20 = *(int *)(puVar13 + 1);
    uVar16 = FUN_1439f1a80(*(longlong *)(param_1 + 0x538) + 0x148);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (uVar16,uVar11,(longlong)iVar20);
  }
  FUN_1415154b0(*(undefined8 *)(param_1 + 0x538));
  pbVar37 = *(byte **)(param_1 + 0x3a0);
  pbVar36 = pbVar37 + (longlong)*(int *)(param_1 + 0x3a8) * 0xb8;
  if (pbVar37 != pbVar36) {
    pbVar25 = pbVar37 + 0x70;
    do {
      lVar9 = FUN_140d26c30(*(longlong *)(param_1 + 0x538) + 0x160);
      *(uint *)(lVar9 + 0x40) = (uint)*pbVar37;
      puVar13 = (undefined8 *)FText::ToString(pbVar25 + -0x68);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar13;
      }
      local_1328 = 0;
      if (puVar21 == (undefined2 *)0x0) {
        local_1318 = 0;
        local_1320 = 0;
      }
      else {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (puVar21[lVar12] != 0);
        FUN_140d3cf10(local_13a8,puVar21,lVar12,1);
      }
      local_19b8 = 0;
      lVar12 = -1;
      local_19b0 = 0xf;
      local_19c8[0] = 0;
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)(local_1320 + lVar12) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_19c8);
      FUN_140d4d0d0(lVar9 + 0x10,&DAT_146ba2f50,local_19c8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_19c8);
      if (local_1328 != 0) {
        FMemory::Free();
      }
      puVar13 = (undefined8 *)FText::ToString(pbVar25 + -0x50);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar13;
      }
      local_1288 = 0;
      if (puVar21 == (undefined2 *)0x0) {
        local_1278 = 0;
        local_1280 = 0;
      }
      else {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (puVar21[lVar12] != 0);
        FUN_140d3cf10(local_1308,puVar21,lVar12,1);
      }
      local_1998 = 0;
      lVar12 = -1;
      local_1990 = 0xf;
      local_19a8[0] = 0;
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)(local_1280 + lVar12) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_19a8);
      FUN_140d4d0d0(lVar9 + 0x18,&DAT_146ba2f50,local_19a8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_19a8);
      if (local_1288 != 0) {
        FMemory::Free();
      }
      puVar13 = (undefined8 *)FText::ToString(pbVar25 + -0x38);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar13;
      }
      local_11e8 = 0;
      if (puVar21 == (undefined2 *)0x0) {
        local_11d8 = 0;
        local_11e0 = 0;
      }
      else {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (puVar21[lVar12] != 0);
        FUN_140d3cf10(local_1268,puVar21,lVar12,1);
      }
      local_1978 = 0;
      lVar12 = -1;
      local_1970 = 0xf;
      local_1988[0] = 0;
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)(local_11e0 + lVar12) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1988);
      FUN_140d4d0d0(lVar9 + 0x20,&DAT_146ba2f50,local_1988);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_1988);
      if (local_11e8 != 0) {
        FMemory::Free();
      }
      if (*(int *)(pbVar25 + -0x18) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = *(undefined2 **)(pbVar25 + -0x20);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_908,puVar21);
      lVar12 = -1;
      local_1958 = 0;
      local_1950 = 0xf;
      local_1968[0] = 0;
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)(local_880 + lVar12) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1968);
      FUN_140d4d0d0(lVar9 + 0x28,&DAT_146ba2f50,local_1968);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_1968);
      if (local_888 != 0) {
        FMemory::Free();
      }
      if (*(int *)pbVar25 == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = *(undefined2 **)(pbVar25 + -8);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_868,puVar21);
      lVar12 = -1;
      local_1938 = 0;
      local_1930 = 0xf;
      local_1948[0] = 0;
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)(local_7e0 + lVar12) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1948);
      FUN_140d4d0d0(lVar9 + 0x30,&DAT_146ba2f50,local_1948);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_1948);
      if (local_7e8 != 0) {
        FMemory::Free();
      }
      *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(pbVar25 + 8);
      *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(pbVar25 + 0x10);
      puVar13 = (undefined8 *)FUN_1425f5be0(pbVar25 + 0x18,local_1b38);
      puVar13 = (undefined8 *)FJsonValue::AsString(*puVar13,local_1b48);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar13;
      }
      local_1148 = 0;
      if (puVar21 == (undefined2 *)0x0) {
        local_1138 = 0;
        local_1140 = 0;
      }
      else {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (puVar21[lVar12] != 0);
        FUN_140d3cf10(local_11c8,puVar21,lVar12,1);
      }
      local_1918 = 0;
      lVar12 = -1;
      local_1910 = 0xf;
      local_1928[0] = 0;
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)(local_1140 + lVar12) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1928);
      FUN_140d4d0d0(lVar9 + 0x38,&DAT_146ba2f50,local_1928);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_1928);
      if (local_1148 != 0) {
        FMemory::Free();
      }
      if (local_1b48[0] != 0) {
        FMemory::Free();
      }
      plVar24 = local_1b30;
      if (local_1b30 != (longlong *)0x0) {
        LOCK();
        plVar29 = local_1b30 + 1;
        lVar12 = *plVar29;
        *(int *)plVar29 = (int)*plVar29 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1b30)(local_1b30);
          LOCK();
          piVar18 = (int *)((longlong)plVar24 + 0xc);
          iVar20 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24,1);
          }
        }
      }
      pbVar1 = pbVar25 + 0x40;
      pbVar37 = pbVar37 + 0xb8;
      pbVar25 = pbVar25 + 0xb8;
      *(byte *)(lVar9 + 0x44) = *pbVar1;
    } while (pbVar37 != pbVar36);
  }
  FUN_1439f1c30(*(longlong *)(param_1 + 0x538) + 0x178);
  puVar13 = *(undefined8 **)(param_1 + 0x3b0);
  puVar17 = puVar13 + (longlong)*(int *)(param_1 + 0x3b8) * 2;
  for (; puVar13 != puVar17; puVar13 = puVar13 + 2) {
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_7c8,puVar21);
    lVar9 = local_740;
    uVar11 = FUN_1439f1a80(*(longlong *)(param_1 + 0x538) + 0x178);
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(lVar9 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar11,lVar9);
    if (local_748 != 0) {
      FMemory::Free();
    }
  }
  FUN_1439f1c30(*(longlong *)(param_1 + 0x538) + 400);
  puVar13 = *(undefined8 **)(param_1 + 0x3c0);
  puVar17 = puVar13 + (longlong)*(int *)(param_1 + 0x3c8) * 2;
  for (; puVar13 != puVar17; puVar13 = puVar13 + 2) {
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_728,puVar21);
    lVar9 = local_6a0;
    uVar11 = FUN_1439f1a80(*(longlong *)(param_1 + 0x538) + 400);
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(lVar9 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar11,lVar9);
    if (local_6a8 != 0) {
      FMemory::Free();
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x538);
  iVar20 = *(int *)(lVar9 + 0x1b0);
  if (0 < iVar20) {
    lVar12 = *(longlong *)(lVar9 + 0x1b8);
    uVar10 = uVar38;
    do {
      FUN_141504460(*(undefined8 *)(lVar12 + 8 + uVar10 * 8));
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar20);
    *(undefined4 *)(lVar9 + 0x1b0) = 0;
    lVar9 = *(longlong *)(param_1 + 0x538);
  }
  puVar13 = *(undefined8 **)(param_1 + 0x3d0);
  puVar17 = puVar13 + (longlong)*(int *)(param_1 + 0x3d8) * 8;
  if (puVar13 != puVar17) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x538);
      piVar18 = *(int **)(lVar9 + 0x1b8);
      if (piVar18 == (int *)0x0) {
LAB_140d507f3:
        FUN_1439f23d0((undefined8 *)(lVar9 + 0x1a8),*(int *)(lVar9 + 0x1b4) + 1);
        piVar18 = *(int **)(lVar9 + 0x1b8);
        iVar6 = *piVar18;
LAB_140d50806:
        *piVar18 = iVar6 + 1;
        lVar12 = FUN_1414fcf50(*(undefined8 *)(lVar9 + 0x1a8));
        *(longlong *)(*(longlong *)(lVar9 + 0x1b8) + 8 + (longlong)*(int *)(lVar9 + 0x1b0) * 8) =
             lVar12;
        *(int *)(lVar9 + 0x1b0) = *(int *)(lVar9 + 0x1b0) + 1;
      }
      else {
        iVar20 = *(int *)(lVar9 + 0x1b0);
        iVar6 = *piVar18;
        if (iVar6 <= iVar20) {
          if (iVar6 == *(int *)(lVar9 + 0x1b4)) goto LAB_140d507f3;
          goto LAB_140d50806;
        }
        lVar12 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
        *(int *)(lVar9 + 0x1b0) = iVar20 + 1;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar13;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_688,puVar21);
      lVar9 = -1;
      local_18f8 = 0;
      local_18f0 = 0xf;
      local_1908[0] = 0;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(local_600 + lVar9) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1908);
      FUN_140d4d0d0(lVar12 + 0x10,&DAT_146ba2f50,local_1908);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_1908);
      if (local_608 != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(puVar13 + 2);
      puVar14 = (undefined8 *)FUN_1425f5be0(puVar13 + 3,local_1b18);
      puVar14 = (undefined8 *)FJsonValue::AsString(*puVar14,local_1b28);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar21 = &DAT_143f3eda8;
      }
      else {
        puVar21 = (undefined2 *)*puVar14;
      }
      local_10a8 = 0;
      if (puVar21 == (undefined2 *)0x0) {
        local_1098 = 0;
        local_10a0 = 0;
      }
      else {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (puVar21[lVar9] != 0);
        FUN_140d3cf10(local_1128,puVar21,lVar9,1);
      }
      local_18d8 = 0;
      lVar9 = -1;
      local_18d0 = 0xf;
      local_18e8[0] = 0;
      do {
        lVar9 = lVar9 + 1;
      } while (*(char *)(local_10a0 + lVar9) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_18e8);
      FUN_140d4d0d0(lVar12 + 0x18,&DAT_146ba2f50,local_18e8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_18e8);
      if (local_10a8 != 0) {
        FMemory::Free();
      }
      if (local_1b28[0] != 0) {
        FMemory::Free();
      }
      plVar24 = local_1b10;
      if (local_1b10 != (longlong *)0x0) {
        LOCK();
        plVar29 = local_1b10 + 1;
        lVar9 = *plVar29;
        *(int *)plVar29 = (int)*plVar29 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_1b10)(local_1b10);
          LOCK();
          piVar18 = (int *)((longlong)plVar24 + 0xc);
          iVar20 = *piVar18;
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (iVar20 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24,1);
          }
        }
      }
      puVar13 = puVar13 + 8;
    } while (puVar13 != puVar17);
    lVar9 = *(longlong *)(param_1 + 0x538);
  }
  FUN_141515520(lVar9);
  puVar28 = *(undefined4 **)(param_1 + 0x3e0);
  puVar23 = puVar28 + (longlong)*(int *)(param_1 + 1000) * 6;
  for (; puVar28 != puVar23; puVar28 = puVar28 + 6) {
    lVar9 = FUN_140d26ca0(*(longlong *)(param_1 + 0x538) + 0x1c0);
    *(undefined4 *)(lVar9 + 0x18) = *puVar28;
    if (puVar28[4] == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = *(undefined2 **)(puVar28 + 2);
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_5e8,puVar21);
    lVar12 = -1;
    local_18b8 = 0;
    local_18b0 = 0xf;
    local_18c8[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_560 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_18c8);
    FUN_140d4d0d0(lVar9 + 0x10,&DAT_146ba2f50,local_18c8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_18c8);
    if (local_568 != 0) {
      FMemory::Free();
    }
  }
  FUN_141515750(*(undefined8 *)(param_1 + 0x538));
  puVar26 = *(undefined1 **)(param_1 + 0x3f0);
  puVar30 = puVar26 + (longlong)*(int *)(param_1 + 0x3f8) * 0x30;
  for (; puVar26 != puVar30; puVar26 = puVar26 + 0x30) {
    lVar9 = FUN_140d26b50(*(longlong *)(param_1 + 0x538) + 0x1d8);
    *(undefined1 *)(lVar9 + 0x18) = *puVar26;
    FSoftObjectPath::ToString(puVar26 + 0x18,&local_1cf0);
    puVar13 = (undefined8 *)&DAT_143f3eda8;
    if (local_1ce8 != 0) {
      puVar13 = local_1cf0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_548,puVar13);
    lVar12 = -1;
    local_1898 = 0;
    local_1890 = 0xf;
    local_18a8[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_4c0 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_18a8);
    FUN_140d4d0d0(lVar9 + 0x10,&DAT_146ba2f50,local_18a8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_18a8);
    if (local_4c8 != 0) {
      FMemory::Free();
    }
    if (local_1cf0 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1415157c0(*(undefined8 *)(param_1 + 0x538));
  plVar24 = *(longlong **)(param_1 + 0x400);
  plVar29 = plVar24 + (longlong)*(int *)(param_1 + 0x408) * 2;
  for (; plVar24 != plVar29; plVar24 = plVar24 + 2) {
    lVar9 = FUN_140d26bc0(*(longlong *)(param_1 + 0x538) + 0x1f0);
    if ((longlong *)*plVar24 != (longlong *)0x0) {
      uVar7 = (**(code **)(*(longlong *)*plVar24 + 0x278))();
      *(undefined4 *)(lVar9 + 0x10) = uVar7;
    }
    *(char *)(lVar9 + 0x14) = (char)plVar24[1];
  }
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d0);
  if (lVar12 == 0) {
    lVar12 = FUN_1414fd000();
    *(longlong *)(lVar9 + 0x2d0) = lVar12;
  }
  *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(param_1 + 0x410);
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d0);
  if (lVar12 == 0) {
    lVar12 = FUN_1414fd000(0);
    *(longlong *)(lVar9 + 0x2d0) = lVar12;
  }
  iVar20 = *(int *)(lVar12 + 0x18);
  if (0 < iVar20) {
    lVar9 = *(longlong *)(lVar12 + 0x20);
    uVar10 = uVar38;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar9 + 8 + uVar10 * 8));
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar20);
    *(undefined4 *)(lVar12 + 0x18) = 0;
  }
  puVar23 = *(undefined4 **)(param_1 + 0x418);
  puVar28 = puVar23 + (longlong)*(int *)(param_1 + 0x420) * 0xc;
  for (; puVar23 != puVar28; puVar23 = puVar23 + 0xc) {
    lVar9 = *(longlong *)(param_1 + 0x538);
    lVar12 = *(longlong *)(lVar9 + 0x2d0);
    if (lVar12 == 0) {
      lVar12 = FUN_1414fd000(0);
      *(longlong *)(lVar9 + 0x2d0) = lVar12;
    }
    piVar18 = *(int **)(lVar12 + 0x20);
    if (piVar18 == (int *)0x0) {
LAB_140d50d59:
      FUN_1439f23d0(lVar12 + 0x10,*(int *)(lVar12 + 0x1c) + 1);
      piVar18 = *(int **)(lVar12 + 0x20);
      iVar6 = *piVar18;
LAB_140d50d6d:
      *piVar18 = iVar6 + 1;
      lVar9 = FUN_1414fd0b0(*(undefined8 *)(lVar12 + 0x10));
      *(longlong *)(*(longlong *)(lVar12 + 0x20) + 8 + (longlong)*(int *)(lVar12 + 0x18) * 8) =
           lVar9;
      *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
    }
    else {
      iVar20 = *(int *)(lVar12 + 0x18);
      iVar6 = *piVar18;
      if (iVar6 <= iVar20) {
        if (iVar6 == *(int *)(lVar12 + 0x1c)) goto LAB_140d50d59;
        goto LAB_140d50d6d;
      }
      lVar9 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
      *(int *)(lVar12 + 0x18) = iVar20 + 1;
    }
    *(undefined4 *)(lVar9 + 0x18) = *puVar23;
    FSoftObjectPath::ToString(puVar23 + 6,&local_1cd0);
    puVar13 = (undefined8 *)&DAT_143f3eda8;
    if (local_1cc8 != 0) {
      puVar13 = local_1cd0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_4a8,puVar13);
    lVar12 = -1;
    local_1878 = 0;
    local_1870 = 0xf;
    local_1888[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_420 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1888);
    FUN_140d4d0d0(lVar9 + 0x10,&DAT_146ba2f50,local_1888);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_1888);
    if (local_428 != 0) {
      FMemory::Free();
    }
    if (local_1cd0 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d0);
  if (lVar12 == 0) {
    lVar12 = FUN_1414fd000();
    *(longlong *)(lVar9 + 0x2d0) = lVar12;
  }
  *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)(param_1 + 0x428);
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d0);
  if (lVar12 == 0) {
    lVar12 = FUN_1414fd000();
    *(longlong *)(lVar9 + 0x2d0) = lVar12;
  }
  *(undefined4 *)(lVar12 + 0x34) = *(undefined4 *)(param_1 + 0x438);
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d0);
  if (lVar12 == 0) {
    lVar12 = FUN_1414fd000();
    *(longlong *)(lVar9 + 0x2d0) = lVar12;
  }
  *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(param_1 + 0x430);
  FUN_141515670(*(undefined8 *)(param_1 + 0x538));
  puVar26 = *(undefined1 **)(param_1 + 0x440);
  puVar30 = puVar26 + (longlong)*(int *)(param_1 + 0x448) * 0x30;
  for (; puVar26 != puVar30; puVar26 = puVar26 + 0x30) {
    lVar9 = FUN_140d26990(*(longlong *)(param_1 + 0x538) + 0x208);
    *(undefined1 *)(lVar9 + 0x18) = *puVar26;
    FSoftObjectPath::ToString(puVar26 + 0x18,&local_1d10);
    puVar13 = (undefined8 *)&DAT_143f3eda8;
    if (local_1d08 != 0) {
      puVar13 = local_1d10;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_408,puVar13);
    lVar12 = -1;
    local_1858 = 0;
    local_1850 = 0xf;
    local_1868[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_380 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1868);
    FUN_140d4d0d0(lVar9 + 0x10,&DAT_146ba2f50,local_1868);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_1868);
    if (local_388 != 0) {
      FMemory::Free();
    }
    if (local_1d10 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1415156e0(*(undefined8 *)(param_1 + 0x538));
  puVar30 = *(undefined1 **)(param_1 + 0x450);
  puVar26 = puVar30 + (longlong)*(int *)(param_1 + 0x458) * 0x18;
  for (; puVar30 != puVar26; puVar30 = puVar30 + 0x18) {
    lVar9 = FUN_140d26a00(*(longlong *)(param_1 + 0x538) + 0x220);
    *(undefined1 *)(lVar9 + 0x18) = *puVar30;
    FString::FString(&local_1c18,puVar30 + 8);
    puVar21 = local_1c18;
    puVar22 = &DAT_143f3eda8;
    if (local_1c10 != 0) {
      puVar22 = local_1c18;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_368,puVar22);
    lVar12 = -1;
    local_1838 = 0;
    local_1830 = 0xf;
    local_1848[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_2e0 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1848);
    FUN_140d4d0d0(lVar9 + 0x10,&DAT_146ba2f50,local_1848);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_1848);
    if (local_2e8 != 0) {
      FMemory::Free();
    }
    if (puVar21 != (undefined2 *)0x0) {
      FMemory::Free(puVar21);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d8);
  if (lVar12 == 0) {
    lVar12 = FUN_141544480();
    *(longlong *)(lVar9 + 0x2d8) = lVar12;
  }
  *(undefined4 *)(lVar12 + 0x40) = *(undefined4 *)(param_1 + 0x460);
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d8);
  if (lVar12 == 0) {
    lVar12 = FUN_141544480();
    *(longlong *)(lVar9 + 0x2d8) = lVar12;
  }
  *(undefined4 *)(lVar12 + 0x44) = *(undefined4 *)(param_1 + 0x464);
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d8);
  if (lVar12 == 0) {
    lVar12 = FUN_141544480();
    *(longlong *)(lVar9 + 0x2d8) = lVar12;
  }
  *(undefined4 *)(lVar12 + 0x48) = *(undefined4 *)(param_1 + 0x468);
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d8);
  if (lVar12 == 0) {
    lVar12 = FUN_141544480();
    *(longlong *)(lVar9 + 0x2d8) = lVar12;
  }
  FUN_140d59f30(lVar12);
  puVar13 = *(undefined8 **)(param_1 + 0x470);
  local_1ce0 = puVar13 + (longlong)*(int *)(param_1 + 0x478) * 0xb;
  if (puVar13 != local_1ce0) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x538);
      lVar12 = *(longlong *)(lVar9 + 0x2d8);
      if (lVar12 == 0) {
        lVar12 = FUN_141544480(0);
        *(longlong *)(lVar9 + 0x2d8) = lVar12;
      }
      piVar18 = *(int **)(lVar12 + 0x38);
      if (piVar18 == (int *)0x0) {
LAB_140d511ea:
        FUN_1439f23d0(lVar12 + 0x28,*(int *)(lVar12 + 0x34) + 1);
        piVar18 = *(int **)(lVar12 + 0x38);
        iVar6 = *piVar18;
LAB_140d511fe:
        *piVar18 = iVar6 + 1;
        lVar9 = FUN_141544420(*(undefined8 *)(lVar12 + 0x28));
        *(longlong *)(*(longlong *)(lVar12 + 0x38) + 8 + (longlong)*(int *)(lVar12 + 0x30) * 8) =
             lVar9;
        *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
      }
      else {
        iVar20 = *(int *)(lVar12 + 0x30);
        iVar6 = *piVar18;
        if (iVar6 <= iVar20) {
          if (iVar6 == *(int *)(lVar12 + 0x34)) goto LAB_140d511ea;
          goto LAB_140d511fe;
        }
        lVar9 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
        *(int *)(lVar12 + 0x30) = iVar20 + 1;
      }
      *(undefined4 *)(lVar9 + 0x60) = *(undefined4 *)puVar13;
      *(undefined8 *)(lVar9 + 0x58) = puVar13[1];
      *(undefined4 *)(lVar9 + 100) = *(undefined4 *)((longlong)puVar13 + 0x14);
      *(undefined4 *)(lVar9 + 0x68) = *(undefined4 *)(puVar13 + 3);
      *(undefined4 *)(lVar9 + 0x6c) = *(undefined4 *)((longlong)puVar13 + 0x1c);
      puVar17 = (undefined8 *)IMessageToken::ToText(puVar13);
      puVar28 = (undefined4 *)*puVar17;
      puVar23 = puVar28 + (longlong)*(int *)(puVar17 + 1) * 2;
      for (; puVar28 != puVar23; puVar28 = puVar28 + 2) {
        lVar12 = FUN_140d26d80(lVar9 + 0x10);
        *(undefined4 *)(lVar12 + 0x10) = *puVar28;
        *(undefined4 *)(lVar12 + 0x14) = puVar28[1];
      }
      puVar17 = (undefined8 *)UListView::OnItemSelectionChanged(puVar13);
      puVar28 = (undefined4 *)*puVar17;
      puVar23 = puVar28 + (longlong)*(int *)(puVar17 + 1) * 2;
      for (; puVar28 != puVar23; puVar28 = puVar28 + 2) {
        lVar12 = FUN_140d26d80(lVar9 + 0x28);
        *(undefined4 *)(lVar12 + 0x10) = *puVar28;
        *(undefined4 *)(lVar12 + 0x14) = puVar28[1];
      }
      puVar17 = (undefined8 *)FUN_1404b0b80();
      puVar28 = (undefined4 *)*puVar17;
      puVar23 = puVar28 + (longlong)*(int *)(puVar17 + 1) * 2;
      for (; puVar28 != puVar23; puVar28 = puVar28 + 2) {
        piVar18 = *(int **)(lVar9 + 0x50);
        if (piVar18 == (int *)0x0) {
LAB_140d512f7:
          FUN_1439f23d0(lVar9 + 0x40,*(int *)(lVar9 + 0x4c) + 1);
          piVar18 = *(int **)(lVar9 + 0x50);
LAB_140d5130a:
          *piVar18 = *piVar18 + 1;
          lVar12 = FUN_1415442d0(*(undefined8 *)(lVar9 + 0x40));
          *(longlong *)(*(longlong *)(lVar9 + 0x50) + 8 + (longlong)*(int *)(lVar9 + 0x48) * 8) =
               lVar12;
          *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
        }
        else {
          iVar20 = *(int *)(lVar9 + 0x48);
          if (*piVar18 <= iVar20) {
            if (*piVar18 == *(int *)(lVar9 + 0x4c)) goto LAB_140d512f7;
            goto LAB_140d5130a;
          }
          lVar12 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
          *(int *)(lVar9 + 0x48) = iVar20 + 1;
        }
        *(undefined4 *)(lVar12 + 0x10) = *puVar28;
        *(undefined4 *)(lVar12 + 0x14) = puVar28[1];
      }
      puVar13 = puVar13 + 0xb;
    } while (puVar13 != local_1ce0);
  }
  lVar9 = *(longlong *)(param_1 + 0x538);
  lVar12 = *(longlong *)(lVar9 + 0x2d8);
  if (lVar12 == 0) {
    lVar12 = FUN_141544480();
    *(longlong *)(lVar9 + 0x2d8) = lVar12;
  }
  FUN_140d59f90(lVar12);
  uVar10 = uVar38;
  uVar27 = uVar38;
  if (0 < *(int *)(param_1 + 0x488)) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x538);
      lVar12 = *(longlong *)(lVar9 + 0x2d8);
      if (lVar12 == 0) {
        lVar12 = FUN_141544480(0);
        *(longlong *)(lVar9 + 0x2d8) = lVar12;
      }
      piVar18 = *(int **)(lVar12 + 0x20);
      if (piVar18 == (int *)0x0) {
LAB_140d513d9:
        FUN_1439f23d0(lVar12 + 0x10,*(int *)(lVar12 + 0x1c) + 1);
        piVar18 = *(int **)(lVar12 + 0x20);
LAB_140d513eb:
        *piVar18 = *piVar18 + 1;
        lVar9 = FUN_141544340(*(undefined8 *)(lVar12 + 0x10));
        *(longlong *)(*(longlong *)(lVar12 + 0x20) + 8 + (longlong)*(int *)(lVar12 + 0x18) * 8) =
             lVar9;
        *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
      }
      else {
        iVar20 = *(int *)(lVar12 + 0x18);
        if (*piVar18 <= iVar20) {
          if (*piVar18 == *(int *)(lVar12 + 0x1c)) goto LAB_140d513d9;
          goto LAB_140d513eb;
        }
        lVar9 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
        *(int *)(lVar12 + 0x18) = iVar20 + 1;
      }
      uVar31 = (int)uVar27 + 1;
      *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(uVar10 + *(longlong *)(param_1 + 0x480));
      *(undefined4 *)(lVar9 + 0x14) = *(undefined4 *)(uVar10 + 4 + *(longlong *)(param_1 + 0x480));
      uVar10 = uVar10 + 8;
      uVar27 = (ulonglong)uVar31;
    } while ((int)uVar31 < *(int *)(param_1 + 0x488));
  }
  FUN_1439f1c30(*(longlong *)(param_1 + 0x538) + 0x250);
  puVar13 = *(undefined8 **)(param_1 + 0x1d0);
  puVar17 = puVar13 + (longlong)*(int *)(param_1 + 0x1d8) * 2;
  for (; puVar13 != puVar17; puVar13 = puVar13 + 2) {
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2c8,puVar21);
    lVar9 = local_240;
    uVar11 = FUN_1439f1a80(*(longlong *)(param_1 + 0x538) + 0x250);
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(lVar9 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar11,lVar9);
    if (local_248 != 0) {
      FMemory::Free();
    }
  }
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear
            (*(longlong *)(param_1 + 0x538) + 0x280);
  uVar10 = uVar38;
  uVar27 = uVar38;
  if (0 < *(int *)(param_1 + 0x218)) {
    do {
      local_1d18 = (undefined8 *)
                   CONCAT44(local_1d18._4_4_,
                            *(undefined4 *)(uVar10 + *(longlong *)(param_1 + 0x210)));
      FUN_1439f19c0(*(longlong *)(param_1 + 0x538) + 0x280,&local_1d18);
      uVar31 = (int)uVar27 + 1;
      uVar10 = uVar10 + 4;
      uVar27 = (ulonglong)uVar31;
    } while ((int)uVar31 < *(int *)(param_1 + 0x218));
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4b4) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4b8) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4bc) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4dc) = *(undefined4 *)(param_1 + 0x22c);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x4e0) = param_1[0x230];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x4e1) = param_1[0x231];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4d8) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4c0) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4c4) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4c8) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4cc) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4d0) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4d4) = *(undefined4 *)(param_1 + 0x248);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x416) = param_1[0x2f];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x417) = param_1[0x30];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x450) = param_1[0x31];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x41c) = *(undefined4 *)(param_1 + 0x44);
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x424) = (uint)param_1[0x6b];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x42c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4a0) = *(undefined4 *)(param_1 + 0x78);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x46d) = param_1[0x17c];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x46e) = param_1[0x17d];
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x46f) = param_1[0x188];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x470) = (uint)param_1[0x250];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x474) = (uint)param_1[0x251];
  *(uint *)(*(longlong *)(param_1 + 0x538) + 0x478) = (uint)param_1[0x252];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x47c) = *(undefined4 *)(param_1 + 0x2f0);
  *(byte *)(*(longlong *)(param_1 + 0x538) + 0x494) = param_1[0x1c0];
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x480) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x484) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4ec) = *(undefined4 *)(param_1 + 0x184);
  FUN_141515600(*(undefined8 *)(param_1 + 0x538));
  lVar9 = *(longlong *)(param_1 + 0x4c0);
  lVar12 = (longlong)*(int *)(param_1 + 0x4c8) * 0x38 + lVar9;
  for (; lVar9 != lVar12; lVar9 = lVar9 + 0x38) {
    lVar32 = FUN_140d26d10(*(longlong *)(param_1 + 0x538) + 0x238);
    puVar13 = (undefined8 *)FMorSoftSpawnableAssetPtr::ToString(lVar9,local_1b08);
    if (*(int *)(puVar13 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar13;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_228,puVar21);
    lVar15 = -1;
    local_1818 = 0;
    local_1810 = 0xf;
    local_1828[0] = 0;
    do {
      lVar15 = lVar15 + 1;
    } while (*(char *)(local_1a0 + lVar15) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1828);
    FUN_140d4d0d0(lVar32 + 0x40,&DAT_146ba2f50,local_1828);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_1828);
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (local_1b08[0] != 0) {
      FMemory::Free();
    }
    puVar23 = *(undefined4 **)(lVar9 + 0x28);
    puVar28 = puVar23 + (longlong)*(int *)(lVar9 + 0x30) * 4;
    for (; puVar23 != puVar28; puVar23 = puVar23 + 4) {
      piVar18 = *(int **)(lVar32 + 0x38);
      if (piVar18 == (int *)0x0) {
LAB_140d518d5:
        FUN_1439f23d0(lVar32 + 0x28,*(int *)(lVar32 + 0x34) + 1);
        piVar18 = *(int **)(lVar32 + 0x38);
LAB_140d518e7:
        *piVar18 = *piVar18 + 1;
        lVar15 = FUN_141544200(*(undefined8 *)(lVar32 + 0x28));
        *(longlong *)(*(longlong *)(lVar32 + 0x38) + 8 + (longlong)*(int *)(lVar32 + 0x30) * 8) =
             lVar15;
        *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
      }
      else {
        iVar20 = *(int *)(lVar32 + 0x30);
        if (*piVar18 <= iVar20) {
          if (*piVar18 == *(int *)(lVar32 + 0x34)) goto LAB_140d518d5;
          goto LAB_140d518e7;
        }
        lVar15 = *(longlong *)(piVar18 + (longlong)iVar20 * 2 + 2);
        *(int *)(lVar32 + 0x30) = iVar20 + 1;
      }
      *(undefined4 *)(lVar15 + 0x10) = *puVar23;
      *(undefined4 *)(lVar15 + 0x14) = puVar23[2];
      *(undefined1 *)(lVar15 + 0x18) = *(undefined1 *)(puVar23 + 1);
      *(undefined1 *)(lVar15 + 0x19) = *(undefined1 *)(puVar23 + 3);
    }
  }
  FUN_141515440(*(undefined8 *)(param_1 + 0x538));
  puVar13 = *(undefined8 **)(param_1 + 0x508);
  local_1cf0 = puVar13 + (longlong)*(int *)(param_1 + 0x510) * 0xc;
  local_1d10 = puVar13;
  if (puVar13 != local_1cf0) {
    piVar18 = (int *)(puVar13 + 5);
    do {
      local_1d10 = puVar13;
      lVar9 = FUN_140d26920(*(longlong *)(param_1 + 0x538) + 0x268);
      *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)puVar13;
      *(char *)(lVar9 + 0x4c) = (char)piVar18[-9];
      *(undefined1 *)(lVar9 + 0x4d) = *(undefined1 *)((longlong)piVar18 + -0x23);
      *(int *)(lVar9 + 0x50) = piVar18[-8];
      *(int *)(lVar9 + 0x54) = piVar18[-7];
      puVar23 = *(undefined4 **)(piVar18 + -6);
      puVar28 = puVar23 + (longlong)piVar18[-4] * 0xc;
      for (; puVar23 != puVar28; puVar23 = puVar23 + 0xc) {
        piVar19 = *(int **)(lVar9 + 0x20);
        if (piVar19 == (int *)0x0) {
LAB_140d519fa:
          FUN_1439f23d0(lVar9 + 0x10,*(int *)(lVar9 + 0x1c) + 1);
          piVar19 = *(int **)(lVar9 + 0x20);
          iVar6 = *piVar19;
LAB_140d51a0e:
          *piVar19 = iVar6 + 1;
          lVar12 = FUN_141543c30(*(undefined8 *)(lVar9 + 0x10));
          *(longlong *)(*(longlong *)(lVar9 + 0x20) + 8 + (longlong)*(int *)(lVar9 + 0x18) * 8) =
               lVar12;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
        }
        else {
          iVar20 = *(int *)(lVar9 + 0x18);
          iVar6 = *piVar19;
          if (iVar6 <= iVar20) {
            if (iVar6 == *(int *)(lVar9 + 0x1c)) goto LAB_140d519fa;
            goto LAB_140d51a0e;
          }
          lVar12 = *(longlong *)(piVar19 + (longlong)iVar20 * 2 + 2);
          *(int *)(lVar9 + 0x18) = iVar20 + 1;
        }
        *(undefined4 *)(lVar12 + 0x18) = *puVar23;
        FSoftObjectPath::ToString(puVar23 + 6,&local_1c60);
        puVar21 = &DAT_143f3eda8;
        if (local_1c58 != 0) {
          puVar21 = local_1c60;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_188,puVar21);
        lVar32 = -1;
        local_17f8 = 0;
        local_17f0 = 0xf;
        local_1808[0] = 0;
        do {
          lVar32 = lVar32 + 1;
        } while (*(char *)(local_100 + lVar32) != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_1808);
        FUN_140d4d0d0(lVar12 + 0x10,&DAT_146ba2f50,local_1808);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_1808);
        if (local_108 != 0) {
          FMemory::Free();
        }
        if (local_1c60 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      FSoftObjectPath::ToString(piVar18 + 6,&local_1c50);
      puVar21 = &DAT_143f3eda8;
      if (local_1c48 != 0) {
        puVar21 = local_1c50;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar21);
      lVar12 = -1;
      local_17d8 = 0;
      local_17d0 = 0xf;
      local_17e8[0] = 0;
      do {
        lVar12 = lVar12 + 1;
      } while (*(char *)(local_60 + lVar12) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_17e8);
      FUN_140d4d0d0(lVar9 + 0x40,&DAT_146ba2f50,local_17e8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_17e8);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_1c50 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar26 = *(undefined1 **)(piVar18 + -2);
      uVar10 = (longlong)*piVar18;
      if (puVar26 + *piVar18 < puVar26) {
        uVar10 = uVar38;
      }
      uVar27 = uVar38;
      if (uVar10 != 0) {
        do {
          piVar19 = *(int **)(lVar9 + 0x38);
          local_1d28 = *puVar26;
          if (piVar19 == (int *)0x0) {
LAB_140d51bdc:
            FUN_1439f23d0(lVar9 + 0x28,*(int *)(lVar9 + 0x34) + 1);
            piVar19 = *(int **)(lVar9 + 0x38);
LAB_140d51bee:
            *piVar19 = *piVar19 + 1;
            lVar12 = FUN_141543f60(*(undefined8 *)(lVar9 + 0x28));
            *(longlong *)(*(longlong *)(lVar9 + 0x38) + 8 + (longlong)*(int *)(lVar9 + 0x30) * 8) =
                 lVar12;
            *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + 1;
          }
          else {
            iVar20 = *(int *)(lVar9 + 0x30);
            if (*piVar19 <= iVar20) {
              if (*piVar19 == *(int *)(lVar9 + 0x34)) goto LAB_140d51bdc;
              goto LAB_140d51bee;
            }
            lVar12 = *(longlong *)(piVar19 + (longlong)iVar20 * 2 + 2);
            *(int *)(lVar9 + 0x30) = iVar20 + 1;
          }
          puVar26 = puVar26 + 1;
          uVar27 = uVar27 + 1;
          *(undefined1 *)(lVar12 + 0x10) = local_1d28;
        } while (uVar27 != uVar10);
      }
      piVar18 = piVar18 + 0x18;
      puVar13 = local_1d10 + 0xc;
      local_1d10 = puVar13;
    } while (puVar13 != local_1cf0);
  }
  local_1d00 = (byte *)0x0;
  local_1cf8 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x538) + 0x4e4) = *(undefined4 *)(param_1 + 0x518);
  uVar11 = FUN_1415021f0(*(undefined8 *)(param_1 + 0x538));
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(&local_1d00,uVar11);
  pbVar37 = local_1d00;
  iVar20 = (int)local_1cf8;
  FUN_1439f0f80(*(undefined8 *)(param_1 + 0x538),local_1d00,local_1cf8 & 0xffffffff);
  if ((param_1[0x530] != 0) && (0 < iVar20)) {
    lVar9 = (longlong)&DAT_144502190 - (longlong)pbVar37;
    do {
      uVar31 = (uint)uVar38;
      if ((int)uVar31 < 0x20) {
        bVar34 = pbVar37[lVar9];
      }
      else {
        bVar34 = pbVar37[-0x20];
      }
      uVar8 = uVar31 & 0x8000001f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
      }
      uVar38 = (ulonglong)(uVar31 + 1);
      *pbVar37 = *pbVar37 ^ (&DAT_1445021e0)[(int)uVar8] ^ bVar34;
      pbVar37 = pbVar37 + 1;
    } while ((int)(uVar31 + 1) < iVar20);
  }
  FUN_140d25120(local_1c68,&local_1d00);
  if (local_1d00 != (byte *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d51d40 FUN_140d51d40 body=21006 status=ok
// SIG undefined FUN_140d51d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d51d40(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int *piVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined2 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  byte *pbVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  undefined4 *puVar34;
  undefined1 *puVar35;
  longlong *plVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined4 *puVar40;
  byte *pbVar41;
  undefined1 auStack_3aa8 [32];
  ulonglong local_3a88;
  undefined8 *local_3a78;
  longlong local_3a70;
  undefined8 *local_3a68;
  byte *local_3a60;
  undefined8 local_3a58;
  ulonglong local_3a50;
  undefined4 local_3a48 [2];
  undefined4 local_3a40 [2];
  undefined4 local_3a38 [2];
  undefined4 local_3a30 [2];
  undefined1 local_3a28 [8];
  longlong local_3a20;
  undefined8 local_3a18;
  undefined2 *local_3a10;
  int local_3a08;
  undefined2 *local_3a00;
  int local_39f8;
  undefined2 *local_39f0;
  int local_39e8;
  undefined2 *local_39e0;
  int local_39d8;
  undefined2 *local_39d0;
  int local_39c8;
  undefined2 *local_39c0;
  int local_39b8;
  undefined2 *local_39b0;
  int local_39a8;
  undefined2 *local_39a0;
  int local_3998;
  undefined2 *local_3990;
  int local_3988;
  undefined2 *local_3980;
  int local_3978;
  undefined2 *local_3970;
  int local_3968;
  undefined2 *local_3960;
  int local_3958;
  undefined2 *local_3950;
  int local_3948;
  undefined2 *local_3940;
  int local_3938;
  undefined2 *local_3930;
  int local_3928;
  undefined2 *local_3920;
  int local_3918;
  undefined2 *local_3910;
  int local_3908;
  undefined2 *local_3900;
  int local_38f8;
  undefined2 *local_38f0;
  int local_38e8;
  undefined2 *local_38e0;
  int local_38d8;
  undefined2 *local_38d0;
  int local_38c8;
  undefined2 *local_38c0;
  int local_38b8;
  undefined2 *local_38b0;
  int local_38a8;
  undefined2 *local_38a0;
  int local_3898;
  undefined4 local_3890;
  undefined8 local_388c;
  undefined8 local_3880;
  longlong local_3878;
  undefined8 local_3870;
  longlong *local_3868;
  undefined8 uStack_3860;
  undefined4 local_3858;
  undefined4 uStack_3854;
  uint uStack_3850;
  int iStack_384c;
  undefined4 local_3848;
  undefined4 uStack_3844;
  longlong *local_3840;
  undefined8 uStack_3838;
  undefined4 local_3830;
  undefined4 uStack_382c;
  uint uStack_3828;
  int iStack_3824;
  undefined4 local_3820;
  undefined4 uStack_381c;
  longlong *local_3818;
  undefined8 uStack_3810;
  undefined4 local_3808;
  undefined4 uStack_3804;
  uint uStack_3800;
  int iStack_37fc;
  undefined4 local_37f8;
  undefined4 uStack_37f4;
  undefined1 local_37f0 [8];
  undefined2 *local_37e8;
  int local_37e0;
  longlong *local_37d8;
  undefined8 uStack_37d0;
  longlong local_37c8;
  undefined8 uStack_37c0;
  undefined8 local_37b8;
  longlong *local_37b0;
  undefined8 uStack_37a8;
  longlong local_37a0;
  undefined8 uStack_3798;
  undefined8 local_3790;
  longlong *local_3788;
  undefined8 uStack_3780;
  longlong local_3778;
  undefined8 uStack_3770;
  undefined8 local_3768;
  undefined1 local_3760 [16];
  undefined1 local_3750 [16];
  undefined1 local_3740 [16];
  undefined1 local_3730 [16];
  undefined1 local_3720 [16];
  undefined1 local_3710 [16];
  undefined1 local_3700 [16];
  undefined1 local_36f0 [16];
  undefined1 local_36e0 [16];
  undefined1 local_36d0 [16];
  undefined1 local_36c0 [16];
  undefined1 local_36b0 [16];
  undefined1 local_36a0 [16];
  undefined1 local_3690 [16];
  undefined1 local_3680 [16];
  undefined1 local_3670 [16];
  undefined1 local_3660 [16];
  undefined1 local_3650 [16];
  undefined8 local_3640;
  undefined8 uStack_3638;
  longlong local_3630 [2];
  longlong local_3620 [2];
  undefined1 local_3610 [16];
  undefined1 local_3600 [16];
  undefined1 local_35f0 [16];
  undefined1 local_35e0 [16];
  undefined1 local_35d0 [16];
  undefined1 local_35c0 [32];
  undefined1 local_35a0 [32];
  undefined1 local_3580 [32];
  undefined1 local_3560 [32];
  undefined1 local_3540 [32];
  undefined1 local_3520 [32];
  longlong *local_3500;
  undefined8 uStack_34f8;
  undefined8 uStack_34f0;
  undefined8 uStack_34e8;
  undefined8 uStack_34e0;
  undefined1 local_34d8;
  undefined7 uStack_34d7;
  ulonglong local_34c8;
  ulonglong local_34c0;
  undefined1 local_34b8;
  undefined7 uStack_34b7;
  undefined8 local_34a8;
  ulonglong local_34a0;
  undefined1 local_3498;
  undefined7 uStack_3497;
  undefined8 local_3488;
  ulonglong local_3480;
  undefined1 local_3478;
  undefined7 uStack_3477;
  undefined8 local_3468;
  ulonglong local_3460;
  undefined1 local_3458;
  undefined7 uStack_3457;
  undefined8 local_3448;
  ulonglong local_3440;
  undefined1 local_3438;
  undefined7 uStack_3437;
  undefined8 local_3428;
  ulonglong local_3420;
  undefined1 local_3418;
  undefined7 uStack_3417;
  undefined8 local_3408;
  ulonglong local_3400;
  undefined1 local_33f8;
  undefined7 uStack_33f7;
  undefined8 local_33e8;
  ulonglong uStack_33e0;
  undefined1 local_33d8;
  undefined7 uStack_33d7;
  undefined8 local_33c8;
  ulonglong uStack_33c0;
  undefined1 local_33b8 [16];
  undefined8 local_33a8;
  undefined8 local_33a0;
  undefined1 local_3398 [16];
  undefined8 local_3388;
  undefined8 local_3380;
  undefined1 local_3378 [16];
  undefined8 local_3368;
  undefined8 local_3360;
  undefined1 local_3358 [16];
  undefined8 local_3348;
  undefined8 local_3340;
  undefined1 local_3338 [16];
  undefined8 local_3328;
  undefined8 local_3320;
  undefined1 local_3318 [16];
  undefined8 local_3308;
  undefined8 local_3300;
  undefined1 local_32f8 [16];
  undefined8 local_32e8;
  undefined8 local_32e0;
  undefined1 local_32d8 [16];
  undefined8 local_32c8;
  undefined8 local_32c0;
  undefined1 local_32b8 [16];
  undefined8 local_32a8;
  undefined8 local_32a0;
  undefined1 local_3298 [16];
  undefined8 local_3288;
  undefined8 local_3280;
  undefined1 local_3278 [16];
  undefined8 local_3268;
  undefined8 local_3260;
  undefined1 local_3258 [16];
  undefined8 local_3248;
  undefined8 local_3240;
  undefined1 local_3238 [16];
  undefined8 local_3228;
  undefined8 local_3220;
  undefined1 local_3218 [16];
  undefined8 local_3208;
  undefined8 local_3200;
  undefined1 local_31f8 [16];
  undefined8 local_31e8;
  undefined8 local_31e0;
  undefined1 local_31d8 [16];
  undefined8 local_31c8;
  undefined8 local_31c0;
  undefined1 local_31b8 [16];
  undefined8 local_31a8;
  undefined8 local_31a0;
  undefined1 local_3198 [16];
  undefined8 local_3188;
  undefined8 local_3180;
  undefined1 local_3178 [16];
  undefined8 local_3168;
  undefined8 local_3160;
  undefined1 local_3158 [16];
  undefined8 local_3148;
  undefined8 local_3140;
  undefined1 local_3138 [16];
  undefined8 local_3128;
  undefined8 local_3120;
  undefined1 local_3118 [16];
  undefined8 local_3108;
  undefined8 local_3100;
  undefined1 local_30f8 [16];
  undefined8 local_30e8;
  undefined8 local_30e0;
  undefined1 local_30d8 [16];
  undefined8 local_30c8;
  undefined8 local_30c0;
  undefined1 local_30b8 [16];
  undefined8 local_30a8;
  undefined8 local_30a0;
  undefined1 local_3098 [16];
  undefined8 local_3088;
  undefined8 local_3080;
  undefined1 local_3078 [16];
  undefined8 local_3068;
  undefined8 local_3060;
  undefined1 local_3058 [16];
  undefined8 local_3048;
  undefined8 local_3040;
  undefined1 local_3038 [16];
  undefined8 local_3028;
  undefined8 local_3020;
  undefined1 local_3018 [16];
  undefined8 local_3008;
  undefined8 local_3000;
  undefined1 local_2ff8 [16];
  undefined8 local_2fe8;
  undefined8 local_2fe0;
  undefined1 local_2fd8 [128];
  longlong local_2f58;
  longlong local_2f50;
  undefined4 local_2f48;
  undefined1 local_2f38 [128];
  longlong local_2eb8;
  longlong local_2eb0;
  undefined1 local_2e98 [128];
  longlong local_2e18;
  longlong local_2e10;
  undefined1 local_2df8 [128];
  longlong local_2d78;
  longlong local_2d70;
  undefined1 local_2d58 [128];
  longlong local_2cd8;
  longlong local_2cd0;
  undefined1 local_2cb8 [128];
  longlong local_2c38;
  longlong local_2c30;
  undefined1 local_2c18 [128];
  longlong local_2b98;
  longlong local_2b90;
  undefined1 local_2b78 [128];
  longlong local_2af8;
  longlong local_2af0;
  undefined1 local_2ad8 [128];
  longlong local_2a58;
  longlong local_2a50;
  undefined1 local_2a38 [128];
  longlong local_29b8;
  longlong local_29b0;
  undefined1 local_2998 [128];
  longlong local_2918;
  longlong local_2910;
  undefined1 local_28f8 [128];
  longlong local_2878;
  longlong local_2870;
  undefined1 local_2858 [128];
  longlong local_27d8;
  longlong local_27d0;
  undefined1 local_27b8 [128];
  longlong local_2738;
  longlong local_2730;
  undefined1 local_2718 [128];
  longlong local_2698;
  longlong local_2690;
  undefined1 local_2678 [128];
  longlong local_25f8;
  longlong local_25f0;
  undefined1 local_25d8 [128];
  longlong local_2558;
  longlong local_2550;
  undefined1 local_2538 [128];
  longlong local_24b8;
  longlong local_24b0;
  undefined1 local_2498 [128];
  longlong local_2418;
  longlong local_2410;
  undefined1 local_23f8 [128];
  longlong local_2378;
  longlong local_2370;
  undefined1 local_2358 [128];
  longlong local_22d8;
  longlong local_22d0;
  undefined1 local_22b8 [128];
  longlong local_2238;
  longlong local_2230;
  undefined1 local_2218 [128];
  longlong local_2198;
  longlong local_2190;
  undefined1 local_2178 [128];
  longlong local_20f8;
  longlong local_20f0;
  undefined1 local_20d8 [128];
  longlong local_2058;
  longlong local_2050;
  undefined1 local_2038 [128];
  longlong local_1fb8;
  longlong local_1fb0;
  undefined1 local_1f98 [128];
  longlong local_1f18;
  longlong local_1f10;
  undefined1 local_1ef8 [128];
  longlong local_1e78;
  longlong local_1e70;
  undefined1 local_1e58 [128];
  longlong local_1dd8;
  longlong local_1dd0;
  undefined1 local_1db8 [128];
  longlong local_1d38;
  longlong local_1d30;
  undefined1 local_1d18 [128];
  longlong local_1c98;
  longlong local_1c90;
  undefined1 local_1c78 [128];
  longlong local_1bf8;
  longlong local_1bf0;
  undefined1 local_1bd8 [128];
  longlong local_1b58;
  longlong local_1b50;
  undefined1 local_1b38 [128];
  longlong local_1ab8;
  longlong local_1ab0;
  undefined1 local_1a98 [128];
  longlong local_1a18;
  longlong local_1a10;
  undefined1 local_19f8 [128];
  longlong local_1978;
  longlong local_1970;
  undefined1 local_1958 [128];
  longlong local_18d8;
  longlong local_18d0;
  undefined1 local_18b8 [128];
  longlong local_1838;
  longlong local_1830;
  undefined1 local_1818 [128];
  longlong local_1798;
  longlong local_1790;
  undefined1 local_1778 [136];
  undefined8 local_16f0;
  undefined1 local_16d8 [136];
  undefined8 local_1650;
  undefined1 local_1638 [136];
  undefined8 local_15b0;
  undefined1 local_1598 [136];
  undefined8 local_1510;
  undefined1 local_14f8 [136];
  undefined8 local_1470;
  undefined1 local_1458 [136];
  undefined8 local_13d0;
  undefined1 local_13b8 [136];
  undefined8 local_1330;
  undefined1 local_1318 [136];
  undefined8 local_1290;
  undefined1 local_1278 [136];
  undefined8 local_11f0;
  undefined1 local_11d8 [136];
  undefined8 local_1150;
  undefined1 local_1138 [136];
  undefined8 local_10b0;
  undefined1 local_1098 [136];
  undefined8 local_1010;
  undefined1 local_ff8 [136];
  undefined8 local_f70;
  undefined1 local_f58 [136];
  undefined8 local_ed0;
  undefined1 local_eb8 [136];
  undefined8 local_e30;
  undefined1 local_e18 [136];
  undefined8 local_d90;
  undefined1 local_d78 [136];
  undefined8 local_cf0;
  undefined1 local_cd8 [136];
  undefined8 local_c50;
  undefined1 local_c38 [136];
  undefined8 local_bb0;
  undefined1 local_b98 [136];
  undefined8 local_b10;
  undefined1 local_af8 [136];
  undefined8 local_a70;
  undefined1 local_a58 [136];
  undefined8 local_9d0;
  undefined1 local_9b8 [136];
  undefined8 local_930;
  undefined1 local_918 [136];
  undefined8 local_890;
  undefined1 local_878 [136];
  undefined8 local_7f0;
  undefined1 local_7d8 [136];
  undefined8 local_750;
  undefined1 local_738 [136];
  undefined8 local_6b0;
  undefined1 local_698 [136];
  undefined8 local_610;
  undefined1 local_5f8 [136];
  undefined8 local_570;
  undefined1 local_558 [136];
  undefined8 local_4d0;
  undefined1 local_4b8 [160];
  undefined1 local_418 [160];
  undefined1 local_378 [160];
  undefined1 local_2d8 [160];
  undefined1 local_238 [160];
  undefined1 local_198 [160];
  undefined1 local_f8 [160];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3aa8;
  uVar23 = 0;
  uVar11 = *(ulonglong *)(param_1 + 0x430);
  local_3a70 = param_1;
  local_3a18 = param_2;
  if (uVar11 == 0) {
    lVar10 = operator_new(0x440);
    uVar11 = uVar23;
    if (lVar10 != 0) {
      uVar11 = FUN_14151d7e0(lVar10);
    }
    *(ulonglong *)(param_1 + 0x430) = uVar11;
  }
  *(undefined4 *)(uVar11 + 0x3f8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(*(longlong *)(param_1 + 0x430) + 0x3f0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x3fc) = *(undefined4 *)(param_1 + 0x38);
  local_3640 = *(undefined8 *)(param_1 + 0x41c);
  uStack_3638 = *(undefined8 *)(param_1 + 0x424);
  FUN_141682af0(&local_3640,&local_3a10,0);
  puVar22 = &DAT_143f3eda8;
  if (local_3a08 != 0) {
    puVar22 = local_3a10;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_2f38,puVar22);
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = -1;
  local_33e8 = 0;
  uStack_33e0 = 0xf;
  local_33f8 = 0;
  do {
    lVar37 = lVar37 + 1;
  } while (*(char *)(local_2eb0 + lVar37) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_33f8);
  FUN_140d4d0d0(lVar10 + 0x380,&DAT_146ba2f50,&local_33f8);
  if (0xf < uStack_33e0) {
    lVar37 = CONCAT71(uStack_33f7,local_33f8);
    uVar11 = uStack_33e0 + 1;
    lVar10 = lVar37;
    if (0xfff < uVar11) {
      lVar10 = *(longlong *)(lVar37 + -8);
      uVar11 = uStack_33e0 + 0x28;
      if (0x1f < (lVar37 - lVar10) - 8U) goto LAB_140d52cf4;
    }
    FMemory::operator_delete(lVar10,uVar11);
  }
  local_33f8 = 0;
  local_33e8 = 0;
  uStack_33e0 = 0xf;
  if (local_2eb8 != 0) {
    FMemory::Free();
  }
  if (local_3a10 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FSoftObjectPath::ToString(param_1 + 0x60,&local_3a00);
  puVar22 = &DAT_143f3eda8;
  if (local_39f8 != 0) {
    puVar22 = local_3a00;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_2e98,puVar22);
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = *(longlong *)(lVar10 + 0x388);
  if (lVar37 == 0) {
    lVar37 = FUN_1415195f0(0);
    *(longlong *)(lVar10 + 0x388) = lVar37;
  }
  lVar10 = -1;
  local_33c8 = 0;
  uStack_33c0 = 0xf;
  local_33d8 = 0;
  do {
    lVar10 = lVar10 + 1;
  } while (*(char *)(local_2e10 + lVar10) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_33d8,local_2e10);
  FUN_140d4d0d0(lVar37 + 0x10,&DAT_146ba2f50,&local_33d8);
  if (0xf < uStack_33c0) {
    lVar37 = CONCAT71(uStack_33d7,local_33d8);
    uVar11 = uStack_33c0 + 1;
    lVar10 = lVar37;
    if (0xfff < uVar11) {
      lVar10 = *(longlong *)(lVar37 + -8);
      uVar11 = uStack_33c0 + 0x28;
      if (0x1f < (lVar37 - lVar10) - 8U) {
LAB_140d52cf4:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar10,uVar11);
  }
  local_33d8 = 0;
  local_33c8 = 0;
  uStack_33c0 = 0xf;
  if (local_2e18 != 0) {
    FMemory::Free();
  }
  if (local_3a00 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  uVar9 = *(undefined4 *)(param_1 + 0x78);
  lVar37 = *(longlong *)(lVar10 + 0x388);
  if (lVar37 == 0) {
    lVar37 = FUN_1415195f0(0);
    *(longlong *)(lVar10 + 0x388) = lVar37;
  }
  *(undefined4 *)(lVar37 + 0x18) = uVar9;
  lVar10 = *(longlong *)(param_1 + 0x430);
  iVar5 = *(int *)(lVar10 + 0x18);
  if (0 < iVar5) {
    lVar37 = *(longlong *)(lVar10 + 0x20);
    uVar11 = uVar23;
    do {
      FUN_1415045a0(*(undefined8 *)(lVar37 + 8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar5);
    *(undefined4 *)(lVar10 + 0x18) = 0;
  }
  puVar26 = *(undefined4 **)(param_1 + 0x80);
  puVar34 = puVar26 + (longlong)*(int *)(param_1 + 0x88) * 0xe;
  for (; puVar26 != puVar34; puVar26 = puVar26 + 0xe) {
    lVar10 = *(longlong *)(param_1 + 0x430);
    piVar18 = *(int **)(lVar10 + 0x20);
    if (piVar18 == (int *)0x0) {
LAB_140d520cc:
      FUN_1439f23d0(lVar10 + 0x10,*(int *)(lVar10 + 0x1c) + 1);
      piVar18 = *(int **)(lVar10 + 0x20);
      iVar8 = *piVar18;
LAB_140d520e0:
      *piVar18 = iVar8 + 1;
      lVar37 = FUN_141519810(*(undefined8 *)(lVar10 + 0x10));
      *(longlong *)(*(longlong *)(lVar10 + 0x20) + 8 + (longlong)*(int *)(lVar10 + 0x18) * 8) =
           lVar37;
      *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
    }
    else {
      iVar5 = *(int *)(lVar10 + 0x18);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar10 + 0x1c)) goto LAB_140d520cc;
        goto LAB_140d520e0;
      }
      lVar37 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar10 + 0x18) = iVar5 + 1;
    }
    *(undefined4 *)(lVar37 + 0x18) = *puVar26;
    FSoftObjectPath::ToString(puVar26 + 6,&local_39f0);
    puVar22 = &DAT_143f3eda8;
    if (local_39e8 != 0) {
      puVar22 = local_39f0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2df8,puVar22);
    lVar10 = -1;
    local_34a8 = 0;
    local_34a0 = 0xf;
    local_34b8 = 0;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(local_2d70 + lVar10) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_34b8);
    FUN_140d4d0d0(lVar37 + 0x10,&DAT_146ba2f50,&local_34b8);
    if (0xf < local_34a0) {
      lVar37 = CONCAT71(uStack_34b7,local_34b8);
      uVar11 = local_34a0 + 1;
      lVar10 = lVar37;
      if (0xfff < uVar11) {
        lVar10 = *(longlong *)(lVar37 + -8);
        uVar11 = local_34a0 + 0x28;
        if (0x1f < (lVar37 - lVar10) - 8U) goto LAB_140d52cf4;
      }
      FMemory::operator_delete(lVar10,uVar11);
    }
    local_34a8 = 0;
    local_34a0 = 0xf;
    local_34b8 = 0;
    if (local_2d78 != 0) {
      FMemory::Free();
    }
    if (local_39f0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  iVar5 = *(int *)(lVar10 + 0x30);
  if (0 < iVar5) {
    lVar37 = *(longlong *)(lVar10 + 0x38);
    uVar11 = uVar23;
    do {
      FUN_1415261b0(*(undefined8 *)(lVar37 + 8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar5);
    *(undefined4 *)(lVar10 + 0x30) = 0;
  }
  puVar26 = *(undefined4 **)(param_1 + 0x90);
  puVar34 = puVar26 + (longlong)*(int *)(param_1 + 0x98) * 0xe;
  for (; puVar26 != puVar34; puVar26 = puVar26 + 0xe) {
    lVar10 = *(longlong *)(param_1 + 0x430);
    piVar18 = *(int **)(lVar10 + 0x38);
    if (piVar18 == (int *)0x0) {
LAB_140d5228c:
      FUN_1439f23d0(lVar10 + 0x28,*(int *)(lVar10 + 0x34) + 1);
      piVar18 = *(int **)(lVar10 + 0x38);
      iVar8 = *piVar18;
LAB_140d522a0:
      *piVar18 = iVar8 + 1;
      lVar37 = FUN_141519760(*(undefined8 *)(lVar10 + 0x28));
      *(longlong *)(*(longlong *)(lVar10 + 0x38) + 8 + (longlong)*(int *)(lVar10 + 0x30) * 8) =
           lVar37;
      *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
    }
    else {
      iVar5 = *(int *)(lVar10 + 0x30);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar10 + 0x34)) goto LAB_140d5228c;
        goto LAB_140d522a0;
      }
      lVar37 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar10 + 0x30) = iVar5 + 1;
    }
    *(undefined4 *)(lVar37 + 0x18) = *puVar26;
    *(undefined4 *)(lVar37 + 0x1c) = puVar26[1];
    FSoftObjectPath::ToString(puVar26 + 6,&local_39e0);
    puVar22 = &DAT_143f3eda8;
    if (local_39d8 != 0) {
      puVar22 = local_39e0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2d58,puVar22);
    lVar10 = -1;
    local_3408 = 0;
    local_3400 = 0xf;
    local_3418 = 0;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(local_2cd0 + lVar10) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_3418);
    FUN_140d4d0d0(lVar37 + 0x10,&DAT_146ba2f50,&local_3418);
    if (0xf < local_3400) {
      lVar24 = CONCAT71(uStack_3417,local_3418);
      uVar11 = local_3400 + 1;
      lVar10 = lVar24;
      if (0xfff < uVar11) {
        lVar10 = *(longlong *)(lVar24 + -8);
        uVar11 = local_3400 + 0x28;
        if (0x1f < (lVar24 - lVar10) - 8U) goto LAB_140d52cf4;
      }
      FMemory::operator_delete(lVar10,uVar11);
    }
    local_3408 = 0;
    local_3400 = 0xf;
    local_3418 = 0;
    if (local_2cd8 != 0) {
      FMemory::Free();
    }
    if (local_39e0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar37 + 0x20) = puVar26[0xc];
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x400) = *(undefined4 *)(param_1 + 0xa0);
  FUN_141542740(*(undefined8 *)(param_1 + 0x430));
  puVar26 = *(undefined4 **)(param_1 + 0xa8);
  puVar34 = puVar26 + (longlong)*(int *)(param_1 + 0xb0) * 0xc;
  for (; puVar26 != puVar34; puVar26 = puVar26 + 0xc) {
    lVar10 = FUN_140d26a70(*(longlong *)(param_1 + 0x430) + 0x40);
    *(undefined4 *)(lVar10 + 0x18) = *puVar26;
    FSoftObjectPath::ToString(puVar26 + 6,&local_39d0);
    puVar22 = &DAT_143f3eda8;
    if (local_39c8 != 0) {
      puVar22 = local_39d0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2cb8,puVar22);
    lVar37 = -1;
    local_3488 = 0;
    local_3480 = 0xf;
    local_3498 = 0;
    do {
      lVar37 = lVar37 + 1;
    } while (*(char *)(local_2c30 + lVar37) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_3498);
    FUN_140d4d0d0(lVar10 + 0x10,&DAT_146ba2f50,&local_3498);
    if (0xf < local_3480) {
      lVar37 = CONCAT71(uStack_3497,local_3498);
      uVar11 = local_3480 + 1;
      lVar10 = lVar37;
      if (0xfff < uVar11) {
        lVar10 = *(longlong *)(lVar37 + -8);
        uVar11 = local_3480 + 0x28;
        if (0x1f < (lVar37 - lVar10) - 8U) goto LAB_140d52cf4;
      }
      FMemory::operator_delete(lVar10,uVar11);
    }
    local_3488 = 0;
    local_3480 = 0xf;
    local_3498 = 0;
    if (local_2c38 != 0) {
      FMemory::Free();
    }
    if (local_39d0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1415427a0(*(undefined8 *)(param_1 + 0x430));
  plVar36 = *(longlong **)(param_1 + 0xb8);
  plVar28 = plVar36 + (longlong)*(int *)(param_1 + 0xc0) * 2;
  for (; plVar36 != plVar28; plVar36 = plVar36 + 2) {
    lVar10 = FUN_140d26ae0(*(longlong *)(param_1 + 0x430) + 0x58);
    plVar6 = (longlong *)*plVar36;
    if (plVar6 == (longlong *)0x0) {
LAB_140d525a6:
      *(int *)(lVar10 + 0x14) = (int)plVar36[1];
    }
    else if (((char)plVar6[6] == '\0') || (*(char *)(param_1 + 0x338) != '\0')) {
      uVar9 = (**(code **)(*plVar6 + 0x278))();
      *(undefined4 *)(lVar10 + 0x10) = uVar9;
      goto LAB_140d525a6;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  iVar5 = *(int *)(lVar10 + 0x78);
  if (0 < iVar5) {
    lVar37 = *(longlong *)(lVar10 + 0x80);
    uVar11 = uVar23;
    do {
      FUN_141526450(*(undefined8 *)(lVar37 + 8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar5);
    *(undefined4 *)(lVar10 + 0x78) = 0;
  }
  puVar14 = *(undefined8 **)(param_1 + 200);
  puVar16 = puVar14 + (longlong)*(int *)(param_1 + 0xd0) * 0x16;
  if (puVar14 != puVar16) {
    local_3a78 = (undefined8 *)0x0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x430);
      piVar18 = *(int **)(lVar10 + 0x80);
      if (piVar18 == (int *)0x0) {
LAB_140d5263f:
        FUN_1439f23d0(lVar10 + 0x70,*(int *)(lVar10 + 0x7c) + 1);
        piVar18 = *(int **)(lVar10 + 0x80);
        iVar8 = *piVar18;
LAB_140d52656:
        *piVar18 = iVar8 + 1;
        lVar37 = FUN_141519270(*(undefined8 *)(lVar10 + 0x70));
        *(longlong *)(*(longlong *)(lVar10 + 0x80) + 8 + (longlong)*(int *)(lVar10 + 0x78) * 8) =
             lVar37;
        *(int *)(lVar10 + 0x78) = *(int *)(lVar10 + 0x78) + 1;
      }
      else {
        iVar5 = *(int *)(lVar10 + 0x78);
        iVar8 = *piVar18;
        if (iVar8 <= iVar5) {
          if (iVar8 == *(int *)(lVar10 + 0x7c)) goto LAB_140d5263f;
          goto LAB_140d52656;
        }
        lVar37 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
        *(int *)(lVar10 + 0x78) = iVar5 + 1;
      }
      local_34c8 = 0;
      local_34c0 = 0xf;
      local_34d8 = 0;
      uVar11 = (ulonglong)*(int *)(puVar14 + 1);
      if (uVar11 < 0x10) {
        local_34c8 = uVar11;
        _guard_xfg_dispatch_icall_nop(&local_34d8,(void *)*puVar14,uVar11);
        (&local_34d8)[uVar11] = 0;
      }
      else {
        local_3a88 = uVar11;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                  (&local_34d8,uVar11,0);
      }
      puVar7 = *(undefined **)(lVar37 + 0x10);
      if (puVar7 == &DAT_146ba2f50) {
        FUN_140d2a6b0(lVar37 + 0x10,&local_34d8);
      }
      else if (puVar7 != &local_34d8) {
        puVar35 = &local_34d8;
        if (0xf < local_34c0) {
          puVar35 = (undefined1 *)CONCAT71(uStack_34d7,local_34d8);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (puVar7,puVar35,local_34c8);
      }
      *(undefined4 *)(lVar37 + 0x28) = *(undefined4 *)(puVar14 + 0x10);
      *(undefined4 *)(lVar37 + 0x2c) = *(undefined4 *)((longlong)puVar14 + 0x84);
      local_3878 = 0;
      local_3870 = 0;
      local_3890 = 0xffffffff;
      local_388c = 0;
      local_3880 = 0;
      TSoftObjectPtr<UCurveLinearColor>::operator=(&local_3890,puVar14 + 0x11);
      FSoftObjectPath::ToString(&local_3880,&local_39c0);
      puVar22 = &DAT_143f3eda8;
      if (local_39b8 != 0) {
        puVar22 = local_39c0;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_2c18,puVar22);
      lVar10 = -1;
      local_3468 = 0;
      local_3460 = 0xf;
      local_3478 = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_2b90 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_3478);
      FUN_140d4d0d0(lVar37 + 0x18,&DAT_146ba2f50);
      if (0xf < local_3460) {
        lVar37 = CONCAT71(uStack_3477,local_3478);
        uVar11 = local_3460 + 1;
        lVar10 = lVar37;
        if (0xfff < uVar11) {
          lVar10 = *(longlong *)(lVar37 + -8);
          uVar11 = local_3460 + 0x28;
          if (0x1f < (lVar37 - lVar10) - 8U) goto LAB_140d52cf4;
        }
        FMemory::operator_delete(lVar10,uVar11);
      }
      local_3468 = 0;
      local_3460 = 0xf;
      local_3478 = 0;
      if (local_2b98 != 0) {
        FMemory::Free();
      }
      if (local_39c0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_3878 != 0) {
        FMemory::Free();
      }
      if (0xf < local_34c0) {
        lVar37 = CONCAT71(uStack_34d7,local_34d8);
        uVar11 = local_34c0 + 1;
        lVar10 = lVar37;
        if (0xfff < uVar11) {
          lVar10 = *(longlong *)(lVar37 + -8);
          uVar11 = local_34c0 + 0x28;
          if (0x1f < (lVar37 - lVar10) - 8U) goto LAB_140d52cf4;
        }
        FMemory::operator_delete(lVar10,uVar11);
      }
      puVar14 = puVar14 + 0x16;
      local_34c8 = 0;
      local_34c0 = 0xf;
      local_34d8 = 0;
    } while (puVar14 != puVar16);
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  iVar5 = *(int *)(lVar10 + 0x90);
  if (0 < iVar5) {
    lVar37 = *(longlong *)(lVar10 + 0x98);
    uVar11 = uVar23;
    do {
      FUN_141525a10(*(undefined8 *)(lVar37 + 8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar5);
    *(undefined4 *)(lVar10 + 0x90) = 0;
  }
  puVar26 = *(undefined4 **)(param_1 + 0xd8);
  puVar34 = puVar26 + (longlong)*(int *)(param_1 + 0xe0) * 0x16;
  for (; puVar26 != puVar34; puVar26 = puVar26 + 0x16) {
    lVar10 = *(longlong *)(param_1 + 0x430);
    piVar18 = *(int **)(lVar10 + 0x98);
    if (piVar18 == (int *)0x0) {
LAB_140d52973:
      FUN_1439f23d0((undefined8 *)(lVar10 + 0x88),*(int *)(lVar10 + 0x94) + 1);
      piVar18 = *(int **)(lVar10 + 0x98);
      iVar8 = *piVar18;
LAB_140d52986:
      *piVar18 = iVar8 + 1;
      lVar37 = FUN_141518730(*(undefined8 *)(lVar10 + 0x88));
      *(longlong *)(*(longlong *)(lVar10 + 0x98) + 8 + (longlong)*(int *)(lVar10 + 0x90) * 8) =
           lVar37;
      *(int *)(lVar10 + 0x90) = *(int *)(lVar10 + 0x90) + 1;
    }
    else {
      iVar5 = *(int *)(lVar10 + 0x90);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar10 + 0x94)) goto LAB_140d52973;
        goto LAB_140d52986;
      }
      lVar37 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar10 + 0x90) = iVar5 + 1;
    }
    *(undefined4 *)(lVar37 + 0x20) = *puVar26;
    *(undefined1 *)(lVar37 + 0x24) = *(undefined1 *)(puVar26 + 1);
    FSoftObjectPath::ToString(puVar26 + 6,&local_39b0);
    puVar22 = &DAT_143f3eda8;
    if (local_39a8 != 0) {
      puVar22 = local_39b0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2b78,puVar22);
    lVar10 = -1;
    local_3448 = 0;
    local_3440 = 0xf;
    local_3458 = 0;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(local_2af0 + lVar10) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_3458);
    FUN_140d4d0d0(lVar37 + 0x10,&DAT_146ba2f50,&local_3458);
    if (0xf < local_3440) {
      lVar24 = CONCAT71(uStack_3457,local_3458);
      uVar11 = local_3440 + 1;
      lVar10 = lVar24;
      if (0xfff < uVar11) {
        lVar10 = *(longlong *)(lVar24 + -8);
        uVar11 = local_3440 + 0x28;
        if (0x1f < (lVar24 - lVar10) - 8U) goto LAB_140d52cf4;
      }
      FMemory::operator_delete(lVar10,uVar11);
    }
    local_3448 = 0;
    local_3440 = 0xf;
    local_3458 = 0;
    if (local_2af8 != 0) {
      FMemory::Free();
    }
    if (local_39b0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FSoftObjectPath::ToString(puVar26 + 0x10,&local_39a0);
    puVar22 = &DAT_143f3eda8;
    if (local_3998 != 0) {
      puVar22 = local_39a0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2ad8,puVar22);
    lVar10 = -1;
    local_3428 = 0;
    local_3420 = 0xf;
    local_3438 = 0;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(local_2a50 + lVar10) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_3438);
    FUN_140d4d0d0(lVar37 + 0x18,&DAT_146ba2f50,&local_3438);
    if (0xf < local_3420) {
      lVar37 = CONCAT71(uStack_3437,local_3438);
      uVar11 = local_3420 + 1;
      lVar10 = lVar37;
      if (0xfff < uVar11) {
        lVar10 = *(longlong *)(lVar37 + -8);
        uVar11 = local_3420 + 0x28;
        if (0x1f < (lVar37 - lVar10) - 8U) goto LAB_140d52cf4;
      }
      FMemory::operator_delete(lVar10,uVar11);
    }
    local_3428 = 0;
    local_3420 = 0xf;
    local_3438 = 0;
    if (local_2a58 != 0) {
      FMemory::Free();
    }
    if (local_39a0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear
            (*(longlong *)(param_1 + 0x430) + 0xa0);
  puVar26 = *(undefined4 **)(param_1 + 0xe8);
  uVar11 = (longlong)*(int *)(param_1 + 0xf0) & 0x3fffffffffffffff;
  if (puVar26 + *(int *)(param_1 + 0xf0) < puVar26) {
    uVar11 = uVar23;
  }
  uVar32 = uVar23;
  if (uVar11 != 0) {
    do {
      local_3a48[0] = *puVar26;
      FUN_1439f19c0(*(longlong *)(param_1 + 0x430) + 0xa0,local_3a48);
      uVar32 = uVar32 + 1;
      puVar26 = puVar26 + 1;
    } while (uVar32 != uVar11);
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = *(longlong *)(lVar10 + 0x390);
  if (lVar37 == 0) {
    lVar37 = FUN_141519320();
    *(longlong *)(lVar10 + 0x390) = lVar37;
  }
  *(undefined4 *)(lVar37 + 0x70) = *(undefined4 *)(param_1 + 0xfc);
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = *(longlong *)(lVar10 + 0x390);
  if (lVar37 == 0) {
    lVar37 = FUN_141519320(0);
    *(longlong *)(lVar10 + 0x390) = lVar37;
  }
  iVar5 = *(int *)(lVar37 + 0x18);
  if (0 < iVar5) {
    lVar10 = *(longlong *)(lVar37 + 0x20);
    uVar11 = uVar23;
    do {
      FUN_1415261b0(*(undefined8 *)(lVar10 + 8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar5);
    *(undefined4 *)(lVar37 + 0x18) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x100);
  lVar37 = (longlong)*(int *)(param_1 + 0x108) * 0x38 + lVar10;
  for (; lVar10 != lVar37; lVar10 = lVar10 + 0x38) {
    lVar24 = *(longlong *)(param_1 + 0x430);
    lVar12 = *(longlong *)(lVar24 + 0x390);
    if (lVar12 == 0) {
      lVar12 = FUN_141519320(0);
      *(longlong *)(lVar24 + 0x390) = lVar12;
    }
    piVar18 = *(int **)(lVar12 + 0x20);
    if (piVar18 == (int *)0x0) {
LAB_140d52d00:
      FUN_1439f23d0(lVar12 + 0x10,*(int *)(lVar12 + 0x1c) + 1);
      piVar18 = *(int **)(lVar12 + 0x20);
      iVar8 = *piVar18;
LAB_140d52d14:
      *piVar18 = iVar8 + 1;
      lVar24 = FUN_141519000(*(undefined8 *)(lVar12 + 0x10));
      *(longlong *)(*(longlong *)(lVar12 + 0x20) + 8 + (longlong)*(int *)(lVar12 + 0x18) * 8) =
           lVar24;
      *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
    }
    else {
      iVar5 = *(int *)(lVar12 + 0x18);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar12 + 0x1c)) goto LAB_140d52d00;
        goto LAB_140d52d14;
      }
      lVar24 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar12 + 0x18) = iVar5 + 1;
    }
    FSoftObjectPath::ToString(lVar10 + 0x10,&local_3990);
    puVar22 = &DAT_143f3eda8;
    if (local_3988 != 0) {
      puVar22 = local_3990;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2a38,puVar22);
    lVar12 = -1;
    local_3188 = 0;
    local_3180 = 0xf;
    local_3198[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_29b0 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3198);
    FUN_140d4d0d0(lVar24 + 0x10,&DAT_146ba2f50,local_3198);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_3198);
    if (local_29b8 != 0) {
      FMemory::Free();
    }
    if (local_3990 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar24 + 0x18) = *(undefined4 *)(lVar10 + 0x28);
    *(undefined4 *)(lVar24 + 0x1c) = *(undefined4 *)(lVar10 + 0x2c);
    *(undefined4 *)(lVar24 + 0x20) = *(undefined4 *)(lVar10 + 0x30);
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = *(longlong *)(lVar10 + 0x390);
  if (lVar37 == 0) {
    lVar37 = FUN_141519320(0);
    *(longlong *)(lVar10 + 0x390) = lVar37;
  }
  iVar5 = *(int *)(lVar37 + 0x30);
  if (0 < iVar5) {
    lVar10 = *(longlong *)(lVar37 + 0x38);
    uVar11 = uVar23;
    do {
      FUN_141526150(*(undefined8 *)(lVar10 + 8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar5);
    *(undefined4 *)(lVar37 + 0x30) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x110);
  lVar37 = (longlong)*(int *)(param_1 + 0x118) * 0x50 + lVar10;
  for (; lVar10 != lVar37; lVar10 = lVar10 + 0x50) {
    lVar24 = *(longlong *)(param_1 + 0x430);
    lVar12 = *(longlong *)(lVar24 + 0x390);
    if (lVar12 == 0) {
      lVar12 = FUN_141519320(0);
      *(longlong *)(lVar24 + 0x390) = lVar12;
    }
    piVar18 = *(int **)(lVar12 + 0x38);
    if (piVar18 == (int *)0x0) {
LAB_140d52eb9:
      FUN_1439f23d0(lVar12 + 0x28,*(int *)(lVar12 + 0x34) + 1);
      piVar18 = *(int **)(lVar12 + 0x38);
      iVar8 = *piVar18;
LAB_140d52ecd:
      *piVar18 = iVar8 + 1;
      lVar24 = FUN_141518f50(*(undefined8 *)(lVar12 + 0x28));
      *(longlong *)(*(longlong *)(lVar12 + 0x38) + 8 + (longlong)*(int *)(lVar12 + 0x30) * 8) =
           lVar24;
      *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
    }
    else {
      iVar5 = *(int *)(lVar12 + 0x30);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar12 + 0x34)) goto LAB_140d52eb9;
        goto LAB_140d52ecd;
      }
      lVar24 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar12 + 0x30) = iVar5 + 1;
    }
    FSoftObjectPath::ToString(lVar10 + 0x10,&local_3980);
    puVar22 = &DAT_143f3eda8;
    if (local_3978 != 0) {
      puVar22 = local_3980;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2998,puVar22);
    lVar12 = -1;
    local_3168 = 0;
    local_3160 = 0xf;
    local_3178[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_2910 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3178);
    FUN_140d4d0d0(lVar24 + 0x10,&DAT_146ba2f50,local_3178);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_3178);
    if (local_2918 != 0) {
      FMemory::Free();
    }
    if (local_3980 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FSoftObjectPath::ToString(lVar10 + 0x38,&local_3970);
    puVar22 = &DAT_143f3eda8;
    if (local_3968 != 0) {
      puVar22 = local_3970;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_28f8,puVar22);
    lVar12 = -1;
    local_3148 = 0;
    local_3140 = 0xf;
    local_3158[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_2870 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3158);
    FUN_140d4d0d0(lVar24 + 0x18,&DAT_146ba2f50,local_3158);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_3158);
    if (local_2878 != 0) {
      FMemory::Free();
    }
    if (local_3970 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = *(longlong *)(lVar10 + 0x390);
  if (lVar37 == 0) {
    lVar37 = FUN_141519320(0);
    *(longlong *)(lVar10 + 0x390) = lVar37;
  }
  iVar5 = *(int *)(lVar37 + 0x48);
  if (0 < iVar5) {
    lVar10 = *(longlong *)(lVar37 + 0x50);
    uVar11 = uVar23;
    do {
      FUN_141526290(*(undefined8 *)(lVar10 + 8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar5);
    *(undefined4 *)(lVar37 + 0x48) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x120);
  lVar37 = (longlong)*(int *)(param_1 + 0x128) * 0x78 + lVar10;
  for (; lVar10 != lVar37; lVar10 = lVar10 + 0x78) {
    lVar24 = *(longlong *)(param_1 + 0x430);
    lVar12 = *(longlong *)(lVar24 + 0x390);
    if (lVar12 == 0) {
      lVar12 = FUN_141519320(0);
      *(longlong *)(lVar24 + 0x390) = lVar12;
    }
    piVar18 = *(int **)(lVar12 + 0x50);
    if (piVar18 == (int *)0x0) {
LAB_140d53109:
      FUN_1439f23d0(lVar12 + 0x40,*(int *)(lVar12 + 0x4c) + 1);
      piVar18 = *(int **)(lVar12 + 0x50);
      iVar8 = *piVar18;
LAB_140d5311d:
      *piVar18 = iVar8 + 1;
      lVar24 = FUN_141519160(*(undefined8 *)(lVar12 + 0x40));
      *(longlong *)(*(longlong *)(lVar12 + 0x50) + 8 + (longlong)*(int *)(lVar12 + 0x48) * 8) =
           lVar24;
      *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
    }
    else {
      iVar5 = *(int *)(lVar12 + 0x48);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar12 + 0x4c)) goto LAB_140d53109;
        goto LAB_140d5311d;
      }
      lVar24 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar12 + 0x48) = iVar5 + 1;
    }
    FSoftObjectPath::ToString(lVar10 + 0x10,&local_3960);
    puVar22 = &DAT_143f3eda8;
    if (local_3958 != 0) {
      puVar22 = local_3960;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2858,puVar22);
    lVar12 = -1;
    local_3128 = 0;
    local_3120 = 0xf;
    local_3138[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_27d0 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3138);
    FUN_140d4d0d0(lVar24 + 0x10,&DAT_146ba2f50,local_3138);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_3138);
    if (local_27d8 != 0) {
      FMemory::Free();
    }
    if (local_3960 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FSoftObjectPath::ToString(lVar10 + 0x38,&local_3950);
    puVar22 = &DAT_143f3eda8;
    if (local_3948 != 0) {
      puVar22 = local_3950;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_27b8,puVar22);
    lVar12 = -1;
    local_3108 = 0;
    local_3100 = 0xf;
    local_3118[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_2730 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3118);
    FUN_140d4d0d0(lVar24 + 0x18,&DAT_146ba2f50,local_3118);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_3118);
    if (local_2738 != 0) {
      FMemory::Free();
    }
    if (local_3950 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FSoftObjectPath::ToString(lVar10 + 0x60,&local_3940);
    puVar22 = &DAT_143f3eda8;
    if (local_3938 != 0) {
      puVar22 = local_3940;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2718,puVar22);
    lVar12 = -1;
    local_30e8 = 0;
    local_30e0 = 0xf;
    local_30f8[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_2690 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_30f8);
    FUN_140d4d0d0(lVar24 + 0x20,&DAT_146ba2f50,local_30f8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_30f8);
    if (local_2698 != 0) {
      FMemory::Free();
    }
    if (local_3940 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = *(longlong *)(lVar10 + 0x390);
  if (lVar37 == 0) {
    lVar37 = FUN_141519320(0);
    *(longlong *)(lVar10 + 0x390) = lVar37;
  }
  iVar5 = *(int *)(lVar37 + 0x60);
  if (0 < iVar5) {
    lVar10 = *(longlong *)(lVar37 + 0x68);
    uVar11 = uVar23;
    do {
      FUN_141526200(*(undefined8 *)(lVar10 + 8 + uVar11 * 8));
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)iVar5);
    *(undefined4 *)(lVar37 + 0x60) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x130);
  lVar37 = (longlong)*(int *)(param_1 + 0x138) * 0xa0 + lVar10;
  for (; lVar10 != lVar37; lVar10 = lVar10 + 0xa0) {
    lVar24 = *(longlong *)(param_1 + 0x430);
    lVar12 = *(longlong *)(lVar24 + 0x390);
    if (lVar12 == 0) {
      lVar12 = FUN_141519320(0);
      *(longlong *)(lVar24 + 0x390) = lVar12;
    }
    piVar18 = *(int **)(lVar12 + 0x68);
    if (piVar18 == (int *)0x0) {
LAB_140d533f9:
      FUN_1439f23d0(lVar12 + 0x58,*(int *)(lVar12 + 100) + 1);
      piVar18 = *(int **)(lVar12 + 0x68);
      iVar8 = *piVar18;
LAB_140d5340d:
      *piVar18 = iVar8 + 1;
      lVar24 = FUN_1415190b0(*(undefined8 *)(lVar12 + 0x58));
      *(longlong *)(*(longlong *)(lVar12 + 0x68) + 8 + (longlong)*(int *)(lVar12 + 0x60) * 8) =
           lVar24;
      *(int *)(lVar12 + 0x60) = *(int *)(lVar12 + 0x60) + 1;
    }
    else {
      iVar5 = *(int *)(lVar12 + 0x60);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar12 + 100)) goto LAB_140d533f9;
        goto LAB_140d5340d;
      }
      lVar24 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar12 + 0x60) = iVar5 + 1;
    }
    FSoftObjectPath::ToString(lVar10 + 0x10,&local_3930);
    puVar22 = &DAT_143f3eda8;
    if (local_3928 != 0) {
      puVar22 = local_3930;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2678,puVar22);
    lVar12 = -1;
    local_30c8 = 0;
    local_30c0 = 0xf;
    local_30d8[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_25f0 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_30d8);
    FUN_140d4d0d0(lVar24 + 0x10,&DAT_146ba2f50,local_30d8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_30d8);
    if (local_25f8 != 0) {
      FMemory::Free();
    }
    if (local_3930 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FSoftObjectPath::ToString(lVar10 + 0x38,&local_3920);
    puVar22 = &DAT_143f3eda8;
    if (local_3918 != 0) {
      puVar22 = local_3920;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_25d8,puVar22);
    lVar12 = -1;
    local_30a8 = 0;
    local_30a0 = 0xf;
    local_30b8[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_2550 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_30b8);
    FUN_140d4d0d0(lVar24 + 0x18,&DAT_146ba2f50,local_30b8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_30b8);
    if (local_2558 != 0) {
      FMemory::Free();
    }
    if (local_3920 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FSoftObjectPath::ToString(lVar10 + 0x60,&local_3910);
    puVar22 = &DAT_143f3eda8;
    if (local_3908 != 0) {
      puVar22 = local_3910;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2538,puVar22);
    lVar12 = -1;
    local_3088 = 0;
    local_3080 = 0xf;
    local_3098[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_24b0 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3098);
    FUN_140d4d0d0(lVar24 + 0x20,&DAT_146ba2f50,local_3098);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_3098);
    if (local_24b8 != 0) {
      FMemory::Free();
    }
    if (local_3910 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FSoftObjectPath::ToString(lVar10 + 0x88,&local_3900);
    puVar22 = &DAT_143f3eda8;
    if (local_38f8 != 0) {
      puVar22 = local_3900;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2498,puVar22);
    lVar12 = -1;
    local_3068 = 0;
    local_3060 = 0xf;
    local_3078[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_2410 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3078);
    FUN_140d4d0d0(lVar24 + 0x28,&DAT_146ba2f50,local_3078);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_3078);
    if (local_2418 != 0) {
      FMemory::Free();
    }
    if (local_3900 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = *(longlong *)(lVar10 + 0x390);
  if (lVar37 == 0) {
    lVar37 = FUN_141519320();
    *(longlong *)(lVar10 + 0x390) = lVar37;
  }
  *(undefined4 *)(lVar37 + 0x74) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x404) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x408) = *(undefined4 *)(param_1 + 0x144);
  *(undefined1 *)(*(longlong *)(param_1 + 0x430) + 0x410) = *(undefined1 *)(param_1 + 0x148);
  lVar10 = *(longlong *)(param_1 + 0x430);
  iVar5 = *(int *)(lVar10 + 0xc0);
  if (0 < iVar5) {
    lVar37 = *(longlong *)(lVar10 + 200);
    do {
      FUN_141525fa0(*(undefined8 *)(lVar37 + 8 + uVar23 * 8));
      uVar23 = uVar23 + 1;
    } while ((longlong)uVar23 < (longlong)iVar5);
    *(undefined4 *)(lVar10 + 0xc0) = 0;
    lVar10 = *(longlong *)(param_1 + 0x430);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x150);
  local_3a68 = puVar14 + (longlong)*(int *)(param_1 + 0x158) * 7;
  local_3a78 = puVar14;
  if (puVar14 != local_3a68) {
    do {
      lVar10 = *(longlong *)(param_1 + 0x430);
      piVar18 = *(int **)(lVar10 + 200);
      local_3a78 = puVar14;
      if (piVar18 == (int *)0x0) {
LAB_140d5380a:
        FUN_1439f23d0((undefined8 *)(lVar10 + 0xb8),*(int *)(lVar10 + 0xc4) + 1);
        piVar18 = *(int **)(lVar10 + 200);
        iVar8 = *piVar18;
LAB_140d5381d:
        *piVar18 = iVar8 + 1;
        lVar37 = FUN_141518e50(*(undefined8 *)(lVar10 + 0xb8));
        *(longlong *)(*(longlong *)(lVar10 + 200) + 8 + (longlong)*(int *)(lVar10 + 0xc0) * 8) =
             lVar37;
        *(int *)(lVar10 + 0xc0) = *(int *)(lVar10 + 0xc0) + 1;
      }
      else {
        iVar5 = *(int *)(lVar10 + 0xc0);
        iVar8 = *piVar18;
        if (iVar8 <= iVar5) {
          if (iVar8 == *(int *)(lVar10 + 0xc4)) goto LAB_140d5380a;
          goto LAB_140d5381d;
        }
        lVar37 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
        *(int *)(lVar10 + 0xc0) = iVar5 + 1;
      }
      FSoftObjectPath::ToString(puVar14 + 4,&local_38f0);
      puVar22 = &DAT_143f3eda8;
      if (local_38e8 != 0) {
        puVar22 = local_38f0;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_23f8,puVar22);
      local_3048 = 0;
      lVar10 = -1;
      local_3058[0] = 0;
      local_3040 = 0xf;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_2370 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3058);
      FUN_140d4d0d0(lVar37 + 0x28,&DAT_146ba2f50,local_3058);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_3058);
      if (local_2378 != 0) {
        FMemory::Free();
      }
      if (local_38f0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar5 = *(int *)(lVar37 + 0x18);
      if (0 < iVar5) {
        lVar10 = *(longlong *)(lVar37 + 0x20);
        lVar24 = 0;
        do {
          FUN_1415260d0(*(undefined8 *)(lVar10 + 8 + lVar24 * 8));
          lVar24 = lVar24 + 1;
        } while (lVar24 < iVar5);
        *(undefined4 *)(lVar37 + 0x18) = 0;
      }
      pbVar41 = (byte *)*puVar14;
      local_3a60 = pbVar41 + (longlong)*(int *)(puVar14 + 1) * 0x78;
      if (pbVar41 != local_3a60) {
        do {
          uVar11 = 0;
          piVar18 = *(int **)(lVar37 + 0x20);
          if (piVar18 == (int *)0x0) {
LAB_140d5396a:
            FUN_1439f23d0(lVar37 + 0x10,*(int *)(lVar37 + 0x1c) + 1);
            piVar18 = *(int **)(lVar37 + 0x20);
            iVar8 = *piVar18;
LAB_140d5397e:
            *piVar18 = iVar8 + 1;
            lVar10 = FUN_141518ef0(*(undefined8 *)(lVar37 + 0x10));
            *(longlong *)(*(longlong *)(lVar37 + 0x20) + 8 + (longlong)*(int *)(lVar37 + 0x18) * 8)
                 = lVar10;
            *(int *)(lVar37 + 0x18) = *(int *)(lVar37 + 0x18) + 1;
          }
          else {
            iVar5 = *(int *)(lVar37 + 0x18);
            iVar8 = *piVar18;
            if (iVar8 <= iVar5) {
              if (iVar8 == *(int *)(lVar37 + 0x1c)) goto LAB_140d5396a;
              goto LAB_140d5397e;
            }
            lVar10 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
            *(int *)(lVar37 + 0x18) = iVar5 + 1;
          }
          *(uint *)(lVar10 + 0x38) = (uint)*pbVar41;
          *(byte *)(lVar10 + 0x3c) = pbVar41[1];
          icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(lVar10 + 0x10);
          puVar26 = *(undefined4 **)(pbVar41 + 8);
          uVar23 = (longlong)*(int *)(pbVar41 + 0x10) & 0x3fffffffffffffff;
          if (puVar26 + *(int *)(pbVar41 + 0x10) < puVar26) {
            uVar23 = 0;
          }
          if (uVar23 != 0) {
            do {
              local_3a40[0] = *puVar26;
              FUN_1439f19c0(lVar10 + 0x10,local_3a40);
              uVar11 = uVar11 + 1;
              puVar26 = puVar26 + 1;
            } while (uVar11 != uVar23);
          }
          FSoftObjectPath::ToString(pbVar41 + 0x30,&local_38e0);
          puVar22 = &DAT_143f3eda8;
          if (local_38d8 != 0) {
            puVar22 = local_38e0;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_2358,puVar22);
          local_3028 = 0;
          lVar24 = -1;
          local_3038[0] = 0;
          local_3020 = 0xf;
          do {
            lVar24 = lVar24 + 1;
          } while (*(char *)(local_22d0 + lVar24) != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3038);
          FUN_140d4d0d0(lVar10 + 0x28,&DAT_146ba2f50,local_3038);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_3038);
          if (local_22d8 != 0) {
            FMemory::Free();
          }
          if (local_38e0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          FSoftObjectPath::ToString(pbVar41 + 0x58,&local_38d0);
          puVar22 = &DAT_143f3eda8;
          if (local_38c8 != 0) {
            puVar22 = local_38d0;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_22b8,puVar22);
          lVar24 = -1;
          local_3008 = 0;
          local_3000 = 0xf;
          local_3018[0] = 0;
          do {
            lVar24 = lVar24 + 1;
          } while (*(char *)(local_2230 + lVar24) != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3018);
          FUN_140d4d0d0(lVar10 + 0x30,&DAT_146ba2f50,local_3018);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_3018);
          if (local_2238 != 0) {
            FMemory::Free();
          }
          if (local_38d0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(pbVar41 + 0x70);
          *(byte *)(lVar10 + 0x3d) = pbVar41[2];
          pbVar30 = pbVar41 + 0x18;
          pbVar41 = pbVar41 + 0x78;
          *(uint *)(lVar10 + 0x44) = (uint)*pbVar30;
          puVar14 = local_3a78;
          param_1 = local_3a70;
        } while (pbVar41 != local_3a60);
      }
      puVar14 = puVar14 + 7;
    } while (puVar14 != local_3a68);
    lVar10 = *(longlong *)(param_1 + 0x430);
    local_3a78 = puVar14;
  }
  FUN_1439f1c30(lVar10 + 0xd0);
  lVar10 = *(longlong *)(param_1 + 0x430);
  iVar5 = *(int *)(lVar10 + 0x270);
  if (0 < iVar5) {
    lVar37 = *(longlong *)(lVar10 + 0x278);
    lVar24 = 0;
    do {
      FUN_141524e70(*(undefined8 *)(lVar37 + 8 + lVar24 * 8));
      lVar24 = lVar24 + 1;
    } while (lVar24 < iVar5);
    *(undefined4 *)(lVar10 + 0x270) = 0;
    lVar10 = *(longlong *)(param_1 + 0x430);
  }
  iVar5 = *(int *)(lVar10 + 0x2d0);
  if (0 < iVar5) {
    lVar37 = *(longlong *)(lVar10 + 0x2d8);
    lVar24 = 0;
    do {
      FUN_141526a70(*(undefined8 *)(lVar37 + 8 + lVar24 * 8));
      lVar24 = lVar24 + 1;
    } while (lVar24 < iVar5);
    *(undefined4 *)(lVar10 + 0x2d0) = 0;
    lVar10 = *(longlong *)(param_1 + 0x430);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x160);
  puVar16 = puVar14 + (longlong)*(int *)(param_1 + 0x168) * 2;
  if (puVar14 != puVar16) {
    do {
      lVar10 = *(longlong *)(param_1 + 0x430);
      piVar18 = *(int **)(lVar10 + 0x2d8);
      if (piVar18 == (int *)0x0) {
LAB_140d53cb3:
        FUN_1439f23d0((undefined8 *)(lVar10 + 0x2c8),*(int *)(lVar10 + 0x2d4) + 1);
        piVar18 = *(int **)(lVar10 + 0x2d8);
LAB_140d53cc4:
        *piVar18 = *piVar18 + 1;
        lVar37 = FUN_1415196a0(*(undefined8 *)(lVar10 + 0x2c8));
        *(longlong *)(*(longlong *)(lVar10 + 0x2d8) + 8 + (longlong)*(int *)(lVar10 + 0x2d0) * 8) =
             lVar37;
        *(int *)(lVar10 + 0x2d0) = *(int *)(lVar10 + 0x2d0) + 1;
      }
      else {
        iVar5 = *(int *)(lVar10 + 0x2d0);
        if (*piVar18 <= iVar5) {
          if (*piVar18 == *(int *)(lVar10 + 0x2d4)) goto LAB_140d53cb3;
          goto LAB_140d53cc4;
        }
        lVar37 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
        *(int *)(lVar10 + 0x2d0) = iVar5 + 1;
      }
      puVar33 = (undefined8 *)*puVar14;
      puVar20 = puVar33 + (longlong)*(int *)(puVar14 + 1) * 3;
      if (puVar33 != puVar20) {
        do {
          piVar18 = *(int **)(lVar37 + 0x20);
          if (piVar18 == (int *)0x0) {
LAB_140d53d25:
            FUN_1439f23d0((undefined8 *)(lVar37 + 0x10),*(int *)(lVar37 + 0x1c) + 1);
            piVar18 = *(int **)(lVar37 + 0x20);
LAB_140d53d36:
            *piVar18 = *piVar18 + 1;
            lVar10 = FUN_141517d60(*(undefined8 *)(lVar37 + 0x10));
            *(longlong *)(*(longlong *)(lVar37 + 0x20) + 8 + (longlong)*(int *)(lVar37 + 0x18) * 8)
                 = lVar10;
            *(int *)(lVar37 + 0x18) = *(int *)(lVar37 + 0x18) + 1;
          }
          else {
            iVar5 = *(int *)(lVar37 + 0x18);
            if (*piVar18 <= iVar5) {
              if (*piVar18 == *(int *)(lVar37 + 0x1c)) goto LAB_140d53d25;
              goto LAB_140d53d36;
            }
            lVar10 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
            *(int *)(lVar37 + 0x18) = iVar5 + 1;
          }
          if (*(int *)(puVar33 + 1) == 0) {
            puVar22 = &DAT_143f3eda8;
          }
          else {
            puVar22 = (undefined2 *)*puVar33;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_2218,puVar22);
          lVar24 = -1;
          local_2fe8 = 0;
          local_2fe0 = 0xf;
          local_2ff8[0] = 0;
          do {
            lVar24 = lVar24 + 1;
          } while (*(char *)(local_2190 + lVar24) != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_2ff8);
          FUN_140d4d0d0(lVar10 + 0x10,&DAT_146ba2f50,local_2ff8);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_2ff8);
          if (local_2198 != 0) {
            FMemory::Free();
          }
          puVar1 = puVar33 + 2;
          puVar33 = puVar33 + 3;
          *(undefined1 *)(lVar10 + 0x18) = *(undefined1 *)puVar1;
          param_1 = local_3a70;
        } while (puVar33 != puVar20);
      }
      puVar14 = puVar14 + 2;
    } while (puVar14 != puVar16);
    lVar10 = *(longlong *)(param_1 + 0x430);
  }
  FUN_1439f1c30(lVar10 + 0x280);
  puVar14 = *(undefined8 **)(param_1 + 0x180);
  puVar16 = puVar14 + (longlong)*(int *)(param_1 + 0x188) * 2;
  for (; puVar14 != puVar16; puVar14 = puVar14 + 2) {
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2178,puVar22);
    lVar10 = local_20f0;
    uVar13 = FUN_1439f1a80(*(longlong *)(param_1 + 0x430) + 0x280);
    lVar37 = -1;
    do {
      lVar37 = lVar37 + 1;
    } while (*(char *)(lVar10 + lVar37) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar13,lVar10);
    if (local_20f8 != 0) {
      FMemory::Free();
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = *(longlong *)(lVar10 + 0x398);
  if (lVar37 == 0) {
    lVar37 = FUN_1415185c0(0);
    *(longlong *)(lVar10 + 0x398) = lVar37;
  }
  iVar5 = *(int *)(lVar37 + 0x18);
  if (0 < iVar5) {
    lVar10 = *(longlong *)(lVar37 + 0x20);
    lVar24 = 0;
    do {
      FUN_141525800(*(undefined8 *)(lVar10 + 8 + lVar24 * 8));
      lVar24 = lVar24 + 1;
    } while (lVar24 < iVar5);
    *(undefined4 *)(lVar37 + 0x18) = 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x170);
  lVar37 = (longlong)*(int *)(param_1 + 0x178) * 0x20 + lVar10;
  for (; lVar10 != lVar37; lVar10 = lVar10 + 0x20) {
    lVar24 = *(longlong *)(param_1 + 0x430);
    lVar12 = *(longlong *)(lVar24 + 0x398);
    if (lVar12 == 0) {
      lVar12 = FUN_1415185c0(0);
      *(longlong *)(lVar24 + 0x398) = lVar12;
    }
    piVar18 = *(int **)(lVar12 + 0x20);
    if (piVar18 == (int *)0x0) {
LAB_140d53f69:
      FUN_1439f23d0(lVar12 + 0x10,*(int *)(lVar12 + 0x1c) + 1);
      piVar18 = *(int **)(lVar12 + 0x20);
      iVar8 = *piVar18;
LAB_140d53f7d:
      *piVar18 = iVar8 + 1;
      lVar24 = FUN_141518450(*(undefined8 *)(lVar12 + 0x10));
      *(longlong *)(*(longlong *)(lVar12 + 0x20) + 8 + (longlong)*(int *)(lVar12 + 0x18) * 8) =
           lVar24;
      *(int *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1;
    }
    else {
      iVar5 = *(int *)(lVar12 + 0x18);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar12 + 0x1c)) goto LAB_140d53f69;
        goto LAB_140d53f7d;
      }
      lVar24 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar12 + 0x18) = iVar5 + 1;
    }
    puVar14 = (undefined8 *)FName::ToString(lVar10,local_3630);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_20d8,puVar22);
    lVar12 = -1;
    local_33a8 = 0;
    local_33a0 = 0xf;
    local_33b8[0] = 0;
    do {
      lVar12 = lVar12 + 1;
    } while (*(char *)(local_2050 + lVar12) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_33b8);
    FUN_140d4d0d0(lVar24 + 0x28,&DAT_146ba2f50,local_33b8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_33b8);
    if (local_2058 != 0) {
      FMemory::Free();
    }
    if (local_3630[0] != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar24 + 0x30) = *(undefined4 *)(lVar10 + 0x18);
    lVar12 = *(longlong *)(lVar10 + 8);
    lVar39 = (longlong)*(int *)(lVar10 + 0x10) * 0x10 + lVar12;
    if (lVar12 != lVar39) {
      do {
        piVar18 = *(int **)(lVar24 + 0x20);
        if (piVar18 == (int *)0x0) {
LAB_140d54097:
          FUN_1439f23d0((undefined8 *)(lVar24 + 0x10),*(int *)(lVar24 + 0x1c) + 1);
          piVar18 = *(int **)(lVar24 + 0x20);
LAB_140d540a8:
          *piVar18 = *piVar18 + 1;
          lVar15 = FUN_1415183a0(*(undefined8 *)(lVar24 + 0x10));
          *(longlong *)(*(longlong *)(lVar24 + 0x20) + 8 + (longlong)*(int *)(lVar24 + 0x18) * 8) =
               lVar15;
          *(int *)(lVar24 + 0x18) = *(int *)(lVar24 + 0x18) + 1;
        }
        else {
          iVar5 = *(int *)(lVar24 + 0x18);
          if (*piVar18 <= iVar5) {
            if (*piVar18 == *(int *)(lVar24 + 0x1c)) goto LAB_140d54097;
            goto LAB_140d540a8;
          }
          lVar15 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
          *(int *)(lVar24 + 0x18) = iVar5 + 1;
        }
        puVar14 = (undefined8 *)FName::ToString(lVar12,local_3620);
        if (*(int *)(puVar14 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar14;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_2038,puVar22);
        lVar38 = -1;
        local_3388 = 0;
        local_3380 = 0xf;
        local_3398[0] = 0;
        do {
          lVar38 = lVar38 + 1;
        } while (*(char *)(local_1fb0 + lVar38) != '\0');
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3398);
        FUN_140d4d0d0(lVar15 + 0x10,&DAT_146ba2f50,local_3398);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                  (local_3398);
        if (local_1fb8 != 0) {
          FMemory::Free();
        }
        if (local_3620[0] != 0) {
          FMemory::Free();
        }
        puVar26 = (undefined4 *)(lVar12 + 8);
        lVar12 = lVar12 + 0x10;
        *(undefined4 *)(lVar15 + 0x18) = *puVar26;
        param_1 = local_3a70;
      } while (lVar12 != lVar39);
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  lVar37 = 0;
  iVar5 = *(int *)(lVar10 + 0xf0);
  if (0 < iVar5) {
    lVar24 = *(longlong *)(lVar10 + 0xf8);
    lVar12 = lVar37;
    do {
      FUN_141524e70(*(undefined8 *)(lVar24 + 8 + lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar5);
    *(undefined4 *)(lVar10 + 0xf0) = 0;
  }
  puVar16 = *(undefined8 **)(param_1 + 400);
  puVar14 = puVar16 + (longlong)*(int *)(param_1 + 0x198) * 3;
  for (; puVar16 != puVar14; puVar16 = puVar16 + 3) {
    lVar10 = *(longlong *)(param_1 + 0x430);
    piVar18 = *(int **)(lVar10 + 0xf8);
    if (piVar18 == (int *)0x0) {
LAB_140d54243:
      FUN_1439f23d0((undefined8 *)(lVar10 + 0xe8),*(int *)(lVar10 + 0xf4) + 1);
      piVar18 = *(int **)(lVar10 + 0xf8);
      iVar8 = *piVar18;
LAB_140d54256:
      *piVar18 = iVar8 + 1;
      lVar24 = FUN_141519a10(*(undefined8 *)(lVar10 + 0xe8));
      *(longlong *)(*(longlong *)(lVar10 + 0xf8) + 8 + (longlong)*(int *)(lVar10 + 0xf0) * 8) =
           lVar24;
      *(int *)(lVar10 + 0xf0) = *(int *)(lVar10 + 0xf0) + 1;
    }
    else {
      iVar5 = *(int *)(lVar10 + 0xf0);
      iVar8 = *piVar18;
      if (iVar8 <= iVar5) {
        if (iVar8 == *(int *)(lVar10 + 0xf4)) goto LAB_140d54243;
        goto LAB_140d54256;
      }
      lVar24 = *(longlong *)(piVar18 + (longlong)iVar5 * 2 + 2);
      *(int *)(lVar10 + 0xf0) = iVar5 + 1;
    }
    if (*(int *)(puVar16 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar16;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1f98,puVar22);
    lVar10 = -1;
    local_3368 = 0;
    local_3360 = 0xf;
    local_3378[0] = 0;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(local_1f10 + lVar10) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3378);
    FUN_140d4d0d0(lVar24 + 0x10,&DAT_146ba2f50,local_3378);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_3378);
    if (local_1f18 != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(lVar24 + 0x18) = *(undefined1 *)(puVar16 + 2);
  }
  FUN_1439f1c30(*(longlong *)(param_1 + 0x430) + 0x100);
  puVar14 = *(undefined8 **)(param_1 + 0x1a0);
  puVar16 = puVar14 + (longlong)*(int *)(param_1 + 0x1a8) * 2;
  for (; puVar14 != puVar16; puVar14 = puVar14 + 2) {
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1ef8,puVar22);
    lVar10 = local_1e70;
    uVar13 = FUN_1439f1a80(*(longlong *)(param_1 + 0x430) + 0x100);
    lVar24 = -1;
    do {
      lVar24 = lVar24 + 1;
    } while (*(char *)(lVar10 + lVar24) != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar13,lVar10);
    if (local_1e78 != 0) {
      FMemory::Free();
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x430);
  iVar5 = *(int *)(lVar10 + 0x120);
  if (0 < iVar5) {
    lVar24 = *(longlong *)(lVar10 + 0x128);
    do {
      FUN_141526310(*(undefined8 *)(lVar24 + 8 + lVar37 * 8));
      lVar37 = lVar37 + 1;
    } while (lVar37 < iVar5);
    *(undefined4 *)(lVar10 + 0x120) = 0;
  }
  puVar14 = *(undefined8 **)(param_1 + 0x1b0);
  puVar16 = puVar14 + (longlong)*(int *)(param_1 + 0x1b8) * 0x16;
  if (puVar14 != puVar16) {
    piVar18 = (int *)(puVar14 + 5);
    do {
      lVar10 = *(longlong *)(param_1 + 0x430);
      piVar21 = *(int **)(lVar10 + 0x128);
      if (piVar21 == (int *)0x0) {
LAB_140d54453:
        FUN_1439f23d0((undefined8 *)(lVar10 + 0x118),*(int *)(lVar10 + 0x124) + 1);
        piVar21 = *(int **)(lVar10 + 0x128);
        iVar8 = *piVar21;
LAB_140d54466:
        *piVar21 = iVar8 + 1;
        lVar37 = FUN_141519210(*(undefined8 *)(lVar10 + 0x118));
        *(longlong *)(*(longlong *)(lVar10 + 0x128) + 8 + (longlong)*(int *)(lVar10 + 0x120) * 8) =
             lVar37;
        *(int *)(lVar10 + 0x120) = *(int *)(lVar10 + 0x120) + 1;
      }
      else {
        iVar5 = *(int *)(lVar10 + 0x120);
        iVar8 = *piVar21;
        if (iVar8 <= iVar5) {
          if (iVar8 == *(int *)(lVar10 + 0x124)) goto LAB_140d54453;
          goto LAB_140d54466;
        }
        lVar37 = *(longlong *)(piVar21 + (longlong)iVar5 * 2 + 2);
        *(int *)(lVar10 + 0x120) = iVar5 + 1;
      }
      if (piVar18[-8] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      local_2f58 = 0;
      if (puVar22 == (undefined2 *)0x0) {
        local_2f48 = 0;
        local_2f50 = 0;
      }
      else {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (puVar22[lVar10] != 0);
        FUN_140d3cf10(local_2fd8,puVar22,lVar10,1);
      }
      local_3348 = 0;
      lVar10 = -1;
      local_3340 = 0xf;
      local_3358[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_2f50 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3358);
      FUN_140d4d0d0(lVar37 + 0x10,&DAT_146ba2f50,local_3358);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_3358);
      if (local_2f58 != 0) {
        FMemory::Free();
      }
      if (piVar18[-4] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + -6);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1e58,puVar22);
      lVar10 = -1;
      local_3328 = 0;
      local_3320 = 0xf;
      local_3338[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_1dd0 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3338);
      FUN_140d4d0d0(lVar37 + 0x18,&DAT_146ba2f50,local_3338);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_3338);
      if (local_1dd8 != 0) {
        FMemory::Free();
      }
      if (*piVar18 == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + -2);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1db8,puVar22);
      lVar10 = -1;
      local_3308 = 0;
      local_3300 = 0xf;
      local_3318[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_1d30 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3318);
      FUN_140d4d0d0(lVar37 + 0x20,&DAT_146ba2f50,local_3318);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_3318);
      if (local_1d38 != 0) {
        FMemory::Free();
      }
      if (piVar18[4] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + 2);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1d18,puVar22);
      lVar10 = -1;
      local_32e8 = 0;
      local_32e0 = 0xf;
      local_32f8[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_1c90 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_32f8);
      FUN_140d4d0d0(lVar37 + 0x28,&DAT_146ba2f50,local_32f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_32f8);
      if (local_1c98 != 0) {
        FMemory::Free();
      }
      if (piVar18[8] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + 6);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1c78,puVar22);
      lVar10 = -1;
      local_32c8 = 0;
      local_32c0 = 0xf;
      local_32d8[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_1bf0 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_32d8);
      FUN_140d4d0d0(lVar37 + 0x30,&DAT_146ba2f50,local_32d8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_32d8);
      if (local_1bf8 != 0) {
        FMemory::Free();
      }
      if (piVar18[0xc] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + 10);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1bd8,puVar22);
      lVar10 = -1;
      local_32a8 = 0;
      local_32a0 = 0xf;
      local_32b8[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_1b50 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_32b8);
      FUN_140d4d0d0(lVar37 + 0x38,&DAT_146ba2f50,local_32b8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_32b8);
      if (local_1b58 != 0) {
        FMemory::Free();
      }
      if (piVar18[0x10] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + 0xe);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1b38,puVar22);
      lVar10 = -1;
      local_3288 = 0;
      local_3280 = 0xf;
      local_3298[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_1ab0 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3298);
      FUN_140d4d0d0(lVar37 + 0x40,&DAT_146ba2f50,local_3298);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_3298);
      if (local_1ab8 != 0) {
        FMemory::Free();
      }
      if (piVar18[0x14] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + 0x12);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1a98,puVar22);
      lVar10 = -1;
      local_3268 = 0;
      local_3260 = 0xf;
      local_3278[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_1a10 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3278);
      FUN_140d4d0d0(lVar37 + 0x48,&DAT_146ba2f50,local_3278);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_3278);
      if (local_1a18 != 0) {
        FMemory::Free();
      }
      if (piVar18[0x18] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + 0x16);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_19f8,puVar22);
      lVar10 = -1;
      local_3248 = 0;
      local_3240 = 0xf;
      local_3258[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_1970 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3258);
      FUN_140d4d0d0(lVar37 + 0x50,&DAT_146ba2f50,local_3258);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_3258);
      if (local_1978 != 0) {
        FMemory::Free();
      }
      if (piVar18[0x1c] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(piVar18 + 0x1a);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1958,puVar22);
      lVar10 = -1;
      local_3228 = 0;
      local_3220 = 0xf;
      local_3238[0] = 0;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(local_18d0 + lVar10) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3238);
      FUN_140d4d0d0(lVar37 + 0x58,&DAT_146ba2f50,local_3238);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_3238);
      if (local_18d8 != 0) {
        FMemory::Free();
      }
      puVar14 = puVar14 + 0x16;
      *(int *)(lVar37 + 0x60) = piVar18[0x1e];
      *(int *)(lVar37 + 100) = piVar18[0x1f];
      piVar21 = piVar18 + 0x20;
      piVar18 = piVar18 + 0x2c;
      *(int *)(lVar37 + 0x68) = *piVar21;
    } while (puVar14 != puVar16);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x40c) = *(undefined4 *)(param_1 + 0x1c0);
  FUN_141542660(*(undefined8 *)(param_1 + 0x430));
  puVar26 = *(undefined4 **)(param_1 + 0x1c8);
  local_3a60 = (byte *)(puVar26 + (longlong)*(int *)(param_1 + 0x1d0) * 0x18);
  if ((byte *)puVar26 != local_3a60) {
    piVar18 = puVar26 + 10;
    do {
      puVar14 = (undefined8 *)FUN_140d26920(*(longlong *)(local_3a70 + 0x430) + 0x130);
      *(undefined4 *)(puVar14 + 9) = *puVar26;
      *(char *)((longlong)puVar14 + 0x4c) = (char)piVar18[-9];
      *(undefined1 *)((longlong)puVar14 + 0x4d) = *(undefined1 *)((longlong)piVar18 + -0x23);
      *(int *)(puVar14 + 10) = piVar18[-8];
      *(int *)((longlong)puVar14 + 0x54) = piVar18[-7];
      puVar34 = *(undefined4 **)(piVar18 + -6);
      puVar40 = puVar34 + (longlong)piVar18[-4] * 0xc;
      local_3a68 = puVar14;
      if (puVar34 != puVar40) {
        do {
          piVar21 = (int *)puVar14[4];
          if (piVar21 == (int *)0x0) {
LAB_140d54b75:
            FUN_1439f23d0(puVar14 + 2,*(int *)((longlong)puVar14 + 0x1c) + 1);
            piVar21 = (int *)puVar14[4];
            iVar8 = *piVar21;
LAB_140d54b88:
            *piVar21 = iVar8 + 1;
            lVar10 = FUN_141543c30(puVar14[2]);
            *(longlong *)(puVar14[4] + 8 + (longlong)*(int *)(puVar14 + 3) * 8) = lVar10;
            *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
          }
          else {
            iVar5 = *(int *)(puVar14 + 3);
            iVar8 = *piVar21;
            if (iVar8 <= iVar5) {
              if (iVar8 == *(int *)((longlong)puVar14 + 0x1c)) goto LAB_140d54b75;
              goto LAB_140d54b88;
            }
            lVar10 = *(longlong *)(piVar21 + (longlong)iVar5 * 2 + 2);
            *(int *)(puVar14 + 3) = iVar5 + 1;
          }
          *(undefined4 *)(lVar10 + 0x18) = *puVar34;
          FSoftObjectPath::ToString(puVar34 + 6,&local_38c0);
          puVar22 = &DAT_143f3eda8;
          if (local_38b8 != 0) {
            puVar22 = local_38c0;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_18b8,puVar22);
          lVar37 = -1;
          local_3208 = 0;
          local_3200 = 0xf;
          local_3218[0] = 0;
          do {
            lVar37 = lVar37 + 1;
          } while (*(char *)(local_1830 + lVar37) != '\0');
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_3218);
          FUN_140d4d0d0(lVar10 + 0x10,&DAT_146ba2f50,local_3218);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                    (local_3218);
          if (local_1838 != 0) {
            FMemory::Free();
          }
          if (local_38c0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          puVar34 = puVar34 + 0xc;
        } while (puVar34 != puVar40);
      }
      puVar14 = local_3a68;
      FSoftObjectPath::ToString(piVar18 + 6,&local_38b0);
      puVar22 = &DAT_143f3eda8;
      if (local_38a8 != 0) {
        puVar22 = local_38b0;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_1818,puVar22);
      lVar10 = 0;
      local_31e8 = 0;
      lVar37 = -1;
      local_31f8[0] = 0;
      local_31e0 = 0xf;
      do {
        lVar37 = lVar37 + 1;
      } while (*(char *)(local_1790 + lVar37) != '\0');
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_31f8);
      FUN_140d4d0d0(puVar14 + 8,&DAT_146ba2f50,local_31f8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_31f8);
      if (local_1798 != 0) {
        FMemory::Free();
      }
      if (local_38b0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar35 = *(undefined1 **)(piVar18 + -2);
      lVar37 = (longlong)*piVar18;
      if (puVar35 + *piVar18 < puVar35) {
        lVar37 = lVar10;
      }
      if (lVar37 != 0) {
        do {
          piVar21 = (int *)puVar14[7];
          uVar3 = *puVar35;
          if (piVar21 == (int *)0x0) {
LAB_140d54d79:
            FUN_1439f23d0(puVar14 + 5,*(int *)((longlong)puVar14 + 0x34) + 1);
            piVar21 = (int *)puVar14[7];
LAB_140d54d8a:
            *piVar21 = *piVar21 + 1;
            lVar24 = FUN_141543f60(puVar14[5]);
            *(longlong *)(puVar14[7] + 8 + (longlong)*(int *)(puVar14 + 6) * 8) = lVar24;
            *(int *)(puVar14 + 6) = *(int *)(puVar14 + 6) + 1;
          }
          else {
            iVar5 = *(int *)(puVar14 + 6);
            if (*piVar21 <= iVar5) {
              if (*piVar21 == *(int *)((longlong)puVar14 + 0x34)) goto LAB_140d54d79;
              goto LAB_140d54d8a;
            }
            lVar24 = *(longlong *)(piVar21 + (longlong)iVar5 * 2 + 2);
            *(int *)(puVar14 + 6) = iVar5 + 1;
          }
          puVar35 = puVar35 + 1;
          *(undefined1 *)(lVar24 + 0x10) = uVar3;
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar37);
      }
      puVar26 = puVar26 + 0x18;
      piVar18 = piVar18 + 0x18;
      param_1 = local_3a70;
    } while ((byte *)puVar26 != local_3a60);
  }
  if (*(char *)(param_1 + 0x338) != '\0') {
    puVar14 = *(undefined8 **)(param_1 + 0x390);
    local_3a68 = puVar14 + (longlong)*(int *)(param_1 + 0x398) * 0xc;
    if (puVar14 != local_3a68) {
      piVar18 = (int *)(puVar14 + 5);
      do {
        lVar10 = FUN_140d26920(*(longlong *)(local_3a70 + 0x430) + 0x130);
        *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)puVar14;
        *(char *)(lVar10 + 0x4c) = (char)piVar18[-9];
        *(undefined1 *)(lVar10 + 0x4d) = *(undefined1 *)((longlong)piVar18 + -0x23);
        *(int *)(lVar10 + 0x50) = piVar18[-8];
        *(int *)(lVar10 + 0x54) = piVar18[-7];
        puVar26 = *(undefined4 **)(piVar18 + -6);
        puVar34 = puVar26 + (longlong)piVar18[-4] * 0xc;
        for (; puVar26 != puVar34; puVar26 = puVar26 + 0xc) {
          lVar37 = FUN_140d596f0(lVar10);
          *(undefined4 *)(lVar37 + 0x18) = *puVar26;
          puVar16 = (undefined8 *)FUN_140d3ab90(puVar26,local_3610);
          if (*(int *)(puVar16 + 1) == 0) {
            puVar22 = &DAT_143f3eda8;
          }
          else {
            puVar22 = (undefined2 *)*puVar16;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_1778,puVar22);
          FUN_140d5a920(lVar37,local_16f0);
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_1778);
          FUN_140591050(local_3610);
        }
        puVar16 = (undefined8 *)FUN_140d3ab70(puVar14,local_3600);
        if (*(int *)(puVar16 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar16;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_16d8,puVar22);
        FUN_140d5ab30(lVar10,local_1650);
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_16d8);
        FUN_140591050();
        puVar35 = *(undefined1 **)(piVar18 + -2);
        lVar24 = 0;
        lVar37 = (longlong)*piVar18;
        if (puVar35 + *piVar18 < puVar35) {
          lVar37 = lVar24;
        }
        if (lVar37 != 0) {
          do {
            uVar3 = *puVar35;
            lVar12 = FUN_140d59040(lVar10);
            lVar24 = lVar24 + 1;
            puVar35 = puVar35 + 1;
            *(undefined1 *)(lVar12 + 0x10) = uVar3;
          } while (lVar24 != lVar37);
        }
        puVar14 = puVar14 + 0xc;
        piVar18 = piVar18 + 0x18;
        param_1 = local_3a70;
      } while (puVar14 != local_3a68);
    }
  }
  FUN_141542980(*(undefined8 *)(param_1 + 0x430));
  puVar34 = *(undefined4 **)(param_1 + 0x1d8);
  puVar26 = puVar34 + (longlong)*(int *)(param_1 + 0x1e0) * 6;
  for (; puVar34 != puVar26; puVar34 = puVar34 + 6) {
    lVar10 = FUN_140d26ca0(*(longlong *)(param_1 + 0x430) + 0x148);
    *(undefined4 *)(lVar10 + 0x18) = *puVar34;
    if (puVar34[4] == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = *(undefined2 **)(puVar34 + 2);
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1638,puVar22);
    FUN_140d5a920(lVar10,local_15b0);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_1638);
  }
  FUN_140d59c50(*(undefined8 *)(param_1 + 0x430));
  uVar9 = *(undefined4 *)(param_1 + 0x350);
  lVar10 = FUN_140d5a5b0(*(undefined8 *)(param_1 + 0x430));
  *(undefined4 *)(lVar10 + 0x40) = uVar9;
  uVar9 = *(undefined4 *)(param_1 + 0x354);
  lVar10 = FUN_140d5a5b0(*(undefined8 *)(param_1 + 0x430));
  *(undefined4 *)(lVar10 + 0x44) = uVar9;
  lVar10 = *(longlong *)(param_1 + 0x358);
  lVar37 = FUN_140d5a5b0(*(undefined8 *)(param_1 + 0x430));
  uVar9 = 0x7fffffff;
  if (lVar10 < 0x80000000) {
    uVar9 = (undefined4)lVar10;
  }
  *(undefined4 *)(lVar37 + 0x48) = uVar9;
  uVar13 = *(undefined8 *)(param_1 + 0x358);
  lVar10 = FUN_140d5a5b0(*(undefined8 *)(param_1 + 0x430));
  *(undefined8 *)(lVar10 + 0x50) = uVar13;
  uVar3 = *(undefined1 *)(param_1 + 0x360);
  lVar10 = FUN_140d5a5b0(*(undefined8 *)(param_1 + 0x430));
  *(undefined1 *)(lVar10 + 0x58) = uVar3;
  puVar26 = *(undefined4 **)(param_1 + 0x368);
  puVar34 = puVar26 + (longlong)*(int *)(param_1 + 0x370) * 0xc;
  for (; puVar26 != puVar34; puVar26 = puVar26 + 0xc) {
    uVar13 = FUN_140d5a5b0(*(undefined8 *)(param_1 + 0x430));
    lVar10 = FUN_140d59560(uVar13);
    *(undefined4 *)(lVar10 + 0x18) = *puVar26;
    *(undefined1 *)(lVar10 + 0x1c) = *(undefined1 *)(puVar26 + 1);
    puVar14 = (undefined8 *)FUN_140d3ab90(puVar26,local_35f0);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1598,puVar22);
    FUN_140d5a920(lVar10,local_1510);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_1598);
    FUN_140591050(local_35f0);
  }
  puVar35 = *(undefined1 **)(param_1 + 0x378);
  puVar29 = puVar35 + (longlong)*(int *)(param_1 + 0x380) * 0x30;
  for (; puVar35 != puVar29; puVar35 = puVar35 + 0x30) {
    uVar13 = FUN_140d5a5b0(*(undefined8 *)(param_1 + 0x430));
    lVar10 = FUN_140d594f0(uVar13);
    *(undefined1 *)(lVar10 + 0x18) = *puVar35;
    puVar14 = (undefined8 *)FUN_140d3ab90(puVar35,local_35e0);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_14f8,puVar22);
    FUN_140d5a920(lVar10,local_1470);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_14f8);
    FUN_140591050(local_35e0);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x388);
  lVar10 = FUN_140d5a5b0(*(undefined8 *)(param_1 + 0x430));
  *(undefined4 *)(lVar10 + 0x4c) = uVar9;
  FUN_1439f1c30(*(longlong *)(param_1 + 0x430) + 0x160);
  puVar14 = *(undefined8 **)(param_1 + 0x1e8);
  puVar16 = puVar14 + (longlong)*(int *)(param_1 + 0x1f0) * 2;
  for (; puVar14 != puVar16; puVar14 = puVar14 + 2) {
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1458,puVar22);
    FUN_140d596b0(*(undefined8 *)(param_1 + 0x430),local_13d0);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_1458);
  }
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear
            (*(longlong *)(param_1 + 0x430) + 0x178);
  uVar23 = 0;
  puVar26 = *(undefined4 **)(param_1 + 0x1f8);
  uVar11 = (longlong)*(int *)(param_1 + 0x200) & 0x3fffffffffffffff;
  if (puVar26 + *(int *)(param_1 + 0x200) < puVar26) {
    uVar11 = uVar23;
  }
  uVar32 = uVar23;
  if (uVar11 != 0) {
    do {
      local_3a38[0] = *puVar26;
      FUN_1439f19c0(*(longlong *)(param_1 + 0x430) + 0x178,local_3a38);
      uVar32 = uVar32 + 1;
      puVar26 = puVar26 + 1;
    } while (uVar32 != uVar11);
  }
  FUN_140d59e50(*(undefined8 *)(param_1 + 0x430));
  lVar37 = *(longlong *)(param_1 + 0x208);
  lVar10 = lVar37 + (longlong)*(int *)(param_1 + 0x210) * 0x28;
  for (; lVar37 != lVar10; lVar37 = lVar37 + 0x28) {
    lVar24 = FUN_140d59640(*(undefined8 *)(param_1 + 0x430));
    puVar14 = (undefined8 *)FName::ToString(lVar37,local_35d0);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_13b8,puVar22);
    FUN_140d5a920(lVar24,local_1330);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_13b8);
    FUN_140591050(local_35d0);
    uVar9 = *(undefined4 *)(lVar37 + 8);
    lVar12 = FUN_140d5a460(lVar24);
    *(undefined4 *)(lVar12 + 0x10) = uVar9;
    uVar9 = *(undefined4 *)(lVar37 + 0xc);
    lVar12 = FUN_140d5a460(lVar24);
    *(undefined4 *)(lVar12 + 0x14) = uVar9;
    uVar9 = *(undefined4 *)(lVar37 + 0x10);
    lVar12 = FUN_140d5a460(lVar24);
    *(undefined4 *)(lVar12 + 0x18) = uVar9;
    uVar9 = *(undefined4 *)(lVar37 + 0x14);
    lVar12 = FUN_140d5a680(lVar24);
    *(undefined4 *)(lVar12 + 0x10) = uVar9;
    uVar9 = *(undefined4 *)(lVar37 + 0x18);
    lVar12 = FUN_140d5a680(lVar24);
    *(undefined4 *)(lVar12 + 0x14) = uVar9;
    uVar9 = *(undefined4 *)(lVar37 + 0x1c);
    lVar12 = FUN_140d5a680(lVar24);
    *(undefined4 *)(lVar12 + 0x18) = uVar9;
    *(undefined1 *)(lVar24 + 0x28) = *(undefined1 *)(lVar37 + 0x20);
    *(undefined1 *)(lVar24 + 0x29) = *(undefined1 *)(lVar37 + 0x21);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x218);
  lVar10 = FUN_140d5a550(*(undefined8 *)(param_1 + 0x430));
  *(undefined4 *)(lVar10 + 0x30) = uVar9;
  uVar13 = FUN_140d5a550(*(undefined8 *)(param_1 + 0x430));
  FUN_140d59b80(uVar13);
  puVar34 = *(undefined4 **)(param_1 + 0x220);
  puVar26 = puVar34 + (longlong)*(int *)(param_1 + 0x228) * 6;
  for (; puVar34 != puVar26; puVar34 = puVar34 + 6) {
    uVar13 = FUN_140d5a550(*(undefined8 *)(param_1 + 0x430));
    lVar10 = FUN_140d590b0(uVar13);
    *(undefined4 *)(lVar10 + 0x18) = *puVar34;
    if (puVar34[4] == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = *(undefined2 **)(puVar34 + 2);
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1318,puVar22);
    FUN_140d5a920(lVar10,local_1290);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_1318);
  }
  if (*(int *)(param_1 + 0x238) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = *(undefined2 **)(param_1 + 0x230);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_1278,puVar22);
  uVar13 = FUN_140d5a550(*(undefined8 *)(param_1 + 0x430));
  FUN_140d5ad10(uVar13,local_11f0);
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_1278);
  uVar13 = FUN_140d5a520(*(undefined8 *)(param_1 + 0x430));
  FUN_140d59df0(uVar13);
  puVar14 = *(undefined8 **)(param_1 + 0x240);
  puVar16 = puVar14 + (longlong)*(int *)(param_1 + 0x248) * 0x11;
  for (; puVar14 != puVar16; puVar14 = puVar14 + 0x11) {
    uVar13 = FUN_140d5a520(*(undefined8 *)(param_1 + 0x430));
    uVar13 = FUN_140d59480(uVar13);
    local_31c8 = 0;
    local_31c0 = 0xf;
    local_31d8[0] = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (local_31d8,*puVar14,(longlong)*(int *)(puVar14 + 1));
    FUN_140d5abe0(uVar13,local_31d8);
    if (*(int *)(puVar14 + 0x10) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)puVar14[0xf];
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_11d8,puVar22);
    FUN_140d5a9d0(uVar13,local_1150);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_11d8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (local_31d8);
  }
  FUN_140d59ec0(*(undefined8 *)(param_1 + 0x430));
  puVar35 = *(undefined1 **)(param_1 + 0x250);
  puVar29 = puVar35 + (longlong)*(int *)(param_1 + 600) * 0x30;
  for (; puVar35 != puVar29; puVar35 = puVar35 + 0x30) {
    lVar10 = FUN_140d59760(*(undefined8 *)(param_1 + 0x430));
    *(undefined1 *)(lVar10 + 0x18) = *puVar35;
    puVar14 = (undefined8 *)FUN_140d3ab90(puVar35,local_3760);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1138,puVar22);
    FUN_140d5a920(lVar10,local_10b0);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_1138);
    FUN_140591050(local_3760);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x430) + 0x411) = *(undefined1 *)(param_1 + 0x260);
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x430) + 0x1c0) + 0x50))();
  plVar36 = (longlong *)(param_1 + 0x268);
  puVar14 = (undefined8 *)
            TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>(local_35c0,param_1 + 0x278,0);
  uStack_3860 = *puVar14;
  uVar13 = puVar14[1];
  uStack_3850 = *(uint *)(puVar14 + 2);
  iStack_384c = *(int *)((longlong)puVar14 + 0x14);
  uStack_34e8 = puVar14[2];
  local_3848 = *(undefined4 *)(puVar14 + 3);
  uStack_3844 = *(undefined4 *)((longlong)puVar14 + 0x1c);
  uStack_34e0 = puVar14[3];
  uStack_34f0._0_4_ = (undefined4)uVar13;
  uStack_34f0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_3858 = (undefined4)uStack_34f0;
  uStack_3854 = uStack_34f0._4_4_;
  local_3868 = plVar36;
  local_3500 = plVar36;
  uStack_34f8 = uStack_3860;
  uStack_34f0 = uVar13;
  puVar14 = (undefined8 *)
            TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (local_35a0,param_1 + 0x278,*(undefined4 *)(param_1 + 0x290));
  uStack_37a8 = *puVar14;
  local_37a0 = puVar14[1];
  uStack_3798 = puVar14[2];
  local_3790 = puVar14[3];
  local_37b0 = plVar36;
  local_3500 = plVar36;
  uStack_34f8 = uStack_37a8;
  uStack_34f0 = local_37a0;
  uStack_34e8 = uStack_3798;
  uStack_34e0 = local_3790;
  while (((iStack_384c != (int)((ulonglong)uStack_3798 >> 0x20) ||
          (CONCAT44(uStack_3854,local_3858) != local_37a0)) || (local_3868 != local_37b0))) {
    FSoftObjectPath::FSoftObjectPath(local_37f0,(longlong)iStack_384c * 0x20 + *local_3868);
    puVar14 = (undefined8 *)FName::ToString(local_37f0,local_3750);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    lVar10 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_418,puVar22);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&local_3500,*(undefined8 *)(lVar10 + 0x88));
    puVar22 = &DAT_143f3eda8;
    if (local_37e0 != 0) {
      puVar22 = local_37e8;
    }
    lVar10 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_4b8,puVar22);
    uVar13 = *(undefined8 *)(lVar10 + 0x88);
    uVar17 = FUN_140d5a610(*(undefined8 *)(param_1 + 0x430));
    uVar17 = FUN_140d256b0(uVar17,&local_3500);
    FUN_140d24a90(uVar17,uVar13);
    FUN_140d232f0(local_4b8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
              (&local_3500);
    FUN_140d232f0(local_418);
    FUN_140591050(local_3750);
    FUN_140d23310(local_37f0);
    uStack_3850 = uStack_3850 & ~uStack_3860._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3860);
  }
  FUN_140d59be0(*(undefined8 *)(param_1 + 0x430));
  pbVar30 = *(byte **)(param_1 + 0x2b8);
  pbVar41 = pbVar30 + (longlong)*(int *)(param_1 + 0x2c0) * 0xc;
  for (; pbVar30 != pbVar41; pbVar30 = pbVar30 + 0xc) {
    lVar10 = FUN_140d59190(*(undefined8 *)(param_1 + 0x430));
    bVar4 = *pbVar30;
    lVar37 = FUN_140d5a5e0(lVar10);
    *(uint *)(lVar37 + 0x10) = (uint)bVar4;
    bVar4 = pbVar30[1];
    lVar37 = FUN_140d5a5e0(lVar10);
    *(uint *)(lVar37 + 0x14) = (uint)bVar4;
    *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)(pbVar30 + 4);
    *(undefined4 *)(lVar10 + 0x1c) = *(undefined4 *)(pbVar30 + 8);
  }
  uVar13 = FUN_140d5a4c0(*(undefined8 *)(param_1 + 0x430));
  FUN_140d59b50(uVar13);
  puVar35 = *(undefined1 **)(param_1 + 0x2c8);
  uVar11 = (longlong)*(int *)(param_1 + 0x2d0);
  if (puVar35 + *(int *)(param_1 + 0x2d0) < puVar35) {
    uVar11 = uVar23;
  }
  if (uVar11 != 0) {
    do {
      uVar3 = *puVar35;
      uVar13 = FUN_140d5a4c0(*(undefined8 *)(param_1 + 0x430));
      uVar13 = FUN_140d5a490(uVar13);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back(uVar13,uVar3);
      uVar23 = uVar23 + 1;
      puVar35 = puVar35 + 1;
    } while (uVar23 != uVar11);
  }
  uVar13 = FUN_140d5a4f0(*(undefined8 *)(param_1 + 0x430));
  FUN_140d59af0(uVar13);
  lVar10 = *(longlong *)(param_1 + 0x2d8);
  lVar37 = (longlong)*(int *)(param_1 + 0x2e0) * 0x50 + lVar10;
  for (; lVar10 != lVar37; lVar10 = lVar10 + 0x50) {
    uVar13 = FUN_140d5a4f0(*(undefined8 *)(param_1 + 0x430));
    uVar13 = FUN_140d58f90(uVar13);
    puVar14 = (undefined8 *)FMorSoftSpawnableAssetPtr::ToString(lVar10,local_3740);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_1098,puVar22);
    FUN_140d5a920(uVar13,local_1010);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_1098);
    FUN_140591050(local_3740);
    puVar14 = (undefined8 *)UVariantObjectBinding::GetObjectPath(lVar10,local_3730);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_ff8,puVar22);
    FUN_140d5a9d0(uVar13,local_f70);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_ff8);
    FUN_140591050(local_3730);
  }
  uVar3 = *(undefined1 *)(param_1 + 0x2e8);
  lVar10 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
  *(undefined1 *)(lVar10 + 0x28) = uVar3;
  uVar3 = *(undefined1 *)(param_1 + 0x2e9);
  lVar10 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
  *(undefined1 *)(lVar10 + 0x29) = uVar3;
  uVar3 = *(undefined1 *)(param_1 + 0x2ea);
  lVar10 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
  *(undefined1 *)(lVar10 + 0x2a) = uVar3;
  uVar3 = *(undefined1 *)(param_1 + 0x2eb);
  lVar10 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
  *(undefined1 *)(lVar10 + 0x2b) = uVar3;
  uVar3 = *(undefined1 *)(param_1 + 0x2ec);
  lVar10 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
  *(undefined1 *)(lVar10 + 0x2c) = uVar3;
  uVar9 = *(undefined4 *)(param_1 + 0x2f0);
  lVar10 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
  *(undefined4 *)(lVar10 + 0x30) = uVar9;
  lVar10 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
  FUN_1439f1c30(lVar10 + 0x10);
  lVar37 = *(longlong *)(param_1 + 0x2f8);
  lVar10 = lVar37 + (longlong)*(int *)(param_1 + 0x300) * 0x28;
  for (; lVar37 != lVar10; lVar37 = lVar37 + 0x28) {
    FSoftObjectPath::ToString(lVar37 + 0x10,&local_38a0);
    puVar22 = &DAT_143f3eda8;
    if (local_3898 != 0) {
      puVar22 = local_38a0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_f58,puVar22);
    uVar13 = local_ed0;
    uVar17 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
    FUN_140d59270(uVar17,uVar13);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_f58);
    FUN_140591050(&local_38a0);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x308);
  lVar10 = FUN_140d5a6e0(*(undefined8 *)(param_1 + 0x430));
  *(undefined4 *)(lVar10 + 0x34) = uVar9;
  if (*(int *)(param_1 + 0x410) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = *(undefined2 **)(param_1 + 0x408);
  }
  lVar10 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                     (local_378,puVar22);
  FUN_140d5ae70(*(undefined8 *)(param_1 + 0x430),*(undefined8 *)(lVar10 + 0x88));
  FUN_140d232f0(local_378);
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x414) = *(undefined4 *)(param_1 + 0x418);
  *(uint *)(*(longlong *)(param_1 + 0x430) + 0x418) = (uint)*(byte *)(param_1 + 0x310);
  uVar13 = FUN_140d5a6b0(*(undefined8 *)(param_1 + 0x430));
  FUN_140d59d50(uVar13);
  lVar10 = *(longlong *)(param_1 + 0x318);
  lVar37 = (longlong)*(int *)(param_1 + 800) * 0x10 + lVar10;
  for (; lVar10 != lVar37; lVar10 = lVar10 + 0x10) {
    uVar13 = FUN_140d5a6b0(*(undefined8 *)(param_1 + 0x430));
    lVar24 = FUN_140d59410(uVar13);
    puVar14 = (undefined8 *)FName::ToString(lVar10,local_3720);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_eb8,puVar22);
    FUN_140d5a920(lVar24,local_e30);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_eb8);
    FUN_140591050(local_3720);
    *(undefined4 *)(lVar24 + 0x18) = *(undefined4 *)(lVar10 + 8);
    *(undefined4 *)(lVar24 + 0x1c) = *(undefined4 *)(lVar10 + 0xc);
  }
  puVar14 = (undefined8 *)FName::ToString(param_1 + 0x328,local_3710);
  if (*(int *)(puVar14 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = (undefined2 *)*puVar14;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_e18,puVar22);
  uVar13 = FUN_140d5a6b0(*(undefined8 *)(param_1 + 0x430));
  FUN_140d5ad10(uVar13,local_d90);
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_e18);
  FUN_140591050(local_3710);
  FUN_140d59ce0(*(undefined8 *)(param_1 + 0x430));
  lVar37 = *(longlong *)(param_1 + 0x40);
  lVar10 = lVar37 + (longlong)*(int *)(param_1 + 0x48) * 0x18;
  for (; lVar37 != lVar10; lVar37 = lVar37 + 0x18) {
    uVar13 = FUN_140d59320(*(undefined8 *)(param_1 + 0x430));
    puVar14 = (undefined8 *)FName::ToString(lVar37,local_3700);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar22 = &DAT_143f3eda8;
    }
    else {
      puVar22 = (undefined2 *)*puVar14;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d78,puVar22);
    FUN_140d5ad10(uVar13,local_cf0);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_d78);
    FUN_140591050(local_3700);
    lVar24 = *(longlong *)(lVar37 + 8);
    lVar12 = (longlong)*(int *)(lVar37 + 0x10) * 0x10 + lVar24;
    for (; lVar24 != lVar12; lVar24 = lVar24 + 0x10) {
      lVar39 = FUN_140d595d0(uVar13);
      puVar14 = (undefined8 *)FName::ToString(lVar24,local_36f0);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_cd8,puVar22);
      FUN_140d5a920(lVar39,local_c50);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_cd8);
      FUN_140591050(local_36f0);
      *(undefined4 *)(lVar39 + 0x18) = *(undefined4 *)(lVar24 + 8);
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x41c) = *(undefined4 *)(param_1 + 0x3c);
  uVar13 = FUN_140d5a580(*(undefined8 *)(param_1 + 0x430));
  FUN_140d59c80(uVar13);
  if (*(char *)(param_1 + 0x338) != '\0') goto LAB_140d56197;
  lVar10 = *(longlong *)(param_1 + 0x330);
  if (lVar10 == 0) {
    uVar13 = GetTransientPackage();
    lVar10 = NewObject<UTextPropertyTestObject>(uVar13);
    *(longlong *)(param_1 + 0x330) = lVar10;
    if (lVar10 != 0) goto LAB_140d55eb4;
  }
  else {
LAB_140d55eb4:
    plVar36 = (longlong *)(lVar10 + 0x28);
    puVar14 = (undefined8 *)
              TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>(local_3580,lVar10 + 0x38,0);
    uStack_3838 = *puVar14;
    uVar13 = puVar14[1];
    uStack_3828 = *(uint *)(puVar14 + 2);
    iStack_3824 = *(int *)((longlong)puVar14 + 0x14);
    uStack_34e8 = puVar14[2];
    local_3820 = *(undefined4 *)(puVar14 + 3);
    uStack_381c = *(undefined4 *)((longlong)puVar14 + 0x1c);
    uStack_34e0 = puVar14[3];
    uStack_34f0._0_4_ = (undefined4)uVar13;
    uStack_34f0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_3830 = (undefined4)uStack_34f0;
    uStack_382c = uStack_34f0._4_4_;
    local_3840 = plVar36;
    local_3500 = plVar36;
    uStack_34f8 = uStack_3838;
    uStack_34f0 = uVar13;
    puVar14 = (undefined8 *)
              TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (local_3560,lVar10 + 0x38,*(undefined4 *)(lVar10 + 0x50));
    uStack_3780 = *puVar14;
    local_3778 = puVar14[1];
    uStack_3770 = puVar14[2];
    local_3768 = puVar14[3];
    local_3788 = plVar36;
    local_3500 = plVar36;
    uStack_34f8 = uStack_3780;
    uStack_34f0 = local_3778;
    uStack_34e8 = uStack_3770;
    uStack_34e0 = local_3768;
    while (((iStack_3824 != (int)((ulonglong)uStack_3770 >> 0x20) ||
            (CONCAT44(uStack_382c,local_3830) != local_3778)) || (local_3840 != local_3788))) {
      lVar37 = (longlong)iStack_3824 * 0x40 + *local_3840;
      uVar13 = FUN_140d5a580(*(undefined8 *)(param_1 + 0x430));
      lVar10 = FUN_140d592b0(uVar13);
      puVar14 = (undefined8 *)FName::ToString(lVar37 + 8,local_36e0);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_c38,puVar22);
      FUN_140d5a920(lVar10,local_bb0);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_c38);
      FUN_140591050(local_36e0);
      *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(lVar37 + 0x10);
      *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(lVar37 + 0x14);
      *(undefined4 *)(lVar10 + 0x28) = *(undefined4 *)(lVar37 + 0x18);
      *(uint *)(lVar10 + 0x2c) = (uint)*(byte *)(lVar37 + 0x1c);
      *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar37 + 0x20);
      local_31a8 = 0;
      local_31a0 = 0xf;
      local_31b8[0] = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                (local_31b8,*(undefined8 *)(lVar37 + 0x28),(longlong)*(int *)(lVar37 + 0x30));
      FUN_140d5ac20(lVar10,local_31b8);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
                (local_31b8);
      uStack_3828 = uStack_3828 & ~uStack_3838._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3838);
    }
  }
  if (*(char *)(param_1 + 0x338) == '\0') {
    FUN_141542910(*(undefined8 *)(param_1 + 0x430));
    lVar10 = *(longlong *)(param_1 + 0x340);
    lVar37 = (longlong)*(int *)(param_1 + 0x348) * 0x38 + lVar10;
    for (; lVar10 != lVar37; lVar10 = lVar10 + 0x38) {
      uVar13 = FUN_140d26d10(*(longlong *)(param_1 + 0x430) + 0x2b0);
      puVar14 = (undefined8 *)FMorSoftSpawnableAssetPtr::ToString(lVar10,local_36d0);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_b98,puVar22);
      FUN_140d5ab30(uVar13,local_b10);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_b98);
      FUN_140591050(local_36d0);
      puVar26 = *(undefined4 **)(lVar10 + 0x28);
      puVar34 = puVar26 + (longlong)*(int *)(lVar10 + 0x30) * 4;
      for (; puVar26 != puVar34; puVar26 = puVar26 + 4) {
        lVar24 = FUN_140d59120(uVar13);
        *(undefined4 *)(lVar24 + 0x10) = *puVar26;
        *(undefined4 *)(lVar24 + 0x14) = puVar26[2];
        *(undefined1 *)(lVar24 + 0x18) = *(undefined1 *)(puVar26 + 1);
        *(undefined1 *)(lVar24 + 0x19) = *(undefined1 *)(puVar26 + 3);
      }
    }
  }
LAB_140d56197:
  plVar36 = (longlong *)(param_1 + 0x3b0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x430) + 0x412) = *(undefined1 *)(param_1 + 0x3a0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x430) + 0x413) = *(undefined1 *)(param_1 + 0x3a1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x430) + 0x42c) = *(undefined1 *)(param_1 + 0x3a2);
  piVar18 = (int *)TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
                   ::FindId(plVar36,local_3a28,*(undefined4 *)(param_1 + 0x3a4));
  if (*piVar18 == -1) {
    TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x3b0,&local_3a78,*(undefined4 *)(param_1 + 0x3a4));
    if (((int)local_3a78 == -1) ||
       (lVar10 = (longlong)(int)local_3a78 * 0x10 + *(longlong *)(param_1 + 0x3b0), lVar10 == 0)) {
      puVar35 = (undefined1 *)FUN_140d1c530(param_1 + 0x3b0,param_1 + 0x3a4);
    }
    else {
      puVar35 = (undefined1 *)(lVar10 + 4);
    }
    *puVar35 = *(undefined1 *)(param_1 + 0x3a8);
  }
  else {
    TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x3b0,&local_3a78,*(undefined4 *)(param_1 + 0x3a4));
    if ((int)local_3a78 == -1) {
      DAT_00000004 = *(undefined1 *)(param_1 + 0x3a8);
    }
    else {
      *(undefined1 *)((longlong)(int)local_3a78 * 0x10 + *(longlong *)(param_1 + 0x3b0) + 4) =
           *(undefined1 *)(param_1 + 0x3a8);
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x424) = *(undefined4 *)(param_1 + 0x3a4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x428) = *(undefined4 *)(param_1 + 0x3a8);
  puVar14 = (undefined8 *)
            TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>(local_3540,param_1 + 0x3c0,0);
  uStack_3810 = *puVar14;
  uVar13 = puVar14[1];
  uStack_3800 = *(uint *)(puVar14 + 2);
  iStack_37fc = *(int *)((longlong)puVar14 + 0x14);
  uStack_34e8 = puVar14[2];
  local_37f8 = *(undefined4 *)(puVar14 + 3);
  uStack_37f4 = *(undefined4 *)((longlong)puVar14 + 0x1c);
  uStack_34e0 = puVar14[3];
  uStack_34f0._0_4_ = (undefined4)uVar13;
  uStack_34f0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_3808 = (undefined4)uStack_34f0;
  uStack_3804 = uStack_34f0._4_4_;
  local_3818 = plVar36;
  local_3500 = plVar36;
  uStack_34f8 = uStack_3810;
  uStack_34f0 = uVar13;
  puVar14 = (undefined8 *)
            TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (local_3520,param_1 + 0x3c0,*(undefined4 *)(param_1 + 0x3d8));
  uStack_37d0 = *puVar14;
  local_37c8 = puVar14[1];
  uStack_37c0 = puVar14[2];
  local_37b8 = puVar14[3];
  local_37d8 = plVar36;
  local_3500 = plVar36;
  uStack_34f8 = uStack_37d0;
  uStack_34f0 = local_37c8;
  uStack_34e8 = uStack_37c0;
  uStack_34e0 = local_37b8;
  while (((iStack_37fc != (int)((ulonglong)uStack_37c0 >> 0x20) ||
          (CONCAT44(uStack_3804,local_3808) != local_37c8)) || (local_3818 != local_37d8))) {
    lVar10 = (longlong)iStack_37fc * 0x10 + *local_3818;
    bVar4 = *(byte *)(lVar10 + 4);
    uVar13 = FUN_140d5a440(*(undefined8 *)(param_1 + 0x430));
    puVar19 = (uint *)FUN_140d25480(uVar13,lVar10);
    *puVar19 = (uint)bVar4;
    uStack_3800 = uStack_3800 & ~uStack_3810._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3810);
  }
  FUN_140d59db0(*(undefined8 *)(param_1 + 0x430));
  if (*(longlong *)(param_1 + 0x478) != 0) {
    lVar10 = FUN_140d5a630(*(undefined8 *)(param_1 + 0x430));
    local_3a20 = lVar10;
    FUN_140d59b80(lVar10);
    puVar26 = (undefined4 *)**(undefined8 **)(param_1 + 0x478);
    puVar34 = puVar26 + (longlong)*(int *)(*(undefined8 **)(param_1 + 0x478) + 1) * 0xc;
    for (; puVar26 != puVar34; puVar26 = puVar26 + 0xc) {
      lVar37 = FUN_140d26a70(lVar10 + 0x10);
      *(undefined4 *)(lVar37 + 0x18) = *puVar26;
      puVar14 = (undefined8 *)FUN_140d3ab90(puVar26,local_36c0);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_af8,puVar22);
      FUN_140d5a920(lVar37,local_a70);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_af8);
      FUN_140591050(local_36c0);
    }
    FUN_1439f1c30(lVar10 + 0x28);
    puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x478) + 0x10);
    puVar16 = puVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x18) * 0x10;
    for (; puVar14 != puVar16; puVar14 = puVar14 + 0x10) {
      FUN_140d59000(lVar10,*puVar14,(longlong)*(int *)(puVar14 + 1));
    }
    FUN_1439f1c30(lVar10 + 0x40);
    puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x478) + 0x20);
    puVar16 = puVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x28) * 0x10;
    for (; puVar14 != puVar16; puVar14 = puVar14 + 0x10) {
      FUN_140d59390(lVar10,*puVar14,(longlong)*(int *)(puVar14 + 1));
    }
    FUN_141542800(lVar10);
    pbVar41 = *(byte **)(*(longlong *)(param_1 + 0x478) + 0x30);
    pbVar30 = pbVar41 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x38) * 0xb8;
    if (pbVar41 != pbVar30) {
      pbVar25 = pbVar41 + 0x70;
      do {
        lVar37 = FUN_140d26c30(lVar10 + 0x58);
        *(uint *)(lVar37 + 0x40) = (uint)*pbVar41;
        puVar14 = (undefined8 *)FText::ToString(pbVar25 + -0x68);
        if (*(int *)(puVar14 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar14;
        }
        lVar24 = TStringConversion<FTCHARToUTF8_Convert,128>::
                 TStringConversion<FTCHARToUTF8_Convert,128>(local_2d8,puVar22);
        FUN_140d5a920(lVar37,*(undefined8 *)(lVar24 + 0x88));
        FUN_140d232f0(local_2d8);
        puVar14 = (undefined8 *)FText::ToString(pbVar25 + -0x50);
        if (*(int *)(puVar14 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar14;
        }
        lVar24 = TStringConversion<FTCHARToUTF8_Convert,128>::
                 TStringConversion<FTCHARToUTF8_Convert,128>(local_238,puVar22);
        FUN_140d5a9d0(lVar37,*(undefined8 *)(lVar24 + 0x88));
        FUN_140d232f0(local_238);
        puVar14 = (undefined8 *)FText::ToString(pbVar25 + -0x38);
        if (*(int *)(puVar14 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar14;
        }
        lVar24 = TStringConversion<FTCHARToUTF8_Convert,128>::
                 TStringConversion<FTCHARToUTF8_Convert,128>(local_198,puVar22);
        FUN_140d5aa80(lVar37,*(undefined8 *)(lVar24 + 0x88));
        FUN_140d232f0(local_198);
        if (*(int *)(pbVar25 + -0x18) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = *(undefined2 **)(pbVar25 + -0x20);
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_a58,puVar22);
        FUN_140d5ad10(lVar37,local_9d0);
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_a58);
        if (*(int *)pbVar25 == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = *(undefined2 **)(pbVar25 + -8);
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_9b8,puVar22);
        FUN_140d5adc0(lVar37,local_930);
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_9b8);
        *(undefined8 *)(lVar37 + 0x48) = *(undefined8 *)(pbVar25 + 8);
        *(undefined8 *)(lVar37 + 0x50) = *(undefined8 *)(pbVar25 + 0x10);
        puVar14 = (undefined8 *)FUN_1425f5be0(pbVar25 + 0x18,local_36a0);
        puVar14 = (undefined8 *)FJsonValue::AsString(*puVar14,local_36b0);
        if (*(int *)(puVar14 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar14;
        }
        lVar24 = TStringConversion<FTCHARToUTF8_Convert,128>::
                 TStringConversion<FTCHARToUTF8_Convert,128>(local_f8,puVar22);
        FUN_140d5ac60(lVar37,*(undefined8 *)(lVar24 + 0x88));
        FUN_140d232f0(local_f8);
        FUN_140591050(local_36b0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_36a0);
        pbVar2 = pbVar25 + 0x40;
        pbVar41 = pbVar41 + 0xb8;
        pbVar25 = pbVar25 + 0xb8;
        *(byte *)(lVar37 + 0x44) = *pbVar2;
      } while (pbVar41 != pbVar30);
    }
    FUN_1439f1c30(lVar10 + 0x100);
    puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x478) + 0x40);
    puVar16 = puVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x48) * 2;
    for (; puVar14 != puVar16; puVar14 = puVar14 + 2) {
      if (*(int *)(puVar14 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_918,puVar22);
      FUN_140d593d0(lVar10,local_890);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_918);
    }
    FUN_1415428b0(lVar10);
    puVar34 = *(undefined4 **)(*(longlong *)(param_1 + 0x478) + 0x50);
    puVar26 = puVar34 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x58) * 6;
    for (; puVar34 != puVar26; puVar34 = puVar34 + 6) {
      lVar37 = FUN_140d26ca0(lVar10 + 0x70);
      *(undefined4 *)(lVar37 + 0x18) = *puVar34;
      if (puVar34[4] == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = *(undefined2 **)(puVar34 + 2);
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_878,puVar22);
      FUN_140d5a920(lVar37,local_7f0);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_878);
    }
    FUN_141542ad0(lVar10);
    puVar35 = *(undefined1 **)(*(longlong *)(param_1 + 0x478) + 0x60);
    puVar29 = puVar35 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x68) * 0x30;
    for (; puVar35 != puVar29; puVar35 = puVar35 + 0x30) {
      lVar37 = FUN_140d26b50(lVar10 + 0x88);
      *(undefined1 *)(lVar37 + 0x18) = *puVar35;
      puVar14 = (undefined8 *)FUN_140d3ab90(puVar35,local_3690);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_7d8,puVar22);
      FUN_140d5a920(lVar37,local_750);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_7d8);
      FUN_140591050(local_3690);
    }
    FUN_141542b40(lVar10);
    lVar37 = *(longlong *)(param_1 + 0x478);
    plVar36 = *(longlong **)(lVar37 + 0x70);
    plVar28 = plVar36 + (longlong)*(int *)(lVar37 + 0x78) * 2;
    if (plVar36 != plVar28) {
      do {
        lVar37 = FUN_140d26bc0(lVar10 + 0xa0);
        if ((longlong *)*plVar36 != (longlong *)0x0) {
          uVar9 = (**(code **)(*(longlong *)*plVar36 + 0x278))();
          *(undefined4 *)(lVar37 + 0x10) = uVar9;
        }
        plVar6 = plVar36 + 1;
        plVar36 = plVar36 + 2;
        *(char *)(lVar37 + 0x14) = (char)*plVar6;
      } while (plVar36 != plVar28);
      lVar37 = *(longlong *)(param_1 + 0x478);
    }
    *(undefined8 *)(lVar10 + 0x138) = *(undefined8 *)(lVar37 + 0x80);
    FUN_1415429f0(lVar10);
    puVar35 = *(undefined1 **)(*(longlong *)(param_1 + 0x478) + 0x88);
    puVar29 = puVar35 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0x90) * 0x30;
    for (; puVar35 != puVar29; puVar35 = puVar35 + 0x30) {
      lVar37 = FUN_140d26990(lVar10 + 0xb8);
      *(undefined1 *)(lVar37 + 0x18) = *puVar35;
      puVar14 = (undefined8 *)FUN_140d3ab90(puVar35,local_3680);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_738,puVar22);
      FUN_140d5a920(lVar37,local_6b0);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_738);
      FUN_140591050(local_3680);
    }
    FUN_141542a60(lVar10);
    puVar29 = *(undefined1 **)(*(longlong *)(param_1 + 0x478) + 0x98);
    puVar35 = puVar29 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0xa0) * 0x18;
    for (; puVar29 != puVar35; puVar29 = puVar29 + 0x18) {
      lVar37 = FUN_140d26a00(lVar10 + 0xd0);
      *(undefined1 *)(lVar37 + 0x18) = *puVar29;
      puVar14 = (undefined8 *)FLocMetadataValueString::AsString(puVar29,local_3670);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar14;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_698,puVar22);
      FUN_140d5a920(lVar37,local_610);
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_698);
      FUN_140591050(local_3670);
    }
    FUN_1415426d0(lVar10);
    puVar14 = *(undefined8 **)(*(longlong *)(param_1 + 0x478) + 0xa8);
    puVar16 = puVar14 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0xb0) * 0xc;
    local_3a78 = puVar14;
    local_3a68 = puVar16;
    if (puVar14 != puVar16) {
      local_3a60 = (byte *)(lVar10 + 0xe8);
      piVar18 = (int *)(puVar14 + 5);
      do {
        local_3a78 = puVar14;
        lVar10 = FUN_140d26920(local_3a60);
        *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)puVar14;
        *(char *)(lVar10 + 0x4c) = (char)piVar18[-9];
        *(undefined1 *)(lVar10 + 0x4d) = *(undefined1 *)((longlong)piVar18 + -0x23);
        *(int *)(lVar10 + 0x50) = piVar18[-8];
        *(int *)(lVar10 + 0x54) = piVar18[-7];
        puVar26 = *(undefined4 **)(piVar18 + -6);
        puVar34 = puVar26 + (longlong)piVar18[-4] * 0xc;
        for (; puVar26 != puVar34; puVar26 = puVar26 + 0xc) {
          lVar37 = FUN_140d596f0(lVar10);
          *(undefined4 *)(lVar37 + 0x18) = *puVar26;
          puVar20 = (undefined8 *)FUN_140d3ab90(puVar26,local_3660);
          if (*(int *)(puVar20 + 1) == 0) {
            puVar22 = &DAT_143f3eda8;
          }
          else {
            puVar22 = (undefined2 *)*puVar20;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_5f8,puVar22);
          FUN_140d5a920(lVar37,local_570);
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_5f8);
          FUN_140591050(local_3660);
        }
        puVar14 = (undefined8 *)FUN_140d3ab70(puVar14,local_3650);
        if (*(int *)(puVar14 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar14;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_558,puVar22);
        FUN_140d5ab30(lVar10,local_4d0);
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        ~TStringConversion<TStringConvert<wchar_t,char>,128>(local_558);
        FUN_140591050();
        puVar35 = *(undefined1 **)(piVar18 + -2);
        lVar24 = 0;
        lVar37 = (longlong)*piVar18;
        if (puVar35 + *piVar18 < puVar35) {
          lVar37 = lVar24;
        }
        if (lVar37 != 0) {
          do {
            uVar3 = *puVar35;
            lVar12 = FUN_140d59040(lVar10);
            lVar24 = lVar24 + 1;
            puVar35 = puVar35 + 1;
            *(undefined1 *)(lVar12 + 0x10) = uVar3;
          } while (lVar24 != lVar37);
        }
        piVar18 = piVar18 + 0x18;
        puVar14 = local_3a78 + 0xc;
        lVar10 = local_3a20;
        param_1 = local_3a70;
        local_3a78 = puVar14;
      } while (puVar14 != puVar16);
    }
    icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(lVar10 + 0x118);
    lVar37 = *(longlong *)(param_1 + 0x478);
    uVar11 = 0;
    puVar26 = *(undefined4 **)(lVar37 + 0xb8);
    uVar23 = (longlong)*(int *)(lVar37 + 0xc0) & 0x3fffffffffffffff;
    if (puVar26 + *(int *)(lVar37 + 0xc0) < puVar26) {
      uVar23 = uVar11;
    }
    uVar32 = uVar11;
    if (uVar23 != 0) {
      do {
        local_3a30[0] = *puVar26;
        FUN_1439f19c0(lVar10 + 0x118,local_3a30);
        uVar32 = uVar32 + 1;
        puVar26 = puVar26 + 1;
      } while (uVar32 != uVar23);
      lVar37 = *(longlong *)(param_1 + 0x478);
    }
    *(undefined4 *)(lVar10 + 0x140) = *(undefined4 *)(lVar37 + 200);
    *(undefined1 *)(lVar10 + 0x144) = *(undefined1 *)(*(longlong *)(param_1 + 0x478) + 0xcc);
    *(undefined1 *)(lVar10 + 0x145) = *(undefined1 *)(*(longlong *)(param_1 + 0x478) + 0xcd);
    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x478) + 0xd0);
    lVar37 = FUN_140d5a710(lVar10);
    *(undefined4 *)(lVar37 + 0x40) = uVar9;
    uVar13 = FUN_140d5a710(lVar10);
    FUN_140d59f30(uVar13);
    puVar26 = *(undefined4 **)(*(longlong *)(param_1 + 0x478) + 0xe0);
    puVar34 = puVar26 + (longlong)*(int *)(*(longlong *)(param_1 + 0x478) + 0xe8) * 0x16;
    for (; puVar26 != puVar34; puVar26 = puVar26 + 0x16) {
      uVar13 = FUN_140d5a710(lVar10);
      lVar37 = FUN_140d597d0(uVar13);
      *(undefined4 *)(lVar37 + 0x60) = *puVar26;
      *(undefined8 *)(lVar37 + 0x58) = *(undefined8 *)(puVar26 + 2);
      *(undefined4 *)(lVar37 + 100) = puVar26[5];
      *(undefined4 *)(lVar37 + 0x68) = puVar26[6];
      *(undefined4 *)(lVar37 + 0x6c) = puVar26[7];
      puVar14 = (undefined8 *)IMessageToken::ToText(puVar26);
      puVar27 = (undefined4 *)*puVar14;
      puVar40 = puVar27 + (longlong)*(int *)(puVar14 + 1) * 2;
      for (; puVar27 != puVar40; puVar27 = puVar27 + 2) {
        lVar24 = FUN_140d26d80(lVar37 + 0x10);
        *(undefined4 *)(lVar24 + 0x10) = *puVar27;
        *(undefined4 *)(lVar24 + 0x14) = puVar27[1];
      }
      puVar14 = (undefined8 *)UListView::OnItemSelectionChanged(puVar26);
      puVar27 = (undefined4 *)*puVar14;
      puVar40 = puVar27 + (longlong)*(int *)(puVar14 + 1) * 2;
      for (; puVar27 != puVar40; puVar27 = puVar27 + 2) {
        lVar24 = FUN_140d26d80(lVar37 + 0x28);
        *(undefined4 *)(lVar24 + 0x10) = *puVar27;
        *(undefined4 *)(lVar24 + 0x14) = puVar27[1];
      }
      puVar14 = (undefined8 *)FUN_1404b0b80(puVar26);
      puVar27 = (undefined4 *)*puVar14;
      puVar40 = puVar27 + (longlong)*(int *)(puVar14 + 1) * 2;
      for (; puVar27 != puVar40; puVar27 = puVar27 + 2) {
        lVar24 = FUN_140d59200(lVar37);
        *(undefined4 *)(lVar24 + 0x10) = *puVar27;
        *(undefined4 *)(lVar24 + 0x14) = puVar27[1];
      }
    }
    uVar13 = FUN_140d5a710(lVar10);
    FUN_140d59f90(uVar13);
    param_1 = local_3a70;
    uVar23 = uVar11;
    if (0 < *(int *)(*(longlong *)(local_3a70 + 0x478) + 0xf8)) {
      do {
        uVar13 = FUN_140d5a710(lVar10);
        lVar37 = FUN_140d59840(uVar13);
        uVar31 = (int)uVar23 + 1;
        *(undefined4 *)(lVar37 + 0x10) =
             *(undefined4 *)(uVar11 + *(longlong *)(*(longlong *)(param_1 + 0x478) + 0xf0));
        *(undefined4 *)(lVar37 + 0x14) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x478) + 0xf0) + -4 + uVar11 + 8)
        ;
        uVar11 = uVar11 + 8;
        uVar23 = (ulonglong)uVar31;
      } while ((int)uVar31 < *(int *)(*(longlong *)(param_1 + 0x478) + 0xf8));
    }
  }
  local_3a58 = 0;
  local_3a50 = 0;
  uVar13 = FUN_141520410(*(undefined8 *)(param_1 + 0x430));
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(&local_3a58,uVar13);
  FUN_1439f0f80(*(undefined8 *)(param_1 + 0x430),local_3a58,local_3a50 & 0xffffffff);
  if (DAT_14686e300 == '\0') {
    FUN_140d3f560(&local_3a58,&DAT_1444ff7b8,&DAT_1444ff7e8);
  }
  FUN_140d25120(local_3a18,&local_3a58);
  FUN_140591050(&local_3a58);
  return;
}



// FUNCTION 140d56f60 FUN_140d56f60 body=608 status=ok
// SIG undefined FUN_140d56f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d56f60(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  byte *local_98 [3];
  ulonglong local_80;
  ulonglong local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar3 = *(longlong **)(param_2 + param_3 * 8);
  plVar11 = *(longlong **)plVar3[1];
  do {
    pbVar4 = (byte *)plVar11[4];
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar12 = *(longlong *)(param_1 + 0x10) +
             (((((ulonglong)*pbVar4 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)pbVar4[1]) *
               0x100000001b3 ^ (ulonglong)pbVar4[2]) * 0x100000001b3 ^ (ulonglong)pbVar4[3]) *
             0x100000001b3 & *(longlong *)(param_1 + 8) - 1U;
    lVar1 = uVar12 * 8;
    lVar10 = *(longlong *)(lVar5 + lVar1);
    if (lVar10 == 0) {
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
      *(byte **)(lVar1 + *(longlong *)(param_1 + 0x20)) = pbVar4;
LAB_140d5707e:
      uVar9 = *(ulonglong *)(param_1 + 0x18);
      if (uVar12 < *(ulonglong *)(param_1 + 0x18)) {
        uVar9 = uVar12;
      }
      *(ulonglong *)(param_1 + 0x18) = uVar9;
      local_80 = uVar12;
      local_68 = uVar12;
    }
    else if (lVar10 == *(longlong *)(lVar5 + (uVar12 ^ 1) * 8)) {
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
      local_98[0] = pbVar4;
      FUN_140d1e6d0(*(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x20)),local_50,local_98);
    }
    else {
      lVar1 = uVar12 * 8;
      uVar9 = 0;
      do {
        lVar10 = *(longlong *)(lVar10 + 0x10);
        uVar9 = uVar9 + 1;
      } while (lVar10 != 0);
      if (7 < uVar9) {
        FUN_140d57400(param_1,uVar12);
        pbVar4[0x10] = 0;
        pbVar4[0x11] = 0;
        pbVar4[0x12] = 0;
        pbVar4[0x13] = 0;
        pbVar4[0x14] = 0;
        pbVar4[0x15] = 0;
        pbVar4[0x16] = 0;
        pbVar4[0x17] = 0;
        local_98[0] = pbVar4;
        FUN_140d1e6d0(*(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x20)),local_60,local_98);
        uVar12 = uVar12 & 0xfffffffffffffffe;
        goto LAB_140d5707e;
      }
      *(undefined8 *)(pbVar4 + 0x10) = *(undefined8 *)(lVar1 + lVar5);
      *(byte **)(lVar1 + *(longlong *)(param_1 + 0x20)) = pbVar4;
    }
    plVar6 = (longlong *)plVar11[2];
    plVar7 = (longlong *)plVar3[1];
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar6 + 0x19);
      plVar11 = plVar6;
      plVar6 = (longlong *)*plVar6;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar6 + 0x19);
        plVar11 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
    }
    else {
      cVar2 = *(char *)(plVar11[1] + 0x19);
      plVar8 = (longlong *)plVar11[1];
      plVar6 = plVar11;
      while ((plVar11 = plVar8, cVar2 == '\0' && (plVar6 == (longlong *)plVar11[2]))) {
        cVar2 = *(char *)(plVar11[1] + 0x19);
        plVar8 = (longlong *)plVar11[1];
        plVar6 = plVar11;
      }
    }
    if (plVar11 == plVar7) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      FUN_140d5a080(plVar3,local_98,*plVar7,plVar7);
      if (*plVar3 == 0) {
        FMemory::operator_delete(plVar3[1],0x28);
      }
      if (lVar1 == 0) {
        FMemory::operator_delete(plVar3,0x18);
      }
      return;
    }
  } while( true );
}



// FUNCTION 140d571c0 FUN_140d571c0 body=572 status=ok
// SIG undefined FUN_140d571c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d571c0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98 [3];
  ulonglong local_80;
  ulonglong local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar3 = *(longlong **)(param_2 + param_3 * 8);
  plVar11 = *(longlong **)plVar3[1];
  do {
    plVar4 = (longlong *)plVar11[4];
    plVar10 = plVar4;
    if (0xf < (ulonglong)plVar4[3]) {
      plVar10 = (longlong *)*plVar4;
    }
    cVar2 = (char)*plVar10;
    uVar8 = 0;
    while (cVar2 != '\0') {
      uVar8 = uVar8 * 5 + (longlong)cVar2;
      plVar10 = (longlong *)((longlong)plVar10 + 1);
      cVar2 = *(char *)plVar10;
    }
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar8 = *(longlong *)(param_1 + 0x10) + uVar8 & *(longlong *)(param_1 + 8) - 1U;
    lVar1 = uVar8 * 8;
    lVar9 = *(longlong *)(lVar5 + lVar1);
    if (lVar9 == 0) {
      plVar4[5] = 0;
      *(longlong **)(lVar1 + *(longlong *)(param_1 + 0x20)) = plVar4;
LAB_140d572d0:
      uVar7 = *(ulonglong *)(param_1 + 0x18);
      if (uVar8 < *(ulonglong *)(param_1 + 0x18)) {
        uVar7 = uVar8;
      }
      *(ulonglong *)(param_1 + 0x18) = uVar7;
      local_80 = uVar8;
      local_68 = uVar8;
    }
    else if (lVar9 == *(longlong *)(lVar5 + (uVar8 ^ 1) * 8)) {
      plVar4[5] = 0;
      local_98[0] = plVar4;
      FUN_140d1e830(*(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x20)),local_50,local_98);
    }
    else {
      lVar1 = uVar8 * 8;
      uVar7 = 0;
      do {
        lVar9 = *(longlong *)(lVar9 + 0x28);
        uVar7 = uVar7 + 1;
      } while (lVar9 != 0);
      if (7 < uVar7) {
        FUN_140d575e0(param_1,uVar8);
        plVar4[5] = 0;
        local_98[0] = plVar4;
        FUN_140d1e830(*(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x20)),local_60,local_98);
        uVar8 = uVar8 & 0xfffffffffffffffe;
        goto LAB_140d572d0;
      }
      plVar4[5] = *(longlong *)(lVar1 + lVar5);
      *(longlong **)(lVar1 + *(longlong *)(param_1 + 0x20)) = plVar4;
    }
    plVar10 = (longlong *)plVar11[2];
    plVar4 = (longlong *)plVar3[1];
    if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar10 + 0x19);
      plVar11 = plVar10;
      plVar10 = (longlong *)*plVar10;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar10 + 0x19);
        plVar11 = plVar10;
        plVar10 = (longlong *)*plVar10;
      }
    }
    else {
      cVar2 = *(char *)(plVar11[1] + 0x19);
      plVar6 = (longlong *)plVar11[1];
      plVar10 = plVar11;
      while ((plVar11 = plVar6, cVar2 == '\0' && (plVar10 == (longlong *)plVar11[2]))) {
        cVar2 = *(char *)(plVar11[1] + 0x19);
        plVar6 = (longlong *)plVar11[1];
        plVar10 = plVar11;
      }
    }
    if (plVar11 == plVar4) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      FUN_140d5a080(plVar3,local_98,*plVar4,plVar4);
      if (*plVar3 == 0) {
        FMemory::operator_delete(plVar3[1],0x28);
      }
      if (lVar1 == 0) {
        FMemory::operator_delete(plVar3,0x18);
      }
      return;
    }
  } while( true );
}



// FUNCTION 140d57400 FUN_140d57400 body=466 status=ok
// SIG undefined FUN_140d57400(void)

void FUN_140d57400(longlong param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_48;
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  undefined1 local_28 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    plVar7 = (longlong *)operator_new(0x18);
  }
  else {
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      FUN_1439f01b0(lVar2,0,0x18);
    }
    plVar7 = (longlong *)FUN_1439efd10(lVar2,0x18);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_30 = 0;
  local_40 = lVar2;
  if (lVar2 == 0) {
    local_38 = (undefined8 *)operator_new(0x28);
  }
  else {
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      FUN_1439f01b0(lVar2,0,0x28);
    }
    local_38 = (undefined8 *)FUN_1439efd10(lVar2,0x28);
  }
  *local_38 = local_38;
  local_38[1] = local_38;
  local_38[2] = local_38;
  *(undefined2 *)(local_38 + 3) = 0x101;
  *plVar7 = local_40;
  plVar7[1] = 0;
  plVar7[2] = 0;
  FUN_140d58e70(plVar7);
  lVar2 = plVar7[1];
  uVar8 = FUN_140d1e1a0(plVar7,local_38[1],lVar2,local_48);
  *(undefined8 *)(lVar2 + 8) = uVar8;
  plVar3 = (longlong *)plVar7[1];
  plVar7[2] = local_30;
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar6 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar4 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
    *plVar3 = (longlong)plVar4;
    lVar2 = *(longlong *)(plVar7[1] + 8);
    lVar5 = *(longlong *)(lVar2 + 0x10);
    cVar1 = *(char *)(lVar5 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 0x10);
    }
    *(longlong *)(plVar7[1] + 0x10) = lVar2;
  }
  else {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(plVar7[1] + 0x10) = plVar7[1];
  }
  FUN_140d5a080(&local_40,local_28,*local_38,local_38);
  if (local_40 == 0) {
    FMemory::operator_delete(local_38,0x28);
  }
  FUN_140d29f90(param_1,param_2 ^ 1,plVar7);
  FUN_140d29f90(param_1,param_2,plVar7);
  *(longlong **)(*(longlong *)(param_1 + 0x20) + (param_2 ^ 1) * 8) = plVar7;
  *(longlong **)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = plVar7;
  return;
}



// FUNCTION 140d575e0 FUN_140d575e0 body=466 status=ok
// SIG undefined FUN_140d575e0(void)

void FUN_140d575e0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_48;
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  undefined1 local_28 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    plVar7 = (longlong *)operator_new(0x18);
  }
  else {
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      FUN_1439f01b0(lVar2,0,0x18);
    }
    plVar7 = (longlong *)FUN_1439efd10(lVar2,0x18);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_30 = 0;
  local_40 = lVar2;
  if (lVar2 == 0) {
    local_38 = (undefined8 *)operator_new(0x28);
  }
  else {
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      FUN_1439f01b0(lVar2,0,0x28);
    }
    local_38 = (undefined8 *)FUN_1439efd10(lVar2,0x28);
  }
  *local_38 = local_38;
  local_38[1] = local_38;
  local_38[2] = local_38;
  *(undefined2 *)(local_38 + 3) = 0x101;
  *plVar7 = local_40;
  plVar7[1] = 0;
  plVar7[2] = 0;
  FUN_140d58e70(plVar7);
  lVar2 = plVar7[1];
  uVar8 = FUN_140d1e1a0(plVar7,local_38[1],lVar2,local_48);
  *(undefined8 *)(lVar2 + 8) = uVar8;
  plVar3 = (longlong *)plVar7[1];
  plVar7[2] = local_30;
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar6 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar4 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
    *plVar3 = (longlong)plVar4;
    lVar2 = *(longlong *)(plVar7[1] + 8);
    lVar5 = *(longlong *)(lVar2 + 0x10);
    cVar1 = *(char *)(lVar5 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 0x10);
    }
    *(longlong *)(plVar7[1] + 0x10) = lVar2;
  }
  else {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(plVar7[1] + 0x10) = plVar7[1];
  }
  FUN_140d5a080(&local_40,local_28,*local_38,local_38);
  if (local_40 == 0) {
    FMemory::operator_delete(local_38,0x28);
  }
  FUN_140d2a0c0(param_1,param_2 ^ 1,plVar7);
  FUN_140d2a0c0(param_1,param_2,plVar7);
  *(longlong **)(*(longlong *)(param_1 + 0x20) + (param_2 ^ 1) * 8) = plVar7;
  *(longlong **)(*(longlong *)(param_1 + 0x20) + param_2 * 8) = plVar7;
  return;
}



// FUNCTION 140d577f0 FUN_140d577f0 body=255 status=ok
// SIG undefined FUN_140d577f0(void)

void FUN_140d577f0(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_28;
  longlong *local_20;
  
  local_28 = *param_2;
  local_20 = (longlong *)param_2[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  bVar5 = false;
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  iVar8 = *(int *)(param_1 + 0x19c);
  iVar7 = *(int *)(param_1 + 400) + -1;
  lVar10 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar9 = lVar10 << 4;
    bVar5 = false;
    do {
      lVar3 = *(longlong *)(param_1 + 0x188);
      if ((*(int *)(lVar9 + 8 + lVar3) == 0) ||
         (plVar4 = *(longlong **)(lVar9 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_140d57879:
        bVar5 = true;
      }
      else {
        cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_28,param_3,param_4);
        if (cVar6 == '\0') goto LAB_140d57879;
      }
      lVar9 = lVar9 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
    iVar8 = *(int *)(param_1 + 0x19c);
  }
  *(int *)(param_1 + 0x19c) = iVar8 + -1;
  if (bVar5) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x188),0);
  }
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 140d578f0 FUN_140d578f0 body=197 status=ok
// SIG undefined FUN_140d578f0(void)

void FUN_140d578f0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x16c);
  iVar5 = *(int *)(param_1 + 0x160) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x158);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140d57967:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_140d57967;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x16c);
  }
  *(int *)(param_1 + 0x16c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x158),0);
    return;
  }
  return;
}



// FUNCTION 140d579c0 FUN_140d579c0 body=188 status=ok
// SIG undefined FUN_140d579c0(void)

void FUN_140d579c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x184);
  iVar5 = *(int *)(param_1 + 0x178) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x170);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140d57a33:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140d57a33;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x184);
  }
  *(int *)(param_1 + 0x184) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x170),0);
    return;
  }
  return;
}



// FUNCTION 140d57a80 FUN_140d57a80 body=231 status=ok
// SIG undefined FUN_140d57a80(void)

void FUN_140d57a80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x124);
  iVar5 = *(int *)(param_1 + 0x118) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x110);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140d57b0f:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5,param_6);
        if (cVar4 == '\0') goto LAB_140d57b0f;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x124);
  }
  *(int *)(param_1 + 0x124) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x110),0);
    return;
  }
  return;
}



// FUNCTION 140d57b80 FUN_140d57b80 body=164 status=ok
// SIG undefined FUN_140d57b80(void)

void FUN_140d57b80(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xac);
  iVar5 = *(int *)(param_1 + 0xa0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x98);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140d57be0:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_140d57be0;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xac);
  }
  *(int *)(param_1 + 0xac) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x98),0);
    return;
  }
  return;
}



// FUNCTION 140d57c40 TriggerOnLoginFlowLogoutDelegates body=164 status=ok
// SIG undefined TriggerOnLoginFlowLogoutDelegates(void)

void IOnlineIdentity::TriggerOnLoginFlowLogoutDelegates(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x94);
  iVar5 = *(int *)(param_1 + 0x88) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140d57ca0:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_140d57ca0;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x94);
  }
  *(int *)(param_1 + 0x94) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x80),0);
    return;
  }
  return;
}



// FUNCTION 140d57cf0 FUN_140d57cf0 body=164 status=ok
// SIG undefined FUN_140d57cf0(void)

void FUN_140d57cf0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x1b4);
  iVar5 = *(int *)(param_1 + 0x1a8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1a0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140d57d50:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_140d57d50;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1b4);
  }
  *(int *)(param_1 + 0x1b4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1a0),0);
    return;
  }
  return;
}



// FUNCTION 140d57db0 FUN_140d57db0 body=26 status=ok
// SIG undefined FUN_140d57db0(void)

void FUN_140d57db0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x224) = param_3;
  *(int *)(param_1 + 0x220) = param_2 + 1;
  *(undefined4 *)(param_1 + 0x228) = param_4;
  return;
}



// FUNCTION 140d57dd0 FUN_140d57dd0 body=253 status=ok
// SIG undefined FUN_140d57dd0(void)

void FUN_140d57dd0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x15c);
  uVar1 = *(undefined4 *)(param_1 + 0xec);
  uVar2 = *(undefined4 *)(param_1 + 0xf0);
  uVar3 = *(undefined4 *)(param_1 + 0xf4);
  uVar4 = *(undefined4 *)(param_1 + 0xf8);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
  }
  else {
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 0xbc) = uVar3;
      *(undefined4 *)(param_1 + 0xc0) = uVar3;
      *(undefined4 *)(param_1 + 0xc4) = uVar1;
      *(undefined4 *)(param_1 + 0xcc) = uVar1;
      *(undefined4 *)(param_1 + 200) = uVar2;
      *(undefined4 *)(param_1 + 0xd0) = uVar2;
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
    if (iVar5 == 2) {
      *(undefined4 *)(param_1 + 0xbc) = uVar3;
      *(undefined4 *)(param_1 + 0xc0) = uVar1;
      *(undefined4 *)(param_1 + 0xc4) = uVar1;
      *(undefined4 *)(param_1 + 0xcc) = uVar3;
      *(undefined4 *)(param_1 + 200) = uVar2;
      *(undefined4 *)(param_1 + 0xd0) = uVar4;
      *(undefined1 *)(param_1 + 0x28) = 1;
      return;
    }
    if (iVar5 != 3) {
      return;
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar3;
    *(undefined4 *)(param_1 + 0xcc) = uVar1;
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
  }
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 140d57ed0 FUN_140d57ed0 body=321 status=ok
// SIG undefined FUN_140d57ed0(void)

void FUN_140d57ed0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    uVar4 = DAT_1468b5da8;
  }
  else {
    local_18 = *(float *)(lVar1 + 0x210);
    fStack_14 = *(float *)(lVar1 + 0x214);
    fStack_10 = *(float *)(lVar1 + 0x218);
    fStack_c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
    iVar3 = movmskps(in_EAX,auVar2);
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_30);
      *(undefined8 *)(lVar1 + 0x260) = *puVar5;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x268);
  }
  uVar8 = CONCAT44(uVar7,uVar6);
  local_4c = uVar8;
  local_44 = uVar4;
  FRotator::Vector(&local_4c,local_40);
  FLinearColor::FLinearColor(&local_18,local_40);
  FUN_142538d70(param_1,*(undefined8 *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x4c8),&local_18,
                uVar8,uVar4);
  FUN_142537e80(param_1,*(undefined8 *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x4c0),
                *(undefined4 *)(param_1 + 0x494));
  FUN_142537e80(param_1,*(undefined8 *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x4d0),
                *(undefined4 *)(param_1 + 0x498));
  FUN_142537e80(param_1,*(undefined8 *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x4d8),
                *(undefined4 *)(param_1 + 0x49c));
  return;
}



// FUNCTION 140d58020 FUN_140d58020 body=2039 status=ok
// SIG undefined FUN_140d58020(void)

void FUN_140d58020(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  longlong *local_res20;
  longlong *local_158;
  longlong *local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  char local_128;
  undefined1 local_127;
  undefined1 local_126;
  void *local_120;
  int local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined1 local_108 [24];
  longlong local_f0;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined1 local_b4;
  longlong local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  if (param_3 == 0) {
    return;
  }
  *(undefined4 *)(param_2 + 0x10) = 3;
  FString::operator=(param_2 + 0x18,param_3 + 0x408);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0xa0);
  lVar11 = FUN_140d3b710(param_3);
  uVar23 = 0;
  if (lVar11 == 0) {
    local_140 = 0;
    uVar12 = uVar23;
  }
  else {
    lVar11 = FUN_140d3b710(param_3);
    uVar12 = *(ulonglong *)(lVar11 + 0x88);
  }
  *(ulonglong *)(param_2 + 0x30) = uVar12;
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x30);
  dVar5 = (double)*(uint *)(param_3 + 0x38) * 10000000.0 + 0.5;
  lVar11 = (longlong)dVar5;
  uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (0.0 <= dVar5) {
    if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar5)) {
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = dVar5;
      auVar4._12_4_ = uVar26;
      uVar10 = movmskpd(0,auVar4);
      uVar12 = -(ulonglong)(uVar10 & 1);
      goto LAB_140d5812c;
    }
  }
  else if ((lVar11 != -0x8000000000000000) && ((double)lVar11 != dVar5)) {
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar5;
    auVar3._12_4_ = uVar26;
    uVar10 = movmskpd(0,auVar3);
    uVar12 = (ulonglong)(uVar10 & 1 ^ 1);
LAB_140d5812c:
    dVar5 = (double)(longlong)(lVar11 + uVar12);
  }
  *(longlong *)(param_2 + 0x40) = (longlong)dVar5;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 0x140);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_3 + 0x144);
  uVar13 = FUN_1404b03b0();
  FText::operator=(param_2 + 0x50,uVar13);
  uVar26 = *(undefined4 *)(param_3 + 0x420);
  uVar6 = *(undefined4 *)(param_3 + 0x424);
  uVar7 = *(undefined4 *)(param_3 + 0x428);
  *(undefined4 *)(param_2 + 400) = *(undefined4 *)(param_3 + 0x41c);
  *(undefined4 *)(param_2 + 0x194) = uVar26;
  *(undefined4 *)(param_2 + 0x198) = uVar6;
  *(undefined4 *)(param_2 + 0x19c) = uVar7;
  iVar24 = *(int *)(param_3 + 0x140);
  if ((iVar24 < 0) || (*(int *)(param_3 + 0x158) <= iVar24)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) goto LAB_140d5875c;
  puVar22 = (undefined8 *)((longlong)iVar24 * 0x38 + *(longlong *)(param_3 + 0x150));
  local_res20 = (longlong *)FUN_140c498b0(puVar22 + 2);
  iVar24 = 0;
  plVar21 = (longlong *)*puVar22;
  local_150 = (longlong *)0x0;
  plVar20 = plVar21 + (longlong)*(int *)(puVar22 + 1) * 0xf;
  local_148 = 0;
  local_158 = plVar20;
  if (plVar21 != plVar20) {
    local_138 = 0;
    uVar12 = uVar23;
    plVar21 = plVar21 + 2;
LAB_140d58200:
    local_128 = (char)plVar21[-2];
    local_118 = (int)*plVar21;
    lVar11 = (longlong)local_118;
    local_127 = *(undefined1 *)((longlong)plVar21 + -0xf);
    local_126 = *(undefined1 *)((longlong)plVar21 + -0xe);
    local_120 = (void *)0x0;
    _Src = (void *)plVar21[-1];
    if (local_118 == 0) {
      local_114 = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_120,local_118,0);
      _guard_xfg_dispatch_icall_nop(local_120,_Src,lVar11 << 2);
    }
    local_110 = (undefined1)plVar21[1];
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_108,plVar21 + 2);
    local_e0 = (int)plVar21[7];
    local_dc = *(int *)((longlong)plVar21 + 0x3c);
    local_d8 = (int)plVar21[8];
    local_a8 = plVar21[9];
    local_c8 = 0;
    local_c0 = 0;
    local_d0 = 0;
    FString::FString(local_a0,plVar21 + 10);
    FSoftObjectPath::operator=(&local_d0,&local_a8);
    local_b8 = (int)plVar21[0xc];
    local_b4 = *(undefined1 *)((longlong)plVar21 + 100);
    plVar14 = (longlong *)FUN_140c498b0(local_108);
    if (plVar14 != (longlong *)0x0) {
      plVar15 = (longlong *)FUN_142f71d80();
      plVar17 = plVar14;
      do {
        if (plVar17 == plVar15) {
          plVar15 = (longlong *)FUN_142f71d80();
          plVar17 = plVar14;
          goto LAB_140d58300;
        }
        plVar17 = (longlong *)plVar17[6];
      } while (plVar17 != (longlong *)0x0);
    }
    goto LAB_140d58445;
  }
LAB_140d58488:
  plVar21 = local_150;
  iVar25 = 0;
  iVar2 = *(int *)(param_1 + 0x348);
  if (0 < iVar2) {
    if (iVar24 == iVar2) {
      uVar13 = FUN_142f5bb60(*(longlong *)(param_1 + 0x340) + (longlong)(iVar2 + -1) * 8);
      uVar13 = FUN_142dea370(uVar13,local_90);
      FText::operator=(param_2 + 0x68,uVar13);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar21 = local_88 + 1;
        lVar11 = *plVar21;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar24 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar24 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
    }
    else if (0 < iVar2) {
      plVar20 = local_150 + iVar24;
      lVar11 = 0;
LAB_140d58540:
      local_158 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0x340));
      plVar14 = plVar21;
      if (plVar21 != plVar20) {
        do {
          if (*plVar14 != 0) {
            plVar19 = (longlong *)FUN_142f71d80();
            plVar17 = (longlong *)*plVar14;
            for (plVar15 = plVar17; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[6]) {
              if (plVar15 == plVar19) goto LAB_140d58582;
            }
          }
          plVar17 = (longlong *)0x0;
LAB_140d58582:
          if (local_158 != (longlong *)0x0) {
            plVar19 = (longlong *)FUN_142f71d80();
            for (plVar15 = local_158; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[6])
            {
              plVar16 = local_158;
              if (plVar15 == plVar19) goto LAB_140d585b4;
            }
          }
          plVar16 = (longlong *)0x0;
LAB_140d585b4:
          if (plVar17 == plVar16) goto LAB_140d58660;
          plVar14 = plVar14 + 1;
          if (plVar14 == plVar20) break;
        } while( true );
      }
      goto LAB_140d585c6;
    }
  }
  goto LAB_140d586ae;
  while (plVar17 = (longlong *)plVar17[6], plVar19 = (longlong *)0x0, plVar17 != (longlong *)0x0) {
LAB_140d58300:
    plVar19 = plVar14;
    if (plVar17 == plVar15) break;
  }
  if (local_res20 != (longlong *)0x0) {
    plVar15 = (longlong *)FUN_142f71d80();
    for (plVar17 = local_res20; plVar17 != (longlong *)0x0; plVar17 = (longlong *)plVar17[6]) {
      plVar16 = local_res20;
      if (plVar17 == plVar15) goto LAB_140d58340;
    }
  }
  plVar16 = (longlong *)0x0;
LAB_140d58340:
  if ((plVar19 == plVar16) && ((local_128 - 1U & 0xfd) != 0)) {
    local_res20 = (longlong *)0x0;
  }
  if (local_128 != '\x02') goto LAB_140d58445;
  plVar17 = (longlong *)FUN_142f71d80();
  plVar20 = plVar14;
  do {
    plVar15 = plVar14;
    if (plVar20 == plVar17) break;
    plVar20 = (longlong *)plVar20[6];
    plVar15 = (longlong *)0x0;
  } while (plVar20 != (longlong *)0x0);
  lVar11 = plVar15[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar15 + 0x368))(plVar15);
    lVar11 = plVar15[0x1f];
    if (lVar11 != 0) goto LAB_140d583be;
LAB_140d583f4:
    lVar11 = 0;
  }
  else {
LAB_140d583be:
    lVar18 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar18 + 0x90) * 8
         ) != lVar18 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_140d583f4;
  }
  plVar20 = local_158;
  if ((*(char *)(lVar11 + 0x177) != '\0') &&
     (lVar11 = FUN_142f5a280(lVar11), plVar20 = local_158, lVar11 == 0)) {
    iVar24 = (int)uVar23;
    uVar10 = iVar24 + 1;
    local_148 = CONCAT44(local_148._4_4_,uVar10);
    if ((int)uVar12 < (int)uVar10) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_150,uVar23);
      uVar12 = local_148 >> 0x20;
      uVar10 = (uint)local_148;
    }
    uVar23 = (ulonglong)uVar10;
    local_150[iVar24] = (longlong)plVar14;
    plVar20 = local_158;
  }
LAB_140d58445:
  iVar24 = (int)uVar23;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    FMemory::Free();
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free();
  }
  plVar14 = plVar21 + 0xd;
  plVar21 = plVar21 + 0xf;
  if (plVar14 == plVar20) goto LAB_140d58488;
  goto LAB_140d58200;
LAB_140d58660:
  if ((int)((longlong)plVar14 - (longlong)plVar21 >> 3) == -1) {
LAB_140d585c6:
    uVar13 = FUN_142f5bb60(&local_158);
    uVar13 = FUN_142dea370(uVar13,local_78);
    FText::operator=(param_2 + 0x68,uVar13);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_70 + 1;
      lVar11 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar24 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar24 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if ((local_res20 == (longlong *)0x0) ||
       (plVar20 = (longlong *)FUN_142f71d80(), plVar21 = local_res20, local_res20 == (longlong *)0x0
       )) goto LAB_140d586a2;
    goto LAB_140d58646;
  }
  iVar25 = iVar25 + 1;
  lVar11 = lVar11 + 8;
  if (*(int *)(param_1 + 0x348) <= iVar25) goto LAB_140d586ae;
  goto LAB_140d58540;
  while (plVar21 = (longlong *)plVar21[6], plVar21 != (longlong *)0x0) {
LAB_140d58646:
    if (plVar21 == plVar20) {
      cVar9 = FUN_142f62f70(local_res20,local_158);
      if (cVar9 == '\0') goto LAB_140d586ae;
      break;
    }
  }
LAB_140d586a2:
  local_res20 = local_158;
LAB_140d586ae:
  if (local_res20 != (longlong *)0x0) {
    plVar20 = (longlong *)FUN_142f71d80();
    for (plVar21 = local_res20; plVar21 != (longlong *)0x0; plVar21 = (longlong *)plVar21[6]) {
      if (plVar21 == plVar20) {
        uVar13 = FUN_142f5bb60(&local_res20);
        uVar13 = FUN_142dea370(uVar13,local_60);
        FText::operator=(param_2 + 0x50,uVar13);
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar21 = local_58 + 1;
          lVar11 = *plVar21;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar24 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        break;
      }
    }
  }
  if (local_150 != (longlong *)0x0) {
    FMemory::Free(local_150);
  }
LAB_140d5875c:
  FUN_140db9540(param_2 + 0x80,param_3);
  FUN_14099b910(param_2 + 0x128,param_3 + 0xf8);
  plVar21 = (longlong *)(param_2 + 0x170);
  if (plVar21 != (longlong *)(param_3 + 0x2d8)) {
    iVar24 = *(int *)(param_2 + 0x178);
    if (iVar24 != 0) {
      plVar20 = (longlong *)(*plVar21 + 0x18);
      do {
        if (plVar20[5] != 0) {
          FMemory::Free();
        }
        if (*plVar20 != 0) {
          FMemory::Free();
        }
        plVar20 = plVar20 + 10;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
    }
    FUN_140998750(plVar21,*(longlong *)(param_3 + 0x2d8),*(undefined4 *)(param_3 + 0x2e0),
                  *(undefined4 *)(param_2 + 0x17c),0);
  }
  uVar13 = *(undefined8 *)(param_3 + 0x424);
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_3 + 0x41c);
  *(undefined8 *)(param_2 + 0x188) = uVar13;
  return;
}



// FUNCTION 140d58820 FUN_140d58820 body=70 status=ok
// SIG undefined FUN_140d58820(void)

void FUN_140d58820(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  *(undefined4 *)(param_1 + 0x24c) = param_2;
  if (param_6 != '\0') {
    *(undefined4 *)(param_1 + 0x238) = param_4;
    *(undefined4 *)(param_1 + 0x23c) = param_5;
    *(int *)(param_1 + 0x234) = param_3 + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x244) = param_4;
  *(undefined4 *)(param_1 + 0x248) = param_5;
  *(int *)(param_1 + 0x240) = param_3 + 1;
  return;
}



// FUNCTION 140d58870 FUN_140d58870 body=296 status=ok
// SIG undefined FUN_140d58870(void)

void FUN_140d58870(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong *local_28 [2];
  longlong local_18;
  longlong *local_10;
  
  lVar3 = FUN_142b45e90();
  FUN_142b46910(*(undefined8 *)(lVar3 + 0x18),&local_18);
  if (local_18 != 0) {
    pplVar6 = (longlong **)(local_18 + 0x28);
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    local_28[0] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_144510c40;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[2] = lVar3;
      *plVar4 = (longlong)&PTR_GetPoolName_144510c88;
    }
    if (local_28 != pplVar6) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(local_18 + 0x30) != 0) && (plVar5 = *pplVar6, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          if (*pplVar6 != (longlong *)0x0) {
            plVar5 = (longlong *)FMemory::Realloc(*pplVar6,0,0);
            *pplVar6 = plVar5;
          }
          *(undefined4 *)(local_18 + 0x30) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,pplVar6);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      local_28[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
      if (local_28[0] != (longlong *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 140d589a0 FUN_140d589a0 body=554 status=ok
// SIG undefined FUN_140d589a0(void)

void FUN_140d589a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code **ppcVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  code *local_48;
  longlong *plStack_40;
  longlong local_38;
  ulonglong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  ppcVar3 = (code **)(param_1 + 0x5c);
  if (*ppcVar3 == (code *)0x0) {
    lVar8 = FUN_140d3a750(param_1,param_2);
    if (lVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d58a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf8))(param_1,param_2,0);
      return;
    }
    cVar7 = FUN_140472310(lVar8);
    if (cVar7 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140d58a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf8))(param_1,param_2,1);
      return;
    }
    FUN_14172cc40(lVar8,0);
    *(longlong *)(lVar8 + 0x520) = *(longlong *)(lVar8 + 0x520) + 1;
    plStack_40 = (longlong *)param_2[1];
    local_48 = (code *)*param_2;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    if (ppcVar3 != &local_48) {
      *ppcVar3 = local_48;
      local_48 = (code *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5d,&plStack_40);
    }
    plVar9 = plStack_40;
    lVar11 = -1;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
    local_48 = FUN_140d446d0;
    uStack_1c = (undefined4)((ulonglong)plStack_40 >> 0x20);
    plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
    local_28 = 0x40d446d0;
    uStack_24 = 1;
    uStack_20 = 0;
    plVar9 = (longlong *)FUN_140d1b800(param_1[0xb9] + 0x18,local_res8,param_1,&local_28);
    local_38 = 0;
    local_30 = 0;
    param_1[0x5e] = *plVar9;
    puVar6 = PTR_u_profile_14629a5b0;
    if ((PTR_u_profile_14629a5b0 != (undefined *)0x0) && (*(short *)PTR_u_profile_14629a5b0 != 0)) {
      do {
        lVar11 = lVar11 + 1;
      } while (*(short *)(PTR_u_profile_14629a5b0 + lVar11 * 2) != 0);
      uVar10 = (int)lVar11 + 1;
      local_30 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,puVar6,(longlong)(int)uVar10 * 2);
    }
    FUN_140e969e0(param_1[0xb9],param_2,&local_38,lVar8);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  else {
    cVar7 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar7 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140d589e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf8))(param_1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 140d58bd0 FUN_140d58bd0 body=558 status=ok
// SIG undefined FUN_140d58bd0(void)

void FUN_140d58bd0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  code **ppcVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *local_40;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar7 = param_1 + 0x6b;
  if (*plVar7 == 0) {
    if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d58c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x158))(param_1,param_2,param_3,0);
      return;
    }
    local_40 = (longlong *)param_2[1];
    local_48 = *param_2;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    if (plVar7 != &local_48) {
      *plVar7 = local_48;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6c,&local_40);
    }
    plVar7 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    ppcVar3 = (code **)(param_1 + 0x6e);
    param_1[0x6d] = param_4;
    FString::operator=(ppcVar3,param_3);
    if (((int)param_1[0x6f] < 2) && (*(int *)(param_4 + 0x28) != 0)) {
      FString::PrintfImpl(&local_38,&DAT_1444f8e44);
      if (ppcVar3 == &local_38) {
        if (local_38 != (code *)0x0) {
          FMemory::Free();
        }
      }
      else {
        if (*ppcVar3 != (code *)0x0) {
          FMemory::Free();
        }
        *ppcVar3 = local_38;
        *(undefined4 *)(param_1 + 0x6f) = uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x37c) = uStack_2c;
      }
    }
    if ((int)param_1[0x6f] < 2) {
      local_38 = FUN_140d40e60;
      uStack_30 = 0;
      local_28 = 0x40d40e60;
      uStack_24 = 1;
      uStack_20 = 0;
      uStack_1c = uStack_2c;
      plVar7 = (longlong *)FUN_140d1b800(param_1[0xb9] + 0x30,local_res8,param_1,&local_28);
      param_1[0x71] = *plVar7;
      FUN_140e86260(param_1[0xb9],param_2);
      return;
    }
    FUN_140d29e00(param_1);
  }
  else {
    cVar6 = (*(code *)**(undefined8 **)*param_2)();
    if ((cVar6 == '\0') || (param_1[0x6d] != param_4)) {
                    /* WARNING: Could not recover jumptable at 0x000140d58c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x158))(param_1,param_2,param_3,0);
      return;
    }
  }
  return;
}



// FUNCTION 140d58e00 FUN_140d58e00 body=105 status=ok
// SIG undefined FUN_140d58e00(void)

longlong * FUN_140d58e00(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    plVar2 = (longlong *)operator_new(0x28);
  }
  else {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1439f01b0(lVar1,0,0x28);
    }
    plVar2 = (longlong *)FUN_1439efd10(lVar1,0x28);
  }
  *plVar2 = param_1[1];
  plVar2[1] = param_1[1];
  plVar2[2] = param_1[1];
  return plVar2;
}



// FUNCTION 140d58e70 FUN_140d58e70 body=97 status=ok
// SIG undefined FUN_140d58e70(void)

void FUN_140d58e70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = operator_new(0x28);
  }
  else {
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      FUN_1439f01b0(lVar1,0,0x28);
    }
    lVar1 = FUN_1439efd10(lVar1,0x28);
  }
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[1] = lVar1;
  return;
}



// FUNCTION 140d58ee0 FUN_140d58ee0 body=91 status=ok
// SIG undefined FUN_140d58ee0(void)

void FUN_140d58ee0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_140d58ee0(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    if (*param_1 == 0) {
      FMemory::operator_delete(param_2,0x28);
    }
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 140d58f40 FUN_140d58f40 body=15 status=ok
// SIG undefined FUN_140d58f40(void)

undefined8 * FUN_140d58f40(undefined8 *param_1)

{
  if (0xf < (ulonglong)param_1[3]) {
    return (undefined8 *)*param_1;
  }
  return param_1;
}



// FUNCTION 140d58f50 FUN_140d58f50 body=21 status=ok
// SIG undefined FUN_140d58f50(void)

longlong FUN_140d58f50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  return param_1[2] + (longlong)puVar1;
}



// FUNCTION 140d58f70 FUN_140d58f70 body=17 status=ok
// SIG undefined FUN_140d58f70(void)

void FUN_140d58f70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d58f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x90))();
  return;
}



// FUNCTION 140d58f90 FUN_140d58f90 body=104 status=ok
// SIG undefined FUN_140d58f90(void)

undefined8 FUN_140d58f90(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d58fd6;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d58fd6:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141519380(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d59000 FUN_140d59000 body=49 status=ok
// SIG undefined FUN_140d59000(void)

void FUN_140d59000(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1439f1a80(param_1 + 0x28);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (uVar1,param_2,param_3);
  return;
}



// FUNCTION 140d59040 FUN_140d59040 body=104 status=ok
// SIG undefined FUN_140d59040(void)

undefined8 FUN_140d59040(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x38);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x34)) goto LAB_140d59086;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x34) + 1);
  piVar4 = *(int **)(param_1 + 0x38);
  iVar2 = *piVar4;
LAB_140d59086:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141543f60(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) =
       uVar3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return uVar3;
}



// FUNCTION 140d590b0 FUN_140d590b0 body=104 status=ok
// SIG undefined FUN_140d590b0(void)

undefined8 FUN_140d590b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d590f6;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d590f6:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141518010(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d59120 FUN_140d59120 body=104 status=ok
// SIG undefined FUN_140d59120(void)

undefined8 FUN_140d59120(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x38);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x34)) goto LAB_140d59166;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x34) + 1);
  piVar4 = *(int **)(param_1 + 0x38);
  iVar2 = *piVar4;
LAB_140d59166:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141544200(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) =
       uVar3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return uVar3;
}



// FUNCTION 140d59190 FUN_140d59190 body=107 status=ok
// SIG undefined FUN_140d59190(void)

undefined8 FUN_140d59190(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x2a8);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x2a0);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x2a0) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x2a4)) goto LAB_140d591d9;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x298),*(int *)(param_1 + 0x2a4) + 1);
  piVar4 = *(int **)(param_1 + 0x2a8);
  iVar2 = *piVar4;
LAB_140d591d9:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_1415187e0(*(undefined8 *)(param_1 + 0x298));
  *(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + 8 + (longlong)*(int *)(param_1 + 0x2a0) * 8) =
       uVar3;
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1;
  return uVar3;
}



// FUNCTION 140d59200 FUN_140d59200 body=104 status=ok
// SIG undefined FUN_140d59200(void)

undefined8 FUN_140d59200(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x50);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x48) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x4c)) goto LAB_140d59246;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x40),*(int *)(param_1 + 0x4c) + 1);
  piVar4 = *(int **)(param_1 + 0x50);
  iVar2 = *piVar4;
LAB_140d59246:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_1415442d0(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)*(int *)(param_1 + 0x48) * 8) =
       uVar3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return uVar3;
}



// FUNCTION 140d59270 FUN_140d59270 body=58 status=ok
// SIG undefined FUN_140d59270(void)

void FUN_140d59270(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1439f1a80(param_1 + 0x10);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar1,param_2);
  return;
}



// FUNCTION 140d592b0 FUN_140d592b0 body=104 status=ok
// SIG undefined FUN_140d592b0(void)

undefined8 FUN_140d592b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d592f6;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d592f6:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141518950(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d59320 FUN_140d59320 body=107 status=ok
// SIG undefined FUN_140d59320(void)

undefined8 FUN_140d59320(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x260);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 600);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 600) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x25c)) goto LAB_140d59369;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x250),*(int *)(param_1 + 0x25c) + 1);
  piVar4 = *(int **)(param_1 + 0x260);
  iVar2 = *piVar4;
LAB_140d59369:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141518d40(*(undefined8 *)(param_1 + 0x250));
  *(undefined8 *)(*(longlong *)(param_1 + 0x260) + 8 + (longlong)*(int *)(param_1 + 600) * 8) =
       uVar3;
  *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
  return uVar3;
}



// FUNCTION 140d59390 FUN_140d59390 body=49 status=ok
// SIG undefined FUN_140d59390(void)

void FUN_140d59390(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1439f1a80(param_1 + 0x40);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (uVar1,param_2,param_3);
  return;
}



// FUNCTION 140d593d0 FUN_140d593d0 body=58 status=ok
// SIG undefined FUN_140d593d0(void)

void FUN_140d593d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1439f1a80(param_1 + 0x100);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar1,param_2);
  return;
}



// FUNCTION 140d59410 FUN_140d59410 body=104 status=ok
// SIG undefined FUN_140d59410(void)

undefined8 FUN_140d59410(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d59456;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d59456:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141519550(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d59480 FUN_140d59480 body=104 status=ok
// SIG undefined FUN_140d59480(void)

undefined8 FUN_140d59480(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d594c6;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d594c6:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_1415180c0(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d594f0 FUN_140d594f0 body=104 status=ok
// SIG undefined FUN_140d594f0(void)

undefined8 FUN_140d594f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x38);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x34)) goto LAB_140d59536;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x34) + 1);
  piVar4 = *(int **)(param_1 + 0x38);
  iVar2 = *piVar4;
LAB_140d59536:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141518a60(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) =
       uVar3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return uVar3;
}



// FUNCTION 140d59560 FUN_140d59560 body=104 status=ok
// SIG undefined FUN_140d59560(void)

undefined8 FUN_140d59560(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d595a6;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d595a6:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141518b10(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d595d0 FUN_140d595d0 body=104 status=ok
// SIG undefined FUN_140d595d0(void)

undefined8 FUN_140d595d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d59616;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d59616:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141518c90(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d59640 FUN_140d59640 body=107 status=ok
// SIG undefined FUN_140d59640(void)

undefined8 FUN_140d59640(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x1a0);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x198);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x198) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x19c)) goto LAB_140d59689;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 400),*(int *)(param_1 + 0x19c) + 1);
  piVar4 = *(int **)(param_1 + 0x1a0);
  iVar2 = *piVar4;
LAB_140d59689:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_1415182f0(*(undefined8 *)(param_1 + 400));
  *(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 8 + (longlong)*(int *)(param_1 + 0x198) * 8) =
       uVar3;
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  return uVar3;
}



// FUNCTION 140d596b0 FUN_140d596b0 body=58 status=ok
// SIG undefined FUN_140d596b0(void)

void FUN_140d596b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1439f1a80(param_1 + 0x160);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(uVar1,param_2);
  return;
}



// FUNCTION 140d596f0 FUN_140d596f0 body=104 status=ok
// SIG undefined FUN_140d596f0(void)

undefined8 FUN_140d596f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d59736;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d59736:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141543c30(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d59760 FUN_140d59760 body=107 status=ok
// SIG undefined FUN_140d59760(void)

undefined8 FUN_140d59760(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x1b8);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x1b0);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x1b0) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1b4)) goto LAB_140d597a9;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x1a8),*(int *)(param_1 + 0x1b4) + 1);
  piVar4 = *(int **)(param_1 + 0x1b8);
  iVar2 = *piVar4;
LAB_140d597a9:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141518680(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 8 + (longlong)*(int *)(param_1 + 0x1b0) * 8) =
       uVar3;
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
  return uVar3;
}



// FUNCTION 140d597d0 FUN_140d597d0 body=104 status=ok
// SIG undefined FUN_140d597d0(void)

undefined8 FUN_140d597d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x38);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x34)) goto LAB_140d59816;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x34) + 1);
  piVar4 = *(int **)(param_1 + 0x38);
  iVar2 = *piVar4;
LAB_140d59816:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141544420(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)*(int *)(param_1 + 0x30) * 8) =
       uVar3;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return uVar3;
}



// FUNCTION 140d59840 FUN_140d59840 body=104 status=ok
// SIG undefined FUN_140d59840(void)

undefined8 FUN_140d59840(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *piVar4;
    if (iVar1 < iVar2) {
      uVar3 = *(undefined8 *)(piVar4 + (longlong)iVar1 * 2 + 2);
      *(int *)(param_1 + 0x18) = iVar1 + 1;
      return uVar3;
    }
    if (iVar2 != *(int *)(param_1 + 0x1c)) goto LAB_140d59886;
  }
  FUN_1439f23d0((undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x1c) + 1);
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = *piVar4;
LAB_140d59886:
  *piVar4 = iVar2 + 1;
  uVar3 = FUN_141544340(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)*(int *)(param_1 + 0x18) * 8) =
       uVar3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}



// FUNCTION 140d598b0 append body=131 status=ok
// SIG undefined append(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
          (undefined8 *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    ::_guard_xfg_dispatch_icall_nop((void *)((longlong)puVar2 + lVar1),param_2,param_3);
    *(undefined1 *)((longlong)puVar2 + lVar1 + param_3) = 0;
    return param_1;
  }
  puVar2 = (undefined8 *)
           _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char_const_*,unsigned___int64>
                     (param_1,param_3,0,param_2,param_3);
  return puVar2;
}



// FUNCTION 140d59940 FUN_140d59940 body=19 status=ok
// SIG undefined FUN_140d59940(void)

undefined8 * FUN_140d59940(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a6340;
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
  }
  return puVar1;
}



// FUNCTION 140d59960 FUN_140d59960 body=9 status=ok
// SIG undefined FUN_140d59960(void)

void FUN_140d59960(longlong param_1)

{
  FUN_1439f1d30(param_1 + 0x28);
  return;
}



// FUNCTION 140d59970 FUN_140d59970 body=92 status=ok
// SIG undefined FUN_140d59970(void)

undefined8 * FUN_140d59970(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_20 [24];
  
  puVar3 = (undefined8 *)FUN_140d599d0(*(undefined8 *)(param_1 + 0x10),local_20);
  uVar2 = puVar3[1];
  uVar1 = puVar3[2];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return param_2;
}



// FUNCTION 140d599d0 FUN_140d599d0 body=170 status=ok
// SIG undefined FUN_140d599d0(void)

longlong * FUN_140d599d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  param_2[1] = param_1;
  uVar4 = *(ulonglong *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = 0;
  if (*(ulonglong *)(param_1 + 8) <= uVar4) {
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  do {
    lVar2 = *plVar1;
    lVar3 = *(longlong *)(uVar4 * 8 + lVar2);
    if (lVar3 != 0) {
      if (lVar3 != *(longlong *)(lVar2 + (uVar4 ^ 1) * 8)) {
        *param_2 = lVar3;
        return param_2;
      }
      if ((lVar3 != 0) && (lVar3 == *(longlong *)(lVar2 + (uVar4 ^ 1) * 8))) {
        *param_2 = *(longlong *)
                    (**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + 8) +
                    0x20);
        return param_2;
      }
    }
    uVar4 = uVar4 + 1;
    param_2[2] = uVar4;
    param_1 = param_2[1];
    if (*(ulonglong *)(param_1 + 8) <= uVar4) {
      return param_2;
    }
  } while( true );
}



// FUNCTION 140d59a80 FUN_140d59a80 body=22 status=ok
// SIG undefined FUN_140d59a80(void)

undefined8 * FUN_140d59a80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a5158;
  if (*(undefined8 **)(param_1 + 0x3c0) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x3c0);
  }
  return puVar1;
}



// FUNCTION 140d59aa0 FUN_140d59aa0 body=22 status=ok
// SIG undefined FUN_140d59aa0(void)

undefined8 * FUN_140d59aa0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a5cd8;
  if (*(undefined8 **)(param_1 + 0x3c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x3c8);
  }
  return puVar1;
}



// FUNCTION 140d59ac0 FUN_140d59ac0 body=23 status=ok
// SIG undefined FUN_140d59ac0(void)

undefined4 FUN_140d59ac0(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(param_1 + 0x118);
  return *puVar1;
}



// FUNCTION 140d59ae0 FUN_140d59ae0 body=12 status=ok
// SIG undefined FUN_140d59ae0(void)

void FUN_140d59ae0(longlong param_1)

{
  FUN_1439f2ae0(param_1 + 0x118);
  return;
}



// FUNCTION 140d59af0 FUN_140d59af0 body=94 status=ok
// SIG undefined FUN_140d59af0(void)

void FUN_140d59af0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_141526150(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 140d59b50 FUN_140d59b50 body=38 status=ok
// SIG undefined FUN_140d59b50(void)

void FUN_140d59b50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)&DAT_146ba2f50) {
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  return;
}



// FUNCTION 140d59b80 FUN_140d59b80 body=94 status=ok
// SIG undefined FUN_140d59b80(void)

void FUN_140d59b80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_1415045a0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 140d59be0 FUN_140d59be0 body=97 status=ok
// SIG undefined FUN_140d59be0(void)

void FUN_140d59be0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x2a0);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    do {
      FUN_141525a70(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  return;
}



// FUNCTION 140d59c50 FUN_140d59c50 body=48 status=ok
// SIG undefined FUN_140d59c50(void)

void FUN_140d59c50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 1000);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 1000) = 0;
  return;
}



// FUNCTION 140d59c80 FUN_140d59c80 body=94 status=ok
// SIG undefined FUN_140d59c80(void)

void FUN_140d59c80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_141525bc0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 140d59ce0 FUN_140d59ce0 body=97 status=ok
// SIG undefined FUN_140d59ce0(void)

void FUN_140d59ce0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 600);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x260);
    do {
      FUN_141525eb0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 600) = 0;
  }
  return;
}



// FUNCTION 140d59d50 FUN_140d59d50 body=94 status=ok
// SIG undefined FUN_140d59d50(void)

void FUN_140d59d50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_141526a20(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 140d59db0 FUN_140d59db0 body=56 status=ok
// SIG undefined FUN_140d59db0(void)

void FUN_140d59db0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x43c) == 0x40) {
    puVar1 = *(undefined8 **)(param_1 + 0x430);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  return;
}



// FUNCTION 140d59df0 FUN_140d59df0 body=94 status=ok
// SIG undefined FUN_140d59df0(void)

void FUN_140d59df0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_1415256f0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 140d59e50 FUN_140d59e50 body=97 status=ok
// SIG undefined FUN_140d59e50(void)

void FUN_140d59e50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x198);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    do {
      FUN_1415258f0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  return;
}



// FUNCTION 140d59ec0 FUN_140d59ec0 body=97 status=ok
// SIG undefined FUN_140d59ec0(void)

void FUN_140d59ec0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x1b8);
    do {
      FUN_141524e70(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 140d59f30 FUN_140d59f30 body=94 status=ok
// SIG undefined FUN_140d59f30(void)

void FUN_140d59f30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x38);
    do {
      FUN_141547090(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 140d59f90 FUN_140d59f90 body=94 status=ok
// SIG undefined FUN_140d59f90(void)

void FUN_140d59f90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
    do {
      FUN_141525dc0(*(undefined8 *)(lVar2 + 8 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 140d59ff0 FUN_140d59ff0 body=22 status=ok
// SIG undefined FUN_140d59ff0(void)

undefined8 * FUN_140d59ff0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a5668;
  if (*(undefined8 **)(param_1 + 0x3b0) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x3b0);
  }
  return puVar1;
}



// FUNCTION 140d5a010 FUN_140d5a010 body=22 status=ok
// SIG undefined FUN_140d5a010(void)

undefined8 * FUN_140d5a010(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a5698;
  if (*(undefined8 **)(param_1 + 0x3a8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x3a8);
  }
  return puVar1;
}



// FUNCTION 140d5a030 FUN_140d5a030 body=38 status=ok
// SIG undefined FUN_140d5a030(void)

undefined8 * FUN_140d5a030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 140d5a060 FUN_140d5a060 body=23 status=ok
// SIG undefined FUN_140d5a060(void)

undefined4 FUN_140d5a060(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)mu::FPhysicsBody::GetBodyBoneId(param_1 + 0x178);
  return *puVar1;
}



// FUNCTION 140d5a080 FUN_140d5a080 body=401 status=ok
// SIG undefined FUN_140d5a080(void)

undefined8 *
FUN_140d5a080(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar2 = (longlong *)param_1[1];
  if ((param_3 == (longlong *)*plVar2) && (param_4 == plVar2)) {
    plVar4 = plVar2;
    plVar6 = (longlong *)plVar2[1];
    if (*(char *)(plVar2[1] + 0x19) == '\0') {
      do {
        FUN_140d58ee0(param_1,plVar6[2]);
        plVar4 = (longlong *)*plVar6;
        if (*param_1 == 0) {
          FMemory::operator_delete(plVar6,0x28);
        }
        plVar6 = plVar4;
      } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
      plVar4 = (longlong *)param_1[1];
    }
    plVar4[1] = (longlong)plVar2;
    *(longlong **)param_1[1] = plVar2;
    *(longlong **)(param_1[1] + 0x10) = plVar2;
    param_1[2] = 0;
    *param_2 = *(undefined8 *)param_1[1];
  }
  else {
    while (param_3 != param_4) {
      plVar2 = (longlong *)param_3[2];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar4 = plVar2;
        plVar6 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x19);
          plVar4 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar3 = (longlong *)param_3[1];
        plVar6 = param_3;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar6 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar6 = plVar4;
        }
      }
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        plVar2 = (longlong *)*plVar2;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
        while (cVar1 == '\0') {
          plVar2 = (longlong *)*plVar2;
          cVar1 = *(char *)((longlong)plVar2 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar2 = (longlong *)param_3[1];
        while ((plVar6 = plVar2, cVar1 == '\0' && (param_3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x19);
          plVar2 = (longlong *)plVar6[1];
          param_3 = plVar6;
        }
      }
      uVar5 = FUN_140632130(param_1 + 1);
      param_3 = plVar4;
      if (*param_1 == 0) {
        FMemory::operator_delete(uVar5,0x28);
      }
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 140d5a220 FUN_140d5a220 body=22 status=ok
// SIG undefined FUN_140d5a220(void)

undefined8 * FUN_140d5a220(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a5820;
  if (*(undefined8 **)(param_1 + 0x3e0) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x3e0);
  }
  return puVar1;
}



// FUNCTION 140d5a240 FUN_140d5a240 body=22 status=ok
// SIG undefined FUN_140d5a240(void)

undefined8 * FUN_140d5a240(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a58b0;
  if (*(undefined8 **)(param_1 + 1000) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 1000);
  }
  return puVar1;
}



// FUNCTION 140d5a260 FUN_140d5a260 body=387 status=ok
// SIG undefined FUN_140d5a260(void)

longlong * FUN_140d5a260(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  FUN_140d2cbc0(param_1,&local_50,param_3,0);
  if (local_50 != 0) {
    lStack_60 = local_48;
    local_58 = local_40;
    local_68 = local_50;
    *(undefined1 *)(param_2 + 3) = 0;
    goto LAB_140d5a3c4;
  }
  uVar1 = param_1[1];
  uVar6 = *param_1 + 1;
  uVar2 = uVar1 * 3 & 0x3fffffffffffffff;
  uVar5 = uVar2 >> 2;
  if (uVar6 < uVar5) {
    if ((uVar6 <= uVar2 >> 4) && (8 < uVar1)) {
      bVar4 = 1;
      lVar3 = (uVar6 * 5 >> 2) + 1;
      uVar2 = lVar3 * 2;
      while (uVar2 < uVar5) {
        bVar4 = bVar4 + 1;
        uVar2 = lVar3 << (bVar4 & 0x3f);
      }
      uVar5 = uVar1 >> (bVar4 & 0x3f);
      uVar2 = 8;
      if (8 < uVar5) {
        uVar2 = uVar5;
      }
      if (uVar2 != uVar1) goto LAB_140d5a335;
    }
  }
  else if (uVar1 < 0x800000000000001) {
    uVar2 = uVar1 * 2;
LAB_140d5a335:
    FUN_140d4b7f0(param_1,uVar2);
    FUN_140d2cbc0(param_1,&local_50,param_3,0);
  }
  lVar3 = param_1[5];
  if (lVar3 == 0) {
    lVar3 = operator_new(0x30);
  }
  else {
    if (*(longlong *)(lVar3 + 0x70) != 0) {
      FUN_1439f01b0(lVar3,0,0x30);
    }
    lVar3 = FUN_1439efd10(lVar3,0x30);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(lVar3,param_3);
  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 0x20);
  FUN_140d3d820(param_1,&local_68,local_38,lVar3);
  *param_1 = *param_1 + 1;
  *(undefined1 *)(param_2 + 3) = 1;
LAB_140d5a3c4:
  *param_2 = local_68;
  param_2[1] = lStack_60;
  param_2[2] = local_58;
  return param_2;
}



// FUNCTION 140d5a3f0 RemoveSoundBufferForResourceID body=9 status=ok
// SIG undefined RemoveSoundBufferForResourceID(void)

void FAudioDeviceManager::RemoveSoundBufferForResourceID(longlong param_1)

{
  FUN_1439f1d30(param_1 + 0x10);
  return;
}



// FUNCTION 140d5a400 GetSettingsProvider body=19 status=ok
// SIG undefined GetSettingsProvider(void)

undefined8 * FChaosSolversModule::GetSettingsProvider(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a5a28;
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 140d5a420 StopStream body=9 status=ok
// SIG undefined StopStream(void)

void CAkSrcBaseEx::StopStream(longlong param_1)

{
  FUN_1439f1d30(param_1 + 0x40);
  return;
}



// FUNCTION 140d5a430 FUN_140d5a430 body=12 status=ok
// SIG undefined FUN_140d5a430(void)

void FUN_140d5a430(longlong param_1)

{
  FUN_1439f1d30(param_1 + 0x100);
  return;
}



// FUNCTION 140d5a440 FUN_140d5a440 body=17 status=ok
// SIG undefined FUN_140d5a440(void)

void FUN_140d5a440(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d5a44a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x98))();
  return;
}



// FUNCTION 140d5a460 FUN_140d5a460 body=35 status=ok
// SIG undefined FUN_140d5a460(void)

void FUN_140d5a460(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar1 = FUN_141544530(0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}



// FUNCTION 140d5a490 FUN_140d5a490 body=43 status=ok
// SIG undefined FUN_140d5a490(void)

undefined * FUN_140d5a490(longlong param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  if (puVar1 == &DAT_146ba2f50) {
    FUN_140d2a6b0((undefined8 *)(param_1 + 0x10));
    puVar1 = *(undefined **)(param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 140d5a4c0 FUN_140d5a4c0 body=41 status=ok
// SIG undefined FUN_140d5a4c0(void)

void FUN_140d5a4c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    uVar1 = FUN_141517e10(0);
    *(undefined8 *)(param_1 + 0x3c0) = uVar1;
  }
  return;
}



// FUNCTION 140d5a4f0 FUN_140d5a4f0 body=41 status=ok
// SIG undefined FUN_140d5a4f0(void)

void FUN_140d5a4f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3c8) == 0) {
    uVar1 = FUN_141519430(0);
    *(undefined8 *)(param_1 + 0x3c8) = uVar1;
  }
  return;
}



// FUNCTION 140d5a520 FUN_140d5a520 body=41 status=ok
// SIG undefined FUN_140d5a520(void)

void FUN_140d5a520(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3b0) == 0) {
    uVar1 = FUN_141518170(0);
    *(undefined8 *)(param_1 + 0x3b0) = uVar1;
  }
  return;
}



// FUNCTION 140d5a550 FUN_140d5a550 body=41 status=ok
// SIG undefined FUN_140d5a550(void)

void FUN_140d5a550(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3a8) == 0) {
    uVar1 = FUN_141518230(0);
    *(undefined8 *)(param_1 + 0x3a8) = uVar1;
  }
  return;
}



// FUNCTION 140d5a580 FUN_140d5a580 body=41 status=ok
// SIG undefined FUN_140d5a580(void)

void FUN_140d5a580(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3e0) == 0) {
    uVar1 = FUN_141518890(0);
    *(undefined8 *)(param_1 + 0x3e0) = uVar1;
  }
  return;
}



// FUNCTION 140d5a5b0 FUN_140d5a5b0 body=41 status=ok
// SIG undefined FUN_140d5a5b0(void)

void FUN_140d5a5b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 1000) == 0) {
    uVar1 = FUN_141518a00(0);
    *(undefined8 *)(param_1 + 1000) = uVar1;
  }
  return;
}



// FUNCTION 140d5a5e0 FUN_140d5a5e0 body=35 status=ok
// SIG undefined FUN_140d5a5e0(void)

void FUN_140d5a5e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_141518de0(0);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 140d5a610 FUN_140d5a610 body=17 status=ok
// SIG undefined FUN_140d5a610(void)

void FUN_140d5a610(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d5a61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x98))();
  return;
}



// FUNCTION 140d5a630 FUN_140d5a630 body=66 status=ok
// SIG undefined FUN_140d5a630(void)

undefined8 FUN_140d5a630(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x43c) != 0x40) {
    FUN_141542860();
    *(undefined4 *)(param_1 + 0x43c) = 0x40;
    uVar1 = FUN_1415194f0(0);
    *(undefined8 *)(param_1 + 0x430) = uVar1;
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x430);
}



// FUNCTION 140d5a680 FUN_140d5a680 body=35 status=ok
// SIG undefined FUN_140d5a680(void)

void FUN_140d5a680(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = FUN_141544530(0);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}



// FUNCTION 140d5a6b0 FUN_140d5a6b0 body=41 status=ok
// SIG undefined FUN_140d5a6b0(void)

void FUN_140d5a6b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3d8) == 0) {
    uVar1 = FUN_1415198c0(0);
    *(undefined8 *)(param_1 + 0x3d8) = uVar1;
  }
  return;
}



// FUNCTION 140d5a6e0 FUN_140d5a6e0 body=41 status=ok
// SIG undefined FUN_140d5a6e0(void)

void FUN_140d5a6e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3d0) == 0) {
    uVar1 = FUN_141519960(0);
    *(undefined8 *)(param_1 + 0x3d0) = uVar1;
  }
  return;
}



// FUNCTION 140d5a710 FUN_140d5a710 body=41 status=ok
// SIG undefined FUN_140d5a710(void)

void FUN_140d5a710(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    uVar1 = FUN_141544480(0);
    *(undefined8 *)(param_1 + 0x130) = uVar1;
  }
  return;
}



// FUNCTION 140d5a740 SetAmpEnvelopeBiasDepth body=17 status=ok
// SIG undefined SetAmpEnvelopeBiasDepth(void)

void Audio::FMonoWaveTable::SetAmpEnvelopeBiasDepth(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d5a74a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x90))();
  return;
}



// FUNCTION 140d5a760 FUN_140d5a760 body=25 status=ok
// SIG undefined FUN_140d5a760(void)

undefined8 * FUN_140d5a760(longlong param_1)

{
  if (*(int *)(param_1 + 0x43c) == 0x40) {
    return *(undefined8 **)(param_1 + 0x430);
  }
  return &DAT_1468a5d30;
}



// FUNCTION 140d5a780 push_back body=385 status=ok
// SIG undefined push_back(void)

void std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back
               (undefined8 *param_1,undefined1 param_2)

{
  ulonglong _Size;
  ulonglong uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  
  _Size = param_1[2];
  uVar1 = param_1[3];
  if (_Size < uVar1) {
    param_1[2] = _Size + 1;
    if (0xf < uVar1) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + _Size) = param_2;
    *(undefined1 *)((longlong)param_1 + _Size + 1) = 0;
    return;
  }
  if (_Size == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlen();
  }
  uVar3 = _Size + 1 | 0xf;
  uVar5 = 0x7fffffffffffffff;
  if (((uVar3 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) &&
     (uVar4 = (uVar1 >> 1) + uVar1, uVar5 = uVar3, uVar3 < uVar4)) {
    uVar5 = uVar4;
  }
  uVar3 = uVar5 + 1;
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)operator_new(uVar3);
    }
  }
  else {
    uVar4 = uVar5 + 0x28;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffffffffffff;
    }
    lVar2 = operator_new(uVar4);
    if (lVar2 == 0) goto LAB_140d5a8c4;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  param_1[2] = _Size + 1;
  param_1[3] = uVar5;
  if (uVar1 < 0x10) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = param_2;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
  }
  else {
    _Src = (void *)*param_1;
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
    uVar5 = uVar1 + 1;
    *(undefined1 *)((longlong)_Dst + _Size) = param_2;
    *(undefined1 *)((longlong)_Dst + _Size + 1) = 0;
    pvVar6 = _Src;
    if (0xfff < uVar5) {
      pvVar6 = *(void **)((longlong)_Src + -8);
      uVar5 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6))) {
LAB_140d5a8c4:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pvVar6,uVar5);
  }
  *param_1 = _Dst;
  return;
}



// FUNCTION 140d5a910 FUN_140d5a910 body=12 status=ok
// SIG undefined FUN_140d5a910(void)

void FUN_140d5a910(longlong param_1)

{
  FUN_1439f1d30(param_1 + 0x160);
  return;
}



// FUNCTION 140d5a920 FUN_140d5a920 body=173 status=ok
// SIG undefined FUN_140d5a920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5a920(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_38);
  FUN_140d4d0d0(param_1 + 0x10,&DAT_146ba2f50,&local_38);
  if (0xf < uStack_20) {
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uStack_20 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uStack_20 + 0x28;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  return;
}



// FUNCTION 140d5a9d0 FUN_140d5a9d0 body=173 status=ok
// SIG undefined FUN_140d5a9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5a9d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_38);
  FUN_140d4d0d0(param_1 + 0x18,&DAT_146ba2f50,&local_38);
  if (0xf < uStack_20) {
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uStack_20 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uStack_20 + 0x28;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  return;
}



// FUNCTION 140d5aa80 FUN_140d5aa80 body=173 status=ok
// SIG undefined FUN_140d5aa80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5aa80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_38);
  FUN_140d4d0d0(param_1 + 0x20,&DAT_146ba2f50,&local_38);
  if (0xf < uStack_20) {
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uStack_20 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uStack_20 + 0x28;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  return;
}



// FUNCTION 140d5ab30 FUN_140d5ab30 body=173 status=ok
// SIG undefined FUN_140d5ab30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5ab30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_38);
  FUN_140d4d0d0(param_1 + 0x40,&DAT_146ba2f50,&local_38);
  if (0xf < uStack_20) {
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uStack_20 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uStack_20 + 0x28;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  return;
}



// FUNCTION 140d5abe0 FUN_140d5abe0 body=59 status=ok
// SIG undefined FUN_140d5abe0(void)

void FUN_140d5abe0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == (undefined8 *)&DAT_146ba2f50) {
    FUN_140d2a6b0(param_1 + 0x10);
    return;
  }
  if (puVar1 != param_2) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar1,puVar2,param_2[2]);
    return;
  }
  return;
}



// FUNCTION 140d5ac20 FUN_140d5ac20 body=59 status=ok
// SIG undefined FUN_140d5ac20(void)

void FUN_140d5ac20(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 == (undefined8 *)&DAT_146ba2f50) {
    FUN_140d2a6b0(param_1 + 0x18);
    return;
  }
  if (puVar1 != param_2) {
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (puVar1,puVar2,param_2[2]);
    return;
  }
  return;
}



// FUNCTION 140d5ac60 FUN_140d5ac60 body=173 status=ok
// SIG undefined FUN_140d5ac60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5ac60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_38);
  FUN_140d4d0d0(param_1 + 0x38,&DAT_146ba2f50,&local_38);
  if (0xf < uStack_20) {
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uStack_20 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uStack_20 + 0x28;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  return;
}



// FUNCTION 140d5ad10 FUN_140d5ad10 body=173 status=ok
// SIG undefined FUN_140d5ad10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5ad10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_38);
  FUN_140d4d0d0(param_1 + 0x28,&DAT_146ba2f50,&local_38);
  if (0xf < uStack_20) {
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uStack_20 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uStack_20 + 0x28;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  return;
}



// FUNCTION 140d5adc0 FUN_140d5adc0 body=173 status=ok
// SIG undefined FUN_140d5adc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5adc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_38);
  FUN_140d4d0d0(param_1 + 0x30,&DAT_146ba2f50,&local_38);
  if (0xf < uStack_20) {
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uStack_20 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uStack_20 + 0x28;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  return;
}



// FUNCTION 140d5ae70 FUN_140d5ae70 body=176 status=ok
// SIG undefined FUN_140d5ae70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d5ae70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38 = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(&local_38);
  FUN_140d4d0d0(param_1 + 0x378,&DAT_146ba2f50,&local_38);
  if (0xf < uStack_20) {
    lVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uStack_20 + 1;
    lVar3 = lVar1;
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(lVar1 + -8);
      uVar2 = uStack_20 + 0x28;
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar2);
  }
  return;
}



// FUNCTION 140d5af30 FUN_140d5af30 body=19 status=ok
// SIG undefined FUN_140d5af30(void)

undefined8 * FUN_140d5af30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a6340;
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
  }
  return puVar1;
}



// FUNCTION 140d5af50 FUN_140d5af50 body=22 status=ok
// SIG undefined FUN_140d5af50(void)

undefined8 * FUN_140d5af50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a5f18;
  if (*(undefined8 **)(param_1 + 0x3d8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x3d8);
  }
  return puVar1;
}



// FUNCTION 140d5af70 u64toa body=1353 status=ok
// SIG undefined u64toa(void)

char * rapidjson::internal::u64toa(ulonglong param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  
  uVar13 = (uint)param_1;
  if (99999999 < param_1) {
    if (param_1 < 10000000000000000) {
      iVar7 = (int)(param_1 / 100000000);
      uVar13 = uVar13 + iVar7 * -100000000;
      uVar10 = (param_1 / 100000000 & 0xffffffff) / 10000;
      iVar11 = (int)uVar10;
      uVar12 = iVar7 + iVar11 * -10000;
      iVar7 = (int)(uVar10 / 100);
      uVar3 = iVar7 * 2;
      uVar9 = (iVar11 + iVar7 * -100) * 2;
      uVar4 = (uVar12 / 100) * 2;
      uVar12 = (uVar12 % 100) * 2;
      uVar8 = uVar13 / 10000;
      uVar13 = uVar13 % 10000;
      uVar5 = (uVar8 / 100) * 2;
      uVar8 = (uVar8 % 100) * 2;
      uVar6 = (uVar13 / 100) * 2;
      uVar13 = (uVar13 % 100) * 2;
      if (999999999999999 < param_1) {
        *param_2 = (&DAT_144213a50)[uVar3];
        param_2 = param_2 + 1;
      }
      if (99999999999999 < param_1) {
        *param_2 = (&DAT_144213a50)[uVar3 + 1];
        param_2 = param_2 + 1;
      }
      if (9999999999999 < param_1) {
        *param_2 = (&DAT_144213a50)[uVar9];
        param_2 = param_2 + 1;
      }
      if (999999999999 < param_1) {
        *param_2 = (&DAT_144213a50)[uVar9 + 1];
        param_2 = param_2 + 1;
      }
      if (99999999999 < param_1) {
        *param_2 = (&DAT_144213a50)[uVar4];
        param_2 = param_2 + 1;
      }
      if (9999999999 < param_1) {
        *param_2 = (&DAT_144213a50)[uVar4 + 1];
        param_2 = param_2 + 1;
      }
      if (999999999 < param_1) {
        *param_2 = (&DAT_144213a50)[uVar12];
        param_2 = param_2 + 1;
      }
      *param_2 = (&DAT_144213a50)[uVar12 + 1];
      param_2[1] = (&DAT_144213a50)[uVar5];
      param_2[2] = (&DAT_144213a50)[uVar5 + 1];
      param_2[3] = (&DAT_144213a50)[uVar8];
      param_2[4] = (&DAT_144213a50)[uVar8 + 1];
      param_2[5] = (&DAT_144213a50)[uVar6];
      param_2[6] = (&DAT_144213a50)[uVar6 + 1];
      param_2[7] = (&DAT_144213a50)[uVar13];
      param_2[8] = (&DAT_144213a50)[uVar13 + 1];
      return param_2 + 9;
    }
    pcVar14 = param_2 + 1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    auVar2 = auVar1 / ZEXT816(10000000000000000);
    auVar1 = auVar1 % ZEXT816(10000000000000000);
    uVar13 = auVar2._0_4_;
    if (uVar13 < 10) {
      *param_2 = auVar2[0] + '0';
    }
    else if (uVar13 < 100) {
      *param_2 = (&DAT_144213a50)[uVar13 * 2];
      *pcVar14 = (&DAT_144213a50)[uVar13 * 2 + 1];
      pcVar14 = param_2 + 2;
    }
    else {
      uVar10 = (auVar2._0_8_ & 0xffffffff) / 100;
      iVar7 = (int)uVar10;
      uVar9 = (uVar13 + iVar7 * -100) * 2;
      if (uVar13 < 1000) {
        *param_2 = (char)uVar10 + '0';
        *pcVar14 = (&DAT_144213a50)[uVar9];
        param_2[2] = (&DAT_144213a50)[uVar9 + 1];
        pcVar14 = param_2 + 3;
      }
      else {
        uVar13 = iVar7 * 2;
        *param_2 = (&DAT_144213a50)[uVar13];
        *pcVar14 = (&DAT_144213a50)[uVar13 + 1];
        param_2[2] = (&DAT_144213a50)[uVar9];
        param_2[3] = (&DAT_144213a50)[uVar9 + 1];
        pcVar14 = param_2 + 4;
      }
    }
    uVar10 = auVar1._0_8_ / 100000000;
    iVar7 = (int)uVar10;
    uVar8 = auVar1._0_4_ + iVar7 * -100000000;
    uVar10 = uVar10 / 10000;
    iVar11 = (int)uVar10;
    uVar9 = iVar7 + iVar11 * -10000;
    iVar7 = (int)(uVar10 / 100);
    uVar3 = iVar7 * 2;
    uVar13 = (iVar11 + iVar7 * -100) * 2;
    uVar4 = (uVar9 / 100) * 2;
    uVar9 = (uVar9 % 100) * 2;
    uVar12 = uVar8 / 10000;
    uVar8 = uVar8 % 10000;
    uVar5 = (uVar12 / 100) * 2;
    uVar12 = (uVar12 % 100) * 2;
    uVar6 = (uVar8 / 100) * 2;
    *pcVar14 = (&DAT_144213a50)[uVar3];
    uVar8 = (uVar8 % 100) * 2;
    pcVar14[1] = (&DAT_144213a50)[uVar3 + 1];
    pcVar14[2] = (&DAT_144213a50)[uVar13];
    pcVar14[3] = (&DAT_144213a50)[uVar13 + 1];
    pcVar14[4] = (&DAT_144213a50)[uVar4];
    pcVar14[5] = (&DAT_144213a50)[uVar4 + 1];
    pcVar14[6] = (&DAT_144213a50)[uVar9];
    pcVar14[7] = (&DAT_144213a50)[uVar9 + 1];
    pcVar14[8] = (&DAT_144213a50)[uVar5];
    pcVar14[9] = (&DAT_144213a50)[uVar5 + 1];
    pcVar14[10] = (&DAT_144213a50)[uVar12];
    pcVar14[0xb] = (&DAT_144213a50)[uVar12 + 1];
    pcVar14[0xc] = (&DAT_144213a50)[uVar6];
    pcVar14[0xd] = (&DAT_144213a50)[uVar6 + 1];
    pcVar14[0xe] = (&DAT_144213a50)[uVar8];
    pcVar14[0xf] = (&DAT_144213a50)[uVar8 + 1];
    return pcVar14 + 0x10;
  }
  if (uVar13 < 10000) {
    iVar7 = (int)((param_1 & 0xffffffff) / 100);
    uVar12 = iVar7 * 2;
    uVar9 = (uVar13 + iVar7 * -100) * 2;
    if (999 < uVar13) {
      *param_2 = (&DAT_144213a50)[uVar12];
      param_2 = param_2 + 1;
    }
    if (99 < uVar13) {
      *param_2 = (&DAT_144213a50)[uVar12 + 1];
      param_2 = param_2 + 1;
    }
    if (9 < uVar13) {
      *param_2 = (&DAT_144213a50)[uVar9];
      param_2 = param_2 + 1;
    }
    *param_2 = (&DAT_144213a50)[uVar9 + 1];
    return param_2 + 1;
  }
  uVar10 = (param_1 & 0xffffffff) / 10000;
  iVar11 = (int)uVar10;
  uVar13 = uVar13 + iVar11 * -10000;
  iVar7 = (int)(uVar10 / 100);
  uVar12 = iVar7 * 2;
  uVar9 = (iVar11 + iVar7 * -100) * 2;
  uVar8 = (uVar13 / 100) * 2;
  uVar13 = (uVar13 % 100) * 2;
  if (9999999 < param_1) {
    *param_2 = (&DAT_144213a50)[uVar12];
    param_2 = param_2 + 1;
  }
  if (999999 < param_1) {
    *param_2 = (&DAT_144213a50)[uVar12 + 1];
    param_2 = param_2 + 1;
  }
  if (99999 < param_1) {
    *param_2 = (&DAT_144213a50)[uVar9];
    param_2 = param_2 + 1;
  }
  *param_2 = (&DAT_144213a50)[uVar9 + 1];
  param_2[1] = (&DAT_144213a50)[uVar8];
  param_2[2] = (&DAT_144213a50)[uVar8 + 1];
  param_2[3] = (&DAT_144213a50)[uVar13];
  param_2[4] = (&DAT_144213a50)[uVar13 + 1];
  return param_2 + 5;
}



// FUNCTION 140d5b4c0 FUN_140d5b4c0 body=22 status=ok
// SIG undefined FUN_140d5b4c0(void)

undefined8 * FUN_140d5b4c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a5f50;
  if (*(undefined8 **)(param_1 + 0x3d0) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x3d0);
  }
  return puVar1;
}



// FUNCTION 140d5b4e0 FUN_140d5b4e0 body=22 status=ok
// SIG undefined FUN_140d5b4e0(void)

undefined8 * FUN_140d5b4e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_1468a62f0;
  if (*(undefined8 **)(param_1 + 0x130) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x130);
  }
  return puVar1;
}



// FUNCTION 140d5b500 FUN_140d5b500 body=66 status=ok
// SIG undefined FUN_140d5b500(void)

void FUN_140d5b500(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14452f860;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14452f8a8;
  }
  return;
}



// FUNCTION 140d5b560 FUN_140d5b560 body=26 status=ok
// SIG undefined FUN_140d5b560(void)

undefined1 FUN_140d5b560(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 8) == '\0') {
    FUN_140d87f70();
  }
  return 1;
}



// FUNCTION 140d5b580 FUN_140d5b580 body=66 status=ok
// SIG undefined FUN_140d5b580(void)

void FUN_140d5b580(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14452f8f0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14452f938;
  }
  return;
}



// FUNCTION 140d5b5d0 FUN_140d5b5d0 body=62 status=ok
// SIG undefined FUN_140d5b5d0(void)

void FUN_140d5b5d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_140d78bc0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return;
}



// FUNCTION 140d5b610 FUN_140d5b610 body=64 status=ok
// SIG undefined FUN_140d5b610(void)

undefined1 FUN_140d5b610(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_140d78bc0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return 1;
}



// FUNCTION 140d5b650 FUN_140d5b650 body=275 status=ok
// SIG undefined FUN_140d5b650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140d5b650(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_20 = 0;
  local_78 = 0;
  *param_2 = &PTR_FUN_143f73d18;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  param_2[1] = *(undefined8 *)(lVar1 + 8);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  TMap<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>::
  TMap<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
            (param_2 + 7,&local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_68);
  if (local_78 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140d5b770 FUN_140d5b770 body=132 status=ok
// SIG undefined FUN_140d5b770(void)

undefined8 * FUN_140d5b770(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  *param_2 = &PTR_FUN_143f73d18;
  param_2[1] = *(undefined8 *)(lVar1 + 8);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  return param_2;
}



// FUNCTION 140d5b800 FUN_140d5b800 body=104 status=ok
// SIG undefined FUN_140d5b800(void)

undefined8 * FUN_140d5b800(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  *param_2 = &PTR_FUN_143f73d18;
  param_2[1] = *(undefined8 *)(lVar1 + 8);
  lVar1 = *(longlong *)(lVar1 + 0x10);
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  local_18 = 0;
  local_10 = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return param_2;
}



// FUNCTION 140d5b870 FUN_140d5b870 body=282 status=ok
// SIG undefined FUN_140d5b870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140d5b870(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)*param_1;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  *param_2 = *puVar1;
  lVar2 = puVar1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  FUN_140d66300(param_2 + 2,&local_78);
  lVar2 = local_38;
  if (local_38 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 9,&local_40,4);
  }
  if (param_2[10] != 0) {
    FMemory::Free();
    lVar2 = local_38;
  }
  param_2[10] = lVar2;
  *(undefined4 *)(param_2 + 0xb) = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  FUN_140d65040(&local_78);
  return param_2;
}



// FUNCTION 140d5b990 FUN_140d5b990 body=153 status=ok
// SIG undefined FUN_140d5b990(void)

undefined8 * FUN_140d5b990(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *puVar1;
  lVar3 = puVar1[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_2[2] = *puVar2;
  lVar3 = puVar2[1];
  param_2[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FString::FString(param_2 + 4,puVar2 + 2);
  FString::FString(param_2 + 6,puVar2 + 4);
  FString::FString(param_2 + 8,puVar2 + 6);
  FString::FString(param_2 + 10,puVar2 + 8);
  FString::FString(param_2 + 0xc,puVar2 + 10);
  *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(puVar2 + 0xc);
  return param_2;
}



// FUNCTION 140d5ba30 FUN_140d5ba30 body=226 status=ok
// SIG undefined FUN_140d5ba30(void)

undefined8
FUN_140d5ba30(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_144531518;
    plVar1[1] = param_3;
    plVar1[2] = param_4;
    plVar1[3] = param_5;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_144531560;
  }
  TBaseMulticastDelegate<void>::Add(param_1,param_2,&local_18);
  plVar1 = local_18;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140d5bb20 FUN_140d5bb20 body=230 status=ok
// SIG undefined FUN_140d5bb20(void)

void FUN_140d5bb20(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_2;
    *plVar2 = (longlong)&PTR_GetPoolName_144531740;
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144531788;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140d5bc10 FUN_140d5bc10 body=206 status=ok
// SIG undefined FUN_140d5bc10(void)

undefined8 FUN_140d5bc10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar4 = param_1;
  }
  lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0xa8) * 0x28;
  while( true ) {
    if (lVar4 == lVar1) {
      return 0;
    }
    if ((((*(longlong **)(lVar4 + 8) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))(), cVar3 == '\0')) ||
        (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((*(longlong **)(lVar4 + 8) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x20))(), cVar3 == '\0')) &&
        ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
         (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')))) ||
       ((bVar2 && (cVar3 = (**(code **)**(undefined8 **)(param_2 + 8))
                                     (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar4 + 8)),
                  cVar3 != '\0')))) break;
    lVar4 = lVar4 + 0x28;
  }
  return 1;
}



// FUNCTION 140d5bce0 FUN_140d5bce0 body=214 status=ok
// SIG undefined FUN_140d5bce0(void)

void FUN_140d5bce0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 0x15) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
    return;
  }
  FUN_140d978b0(param_1,param_3 + param_5);
  puVar3 = (undefined8 *)param_1[0x14];
  if ((undefined8 *)param_1[0x14] == (undefined8 *)0x0) {
    puVar3 = param_1;
  }
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 8);
    param_2 = (longlong)puVar3 - param_2;
    do {
      *puVar3 = &PTR_FUN_143f73d18;
      *(undefined8 *)(param_2 + (longlong)puVar2) = *puVar2;
      lVar1 = puVar2[1];
      *(longlong *)(param_2 + 8 + (longlong)puVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *puVar3 = &PTR_FUN_143f740c8;
      puVar3 = puVar3 + 5;
      *(undefined8 *)(param_2 + 0x10 + (longlong)puVar2) = 0;
      *(undefined8 *)(param_2 + 0x18 + (longlong)puVar2) = 0;
      puVar2 = puVar2 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d5bdc0 FUN_140d5bdc0 body=423 status=ok
// SIG undefined FUN_140d5bdc0(void)

longlong FUN_140d5bdc0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x238);
  plVar2 = plVar7 + *(int *)(param_1 + 0x240);
  for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    if ((*plVar7 != 0) && (*(longlong *)(*plVar7 + 0xc0) == param_2)) goto LAB_140d5be3b;
  }
  plVar7 = *(longlong **)(param_1 + 0x248);
  plVar2 = plVar7 + *(int *)(param_1 + 0x250);
  for (; (plVar7 != plVar2 && ((*plVar7 == 0 || (*(longlong *)(*plVar7 + 0xc0) != param_2))));
      plVar7 = plVar7 + 1) {
  }
LAB_140d5be3b:
  lVar3 = FWeakObjectPtr::Get(param_1 + 600);
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_14140f7b0();
  uVar5 = FWeakObjectPtr::Get(param_1 + 600);
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(uVar4,uVar5,0,0,0,0,0,0,0);
  *(longlong *)(lVar3 + 0xc0) = param_2;
  FUN_1404c3560(param_1,lVar3);
  plVar6 = (longlong *)(param_1 + 0x248);
  plVar2 = (longlong *)*plVar6;
  iVar1 = *(int *)(param_1 + 0x250);
  plVar7 = plVar2;
  do {
    if (plVar7 == plVar2 + iVar1) {
LAB_140d5bf2c:
      *(int *)(param_1 + 0x250) = iVar1 + 1;
      if (*(int *)(param_1 + 0x254) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *plVar6) = lVar3;
      return lVar3;
    }
    if (*plVar7 == lVar3) {
      if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) != -1) {
        return lVar3;
      }
      goto LAB_140d5bf2c;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 140d5bf70 FUN_140d5bf70 body=472 status=ok
// SIG undefined FUN_140d5bf70(void)

longlong * FUN_140d5bf70(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  plVar1 = (longlong *)(param_1 + 0x238);
  plVar10 = (longlong *)*plVar1;
  plVar8 = plVar10 + *(int *)(param_1 + 0x240);
  for (; plVar10 != plVar8; plVar10 = plVar10 + 1) {
    if ((*plVar10 != 0) && (*(longlong *)(*plVar10 + 0xc0) == param_2)) goto LAB_140d5bff1;
  }
  plVar10 = *(longlong **)(param_1 + 0x248);
  plVar8 = plVar10 + *(int *)(param_1 + 0x250);
  for (; (plVar10 != plVar8 && ((*plVar10 == 0 || (*(longlong *)(*plVar10 + 0xc0) != param_2))));
      plVar10 = plVar10 + 1) {
  }
LAB_140d5bff1:
  lVar5 = FWeakObjectPtr::Get(param_1 + 600);
  if (lVar5 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar6 = UXSparseGridManager::GetPrivateStaticClass();
    uVar7 = FWeakObjectPtr::Get(param_1 + 600);
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    plVar8 = (longlong *)FUN_1417985e0(uVar6,uVar7,0,0,0,0,0,0,0);
    plVar8[0x18] = param_2;
    FUN_1404c3b70(param_1,plVar8);
    cVar4 = (**(code **)(*plVar8 + 0x2d0))(plVar8,param_3,param_4);
    if (cVar4 == '\0') {
      (**(code **)(*plVar8 + 0x288))(plVar8);
    }
    else {
      puVar3 = (undefined8 *)*plVar1;
      iVar2 = *(int *)(param_1 + 0x240);
      for (puVar9 = puVar3; puVar9 != puVar3 + iVar2; puVar9 = puVar9 + 1) {
        if ((longlong *)*puVar9 == plVar8) {
          if ((int)((longlong)puVar9 - (longlong)puVar3 >> 3) != -1) {
            return plVar8;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x240) = iVar2 + 1;
      if (*(int *)(param_1 + 0x244) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(longlong **)((longlong)iVar2 * 8 + *plVar1) = plVar8;
    }
  }
  return plVar8;
}



// FUNCTION 140d5c150 FUN_140d5c150 body=546 status=ok
// SIG undefined FUN_140d5c150(void)

int * FUN_140d5c150(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  void *_Src;
  void *_Dst;
  bool bVar9;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x50);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (void *)((longlong)iVar8 * 0x50 + *param_1);
  FUN_140d5b770(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x48) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d76ae0(param_1,local_res8,_Src);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)local_res8[0] * 0x50 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)_Dst + 0x38);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)_Dst + 0x28);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x48);
      TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140d5c349;
    }
  }
  cVar4 = FUN_140d6f810(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 != '\0') goto LAB_140d5c349;
  iVar8 = *param_2;
  if (*(longlong **)((longlong)_Src + 8) == (longlong *)0x0) {
LAB_140d5c2df:
    bVar3 = false;
  }
  else {
    cVar4 = (**(code **)(**(longlong **)((longlong)_Src + 8) + 0x20))();
    if (cVar4 == '\0') goto LAB_140d5c2df;
    bVar3 = true;
  }
  if (bVar3) {
    uVar6 = GetTypeHash(*(undefined8 *)((longlong)_Src + 8));
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar6 = (int)param_1[9] - 1U & uVar6;
  *(uint *)((longlong)_Src + 0x4c) = uVar6;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  *(undefined4 *)((longlong)_Src + 0x48) =
       *(undefined4 *)
        ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar8;
LAB_140d5c349:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 140d5c380 FUN_140d5c380 body=520 status=ok
// SIG undefined FUN_140d5c380(void)

int * FUN_140d5c380(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  void *_Src;
  void *_Dst;
  bool bVar9;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar8 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (void *)((longlong)iVar8 * 0x40 + *param_1);
  FUN_140d5b800(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x38) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d2cd70(param_1,local_res8,_Src);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)local_res8[0] * 0x40 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)_Dst + 0x28);
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140d5c566;
    }
  }
  cVar5 = FUN_140d29bf0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 != '\0') goto LAB_140d5c566;
  iVar8 = *param_2;
  if (*(longlong **)((longlong)_Src + 8) == (longlong *)0x0) {
LAB_140d5c4fc:
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(**(longlong **)((longlong)_Src + 8) + 0x20))();
    if (cVar5 == '\0') goto LAB_140d5c4fc;
    bVar4 = true;
  }
  if (bVar4) {
    uVar6 = GetTypeHash(*(undefined8 *)((longlong)_Src + 8));
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar6 = (int)param_1[9] - 1U & uVar6;
  *(uint *)((longlong)_Src + 0x3c) = uVar6;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  *(undefined4 *)((longlong)_Src + 0x38) =
       *(undefined4 *)
        ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar8;
LAB_140d5c566:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 140d5c590 FUN_140d5c590 body=937 status=ok
// SIG undefined FUN_140d5c590(void)

int * FUN_140d5c590(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  void *_Dst;
  undefined8 *_Src;
  bool bVar16;
  int local_68 [2];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar14 * 0x20 + 4 + *param_1);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar12 +
                    (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar10 = *puVar10 | 1 << ((byte)iVar14 & 0x1f);
  puVar11 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)iVar14 * 0x20 + *param_1);
  *_Src = *puVar11;
  lVar4 = puVar11[1];
  _Src[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  bVar16 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar12 = (longlong *)_Src[1];
    local_50 = *_Src;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_48 = plVar12;
    FUN_1405499a0(param_1,local_68,&local_50);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar12 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)();
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    bVar16 = local_68[0] != -1;
    if (bVar16) {
      _Dst = (void *)((longlong)local_68[0] * 0x20 + *param_1);
      plVar12 = *(longlong **)((longlong)_Dst + 8);
      iVar14 = local_68[0];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar12 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar14 = local_68[0];
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            iVar14 = local_68[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar2 = *param_2;
      bVar6 = (byte)iVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar2;
      }
      puVar13 = (undefined4 *)((longlong)iVar2 * 0x20 + *param_1);
      *puVar13 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar13[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar2;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar10 = (uint *)((longlong)plVar12 +
                        (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar10 = *puVar10 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_140d5c907;
    }
  }
  cVar7 = TSet<TTuple<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>_>,TDefaultMapHashableKeyFuncs<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    plVar12 = (longlong *)_Src[1];
    iVar14 = *param_2;
    plVar5 = (longlong *)*_Src;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_60 = plVar5;
    local_58 = plVar12;
    uVar8 = (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *plVar5;
    if (uVar8 < 4) {
      pbVar9 = (byte *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar8 = (uint)*pbVar9;
    }
    else if (uVar8 < 8) {
      puVar10 = (uint *)(**(code **)(lVar4 + 0x10))();
      uVar8 = *puVar10;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar8 = (int)*puVar11 + (int)((ulonglong)*puVar11 >> 0x20) * 0x17;
    }
    plVar5 = local_58;
    *(uint *)((longlong)_Src + 0x1c) = (int)param_1[9] - 1U & uVar8;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar12 + 1;
      lVar4 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar12 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4) =
         iVar14;
  }
LAB_140d5c907:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 140d5c940 Emplace<TKeyInitializer<FName_const_&>_> body=419 status=ok
// SIG undefined Emplace<TKeyInitializer<FName_const_&>_>(void)

int * TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TKeyInitializer<FName_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar3 = (longlong *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  lVar1 = *plVar3;
  *local_30 = lVar1;
  *(undefined4 *)(local_30 + 1) = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar1) goto LAB_140d5ca0c;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140d5ca0c:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_140d5cabb;
    }
  }
  cVar2 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140d5cabb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140d5caf0 FUN_140d5caf0 body=419 status=ok
// SIG undefined FUN_140d5caf0(void)

int * FUN_140d5caf0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar3 = (longlong *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  lVar1 = *plVar3;
  *local_30 = lVar1;
  local_30[1] = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar1) goto LAB_140d5cbbc;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140d5cbbc:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_140d5cc6b;
    }
  }
  cVar2 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140d5cc6b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140d5cca0 FUN_140d5cca0 body=441 status=ok
// SIG undefined FUN_140d5cca0(void)

int * FUN_140d5cca0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  void *_Dst;
  char cVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_48 [2];
  uint *local_40;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_48);
  *param_2 = local_48[0];
  local_30 = 0;
  local_28 = 0;
  local_38[0] = 0;
  *local_40 = *(uint *)*param_3;
  FVariantData::FVariantData(local_40 + 2,local_38);
  FVariantData::Empty(local_38);
  local_40[8] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_40) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar3 * 0x28) == *local_40) goto LAB_140d5cd7d;
          iVar3 = *(int *)(*param_1 + 0x20 + (longlong)iVar3 * 0x28);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_140d5cd7d:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x28);
      FVariantData::Empty((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_40,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_140d5ce2e;
    }
  }
  cVar1 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_40;
    local_40[9] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_40[8] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_140d5ce2e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 140d5ce60 FUN_140d5ce60 body=666 status=ok
// SIG undefined FUN_140d5ce60(void)

int * FUN_140d5ce60(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool local_res8;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar8 = 0xffffffff;
  iVar7 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_48 = 0;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  local_40 = 0;
  puVar11 = (uint *)((longlong)plVar3 +
                    (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar10 & 0x1f);
  puVar11 = (uint *)((longlong)iVar10 * 0x20 + *param_1);
  *puVar11 = *(uint *)*param_3;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
  puVar11[6] = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar10 != 1) {
    iVar6 = iVar7;
    if (iVar10 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar5 != -1) {
        do {
          iVar6 = iVar5;
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *puVar11) break;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
          iVar6 = iVar7;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>((longlong)_Dst + 8)
      ;
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      iVar7 = *param_2;
      bVar1 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar7;
      }
      puVar4 = (undefined4 *)((longlong)iVar7 * 0x20 + *param_1);
      *puVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar4[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar3 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar3 == (longlong *)0x0) {
        plVar3 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar3 +
                        (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_140d5d0d6;
    }
  }
  cVar2 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar2 == '\0') {
    uVar9 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar9;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar3 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_140d5d0d6:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d5d100 Emplace<TKeyInitializer<int_const_&>_> body=391 status=ok
// SIG undefined Emplace<TKeyInitializer<int_const_&>_>(void)

int * TSet<TTuple<int,FVisitedCoordinates_*>,TDefaultMapHashableKeyFuncs<int,FVisitedCoordinates_*,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<int_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (uint *)*param_3;
  bVar7 = false;
  *param_2 = local_38[0];
  *local_30 = *puVar1;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x18) == *local_30) goto LAB_140d5d1bb;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140d5d1bb:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_140d5d25f;
    }
  }
  cVar2 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[5] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[4] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140d5d25f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140d5d290 FUN_140d5d290 body=614 status=ok
// SIG undefined FUN_140d5d290(void)

uint * FUN_140d5d290(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  void *_Src;
  void *_Dst;
  bool bVar9;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar7 + 1)) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,uVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar7 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)(int)uVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x90) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
  _Src = (void *)((longlong)(int)uVar7 * 0x90 + *param_1);
  FUN_140d5b650(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x88) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d76a00(param_1,local_res8,_Src);
    uVar7 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar9 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar9);
    if (bVar9) {
      _Dst = (void *)(lVar8 * 0x90 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x80) = 0;
      if (*(longlong *)((longlong)_Dst + 0x78) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x38);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      FUN_1404bf980(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x88);
      TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar7;
      goto LAB_140d5d4c3;
    }
  }
  cVar3 = FUN_140d6f760(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 != '\0') goto LAB_140d5d4c3;
  uVar7 = *param_2;
  if (*(longlong **)((longlong)_Src + 8) == (longlong *)0x0) {
LAB_140d5d452:
    bVar9 = false;
  }
  else {
    cVar3 = (**(code **)(**(longlong **)((longlong)_Src + 8) + 0x20))();
    if (cVar3 == '\0') goto LAB_140d5d452;
    bVar9 = true;
  }
  if (bVar9) {
    uVar5 = GetTypeHash(*(undefined8 *)((longlong)_Src + 8));
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar5 = (int)param_1[9] - 1U & uVar5;
  *(uint *)((longlong)_Src + 0x8c) = uVar5;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  *(undefined4 *)((longlong)_Src + 0x88) =
       *(undefined4 *)
        ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = uVar7;
LAB_140d5d4c3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140d5d500 FUN_140d5d500 body=983 status=ok
// SIG undefined FUN_140d5d500(void)

int * FUN_140d5d500(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 *_Src;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  bool local_res8;
  int local_78;
  int local_74;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  
  uVar13 = 0xffffffff;
  iVar15 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar9 = *puVar9 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar12 * 0x28);
  puVar10 = (undefined8 *)*param_3;
  *_Src = *puVar10;
  lVar4 = puVar10[1];
  _Src[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  _Src[2] = 0;
  _Src[3] = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar11 = (longlong *)_Src[1];
    local_50 = *_Src;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_48 = plVar11;
    FUN_140549810(param_1,&local_78,&local_50);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar11 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)();
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    local_res8 = local_78 != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_78 * 0x28);
      FLoadingScreenAttributes::~FLoadingScreenAttributes(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      iVar15 = *param_2;
      bVar6 = (byte)iVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar15;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + (longlong)iVar15 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar15 * 0x28) = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar15;
      plVar11 = (longlong *)param_1[4];
      *param_2 = local_78;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar9 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar9 = *puVar9 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_140d5d8a5;
    }
  }
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar14) {
    uVar7 = (uVar14 >> 1) + 8;
    local_74 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> local_74 == 0; local_74 = local_74 + -1) {
      }
    }
    iVar15 = 0x20;
    if (uVar7 != 0) {
      iVar15 = 0x1f - local_74;
    }
    uVar7 = (uVar14 >> 1) + 7;
    local_70 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> local_70 == 0; local_70 = local_70 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar15 = 1;
    }
    else {
      iVar15 = 1 << (~(byte)((iVar15 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)local_70) & 0x1f);
    }
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    iVar15 = *param_2;
    plVar11 = (longlong *)_Src[1];
    plVar5 = (longlong *)*_Src;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_68 = plVar11;
    local_60 = plVar5;
    local_58 = plVar11;
    uVar14 = (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *plVar5;
    if (uVar14 < 4) {
      pbVar8 = (byte *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar14 = (uint)*pbVar8;
    }
    else if (uVar14 < 8) {
      puVar9 = (uint *)(**(code **)(lVar4 + 0x10))();
      uVar14 = *puVar9;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(lVar4 + 0x10))(plVar5);
      uVar14 = (int)*puVar10 + (int)((ulonglong)*puVar10 >> 0x20) * 0x17;
    }
    plVar5 = local_58;
    *(uint *)((longlong)_Src + 0x24) = (int)param_1[9] - 1U & uVar14;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_68 + 1;
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar11 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x24)) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x24)) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    FUN_14055d6e0(param_1);
  }
LAB_140d5d8a5:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d5d8e0 FUN_140d5d8e0 body=835 status=ok
// SIG undefined FUN_140d5d8e0(void)

int * FUN_140d5d8e0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined4 uVar15;
  void *_Dst;
  undefined8 *_Src;
  bool local_res8;
  int local_68 [2];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar14 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar13 +
                    (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar14 * 0x68 + *param_1);
  FUN_140d5b870(param_3,_Src);
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar13 = (longlong *)_Src[1];
    local_48 = *_Src;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_40 = plVar13;
    FUN_140549690(param_1,local_68,&local_48);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar13 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    local_res8 = local_68[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_68[0] * 0x68 + *param_1);
      FCallPixelHandler_GameThread::~FCallPixelHandler_GameThread(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x60);
      iVar14 = *param_2;
      bVar4 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x68 + *param_1) = iVar14;
      }
      puVar9 = (undefined4 *)((longlong)iVar14 * 0x68 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar9[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar13 = (longlong *)param_1[4];
      *param_2 = local_68[0];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar13 +
                        (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140d5dbf1;
    }
  }
  cVar6 = TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    iVar14 = *param_2;
    plVar13 = (longlong *)_Src[1];
    plVar3 = (longlong *)*_Src;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_60 = plVar13;
    local_58 = plVar3;
    local_50 = plVar13;
    uVar8 = (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar5 = *plVar3;
    if (uVar8 < 4) {
      pbVar10 = (byte *)(**(code **)(lVar5 + 0x10))(plVar3);
      uVar8 = (uint)*pbVar10;
    }
    else if (uVar8 < 8) {
      puVar11 = (uint *)(**(code **)(lVar5 + 0x10))();
      uVar8 = *puVar11;
    }
    else {
      puVar12 = (undefined8 *)(**(code **)(lVar5 + 0x10))(plVar3);
      uVar8 = (int)*puVar12 + (int)((ulonglong)*puVar12 >> 0x20) * 0x17;
    }
    plVar3 = local_50;
    *(uint *)((longlong)_Src + 100) = (int)param_1[9] - 1U & uVar8;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_60 + 1;
      lVar5 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar13 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 100)) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 100)) * 4) =
         iVar14;
  }
LAB_140d5dbf1:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d5dc30 FUN_140d5dc30 body=693 status=ok
// SIG undefined FUN_140d5dc30(void)

int * FUN_140d5dc30(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *_Dst;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  bool local_res8;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar10 = 0xffffffff;
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_48 = 0;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  local_40 = 0;
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar12 * 0x20 + *param_1);
  *plVar13 = *(longlong *)*param_3;
  plVar13[1] = 0;
  plVar13[2] = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
  *(undefined4 *)(plVar13 + 3) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar12 != 1) {
    lVar2 = *plVar13;
    iVar8 = iVar9;
    if (iVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *param_1) == lVar2) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>((longlong)_Dst + 8)
      ;
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x18);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      puVar6 = (undefined4 *)((longlong)iVar9 * 0x20 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140d5dec1;
    }
  }
  cVar4 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x1c) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_140d5dec1:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d5def0 FUN_140d5def0 body=785 status=ok
// SIG undefined FUN_140d5def0(void)

int * FUN_140d5def0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  void *_Dst;
  uint uVar13;
  char cVar14;
  undefined4 uVar15;
  undefined8 *_Src;
  bool local_res8;
  int local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  
  iVar12 = 1;
  uVar15 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar10 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar10 & 0x1f);
  lVar4 = *local_res18;
  _Src = (undefined8 *)((longlong)iVar10 * 0x40 + *param_1);
  puVar5 = (undefined8 *)local_res18[1];
  *_Src = &PTR_FUN_143f73d18;
  _Src[1] = *(undefined8 *)(lVar4 + 8);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  _Src[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  local_res8 = false;
  *_Src = &PTR_FUN_143f740c8;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = *puVar5;
  _Src[6] = puVar5[1];
  puVar5[1] = 0;
  *puVar5 = 0;
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d2cd70(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x40 + *param_1);
      FUN_140d23320(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      iVar12 = *param_2;
      bVar6 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar12;
      }
      puVar11 = (undefined4 *)((longlong)iVar12 * 0x40 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar11[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar9 = (longlong *)param_1[4];
      *param_2 = local_res10[0];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar2 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_140d5e1e1;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar8 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar14 = '\0';
    if (uVar8 != 0) {
      iVar10 = 0x1f - iVar12;
    }
    uVar8 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar14 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    if (((longlong *)_Src[1] == (longlong *)0x0) ||
       (cVar14 = (**(code **)(*(longlong *)_Src[1] + 0x20))(), cVar14 == '\0')) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      uVar13 = GetTypeHash(_Src[1]);
    }
    else {
      uVar13 = 0xffffffff;
    }
    uVar13 = (int)param_1[9] - 1U & uVar13;
    *(uint *)((longlong)_Src + 0x3c) = uVar13;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar12;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_140d47e60(param_1);
    local_res20 = param_4;
  }
LAB_140d5e1e1:
  if (local_res20 != 0) {
    *(bool *)local_res20 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d5e210 FUN_140d5e210 body=750 status=ok
// SIG undefined FUN_140d5e210(void)

int * FUN_140d5e210(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  void *_Dst;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  bool local_res8;
  
  iVar11 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar12 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
  uVar2 = param_3[1];
  *plVar12 = *(longlong *)*param_3;
  FVariantData::FVariantData(plVar12 + 1,uVar2);
  *(undefined4 *)(plVar12 + 4) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    lVar3 = *plVar12;
    iVar9 = iVar14;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x28) == lVar3) break;
          iVar10 = *(int *)(*param_1 + 0x20 + (longlong)iVar10 * 0x28);
          iVar9 = iVar14;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)iVar9 * 0x28);
      FVariantData::Empty((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar12,0x20);
      iVar11 = *param_2;
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + (longlong)iVar11 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar3 + 4 + (longlong)iVar11 * 0x28) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140d5e4d5;
    }
  }
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar8 = '\0';
    if (uVar6 != 0) {
      iVar11 = 0x1f - iVar14;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar8 = '\x1f' - (char)iVar14;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar12 >> 0x20) + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x24) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140d5e4d5:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140d5e500 FUN_140d5e500 body=726 status=ok
// SIG undefined FUN_140d5e500(void)

int * FUN_140d5e500(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x50);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  plVar12 = (longlong *)((longlong)iVar8 * 0x50 + *param_1);
  *plVar12 = *(longlong *)*param_3;
  local_58 = *puVar3;
  local_50 = puVar3[1];
  local_48 = puVar3[2];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_40 = *(undefined1 *)(puVar3 + 3);
  local_38 = puVar3[4];
  FUN_140d642f0(plVar12 + 1,&local_58);
  *(undefined4 *)(plVar12 + 9) = 0xffffffff;
  bVar13 = false;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    lVar4 = *plVar12;
    if (uVar11 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x50) == lVar4) goto LAB_140d5e69f;
          iVar8 = *(int *)(*param_1 + 0x48 + (longlong)iVar8 * 0x50);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_140d5e69f:
    bVar13 = iVar8 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar8 * 0x50 + *param_1);
      FUN_140d65de0((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar12,0x48);
      TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_140d5e7ac;
    }
  }
  if (3 < uVar11) {
    uVar6 = (uVar11 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar10 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar9;
    }
    uVar6 = (uVar11 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar11 = (int)((ulonglong)*plVar12 >> 0x20) + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x4c) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 9) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,FLevelStreamingSharedTrackData::FVisibilityData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140d5e7ac:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 140d5e7e0 Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_> body=407 status=ok
// SIG undefined Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>(void)

int * TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar5;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  local_30[4] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x18) == *local_30) goto LAB_140d5e8ab;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_140d5e8ab:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_140d5e94f;
    }
  }
  cVar2 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[5] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[4] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_140d5e94f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140d5e980 FUN_140d5e980 body=588 status=ok
// SIG undefined FUN_140d5e980(void)

int * FUN_140d5e980(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  void *_Dst;
  undefined8 *_Src;
  bool bVar11;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar10 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar10 & 0x1f);
  lVar4 = *param_3;
  _Src = (undefined8 *)((longlong)iVar10 * 0x40 + *param_1);
  puVar5 = (undefined8 *)param_3[1];
  *_Src = &PTR_FUN_143f73d18;
  _Src[1] = *(undefined8 *)(lVar4 + 8);
  lVar4 = *(longlong *)(lVar4 + 0x10);
  _Src[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *_Src = &PTR_FUN_143f740c8;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = *puVar5;
  lVar4 = puVar5[1];
  _Src[6] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  bVar11 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_140d2cd70(param_1,local_res8,_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)local_res8[0] * 0x40 + *param_1);
      FUN_140d23320(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140d5eba9;
    }
  }
  cVar7 = FUN_140d29bf0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 != '\0') goto LAB_140d5eba9;
  iVar10 = *param_2;
  if ((longlong *)_Src[1] == (longlong *)0x0) {
LAB_140d5eb3e:
    bVar6 = false;
  }
  else {
    cVar7 = (**(code **)(*(longlong *)_Src[1] + 0x20))();
    if (cVar7 == '\0') goto LAB_140d5eb3e;
    bVar6 = true;
  }
  if (bVar6) {
    uVar8 = GetTypeHash(_Src[1]);
  }
  else {
    uVar8 = 0xffffffff;
  }
  uVar8 = (int)param_1[9] - 1U & uVar8;
  *(uint *)((longlong)_Src + 0x3c) = uVar8;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  *(undefined4 *)(_Src + 7) =
       *(undefined4 *)
        ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) = iVar10;
LAB_140d5eba9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}


