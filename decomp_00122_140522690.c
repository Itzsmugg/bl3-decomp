// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140522690 FUN_140522690 body=791 status=ok
// SIG undefined FUN_140522690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140522690(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [128];
  longlong local_108;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar1 = (longlong *)(param_1 + 0x18);
  if (param_2 == '\0') {
    if (*plVar1 != 0) {
      FUN_14051a840(param_1,0,0);
    }
  }
  else {
    uStack_1f0 = (longlong *)param_4[1];
    local_1f8 = *param_4;
    if (uStack_1f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_1f0 + 1) = (int)uStack_1f0[1] + 1;
      UNLOCK();
    }
    if (&local_1f8 != plVar1) {
      local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
      uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
      lVar8 = *plVar1;
      plVar3 = *(longlong **)(param_1 + 0x20);
      local_198 = (undefined4)local_1f8;
      uStack_194 = local_1f8._4_4_;
      uStack_190 = (undefined4)uStack_1f0;
      uStack_18c = uStack_1f0._4_4_;
      *(undefined4 *)plVar1 = (undefined4)local_1f8;
      *(undefined4 *)(param_1 + 0x1c) = local_1f8._4_4_;
      *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_1f0;
      *(undefined4 *)(param_1 + 0x24) = uStack_1f0._4_4_;
      local_1f8 = lVar8;
      uStack_1f0 = plVar3;
    }
    plVar1 = uStack_1f0;
    if (uStack_1f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = uStack_1f0 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*uStack_1f0)(uStack_1f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*uStack_1f0 + 8))(uStack_1f0,1);
        }
      }
    }
    (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,local_1e0);
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d8 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
    plVar1 = (longlong *)*param_4;
    uVar6 = (**(code **)(*plVar1 + 0x10))(plVar1,local_1b0);
    puVar7 = (undefined8 *)FText::ToString(uVar6);
    puVar10 = &DAT_143f3eda8;
    if (*(int *)(puVar7 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar7;
    }
    lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,puVar9);
    local_1e8 = *(undefined8 *)(lVar8 + 0x88);
    uVar6 = (**(code **)(*plVar1 + 0x18))(plVar1,local_1c8);
    puVar7 = (undefined8 *)FText::ToString(uVar6);
    if (*(int *)(puVar7 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar7;
    }
    lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_188,puVar10);
    uVar6 = *(undefined8 *)(lVar8 + 0x88);
    lVar8 = **(longlong **)(param_1 + 0x10);
    cVar4 = (**(code **)(*plVar1 + 0x30))(plVar1);
    iVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    local_200 = local_1e8;
    local_208 = *(undefined4 *)(param_1 + 0x28);
    (**(code **)(lVar8 + 0xa0))(*(undefined8 *)(param_1 + 0x10),iVar5 == 4,cVar4 != '\0',uVar6);
    if (local_108 != 0) {
      FMemory::Free();
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar2 = (int *)((longlong)local_1c0 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a8 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar2 = (int *)((longlong)local_1a8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
  }
  plVar1 = (longlong *)param_4[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar1 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 1405229b0 FUN_1405229b0 body=138 status=ok
// SIG undefined FUN_1405229b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405229b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar1 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_b8,puVar2);
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0xf0))
              (*(longlong **)(param_1 + 0x1e0),*(undefined8 *)(lVar1 + 0x88),0);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140522a40 FUN_140522a40 body=1927 status=ok
// SIG undefined FUN_140522a40(void)

undefined8 FUN_140522a40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_f8;
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
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  FUN_1404b6a10();
  plVar9 = *(longlong **)(param_1 + 0x150);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,1);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  plVar9 = *(longlong **)(param_1 + 0x148);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,1);
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  plVar9 = (longlong *)(param_1 + 0x78);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_f0 = (longlong *)0x0;
    if (plVar9 != &local_f8) {
      *plVar9 = 0;
      local_f8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,&local_f0);
      plVar9 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_f0 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0x88);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_e0 = (longlong *)0x0;
    if (plVar9 != &local_e8) {
      *plVar9 = 0;
      local_e8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x90,&local_e0);
      plVar9 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_e0 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0x98);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_d0 = (longlong *)0x0;
    if (plVar9 != &local_d8) {
      *plVar9 = 0;
      local_d8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa0,&local_d0);
      plVar9 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_d0 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0xa8);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_c0 = (longlong *)0x0;
    if (plVar9 != &local_c8) {
      *plVar9 = 0;
      local_c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb0,&local_c0);
      plVar9 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_c0 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 200);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_b0 = (longlong *)0x0;
    if (plVar9 != &local_b8) {
      *plVar9 = 0;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd0,&local_b0);
      plVar9 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0xb8);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xc0) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_a0 = (longlong *)0x0;
    if (plVar9 != &local_a8) {
      *plVar9 = 0;
      local_a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc0,&local_a0);
      plVar9 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a0 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0xd8);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xe0) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_90 = (longlong *)0x0;
    if (plVar9 != &local_98) {
      *plVar9 = 0;
      local_98 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe0,&local_90);
      plVar9 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_90 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0xe8);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xf0) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_80 = (longlong *)0x0;
    if (plVar9 != &local_88) {
      *plVar9 = 0;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf0,&local_80);
      plVar9 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0xf8);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0x100) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x100) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_70 = (longlong *)0x0;
    if (plVar9 != &local_78) {
      *plVar9 = 0;
      local_78 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x100,&local_70);
      plVar9 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_70 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0x108);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x110) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_60 = (longlong *)0x0;
    if (plVar9 != &local_68) {
      *plVar9 = 0;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x110,&local_60);
      plVar9 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0x118);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0x120) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x120) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_50 = (longlong *)0x0;
    if (plVar9 != &local_58) {
      *plVar9 = 0;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x120,&local_50);
      plVar9 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0x128);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0x130) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x130) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_40 = (longlong *)0x0;
    if (plVar9 != &local_48) {
      *plVar9 = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x130,&local_40);
      plVar9 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0x138);
  if (*plVar9 != 0) {
    if (*(longlong *)(param_1 + 0x140) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x140) + 8);
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 0;
      }
      UNLOCK();
    }
    local_30 = (longlong *)0x0;
    if (plVar9 != &local_38) {
      *plVar9 = 0;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x140,&local_30);
      plVar9 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
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
  uVar6 = FUN_14168dc80();
  puVar7 = (undefined8 *)FName::FName(local_res8,"Sockets",1);
  cVar5 = FModuleManager::IsModuleLoaded(uVar6,*puVar7);
  if (cVar5 != '\0') {
    puVar7 = (undefined8 *)FName::FName(local_res10,"Sockets",1);
    uVar6 = *puVar7;
    uVar8 = FUN_14168dc80();
    plVar9 = (longlong *)FModuleManager::GetModule(uVar8,uVar6);
    lVar4 = *plVar9;
    puVar7 = (undefined8 *)FName::FName(local_res18,L"STEAM",1);
    (**(code **)(lVar4 + 0x58))(plVar9,*puVar7);
  }
  if (DAT_146853150 != (longlong *)0x0) {
    (**(code **)(*DAT_146853150 + 0x10))();
    if (DAT_146853150 != (longlong *)0x0) {
      (**(code **)*DAT_146853150)(DAT_146853150,1);
    }
    DAT_146853150 = (longlong *)0x0;
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    SteamAPI_Shutdown();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return 1;
}



// FUNCTION 1405231d0 FUN_1405231d0 body=389 status=ok
// SIG undefined FUN_1405231d0(void)

void FUN_1405231d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *local_18;
  uint local_10;
  
  uVar3 = *(uint *)(param_1 + 0x16);
  puVar7 = (undefined8 *)0x0;
  _Src = (void *)param_1[0x15];
  local_18 = (undefined8 *)0x0;
  local_10 = uVar3;
  if (uVar3 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,uVar3,0);
    puVar7 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)(int)uVar3 << 3);
    uVar8 = (ulonglong)local_10;
    puVar5 = puVar7;
    if (0 < (int)local_10) {
      do {
        (**(code **)(*param_1 + 0x28))(param_1,*puVar5);
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar8 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x15,0);
  }
  FUN_140506510(param_1 + 0x17,0);
  FUN_140506510(param_1 + 0x23,0);
  iVar9 = (int)param_1[0x8c4];
  plVar6 = (longlong *)param_1[0x8c3];
  if ((longlong *)param_1[0x8c3] == (longlong *)0x0) {
    plVar6 = param_1 + 0x33;
  }
  if (iVar9 != 0) {
    plVar6 = plVar6 + 2;
    do {
      *plVar6 = (longlong)&PTR_FUN_143f73cd8;
      plVar4 = (longlong *)plVar6[2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar6[-1] = (longlong)&PTR_FUN_143f9a360;
      plVar6 = plVar6 + 0x89;
      iVar9 = iVar9 + -1;
      puVar7 = local_18;
    } while (iVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  if (*(int *)((longlong)param_1 + 0x4624) != 0) {
    FUN_1405204e0(param_1 + 0x33,0);
  }
  if (puVar7 != (undefined8 *)0x0) {
    FMemory::Free(puVar7);
  }
  return;
}



// FUNCTION 140523360 FUN_140523360 body=76 status=ok
// SIG undefined FUN_140523360(void)

void FUN_140523360(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)FName::FName(local_res8,L"STEAM",1);
  if ((*(longlong *)(param_1 + 0x588) == *plVar1) && (*(longlong *)(param_1 + 0x560) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x560) + 0x58) = 1;
  }
  FUN_1425d1e10(param_1);
  return;
}



// FUNCTION 1405233b0 FUN_1405233b0 body=111 status=ok
// SIG undefined FUN_1405233b0(void)

void FUN_1405233b0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  uVar1 = FName::FName(local_res8,L"STEAM",1);
  plVar2 = (longlong *)FUN_1419c6b80(uVar1);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 140523420 FUN_140523420 body=398 status=ok
// SIG undefined FUN_140523420(void)

undefined8 FUN_140523420(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_res10;
  
  puVar10 = *(undefined8 **)(param_2 + 0xf0);
  puVar9 = puVar10 + (longlong)*(int *)(param_2 + 0xf8) * 2;
  if (puVar10 != puVar9) {
    plVar4 = (longlong *)(param_2 + 0x100);
    do {
      puVar5 = (undefined8 *)*plVar4;
      iVar1 = *(int *)(param_2 + 0x108);
      uVar2 = *puVar10;
      for (puVar7 = puVar5; puVar7 != puVar5 + (longlong)iVar1 * 2; puVar7 = puVar7 + 2) {
        cVar3 = (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,uVar2);
        if (cVar3 != '\0') {
          if ((int)((longlong)puVar7 - (longlong)puVar5 >> 4) != -1) goto LAB_1405234f2;
          break;
        }
      }
      iVar1 = *(int *)(param_2 + 0x108);
      *(int *)(param_2 + 0x108) = iVar1 + 1;
      if (*(int *)(param_2 + 0x10c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar4);
      *puVar5 = *puVar10;
      lVar6 = puVar10[1];
      puVar5[1] = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
LAB_1405234f2:
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar9);
  }
  local_res10 = 0;
  plVar4 = (longlong *)FUN_1419c6b80(&local_res10);
  if ((plVar4 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar4 + 0x78))(plVar4), cVar3 != '\0'))
  {
    *(undefined4 *)(param_2 + 0x110) = 4;
    if ((*(char *)(param_2 + 0x39) == '\0') &&
       ((DAT_146853160 != '\0' && (*(char *)(param_1 + 0x2fc) != '\0')))) {
      *(undefined1 *)(param_1 + 0x2fc) = 0;
      lVar6 = *(longlong *)(param_1 + 800);
      lVar8 = (longlong)*(int *)(param_1 + 0x328) * 0x20 + lVar6;
      for (; lVar6 != lVar8; lVar6 = lVar6 + 0x20) {
        *(undefined4 *)(lVar6 + 0x10) = 5;
      }
      FUN_1405233b0();
    }
    return 0;
  }
  return 0x80004005;
}



// FUNCTION 1405235b0 FUN_1405235b0 body=90 status=ok
// SIG undefined FUN_1405235b0(void)

undefined8 FUN_1405235b0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x31) == '\0') {
        FUN_14052b640(param_1);
        if ((*(char *)(param_1 + 0x31) == '\0') && (*(char *)(param_1 + 0x30) == '\0')) {
          FVoiceEngineSteam::StartRecording(param_1);
        }
        *(undefined1 *)(param_1 + 0x31) = 1;
      }
      return 0;
    }
  }
  return 0x80004005;
}



// FUNCTION 140523610 FUN_140523610 body=184 status=ok
// SIG undefined FUN_140523610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140523610(longlong *param_1)

{
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_58 = 0xffffffff;
  local_d0 = 0;
  local_b8 = 0;
  local_d8 = &PTR_FUN_143f769a8;
  local_a8 = 0;
  local_b0 = &PTR_FUN_143f769a0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 9999;
  (**(code **)(*param_1 + 0x370))(0,2,&local_d8);
  FUN_1404bf650(&local_d8);
  return;
}



// FUNCTION 1405236d0 FUN_1405236d0 body=73 status=ok
// SIG undefined FUN_1405236d0(void)

void FUN_1405236d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1,param_2);
    if (cVar2 != '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x11) = 1;
    }
  }
  return;
}



// FUNCTION 140523720 StartRecording body=78 status=ok
// SIG undefined StartRecording(void)

void FVoiceEngineSteam::StartRecording(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
    lVar1 = **(longlong **)(param_1 + 0x18);
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                       (*(longlong **)(param_1 + 0x10),local_res8);
    (**(code **)(lVar1 + 0xd8))(*(undefined8 *)(param_1 + 0x18),*puVar2,1);
  }
  return;
}



// FUNCTION 140523770 FUN_140523770 body=181 status=ok
// SIG undefined FUN_140523770(void)

void FUN_140523770(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = -0x7fffbffb;
  lVar3 = FUN_140511190();
  if ((lVar3 != 0) && ((*(int *)(lVar3 + 0x110) - 2U & 0xfffffffb) == 0)) {
    if (param_1[0x51] != 0) {
      cVar1 = FUN_140516dc0();
      if ((cVar1 != '\0') && (*(char *)(lVar3 + 0x3a) == '\0')) {
        iVar2 = FUN_140523420(param_1,lVar3);
        goto LAB_1405237f8;
      }
    }
    if (*(char *)(lVar3 + 0x39) == '\0') {
      FUN_1404b6bd0(param_1 + 0x71);
    }
    *(undefined4 *)(lVar3 + 0x110) = 4;
    iVar2 = 0;
  }
LAB_1405237f8:
  (**(code **)(*param_1 + 0x78))(param_1,param_2,(iVar2 != 0) + '\x01');
  return;
}



// FUNCTION 140523830 SteamChatMemberStateChangeString body=320 status=ok
// SIG undefined SteamChatMemberStateChangeString(void)

longlong * SteamChatMemberStateChangeString(longlong *param_1,int param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 1) {
    pwVar1 = L"Join chat";
    uVar3 = 1;
    pwVar4 = L"k_EChatMemberStateChangeEntered";
    pwVar2 = L"\'%i\' %s (%s)";
  }
  else if (param_2 == 2) {
    pwVar1 = L"Left chat";
    uVar3 = 2;
    pwVar4 = L"k_EChatMemberStateChangeLeft";
    pwVar2 = L"\'%i\' %s (%s)";
  }
  else if (param_2 == 4) {
    pwVar1 = L"Chat disconnect";
    uVar3 = 4;
    pwVar4 = L"k_EChatMemberStateChangeDisconnected";
    pwVar2 = L"\'%i\' %s (%s)";
  }
  else if (param_2 == 8) {
    pwVar1 = L"Chat kicked";
    uVar3 = 8;
    pwVar4 = L"k_EChatMemberStateChangeKicked";
    pwVar2 = L"\'%i\' %s (%s)";
  }
  else {
    if (param_2 != 0x10) {
      FString::PrintfImpl(&local_18,L"Unknown EChatMemberStateChange result: %i (check Steam SDK)",
                          param_2);
      goto LAB_14052391d;
    }
    pwVar1 = L"Chat kicked and banned";
    uVar3 = 0x10;
    pwVar4 = L"k_EChatMemberStateChangeBanned";
    pwVar2 = L"\'%i\' %s (%s)";
  }
  FString::PrintfImpl(&local_18,pwVar2,uVar3,pwVar4,pwVar1);
LAB_14052391d:
  if (param_1 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
    return param_1;
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  *param_1 = local_18;
  *(undefined4 *)(param_1 + 1) = local_10;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
  return param_1;
}



// FUNCTION 140523970 FUN_140523970 body=658 status=ok
// SIG undefined FUN_140523970(void)

longlong * FUN_140523970(longlong *param_1,undefined4 param_2)

{
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  *param_1 = 0;
  param_1[1] = 0;
  switch(param_2) {
  case 1:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",1,L"k_EChatRoomEnterResponseSuccess",L"Success")
    ;
    break;
  case 2:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",2,L"k_EChatRoomEnterResponseDoesntExist",
                        L"Chat doesn\'t exist (probably closed)");
    break;
  case 3:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",3,L"k_EChatRoomEnterResponseNotAllowed",
                        L"General Denied - You don\'t have the permissions needed to join the chat")
    ;
    break;
  case 4:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",4,L"k_EChatRoomEnterResponseFull",
                        L"Chat room has reached its maximum size");
    break;
  case 5:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",5,L"k_EChatRoomEnterResponseError",
                        L"Unexpected Error");
    break;
  case 6:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",6,L"k_EChatRoomEnterResponseBanned",
                        L"You are banned from this chat room and may not join");
    break;
  case 7:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",7,L"k_EChatRoomEnterResponseLimited",
                        L"Joining this chat is not allowed because you are a limited user (no value on account)"
                       );
    break;
  case 8:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",8,L"k_EChatRoomEnterResponseClanDisabled",
                        L"Attempt to join a clan chat when the clan is locked or disabled");
    break;
  case 9:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",9,L"k_EChatRoomEnterResponseCommunityBan",
                        L"Attempt to join a chat when the user has a community lock on their account"
                       );
    break;
  case 10:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",10,L"k_EChatRoomEnterResponseMemberBlockedYou",
                        L"Join failed - some member in the chat has blocked you from joining");
    break;
  case 0xb:
    FString::PrintfImpl(&local_18,L"\'%i\' %s (%s)",0xb,L"k_EChatRoomEnterResponseYouBlockedMember",
                        L"Join failed - you have blocked some member already in the chat");
    break;
  default:
    FString::PrintfImpl(&local_18,L"Unknown EChatRoomEnterResponse result: %i (check Steam SDK)",
                        param_2);
  }
  if (param_1 == &local_18) {
    if (local_18 != 0) {
      FMemory::Free();
    }
    return param_1;
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  *param_1 = local_18;
  *(undefined4 *)(param_1 + 1) = local_10;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
  return param_1;
}



// FUNCTION 140523c30 SteamInternal_Init_SteamApps body=39 status=ok
// SIG undefined SteamInternal_Init_SteamApps(void)

void SteamInternal_Init_SteamApps(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"STEAMAPPS_INTERFACE_VERSION008");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523c60 SteamInternal_Init_SteamFriends body=39 status=ok
// SIG undefined SteamInternal_Init_SteamFriends(void)

void SteamInternal_Init_SteamFriends(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamFriends017");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523c90 SteamInternal_Init_SteamMatchmaking body=39 status=ok
// SIG undefined SteamInternal_Init_SteamMatchmaking(void)

void SteamInternal_Init_SteamMatchmaking(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamMatchMaking009");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523cc0 SteamInternal_Init_SteamMatchmakingServers body=39 status=ok
// SIG undefined SteamInternal_Init_SteamMatchmakingServers(void)

void SteamInternal_Init_SteamMatchmakingServers(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamMatchMakingServers002");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523cf0 FUN_140523cf0 body=39 status=ok
// SIG undefined FUN_140523cf0(void)

void FUN_140523cf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamNetworking006");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523d20 SteamInternal_Init_SteamRemoteStorage body=39 status=ok
// SIG undefined SteamInternal_Init_SteamRemoteStorage(void)

void SteamInternal_Init_SteamRemoteStorage(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"STEAMREMOTESTORAGE_INTERFACE_VERSION016");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523d50 SteamInternal_Init_SteamScreenshots body=39 status=ok
// SIG undefined SteamInternal_Init_SteamScreenshots(void)

void SteamInternal_Init_SteamScreenshots(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"STEAMSCREENSHOTS_INTERFACE_VERSION003");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523d80 SteamInternal_Init_SteamUser body=39 status=ok
// SIG undefined SteamInternal_Init_SteamUser(void)

void SteamInternal_Init_SteamUser(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"SteamUser021");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523db0 SteamInternal_Init_SteamUserStats body=39 status=ok
// SIG undefined SteamInternal_Init_SteamUserStats(void)

void SteamInternal_Init_SteamUserStats(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = SteamAPI_GetHSteamUser();
  uVar1 = SteamInternal_FindOrCreateUserInterface(uVar2,"STEAMUSERSTATS_INTERFACE_VERSION012");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523de0 FUN_140523de0 body=33 status=ok
// SIG undefined FUN_140523de0(void)

void FUN_140523de0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = SteamInternal_FindOrCreateUserInterface(0,"SteamUtils010");
  *param_1 = uVar1;
  return;
}



// FUNCTION 140523e10 FUN_140523e10 body=871 status=ok
// SIG undefined FUN_140523e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140523e10(wchar_t *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  short *psVar5;
  undefined1 auStack_998 [32];
  longlong local_978;
  ulonglong local_970;
  undefined1 local_968 [256];
  longlong local_868;
  short *local_860;
  wchar_t local_848 [1023];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_998;
  wcsncpy(local_848,param_1,0x3ff);
  local_4a = 0;
  pwVar1 = _guard_xfg_dispatch_icall_nop(local_848,L'_');
  if (pwVar1 == (wchar_t *)0x0) {
    return 0;
  }
  *pwVar1 = L'\0';
  puVar2 = (undefined8 *)FName::FName(&local_978,local_848,1);
  *param_3 = *puVar2;
  switch(pwVar1[1]) {
  case L'b':
    FVariantData::SetValue(param_4,0);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,param_2);
    local_978 = 0;
    local_970 = 0;
    if ((local_860 != (short *)0x0) && (*local_860 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
        psVar5 = local_860;
      } while (local_860[lVar4] != 0);
LAB_140523f00:
      local_978 = 0;
      uVar3 = (int)lVar4 + 1;
      local_970 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_978,0);
      }
      FGenericPlatformString::Memcpy(local_978,psVar5,(longlong)(int)uVar3 * 2);
    }
    break;
  default:
    return 0;
  case L'd':
    FVariantData::SetValue(param_4,0);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,param_2);
    local_978 = 0;
    local_970 = 0;
    if ((local_860 != (short *)0x0) && (*local_860 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
        psVar5 = local_860;
      } while (local_860[lVar4] != 0);
      goto LAB_140523f00;
    }
    break;
  case L'f':
    FVariantData::SetValue(param_4,0);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,param_2);
    local_978 = 0;
    local_970 = 0;
    if ((local_860 != (short *)0x0) && (*local_860 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
        psVar5 = local_860;
      } while (local_860[lVar4] != 0);
      goto LAB_140523f00;
    }
    break;
  case L'i':
    FVariantData::SetValue(param_4,0);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,param_2);
    local_978 = 0;
    local_970 = 0;
    if ((local_860 != (short *)0x0) && (*local_860 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
        psVar5 = local_860;
      } while (local_860[lVar4] != 0);
      goto LAB_140523f00;
    }
    break;
  case L'l':
    FVariantData::SetValue(param_4,0);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,param_2);
    local_978 = 0;
    local_970 = 0;
    if ((local_860 != (short *)0x0) && (*local_860 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
        psVar5 = local_860;
      } while (local_860[lVar4] != 0);
      goto LAB_140523f00;
    }
    break;
  case L'q':
    FVariantData::SetValue(param_4,0);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,param_2);
    local_978 = 0;
    local_970 = 0;
    if ((local_860 != (short *)0x0) && (*local_860 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
        psVar5 = local_860;
      } while (local_860[lVar4] != 0);
      goto LAB_140523f00;
    }
    break;
  case L's':
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,param_2);
    FVariantData::SetValue(param_4,local_860);
    goto LAB_140523f48;
  case L'u':
    FVariantData::SetValue(param_4,0);
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_968,param_2);
    local_978 = 0;
    local_970 = 0;
    if ((local_860 != (short *)0x0) && (*local_860 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
        psVar5 = local_860;
      } while (local_860[lVar4] != 0);
      goto LAB_140523f00;
    }
  }
  FUN_1404afba0(param_4,&local_978);
  if (local_978 != 0) {
    FMemory::Free();
  }
LAB_140523f48:
  if (local_868 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1405241d0 FUN_1405241d0 body=87 status=ok
// SIG undefined FUN_1405241d0(void)

undefined8 FUN_1405241d0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x31) != '\0') {
        *(undefined2 *)(param_1 + 0x30) = 1;
        if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))();
        }
        FUN_14052b640(param_1);
      }
      return 0;
    }
  }
  return 0x80004005;
}



// FUNCTION 140524230 FUN_140524230 body=73 status=ok
// SIG undefined FUN_140524230(void)

void FUN_140524230(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1,param_2);
    if (cVar2 != '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x11) = 0;
    }
  }
  return;
}



// FUNCTION 140524280 FUN_140524280 body=933 status=ok
// SIG undefined FUN_140524280(void)

void FUN_140524280(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined1 param_4)

{
  int *piVar1;
  ushort uVar2;
  wchar_t *pwVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  lVar5 = operator_new(0x38);
  plVar8 = (longlong *)0x0;
  iVar10 = 0;
  plVar6 = plVar8;
  if (lVar5 != 0) {
    plVar6 = (longlong *)FUN_1404f8750(lVar5);
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)plVar6;
    plVar8 = plVar7;
  }
  local_78 = plVar6;
  local_70 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_78,plVar6,plVar6);
  if (local_78 != (longlong *)0x0) {
    local_60 = (longlong *)param_2[1];
    local_68 = *param_2;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    if (local_78 + 1 != &local_68) {
      local_78[1] = local_68;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_78 + 2,&local_60);
    }
    plVar8 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    *(undefined1 *)(local_78 + 3) = param_4;
    iVar4 = *(int *)(param_3 + 1);
    if (iVar4 == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*param_3;
    }
    local_88 = (wchar_t *)0x0;
    local_7c = 0;
    iVar9 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar9 = iVar10;
    }
    if (0x80 < iVar9) {
      iVar9 = 0x80;
    }
    local_80 = iVar9 + 1;
    if (iVar9 == 0) {
      local_80 = iVar10;
    }
    if ((0 < local_80) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0), pwVar3 = local_88, 0 < local_80)
       ) {
      wcsncpy(local_88,pwVar11,(longlong)iVar9);
      pwVar3[iVar9] = L'\0';
    }
    plVar8 = local_78;
    *(undefined1 *)((longlong)local_78 + 0x19) = 1;
    iVar4 = iVar10;
    if (local_80 != 0) {
      iVar4 = local_80 + -1;
    }
    uVar2 = ((short)iVar4 + 1) * 2;
    *(ushort *)(local_78 + 6) = uVar2;
    *(undefined4 *)(local_78 + 5) = 0;
    if (*(uint *)((longlong)local_78 + 0x2c) != (uint)uVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(local_78 + 4);
      iVar10 = (int)plVar8[5];
    }
    *(uint *)(plVar8 + 5) = (uint)*(ushort *)(plVar8 + 6) + iVar10;
    if (*(int *)((longlong)plVar8 + 0x2c) < (int)((uint)*(ushort *)(plVar8 + 6) + iVar10)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar8 + 4,iVar10);
    }
    pwVar11 = L"";
    if (local_80 != 0) {
      pwVar11 = local_88;
    }
    _guard_xfg_dispatch_icall_nop((void *)plVar8[4],pwVar11,(ulonglong)*(ushort *)(plVar8 + 6));
    if (1 < *(int *)(param_3 + 1)) {
      local_58 = *param_2;
      local_50 = (longlong *)param_2[1];
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0xe0))(param_1,&local_58,&local_88,param_4);
      plVar8 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_50 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    lVar5 = FUN_14050e930();
    plVar8 = local_70;
    if (lVar5 != 0) {
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      local_48 = local_78;
      local_40 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      FUN_1404e05b0(lVar5,&local_48);
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_40 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    if (local_88 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  plVar8 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 140524630 FUN_140524630 body=1341 status=ok
// SIG undefined FUN_140524630(void)

undefined4
FUN_140524630(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  longlong *plVar11;
  longlong lVar12;
  double *pdVar13;
  uint uVar14;
  undefined4 uVar15;
  double dVar16;
  longlong *plVar17;
  double *pdVar18;
  double *pdVar19;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  LARGE_INTEGER local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined **local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_60 = &PTR_FUN_143f9a6c8;
  local_res18 = param_3;
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  pdVar19 = (double *)0x0;
  local_48 = *puVar6;
  pdVar13 = pdVar19;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar12 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar12 = param_1 + 0x80;
    }
    for (iVar4 = *(int *)(lVar12 + ((longlong)
                                    ((int)((ulonglong)local_48 >> 0x20) * 0x17 + (int)local_48) &
                                   (longlong)*(int *)(param_1 + 0x90) - 1U) * 4); iVar4 != -1;
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x30 + (longlong)iVar4 * 0x38)) {
      cVar2 = (*(code *)*local_60)(&local_60);
      if (cVar2 != '\0') {
        if (iVar4 != -1) {
          pdVar13 = (double *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x38);
        }
        break;
      }
    }
  }
  pdVar18 = pdVar13 + 4;
  if (pdVar13 == (double *)0x0) {
    pdVar18 = pdVar19;
  }
  if (pdVar18 == (double *)0x0) {
    local_80 = &local_60;
    local_88 = 0;
    local_78 = &local_90;
    local_90 = 0;
    FUN_1404f6350(param_1 + 0x48,local_res10,&local_80,0);
    pdVar18 = pdVar19;
    if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
      lVar12 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar12 = param_1 + 0x80;
      }
      for (iVar4 = *(int *)(lVar12 + ((longlong)
                                      ((int)((ulonglong)local_48 >> 0x20) * 0x17 + (int)local_48) &
                                     (longlong)*(int *)(param_1 + 0x90) - 1U) * 4); iVar4 != -1;
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x30 + (longlong)iVar4 * 0x38)) {
        cVar2 = (*(code *)*local_60)(&local_60);
        if (cVar2 != '\0') {
          if ((iVar4 != -1) &&
             (lVar12 = *(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 0x38, lVar12 != 0)) {
            pdVar18 = (double *)(lVar12 + 0x20);
          }
          break;
        }
      }
    }
  }
  QueryPerformanceCounter(&local_a0);
  iVar4 = 0;
  *pdVar18 = (double)local_a0.QuadPart * DAT_1468b02f8 + 16777216.0;
  local_res8[0] = 0;
  puVar6 = (undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0x5800) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar6,0x5800);
    iVar4 = *(int *)(param_1 + 0xa0);
  }
  *(int *)(param_1 + 0xa0) = iVar4 + 0x5800;
  if (*(int *)(param_1 + 0xa4) < iVar4 + 0x5800) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar6);
  }
  uVar15 = *(undefined4 *)(param_1 + 0xa0);
  uVar8 = *puVar6;
  lVar12 = **(longlong **)(param_1 + 0x10);
  uVar3 = (**(code **)(lVar12 + 0x60))();
  iVar4 = (**(code **)(lVar12 + 0x58))
                    (*(undefined8 *)(param_1 + 0x10),local_res18,*param_4,uVar8,uVar15,local_res8,
                     uVar3);
  if (iVar4 != 0) {
    uVar15 = 0x80004005;
    *param_4 = 0;
    goto LAB_140524b21;
  }
  if (local_res8[0] == 0) {
    uVar15 = 0;
    *param_4 = 0;
    goto LAB_140524b21;
  }
  dVar16 = pdVar18[1];
  if (dVar16 == 0.0) {
LAB_140524910:
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      puVar7 = (undefined8 *)operator_new(0x18);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *(undefined1 *)(puVar7 + 1) = 0;
        *puVar7 = &PTR__scalar_deleting_destructor__143f73ca8;
        if (DAT_1468c217e == '\0') {
          if (DAT_1469e6880 == 0) {
            uVar8 = GetTransientPackage();
            FUN_1417846f0(uVar8,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            lVar12 = 0;
            uVar9 = UGCObjectReferencer::GetPrivateStaticClass();
            DAT_1469e6880 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,uVar3 & 0xffffff00,0,0);
            iVar4 = *(int *)(DAT_1469e6880 + 0xc);
            if (iVar4 < (int)DAT_1469e91c4) {
              uVar5 = iVar4 >> 0x1f & 0xffff;
              uVar3 = iVar4 + uVar5;
              lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                       (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
            }
            *(uint *)(lVar12 + 8) = *(uint *)(lVar12 + 8) | 0x40000000;
          }
          UGCObjectReferencer::AddObject(DAT_1469e6880,puVar7);
          *(undefined1 *)(puVar7 + 1) = 1;
        }
        puVar7[2] = param_1;
        *puVar7 = &PTR__scalar_deleting_destructor__143f9d280;
      }
      *(undefined8 **)(param_1 + 0xa8) = puVar7;
    }
    uVar15 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))();
    dVar10 = (double)FUN_1404c92c0(uVar15);
    pdVar18[1] = dVar10;
    dVar16 = 0.0;
    if (dVar10 != 0.0) {
      FUN_142351eb0(dVar10,*(undefined4 *)(param_1 + 0xb0));
      dVar16 = pdVar18[1];
      plVar17 = (longlong *)((longlong)dVar16 + 0x600);
      plVar11 = (longlong *)FMemory::Realloc(0,0x30);
      local_70 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        plVar11[1] = param_1;
        *plVar11 = (longlong)&DAT_143f3ed00;
        plVar11[2] = (longlong)FUN_140518370;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar11[4] = lVar12;
        *plVar11 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar17,1);
        (**(code **)(*plVar11 + 0x20))(plVar11,local_98);
        iVar4 = *(int *)((longlong)dVar16 + 0x608);
        *(int *)((longlong)dVar16 + 0x608) = iVar4 + 1;
        if (*(int *)((longlong)dVar16 + 0x60c) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar4);
        }
        puVar7 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar17);
        *puVar7 = plVar11;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      (**(code **)(*(longlong *)pdVar18[1] + 0x558))((longlong *)pdVar18[1],0);
      dVar16 = pdVar18[1];
    }
  }
  else {
    iVar4 = *(int *)((longlong)dVar16 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar14 = iVar4 >> 0x1f & 0xffff;
      uVar5 = iVar4 + uVar14;
      lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar14) * 0x18;
    }
    else {
      lVar12 = 0;
    }
    if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_140524910;
  }
  if (dVar16 != 0.0) {
    uVar8 = *(undefined8 *)((longlong)dVar16 + 0x2d0);
    USoundWaveProcedural::GetAvailableAudioByteCount(uVar8);
    FUN_14280ca60(uVar8,*puVar6,local_res8[0]);
  }
  uVar15 = 0;
LAB_140524b21:
  local_60 = &PTR_FUN_143f73cd8;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_50 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plStack_50 != (longlong *)0x0)) {
      (**(code **)(*plStack_50 + 8))();
    }
  }
  return uVar15;
}



// FUNCTION 140524be0 FUN_140524be0 body=350 status=ok
// SIG undefined FUN_140524be0(void)

void FUN_140524be0(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  wint_t wVar2;
  wint_t wVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  wint_t *pwVar6;
  int iVar7;
  undefined2 *puVar8;
  
  if (*(int *)(param_3 + 1) < 1) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_4;
    }
    pwVar6 = &DAT_143f7f174;
    do {
      wVar2 = *(wint_t *)((longlong)(puVar8 + -0xa1fbf8ba) + (longlong)pwVar6);
      if ((wVar2 == 0) && (*pwVar6 == 0)) {
        return;
      }
      if (wVar2 != *pwVar6) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar6);
        if (wVar2 != wVar3) goto LAB_140524c5a;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
LAB_140524c68:
  puVar4 = (undefined8 *)operator_new(0x50);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar4,*(undefined8 *)(param_1 + 0x20),0);
    *(undefined4 *)(puVar4 + 5) = param_2;
    *puVar4 = &PTR_FUN_143f9c7b8;
    puVar4[6] = 0;
    iVar7 = *(int *)(param_3 + 1);
    param_3 = (undefined8 *)*param_3;
    *(int *)(puVar4 + 7) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
      FString::FString(puVar4 + 8,param_4);
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar4 + 6,iVar7,0);
      puVar5 = (undefined8 *)puVar4[6];
      do {
        *puVar5 = *param_3;
        lVar1 = param_3[1];
        puVar5[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        puVar5 = puVar5 + 2;
        param_3 = param_3 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      FString::FString(puVar4 + 8,param_4);
    }
  }
  FUN_1404adba0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x148),puVar4);
  return;
LAB_140524c5a:
  if (wVar2 == wVar3) {
    return;
  }
  goto LAB_140524c68;
}



// FUNCTION 140524d40 FUN_140524d40 body=28 status=ok
// SIG undefined FUN_140524d40(void)

void FUN_140524d40(longlong param_1)

{
  FUN_1404fa320(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 140524d60 FUN_140524d60 body=28 status=ok
// SIG undefined FUN_140524d60(void)

void FUN_140524d60(longlong param_1)

{
  FUN_1404fa520(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 140524d80 FUN_140524d80 body=28 status=ok
// SIG undefined FUN_140524d80(void)

void FUN_140524d80(longlong param_1)

{
  FUN_1404fa6e0(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 140524da0 FUN_140524da0 body=28 status=ok
// SIG undefined FUN_140524da0(void)

void FUN_140524da0(longlong param_1)

{
  FUN_1404fb610(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 140524dc0 FUN_140524dc0 body=28 status=ok
// SIG undefined FUN_140524dc0(void)

void FUN_140524dc0(longlong param_1)

{
  FUN_1404fb860(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 140524de0 FUN_140524de0 body=28 status=ok
// SIG undefined FUN_140524de0(void)

void FUN_140524de0(longlong param_1)

{
  FUN_1404fbd50(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 140524e00 FUN_140524e00 body=117 status=ok
// SIG undefined FUN_140524e00(void)

void FUN_140524e00(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + 0x118);
  puVar3 = puVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x120) * 2;
  while( true ) {
    if (puVar4 == puVar3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined1 *)(param_1 + 0x19) = 1;
      return;
    }
    cVar2 = (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,uVar1);
    if (cVar2 != '\0') break;
    puVar4 = puVar4 + 2;
  }
  return;
}



// FUNCTION 140524e90 FUN_140524e90 body=209 status=ok
// SIG undefined FUN_140524e90(void)

void FUN_140524e90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  
  puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  plVar11 = *(longlong **)(param_1 + 0x40);
  plVar5 = (longlong *)*puVar10;
  plVar3 = plVar11 + (longlong)*(int *)(param_1 + 0x48) * 3;
  while( true ) {
    if (plVar11 == plVar3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined1 *)(param_1 + 0x19) = 1;
      return;
    }
    plVar6 = (longlong *)plVar11[1];
    lVar7 = *plVar11;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    cVar9 = (**(code **)(*plVar5 + 0x128))(plVar5,uVar8,0);
    *(char *)(plVar11 + 2) = cVar9;
    if (cVar9 != '\0') break;
    plVar11 = plVar11 + 3;
  }
  return;
}



// FUNCTION 140524f70 FUN_140524f70 body=100 status=ok
// SIG undefined FUN_140524f70(void)

void FUN_140524f70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    LOCK();
    bVar2 = *(int *)(lVar1 + 0x18) == 0;
    if (bVar2) {
      *(int *)(lVar1 + 0x18) = 0;
    }
    UNLOCK();
    if (bVar2) {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x20))
                  (*(longlong **)(lVar1 + 0x20),0xffffffff,0);
        *(undefined8 *)(lVar1 + 0x28) = 0;
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x10);
    }
  }
  return;
}



// FUNCTION 140524ff0 FUN_140524ff0 body=62 status=ok
// SIG undefined FUN_140524ff0(void)

void FUN_140524ff0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
  cVar1 = (**(code **)(*(longlong *)*puVar2 + 0x30))((longlong *)*puVar2,0x610e4);
  *(uint *)(param_1 + 0x38) = (cVar1 != '\0') + 1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 140525030 FUN_140525030 body=1231 status=ok
// SIG undefined FUN_140525030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140525030(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_268 [32];
  char *local_248;
  undefined4 local_240;
  undefined1 local_238 [4];
  int local_234;
  longlong local_230;
  undefined8 local_228;
  longlong *local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined4 local_200 [2];
  longlong *local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  longlong local_1d8 [32];
  longlong *local_d8;
  longlong *local_d0;
  int local_c8;
  char local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
  plVar3 = (longlong *)*puVar7;
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
                     (*(longlong **)(param_1 + 0x10),local_1f0);
  local_208 = (longlong *)puVar7[1];
  local_210 = *puVar7;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_208 + 1) = (int)local_208[1] + 1;
    UNLOCK();
  }
  iVar15 = 0;
  if ((undefined8 *)(param_1 + 0x48) != &local_210) {
    *(undefined8 *)(param_1 + 0x48) = local_210;
    local_210 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_208);
  }
  plVar9 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_208 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1e8 + 1;
    lVar14 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  iVar6 = (**(code **)(*plVar3 + 0x50))(plVar3);
  if (0 < iVar6) {
    do {
      plVar9 = (longlong *)0x0;
      local_248 = local_b8;
      local_240 = 0x80;
      cVar5 = (**(code **)(*plVar3 + 0x58))(plVar3,iVar15,local_200,local_238);
      if (cVar5 != '\0') {
        plVar8 = (longlong *)operator_new(0x40);
        plVar12 = plVar9;
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          plVar8[2] = 0;
          plVar8[3] = 0;
          plVar8[4] = 0;
          plVar8[5] = 0;
          plVar8[6] = 0;
          plVar8[7] = 0;
          plVar12 = plVar8;
        }
        plVar8 = (longlong *)operator_new(0x18);
        local_218 = plVar9;
        if (plVar8 != (longlong *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 1;
          ((short *)((longlong)plVar8 + 0xc))[0] = 1;
          ((short *)((longlong)plVar8 + 0xc))[1] = 0;
          *plVar8 = (longlong)&PTR_FUN_143f9ea30;
          plVar8[2] = (longlong)plVar12;
          local_218 = plVar8;
        }
        local_220 = plVar12;
        SharedPointerInternals::EnableSharedFromThis(&local_220,plVar12,plVar12);
        local_230 = 0;
        local_228 = 0;
        FString::AppendInt(&local_230,local_200[0]);
        plVar12 = local_220;
        if (local_220 != &local_230) {
          if (*local_220 != 0) {
            FMemory::Free();
          }
          *plVar12 = local_230;
          local_230 = 0;
          *(undefined4 *)(plVar12 + 1) = (undefined4)local_228;
          *(undefined4 *)((longlong)plVar12 + 0xc) = local_228._4_4_;
          local_228 = 0;
        }
        if (local_230 != 0) {
          FMemory::Free();
        }
        local_d8 = (longlong *)0x0;
        uVar4 = 0xffffffffffffffff;
        do {
          uVar13 = uVar4;
          uVar4 = uVar13 + 1;
        } while (local_b8[uVar13 + 1] != '\0');
        local_234 = 0;
        FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                  (&local_234,0x7fffffff,local_b8,uVar13 + 1 & 0xffffffff);
        local_c8 = local_234;
        uVar1 = local_234 + 1;
        if ((0x80 < uVar1) && (uVar1 != 0)) {
          plVar9 = (longlong *)FMemory::Realloc(0,(longlong)(int)uVar1 * 2,0);
          local_d8 = plVar9;
        }
        local_1f8 = local_1d8;
        if (plVar9 != (longlong *)0x0) {
          local_1f8 = plVar9;
        }
        local_d0 = local_1f8;
        FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_1f8,uVar1,local_b8,(int)uVar13 + 2);
        plVar12 = local_d0;
        plVar9 = local_220;
        if ((longlong *)local_220[2] != local_d0) {
          if ((local_d0 == (longlong *)0x0) || ((short)*local_d0 == 0)) {
            iVar11 = 0;
          }
          else {
            lVar14 = -1;
            do {
              lVar14 = lVar14 + 1;
            } while (*(short *)((longlong)local_d0 + lVar14 * 2) != 0);
            iVar11 = (int)lVar14 + 1;
          }
          iVar10 = 0;
          *(undefined4 *)(local_220 + 3) = 0;
          if (*(int *)((longlong)local_220 + 0x1c) != iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_220 + 2,iVar11);
            iVar10 = (int)plVar9[3];
          }
          *(int *)(plVar9 + 3) = iVar10 + iVar11;
          if (*(int *)((longlong)plVar9 + 0x1c) < iVar10 + iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar9 + 2);
          }
          if (iVar11 != 0) {
            _guard_xfg_dispatch_icall_nop((void *)plVar9[2],plVar12,(longlong)iVar11 * 2);
          }
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar9 = local_220;
        if ((undefined4 *)local_220[6] != &DAT_143f7ee9c) {
          iVar11 = 0;
          *(undefined4 *)(local_220 + 7) = 0;
          if (*(int *)((longlong)local_220 + 0x3c) != 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_220 + 6,2);
            iVar11 = (int)plVar9[7];
          }
          *(int *)(plVar9 + 7) = iVar11 + 2;
          if (*(int *)((longlong)plVar9 + 0x3c) < iVar11 + 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar9 + 6);
          }
          *(undefined4 *)plVar9[6] = 0x2d;
        }
        iVar11 = *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x40) = iVar11 + 1;
        if (*(int *)(param_1 + 0x44) < iVar11 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,iVar11);
        }
        plVar9 = local_218;
        puVar7 = (undefined8 *)((longlong)iVar11 * 0x10 + *(longlong *)(param_1 + 0x38));
        *puVar7 = local_220;
        puVar7[1] = local_218;
        if (local_218 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_218 + 1) = (int)local_218[1] + 1;
          UNLOCK();
          if (local_218 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_218 + 1;
            lVar14 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_218)(local_218);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar6);
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 140525500 FUN_140525500 body=579 status=ok
// SIG undefined FUN_140525500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140525500(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  char *local_1a0;
  char local_198;
  char local_197 [7];
  longlong local_190 [2];
  longlong local_180 [3];
  undefined1 local_168 [128];
  longlong local_e8;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  puVar4 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  plVar1 = (longlong *)*puVar4;
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(char *)(param_1 + 0x50) == '\0') {
      uVar9 = 1;
      if (*(int *)(param_1 + 0x38) == 1) {
        uVar8 = 1;
      }
      else if (*(int *)(param_1 + 0x38) == 2) {
        uVar8 = 2;
      }
      else {
        uVar8 = 0;
      }
      if (*(int *)(param_1 + 0x3c) == 1) {
        uVar9 = 2;
      }
      else if (*(int *)(param_1 + 0x3c) == 2) {
        uVar9 = 3;
      }
      puVar4 = (undefined8 *)
               SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
      plVar2 = (longlong *)*puVar4;
      puVar4 = (undefined8 *)FName::ToString(param_1 + 0x30,local_180);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar4;
      }
      lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_c8,puVar7);
      uVar6 = (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)(lVar5 + 0x88),uVar8,uVar9);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    else {
      puVar4 = (undefined8 *)
               SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
      plVar2 = (longlong *)*puVar4;
      puVar4 = (undefined8 *)FName::ToString(param_1 + 0x30,local_190);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar4;
      }
      lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_168,puVar7);
      uVar6 = (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined8 *)(lVar5 + 0x88));
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      local_180[0] = local_190[0];
      if (local_e8 != 0) {
        FMemory::Free();
        local_180[0] = local_190[0];
      }
    }
    if (local_180[0] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  else {
    local_198 = '\0';
    cVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,*(longlong *)(param_1 + 0x20),&local_198);
    *(bool *)(param_1 + 0x18) = cVar3 != '\0';
    if (*(char *)(param_1 + 0x18) != '\0') {
      local_1a0 = local_197;
      local_1a8 = 0x450;
      cVar3 = (**(code **)(*plVar1 + 0x68))
                        (plVar1,*(undefined8 *)(param_1 + 0x20),param_1 + 0x40,0x10);
      if ((((cVar3 == '\0') || (local_198 != '\0')) || (local_197[0] != '\0')) ||
         (*(char *)(param_1 + 0x48) == '\0')) {
        *(undefined1 *)(param_1 + 0x19) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
  }
  return;
}



// FUNCTION 140525750 FUN_140525750 body=512 status=ok
// SIG undefined FUN_140525750(void)

void FUN_140525750(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  BOOL BVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  char local_res8 [8];
  char local_res10 [8];
  undefined1 local_38 [8];
  longlong *local_30;
  
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  plVar3 = (longlong *)*puVar8;
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar12 = -1;
    plVar9 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                       (*(longlong **)(param_1 + 0x10),local_38);
    plVar4 = (longlong *)plVar9[1];
    lVar10 = *plVar9;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar10 + 0x40);
    BVar7 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar7 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    lVar10 = FUN_140510190(lVar10,*(undefined8 *)(param_1 + 0x30));
    if (lVar10 != 0) {
      lVar12 = *(longlong *)(lVar10 + 0x18);
    }
    LeaveCriticalSection(lpCriticalSection);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar4 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (lVar12 != -1) {
      puVar8 = (undefined8 *)
               SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
      uVar11 = (**(code **)(*(longlong *)*puVar8 + 0xe0))
                         ((longlong *)*puVar8,lVar12,*(undefined4 *)(param_1 + 0x58),
                          *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x20) = uVar11;
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
  }
  else {
    local_res8[0] = '\0';
    cVar6 = (**(code **)(*plVar3 + 0x58))(plVar3,*(longlong *)(param_1 + 0x20),local_res8);
    *(bool *)(param_1 + 0x18) = cVar6 != '\0';
    if (*(char *)(param_1 + 0x18) != '\0') {
      cVar6 = (**(code **)(*plVar3 + 0x68))
                        (plVar3,*(undefined8 *)(param_1 + 0x20),param_1 + 0x40,0x18,0x451,
                         local_res10);
      if ((((cVar6 != '\0') && (local_res8[0] == '\0')) && (local_res10[0] == '\0')) &&
         (*(longlong *)(param_1 + 0x40) != -1)) {
        *(undefined1 *)(param_1 + 0x19) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 0x19) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 140525950 FUN_140525950 body=707 status=ok
// SIG undefined FUN_140525950(void)

void FUN_140525950(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  BOOL BVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  char local_res8 [8];
  char local_res10 [8];
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 local_58 [8];
  longlong *local_50;
  
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  plVar2 = (longlong *)*puVar6;
  if (*(char *)(param_1 + 0x28) != '\0') goto LAB_140525b5f;
  lVar15 = -1;
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                     (*(longlong **)(param_1 + 0x10),local_58);
  plVar14 = (longlong *)plVar7[1];
  lVar17 = *plVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0x40));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0x40));
  }
  lVar8 = FUN_140510190(lVar17,*(undefined8 *)(param_1 + 0x40));
  if (lVar8 != 0) {
    lVar15 = *(longlong *)(lVar8 + 0x18);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0x40));
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar17 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (lVar15 == -1) goto LAB_140525b5f;
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8)
  ;
  plVar14 = (longlong *)*puVar6;
  iVar16 = 100;
  if (*(int *)(param_1 + 0x38) < 0x65) {
    iVar16 = *(int *)(param_1 + 0x38);
  }
  uVar13 = (ulonglong)iVar16;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar13;
  uVar9 = SUB168(ZEXT816(8) * auVar3,0);
  if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  local_res18 = plVar14;
  lVar8 = operator_new(uVar9);
  lVar12 = 0;
  lVar17 = lVar12;
  if (lVar8 == 0) {
LAB_140525ae1:
    lVar8 = lVar12;
    if (0 < iVar16) {
      do {
        puVar6 = (undefined8 *)
                 (**(code **)(**(longlong **)(lVar8 + *(longlong *)(param_1 + 0x30)) + 0x10))();
        local_res20 = *puVar6;
        *(undefined8 *)(lVar17 + lVar12 * 8) = local_res20;
        lVar12 = lVar12 + 1;
        plVar14 = local_res18;
        lVar8 = lVar8 + 0x10;
      } while (lVar12 < (longlong)uVar13);
    }
  }
  else {
    lVar17 = lVar8;
    if (iVar16 != 0) {
      puVar10 = (uint *)(lVar8 + 4);
      uVar11 = uVar13;
      do {
        *puVar10 = *puVar10 & 0xff0fffff;
        *(undefined1 *)((longlong)puVar10 + 3) = 0;
        *puVar10 = *puVar10 & 0xfff00000;
        puVar10[-1] = 0;
        puVar10 = puVar10 + 2;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      goto LAB_140525ae1;
    }
  }
  uVar9 = (**(code **)(*plVar14 + 0xe8))(plVar14,lVar15,lVar17,iVar16);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  FMemory::operator_delete(lVar17);
  *(undefined1 *)(param_1 + 0x28) = 1;
LAB_140525b5f:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
  }
  else {
    local_res8[0] = '\0';
    cVar4 = (**(code **)(*plVar2 + 0x58))(plVar2,*(longlong *)(param_1 + 0x20),local_res8);
    *(bool *)(param_1 + 0x18) = cVar4 != '\0';
    if (*(char *)(param_1 + 0x18) != '\0') {
      cVar4 = (**(code **)(*plVar2 + 0x68))
                        (plVar2,*(undefined8 *)(param_1 + 0x20),param_1 + 0x50,0x18,0x451,
                         local_res10);
      if ((((cVar4 != '\0') && (local_res8[0] == '\0')) && (local_res10[0] == '\0')) &&
         (*(longlong *)(param_1 + 0x50) != -1)) {
        *(undefined1 *)(param_1 + 0x19) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 0x19) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 140525c20 FUN_140525c20 body=305 status=ok
// SIG undefined FUN_140525c20(void)

void FUN_140525c20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char local_res8 [8];
  char local_res10 [8];
  undefined8 local_res18;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar4 = *(longlong **)(param_1 + 0x38);
    lVar5 = *(longlong *)(param_1 + 0x30);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_res18 = *(undefined8 *)(lVar5 + 0x18);
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
    puVar7 = (undefined8 *)
             SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
    uVar8 = (**(code **)(*(longlong *)*puVar7 + 0x80))((longlong *)*puVar7,local_res18);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
    plVar4 = (longlong *)*puVar7;
    local_res8[0] = '\0';
    cVar6 = (**(code **)(*plVar4 + 0x58))(plVar4,*(undefined8 *)(param_1 + 0x20),local_res8);
    *(bool *)(param_1 + 0x18) = cVar6 != '\0';
    if (*(char *)(param_1 + 0x18) != '\0') {
      cVar6 = (**(code **)(*plVar4 + 0x68))
                        (plVar4,*(undefined8 *)(param_1 + 0x20),param_1 + 0x50,0x18,0x44d,
                         local_res10);
      if (((cVar6 != '\0') && (local_res8[0] == '\0')) && (local_res10[0] == '\0')) {
        *(undefined1 *)(param_1 + 0x19) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 0x19) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 140525d60 FUN_140525d60 body=373 status=ok
// SIG undefined FUN_140525d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140525d60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar8 = (undefined8 *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamScreenshots_1461fc7f0);
  plVar3 = (longlong *)*puVar8;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((*(int *)(param_1 + 0x48) != 0) && (0 < *(int *)(param_1 + 0x48) + -1)) {
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,*(undefined8 *)(param_1 + 0x40));
    cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined4 *)(param_1 + 0x28),local_40);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (cVar7 == '\0') {
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x30);
  puVar10 = puVar8 + (longlong)*(int *)(param_1 + 0x38) * 2;
  for (; puVar8 != puVar10; puVar8 = puVar8 + 2) {
    plVar4 = (longlong *)puVar8[1];
    plVar5 = (longlong *)*puVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_e0 = 0;
    uStack_d8 = 0;
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x10))();
    local_e8 = &PTR_FUN_143f73cd8;
    local_d0 = *puVar9;
    cVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined4 *)(param_1 + 0x28));
    if (cVar7 == '\0') {
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140525ee0 FUN_140525ee0 body=723 status=ok
// SIG undefined FUN_140525ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140525ee0(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  BOOL BVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  char *local_110;
  char local_108;
  char local_107 [7];
  undefined2 *local_100;
  int local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
  plVar3 = (longlong *)*puVar8;
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar13 = -1;
    plVar9 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                       (*(longlong **)(param_1 + 0x10),local_e8);
    plVar4 = (longlong *)plVar9[1];
    lVar10 = *plVar9;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar14 = 1;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_e0 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar10 + 0x40);
    BVar7 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar7 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    lVar10 = FUN_140510190(lVar10,param_1 + 0x30);
    if (lVar10 != 0) {
      lVar13 = *(longlong *)(lVar10 + 0x18);
    }
    LeaveCriticalSection(lpCriticalSection);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar4 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (lVar13 != -1) {
      puVar8 = (undefined8 *)
               SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
      plVar4 = (longlong *)*puVar8;
      if (*(int *)(param_1 + 0x44) == 1) {
        uVar14 = 2;
      }
      uVar11 = GetLeaderboardStatName(local_f0,param_1 + 0x30,param_1 + 0x38);
      FName::ToString(uVar11,&local_100);
      puVar8 = (undefined8 *)
               SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
      puVar12 = &DAT_143f3eda8;
      if (local_f8 != 0) {
        puVar12 = local_100;
      }
      plVar9 = (longlong *)*puVar8;
      lVar10 = TStringConversion<FTCHARToUTF8_Convert,128>::
               TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,puVar12);
      cVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(lVar10 + 0x88),param_1 + 0x40);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (cVar6 != '\0') {
        local_110 = (char *)((ulonglong)local_110 & 0xffffffff00000000);
        local_118 = 0;
        uVar14 = (**(code **)(*plVar4 + 0xf8))(plVar4,lVar13,uVar14,*(undefined4 *)(param_1 + 0x40))
        ;
        *(undefined8 *)(param_1 + 0x20) = uVar14;
      }
      *(undefined1 *)(param_1 + 0x28) = 1;
      if (local_100 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
  }
  else {
    local_108 = '\0';
    cVar6 = (**(code **)(*plVar3 + 0x58))(plVar3,*(longlong *)(param_1 + 0x20),&local_108);
    *(bool *)(param_1 + 0x18) = cVar6 != '\0';
    if (*(char *)(param_1 + 0x18) != '\0') {
      local_110 = local_107;
      local_118 = CONCAT44(local_118._4_4_,0x452);
      cVar6 = (**(code **)(*plVar3 + 0x68))
                        (plVar3,*(undefined8 *)(param_1 + 0x20),param_1 + 0x48,0x20);
      if ((((cVar6 == '\0') || (local_108 != '\0')) || (local_107[0] != '\0')) ||
         (*(char *)(param_1 + 0x48) == '\0')) {
        *(undefined1 *)(param_1 + 0x19) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
  }
  return;
}



// FUNCTION 1405261c0 FUN_1405261c0 body=1236 status=ok
// SIG undefined FUN_1405261c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405261c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  uint *puVar14;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  char *local_360;
  char local_358;
  char local_357 [7];
  undefined2 *local_350;
  int local_348;
  float local_340;
  float local_33c;
  int local_338;
  int local_334;
  int local_330;
  uint uStack_32c;
  uint *puStack_328;
  undefined4 local_320;
  int iStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  longlong *local_308;
  undefined8 uStack_300;
  uint *local_2f8;
  uint uStack_2f0;
  int iStack_2ec;
  int local_2e8;
  undefined4 uStack_2e4;
  int local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined8 uStack_2c8;
  uint *puStack_2c0;
  undefined4 uStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [128];
  longlong local_228;
  undefined1 local_208 [128];
  longlong local_188;
  undefined1 local_168 [128];
  longlong local_e8;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar5 = *(longlong **)(param_1 + 0x38);
    lVar12 = *(longlong *)(param_1 + 0x30);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_2d8 = *(undefined8 *)(lVar12 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
    puVar9 = (undefined8 *)
             SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUserStats_1461fc7a8);
    uVar10 = (**(code **)(*(longlong *)*puVar9 + 0x80))((longlong *)*puVar9,local_2d8);
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc748);
    plVar5 = (longlong *)*puVar9;
    local_358 = '\0';
    cVar7 = (**(code **)(*plVar5 + 0x58))(plVar5,*(undefined8 *)(param_1 + 0x20),&local_358);
    *(bool *)(param_1 + 0x18) = cVar7 != '\0';
    if (*(char *)(param_1 + 0x18) != '\0') {
      local_360 = local_357;
      local_368 = 0x44d;
      cVar7 = (**(code **)(*plVar5 + 0x68))
                        (plVar5,*(undefined8 *)(param_1 + 0x20),param_1 + 0x90,0x18);
      if ((((cVar7 == '\0') || (local_358 != '\0')) || (local_357[0] != '\0')) ||
         (*(int *)(param_1 + 0x98) != 1)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(param_1 + 0x19) = uVar8;
      if (*(char *)(param_1 + 0x19) != '\0') {
        lVar12 = *(longlong *)(param_1 + 0x30);
        plVar5 = *(longlong **)(param_1 + 0x38);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_310 = *(undefined8 *)(lVar12 + 0x18);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
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
        uVar10 = local_310;
        puVar9 = (undefined8 *)SteamInternal_ContextInit();
        uStack_32c = 1;
        local_308 = (longlong *)(param_1 + 0x40);
        local_330 = 0;
        iVar3 = *(int *)(param_1 + 0x68);
        puStack_328 = (uint *)(param_1 + 0x50);
        plVar5 = (longlong *)*puVar9;
        iStack_31c = 0;
        iStack_318 = 0;
        if (iVar3 != 0) {
          puVar14 = *(uint **)(param_1 + 0x60);
          if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
            puVar14 = puStack_328;
          }
          uVar4 = *puVar14;
          iStack_318 = 0;
          local_330 = 0;
          while (uVar4 == 0) {
            lVar12 = (longlong)local_330;
            iStack_318 = iStack_318 + 0x20;
            iVar11 = local_330 + 1;
            bVar6 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_330;
            local_330 = iVar11;
            if (bVar6) goto LAB_140526437;
            uVar4 = puVar14[lVar12 + 1];
          }
          uStack_32c = -uVar4 & uVar4;
          local_2e0 = 0x1f;
          if (uStack_32c != 0) {
            for (; uStack_32c >> local_2e0 == 0; local_2e0 = local_2e0 + -1) {
            }
          }
          if (uStack_32c == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - local_2e0;
          }
          iStack_31c = (iStack_318 - iVar11) + 0x1f;
          if (iVar3 < iStack_31c) {
LAB_140526437:
            iStack_31c = iVar3;
          }
        }
        local_320 = 0xffffffff;
        uStack_300 = CONCAT44(uStack_32c,local_330);
        uStack_2b8 = 0xffffffff;
        iStack_2b4 = iStack_31c;
        iStack_2b0 = iStack_318;
        uStack_2ac = uStack_314;
        uStack_2f0 = 0xffffffff;
        iStack_2ec = iStack_31c;
        local_2e8 = iStack_318;
        uStack_2e4 = uStack_314;
        local_2f8 = puStack_328;
        local_2d0 = local_308;
        uStack_2c8 = uStack_300;
        puStack_2c0 = puStack_328;
        if (iStack_31c < iVar3) {
          do {
            plVar1 = local_308;
            lVar12 = (longlong)iStack_2ec;
            FName::ToString(*local_308 + lVar12 * 0x28,&local_350);
            iVar3 = *(int *)(*plVar1 + 8 + lVar12 * 0x28);
            lVar12 = *plVar1 + 8 + lVar12 * 0x28;
            if (iVar3 == 1) {
              FVariantData::GetValue(lVar12,&local_338);
              puVar13 = &DAT_143f3eda8;
              if (local_348 != 0) {
                puVar13 = local_350;
              }
              lVar12 = TStringConversion<FTCHARToUTF8_Convert,128>::
                       TStringConversion<FTCHARToUTF8_Convert,128>(local_168,puVar13);
              cVar7 = (**(code **)(*plVar5 + 0x90))
                                (plVar5,uVar10,*(undefined8 *)(lVar12 + 0x88),&local_334);
              if (local_e8 != 0) {
                FMemory::Free();
              }
              if (cVar7 == '\0') goto LAB_140526620;
              puVar13 = &DAT_143f3eda8;
              if (local_348 != 0) {
                puVar13 = local_350;
              }
              lVar12 = TStringConversion<FTCHARToUTF8_Convert,128>::
                       TStringConversion<FTCHARToUTF8_Convert,128>(local_c8,puVar13);
              cVar7 = (**(code **)(*plVar5 + 0x20))
                                (plVar5,*(undefined8 *)(lVar12 + 0x88),local_334 + local_338);
              lVar12 = local_48;
LAB_14052660b:
              if (lVar12 != 0) {
                FMemory::Free();
              }
              if (cVar7 == '\0') goto LAB_140526620;
            }
            else {
              if (iVar3 == 7) {
                FVariantData::GetValue(lVar12,&local_33c);
                puVar13 = &DAT_143f3eda8;
                if (local_348 != 0) {
                  puVar13 = local_350;
                }
                lVar12 = TStringConversion<FTCHARToUTF8_Convert,128>::
                         TStringConversion<FTCHARToUTF8_Convert,128>(local_2a8,puVar13);
                cVar7 = (**(code **)(*plVar5 + 0x88))
                                  (plVar5,uVar10,*(undefined8 *)(lVar12 + 0x88),&local_340);
                if (local_228 != 0) {
                  FMemory::Free();
                }
                if (cVar7 != '\0') {
                  puVar13 = &DAT_143f3eda8;
                  if (local_348 != 0) {
                    puVar13 = local_350;
                  }
                  lVar12 = TStringConversion<FTCHARToUTF8_Convert,128>::
                           TStringConversion<FTCHARToUTF8_Convert,128>(local_208,puVar13);
                  cVar7 = (**(code **)(*plVar5 + 0x18))
                                    (plVar5,*(undefined8 *)(lVar12 + 0x88),local_340 + local_33c);
                  lVar12 = local_188;
                  goto LAB_14052660b;
                }
              }
LAB_140526620:
              *(undefined1 *)(param_1 + 0x19) = 0;
            }
            if (local_350 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            uStack_2f0 = uStack_2f0 & ~uStack_300._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_300);
          } while (iStack_2ec < (int)local_2f8[6]);
        }
      }
    }
  }
  return;
}



// FUNCTION 1405266a0 FUN_1405266a0 body=391 status=ok
// SIG undefined FUN_1405266a0(void)

undefined1 FUN_1405266a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  LARGE_INTEGER local_res18 [2];
  
  cVar3 = FUN_1404b7130();
  if (cVar3 == '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1404afe30();
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_1404b6d30(lVar1 + 0x388,param_2);
    FUN_140526de0(lVar1,param_2);
    FUN_140526b50(lVar1 + 0x2d8,param_2);
    FUN_1405272e0(lVar1 + 0x2d8,param_2);
    lVar4 = *(longlong *)(lVar1 + 800);
    lVar5 = (longlong)*(int *)(lVar1 + 0x328) * 0x20 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x20) {
      QueryPerformanceCounter(local_res18);
      if ((double)*(float *)(lVar1 + 0x2f8) <
          ((double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(lVar4 + 0x18)
         ) {
        *(undefined4 *)(lVar4 + 0x10) = 5;
      }
    }
    FUN_1404f70a0(lVar1 + 800,local_res18);
  }
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x88);
  if ((plVar2 != (longlong *)0x0) &&
     (fVar6 = (float)param_2 + *(float *)(plVar2 + 6), *(float *)(plVar2 + 6) = fVar6, 0.5 < fVar6))
  {
    cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (cVar3 != *(char *)((longlong)plVar2 + 0x34)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,cVar3);
    }
    *(char *)((longlong)plVar2 + 0x34) = cVar3;
    *(undefined4 *)(plVar2 + 6) = 0;
  }
  return 1;
}



// FUNCTION 140526830 FUN_140526830 body=92 status=ok
// SIG undefined FUN_140526830(void)

void FUN_140526830(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe0))();
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_14051ac90(param_1);
    FUN_14051b140(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x90))(*(longlong **)(param_1 + 0x48),param_2);
    FUN_14051b660(param_1);
  }
  return;
}



// FUNCTION 140526890 FUN_140526890 body=679 status=ok
// SIG undefined FUN_140526890(void)

undefined8 FUN_140526890(longlong param_1,float param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  LARGE_INTEGER *pLVar10;
  float fVar11;
  LARGE_INTEGER local_res8 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_e8;
  LARGE_INTEGER *pLStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  LARGE_INTEGER *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  char local_90;
  char cStack_8f;
  double local_88;
  longlong *local_80;
  longlong lStack_78;
  LARGE_INTEGER *pLStack_70;
  undefined1 auStack_68 [16];
  undefined8 local_58;
  
  QueryPerformanceCounter(local_res8);
  local_88 = (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
  local_res8[0].QuadPart = (LONGLONG)&local_88;
  FUN_1404f7220(param_1 + 0x108,local_res8);
  FUN_14052a1d0();
  plVar1 = (longlong *)(param_1 + 0x88);
  local_e8 = 0x100000000;
  iVar8 = *(int *)(param_1 + 0xb0);
  pLStack_e0 = (LARGE_INTEGER *)(param_1 + 0x98);
  iStack_d4 = 0;
  iStack_d0 = 0;
  if (iVar8 != 0) {
    pLVar10 = *(LARGE_INTEGER **)(param_1 + 0xa8);
    if (*(LARGE_INTEGER **)(param_1 + 0xa8) == (LARGE_INTEGER *)0x0) {
      pLVar10 = pLStack_e0;
    }
    uVar3 = (pLVar10->s).LowPart;
    iStack_d0 = 0;
    iVar4 = 0;
    while (uVar3 == 0) {
      iStack_d0 = iStack_d0 + 0x20;
      uVar2 = (ulonglong)local_e8 >> 0x20;
      local_e8 = CONCAT44((int)uVar2,iVar4 + 1);
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1405269b1;
      uVar3 = *(uint *)((longlong)pLVar10 + ((longlong)iVar4 + 1) * 4);
      iVar4 = iVar4 + 1;
    }
    uVar3 = -uVar3 & uVar3;
    iVar4 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    local_e8 = CONCAT44(uVar3,(undefined4)local_e8);
    if (uVar3 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_d4 = (iStack_d0 - iVar4) + 0x1f;
    if (iVar8 < iStack_d4) {
LAB_1405269b1:
      iStack_d4 = iVar8;
    }
  }
  local_d8 = 0xffffffff;
  uStack_b0 = CONCAT44(iStack_d4,0xffffffff);
  auStack_68._8_4_ = iStack_d0;
  auStack_68._0_8_ = uStack_b0;
  auStack_68._12_4_ = uStack_cc;
  lStack_78 = local_e8;
  local_90 = '\0';
  cStack_8f = '\0';
  local_58._0_4_ = SUB84(plVar1,0);
  local_58._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_c0 = local_e8;
  local_a8._8_4_ = (undefined4)local_58;
  local_a8._0_8_ = auStack_68._8_8_;
  local_a8._12_4_ = local_58._4_4_;
  iVar8 = iStack_d4;
  local_c8 = plVar1;
  local_b8 = pLStack_e0;
  local_98 = plVar1;
  local_80 = plVar1;
  pLStack_70 = pLStack_e0;
  local_58 = plVar1;
  if (iStack_d4 < *(int *)(param_1 + 0xb0)) {
    do {
      lVar9 = (longlong)iVar8 * 0x30 + *local_c8;
      fVar11 = *(float *)(lVar9 + 0x20) - param_2;
      local_res8[0]._0_4_ = fVar11;
      if (0.0 <= fVar11) {
        pLStack_e0 = local_res8;
        local_e8 = lVar9;
        FUN_1404f6130(plVar1,local_res20,&local_e8,0);
      }
      else {
        piVar5 = (int *)FUN_14050d080(param_1 + 0x28,local_res18,lVar9);
        if ((*piVar5 == -1) &&
           (plVar6 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8), *plVar6 != 0)) {
          puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8);
          (**(code **)(*(longlong *)*puVar7 + 0x20))
                    ((longlong *)*puVar7,*(undefined8 *)(lVar9 + 0x18));
        }
        FUN_14051fa70(local_a8._8_8_,iVar8);
        local_90 = '\x01';
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iVar8 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)local_b8[3].s.LowPart);
    if ((local_90 != '\0') && (cStack_8f != '\0')) {
      TSet<TTuple<FUniqueNetIdSteam,int>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,int,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  return 1;
}



// FUNCTION 140526b50 FUN_140526b50 body=653 status=ok
// SIG undefined FUN_140526b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140526b50(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  undefined4 local_480;
  int local_478 [2];
  LARGE_INTEGER local_470 [3];
  byte local_458 [2];
  double local_456;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  plVar3 = *(longlong **)(param_1 + 0x28);
  local_478[0] = 0;
  if (plVar3 != (longlong *)0x0) {
    local_488 = *(undefined8 *)(param_1 + 0x38);
    local_480 = 0;
    cVar6 = (**(code **)(*plVar3 + 0x58))(plVar3,local_458,0x400,local_478);
    while ((cVar6 != '\0' && (0 < local_478[0]))) {
      if ((local_458[0] & 0xfd) == 0) {
        FUN_140512c30(param_1,param_1 + 0x38,local_458);
      }
      local_488 = *(undefined8 *)(param_1 + 0x38);
      local_480 = 0;
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
                        (*(longlong **)(param_1 + 0x28),local_458,0x400,local_478);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    local_488 = *(undefined8 *)(param_1 + 0x38);
    local_480 = 0;
    cVar6 = (**(code **)(*plVar3 + 0x58))(plVar3,local_458,0x400,local_478);
    iVar2 = local_478[0];
    while ((cVar6 != '\0' && (0 < iVar2))) {
      local_478[0] = iVar2;
      if ((local_458[0] == 1) || (local_458[0] == 3)) {
        puVar7 = *(undefined8 **)(param_1 + 0x58);
        puVar1 = puVar7 + (longlong)*(int *)(param_1 + 0x60) * 9;
        for (; puVar7 != puVar1; puVar7 = puVar7 + 9) {
          cVar6 = (**(code **)(*(longlong *)*puVar7 + 0x70))
                            ((longlong *)*puVar7,*(undefined8 *)(param_1 + 0x38));
          dVar5 = local_456;
          if (cVar6 != '\0') {
            if (iVar2 != 0) {
              if (local_458[0] == 1) {
                if (*(int *)(puVar7 + 5) == 1) {
                  *(undefined4 *)(puVar7 + 5) = 2;
                }
              }
              else if (local_458[0] == 3) {
                if (*(int *)(puVar7 + 5) - 2U < 2) {
                  QueryPerformanceCounter(local_470);
                  iVar2 = *(int *)(puVar7 + 7);
                  dVar4 = (double)local_470[0].QuadPart * DAT_1468b02f8;
                  *(int *)(puVar7 + 7) = iVar2 + 1;
                  if (*(int *)((longlong)puVar7 + 0x3c) < iVar2 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (puVar7 + 6,iVar2);
                  }
                  *(double *)(puVar7[6] + (longlong)iVar2 * 8) = (dVar4 + 16777216.0) - dVar5;
                  if (*(int *)(puVar7 + 7) == *(int *)(param_1 + 0x10)) {
                    *(undefined4 *)(puVar7 + 5) = 4;
                  }
                }
              }
              else {
                *(undefined4 *)(puVar7 + 5) = 5;
              }
            }
            break;
          }
        }
      }
      local_488 = *(undefined8 *)(param_1 + 0x38);
      local_480 = 0;
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x58))
                        (*(longlong **)(param_1 + 0x30),local_458,0x400,local_478);
      iVar2 = local_478[0];
    }
  }
  return;
}



// FUNCTION 140526de0 FUN_140526de0 body=1267 status=ok
// SIG undefined FUN_140526de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140526de0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  longlong *local_118;
  longlong *local_110;
  undefined1 local_108 [8];
  longlong local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar10 = (longlong *)0x0;
  local_120 = 0;
  cVar3 = FUN_140517550(param_1 + 0x6d);
  if (cVar3 != '\0') {
    plVar7 = (longlong *)param_1[0x22];
    plVar6 = plVar7 + (longlong)(int)param_1[0x23] * 2;
    for (; plVar7 != plVar6; plVar7 = plVar7 + 2) {
      if (((int)plVar7[1] != 0) && (*plVar7 != 0)) {
        plVar6 = (longlong *)operator_new(0x20);
        plVar7 = plVar10;
        if (plVar6 != (longlong *)0x0) {
          plVar7 = (longlong *)
                   (**(code **)(*(longlong *)param_1[0x70] + 0x10))
                             ((longlong *)param_1[0x70],local_108);
          local_100 = *plVar7;
          plVar6[1] = 0;
          plVar6[2] = 0;
          *plVar6 = (longlong)&PTR_FUN_143f9a6c8;
          plVar6[3] = local_100;
          plVar7 = plVar6;
        }
        plVar8 = (longlong *)operator_new(0x18);
        plVar6 = plVar10;
        if (plVar8 != (longlong *)0x0) {
          *(undefined4 *)(plVar8 + 1) = 1;
          *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
          *plVar8 = (longlong)&PTR_FUN_143f7de48;
          plVar8[2] = (longlong)plVar7;
          plVar6 = plVar8;
        }
        plVar8 = plVar7 + 1;
        if (plVar7 == (longlong *)0x0) {
          plVar8 = plVar10;
        }
        if (plVar8 != (longlong *)0x0) {
          if ((*plVar8 != 0) && (plVar8[1] != 0)) {
            piVar1 = (int *)(plVar8[1] + 8);
            LOCK();
            iVar5 = *piVar1;
            if (iVar5 == 0) {
              *piVar1 = 0;
              iVar5 = 0;
            }
            UNLOCK();
            if (0 < iVar5) goto LAB_140526f9e;
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          *plVar8 = (longlong)plVar7;
          plVar10 = (longlong *)plVar8[1];
          if (plVar6 != plVar10) {
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
              UNLOCK();
              plVar10 = (longlong *)plVar8[1];
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
            plVar8[1] = (longlong)plVar6;
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar6 + 1;
            lVar2 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
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
        }
LAB_140526f9e:
        cVar3 = FUN_140516f70(param_1,param_1 + 0x6d);
        if (cVar3 == '\0') {
          puVar9 = (undefined8 *)operator_new(0x138);
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)0x0;
            bVar4 = false;
          }
          else {
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            lVar2 = param_1[0x6d];
            FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar9,param_1[0x51],0);
            puVar9[5] = lVar2;
            *puVar9 = &PTR_FUN_143f9b6f8;
            puVar9[6] = plVar7;
            puVar9[7] = plVar6;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            puVar9[8] = 0;
            puVar9[9] = 0;
            *(undefined4 *)(puVar9 + 10) = 2;
            puVar9[0xb] = &PTR_FUN_143f769a8;
            puVar9[0xc] = 0;
            puVar9[0xd] = 0;
            puVar9[0xe] = 0;
            puVar9[0xf] = 0;
            puVar9[0x10] = &PTR_FUN_143f769a0;
            puVar9[0x11] = 0;
            puVar9[0x12] = 0;
            *(undefined2 *)(puVar9 + 0x13) = 0;
            *(undefined8 *)((longlong)puVar9 + 0x9c) = 0;
            *(undefined4 *)((longlong)puVar9 + 0xa4) = 0;
            puVar9[0x15] = 0;
            puVar9[0x16] = 0;
            puVar9[0x19] = 0;
            puVar9[0x1a] = 0;
            *(undefined4 *)(puVar9 + 0x1b) = 0xffffffff;
            *(undefined4 *)((longlong)puVar9 + 0xdc) = 0;
            puVar9[0x1d] = 0;
            *(undefined4 *)(puVar9 + 0x1e) = 0;
            puVar9[0x1f] = 0;
            puVar9[0x20] = 0;
            puVar9[0x21] = 0;
            *(undefined4 *)(puVar9 + 0x22) = 9999;
            puVar9[0x23] = &PTR_FUN_143f9ad78;
            puVar9[0x26] = &LAB_1405199f0;
            *(undefined1 *)(puVar9 + 0x24) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x124) = 0;
            puVar9[0x25] = puVar9;
            SteamAPI_RegisterCallback(puVar9 + 0x23,0x1f9);
            bVar4 = true;
          }
          if ((bVar4) && (plVar6 != (longlong *)0x0)) {
            LOCK();
            plVar10 = plVar6 + 1;
            lVar2 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
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
          FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(param_1[0x51] + 0x148),puVar9);
        }
        else {
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_c0 = 0;
          local_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = &PTR_FUN_143f769a8;
          local_138 = &local_f8;
          local_d0 = &PTR_FUN_143f769a0;
          local_d8 = 0;
          local_c8 = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_ac = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0xffffffff;
          local_74 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          local_40 = 9999;
          local_118 = plVar7;
          local_110 = plVar6;
          (**(code **)(*param_1 + 0x220))(param_1,5,&local_118,0);
          FUN_1404bf650(&local_f8);
          plVar10 = local_110;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_110 + 1;
            lVar2 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
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
        }
        uStack_124 = 0;
        local_128 = 0;
        param_1[0x6d] = 0;
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar10 = plVar6 + 1;
        lVar2 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar2 != 1) {
          return;
        }
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405272e0 FUN_1405272e0 body=1006 status=ok
// SIG undefined FUN_1405272e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1405272e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  double *pdVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined1 *_Dst;
  longlong lVar15;
  double dVar16;
  undefined1 auStack_b8 [48];
  undefined1 local_88;
  undefined1 local_87 [3];
  undefined4 local_84;
  undefined4 local_80 [2];
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58 [2];
  ulonglong local_48;
  
  puVar13 = auStack_b8;
  local_48 = DAT_1468387a8 ^ (ulonglong)&local_88;
  _Dst = (undefined1 *)0x0;
  if ((0 < (int)param_1[0xe]) && ((int)param_1[0xc] < (int)param_1[1])) {
    plVar6 = (longlong *)((undefined8 *)param_1[0xd])[1];
    uVar7 = *(undefined8 *)param_1[0xd];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    iVar11 = (int)param_1[0xc];
    lVar15 = (longlong)iVar11;
    *(int *)(param_1 + 0xc) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 100) < iVar11 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar11);
    }
    lVar12 = param_1[0xb];
    *(undefined8 *)(lVar12 + lVar15 * 0x48) = uVar7;
    *(longlong **)(lVar12 + 8 + lVar15 * 0x48) = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(lVar12 + 0x10 + lVar15 * 0x48) = 0;
    *(undefined8 *)(lVar12 + 0x18 + lVar15 * 0x48) = 0;
    *(undefined8 *)(lVar12 + 0x20 + lVar15 * 0x48) = 0;
    *(undefined4 *)(lVar12 + 0x28 + lVar15 * 0x48) = 0;
    *(undefined8 *)(lVar12 + 0x30 + lVar15 * 0x48) = 0;
    *(undefined8 *)(lVar12 + 0x38 + lVar15 * 0x48) = 0;
    *(undefined4 *)(lVar12 + 0x40 + lVar15 * 0x48) = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 0xd,0,1,1);
  }
  iVar11 = *(int *)((longlong)param_1 + 0x14);
  if (iVar11 != 0) {
    uVar10 = (longlong)(iVar11 + 0xf) + 0xf;
    if (uVar10 <= (ulonglong)(longlong)(iVar11 + 0xf)) {
      uVar10 = 0xffffffffffffff0;
    }
    puVar13 = auStack_b8 + -(uVar10 & 0xfffffffffffffff0);
    _Dst = (undefined1 *)((longlong)local_80 + -(uVar10 & 0xfffffffffffffff0));
  }
  *(undefined8 *)(puVar13 + -8) = 0x140527440;
  _guard_xfg_dispatch_icall_nop(_Dst,0xfe,(longlong)iVar11);
  puVar14 = (undefined8 *)param_1[0xb];
  iVar11 = (int)param_1[0xc];
  puVar3 = puVar14 + (longlong)iVar11 * 9;
  if (puVar14 != puVar3) {
    do {
      iVar11 = *(int *)(puVar14 + 5);
      if (iVar11 == 0) {
        plVar6 = (longlong *)param_1[6];
        local_88 = 0;
        local_80[0] = 0;
        lVar15 = *plVar6;
        *(undefined4 *)(plVar6 + 0xb) = 2;
        *(undefined8 *)(puVar13 + 0x20) = *puVar14;
        pcVar8 = *(code **)(lVar15 + 0x48);
        *(undefined8 *)(puVar13 + -8) = 0x1405275c6;
        (*pcVar8)(plVar6,&local_88,1,local_80);
        *(undefined4 *)(plVar6 + 0xb) = 1;
        *(undefined8 *)(puVar13 + -8) = 0x1405275d7;
        QueryPerformanceCounter(local_58);
        dVar16 = (double)local_58[0].QuadPart * DAT_1468b02f8;
        *(undefined4 *)(puVar14 + 5) = 1;
        puVar14[3] = dVar16 + 16777216.0;
      }
      else if (iVar11 == 1) {
        *(undefined8 *)(puVar13 + -8) = 0x140527562;
        QueryPerformanceCounter(&local_60);
        if ((double)*(float *)((longlong)param_1 + 0x1c) <
            ((double)local_60.QuadPart * DAT_1468b02f8 + 16777216.0) - (double)puVar14[3]) {
          *(undefined4 *)(puVar14 + 5) = 4;
        }
      }
      else if (iVar11 == 2) {
        *(undefined8 *)(puVar13 + -8) = 0x1405274cf;
        QueryPerformanceCounter(&local_70);
        puVar14[4] = (double)local_70.QuadPart * DAT_1468b02f8 + 16777216.0;
        if (*(int *)(puVar14 + 2) < (int)param_1[2]) {
          *_Dst = 2;
          _Dst[1] = *(undefined1 *)(puVar14 + 2);
          *(undefined8 *)(puVar13 + -8) = 0x140527507;
          QueryPerformanceCounter(&local_68);
          local_84 = 0;
          *(double *)(_Dst + 2) = (double)local_68.QuadPart * DAT_1468b02f8 + 16777216.0;
          plVar6 = (longlong *)param_1[6];
          uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
          *(undefined8 *)(puVar13 + 0x20) = *puVar14;
          pcVar8 = *(code **)(*plVar6 + 0x48);
          *(undefined8 *)(puVar13 + -8) = 0x140527544;
          (*pcVar8)(plVar6,_Dst,uVar4,&local_84);
          *(int *)(puVar14 + 2) = *(int *)(puVar14 + 2) + 1;
        }
        else {
          *(undefined4 *)(puVar14 + 5) = 3;
        }
      }
      else if (iVar11 == 3) {
        *(undefined8 *)(puVar13 + -8) = 0x14052748d;
        QueryPerformanceCounter(&local_78);
        if ((double)*(float *)(param_1 + 3) <
            ((double)local_78.QuadPart * DAT_1468b02f8 + 16777216.0) - (double)puVar14[4]) {
          *(undefined4 *)(puVar14 + 5) = 4;
        }
      }
      puVar14 = puVar14 + 9;
    } while (puVar14 != puVar3);
    iVar11 = (int)param_1[0xc];
  }
  lVar12 = param_1[0xb];
  lVar15 = lVar12 + (longlong)iVar11 * 0x48;
  for (; lVar12 != lVar15; lVar12 = lVar12 + 0x48) {
    if (*(int *)(lVar12 + 0x28) - 4U < 2) {
      uVar5 = *(uint *)(lVar12 + 0x38);
      if ((int)uVar5 < 1) {
        *(undefined4 *)(lVar12 + 0x40) = 0xffffffff;
      }
      else {
        pdVar9 = *(double **)(lVar12 + 0x30);
        dVar16 = 0.0;
        uVar10 = (ulonglong)uVar5;
        do {
          dVar16 = dVar16 + *pdVar9;
          pdVar9 = pdVar9 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        *(int *)(lVar12 + 0x40) = (int)((dVar16 / (double)(int)uVar5) * 1000.0);
      }
      pcVar8 = *(code **)(*param_1 + 0x20);
      *(undefined8 *)(puVar13 + -8) = 0x140527685;
      (*pcVar8)(param_1,lVar12,lVar12 + 0x30);
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x14052769b;
  FUN_1404f7610(param_1 + 0xb,local_87);
  *(undefined8 *)(puVar13 + -8) = 0x1405276a7;
  return;
}



// FUNCTION 1405276d0 FUN_1405276d0 body=540 status=ok
// SIG undefined FUN_1405276d0(void)

void FUN_1405276d0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  LARGE_INTEGER local_res8;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  char local_70;
  char cStack_6f;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  QueryPerformanceCounter(&local_res8);
  plVar8 = (longlong *)(param_1 + 0x48);
  local_98._4_4_ = 0;
  uStack_90 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  puStack_58 = (uint *)(param_1 + 0x58);
  local_a8 = 0;
  uStack_a4 = 1;
  dVar4 = (double)local_res8.QuadPart * DAT_1468b02f8;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar10 = puStack_58;
    }
    uVar6 = *puVar10;
    local_a8 = 0;
    uStack_90 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)(int)local_a8;
      uStack_90 = uStack_90 + 0x20;
      uVar6 = local_a8 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
      local_a8 = uVar6;
      if (bVar3) goto LAB_1405277bf;
      uVar6 = puVar10[lVar7 + 1];
    }
    uStack_a4 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_98._4_4_ = (uStack_90 - iVar5) + 0x1f;
    if (iVar1 < local_98._4_4_) {
LAB_1405277bf:
      local_98._4_4_ = iVar1;
    }
  }
  auStack_50._4_4_ = local_98._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_90;
  auStack_50._12_4_ = iStack_8c;
  uStack_60 = local_a8;
  uStack_5c = uStack_a4;
  local_70 = '\0';
  cStack_6f = '\0';
  local_40._0_4_ = SUB84(plVar8,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  bVar3 = local_98._4_4_ < *(int *)(param_1 + 0x70);
  local_78 = plVar8;
  local_68 = plVar8;
  local_40 = plVar8;
  local_98 = puStack_58;
  if (bVar3) {
    do {
      iVar1 = iStack_8c;
      lVar9 = (longlong)iStack_8c * 0x38;
      lVar7 = *plVar8;
      if (5.0 <= (dVar4 + 16777216.0) - *(double *)(lVar9 + 0x20 + lVar7)) {
        plVar2 = *(longlong **)(lVar9 + 0x28 + lVar7);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x560))();
          *(undefined8 *)(lVar9 + 0x28 + lVar7) = 0;
        }
        FUN_14051fb40(local_88._8_8_,iVar1);
        local_70 = '\x01';
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
    if ((local_70 != '\0') && (cStack_6f != '\0')) {
      TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1405278f0 FUN_1405278f0 body=282 status=ok
// SIG undefined FUN_1405278f0(void)

undefined8 FUN_1405278f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  bVar3 = false;
  pwVar5 = L"INVALID";
  plVar1 = *(longlong **)(param_1 + 0x18);
  puVar6 = &DAT_143f3eda8;
  if (plVar1 == (longlong *)0x0) {
    pwVar7 = L"INVALID";
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x68))(plVar1,local_28,1);
    if (*(int *)(puVar4 + 1) == 0) {
      pwVar7 = L"";
      bVar3 = true;
    }
    else {
      pwVar7 = (wchar_t *)*puVar4;
      bVar3 = true;
    }
  }
  bVar2 = false;
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    bVar2 = true;
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x68))(plVar1,local_38,1);
    if (*(int *)(puVar4 + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)*puVar4;
    }
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(param_1 + 0x28,local_48);
  if (*(int *)(puVar4 + 1) != 0) {
    puVar6 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(param_2,L"HostIP: %s SteamP2P: %s SessionId: %s",pwVar5,pwVar7,puVar6);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (bVar2) {
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140527a10 FUN_140527a10 body=621 status=ok
// SIG undefined FUN_140527a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140527a10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_188 [32];
  undefined2 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined1 local_158 [256];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  puVar10 = (undefined2 *)0x0;
  iVar9 = 0;
  local_168 = *(undefined2 **)(param_1 + 0x18);
  uVar2 = (uint)((ulonglong)local_168 >> 0x20);
  if (((uVar2 & 0xf00000) == 0x800000) && ((uVar2 >> 0x12 & 1) != 0)) {
    pwVar7 = L"Lobby [0x%llX]";
  }
  else if ((uVar2 & 0xf00000) == 0x400000) {
    pwVar7 = L"Server [0x%llX]";
  }
  else {
    if ((((((((ulonglong)local_168 & 0xf0000000000000) != 0) && ((uVar2 & 0xf00000) < 0xb00000)) &&
          (((int)uVar2 >> 0x18) - 1U < 4)) &&
         ((iVar8 = (int)local_168, (uVar2 & 0xf00000) != 0x100000 ||
          ((iVar8 != 0 && ((uVar2 & 0xfffff) == 1)))))) &&
        (((uVar2 & 0xf00000) != 0x700000 ||
         ((iVar8 != 0 && (((ulonglong)local_168 & 0xfffff00000000) == 0)))))) &&
       (((uVar2 & 0xf00000) != 0x300000 || (iVar8 != 0)))) {
      plVar3 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730)
      ;
      lVar1 = *plVar3;
      if (lVar1 == 0) {
        pwVar7 = L"UNKNOWN";
      }
      else {
        puVar4 = (undefined8 *)
                 SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
        uVar5 = (**(code **)(*(longlong *)*puVar4 + 0x38))
                          ((longlong *)*puVar4,*(undefined8 *)(param_1 + 0x18));
        lVar6 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                TStringConversion<FUTF8ToTCHAR_Convert,128>(local_158,uVar5);
        pwVar7 = *(wchar_t **)(lVar6 + 0x108);
      }
      local_168 = (undefined2 *)0x0;
      local_15c = 0;
      if ((pwVar7 != (wchar_t *)0x0) && (*pwVar7 != L'\0')) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pwVar7[lVar6] != L'\0');
        iVar8 = (int)lVar6 + 1;
        local_160 = iVar8;
        if (0 < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
        }
        iVar9 = local_160;
        puVar10 = local_168;
        FGenericPlatformString::Memcpy(local_168,pwVar7,(longlong)iVar8 * 2);
      }
      if ((lVar1 != 0) && (local_58 != 0)) {
        FMemory::Free();
      }
      puVar11 = &DAT_143f3eda8;
      if (iVar9 != 0) {
        puVar11 = puVar10;
      }
      FString::PrintfImpl(param_2,L"%s [0x%llX]",puVar11,*(undefined8 *)(param_1 + 0x18));
      if (puVar10 == (undefined2 *)0x0) {
        return param_2;
      }
      FMemory::Free(puVar10);
      return param_2;
    }
    pwVar7 = L"INVALID [0x%llX]";
  }
  FString::PrintfImpl(param_2,pwVar7);
  return param_2;
}



// FUNCTION 140527c80 ToSteamLobbyCompareOp body=58 status=ok
// SIG undefined ToSteamLobbyCompareOp(void)

undefined8 ToSteamLobbyCompareOp(int param_1)

{
  if (param_1 == 1) {
    return 3;
  }
  if (param_1 == 2) {
    return 1;
  }
  if (param_1 == 3) {
    return 2;
  }
  if (param_1 != 4) {
    if (param_1 != 5) {
      return 0;
    }
    return 0xfffffffe;
  }
  return 0xffffffff;
}



// FUNCTION 140527cc0 FUN_140527cc0 body=96 status=ok
// SIG undefined FUN_140527cc0(void)

undefined8 FUN_140527cc0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  
  if (param_3 != '\0') {
    uVar1 = (**(code **)(*param_1 + 0x38))();
    FString::PrintfImpl(param_2,L"%lld:%i",param_1[4],uVar1);
    return param_2;
  }
  FString::PrintfImpl(param_2,L"%lld",param_1[4]);
  return param_2;
}



// FUNCTION 140527d20 FUN_140527d20 body=62 status=ok
// SIG undefined FUN_140527d20(void)

undefined8 * FUN_140527d20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x3e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"FOnlineAsyncEventServersConnected: Connected to Steam servers",0x7c);
  return param_2;
}



// FUNCTION 140527d60 GetDescription body=62 status=ok
// SIG undefined GetDescription(void)

undefined8 * UDeleteActorAction::GetDescription(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x47;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"FOnlineAsyncEventServersDisconnected: Lost connection to Steam servers",0x8e
            );
  return param_2;
}



// FUNCTION 140527da0 FUN_140527da0 body=394 status=ok
// SIG undefined FUN_140527da0(void)

undefined8 FUN_140527da0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 == 0) {
    FString::PrintfImpl(&local_38,L"\'%i\' %s (%s)",0,L"k_EP2PSessionErrorNone",L"None");
    puVar3 = local_38;
    iVar2 = (int)local_30;
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
  }
  else if (iVar2 == 2) {
    FString::PrintfImpl(&local_48,L"\'%i\' %s (%s)",2,L"k_EP2PSessionErrorNoRightsToApp",
                        L"NoRightsToApp");
    puVar3 = local_48;
    iVar2 = (int)local_40;
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
  }
  else if (iVar2 == 4) {
    FString::PrintfImpl(&local_58,L"\'%i\' %s (%s)",4,L"k_EP2PSessionErrorTimeout",L"Timeout");
    puVar3 = local_58;
    iVar2 = (int)local_50;
    local_58 = (undefined2 *)0x0;
    local_50 = 0;
  }
  else {
    FString::PrintfImpl(&local_68,L"Unknown EP2PSessionError result: %i (check Steam SDK)");
    puVar3 = local_68;
    iVar2 = (int)local_60;
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
  }
  puVar4 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar5 = puVar3;
  }
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x18) + 0x30))(param_1 + 0x18,local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"FOnlineAsyncEventSteamConnectionFailed RemoteId: %s Reason: %s",
                      puVar4,puVar5);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return param_2;
}



// FUNCTION 140527f30 ToString body=82 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineAsyncEventSteamConnectionRequest::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x20) + 0x30))(param_1 + 0x20,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"FOnlineAsyncEventSteamConnectionRequest RemoteId: %s",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140527f90 FUN_140527f90 body=62 status=ok
// SIG undefined FUN_140527f90(void)

undefined8 * FUN_140527f90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x32;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FOnlineAsyncEventSteamDlcInstalled: Dlc Installed",100);
  return param_2;
}



// FUNCTION 140527fd0 ToString body=38 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineAsyncEventSteamExternalUITriggered::ToString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncEventSteamExternalUITriggered bIsActive: %d",
                      *(undefined1 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 140528000 FUN_140528000 body=62 status=ok
// SIG undefined FUN_140528000(void)

undefined8 * FUN_140528000(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x45;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"FOnlineAsyncEventSteamGetAuthSessionTicket ticket response received.",0x8a);
  return param_2;
}



// FUNCTION 140528040 FUN_140528040 body=62 status=ok
// SIG undefined FUN_140528040(void)

undefined8 * FUN_140528040(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x37;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"FOnlineAsyncEventLicensesUpdated: Game license updated",0x6e);
  return param_2;
}



// FUNCTION 140528080 FUN_140528080 body=366 status=ok
// SIG undefined FUN_140528080(void)

undefined8 FUN_140528080(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  undefined **local_28;
  undefined8 local_20;
  longlong *plStack_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_1 + 0x28);
  local_30 = *(undefined8 *)(param_1 + 0x20);
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_28 = &PTR_FUN_143f9a6c8;
  local_48 = &PTR_FUN_143f9a6c8;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  puVar3 = (undefined8 *)SteamChatMemberStateChangeString(local_58,*(undefined4 *)(param_1 + 0x30));
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  puVar3 = (undefined8 *)(*(code *)local_28[6])(&local_28,local_68);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  puVar3 = (undefined8 *)(*(code *)local_48[6])(&local_48,local_78);
  if (*(int *)(puVar3 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar3;
  }
  FString::PrintfImpl(param_2,
                      L"FOnlineAsyncEventSteamLobbyChatUpdate User: %s Instigator: %s Result: %s",
                      puVar4,puVar6,puVar5);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  local_48 = &PTR_FUN_143f73cd8;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_38 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plStack_38 != (longlong *)0x0)) {
      (**(code **)(*plStack_38 + 8))(plStack_38,1);
    }
  }
  local_28 = &PTR_FUN_143f73cd8;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_18 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plStack_18 != (longlong *)0x0)) {
      (**(code **)(*plStack_18 + 8))(plStack_18,1);
    }
  }
  return param_2;
}



// FUNCTION 1405281f0 FUN_1405281f0 body=232 status=ok
// SIG undefined FUN_1405281f0(void)

undefined8 FUN_1405281f0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_48 [2];
  longlong local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  longlong *plStack_18;
  undefined8 local_10;
  
  local_28 = &PTR_FUN_143f9a6c8;
  local_10 = *(undefined8 *)(param_1 + 0x18);
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  puVar3 = (undefined8 *)FUN_140523970(local_38,*(undefined4 *)(param_1 + 0x28));
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  puVar3 = (undefined8 *)(*(code *)local_28[6])(&local_28,local_48);
  if (*(int *)(puVar3 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar3;
  }
  FString::PrintfImpl(param_2,L"FOnlineAsyncEventSteamLobbyEnter LobbyId: %s Result: %s",puVar5,
                      puVar4);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_28 = &PTR_FUN_143f73cd8;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_18 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plStack_18 != (longlong *)0x0)) {
      (**(code **)(*plStack_18 + 8))(plStack_18,1);
    }
  }
  return param_2;
}



// FUNCTION 1405282e0 ToString body=82 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineAsyncEventSteamLobbyUpdate::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x18) + 0x30))(param_1 + 0x18,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"FOnlineAsyncEventSteamLobbyUpdate LobbyId: %s",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140528340 FUN_140528340 body=33 status=ok
// SIG undefined FUN_140528340(void)

undefined8 FUN_140528340(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncEventSteamScreenshotCaptured ");
  return param_2;
}



// FUNCTION 140528370 ToString body=33 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineAsyncEventSteamShutdown::ToString(undefined8 param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncEventSteamShutdown shutdown received.");
  return param_2;
}



// FUNCTION 1405283a0 ToString body=82 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineAsyncEventSteamStatsUnloaded::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x18) + 0x30))(param_1 + 0x18,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"FOnlineAsyncEventSteamStatsUnloaded UserId: %s",puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140528400 FUN_140528400 body=62 status=ok
// SIG undefined FUN_140528400(void)

undefined8 * FUN_140528400(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FOnlineIdentitySteam::ReadProfileImage()",0x52);
  return param_2;
}



// FUNCTION 140528440 FUN_140528440 body=38 status=ok
// SIG undefined FUN_140528440(void)

undefined8 FUN_140528440(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamCheckProductOwnershipList bWasSuccessful:%d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 140528470 FUN_140528470 body=51 status=ok
// SIG undefined FUN_140528470(void)

undefined8 FUN_140528470(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,
                      L"FOnlineAsyncTaskSteamCreateLobby bWasSuccessful: %d LobbyId: %llu LobbyType: %d"
                      ,*(undefined1 *)(param_1 + 0x19),*(undefined8 *)(param_1 + 0x28),
                      *(undefined4 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 1405284b0 FUN_1405284b0 body=38 status=ok
// SIG undefined FUN_1405284b0(void)

undefined8 FUN_1405284b0(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamFindLobbies bWasSuccessful: %d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 1405284e0 FUN_1405284e0 body=38 status=ok
// SIG undefined FUN_1405284e0(void)

undefined8 FUN_1405284e0(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamFindPlayerSession bWasSuccessful: %d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 140528510 FUN_140528510 body=38 status=ok
// SIG undefined FUN_140528510(void)

undefined8 FUN_140528510(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamGetInvitation bWasSuccessful: %d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 140528540 ToString body=168 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineAsyncTaskSteamLeaveLobby::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x30) + 0x30))(param_1 + 0x30,local_18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x28,local_28);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,
                      L"FOnlineAsyncTaskSteamJoinLobby bWasSuccessful: %d Session: %s LobbyId: %s",
                      *(undefined1 *)(param_1 + 0x19),puVar3,puVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1405285f0 FUN_1405285f0 body=38 status=ok
// SIG undefined FUN_1405285f0(void)

undefined8 FUN_1405285f0(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamQoSLobbies bWasSuccessful: %d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 140528620 FUN_140528620 body=98 status=ok
// SIG undefined FUN_140528620(void)

undefined8 FUN_140528620(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))
                     (*(longlong **)(param_1 + 0x28),local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamReadAchievements bWasSuccessful: %d UserId: %s"
                      ,*(undefined1 *)(param_1 + 0x19),puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140528690 DiagnosticMessage body=62 status=ok
// SIG undefined DiagnosticMessage(void)

undefined8 *
FSkeletalMeshComponentPostPhysicsTickFunction::DiagnosticMessage
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FOnlineFriendsSteam::ReadBlockedPlayersList()",0x5c);
  return param_2;
}



// FUNCTION 1405286d0 GetReferencerName body=62 status=ok
// SIG undefined GetReferencerName(void)

undefined8 * FSlateDrawBuffer::GetReferencerName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FOnlineFriendsSteam::ReadDisplayData()",0x4e);
  return param_2;
}



// FUNCTION 140528710 FUN_140528710 body=38 status=ok
// SIG undefined FUN_140528710(void)

undefined8 FUN_140528710(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamReadDownloadableContent bWasSuccessful:%d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 140528740 GetReferencerName body=62 status=ok
// SIG undefined GetReferencerName(void)

undefined8 * FSlateDrawBuffer::GetReferencerName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FOnlineFriendsSteam::ReadFriendsList()",0x4e);
  return param_2;
}



// FUNCTION 140528780 FUN_140528780 body=38 status=ok
// SIG undefined FUN_140528780(void)

undefined8 FUN_140528780(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamReadGameLicenseType bWasSuccessful:%d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 1405287b0 FUN_1405287b0 body=38 status=ok
// SIG undefined FUN_1405287b0(void)

undefined8 FUN_1405287b0(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamReadMarketplaceContent bWasSuccessful:%d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 1405287e0 ToString body=38 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineAsyncTaskSteamRetrieveLeaderboard::ToString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamRetrieveLeaderboard bWasSuccessful: %d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 140528810 ToString body=38 status=ok
// SIG undefined ToString(void)

undefined8
FOnlineAsyncTaskSteamRetrieveLeaderboardEntries::ToString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamRetrieveLeaderboardEntries bWasSuccessful: %d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 140528840 FUN_140528840 body=38 status=ok
// SIG undefined FUN_140528840(void)

undefined8 FUN_140528840(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,
                      L"FOnlineAsyncTaskSteamRetrieveLeaderboardEntriesForUsers bWasSuccessful: %d",
                      *(undefined1 *)(param_1 + 0x19));
  return param_2;
}



// FUNCTION 140528870 FUN_140528870 body=98 status=ok
// SIG undefined FUN_140528870(void)

undefined8 FUN_140528870(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                     (*(longlong **)(param_1 + 0x30),local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamRetrieveStats bWasSuccessful: %d UserId: %s",
                      *(undefined1 *)(param_1 + 0x19),puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1405288e0 ValueToString body=37 status=ok
// SIG undefined ValueToString(void)

undefined8 FAIDataProviderIntValue::ValueToString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamTagScreenshot ScreenshotHandle:%d",
                      *(undefined4 *)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 140528910 ToString body=104 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineAsyncTaskSteamUpdateLeaderboard::ToString(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x30,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,
                      L"FOnlineAsyncTaskSteamUpdateLeaderboard bWasSuccessful: %d Leaderboard: %s Score: %d"
                      ,*(undefined1 *)(param_1 + 0x19),puVar2,*(undefined4 *)(param_1 + 0x40));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140528980 FUN_140528980 body=98 status=ok
// SIG undefined FUN_140528980(void)

undefined8 FUN_140528980(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x30))
                     (*(longlong **)(param_1 + 0x30),local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskSteamUpdateStats bWasSuccessful: %d User: %s",
                      *(undefined1 *)(param_1 + 0x19),puVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1405289f0 ToString body=37 status=ok
// SIG undefined ToString(void)

undefined8 FUniqueNetIdSteam::ToString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"%llu",*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 140528a30 FUN_140528a30 body=119 status=ok
// SIG undefined FUN_140528a30(void)

void FUN_140528a30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))(*(longlong **)(param_1 + 0x10),&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xf0))(local_18,*(undefined1 *)(param_1 + 0x18));
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
  }
  return;
}



// FUNCTION 140528ae0 FUN_140528ae0 body=147 status=ok
// SIG undefined FUN_140528ae0(void)

void FUN_140528ae0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),&local_18);
  if (local_18 != (longlong *)0x0) {
    uVar5 = 2;
    if (*(char *)(param_1 + 0x19) != '\0') {
      uVar5 = 1;
    }
    (**(code **)(*local_18 + 0x50))(local_18,*(undefined8 *)(param_1 + 0x30),uVar5);
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
  }
  return;
}



// FUNCTION 140528b80 FUN_140528b80 body=375 status=ok
// SIG undefined FUN_140528b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140528b80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_148 [32];
  undefined ***local_128;
  undefined8 local_118;
  longlong local_110 [2];
  undefined **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_58 = 0xffffffff;
  local_20 = 9999;
  local_d0 = 0;
  local_b8 = 0;
  local_d8 = &PTR_FUN_143f769a8;
  local_b0 = &PTR_FUN_143f769a0;
  local_118 = *(undefined8 *)(param_1 + 0x28);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_100 = &PTR_FUN_143f9a6c8;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = local_118;
  if (*(char *)(param_1 + 0x19) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 8;
  }
  else {
    cVar2 = FUN_1405070e0(&local_100,&local_d8);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (*(char *)(param_1 + 100) == '\0') {
    FString::PrintfImpl(local_110,L"%llu",local_118);
    (**(code **)(*plVar1 + 0x1c8))(plVar1,*(undefined4 *)(param_1 + 0x60),local_110,&local_d8);
    if (local_110[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    local_128 = &local_d8;
    (**(code **)(*plVar1 + 0x1a0))
              (plVar1,*(undefined4 *)(param_1 + 0x60),param_1 + 0x30,param_1 + 0x40);
  }
  FUN_1404bf650(&local_d8);
  return;
}



// FUNCTION 140528d00 FUN_140528d00 body=45 status=ok
// SIG undefined FUN_140528d00(void)

void FUN_140528d00(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x220))
            (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x50),param_1 + 0x30,0,
             param_1 + 0x58);
  return;
}



// FUNCTION 140528d30 FUN_140528d30 body=123 status=ok
// SIG undefined FUN_140528d30(void)

void FUN_140528d30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x178))
              (local_18,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x50));
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
  }
  return;
}



// FUNCTION 140528db0 FUN_140528db0 body=155 status=ok
// SIG undefined FUN_140528db0(void)

void FUN_140528db0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_18;
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),&local_18);
    if (local_18 != (longlong *)0x0) {
      uVar5 = 2;
      if (*(char *)(param_1 + 0x19) != '\0') {
        uVar5 = 1;
      }
      (**(code **)(*local_18 + 0x120))(local_18,uVar5);
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
    }
  }
  return;
}



// FUNCTION 140528e50 FUN_140528e50 body=205 status=ok
// SIG undefined FUN_140528e50(void)

void FUN_140528e50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar4 = (longlong *)puVar7[1];
  plVar5 = (longlong *)*puVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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



// FUNCTION 140528f20 FUN_140528f20 body=97 status=ok
// SIG undefined FUN_140528f20(void)

void FUN_140528f20(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x100) = 2;
    uVar1 = 2;
    if (*(char *)(param_1 + 0x19) != '\0') {
      uVar1 = 1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x130))
              (*(longlong **)(param_1 + 0x28),param_1 + 0x30,uVar1,3,
               *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x110),0);
  }
  return;
}



// FUNCTION 140528fb0 FUN_140528fb0 body=150 status=ok
// SIG undefined FUN_140528fb0(void)

void FUN_140528fb0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_18;
  longlong *local_10;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xa8))(plVar3,&local_18);
    if (local_18 != (longlong *)0x0) {
      uVar5 = 2;
      if (*(char *)(param_1 + 0x19) != '\0') {
        uVar5 = 1;
      }
      (**(code **)(*local_18 + 0x28))(local_18,uVar5);
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  return;
}



// FUNCTION 140529050 FUN_140529050 body=453 status=ok
// SIG undefined FUN_140529050(void)

void FUN_140529050(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xe8) = 2;
  lVar3 = *(longlong *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(lVar3 + 0xf8);
  if (*(int *)(param_1 + 0x50) == 2) {
    puVar7 = *(undefined8 **)(lVar3 + 0xf0);
    puVar8 = puVar7 + (longlong)*(int *)(lVar3 + 0xf8) * 2;
    local_28 = 0;
    local_20 = 0;
    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
      lVar3 = (**(code **)(*(longlong *)*puVar7 + 0x38))();
      uVar1 = local_20;
      if ((*(byte *)(lVar3 + 0x10) & 4) != 0) {
        lVar3 = (longlong)(int)local_20;
        iVar2 = (int)local_20 + 1;
        local_20 = CONCAT44(local_20._4_4_,iVar2);
        if (local_20._4_4_ < iVar2) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_28,uVar1 & 0xffffffff);
        }
        puVar4 = (undefined8 *)(lVar3 * 0x10 + local_28);
        *puVar4 = *puVar7;
        lVar3 = puVar7[1];
        puVar4[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
      }
    }
    plVar5 = &local_28;
    uVar6 = (int)local_20;
  }
  else {
    if (*(int *)(param_1 + 0x50) != 1) goto LAB_1405291c7;
    puVar7 = *(undefined8 **)(lVar3 + 0xf0);
    puVar8 = puVar7 + (longlong)*(int *)(lVar3 + 0xf8) * 2;
    local_18 = 0;
    local_10 = 0;
    for (; puVar7 != puVar8; puVar7 = puVar7 + 2) {
      lVar3 = (**(code **)(*(longlong *)*puVar7 + 0x38))();
      uVar1 = local_10;
      if ((*(byte *)(lVar3 + 0x10) & 1) != 0) {
        lVar3 = (longlong)(int)local_10;
        iVar2 = (int)local_10 + 1;
        local_10 = CONCAT44(local_10._4_4_,iVar2);
        if (local_10._4_4_ < iVar2) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,uVar1 & 0xffffffff);
        }
        puVar4 = (undefined8 *)(lVar3 * 0x10 + local_18);
        *puVar4 = *puVar7;
        lVar3 = puVar7[1];
        puVar4[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
      }
    }
    plVar5 = &local_18;
    uVar6 = (int)local_10;
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar5);
LAB_1405291c7:
  uVar9 = 2;
  if (*(char *)(param_1 + 0x19) != '\0') {
    uVar9 = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x130))
            (*(longlong **)(param_1 + 0x28),param_1 + 0x30,uVar9,*(undefined4 *)(param_1 + 0x50),
             uVar6,0);
  return;
}



// FUNCTION 140529220 FUN_140529220 body=74 status=ok
// SIG undefined FUN_140529220(void)

void FUN_140529220(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x38)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1c0))();
  }
  uVar1 = 2;
  if (*(char *)(param_1 + 0x19) != '\0') {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140529263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x108))
            (*(longlong **)(param_1 + 0x28),uVar1,*(undefined4 *)(param_1 + 0x38));
  return;
}



// FUNCTION 1405292a0 FUN_1405292a0 body=255 status=ok
// SIG undefined FUN_1405292a0(void)

void FUN_1405292a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar4 = (longlong *)plVar7[1];
  plVar7 = (longlong *)*plVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if ((int)plVar7[0xe] == 0) {
    if ((*(char *)(param_1 + 0x19) == '\0') ||
       (uVar6 = 2, *(int *)(*(longlong *)(param_1 + 0x40) + 0x30) == 3)) {
      uVar6 = 3;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x30) = uVar6;
    (**(code **)(*plVar7 + 0x48))
              (plVar7,(*(int *)(*(longlong *)(param_1 + 0x40) + 0x30) != 2) + '\x01');
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return;
}



// FUNCTION 1405293b0 FUN_1405293b0 body=197 status=ok
// SIG undefined FUN_1405293b0(void)

void FUN_1405293b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  iVar6 = *(int *)(param_1 + 0x34);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x28) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140529427:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_140529427;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x34);
  }
  *(int *)(param_1 + 0x34) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x20),0);
    return;
  }
  return;
}



// FUNCTION 140529480 FUN_140529480 body=188 status=ok
// SIG undefined FUN_140529480(void)

void FUN_140529480(longlong param_1,undefined4 param_2,undefined8 param_3)

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
LAB_1405294f3:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1405294f3;
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



// FUNCTION 140529550 FUN_140529550 body=188 status=ok
// SIG undefined FUN_140529550(void)

void FUN_140529550(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x1cc);
  iVar5 = *(int *)(param_1 + 0x1c0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1b8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1405295c3:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1405295c3;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1cc);
  }
  *(int *)(param_1 + 0x1cc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1b8),0);
    return;
  }
  return;
}



// FUNCTION 140529660 TriggerOnReadFileProgressDelegates body=176 status=ok
// SIG undefined TriggerOnReadFileProgressDelegates(void)

void IOnlineTitleFile::TriggerOnReadFileProgressDelegates
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  iVar6 = *(int *)(param_1 + 0x4c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x40) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x38);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1405296c7:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1405296c7;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x4c);
  }
  *(int *)(param_1 + 0x4c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x38),0);
    return;
  }
  return;
}



// FUNCTION 140529710 FUN_140529710 body=197 status=ok
// SIG undefined FUN_140529710(void)

void FUN_140529710(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar6 = *(int *)(param_1 + 0x1c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140529787:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_140529787;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 1405297e0 FUN_1405297e0 body=164 status=ok
// SIG undefined FUN_1405297e0(void)

void FUN_1405297e0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x10c);
  iVar5 = *(int *)(param_1 + 0x100) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xf8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140529840:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_140529840;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x10c);
  }
  *(int *)(param_1 + 0x10c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xf8),0);
    return;
  }
  return;
}



// FUNCTION 140529890 FUN_140529890 body=189 status=ok
// SIG undefined FUN_140529890(void)

void FUN_140529890(longlong param_1,undefined1 param_2,undefined8 param_3)

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
LAB_140529904:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140529904;
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



// FUNCTION 140529960 FUN_140529960 body=176 status=ok
// SIG undefined FUN_140529960(void)

void FUN_140529960(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x8c);
  iVar5 = *(int *)(param_1 + 0x80) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x78);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1405299c7:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1405299c7;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x8c);
  }
  *(int *)(param_1 + 0x8c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x78),0);
    return;
  }
  return;
}



// FUNCTION 140529a30 FUN_140529a30 body=241 status=ok
// SIG undefined FUN_140529a30(void)

void FUN_140529a30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xdc);
  iVar5 = *(int *)(param_1 + 0xd0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 200);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140529ac6:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5,param_6);
        if (cVar4 == '\0') goto LAB_140529ac6;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xdc);
  }
  *(int *)(param_1 + 0xdc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 200),0);
    return;
  }
  return;
}



// FUNCTION 140529b30 FUN_140529b30 body=188 status=ok
// SIG undefined FUN_140529b30(void)

void FUN_140529b30(longlong param_1,undefined4 param_2,undefined4 param_3)

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
LAB_140529ba3:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140529ba3;
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



// FUNCTION 140529c20 TriggerOnLoginChangedDelegates body=164 status=ok
// SIG undefined TriggerOnLoginChangedDelegates(void)

void IOnlineIdentity::TriggerOnLoginChangedDelegates(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar6 = *(int *)(param_1 + 0x1c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140529c80:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_140529c80;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 140529d40 FUN_140529d40 body=241 status=ok
// SIG undefined FUN_140529d40(void)

void FUN_140529d40(longlong param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

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
  
  bVar5 = false;
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
  iVar8 = *(int *)(param_1 + 0x10c);
  iVar7 = *(int *)(param_1 + 0x100) + -1;
  lVar10 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar9 = lVar10 << 4;
    bVar5 = false;
    do {
      lVar3 = *(longlong *)(param_1 + 0xf8);
      if ((*(int *)(lVar9 + 8 + lVar3) == 0) ||
         (plVar4 = *(longlong **)(lVar9 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_140529db6:
        bVar5 = true;
      }
      else {
        cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,param_2,param_3,param_4);
        if (cVar6 == '\0') goto LAB_140529db6;
      }
      lVar9 = lVar9 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
    iVar8 = *(int *)(param_1 + 0x10c);
  }
  *(int *)(param_1 + 0x10c) = iVar8 + -1;
  if (bVar5) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xf8),0);
  }
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
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



// FUNCTION 140529e40 FUN_140529e40 body=210 status=ok
// SIG undefined FUN_140529e40(void)

void FUN_140529e40(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  iVar6 = *(int *)(param_1 + 100);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x58) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x50);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140529ebf:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_140529ebf;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 100) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x50),0);
    return;
  }
  return;
}



// FUNCTION 140529f90 FUN_140529f90 body=178 status=ok
// SIG undefined FUN_140529f90(void)

void FUN_140529f90(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  iVar6 = *(int *)(param_1 + 0x34);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x28) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140529ff9:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_140529ff9;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x34);
  }
  *(int *)(param_1 + 0x34) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x20),0);
    return;
  }
  return;
}



// FUNCTION 14052a070 FUN_14052a070 body=212 status=ok
// SIG undefined FUN_14052a070(void)

void FUN_14052a070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar6 = *(int *)(param_1 + 0x1c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_14052a0f1:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_14052a0f1;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 8),0);
    return;
  }
  return;
}



// FUNCTION 14052a170 FUN_14052a170 body=91 status=ok
// SIG undefined FUN_14052a170(void)

void FUN_14052a170(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1d8);
    *puVar2 = &PTR_FUN_143f9c9b0;
    puVar2[2] = uVar1;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0x40;
    DAT_146853158 = puVar2;
    return;
  }
  return;
}



// FUNCTION 14052a1d0 FUN_14052a1d0 body=460 status=ok
// SIG undefined FUN_14052a1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14052a1d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_4c8 [32];
  undefined4 *local_4a8;
  undefined4 local_4a0;
  undefined2 local_490;
  undefined2 local_48e;
  undefined1 local_48c [996];
  undefined1 local_a8 [48];
  uint local_78 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined **local_68;
  undefined **local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  puVar6 = local_a8;
  local_38 = DAT_1468387a8 ^ (ulonglong)local_78;
  if (DAT_1468c21b0 != *(longlong *)(param_1 + 0x4628)) {
    puVar6 = auStack_4c8;
    uStack_6c = 0;
    local_70 = 0;
    local_78[0] = 0;
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8);
    local_4a8 = &local_70;
    local_4a0 = 0;
    cVar3 = (**(code **)(*(longlong *)*puVar5 + 0x10))
                      ((longlong *)*puVar5,&local_490,0x404,local_78);
    while (cVar3 != '\0') {
      if (4 < local_78[0]) {
        local_78[0] = local_78[0] - 4;
        local_48 = CONCAT44(uStack_6c,local_70);
        local_68 = &PTR_FUN_143f9a840;
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        local_60 = &PTR_FUN_143f9a6c8;
        uVar4 = Ordinal_15(local_48e);
        local_4a8 = (undefined4 *)CONCAT44(local_4a8._4_4_,local_78[0]);
        FUN_1404ff000(param_1,uVar4,&local_68,local_48c);
        local_60 = &PTR_FUN_143f73cd8;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plStack_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (plStack_50 != (longlong *)0x0)) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      local_78[0] = 0;
      puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8);
      local_4a8 = &local_70;
      local_4a0 = 0;
      cVar3 = (**(code **)(*(longlong *)*puVar5 + 0x10))
                        ((longlong *)*puVar5,&local_490,0x404,local_78);
    }
    *(longlong *)(param_1 + 0x4628) = DAT_1468c21b0;
  }
  *(undefined8 *)(puVar6 + -8) = 0x14052a379;
  return;
}



// FUNCTION 14052a3a0 FUN_14052a3a0 body=90 status=ok
// SIG undefined FUN_14052a3a0(void)

bool FUN_14052a3a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = -0x7fffbffb;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xf8))();
  if (cVar1 != '\0') {
    lVar2 = FUN_14050e930();
    if (lVar2 != 0) {
      FUN_1404de9e0(lVar2,param_2,param_3);
      iVar3 = 0;
    }
  }
  return iVar3 == 0;
}



// FUNCTION 14052a400 FUN_14052a400 body=460 status=ok
// SIG undefined FUN_14052a400(void)

void FUN_14052a400(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  longlong lVar6;
  char local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_98 [2];
  undefined **local_90;
  undefined **local_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  undefined ***local_50;
  undefined ***local_48;
  int *local_40;
  undefined ***local_38;
  undefined4 *local_30;
  longlong local_28 [2];
  
  lVar6 = 0;
  local_70 = 0;
  local_90 = &PTR_FUN_143f9a840;
  local_68 = 0;
  local_88 = &PTR_FUN_143f9a6c8;
  local_80 = 0;
  plStack_78 = (longlong *)0x0;
  local_res10[0] = '\0';
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)*param_2 + 0x68))((longlong *)*param_2,local_28,0);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  FUN_1405213f0(&local_90,puVar5,local_res10);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (((local_res10[0] != '\0') && (cVar2 = (*(code *)local_88[4])(&local_88), cVar2 != '\0')) &&
     (piVar4 = (int *)FUN_14050d080(param_1 + 0xb8,local_60,&local_88), *piVar4 != -1)) {
    FUN_14050d080(param_1 + 0xb8,local_res18,&local_88);
    if (local_res18[0] != -1) {
      lVar6 = (longlong)local_res18[0] * 0x30 + *(longlong *)(param_1 + 0xb8);
    }
    local_res20[0] = *(int *)(lVar6 + 0x20) + -1;
    if (local_res20[0] < 1) {
      FUN_14051f8e0(param_1 + 0xb8,&local_88);
      local_38 = &local_88;
      local_30 = local_98;
      local_98[0] = 0x3f000000;
      FUN_1404f6130(param_1 + 0x118,local_58,&local_38,0);
      local_50 = &local_88;
      FUN_1404f6cc0(param_1 + 0x198,&local_50);
    }
    else {
      local_48 = &local_88;
      local_40 = local_res20;
      FUN_1404f5f10(param_1 + 0xb8,local_5c,&local_48,0);
    }
  }
  local_88 = &PTR_FUN_143f73cd8;
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    piVar4 = (int *)((longlong)plStack_78 + 0xc);
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (plStack_78 != (longlong *)0x0)) {
      (**(code **)(*plStack_78 + 8))(plStack_78,1);
    }
  }
  return;
}



// FUNCTION 14052a5d0 FUN_14052a5d0 body=273 status=ok
// SIG undefined FUN_14052a5d0(void)

bool FUN_14052a5d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 local_18;
  longlong *local_10;
  
  iVar7 = 0;
  if ((((param_1[0xc] != 0) &&
       (cVar6 = (**(code **)(*(longlong *)param_1[7] + 0xf8))(), cVar6 != '\0')) &&
      (puVar3 = (undefined8 *)param_1[0xc], *(char *)(puVar3 + 2) == '\x01')) &&
     (iVar7 = 0, param_1[9] != 0)) {
    if ((*(char *)((longlong)puVar3 + 0x39) != '\0') || (*(char *)(puVar3 + 7) != '\0')) {
      local_18 = *puVar3;
      local_10 = (longlong *)puVar3[1];
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x80))(param_1,&local_18,0);
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
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    (**(code **)(*(longlong *)param_1[9] + 0x18))((longlong *)param_1[9],param_2);
    iVar7 = (**(code **)(*(longlong *)param_1[9] + 0x38))((longlong *)param_1[9],param_2);
    *(undefined1 *)(param_1[0xc] + 0x39) = 0;
    *(undefined1 *)(param_1[0xc] + 0x38) = 0;
    *(undefined1 *)(param_1[0xc] + 0x10) = 0;
  }
  return iVar7 == 0;
}



// FUNCTION 14052a6f0 FUN_14052a6f0 body=168 status=ok
// SIG undefined FUN_14052a6f0(void)

undefined8 FUN_14052a6f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if ((*plVar1 != 0) && (cVar6 = (*(code *)**(undefined8 **)*param_2)(), cVar6 != '\0')) {
    local_10 = (longlong *)0x0;
    if (plVar1 != &local_18) {
      *plVar1 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x28,&local_10);
      plVar1 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_10 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    return 0;
  }
  return 0x80004005;
}



// FUNCTION 14052a7a0 FUN_14052a7a0 body=176 status=ok
// SIG undefined FUN_14052a7a0(void)

void FUN_14052a7a0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 2;
  uVar5 = 2;
  if ((((param_1[0x51] != 0) && (lVar3 = FUN_140511190(), uVar5 = uVar4, lVar3 != 0)) &&
      (cVar1 = (**(code **)(**(longlong **)(lVar3 + 0xa0) + 0x20))(), cVar1 != '\0')) &&
     (iVar2 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
              IndexOfByPredicate<FUniqueNetIdMatcher>(lVar3 + 0xf0,*param_3), iVar2 != -1)) {
    uVar5 = 1;
    TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
              (lVar3 + 0xf0,iVar2,1,1);
    *(int *)(lVar3 + 0xb4) = *(int *)(lVar3 + 0x30) - *(int *)(lVar3 + 0xf8);
  }
  (**(code **)(*param_1 + 0x318))(param_1,param_2,param_3,uVar5);
  return;
}



// FUNCTION 14052a850 FUN_14052a850 body=354 status=ok
// SIG undefined FUN_14052a850(void)

bool FUN_14052a850(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  longlong *local_20;
  
  iVar7 = -0x7fffbffb;
  if ((*(longlong *)(param_1 + 0x48) == 0) || (lVar4 = FUN_14050d940(), lVar4 == 0))
  goto LAB_14052a9a4;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar4 = 0;
    do {
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar4);
      cVar3 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*puVar8);
      if (cVar3 != '\0') {
        plVar5 = *(longlong **)(param_1 + 8);
        plVar6 = plVar5 + (longlong)*(int *)(param_1 + 0x10) * 2;
        if (plVar5 == plVar6) goto LAB_14052a972;
        goto LAB_14052a8e0;
      }
      iVar7 = iVar7 + 1;
      lVar4 = lVar4 + 0x38;
    } while (iVar7 < *(int *)(param_1 + 0x78));
  }
  goto LAB_14052a995;
  while (plVar5 = plVar5 + 2, plVar5 != plVar6) {
LAB_14052a8e0:
    if (((int)plVar5[1] != 0) && (*plVar5 != 0)) {
      if ((*(char *)((longlong)puVar8 + 0x31) != '\0') || (*(char *)(puVar8 + 6) != '\0')) {
        local_28 = *puVar8;
        local_20 = (longlong *)puVar8[1];
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(param_1 + 8,&local_28,0);
        plVar5 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_20 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      break;
    }
  }
LAB_14052a972:
  FUN_1404de720(param_1 + 0x70,iVar7,1,1);
LAB_14052a995:
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))
                    (*(longlong **)(param_1 + 0x48),param_2);
LAB_14052a9a4:
  return iVar7 == 0;
}



// FUNCTION 14052a9c0 FUN_14052a9c0 body=680 status=ok
// SIG undefined FUN_14052a9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14052a9c0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *_Dst;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  int local_150;
  int local_14c;
  longlong local_148;
  int local_140;
  undefined4 local_13c;
  undefined2 *local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_148 = param_1;
  local_13c = param_4;
  local_118 = param_2;
  puVar6 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa8))
                     (*(longlong **)(param_1 + 0x28),local_110);
  iVar5 = (**(code **)(*(longlong *)*puVar6 + 0x118))((longlong *)*puVar6,&local_140);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    param_1 = local_148;
    if ((int)lVar7 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      param_1 = local_148;
      if (iVar9 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
        param_1 = local_148;
      }
    }
  }
  if (((local_140 == 2) && (iVar5 == 2)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                        (*(longlong **)(param_1 + 0x28),param_2), cVar4 != '\0')) {
    puVar10 = (undefined2 *)0x0;
    local_128 = (undefined2 *)0x0;
    local_120 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    puVar8 = local_128;
    FGenericPlatformString::Memcpy(local_128,L"_Stat",0xc);
    FString::PrintfImpl(&local_138,L"Achievement_%d",param_3);
    puVar11 = puVar8;
    iVar5 = (int)local_120;
    if (1 < (int)local_130) {
      iVar9 = 0;
      if ((int)local_120 != 0) {
        iVar9 = (int)local_120 + -1;
      }
      if (((int)local_130 != 0) || (iVar5 = 1, iVar9 == 0)) {
        iVar5 = 0;
      }
      iVar3 = local_130._4_4_;
      iVar5 = (int)local_130 + iVar5;
      local_158 = local_138;
      local_138 = (undefined2 *)0x0;
      local_150 = (int)local_130;
      local_14c = local_130._4_4_;
      local_130 = 0;
      if (iVar3 < iVar5 + iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158);
      }
      iVar3 = local_150;
      puVar10 = puVar8;
      puVar11 = local_158;
      iVar5 = local_150;
      if (iVar9 != 0) {
        lVar7 = (longlong)local_150;
        local_150 = local_150 + (uint)(local_150 == 0) + iVar9;
        if (local_14c < local_150) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,iVar3);
        }
        iVar5 = local_150;
        puVar11 = local_158;
        _Dst = local_158 + (lVar7 - (ulonglong)(iVar3 != 0));
        _guard_xfg_dispatch_icall_nop(_Dst,puVar8,(longlong)iVar9 * 2);
        _Dst[iVar9] = 0;
        param_1 = local_148;
      }
    }
    if (local_138 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free(puVar10);
    }
    (**(code **)(*(longlong *)*local_118 + 0x10))();
    puVar8 = &DAT_143f3eda8;
    if (iVar5 != 0) {
      puVar8 = puVar11;
    }
    lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_f8,puVar8);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                      (*(longlong **)(param_1 + 0x30),*(undefined8 *)(lVar7 + 0x88),local_13c);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))();
    }
    if (puVar11 != (undefined2 *)0x0) {
      FMemory::Free(puVar11);
    }
  }
  return;
}



// FUNCTION 14052ac70 FUN_14052ac70 body=542 status=ok
// SIG undefined FUN_14052ac70(void)

/* WARNING: Removing unreachable block (ram,0x00014052ad2d) */
/* WARNING: Removing unreachable block (ram,0x00014052ad32) */
/* WARNING: Removing unreachable block (ram,0x00014052ad46) */

void FUN_14052ac70(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar2 = param_1 + 0x388;
  FUN_1404b6bd0(lVar2);
  lVar7 = *(longlong *)(param_1 + 0x2b8);
  lVar8 = (longlong)*(int *)(param_1 + 0x2c0) * 0x118 + lVar7;
  if (lVar7 != lVar8) {
    while ((*(char *)(lVar7 + 0x38) == '\0' || (*(char *)(lVar7 + 0xd8) == '\0'))) {
      lVar7 = lVar7 + 0x118;
      if (lVar7 == lVar8) {
        return;
      }
    }
    local_28 = FUN_14051a4a0;
    uStack_20 = 0;
    plVar6 = (longlong *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x278,local_18);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    plVar4 = (longlong *)plVar6[1];
    lVar7 = *plVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)FMemory::Realloc(0,0x40);
    local_30 = 4;
    local_38 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_GetPoolName_143f9e980;
      plVar6[1] = lVar7;
      plVar6[2] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar6 + 3) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = local_28._4_4_;
      *(undefined4 *)(plVar6 + 4) = uStack_20;
      *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_1c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[6] = lVar7;
      *plVar6 = (longlong)&PTR_GetPoolName_143f9e9c8;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar4)(plVar4);
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
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    cVar5 = FUN_1404b0b90(lVar2,&local_38);
    if (cVar5 == '\0') {
      FUN_1404b6bd0(lVar2);
    }
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_38 + 0x28))(local_38,0);
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
      local_30 = 0;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}



// FUNCTION 14052ae90 FUN_14052ae90 body=1964 status=ok
// SIG undefined FUN_14052ae90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14052ae90(longlong *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStack_3b8 [32];
  int local_398;
  code *local_388;
  int iStack_380;
  undefined4 uStack_37c;
  int local_378;
  uint uStack_374;
  uint *puStack_370;
  undefined4 local_368;
  undefined8 uStack_364;
  undefined4 uStack_35c;
  int local_358;
  uint uStack_354;
  uint *puStack_350;
  undefined4 local_348;
  undefined8 uStack_344;
  undefined4 uStack_33c;
  longlong *local_338;
  undefined8 uStack_330;
  uint *local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  longlong *local_310;
  undefined8 uStack_308;
  uint *puStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  longlong local_2c8 [2];
  uint local_2b8 [4];
  uint *local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  longlong local_288;
  undefined4 local_280;
  longlong local_278 [2];
  uint local_268 [4];
  uint *local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  longlong local_238;
  undefined4 local_230;
  undefined1 local_228 [128];
  longlong local_1a8;
  undefined1 local_188 [128];
  longlong local_108;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  local_398 = -0x7fffbffb;
  lVar9 = FUN_140511190();
  uVar14 = 0;
  if (((lVar9 == 0) || (*(uint *)(lVar9 + 0x110) < 2)) || (*(uint *)(lVar9 + 0x110) == 7))
  goto LAB_14052b5fd;
  local_278[0] = 0;
  local_248 = 0xffffffff;
  local_278[1] = 0;
  local_258 = (uint *)0x0;
  local_250 = 0;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  FUN_140510340(lVar9,local_278);
  if (lVar9 + 0x28 != param_3) {
    *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)(param_3 + 0xc);
    *(undefined1 *)(lVar9 + 0x38) = *(undefined1 *)(param_3 + 0x10);
    *(undefined1 *)(lVar9 + 0x39) = *(undefined1 *)(param_3 + 0x11);
    *(undefined1 *)(lVar9 + 0x3c) = *(undefined1 *)(param_3 + 0x14);
    *(undefined1 *)(lVar9 + 0x3d) = *(undefined1 *)(param_3 + 0x15);
    *(undefined1 *)(lVar9 + 0x3f) = *(undefined1 *)(param_3 + 0x17);
    *(undefined1 *)(lVar9 + 0x40) = *(undefined1 *)(param_3 + 0x18);
    *(undefined1 *)(lVar9 + 0x41) = *(undefined1 *)(param_3 + 0x19);
    *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(lVar9 + 0x4c) = *(undefined4 *)(param_3 + 0x24);
    TSet<TTuple<FName,FOnlineSessionSearchParam>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>,FDefaultSetAllocator>
    ::operator=(lVar9 + 0x50,param_3 + 0x28);
  }
  if (*(char *)(lVar9 + 0x3a) == '\0') {
    local_388 = *(code **)(lVar9 + 0xa0);
    cVar5 = (**(code **)(*(longlong *)(local_388 + 0x28) + 0x20))();
    if (cVar5 != '\0') {
      if ((param_4 == '\0') || (plVar3 = (longlong *)param_1[0x6f], plVar3 == (longlong *)0x0))
      goto LAB_14052b5ab;
      uVar6 = FUN_1404ffc30(lVar9 + 0x28);
      pcVar4 = local_388;
      cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3,*(longlong *)(local_388 + 0x40),uVar6);
      if (cVar5 != '\0') {
        iVar7 = (**(code **)(*(longlong *)param_1[0x6f] + 0x88))
                          ((longlong *)param_1[0x6f],*(longlong *)(pcVar4 + 0x40));
        iVar8 = (**(code **)(*(longlong *)param_1[0x6f] + 0x100))
                          ((longlong *)param_1[0x6f],*(longlong *)(pcVar4 + 0x40));
        if ((*(char *)(lVar9 + 0x39) == '\0') || (iVar8 <= iVar7)) {
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
        }
        cVar5 = (**(code **)(*(longlong *)param_1[0x6f] + 0x110))
                          ((longlong *)param_1[0x6f],*(longlong *)(pcVar4 + 0x40),uVar11);
        if ((cVar5 != '\0') &&
           (cVar5 = (**(code **)(*(longlong *)param_1[0x6f] + 0xf8))
                              ((longlong *)param_1[0x6f],*(longlong *)(pcVar4 + 0x40),
                               *(int *)(lVar9 + 0x34) + *(int *)(lVar9 + 0x30)), cVar5 != '\0')) {
          local_398 = 0;
          local_2c8[0] = 0;
          local_2c8[1] = 0;
          local_2a8 = (uint *)0x0;
          local_2a0 = 0;
          local_298 = 0xffffffff;
          local_294 = 0;
          local_288 = 0;
          local_280 = 0;
          FUN_140510340(lVar9,local_2c8);
          puStack_370 = local_268;
          local_378 = 0;
          uStack_374 = 1;
          uStack_364 = 0;
          if ((int)local_250 != 0) {
            puVar15 = local_268;
            if (local_258 != (uint *)0x0) {
              puVar15 = local_258;
            }
            uVar2 = *puVar15;
            uVar13 = uVar14;
            iVar7 = 0;
            while (uVar2 == 0) {
              uVar13 = uVar13 + 0x20;
              local_378 = iVar7 + 1;
              uStack_364 = (ulonglong)uVar13 << 0x20;
              if ((int)((int)local_250 + -1 + ((int)local_250 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7)
              {
                uStack_364 = CONCAT44(uVar13,(int)local_250);
                goto LAB_14052b18a;
              }
              uVar2 = puVar15[(longlong)iVar7 + 1];
              iVar7 = local_378;
            }
            uStack_374 = -uVar2 & uVar2;
            iVar8 = 0x1f;
            if (uStack_374 != 0) {
              for (; uStack_374 >> iVar8 == 0; iVar8 = iVar8 + -1) {
              }
            }
            if (uStack_374 == 0) {
              iVar8 = 0x20;
            }
            else {
              iVar8 = 0x1f - iVar8;
            }
            iVar8 = (uVar13 - iVar8) + 0x1f;
            if ((int)local_250 < iVar8) {
              iVar8 = (int)local_250;
            }
            uStack_364._4_4_ = (undefined4)((ulonglong)uStack_364 >> 0x20);
            uStack_364 = CONCAT44(uStack_364._4_4_,iVar8);
            local_378 = iVar7;
          }
LAB_14052b18a:
          local_368 = 0xffffffff;
          local_338 = local_278;
          uStack_330 = CONCAT44(uStack_374,local_378);
          uStack_2f8 = CONCAT44((int)uStack_364,0xffffffff);
          uStack_2f0 = uStack_364._4_4_;
          uStack_2ec = uStack_35c;
          local_318 = uStack_364._4_4_;
          uStack_314 = uStack_35c;
          uStack_320 = uStack_2f8;
          iVar7 = (int)uStack_364;
          local_328 = puStack_370;
          local_310 = local_338;
          uStack_308 = uStack_330;
          puStack_300 = puStack_370;
          if ((int)uStack_364 < (int)local_250) {
            do {
              if (*(int *)(*local_338 + 8 + (longlong)iVar7 * 0x28) == 0) {
                puVar12 = &DAT_143f3eda8;
              }
              else {
                puVar12 = *(undefined2 **)(*local_338 + (longlong)iVar7 * 0x28);
              }
              lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::
                      TStringConversion<FTCHARToUTF8_Convert,128>(local_228,puVar12);
              cVar5 = (**(code **)(*(longlong *)param_1[0x6f] + 0xa0))
                                ((longlong *)param_1[0x6f],*(longlong *)(pcVar4 + 0x40),
                                 *(undefined8 *)(lVar9 + 0x88),&DAT_143f7e5ce);
              if (local_1a8 != 0) {
                FMemory::Free();
              }
              if (cVar5 == '\0') goto LAB_14052b44f;
              uStack_320 = CONCAT44(uStack_320._4_4_,(uint)uStack_320 & ~uStack_330._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_330);
              iVar7 = uStack_320._4_4_;
            } while (uStack_320._4_4_ < (int)local_328[6]);
          }
          local_358 = 0;
          uStack_354 = 1;
          uStack_344 = 0;
          if ((int)local_2a0 != 0) {
            puVar15 = local_2b8;
            if (local_2a8 != (uint *)0x0) {
              puVar15 = local_2a8;
            }
            uVar2 = *puVar15;
            iVar7 = 0;
            while (uVar2 == 0) {
              uVar14 = uVar14 + 0x20;
              local_358 = iVar7 + 1;
              uStack_344 = (ulonglong)uVar14 << 0x20;
              if ((int)((int)local_2a0 + -1 + ((int)local_2a0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7)
              {
                uStack_344 = CONCAT44(uVar14,(int)local_2a0);
                goto LAB_14052b328;
              }
              uVar2 = puVar15[(longlong)iVar7 + 1];
              iVar7 = local_358;
            }
            uStack_354 = -uVar2 & uVar2;
            iVar8 = 0x1f;
            if (uStack_354 != 0) {
              for (; uStack_354 >> iVar8 == 0; iVar8 = iVar8 + -1) {
              }
            }
            if (uStack_354 == 0) {
              iVar8 = 0x20;
            }
            else {
              iVar8 = 0x1f - iVar8;
            }
            iVar8 = (uVar14 - iVar8) + 0x1f;
            if ((int)local_2a0 < iVar8) {
              iVar8 = (int)local_2a0;
            }
            uStack_344._4_4_ = (undefined4)((ulonglong)uStack_344 >> 0x20);
            uStack_344 = CONCAT44(uStack_344._4_4_,iVar8);
            local_358 = iVar7;
          }
LAB_14052b328:
          local_348 = 0xffffffff;
          local_338 = local_2c8;
          uStack_330 = CONCAT44(uStack_354,local_358);
          uStack_320 = CONCAT44((int)uStack_344,0xffffffff);
          local_318 = uStack_344._4_4_;
          uStack_314 = uStack_33c;
          uStack_2f0 = uStack_344._4_4_;
          uStack_2ec = uStack_33c;
          uStack_2f8 = uStack_320;
          iVar7 = (int)uStack_344;
          puStack_350 = local_2b8;
          local_328 = local_2b8;
          local_310 = local_338;
          uStack_308 = uStack_330;
          puStack_300 = local_2b8;
          if ((int)uStack_344 < (int)local_2a0) {
            do {
              plVar3 = local_310;
              lVar9 = (longlong)iVar7 * 0x28;
              if (*(int *)(*local_310 + 0x18 + lVar9) == 0) {
                puVar12 = &DAT_143f3eda8;
              }
              else {
                puVar12 = *(undefined2 **)(*local_310 + 0x10 + lVar9);
              }
              lVar10 = TStringConversion<FTCHARToUTF8_Convert,128>::
                       TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,puVar12);
              uVar11 = *(undefined8 *)(lVar10 + 0x88);
              if (*(int *)(lVar9 + 8 + *plVar3) == 0) {
                puVar12 = &DAT_143f3eda8;
              }
              else {
                puVar12 = *(undefined2 **)(lVar9 + *plVar3);
              }
              lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::
                      TStringConversion<FTCHARToUTF8_Convert,128>(local_188,puVar12);
              cVar5 = (**(code **)(*(longlong *)param_1[0x6f] + 0xa0))
                                ((longlong *)param_1[0x6f],*(longlong *)(pcVar4 + 0x40),
                                 *(undefined8 *)(lVar9 + 0x88),uVar11);
              if (local_108 != 0) {
                FMemory::Free();
              }
              if (local_68 != 0) {
                FMemory::Free();
              }
              if (cVar5 == '\0') goto LAB_14052b44f;
              uStack_2f8 = CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8 & ~uStack_308._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_308);
              iVar7 = uStack_2f8._4_4_;
            } while (uStack_2f8._4_4_ < (int)puStack_300[6]);
          }
          goto LAB_14052b457;
        }
      }
    }
  }
  else {
    if ((*(char *)(lVar9 + 0x38) == '\0') || (*(char *)(lVar9 + 0xd8) == '\0')) {
      FUN_1404b6bd0(param_1 + 0x71);
    }
    else if ((int)param_1[0x77] == 0) {
      iStack_380 = 0;
      local_388 = FUN_14051a4a0;
      local_2e8 = 0x4051a4a0;
      uStack_2e4 = 1;
      uStack_2e0 = 0;
      uStack_2dc = uStack_37c;
      uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x4f,local_2d8);
      FUN_1404f5700(&local_388,uVar11,&local_2e8);
      if (local_2d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_2d0 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_2d0)(local_2d0);
          LOCK();
          piVar1 = (int *)((longlong)local_2d0 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_2d0 + 8))(local_2d0,1);
          }
        }
      }
      cVar5 = FUN_1404b0b90(param_1 + 0x71,&local_388);
      if (cVar5 == '\0') {
        FUN_1404b6bd0(param_1 + 0x71);
      }
      if (iStack_380 != 0) {
        if (local_388 == (code *)0x0) goto LAB_14052b5ab;
        (**(code **)(*(longlong *)local_388 + 0x28))(local_388,0);
        if (local_388 != (code *)0x0) {
          local_388 = (code *)FMemory::Realloc(local_388,0,0);
        }
        iStack_380 = 0;
      }
      if (local_388 != (code *)0x0) {
        FMemory::Free(local_388);
      }
    }
LAB_14052b5ab:
    local_398 = 0;
  }
LAB_14052b5af:
  local_230 = 0;
  if (local_238 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_278,0);
  if (local_258 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_278[0] != 0) {
    FMemory::Free();
  }
LAB_14052b5fd:
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,(local_398 != 0) + '\x01');
  return;
LAB_14052b44f:
  local_398 = -0x7fffbffb;
LAB_14052b457:
  local_280 = 0;
  if (local_288 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_2c8,0);
  if (local_2a8 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_2c8[0] != 0) {
    FMemory::Free();
  }
  goto LAB_14052b5af;
}



// FUNCTION 14052b640 FUN_14052b640 body=124 status=ok
// SIG undefined FUN_14052b640(void)

void FUN_14052b640(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if ((*(char *)(param_1 + 0x30) != '\0') &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                        (*(longlong **)(param_1 + 0x10),local_res8,0,0), iVar2 == 2)) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (*(char *)(param_1 + 0x31) != '\0') {
      FVoiceEngineSteam::StartRecording(param_1);
      return;
    }
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      lVar1 = **(longlong **)(param_1 + 0x18);
      puVar3 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                         (*(longlong **)(param_1 + 0x10),local_res10);
      (**(code **)(lVar1 + 0xd8))(*(undefined8 *)(param_1 + 0x18),*puVar3,0);
    }
  }
  return;
}



// FUNCTION 14052b6d0 FUN_14052b6d0 body=1574 status=ok
// SIG undefined FUN_14052b6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14052b6d0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  BOOL BVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong lVar15;
  uint uVar16;
  undefined2 *puVar17;
  uint *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 auStack_248 [32];
  uint local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  int local_208;
  uint uStack_204;
  uint *puStack_200;
  undefined4 local_1f8;
  undefined8 uStack_1f4;
  undefined4 uStack_1ec;
  ulonglong local_1e8;
  longlong *local_1e0;
  undefined8 uStack_1d8;
  uint *local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [8];
  undefined8 *local_1b0;
  undefined2 *local_1a8;
  int local_1a0;
  undefined1 *local_198;
  longlong local_190;
  longlong local_188 [2];
  longlong local_178 [2];
  longlong *local_168;
  undefined8 uStack_160;
  uint *puStack_158;
  undefined4 uStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong local_138 [4];
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_228 = *(uint *)(param_4 + 0x70);
  lVar19 = 0;
  lVar15 = (longlong)(int)local_228;
  local_220 = param_1;
  local_218 = param_4;
  local_210 = lVar15;
  local_1b0 = param_2;
  if (0 < (int)local_228) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x40);
    do {
      uVar2 = *(undefined4 *)(local_218 + 0x5c);
      uVar3 = *(undefined4 *)(local_218 + 0x58);
      puVar10 = (undefined8 *)(*(longlong *)(local_218 + 0x68) + lVar19 * 8);
      BVar7 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar7 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      param_1 = local_220;
      lVar8 = FUN_140510190(local_220,puVar10);
      if (((lVar8 == 0) || (*(longlong *)(lVar8 + 0x18) != -1)) || (1 < *(int *)(lVar8 + 0x20) - 2U)
         ) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((lVar8 == 0) || (bVar6)) {
        iVar13 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar13 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar13 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar13);
        }
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0x28);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = *puVar10;
          *(undefined4 *)(puVar9 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uVar2;
          *(undefined4 *)(puVar9 + 2) = 0;
          puVar9[3] = 0xffffffffffffffff;
        }
        *(undefined4 *)(puVar9 + 4) = 1;
        puVar9 = (undefined8 *)operator_new(0x58);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar9,*(undefined8 *)(local_220 + 0x20),0);
          *(undefined1 *)(puVar9 + 5) = 0;
          *puVar9 = &PTR_FUN_143f9af18;
          puVar9[6] = *puVar10;
          *(undefined4 *)(puVar9 + 7) = uVar3;
          *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar2;
          *(undefined1 *)(puVar9 + 10) = 0;
        }
        param_1 = local_220;
        FOnlineAsyncTaskManager::AddToInQueue
                  (*(undefined8 *)(*(longlong *)(local_220 + 0x20) + 0x148),puVar9);
        lVar15 = local_210;
      }
      LeaveCriticalSection(lpCriticalSection);
      lVar19 = lVar19 + 1;
    } while (lVar19 < lVar15);
  }
  lVar19 = local_218;
  lVar8 = 0;
  local_138[0] = 0;
  local_138[1] = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  if (0 < (int)local_228) {
    puVar1 = (uint *)(local_218 + 0x18);
    local_1e8 = (ulonglong)local_228;
    do {
      local_1e0 = (longlong *)(lVar19 + 8);
      iVar13 = *(int *)(lVar19 + 0x30);
      uVar16 = 0;
      local_208 = 0;
      uStack_204 = 1;
      uStack_1f4 = 0;
      if (iVar13 != 0) {
        puVar18 = *(uint **)(lVar19 + 0x28);
        if (*(uint **)(lVar19 + 0x28) == (uint *)0x0) {
          puVar18 = puVar1;
        }
        uVar4 = *puVar18;
        while (uVar4 == 0) {
          lVar15 = (longlong)local_208;
          uVar16 = uVar16 + 0x20;
          iVar12 = local_208 + 1;
          uStack_1f4 = (ulonglong)uVar16 << 0x20;
          bVar6 = (int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_208;
          local_208 = iVar12;
          if (bVar6) goto LAB_14052b988;
          uVar4 = puVar18[lVar15 + 1];
        }
        uStack_204 = -uVar4 & uVar4;
        iVar12 = 0x1f;
        if (uStack_204 != 0) {
          for (; uStack_204 >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        local_218 = CONCAT44(local_218._4_4_,iVar12);
        if (uStack_204 == 0) {
          iVar12 = 0x20;
        }
        else {
          iVar12 = 0x1f - iVar12;
        }
        iVar12 = (uVar16 - iVar12) + 0x1f;
        uStack_1f4._4_4_ = (undefined4)((ulonglong)uStack_1f4 >> 0x20);
        uStack_1f4 = CONCAT44(uStack_1f4._4_4_,iVar12);
        if (iVar13 < iVar12) {
LAB_14052b988:
          uStack_1f4 = CONCAT44(uStack_1f4._4_4_,iVar13);
        }
      }
      local_1f8 = 0xffffffff;
      uStack_1d8 = CONCAT44(uStack_204,local_208);
      uStack_150 = 0xffffffff;
      iStack_14c = (int)uStack_1f4;
      uStack_148 = uStack_1f4._4_4_;
      uStack_144 = uStack_1ec;
      uStack_1c8 = CONCAT44((int)uStack_1f4,0xffffffff);
      local_1c0 = uStack_1f4._4_4_;
      uStack_1bc = uStack_1ec;
      puStack_200 = puVar1;
      local_1d0 = puVar1;
      local_168 = local_1e0;
      uStack_160 = uStack_1d8;
      puStack_158 = puVar1;
      if ((int)uStack_1f4 < iVar13) {
        local_198 = local_1b8;
        iVar13 = (int)uStack_1f4;
        do {
          lVar15 = *(longlong *)(lVar19 + 0x68);
          lVar5 = *local_1e0;
          puVar10 = (undefined8 *)FName::ToString(lVar5 + (longlong)iVar13 * 0x28,local_178);
          if (*(int *)(puVar10 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar10;
          }
          puVar10 = (undefined8 *)FName::ToString(lVar15 + lVar8,local_188);
          if (*(int *)(puVar10 + 1) == 0) {
            puVar17 = &DAT_143f3eda8;
          }
          else {
            puVar17 = (undefined2 *)*puVar10;
          }
          FString::PrintfImpl(&local_1a8,L"%s_%s",puVar17,puVar14);
          puVar14 = &DAT_143f3eda8;
          if (local_1a0 != 0) {
            puVar14 = local_1a8;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar14);
          FName::FName(local_1b8,local_60,1);
          if (local_68 != 0) {
            FMemory::Free();
          }
          if (local_1a8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_188[0] != 0) {
            FMemory::Free();
          }
          if (local_178[0] != 0) {
            FMemory::Free();
          }
          local_190 = lVar5 + 8 + (longlong)iVar13 * 0x28;
          FUN_1404a8f80(local_138,&local_220,&local_198,0);
          uStack_1c8 = CONCAT44(uStack_1c8._4_4_,(uint)uStack_1c8 & ~uStack_1d8._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1d8);
          iVar13 = uStack_1c8._4_4_;
        } while (uStack_1c8._4_4_ < (int)local_1d0[6]);
      }
      lVar8 = lVar8 + 8;
      local_1e8 = local_1e8 - 1;
    } while (local_1e8 != 0);
    local_1e8 = 0;
    lVar15 = local_210;
  }
  puVar20 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)operator_new(0xa8);
  puVar10 = puVar20;
  if (puVar9 != (undefined8 *)0x0) {
    FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar9,*(undefined8 *)(param_1 + 0x20),0);
    *puVar9 = &PTR__scalar_deleting_destructor__143f9ae98;
    *(undefined1 *)(puVar9 + 5) = 0;
    puVar9[6] = *local_1b0;
    lVar8 = local_1b0[1];
    puVar9[7] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    *(undefined4 *)(puVar9 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)puVar9 + 0x74) = 0;
    puVar9[0x10] = 0;
    *(undefined4 *)(puVar9 + 0x11) = 0;
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::operator=(puVar9 + 8,local_138);
    *(uint *)(puVar9 + 0x14) = *(uint *)(puVar9 + 0x14) & 0xff0fffff;
    *(undefined1 *)((longlong)puVar9 + 0xa3) = 0;
    *(uint *)(puVar9 + 0x14) = *(uint *)(puVar9 + 0x14) & 0xfff00000;
    *(undefined4 *)((longlong)puVar9 + 0x9c) = 0;
    puVar10 = puVar9;
  }
  FOnlineAsyncTaskManager::AddToInQueue
            (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x148),puVar10);
  puVar10 = puVar20;
  if (0 < lVar15) {
    do {
      puVar9 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)operator_new(0x70);
      if (puVar11 != (undefined8 *)0x0) {
        lVar15 = *(longlong *)(lVar19 + 0x68);
        uVar2 = *(undefined4 *)(lVar19 + 0x60);
        FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar11,*(undefined8 *)(param_1 + 0x20),0);
        *(undefined1 *)(puVar11 + 5) = 0;
        *puVar11 = &PTR_FUN_143f9afd8;
        puVar11[6] = *(undefined8 *)(lVar15 + (longlong)puVar20 * 8);
        puVar11[7] = *(undefined8 *)(lVar19 + 0x78);
        *(undefined4 *)((longlong)puVar11 + 0x44) = uVar2;
        *(undefined4 *)(puVar11 + 8) = 0;
        *(bool *)(puVar11 + 0xd) = (int)puVar10 == local_228 - 1;
        puVar9 = puVar11;
        lVar15 = local_210;
      }
      FOnlineAsyncTaskManager::AddToInQueue
                (*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x148),puVar9);
      puVar20 = (undefined8 *)((longlong)puVar20 + 1);
      puVar10 = (undefined8 *)(ulonglong)((int)puVar10 + 1);
    } while ((longlong)puVar20 < lVar15);
  }
  local_f0 = 0;
  if (local_f8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_138,0);
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14052bd00 FUN_14052bd00 body=581 status=ok
// SIG undefined FUN_14052bd00(void)

void FUN_14052bd00(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  size_t sVar10;
  void *_Src_00;
  double dVar11;
  LARGE_INTEGER local_res8;
  longlong local_40 [2];
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  if (((param_1[0x13] == 0) || (cVar8 = FUN_140516dc0(), cVar8 == '\0')) ||
     (cVar8 = (**(code **)(*(longlong *)param_1[0x13] + 0xf8))((longlong *)param_1[0x13],param_2),
     cVar8 == '\0')) {
    (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,6);
    return;
  }
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FString::FString(local_40,param_3);
  local_28 = *(int *)(param_4 + 1);
  sVar10 = (size_t)local_28;
  _Src_00 = (void *)0x0;
  _Src = (void *)*param_4;
  local_30 = (void *)0x0;
  if (local_28 == 0) {
    local_24 = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_30,local_28,0);
    _Src_00 = local_30;
    _guard_xfg_dispatch_icall_nop(local_30,_Src,sVar10);
  }
  uVar6 = *(undefined8 *)(param_1[0x13] + 0x148);
  puVar9 = (undefined8 *)operator_new(0x50);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar11 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar9 = &PTR__scalar_deleting_destructor__143f9e800;
    *(undefined1 *)(puVar9 + 2) = 0;
    puVar9[1] = dVar11 + 16777216.0;
    puVar9[3] = param_1;
    puVar9[4] = uVar4;
    puVar9[5] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar9 + 6,local_40);
    _Src_00 = local_30;
    sVar10 = (size_t)local_28;
    puVar9[8] = 0;
    *(int *)(puVar9 + 9) = local_28;
    if (local_28 == 0) {
      *(undefined4 *)((longlong)puVar9 + 0x4c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar9 + 8,local_28,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar9[8],_Src_00,sVar10);
    }
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar9);
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar1 = plVar5 + 1;
  lVar7 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar2 = (int *)((longlong)plVar5 + 0xc);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014052bf1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))(plVar5,1);
  return;
}



// FUNCTION 14052bf50 printf body=85 status=ok
// SIG int printf(char * _Format, ...)

int __cdecl printf(char *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)__local_stdio_printf_options();
  iVar3 = __stdio_common_vfprintf(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



// FUNCTION 14052bfb0 FUN_14052bfb0 body=162 status=ok
// SIG undefined FUN_14052bfb0(void)

longlong FUN_14052bfb0(void)

{
  if (DAT_146853388 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemSteam",L"SteamNetConnection",&DAT_146853388,FUN_140447710
                  ,0x19a0,0x1000000c,0,L"Engine",&LAB_14052c390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2600,FUN_1404e7690,&LAB_140447700
                  ,0);
  }
  return DAT_146853388;
}



// FUNCTION 14052c060 FUN_14052c060 body=162 status=ok
// SIG undefined FUN_14052c060(void)

longlong FUN_14052c060(void)

{
  if (DAT_146853368 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemSteam",L"SteamBeaconNetConnection",&DAT_146853368,
                  FUN_140447710,0x19a0,0x1000000c,0,L"Engine",&LAB_14052c350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2600,FUN_14052bfb0,&LAB_140447700
                  ,0);
  }
  return DAT_146853368;
}



// FUNCTION 14052c110 FUN_14052c110 body=47 status=ok
// SIG undefined FUN_14052c110(void)

longlong FUN_14052c110(void)

{
  if (DAT_146853380 == 0) {
    FUN_141786440(&DAT_146853380,&PTR_FUN_143f9ed30);
  }
  return DAT_146853380;
}



// FUNCTION 14052c140 FUN_14052c140 body=47 status=ok
// SIG undefined FUN_14052c140(void)

longlong FUN_14052c140(void)

{
  if (DAT_146853358 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146853358,&PTR_s__Script_OnlineSubsystemSteam_143f9ef98);
  }
  return DAT_146853358;
}



// FUNCTION 14052c190 FUN_14052c190 body=162 status=ok
// SIG undefined FUN_14052c190(void)

longlong FUN_14052c190(void)

{
  if (DAT_146853398 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemSteam",L"SteamNetDriver",&DAT_146853398,FUN_140447710,
                  0x590,0x1000000c,0,L"Engine",&LAB_14052c3b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2a30,FUN_1404e74f0,&LAB_140447700
                  ,0);
  }
  return DAT_146853398;
}



// FUNCTION 14052c240 FUN_14052c240 body=162 status=ok
// SIG undefined FUN_14052c240(void)

longlong FUN_14052c240(void)

{
  if (DAT_146853378 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemSteam",L"SteamBeaconNetDriver",&DAT_146853378,
                  FUN_140447710,0x590,0x1000000c,0,L"Engine",&LAB_14052c370,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2a30,FUN_14052c190,&LAB_140447700
                  ,0);
  }
  return DAT_146853378;
}



// FUNCTION 14052c2f0 FUN_14052c2f0 body=47 status=ok
// SIG undefined FUN_14052c2f0(void)

longlong FUN_14052c2f0(void)

{
  if (DAT_146853390 == 0) {
    FUN_141786440(&DAT_146853390,&PTR_FUN_143f9ee60);
  }
  return DAT_146853390;
}



// FUNCTION 14052c3d0 FUN_14052c3d0 body=47 status=ok
// SIG undefined FUN_14052c3d0(void)

longlong FUN_14052c3d0(void)

{
  if (DAT_146853360 == 0) {
    FUN_141786440(&DAT_146853360,&PTR_FUN_143f9ea80);
  }
  return DAT_146853360;
}



// FUNCTION 14052c400 FUN_14052c400 body=47 status=ok
// SIG undefined FUN_14052c400(void)

longlong FUN_14052c400(void)

{
  if (DAT_146853370 == 0) {
    FUN_141786440(&DAT_146853370,&PTR_FUN_143f9ebf0);
  }
  return DAT_146853370;
}



// FUNCTION 14052c430 FUN_14052c430 body=278 status=ok
// SIG undefined FUN_14052c430(void)

void FUN_14052c430(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  lVar5 = operator_new(0xc0);
  puVar6 = (undefined8 *)0x0;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_14052ccb0(lVar5);
  }
  plVar10 = (longlong *)(param_1 + 8);
  if (plVar10 == &local_res8) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_14052c492;
    puVar7 = (undefined8 *)*puVar6;
  }
  else {
    puVar1 = (undefined8 *)*plVar10;
    *plVar10 = (longlong)puVar6;
    if (puVar1 == (undefined8 *)0x0) goto LAB_14052c492;
    puVar7 = (undefined8 *)*puVar1;
    puVar6 = puVar1;
  }
  (*(code *)*puVar7)(puVar6,1);
LAB_14052c492:
  local_18[0] = 0;
  local_18[1] = 0;
  cVar4 = (**(code **)(*(longlong *)*plVar10 + 8))((longlong *)*plVar10,local_18);
  if (cVar4 == '\0') {
    puVar6 = (undefined8 *)*plVar10;
    *plVar10 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  else {
    puVar6 = (undefined8 *)FName::FName(&local_res8,"Sockets",1);
    uVar2 = *puVar6;
    uVar8 = FUN_14168dc80();
    plVar9 = (longlong *)FUN_141690010(uVar8,uVar2);
    lVar5 = *plVar10;
    lVar3 = *plVar9;
    puVar6 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
    (**(code **)(lVar3 + 0x50))(plVar9,*puVar6,lVar5,1);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14052c550 FUN_14052c550 body=159 status=ok
// SIG undefined FUN_14052c550(void)

void FUN_14052c550(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,"Sockets",1);
    uVar1 = *puVar3;
    uVar4 = FUN_14168dc80();
    plVar5 = (longlong *)FUN_141690010(uVar4,uVar1);
    lVar2 = *plVar5;
    puVar3 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
    (**(code **)(lVar2 + 0x58))(plVar5,*puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014052c5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 14052c5f0 FUN_14052c5f0 body=77 status=ok
// SIG undefined FUN_14052c5f0(void)

undefined8 * FUN_14052c5f0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14052c6b0 FUN_14052c6b0 body=42 status=ok
// SIG undefined FUN_14052c6b0(void)

void FUN_14052c6b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014052c6d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 14052c6e0 FUN_14052c6e0 body=89 status=ok
// SIG undefined FUN_14052c6e0(void)

void FUN_14052c6e0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)*param_2;
  puVar3 = bifrost::_guard_xfg_dispatch_icall_nop(0x80);
  *puVar3 = *puVar1;
  lVar2 = puVar1[1];
  puVar3[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  FURL::FURL(puVar3 + 2,puVar1 + 2);
  *param_1 = puVar3;
  return;
}



// FUNCTION 14052c740 FUN_14052c740 body=63 status=ok
// SIG undefined FUN_14052c740(void)

undefined8
FUN_14052c740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined2 *param_6)

{
  FUN_14052d070(param_2,param_1,param_3,*param_4,*param_5,*param_6);
  return param_1;
}



// FUNCTION 14052c790 FUN_14052c790 body=24 status=ok
// SIG undefined FUN_14052c790(void)

void FUN_14052c790(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14052c7b0 FUN_14052c7b0 body=32 status=ok
// SIG undefined FUN_14052c7b0(void)

void FUN_14052c7b0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  FURL::~FURL(lVar3 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  bifrost::free((void *)*param_1);
  return;
}



// FUNCTION 14052c7d0 FUN_14052c7d0 body=51 status=ok
// SIG undefined FUN_14052c7d0(void)

void FUN_14052c7d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *unaff_RDI;
  bool in_ZF;
  
  if (!in_ZF) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (param_1 != (longlong *)0x0)) {
      (**(code **)(*param_1 + 8))(param_1,1);
    }
  }
  bifrost::free((void *)*unaff_RDI);
  return;
}



// FUNCTION 14052c820 FUN_14052c820 body=211 status=ok
// SIG undefined FUN_14052c820(void)

void FUN_14052c820(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_2 + 0x128);
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *plVar6 = param_2;
    plVar5 = (longlong *)plVar6[1];
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar2;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14052c900 FUN_14052c900 body=208 status=ok
// SIG undefined FUN_14052c900(void)

void FUN_14052c900(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)(param_2 + 0x20);
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    *plVar6 = param_2;
    plVar5 = (longlong *)plVar6[1];
    if (plVar2 != plVar5) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar6[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar6[1] = (longlong)plVar2;
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14052c9d0 FUN_14052c9d0 body=307 status=ok
// SIG undefined FUN_14052c9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14052c9d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  puVar2 = (undefined8 *)operator_new(0x198);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_143fa2f68;
    uVar1 = *param_1;
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar3);
    FUN_1419c5bc0(puVar2 + 2,local_40);
    if (local_48 != 0) {
      FMemory::Free();
    }
    puVar2[0x27] = 0;
    puVar2[0x28] = 0;
    puVar2[2] = &PTR_FUN_143fa1e68;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0x29));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 0x29),4000);
    puVar2[0x2e] = uVar1;
    FString::FString(puVar2 + 0x30,param_2);
    *(undefined2 *)(puVar2 + 0x32) = 0;
  }
  return puVar2;
}



// FUNCTION 14052cb10 FUN_14052cb10 body=170 status=ok
// SIG undefined FUN_14052cb10(void)

undefined8 * FUN_14052cb10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_143fa2f48;
    puVar1[2] = &PTR_FUN_143f9d520;
    *(undefined4 *)(puVar1 + 3) = 1;
    FString::FString(puVar1 + 4,param_2);
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[2] = &PTR_FUN_143fa1d80;
    puVar1[8] = param_1;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[9] = &PTR_FUN_143fa1cc0;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14052cbc0 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 14052cc70 FUN_14052cc70 body=27 status=ok
// SIG undefined FUN_14052cc70(void)

void FUN_14052cc70(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14052d560(local_18,&local_18);
  return;
}



// FUNCTION 14052cc90 FUN_14052cc90 body=21 status=ok
// SIG undefined FUN_14052cc90(void)

undefined8 * FUN_14052cc90(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_143fa1cc0;
  return param_1;
}



// FUNCTION 14052ccb0 FUN_14052ccb0 body=172 status=ok
// SIG undefined FUN_14052ccb0(void)

undefined8 * FUN_14052ccb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f9b018;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_143fa1e90;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 14052cd60 FUN_14052cd60 body=58 status=ok
// SIG undefined FUN_14052cd60(void)

undefined8 * FUN_14052cd60(undefined8 *param_1)

{
  FUN_1404be160();
  *param_1 = &PTR_FUN_143fa2758;
  param_1[5] = &PTR_LAB_143f9da70;
  param_1[0x32e] = &PTR_FUN_143f75710;
  return param_1;
}



// FUNCTION 14052cda0 FUN_14052cda0 body=101 status=ok
// SIG undefined FUN_14052cda0(void)

undefined8 * FUN_14052cda0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1404be1c0();
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = &PTR_FUN_143fa1cc0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  *param_1 = &PTR_FUN_143fa2ad8;
  param_1[5] = &PTR_LAB_143fa2380;
  param_1[0xa8] = &PTR_LAB_143fa2f00;
  uVar1 = FUN_1404e6fc0();
  param_1[0x2b] = uVar1;
  return param_1;
}



// FUNCTION 14052ce10 FUN_14052ce10 body=58 status=ok
// SIG undefined FUN_14052ce10(void)

undefined8 * FUN_14052ce10(undefined8 *param_1)

{
  FUN_1404be160();
  *param_1 = &PTR_FUN_143fa23d8;
  param_1[5] = &PTR_LAB_143f9da70;
  param_1[0x32e] = &PTR_FUN_143f75710;
  return param_1;
}



// FUNCTION 14052ce50 FUN_14052ce50 body=191 status=ok
// SIG undefined FUN_14052ce50(void)

void FUN_14052ce50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  
  *param_1 = &PTR_FUN_143fa1d80;
  switch(*(undefined4 *)((longlong)param_1 + 0x5c)) {
  case 1:
  case 2:
    goto switchD_14052ce80_caseD_1;
  case 3:
    bVar4 = bifrost::sockets::stopListening(*(ConnectionId *)(param_1 + 0xb));
    break;
  case 4:
  case 5:
    bVar4 = bifrost::sockets::disconnect(*(ConnectionId *)(param_1 + 0xb),0,0);
    break;
  case 6:
    goto switchD_14052ce80_caseD_6;
  default:
    goto switchD_14052ce80_default;
  }
  if (bVar4 != false) {
switchD_14052ce80_caseD_1:
    bVar4 = bifrost::sockets::destroy(*(ConnectionId *)(param_1 + 0xb));
    if (bVar4) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 6;
      goto switchD_14052ce80_caseD_6;
    }
  }
switchD_14052ce80_default:
  *(undefined4 *)((longlong)param_1 + 0x5c) = 7;
switchD_14052ce80_caseD_6:
  param_1[7] = &PTR_FUN_143f9a360;
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR_FUN_143f9d520;
  if (param_1[2] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14052cf30 FUN_14052cf30 body=53 status=ok
// SIG undefined FUN_14052cf30(void)

longlong * FUN_14052cf30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(lVar1 + 0x30))(param_1,uVar2);
  return param_1;
}



// FUNCTION 14052cf90 FUN_14052cf90 body=220 status=ok
// SIG undefined FUN_14052cf90(void)

ulonglong FUN_14052cf90(undefined8 param_1,longlong *param_2,char *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong in_RAX;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  uint uStackX_14;
  
  cVar4 = *param_3;
  plVar11 = (longlong *)0x0;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    in_RAX = 0;
    puVar1 = (uint *)(param_2[1] + 8);
    LOCK();
    uVar8 = *puVar1;
    if (uVar8 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar8;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      plVar5 = (longlong *)param_2[1];
      plVar10 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        in_RAX = 0;
        LOCK();
        uVar8 = *(uint *)(plVar5 + 1);
        bVar12 = uVar8 == 0;
        if (bVar12) {
          *(uint *)(plVar5 + 1) = 0;
        }
        else {
          in_RAX = (ulonglong)uVar8;
        }
        UNLOCK();
        while (plVar10 = plVar11, !bVar12) {
          uVar6 = (uint)in_RAX;
          LOCK();
          uVar8 = *(uint *)(plVar5 + 1);
          if (uVar6 == uVar8) {
            *(uint *)(plVar5 + 1) = uVar6 + 1;
          }
          else {
            in_RAX = (ulonglong)uVar8;
          }
          UNLOCK();
          if (uVar6 == uVar8) {
            plVar10 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              plVar11 = (longlong *)*param_2;
            }
            break;
          }
          in_RAX = 0;
          LOCK();
          uVar8 = *(uint *)(plVar5 + 1);
          bVar12 = uVar8 == 0;
          if (bVar12) {
            *(uint *)(plVar5 + 1) = 0;
          }
          else {
            in_RAX = (ulonglong)uVar8;
          }
          UNLOCK();
        }
      }
      if (*(int *)((longlong)plVar11 + 0x5c) == 4) {
        in_RAX = 7;
        if (cVar4 != '\0') {
          in_RAX = 5;
        }
        *(int *)((longlong)plVar11 + 0x5c) = (int)in_RAX;
      }
      plVar11 = (longlong *)0x1;
      goto LAB_14052d019;
    }
  }
  plVar10 = (longlong *)((ulonglong)uStackX_14 << 0x20);
LAB_14052d019:
  if ((plVar11 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar7 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    uVar8 = (int)lVar7 - 1;
    uVar9 = (ulonglong)uVar8;
    if (uVar8 == 0) {
      uVar9 = (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar9 = (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    return uVar9 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14052d070 FUN_14052d070 body=678 status=ok
// SIG undefined FUN_14052d070(void)

undefined1 * FUN_14052d070(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined1 *local_60;
  code *pcStack_58;
  undefined1 *local_50;
  code *pcStack_48;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    plVar8 = (longlong *)0x0;
    piVar1 = (int *)(param_1[1] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plVar3 = (longlong *)param_1[1];
      plVar9 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar9 = plVar8, !bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)plVar3[1];
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar9 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar8 = (longlong *)*param_1;
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(plVar3 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      iVar6 = *(int *)((longlong)plVar8 + 0x5c);
      puVar7 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar8 + 4,local_b0);
      plVar8 = (longlong *)puVar7[1];
      uVar4 = *puVar7;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
      }
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a8 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
      }
      local_60 = &LAB_14052c650;
      pcStack_58 = FUN_14052c790;
      local_50 = &LAB_14052c660;
      pcStack_48 = FUN_14052c6b0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
      }
      *param_2 = iVar6 == 3;
      *(undefined4 *)(param_2 + 0x48) = 0x4052c650;
      *(undefined4 *)(param_2 + 0x4c) = 1;
      *(undefined4 *)(param_2 + 0x50) = 0x4052c790;
      *(undefined4 *)(param_2 + 0x54) = 1;
      *(undefined4 *)(param_2 + 0x58) = 0x4052c660;
      *(undefined4 *)(param_2 + 0x5c) = 1;
      *(undefined4 *)(param_2 + 0x60) = 0x4052c6b0;
      *(undefined4 *)(param_2 + 100) = 1;
      local_a0 = uVar4;
      local_98 = plVar8;
      if (*(code **)(param_2 + 0x50) != (code *)0x0) {
        (**(code **)(param_2 + 0x50))(param_2 + 8,&local_a0);
      }
      if (pcStack_48 != (code *)0x0) {
        (*pcStack_48)(&local_a0);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      return param_2;
    }
  }
  *param_2 = 0;
  local_110 = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  local_108 = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  pcStack_b8 = (code *)0x0;
  if ((*(code **)(param_2 + 0x50) != (code *)0x0) &&
     ((**(code **)(param_2 + 0x50))(param_2 + 8,&local_110), pcStack_b8 != (code *)0x0)) {
    (*pcStack_b8)(&local_110);
  }
  return param_2;
}



// FUNCTION 14052d320 FUN_14052d320 body=569 status=ok
// SIG undefined FUN_14052d320(void)

void FUN_14052d320(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    plVar7 = (longlong *)0x0;
    piVar1 = (int *)(param_1[1] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar6 = (longlong *)param_1[1];
      plVar8 = plVar7;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar8 = (longlong *)0x0, !bVar9) {
          LOCK();
          bVar9 = iVar4 == (int)plVar6[1];
          if (bVar9) {
            *(int *)(plVar6 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (plVar6 != (longlong *)0x0) {
              plVar8 = (longlong *)*param_1;
              LOCK();
              plVar2 = plVar6 + 1;
              lVar3 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar9 = iVar4 == 0;
          if (bVar9) {
            *(int *)(plVar6 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(plVar8 + 0x27));
      if (BVar5 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(plVar8 + 0x27));
      }
      *(int *)(plVar8 + 0x2d) = param_2;
      plVar6 = (longlong *)operator_new(0x20);
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *plVar6 = (longlong)&PTR_FUN_143fa2f58;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        lVar3 = plVar8[0x2d];
        *(short *)((longlong)plVar6 + 0x1c) = (short)param_1[6];
        plVar6[2] = (longlong)&PTR_FUN_143fa1cc0;
        *(int *)(plVar6 + 3) = (int)lVar3;
        plVar7 = plVar6;
      }
      local_28 = plVar7 + 2;
      plStack_20 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
      local_38 = local_28;
      plStack_30 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      if ((longlong **)(plVar8 + 1) != &local_38) {
        plVar8[1] = (longlong)local_28;
        local_38 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(plVar8 + 2,&plStack_30);
      }
      plVar7 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_30 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
      plVar7 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_20 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      *(undefined1 *)(plVar8 + 0x30) = 1;
      *(bool *)((longlong)plVar8 + 0x181) = param_2 != 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar8 + 0x27));
    }
  }
  return;
}



// FUNCTION 14052d560 FUN_14052d560 body=462 status=ok
// SIG undefined FUN_14052d560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14052d560(undefined8 *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  short *_Src;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_188 [32];
  short *local_168 [2];
  short local_158 [128];
  short *local_58;
  short *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar10;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar2 = *param_2;
  if (param_2[1] <= uVar2) {
    puVar4 = (undefined1 *)param_1[1];
    goto LAB_14052d710;
  }
  iVar6 = 0;
  iVar8 = 0;
  local_58 = (short *)0x0;
  uVar7 = 0xffffffffffffffff;
  uVar9 = uVar7;
  if (uVar2 == 0) {
    local_50 = (short *)0x0;
    local_48 = 0;
  }
  else {
    do {
      uVar10 = uVar9;
      uVar9 = uVar10 + 1;
    } while (*(char *)(uVar9 + uVar2) != '\0');
    local_168[0] = (short *)((ulonglong)local_168[0] & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (local_168,0x7fffffff,uVar2,uVar9 & 0xffffffff);
    local_48 = (int)local_168[0];
    uVar1 = (int)local_168[0] + 1;
    if (uVar1 < 0x81) {
      if (local_58 != (short *)0x0) {
        lVar5 = 0;
LAB_14052d610:
        local_58 = (short *)FMemory::Realloc(local_58,lVar5,0);
      }
    }
    else if ((local_58 != (short *)0x0) || (uVar1 != 0)) {
      lVar5 = (longlong)(int)uVar1 * 2;
      goto LAB_14052d610;
    }
    local_168[0] = local_158;
    if (local_58 != (short *)0x0) {
      local_168[0] = local_58;
    }
    local_50 = local_168[0];
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(local_168,uVar1,uVar2,(int)uVar10 + 2);
  }
  _Src = local_50;
  puVar3 = (undefined8 *)*param_1;
  if ((short *)*puVar3 != local_50) {
    if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
      do {
        uVar7 = uVar7 + 1;
      } while (local_50[uVar7] != 0);
      iVar6 = (int)uVar7 + 1;
    }
    *(undefined4 *)(puVar3 + 1) = 0;
    if (*(int *)((longlong)puVar3 + 0xc) != iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3,iVar6);
      iVar8 = *(int *)(puVar3 + 1);
    }
    *(int *)(puVar3 + 1) = iVar8 + iVar6;
    if (*(int *)((longlong)puVar3 + 0xc) < iVar8 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3,iVar8);
    }
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar6 * 2);
    }
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  puVar4 = (undefined1 *)param_1[1];
LAB_14052d710:
  *puVar4 = 1;
  return;
}



// FUNCTION 14052d730 FUN_14052d730 body=212 status=ok
// SIG undefined FUN_14052d730(void)

ulonglong FUN_14052d730(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong in_RAX;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  uVar4 = *param_3;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    plVar11 = (longlong *)0x0;
    in_RAX = 0;
    puVar1 = (uint *)(param_2[1] + 8);
    LOCK();
    uVar8 = *puVar1;
    if (uVar8 == 0) {
      *puVar1 = 0;
    }
    else {
      in_RAX = (ulonglong)uVar8;
    }
    UNLOCK();
    if (0 < (int)in_RAX) {
      plVar5 = (longlong *)param_2[1];
      plVar10 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        in_RAX = 0;
        LOCK();
        uVar8 = *(uint *)(plVar5 + 1);
        bVar12 = uVar8 == 0;
        if (bVar12) {
          *(uint *)(plVar5 + 1) = 0;
        }
        else {
          in_RAX = (ulonglong)uVar8;
        }
        UNLOCK();
        while (plVar10 = plVar11, !bVar12) {
          uVar6 = (uint)in_RAX;
          LOCK();
          uVar8 = *(uint *)(plVar5 + 1);
          if (uVar6 == uVar8) {
            *(uint *)(plVar5 + 1) = uVar6 + 1;
          }
          else {
            in_RAX = (ulonglong)uVar8;
          }
          UNLOCK();
          if (uVar6 == uVar8) {
            plVar10 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              plVar11 = (longlong *)*param_2;
            }
            break;
          }
          in_RAX = 0;
          LOCK();
          uVar8 = *(uint *)(plVar5 + 1);
          bVar12 = uVar8 == 0;
          if (bVar12) {
            *(uint *)(plVar5 + 1) = 0;
          }
          else {
            in_RAX = (ulonglong)uVar8;
          }
          UNLOCK();
        }
      }
      *(undefined4 *)(plVar11 + 0x2d) = uVar4;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        uVar8 = (int)lVar7 - 1;
        uVar9 = (ulonglong)uVar8;
        if (uVar8 == 0) {
          uVar9 = (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            uVar9 = (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
        return uVar9 & 0xffffffffffffff00;
      }
      return in_RAX & 0xffffffffffffff00;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14052d810 FUN_14052d810 body=586 status=ok
// SIG undefined FUN_14052d810(void)

void FUN_14052d810(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  BOOL BVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    plVar8 = (longlong *)0x0;
    piVar1 = (int *)(param_1[1] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar7 = (longlong *)param_1[1];
      plVar9 = plVar8;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar7[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar7 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar9 = (longlong *)0x0, !bVar10) {
          LOCK();
          bVar10 = iVar5 == (int)plVar7[1];
          if (bVar10) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (plVar7 != (longlong *)0x0) {
              plVar9 = (longlong *)*param_1;
              LOCK();
              plVar2 = plVar7 + 1;
              lVar3 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
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
            break;
          }
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(plVar7 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(plVar9 + 0x27));
      if (BVar6 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(plVar9 + 0x27));
      }
      plVar7 = (longlong *)operator_new(0x20);
      if (plVar7 != (longlong *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        *plVar7 = (longlong)&PTR_FUN_143fa2f58;
        *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
        lVar3 = plVar9[0x2d];
        *(short *)((longlong)plVar7 + 0x1c) = (short)param_1[6];
        plVar7[2] = (longlong)&PTR_FUN_143fa1cc0;
        *(int *)(plVar7 + 3) = (int)lVar3;
        plVar8 = plVar7;
      }
      local_28 = plVar8 + 2;
      plStack_20 = plVar8;
      SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
      local_38 = local_28;
      plStack_30 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      if ((longlong **)(plVar9 + 1) != &local_38) {
        plVar9[1] = (longlong)local_28;
        local_38 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(plVar9 + 2,&plStack_30);
      }
      plVar8 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_30 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
      plVar8 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_20 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if ((param_2 == '\0') || ((int)plVar9[0x2d] == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)((longlong)plVar9 + 0x181) = uVar4;
      *(undefined1 *)(plVar9 + 0x30) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar9 + 0x27));
    }
  }
  return;
}



// FUNCTION 14052da80 FUN_14052da80 body=43 status=ok
// SIG undefined FUN_14052da80(void)

undefined8 * FUN_14052da80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14052dab0 FUN_14052dab0 body=43 status=ok
// SIG undefined FUN_14052dab0(void)

undefined8 * FUN_14052dab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 14052dae0 FUN_14052dae0 body=43 status=ok
// SIG undefined FUN_14052dae0(void)

undefined8 * FUN_14052dae0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14052db10 FUN_14052db10 body=43 status=ok
// SIG undefined FUN_14052db10(void)

undefined8 * FUN_14052db10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14052db40 FUN_14052db40 body=129 status=ok
// SIG undefined FUN_14052db40(void)

longlong FUN_14052db40(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  plVar3 = *(longlong **)(param_1 + 0x130);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_1419c5c60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 14052dbd0 FUN_14052dbd0 body=52 status=ok
// SIG undefined FUN_14052dbd0(void)

undefined8 FUN_14052dbd0(undefined8 param_1,ulonglong param_2)

{
  FUN_14052ce50();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14052dc10 FUN_14052dc10 body=91 status=ok
// SIG undefined FUN_14052dc10(void)

longlong FUN_14052dc10(longlong param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xb0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xa0);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x90);
  FUN_1404f9b00(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14052dc70 FUN_14052dc70 body=66 status=ok
// SIG undefined FUN_14052dc70(void)

longlong FUN_14052dc70(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x580) = &PTR_FUN_143f9a360;
  FUN_1404bfa00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x590);
  }
  return param_1;
}



// FUNCTION 14052dcc0 FUN_14052dcc0 body=92 status=ok
// SIG undefined FUN_14052dcc0(void)

bool FUN_14052dcc0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ushort uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x30))(param_1 + 0x38,uVar2);
  bVar1 = bifrost::sockets::_guard_xfg_dispatch_icall_nop(*(ConnectionId *)(param_1 + 0x58),uVar2);
  if (!bVar1) {
    *(undefined4 *)(param_1 + 0x5c) = 7;
    return bVar1;
  }
  *(undefined4 *)(param_1 + 0x5c) = 2;
  return true;
}



// FUNCTION 14052dd30 FUN_14052dd30 body=109 status=ok
// SIG undefined FUN_14052dd30(void)

ulonglong FUN_14052dd30(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  
  uVar2 = *(int *)(param_1 + 0x5c) - 1;
  uVar3 = (ulonglong)uVar2;
  if (5 < uVar2) goto switchD_14052dd56_default;
  uVar3 = (ulonglong)(int)uVar2;
  switch(uVar2) {
  default:
    goto switchD_14052dd56_caseD_0;
  case 2:
    bVar1 = bifrost::sockets::stopListening(*(ConnectionId *)(param_1 + 0x58));
    uVar3 = CONCAT71(extraout_var,bVar1);
    break;
  case 3:
  case 4:
    bVar1 = bifrost::sockets::disconnect(*(ConnectionId *)(param_1 + 0x58),0,0);
    uVar3 = CONCAT71(extraout_var_00,bVar1);
    break;
  case 5:
    goto switchD_14052dd56_caseD_5;
  }
  if ((char)uVar3 != '\0') {
switchD_14052dd56_caseD_0:
    bVar1 = bifrost::sockets::destroy(*(ConnectionId *)(param_1 + 0x58));
    uVar3 = CONCAT71(extraout_var_01,bVar1);
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x5c) = 6;
switchD_14052dd56_caseD_5:
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
switchD_14052dd56_default:
  *(undefined4 *)(param_1 + 0x5c) = 7;
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14052ddc0 FUN_14052ddc0 body=452 status=ok
// SIG undefined FUN_14052ddc0(void)

undefined1 * FUN_14052ddc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 *local_48;
  code *local_40;
  undefined1 *local_38;
  code *local_30;
  
  if ((*(int *)(param_1 + 0x50) == 0) && (*(int *)(param_1 + 0x5c) == 2)) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    *(int *)(param_1 + 0x40) = (int)param_2[1];
    uVar7 = (**(code **)(*param_2 + 0x38))(param_2);
    (**(code **)(lVar3 + 0x30))(param_1 + 0x38,uVar7);
    puVar9 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x20,local_98);
    plVar4 = (longlong *)puVar9[1];
    uVar5 = *puVar9;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar10 = (int *)((longlong)local_90 + 0xc);
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    piVar10 = (int *)((longlong)plVar4 + 0xc);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    local_48 = &LAB_14052c650;
    local_40 = FUN_14052c790;
    local_38 = &LAB_14052c660;
    local_30 = FUN_14052c6b0;
    *(undefined4 *)(param_1 + 0x5c) = 4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    uVar7 = *(undefined4 *)(param_1 + 0x40);
    local_88 = uVar5;
    local_80 = plVar4;
    uVar8 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x38))(param_1 + 0x38);
    bVar6 = bifrost::sockets::_guard_xfg_dispatch_icall_nop
                      (*(undefined4 *)(param_1 + 0x58),uVar7,uVar8,&local_88);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      iVar2 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
      LOCK();
      iVar2 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return (undefined1 *)(ulonglong)bVar6;
  }
  return &stack0x00000000;
}



// FUNCTION 14052df90 FUN_14052df90 body=52 status=ok
// SIG undefined FUN_14052df90(void)

undefined8 FUN_14052df90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(lVar1 + 0x30))(param_1,uVar2);
  return 1;
}



// FUNCTION 14052dfd0 FUN_14052dfd0 body=227 status=ok
// SIG undefined FUN_14052dfd0(void)

longlong * FUN_14052dfd0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)operator_new(0x20);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143fa2f58;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = (longlong)&PTR_FUN_143fa1cc0;
    *(undefined4 *)(local_10 + 3) = 0;
  }
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  *param_2 = (longlong)local_18;
  param_2[1] = (longlong)local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      return param_2;
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 14052e0c0 CreateResolveInfoCached body=87 status=ok
// SIG undefined CreateResolveInfoCached(void)

undefined8 FSocketSubsystemEOS::CreateResolveInfoCached(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 8);
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
    return 0;
  }
  return 0;
}



// FUNCTION 14052e120 FUN_14052e120 body=425 status=ok
// SIG undefined FUN_14052e120(void)

longlong FUN_14052e120(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ConnectionId CVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  FUN_14052f1b0(param_1,&local_38,param_5);
  if ((local_38 == 0) || (*(longlong *)(local_38 + 8) == 0)) {
    lVar9 = 0;
  }
  else {
    plVar7 = (longlong *)FUN_14052cb10(param_1,param_3);
    plVar1 = plVar7 + 2;
    local_28 = plVar1;
    local_20 = plVar7;
    FUN_14052c900(&local_28,plVar1);
    iVar3 = *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xa8) = iVar3 + 1;
    if (*(int *)(param_1 + 0xac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xa0,iVar3);
    }
    plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xa0));
    *plVar10 = (longlong)plVar1;
    plVar10[1] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar7 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    uVar8 = 1;
    if (param_4 != 0) {
      if (param_4 == 1) {
        uVar8 = 0;
      }
      else if (param_4 == 2) {
        uVar8 = 2;
      }
    }
    lVar9 = *plVar10;
    uVar4 = *(undefined8 *)(local_38 + 8);
    *(undefined4 *)(lVar9 + 0x54) = uVar8;
    *(undefined8 *)(lVar9 + 0x48) = uVar4;
    *(undefined4 *)(lVar9 + 0x50) = 1;
    *(undefined4 *)(lVar9 + 0x40) = 0;
    (**(code **)(*(longlong *)(lVar9 + 0x38) + 0x30))((longlong *)(lVar9 + 0x38),0);
    CVar6 = bifrost::sockets::_guard_xfg_dispatch_icall_nop
                      (*(User **)(lVar9 + 0x48),*(ConnectionMode *)(lVar9 + 0x50),
                       *(TURNPolicy *)(lVar9 + 0x54));
    *(ConnectionId *)(lVar9 + 0x58) = CVar6;
    *(undefined4 *)(lVar9 + 0x5c) = 1;
    lVar9 = *plVar10;
  }
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return lVar9;
}



// FUNCTION 14052e2d0 GetShortestDistanceToPoint body=26 status=ok
// SIG undefined GetShortestDistanceToPoint(void)

void UBodySetup::GetShortestDistanceToPoint(void)

{
  FUN_14052e120();
  return;
}



// FUNCTION 14052e2f0 FUN_14052e2f0 body=12 status=ok
// SIG undefined FUN_14052e2f0(void)

void FUN_14052e2f0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_143f9a360;
  return;
}



// FUNCTION 14052e300 FUN_14052e300 body=96 status=ok
// SIG undefined FUN_14052e300(void)

void FUN_14052e300(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  plVar3 = *(longlong **)(param_1 + 0x140);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_1419c5c60(param_1 + 0x10);
  return;
}



// FUNCTION 14052e3d0 FUN_14052e3d0 body=99 status=ok
// SIG undefined FUN_14052e3d0(void)

void FUN_14052e3d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 8))(param_2);
  iVar1 = 0;
  while( true ) {
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa8) <= iVar1) break;
    if (*(longlong **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 0x10) == param_2) {
      TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (param_1 + 0xa0,iVar1,1,1);
      return;
    }
    iVar1 = iVar1 + 1;
  }
  return;
}



// FUNCTION 14052e440 FUN_14052e440 body=2343 status=ok
// SIG undefined FUN_14052e440(void)

void FUN_14052e440(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  void *pvVar5;
  char cVar6;
  AccountId AVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 *puVar18;
  uint uVar19;
  undefined2 *local_458;
  int local_450;
  undefined4 local_44c;
  wchar_t *local_448;
  uint local_440;
  undefined4 local_43c;
  wchar_t *local_438;
  uint local_430;
  undefined4 local_42c;
  void *local_428;
  ulonglong local_420;
  void *local_418;
  int local_410;
  undefined4 local_40c;
  undefined1 local_408;
  longlong local_400;
  undefined1 local_3e8;
  undefined1 local_3e0;
  longlong local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  void *local_3c0;
  int local_3b8;
  undefined4 local_3b4;
  undefined1 local_3b0;
  longlong local_3a8;
  undefined1 local_390;
  undefined1 local_388;
  longlong local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_308 [8];
  longlong *local_300;
  longlong local_2f8 [2];
  void *local_2e8;
  ulonglong local_2e0;
  longlong local_2d0;
  longlong local_2c0;
  longlong *local_2b0;
  int local_2a8;
  longlong local_2a0;
  undefined8 local_288;
  longlong *local_280;
  undefined1 *local_248;
  code *local_240;
  undefined1 *local_238;
  code *local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined1 local_218 [112];
  undefined8 local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [112];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 *local_f8 [8];
  undefined1 *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined8 *local_98 [8];
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  code *local_40;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = *(undefined2 **)(param_1 + 0x170);
  }
  FUN_14289aca0(local_2f8,0,puVar18,0);
  pvVar5 = local_2e8;
  local_458 = (undefined2 *)0x0;
  iVar15 = (int)local_2e0;
  uVar19 = 0;
  local_450 = iVar15;
  if (iVar15 == 0) {
    local_44c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_458,local_2e0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_458,pvVar5,(longlong)iVar15 * 2);
  }
  cVar6 = FString::StartsWith(&local_458,&DAT_143fa1000,1);
  if (cVar6 == '\0') {
    lVar9 = FUN_142b45e90();
    plVar11 = (longlong *)FUN_142b45fa0(*(undefined8 *)(lVar9 + 0x18),local_338);
    plVar2 = (longlong *)plVar11[1];
    lVar9 = *plVar11;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    if (local_330 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_330 + 1;
      lVar17 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_330)(local_330);
        LOCK();
        piVar1 = (int *)((longlong)local_330 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_330 + 8))(local_330,1);
        }
      }
    }
    puVar18 = local_458;
    lVar17 = (longlong)local_450;
    local_118 = 0;
    uStack_110 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_3c0 = (void *)0x0;
    local_3b8 = local_450;
    if (local_450 == 0) {
      local_3b4 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_3c0,local_450,0);
      _guard_xfg_dispatch_icall_nop(local_3c0,puVar18,lVar17 * 2);
    }
    local_3b0 = 0;
    local_3a8 = 0;
    local_390 = 0;
    local_380 = 0;
    uStack_378 = 0;
    local_388 = 0;
    local_370 = 0;
    puVar12 = (undefined4 *)FUN_140447410(&local_3c0,local_108);
    local_318 = *puVar12;
    uStack_314 = puVar12[1];
    uStack_310 = puVar12[2];
    uStack_30c = puVar12[3];
    AVar7 = bifrost::users::_guard_xfg_dispatch_icall_nop
                      (*(undefined8 *)(lVar9 + 8),&local_318,&local_328);
    if (local_3a8 != 0) {
      FMemory::Free();
    }
    if (local_380 != 0) {
      FMemory::Free();
    }
    if (local_3c0 != (void *)0x0) {
      FMemory::Free();
    }
    puVar8 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x128,local_308);
    plVar11 = (longlong *)puVar8[1];
    uVar3 = *puVar8;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
    }
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_300 + 1;
      lVar17 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar1 = (int *)((longlong)local_300 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_300 + 8))(local_300,1);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
    }
    local_1a8 = uVar3;
    local_1a0 = plVar11;
    FURL::FURL(local_198,local_2f8);
    local_58 = &LAB_14052c810;
    local_50 = FUN_14052c6e0;
    local_48 = &LAB_140446630;
    local_40 = FUN_14052c7b0;
    local_98[0] = bifrost::_guard_xfg_dispatch_icall_nop(0x80);
    *local_98[0] = local_1a8;
    local_98[0][1] = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_1a0 + 0xc) = *(int *)((longlong)local_1a0 + 0xc) + 1;
      UNLOCK();
    }
    FURL::FURL(local_98[0] + 2,local_198);
    local_248 = &LAB_14052c780;
    local_240 = FUN_14052c790;
    local_238 = &LAB_14052c660;
    local_230 = FUN_14052c6b0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
    }
    local_288 = uVar3;
    local_280 = plVar11;
    bifrost::users::_guard_xfg_dispatch_icall_nop
              (*(undefined8 *)(lVar9 + 8),AVar7,&local_288,local_98,0x4014000000000000);
    FURL::~FURL(local_198);
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_1a0 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar2 + 1;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  else {
    uVar16 = local_450 - 1;
    if (local_450 == 0) {
      uVar16 = uVar19;
    }
    if (3 < uVar16) {
      uVar16 = 3;
    }
    uVar13 = local_450 - 1;
    if (local_450 == 0) {
      uVar13 = uVar19;
    }
    uVar14 = uVar16;
    if ((uVar16 < 0x80000003) && (uVar14 = uVar13, 0x80000002 < uVar13)) {
      uVar14 = 0x80000002;
    }
    local_438 = (wchar_t *)0x0;
    local_42c = 0;
    puVar18 = &DAT_143f3eda8;
    if (local_450 != 0) {
      puVar18 = local_458;
    }
    iVar15 = uVar14 - uVar16;
    local_430 = iVar15 + 1;
    if (iVar15 == 0) {
      local_430 = uVar19;
    }
    if ((0 < (int)local_430) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438,0), pwVar4 = local_438,
       0 < (int)local_430)) {
      wcsncpy(local_438,puVar18 + (int)uVar16,(longlong)iVar15);
      pwVar4[iVar15] = L'\0';
    }
    cVar6 = FString::StartsWith(&local_438,L"JID.",1);
    if (cVar6 == '\0') {
      *(undefined2 *)(param_1 + 0x180) = 1;
    }
    else {
      uVar16 = 0;
      uVar19 = local_450 - 1;
      if (local_450 == 0) {
        uVar19 = uVar16;
      }
      if (4 < uVar19) {
        uVar19 = 4;
      }
      uVar13 = local_450 - 1;
      if (local_450 == 0) {
        uVar13 = uVar16;
      }
      uVar14 = uVar19;
      if ((uVar19 < 0x80000004) && (uVar14 = uVar13, 0x80000003 < uVar13)) {
        uVar14 = 0x80000003;
      }
      local_448 = (wchar_t *)0x0;
      local_43c = 0;
      puVar18 = &DAT_143f3eda8;
      if (local_450 != 0) {
        puVar18 = local_458;
      }
      iVar15 = uVar14 - uVar19;
      local_440 = iVar15 + 1;
      if (iVar15 == 0) {
        local_440 = uVar16;
      }
      if ((0 < (int)local_440) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448,0), pwVar4 = local_448,
         0 < (int)local_440)) {
        wcsncpy(local_448,puVar18 + (int)uVar19,(longlong)iVar15);
        pwVar4[iVar15] = L'\0';
      }
      FUN_141f2e4a0(&local_428,&local_448);
      if (local_448 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      puVar8 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x128,local_368);
      plVar2 = (longlong *)puVar8[1];
      uVar3 = *puVar8;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
      }
      if (local_360 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_360 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_360)(local_360);
          LOCK();
          piVar1 = (int *)((longlong)local_360 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_360 + 8))(local_360,1);
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
      }
      local_228 = uVar3;
      local_220 = plVar2;
      FURL::FURL(local_218,local_2f8);
      lVar9 = FUN_142b45e90();
      plVar10 = (longlong *)FUN_142b45fa0(*(undefined8 *)(lVar9 + 0x18),local_358);
      plVar11 = (longlong *)plVar10[1];
      lVar9 = *plVar10;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      if (local_350 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_350 + 1;
        lVar17 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_350)(local_350);
          LOCK();
          piVar1 = (int *)((longlong)local_350 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_350 + 8))(local_350,1);
          }
        }
      }
      pvVar5 = local_428;
      local_418 = (void *)0x0;
      iVar15 = (int)local_420;
      local_410 = iVar15;
      if (iVar15 == 0) {
        local_40c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_418,local_420 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_418,pvVar5,(longlong)iVar15 * 2);
      }
      local_408 = 0;
      local_400 = 0;
      local_3e8 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3e0 = 0;
      local_3c8 = 0;
      puVar8 = (undefined8 *)FUN_140447410(&local_418,local_128);
      local_348 = *puVar8;
      uStack_340 = puVar8[1];
      local_b8 = &LAB_14052c640;
      local_b0 = FUN_14052c6e0;
      local_a8 = &LAB_140446630;
      local_a0 = FUN_14052c7b0;
      local_f8[0] = bifrost::_guard_xfg_dispatch_icall_nop(0x80);
      *local_f8[0] = local_228;
      local_f8[0][1] = local_220;
      if (local_220 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_220 + 0xc) = *(int *)((longlong)local_220 + 0xc) + 1;
        UNLOCK();
      }
      FURL::FURL(local_f8[0] + 2,local_218);
      bifrost::sessions::_guard_xfg_dispatch_icall_nop
                (*(undefined8 *)(lVar9 + 8),&local_348,local_f8);
      if (local_400 != 0) {
        FMemory::Free();
      }
      if (local_3d8 != 0) {
        FMemory::Free();
      }
      if (local_418 != (void *)0x0) {
        FMemory::Free();
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      FURL::~FURL(local_218);
      if (local_220 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_220 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_220 + 8))(local_220,1);
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      if (local_428 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if (local_438 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (local_458 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar2 = local_2b0;
  if (local_2a0 != 0) {
    FMemory::Free();
    plVar2 = local_2b0;
  }
  for (; local_2a8 != 0; local_2a8 = local_2a8 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_2b0 != (longlong *)0x0) {
    FMemory::Free(local_2b0);
  }
  if (local_2c0 != 0) {
    FMemory::Free();
  }
  if (local_2d0 != 0) {
    FMemory::Free();
  }
  if (local_2e8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_2f8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14052ed70 FUN_14052ed70 body=65 status=ok
// SIG undefined FUN_14052ed70(void)

longlong FUN_14052ed70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if ((lVar1 == 0) && (DAT_146b17150 != 0)) {
    lVar2 = FUN_142876190(DAT_146b17150,param_1);
    if (lVar2 != 0) {
      return *(longlong *)(lVar2 + 0x288);
    }
  }
  return lVar1;
}



// FUNCTION 14052edc0 FUN_14052edc0 body=142 status=ok
// SIG undefined FUN_14052edc0(void)

undefined8 * FUN_14052edc0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  SessionId SVar5;
  longlong *plVar6;
  
  if (*(User **)(*param_2 + 8) == (User *)0x0) {
    plVar6 = (longlong *)param_2[1];
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    SVar5 = bifrost::session::_guard_xfg_dispatch_icall_nop(*(User **)(*param_2 + 8));
    plVar6 = (longlong *)param_2[1];
    *(SessionId *)(param_1 + 1) = SVar5;
  }
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_143fa1cc0;
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
  return param_1;
}



// FUNCTION 14052ee50 FUN_14052ee50 body=205 status=ok
// SIG undefined FUN_14052ee50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14052ee50(long param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  char local_58 [8];
  undefined **local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined **local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar1 = FString::StartsWith(param_2 + 0x10,&DAT_143f9f3a8,1);
  if (cVar1 != '\0') {
    local_50 = &PTR_FUN_143fa1cc0;
    local_48 = 0;
    if (*(int *)(param_2 + 0x18) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(param_2 + 0x10);
    }
    FUN_14052ff00(&local_50,puVar2,local_58);
    if (local_58[0] != '\0') {
      local_38 = local_48;
      local_34 = local_44;
      local_40 = &PTR_FUN_143fa1cc0;
      local_30 = 1;
      FUN_14052f190(&local_40);
      return;
    }
  }
  local_30 = 0;
  AK::MemoryMgr::GetPoolName(param_1);
  return;
}



// FUNCTION 14052ef40 FUN_14052ef40 body=264 status=ok
// SIG undefined FUN_14052ef40(void)

longlong FUN_14052ef40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_res8;
  longlong *local_28;
  longlong *local_20;
  
  local_res8 = param_1;
  plVar6 = (longlong *)FUN_14052c9d0(&local_res8);
  plVar1 = plVar6 + 2;
  local_28 = plVar1;
  local_20 = plVar6;
  FUN_14052c820(&local_28,plVar1);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar3 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb0,iVar3);
  }
  plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xb0));
  *plVar7 = (longlong)plVar1;
  plVar7[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  lVar4 = *plVar7;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return lVar4;
}



// FUNCTION 14052f060 FUN_14052f060 body=293 status=ok
// SIG undefined FUN_14052f060(void)

undefined8 * FUN_14052f060(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  FUN_14052f1b0(param_1,&local_18,0);
  local_20 = (longlong *)operator_new(0x20);
  if (local_20 != (longlong *)0x0) {
    *(undefined4 *)(local_20 + 1) = 1;
    *local_20 = (longlong)&PTR_FUN_143fa2f58;
    *(undefined4 *)((longlong)local_20 + 0xc) = 1;
    local_20[2] = (longlong)&PTR_FUN_143fa1cc0;
    *(undefined4 *)(local_20 + 3) = 0;
  }
  local_28 = local_20 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  plVar5 = local_20;
  *(undefined4 *)(local_28 + 1) = *(undefined4 *)(local_18 + 0x14);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
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
  return param_2;
}



// FUNCTION 14052f190 FUN_14052f190 body=5 status=ok
// SIG undefined FUN_14052f190(void)

undefined2 FUN_14052f190(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}



// FUNCTION 14052f1b0 FUN_14052f1b0 body=578 status=ok
// SIG undefined FUN_14052f1b0(void)

undefined8 * FUN_14052f1b0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_3 == 0) {
    param_3 = (**(code **)(*DAT_146b17150 + 0x148))();
  }
  local_60 = 0;
  if ((param_3 != 0) && (*(longlong *)(param_3 + 400) != 0)) {
    lVar6 = UGameInstance::GetFirstGamePlayer();
    if (lVar6 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      lVar7 = FUN_142b45e90();
      uVar5 = *(undefined8 *)(lVar7 + 0x18);
      lVar6 = FUN_142547b50(lVar6,local_38);
      local_58 = *(undefined8 *)(lVar6 + 8);
      local_50 = *(longlong **)(lVar6 + 0x10);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      puVar8 = (undefined8 *)FUN_142b4a990(uVar5,local_48,&local_58);
      local_70 = (longlong *)puVar8[1];
      local_68 = *puVar8;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_60,&local_70);
      plVar3 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
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
      local_38[0] = &PTR_FUN_143f740c8;
      if (local_20 != 0) {
        FMemory::Free();
      }
      local_38[0] = &PTR_FUN_143f73d18;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      *param_2 = local_68;
      param_2[1] = local_60;
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14052f410 FUN_14052f410 body=69 status=ok
// SIG undefined FUN_14052f410(void)

void FUN_14052f410(longlong param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  wchar_t *pwVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  
  puVar2 = local_res10;
  pwVar3 = L"WINDOWS";
  if (*(char *)(param_1 + 0x578) == '\0') {
    pwVar3 = L"SPARK";
    puVar2 = local_res8;
  }
  uVar1 = FName::FName(puVar2,pwVar3,1);
  FUN_1419c6b80(uVar1);
  return;
}



// FUNCTION 14052f460 FUN_14052f460 body=187 status=ok
// SIG undefined FUN_14052f460(void)

undefined8 FUN_14052f460(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res18 [16];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  puVar4 = (undefined8 *)0x0;
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_1;
    *plVar2 = (longlong)&PTR_GetPoolName_143f61570;
    plVar2[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f615b8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res18);
    iVar1 = DAT_146533138;
    lVar3 = (longlong)DAT_146533138;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146533130);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 3;
  }
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
}



// FUNCTION 14052f520 FUN_14052f520 body=308 status=ok
// SIG undefined FUN_14052f520(void)

undefined8 FUN_14052f520(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  if ((char)param_1[0xaf] != '\0') {
    uVar3 = FUN_1404d3420();
    return uVar3;
  }
  cVar2 = FUN_1425c25e0();
  if (cVar2 != '\0') {
    lVar4 = (**(code **)(*param_1 + 0x378))(param_1);
    if (lVar4 != 0) {
      if ((longlong *)param_1[0xac] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xac] + 8))();
      }
      local_18[1] = 7;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"Unreal",0xe);
      uVar3 = FUN_14052ed70(param_1);
      lVar4 = FUN_14052e120(lVar4,local_res8,local_18,0,uVar3);
      param_1[0xac] = lVar4;
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      plVar1 = (longlong *)param_1[0xac];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x78))(plVar1,param_1 + 0xb0);
        (**(code **)(param_1[0xb0] + 0x30))(param_1 + 0xb0,*(undefined4 *)(param_4 + 0x20));
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14052f660 FUN_14052f660 body=335 status=ok
// SIG undefined FUN_14052f660(void)

bool FUN_14052f660(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  puVar5 = &DAT_143f3eda8;
  if (DAT_146b18950 != 0) {
    puVar5 = DAT_146b18948;
  }
  cVar1 = FURL::HasOption(param_3,puVar5);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xaf) = 1;
    puVar5 = &DAT_143f3eda8;
    if (DAT_146b18950 != 0) {
      puVar5 = DAT_146b18948;
    }
    cVar1 = FURL::HasOption(param_3,puVar5);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xaf) = 1;
      uVar2 = FUN_1404d3d60(param_1,param_2,param_3,param_4);
      return (bool)uVar2;
    }
  }
  *(undefined1 *)(param_1 + 0xaf) = 0;
  cVar1 = (**(code **)(*param_1 + 0x280))(param_1,1,param_2,param_3,1,param_4);
  if (cVar1 != '\0') {
    uVar3 = GetTransientPackage();
    uVar7 = 0;
    param_4 = param_4 & 0xffffffffffffff00;
    uVar6 = 0;
    plVar4 = (longlong *)NewObject<USaveGame>(uVar3,param_1[0x20],0,0,0,param_4,0);
    param_1[0x12] = (longlong)plVar4;
    (**(code **)(*plVar4 + 0x318))
              (plVar4,param_1,param_1[0xac],param_3,CONCAT44(uVar6,2),param_4 & 0xffffffff00000000,
               uVar7 & 0xffffffff00000000);
    FUN_1425b9f20(plVar4,1,1,0);
  }
  return cVar1 != '\0';
}



// FUNCTION 14052f7b0 FUN_14052f7b0 body=278 status=ok
// SIG undefined FUN_14052f7b0(void)

undefined1 FUN_14052f7b0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  puVar5 = &DAT_143f3eda8;
  if (DAT_146b18950 != 0) {
    puVar5 = DAT_146b18948;
  }
  cVar1 = FURL::HasOption(param_3,puVar5);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xaf) = 1;
    uVar2 = FUN_1404d3d60(param_1,param_2,param_3,param_4);
  }
  else {
    *(undefined1 *)(param_1 + 0xaf) = 0;
    cVar1 = (**(code **)(*param_1 + 0x280))(param_1,1,param_2,param_3,1,param_4);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar3 = GetTransientPackage();
      uVar7 = 0;
      param_4 = param_4 & 0xffffffffffffff00;
      uVar6 = 0;
      plVar4 = (longlong *)NewObject<USaveGame>(uVar3,param_1[0x20],0,0,0,param_4,0);
      param_1[0x12] = (longlong)plVar4;
      (**(code **)(*plVar4 + 0x318))
                (plVar4,param_1,param_1[0xac],param_3,CONCAT44(uVar6,2),param_4 & 0xffffffff00000000
                 ,uVar7 & 0xffffffff00000000);
      FUN_1425b9f20(plVar4,1,1,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 14052f8d0 FUN_14052f8d0 body=381 status=ok
// SIG undefined FUN_14052f8d0(void)

ulonglong FUN_14052f8d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                       undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar11 = &DAT_143f3eda8;
  if (DAT_146b18950 != 0) {
    puVar11 = DAT_146b18948;
  }
  cVar4 = FURL::HasOption(param_3,puVar11);
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0xaf) = 1;
    uVar10 = FUN_1404d40a0(param_1,param_2,param_3,param_4);
    return uVar10;
  }
  *(undefined1 *)(param_1 + 0xaf) = 0;
  lVar7 = (**(code **)(*param_1 + 0x378))();
  plVar9 = (longlong *)0x0;
  if (lVar7 != 0) {
    uVar8 = FUN_14052ed70(param_1);
    plVar9 = (longlong *)FUN_14052f1b0(lVar7,local_28,uVar8);
    lVar7 = *plVar9;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_20 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      uVar6 = (int)lVar3 - 1;
      plVar9 = (longlong *)(ulonglong)uVar6;
      if (uVar6 == 0) {
        plVar9 = (longlong *)(**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          plVar9 = (longlong *)(**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    if ((lVar7 != 0) &&
       (plVar9 = (longlong *)
                 (**(code **)(*param_1 + 0x280))(param_1,0,param_2,param_3,param_4,param_5),
       (char)plVar9 != '\0')) {
      bVar5 = 0;
      cVar4 = (**(code **)(*(longlong *)param_1[0xac] + 0x10))
                        ((longlong *)param_1[0xac],param_1 + 0xb0);
      if ((cVar4 != '\0') &&
         (bVar5 = (**(code **)(*(longlong *)param_1[0xac] + 0x20))((longlong *)param_1[0xac],0),
         bVar5 != 0)) {
        (**(code **)(*param_1 + 0x2a0))(param_1);
      }
      return (ulonglong)bVar5;
    }
  }
  return (ulonglong)plVar9 & 0xffffffffffffff00;
}



// FUNCTION 14052fa60 FUN_14052fa60 body=162 status=ok
// SIG undefined FUN_14052fa60(void)

void FUN_14052fa60(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_1404d44d0();
  if (param_2 != 0) {
    lVar2 = FUN_1405307c0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (*(char *)(param_2 + 0x578) == '\0')) && (param_3 != 0)) &&
       (*(User **)(param_3 + 0x48) != (User *)0x0)) {
      bifrost::sockets::_guard_xfg_dispatch_icall_nop
                (*(User **)(param_3 + 0x48),*(SessionId *)(param_3 + 0x40));
    }
  }
  return;
}



// FUNCTION 14052fb10 FUN_14052fb10 body=47 status=ok
// SIG undefined FUN_14052fb10(void)

void FUN_14052fb10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143fa1c58;
    puVar1[1] = 0;
    return;
  }
  return;
}



// FUNCTION 14052fb40 FUN_14052fb40 body=153 status=ok
// SIG undefined FUN_14052fb40(void)

char FUN_14052fb40(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  char cVar3;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  }
  cVar3 = *(char *)(param_1 + 0x180);
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x120), *(longlong *)(lVar1 + 0x20) != 0))
  {
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))(*(longlong **)(lVar1 + 0x18),0xffffffff,0);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    cVar3 = *(char *)(param_1 + 0x180);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x138));
  return cVar3;
}



// FUNCTION 14052fbf0 FUN_14052fbf0 body=395 status=ok
// SIG undefined FUN_14052fbf0(void)

ulonglong FUN_14052fbf0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong in_RAX;
  undefined8 *puVar9;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  code *local_38;
  code *local_30;
  undefined1 *local_28;
  code *local_20;
  
  if (*(int *)(param_1 + 0x5c) != 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  *(undefined4 *)(param_1 + 0x5c) = 3;
  puVar9 = (undefined8 *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x20,local_88);
  plVar5 = (longlong *)puVar9[1];
  uVar6 = *puVar9;
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar3 = (int *)((longlong)local_80 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_38 = FUN_14052c740;
  local_30 = FUN_14052c790;
  local_28 = &LAB_14052c660;
  local_20 = FUN_14052c6b0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_78 = uVar6;
  local_70 = plVar5;
  bVar8 = bifrost::sockets::_guard_xfg_dispatch_icall_nop(*(undefined4 *)(param_1 + 0x58),&local_78)
  ;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return (ulonglong)bVar8;
}



// FUNCTION 14052fd80 FUN_14052fd80 body=133 status=ok
// SIG undefined FUN_14052fd80(void)

uint FUN_14052fd80(longlong param_1,uint param_2,SessionId param_3,uint *param_4,longlong *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint local_28;
  undefined2 local_20;
  undefined1 local_18 [16];
  
  if ((*(int *)(param_1 + 0x5c) - 1U & 0xfffffffd) != 0) {
    *param_4 = 0;
    return 0;
  }
  puVar4 = (undefined8 *)
           bifrost::sockets::_guard_xfg_dispatch_icall_nop
                     ((ConnectionId)local_18,(void *)(ulonglong)*(uint *)(param_1 + 0x58),param_2,
                      param_3,0);
  uVar1 = *puVar4;
  uVar2 = *(undefined4 *)(puVar4 + 1);
  local_28 = (uint)uVar1;
  *param_4 = local_28;
  iVar3 = (int)((ulonglong)uVar1 >> 0x20);
  if (iVar3 != 0) {
    local_20 = (undefined2)uVar2;
    *(int *)(param_5 + 1) = iVar3;
    (**(code **)(*param_5 + 0x30))(param_5,local_20);
  }
  return *param_4 >> 0x1f ^ 1;
}



// FUNCTION 14052fe10 FUN_14052fe10 body=238 status=ok
// SIG undefined FUN_14052fe10(void)

undefined8
FUN_14052fe10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
             longlong *param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((*(int *)(param_1 + 0x5c) - 1U & 0xfffffffd) == 0) &&
     (((*(int *)(param_1 + 0x5c) != 5 || (*(int *)(param_1 + 0x40) == (int)param_5[1])) &&
      (lVar1 = param_5[1], (int)lVar1 != 0)))) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    uVar3 = (**(code **)(*param_5 + 0x38))();
    bVar2 = bifrost::sockets::_guard_xfg_dispatch_icall_nop
                      (*(undefined4 *)(param_1 + 0x58),param_2,param_3,(int)lVar1,uVar3,&local_68);
    if (bVar2) {
      *param_4 = param_3;
      return 1;
    }
  }
  *param_4 = 0;
  return 0;
}



// FUNCTION 14052ff00 FUN_14052ff00 body=1217 status=ok
// SIG undefined FUN_14052ff00(void)

void FUN_14052ff00(longlong param_1,wchar_t *param_2,undefined1 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 local_res20 [8];
  wchar_t *local_108;
  int **ppiStack_100;
  wchar_t *local_f8;
  ulonglong local_f0;
  uint local_e8;
  int local_e4;
  int *local_e0;
  undefined1 *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined1 local_98;
  longlong local_90;
  undefined1 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  iVar1 = _wcsnicmp(param_2,L"SP.",3);
  if (iVar1 != 0) {
LAB_1405303a1:
    *param_3 = 0;
    return;
  }
  pwVar9 = param_2 + 3;
  iVar1 = _wcsnicmp(pwVar9,L"CA.",3);
  if (iVar1 == 0) {
    local_f8 = (wchar_t *)0x0;
    local_f0 = 0;
    local_108 = (wchar_t *)0x0;
    ppiStack_100 = (int **)0x0;
    param_2 = param_2 + 6;
    if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_2[lVar8] != L'\0');
      uVar7 = (int)lVar8 + 1;
      ppiStack_100 = (int **)(ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      }
      FGenericPlatformString::Memcpy(local_108,param_2,(longlong)(int)uVar7 * 2);
    }
    FUN_141594550(&local_108,&local_f8,&DAT_143f9f494,1);
    if (local_108 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if ((int)local_f0 == 2) {
      pwVar9 = L"";
      if (*(int *)(local_f8 + 4) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)local_f8;
      }
      uVar2 = _wcstoui64(pwVar10,(wchar_t **)0x0,10);
      *(int *)(param_1 + 8) = (int)uVar2;
      if (*(int *)(local_f8 + 0xc) != 0) {
        pwVar9 = *(wchar_t **)(local_f8 + 8);
      }
      uVar2 = _wcstoui64(pwVar9,(wchar_t **)0x0,10);
      *(short *)(param_1 + 0xc) = (short)uVar2;
      *param_3 = 1;
      pwVar9 = local_f8;
      for (iVar1 = (int)local_f0; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*(longlong *)pwVar9 != 0) {
          FMemory::Free();
        }
        pwVar9 = pwVar9 + 8;
      }
    }
    else {
      *param_3 = 0;
      pwVar9 = local_f8;
      for (iVar1 = (int)local_f0; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*(longlong *)pwVar9 != 0) {
          FMemory::Free();
        }
        pwVar9 = pwVar9 + 8;
      }
    }
    if (local_f8 == (wchar_t *)0x0) {
      return;
    }
    FMemory::Free(local_f8);
    return;
  }
  iVar1 = _wcsnicmp(pwVar9,L"PA.",3);
  if (iVar1 == 0) {
    uVar2 = _wcstoui64(param_2 + 6,(wchar_t **)0x0,10);
    *(int *)(param_1 + 8) = (int)uVar2;
    *param_3 = 1;
    return;
  }
  iVar1 = _wcsnicmp(pwVar9,L"JID.",3);
  if (iVar1 != 0) goto LAB_1405303a1;
  local_108 = (wchar_t *)0x0;
  pwVar9 = (wchar_t *)0x0;
  lVar8 = -1;
  pwVar10 = param_2 + 7;
  if ((pwVar10 != (wchar_t *)0x0) && (*pwVar10 != L'\0')) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar10[lVar6] != L'\0');
    uVar5 = (int)lVar6 + 1;
    ppiStack_100 = (int **)(ulonglong)uVar5;
    uVar7 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      uVar7 = (uint)ppiStack_100;
    }
    pwVar9 = local_108;
    FGenericPlatformString::Memcpy(local_108,pwVar10,(longlong)(int)uVar5 * 2);
    if (uVar7 != 0) {
      iVar1 = uVar7 - 1;
      local_f8 = pwVar9;
      goto LAB_140530046;
    }
  }
  local_f8 = L"";
  iVar1 = 0;
LAB_140530046:
  local_108 = (wchar_t *)0x0;
  pwVar10 = (wchar_t *)0x0;
  if (5 < iVar1) {
    iVar1 = 5;
  }
  local_e8 = iVar1 + 1;
  if (iVar1 == 0) {
    local_e8 = 0;
  }
  ppiStack_100 = (int **)(ulonglong)local_e8;
  if (0 < (int)local_e8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    pwVar10 = local_108;
    local_e8 = (uint)ppiStack_100;
    if (0 < (int)(uint)ppiStack_100) {
      wcsncpy(local_108,local_f8,(longlong)iVar1);
      pwVar10[iVar1] = L'\0';
    }
  }
  if (pwVar9 != (wchar_t *)0x0) {
    FMemory::Free(pwVar9);
  }
  pwVar9 = L"";
  if (local_e8 != 0) {
    pwVar9 = pwVar10;
  }
  uVar2 = _wcstoui64(pwVar9,(wchar_t **)0x0,10);
  local_res20[0] = 0;
  local_f8 = (wchar_t *)0x0;
  local_f0 = 0;
  *(short *)(param_1 + 0xc) = (short)uVar2;
  local_e0 = &local_e4;
  local_d8 = local_res20;
  ppiStack_100 = &local_e0;
  local_108 = L"譈ࡁÆ䠁Ƌႉ쳃쳌荈㣬ဏ䠂咍․⤏⑄\xe820ࣚ";
  param_2 = param_2 + 0xd;
  if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != L'\0');
    uVar7 = (int)lVar8 + 1;
    local_f0 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    FGenericPlatformString::Memcpy(local_f8,param_2,(longlong)(int)uVar7 * 2);
  }
  uVar3 = FUN_141f2e4a0(local_b8,&local_f8);
  FString::FString(local_a8,uVar3);
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_58 = 0;
  puVar4 = (undefined4 *)FUN_140447410(local_a8,local_50);
  local_c8 = *puVar4;
  uStack_c4 = puVar4[1];
  uStack_c0 = puVar4[2];
  uStack_bc = puVar4[3];
  bifrost::sessions::_guard_xfg_dispatch_icall_nop(&local_c8,&local_108);
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_e4 != 0) {
    *(int *)(param_1 + 8) = local_e4;
  }
  *param_3 = local_e4 != 0;
  if (pwVar10 != (wchar_t *)0x0) {
    FMemory::Free(pwVar10);
  }
  return;
}



// FUNCTION 1405303e0 FUN_1405303e0 body=170 status=ok
// SIG undefined FUN_1405303e0(void)

void FUN_1405303e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = *(int *)(param_1 + 0xa8);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) == 0) {
    return;
  }
  TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0xa0),0);
  return;
}



// FUNCTION 140530490 FUN_140530490 body=49 status=ok
// SIG undefined FUN_140530490(void)

void FUN_140530490(longlong param_1)

{
  if ((*(char *)(param_1 + 0x578) == '\0') && (*(longlong **)(param_1 + 0x560) != (longlong *)0x0))
  {
    (**(code **)(**(longlong **)(param_1 + 0x560) + 8))();
  }
  FUN_1425d1e10(param_1);
  return;
}



// FUNCTION 1405304d0 FUN_1405304d0 body=334 status=ok
// SIG undefined FUN_1405304d0(void)

undefined8 FUN_1405304d0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 local_res8 [8];
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 *local_20;
  code *local_18;
  undefined8 **ppuStack_10;
  
  if ((int)param_1[1] == 0) {
    FString::PrintfImpl(param_2,L"%s%s%u",&DAT_143fa1ba8,&DAT_143fa1ba0,0);
    return param_2;
  }
  local_38 = 0;
  local_30 = 0;
  local_res8[0] = 0;
  local_28 = &local_38;
  local_20 = local_res8;
  ppuStack_10 = &local_28;
  local_18 = FUN_14052cc70;
  bifrost::sessions::_guard_xfg_dispatch_icall_nop((int)param_1[1],&local_18);
  if ((int)local_30 < 2) {
    FString::PrintfImpl(param_2,L"%s%s%u",&DAT_143fa1bc8,&DAT_143fa1bc0,(int)param_1[1]);
  }
  else {
    puVar2 = (undefined8 *)FUN_141f2eb00(&local_18,&local_38);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    FString::PrintfImpl(param_2,L"%s%s%05d.%s",&DAT_143fa1bf0,L"JID.",uVar1,puVar3);
    if (local_18 != (code *)0x0) {
      FMemory::Free();
    }
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140530620 FUN_140530620 body=3 status=ok
// SIG undefined FUN_140530620(void)

undefined4 FUN_140530620(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// FUNCTION 140530630 FUN_140530630 body=162 status=ok
// SIG undefined FUN_140530630(void)

longlong FUN_140530630(void)

{
  if (DAT_146853448 == 0) {
    FUN_14171ccd0(L"/Script/SocketSubsystemSpark",L"SparkNetConnection",&DAT_146853448,FUN_140447710
                  ,0x19a0,0x1000000c,0,L"Engine",&LAB_140530a10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2600,FUN_1404e7690,&LAB_140447700
                  ,0);
  }
  return DAT_146853448;
}



// FUNCTION 1405306e0 FUN_1405306e0 body=162 status=ok
// SIG undefined FUN_1405306e0(void)

longlong FUN_1405306e0(void)

{
  if (DAT_146853428 == 0) {
    FUN_14171ccd0(L"/Script/SocketSubsystemSpark",L"SparkBeaconNetConnection",&DAT_146853428,
                  FUN_140447710,0x19a0,0x1000000c,0,L"Engine",&LAB_1405309d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2600,FUN_140530630,&LAB_140447700
                  ,0);
  }
  return DAT_146853428;
}



// FUNCTION 140530790 FUN_140530790 body=47 status=ok
// SIG undefined FUN_140530790(void)

longlong FUN_140530790(void)

{
  if (DAT_146853440 == 0) {
    FUN_141786440(&DAT_146853440,&PTR_FUN_143fa3250);
  }
  return DAT_146853440;
}



// FUNCTION 1405307c0 FUN_1405307c0 body=162 status=ok
// SIG undefined FUN_1405307c0(void)

longlong FUN_1405307c0(void)

{
  if (DAT_146853458 == 0) {
    FUN_14171ccd0(L"/Script/SocketSubsystemSpark",L"SparkNetDriver",&DAT_146853458,FUN_140447710,
                  0x590,0x1000000c,0,L"Engine",FUN_140530a30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2a30,FUN_1404e74f0,&LAB_140447700
                  ,0);
  }
  return DAT_146853458;
}



// FUNCTION 140530870 FUN_140530870 body=47 status=ok
// SIG undefined FUN_140530870(void)

longlong FUN_140530870(void)

{
  if (DAT_146853418 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146853418,&PTR_s__Script_SocketSubsystemSpark_143fa34d0);
  }
  return DAT_146853418;
}



// FUNCTION 1405308c0 FUN_1405308c0 body=162 status=ok
// SIG undefined FUN_1405308c0(void)

longlong FUN_1405308c0(void)

{
  if (DAT_146853438 == 0) {
    FUN_14171ccd0(L"/Script/SocketSubsystemSpark",L"SparkBeaconNetDriver",&DAT_146853438,
                  FUN_140447710,0x590,0x1000000c,0,L"Engine",&LAB_1405309f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2a30,FUN_1405307c0,&LAB_140447700
                  ,0);
  }
  return DAT_146853438;
}



// FUNCTION 140530970 FUN_140530970 body=47 status=ok
// SIG undefined FUN_140530970(void)

longlong FUN_140530970(void)

{
  if (DAT_146853450 == 0) {
    FUN_141786440(&DAT_146853450,&PTR_FUN_143fa3380);
  }
  return DAT_146853450;
}



// FUNCTION 140530a30 FUN_140530a30 body=90 status=ok
// SIG undefined FUN_140530a30(void)

void FUN_140530a30(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1404be1c0(puVar1,param_1);
    *(undefined1 *)(puVar1 + 0xaf) = 0;
    *puVar1 = &PTR_FUN_143fa1f58;
    puVar1[5] = &PTR_LAB_143fa2380;
    puVar1[0xa8] = &PTR_LAB_143fa2390;
    FUN_14052cc90(puVar1 + 0xb0);
    return;
  }
  return;
}



// FUNCTION 140530aa0 FUN_140530aa0 body=47 status=ok
// SIG undefined FUN_140530aa0(void)

longlong FUN_140530aa0(void)

{
  if (DAT_146853420 == 0) {
    FUN_141786440(&DAT_146853420,&PTR_FUN_143fa2fa0);
  }
  return DAT_146853420;
}



// FUNCTION 140530ad0 FUN_140530ad0 body=47 status=ok
// SIG undefined FUN_140530ad0(void)

longlong FUN_140530ad0(void)

{
  if (DAT_146853430 == 0) {
    FUN_141786440(&DAT_146853430,&PTR_FUN_143fa3110);
  }
  return DAT_146853430;
}



// FUNCTION 140530b00 StartupModule body=144 status=ok
// SIG undefined StartupModule(void)

void FOnlineSubsystemNullModule::StartupModule(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  puVar3 = (undefined8 *)operator_new(8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143fc1500;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  puVar3 = (undefined8 *)FName::FName(local_res8,"OnlineSubsystem",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = *plVar5;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  (**(code **)(lVar2 + 0x78))(plVar5,*puVar3,uVar1);
  return;
}



// FUNCTION 140530b90 ShutdownModule body=144 status=ok
// SIG undefined ShutdownModule(void)

void FOnlineSubsystemNullModule::ShutdownModule(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  puVar3 = (undefined8 *)FName::FName(local_res8,"OnlineSubsystem",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar1);
  lVar2 = *plVar5;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
  (**(code **)(lVar2 + 0x80))(plVar5,*puVar3);
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 140530c50 FUN_140530c50 body=30 status=ok
// SIG undefined FUN_140530c50(void)

void FUN_140530c50(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_14053abf0(local_18,*param_2,&local_18);
  return;
}



// FUNCTION 140530cb0 FUN_140530cb0 body=33 status=ok
// SIG undefined FUN_140530cb0(void)

void FUN_140530cb0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_14053a720(local_18,*param_2,&local_18,*param_4);
  return;
}



// FUNCTION 140530ce0 ~TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString> body=94 status=ok
// SIG undefined ~TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>(void)

void UE4Tuple_Private::
     TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>::
     ~TTupleImpl<TIntegerSequence<unsigned_int,0,1>,TSharedPtr<FBuildPatchAppManifest,1>,FString>
               (longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 140530db0 FUN_140530db0 body=30 status=ok
// SIG undefined FUN_140530db0(void)

void FUN_140530db0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_14053a350(local_18,*param_2,&local_18);
  return;
}



// FUNCTION 140530dd0 FUN_140530dd0 body=666 status=ok
// SIG undefined FUN_140530dd0(void)

undefined8 * FUN_140530dd0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  *param_2 = *puVar1;
  lVar3 = puVar1[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_1405343b0(param_2 + 2,lVar2);
  FString::FString(param_2 + 0xe,lVar2 + 0x60);
  FString::FString(param_2 + 0x10,lVar2 + 0x70);
  FString::FString(param_2 + 0x12,lVar2 + 0x80);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(lVar2 + 0x90);
  uVar4 = *(undefined8 *)(lVar2 + 0xa0);
  param_2[0x15] = *(undefined8 *)(lVar2 + 0x98);
  param_2[0x16] = uVar4;
  param_2[0x17] = *(undefined8 *)(lVar2 + 0xa8);
  param_2[0x18] = *(undefined8 *)(lVar2 + 0xb0);
  lVar3 = *(longlong *)(lVar2 + 0xb8);
  param_2[0x19] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_2[0x1a] = *(undefined8 *)(lVar2 + 0xc0);
  param_2[0x1b] = *(undefined8 *)(lVar2 + 200);
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar2 + 0xd0);
  *(undefined4 *)((longlong)param_2 + 0xe4) = *(undefined4 *)(lVar2 + 0xd4);
  *(undefined4 *)(param_2 + 0x1d) = *(undefined4 *)(lVar2 + 0xd8);
  *(undefined4 *)((longlong)param_2 + 0xec) = *(undefined4 *)(lVar2 + 0xdc);
  *(undefined4 *)(param_2 + 0x1e) = *(undefined4 *)(lVar2 + 0xe0);
  *(undefined4 *)((longlong)param_2 + 0xf4) = *(undefined4 *)(lVar2 + 0xe4);
  *(undefined1 *)(param_2 + 0x1f) = *(undefined1 *)(lVar2 + 0xe8);
  param_2[0x20] = 0;
  param_2[0x20] = *(undefined8 *)(lVar2 + 0xf0);
  *(undefined8 *)(lVar2 + 0xf0) = 0;
  *(undefined4 *)(param_2 + 0x21) = *(undefined4 *)(lVar2 + 0xf8);
  *(undefined4 *)((longlong)param_2 + 0x10c) = *(undefined4 *)(lVar2 + 0xfc);
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(lVar2 + 0x100);
  *(undefined1 *)((longlong)param_2 + 0x111) = *(undefined1 *)(lVar2 + 0x101);
  *(undefined1 *)((longlong)param_2 + 0x112) = *(undefined1 *)(lVar2 + 0x102);
  *(undefined1 *)((longlong)param_2 + 0x113) = *(undefined1 *)(lVar2 + 0x103);
  *(undefined1 *)((longlong)param_2 + 0x114) = *(undefined1 *)(lVar2 + 0x104);
  *(undefined1 *)((longlong)param_2 + 0x115) = *(undefined1 *)(lVar2 + 0x105);
  *(undefined1 *)((longlong)param_2 + 0x116) = *(undefined1 *)(lVar2 + 0x106);
  *(undefined1 *)((longlong)param_2 + 0x117) = *(undefined1 *)(lVar2 + 0x107);
  param_2[0x23] = *(undefined8 *)(lVar2 + 0x108);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar2 + 0x110);
  param_2[0x25] = *(undefined8 *)(lVar2 + 0x118);
  param_2[0x26] = *(undefined8 *)(lVar2 + 0x120);
  param_2[0x27] = *(undefined8 *)(lVar2 + 0x128);
  param_2[0x28] = *(undefined8 *)(lVar2 + 0x130);
  param_2[0x29] = *(undefined8 *)(lVar2 + 0x138);
  param_2[0x2a] = *(undefined8 *)(lVar2 + 0x140);
  param_2[0x2b] = *(undefined8 *)(lVar2 + 0x148);
  return param_2;
}



// FUNCTION 140531070 FUN_140531070 body=304 status=ok
// SIG undefined FUN_140531070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140531070(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [4];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)*param_1;
  local_78[0] = 0;
  local_78[1] = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
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
  FUN_1405399f0(param_2 + 2,local_78);
  lVar2 = local_38;
  if (local_38 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 9,local_40,4);
  }
  if (param_2[10] != 0) {
    FMemory::Free();
    lVar2 = local_38;
  }
  param_2[10] = lVar2;
  *(undefined4 *)(param_2 + 0xb) = local_30;
  local_30 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1405311a0 FUN_1405311a0 body=140 status=ok
// SIG undefined FUN_1405311a0(void)

longlong FUN_1405311a0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  FString::FString(param_2,*param_1);
  FString::FString(param_2 + 0x10,lVar1);
  FString::FString(param_2 + 0x20,lVar1 + 0x10);
  FString::FString(param_2 + 0x30,lVar1 + 0x20);
  *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(lVar1 + 0x50);
  lVar1 = *(longlong *)(lVar1 + 0x58);
  *(longlong *)(param_2 + 0x68) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140531230 FUN_140531230 body=166 status=ok
// SIG undefined FUN_140531230(void)

void FUN_140531230(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_14 [12];
  
  plVar4 = *(longlong **)(param_2 + 0x18);
  iVar3 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar7 = iVar6 == 0;
    if (bVar7) {
      *(int *)(plVar4 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar7) {
      while( true ) {
        LOCK();
        bVar7 = iVar6 == (int)plVar4[1];
        if (bVar7) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar7) break;
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar7 = iVar6 == 0;
        if (bVar7) {
          *(int *)(plVar4 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar7) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x10) != 0) {
          if (iVar3 == 0) {
            FUN_140549500(*(longlong *)(param_2 + 0x10) + 0x78,local_14,param_2);
          }
          else {
            FUN_140566c30();
          }
        }
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
  }
  return;
}



// FUNCTION 1405312e0 FUN_1405312e0 body=260 status=ok
// SIG undefined FUN_1405312e0(void)

void FUN_1405312e0(undefined8 param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  iVar2 = *param_3;
  plVar3 = *(longlong **)(param_2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar7) {
      while( true ) {
        LOCK();
        bVar7 = iVar5 == (int)plVar3[1];
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar7) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar7 = iVar5 == 0;
        if (bVar7) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar7) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_2 + 0x10);
        if (lVar4 != 0) {
          if (iVar2 == 0) {
            plVar6 = (longlong *)FUN_14058b310(*(undefined8 *)(lVar4 + 0x50));
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x28))(plVar6);
            (**(code **)(*plVar6 + 0x88))(plVar6,param_2 + 0x20);
            plVar6 = (longlong *)FUN_14058b310(*(undefined8 *)(lVar4 + 0x50));
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6);
            (**(code **)(*plVar6 + 0x88))(plVar6,param_2 + 0x20);
            FUN_140568cd0(lVar4);
          }
          else {
            FUN_140566ea0(lVar4,param_2);
          }
        }
        LOCK();
        plVar6 = plVar3 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1405313f0 FUN_1405313f0 body=332 status=ok
// SIG undefined FUN_1405313f0(void)

void FUN_1405313f0(longlong **param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28 [2];
  
  plVar5 = (longlong *)param_2[1];
  lVar4 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_28[0] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143fc1bd0;
    plVar3[1] = lVar4;
    plVar3[2] = (longlong)plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
    plVar3[3] = param_3;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143fc1c18;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar3 = local_28[0];
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar3 = local_28[0];
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
        plVar3 = local_28[0];
      }
    }
  }
  if (local_28 != param_1) {
    if (plVar3 == (longlong *)0x0) {
      if (*(int *)(param_1 + 1) == 0) {
        return;
      }
      plVar5 = *param_1;
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      if (*param_1 != (longlong *)0x0) {
        plVar5 = (longlong *)FMemory::Realloc(*param_1,0,0);
        *param_1 = plVar5;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
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



// FUNCTION 140531540 FUN_140531540 body=199 status=ok
// SIG undefined FUN_140531540(void)

void FUN_140531540(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 8;
    do {
      *param_1 = &PTR_FUN_143fc05b0;
      FString::FString(param_1 + 1,param_2);
      param_1[3] = *(undefined8 *)(param_2 + 0x10);
      lVar1 = *(longlong *)(param_2 + 0x18);
      param_1[4] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      FString::FString(param_1 + 5,param_2 + 0x20);
      param_1 = param_1 + 7;
      param_2 = param_2 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140531610 CreateRaw<FSlateEditableTextLayout> body=117 status=ok
// SIG undefined CreateRaw<FSlateEditableTextLayout>(void)

undefined8 *
TBaseDelegate<TTypeWrapper<void>_>::CreateRaw<FSlateEditableTextLayout>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)operator_new(0x28,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = &DAT_143f3ed00;
    puVar1[2] = param_3;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[4] = uVar2;
    *puVar1 = &PTR_GetPoolName_143f3ed48;
  }
  return param_1;
}



// FUNCTION 140531690 FUN_140531690 body=347 status=ok
// SIG undefined FUN_140531690(void)

undefined8 * FUN_140531690(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_143fc19c0;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_GetPoolName_143fc1a08;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405317f0 FUN_1405317f0 body=347 status=ok
// SIG undefined FUN_1405317f0(void)

undefined8 * FUN_1405317f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2,local_28);
  plVar3 = (longlong *)puVar5[1];
  uVar6 = *puVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)operator_new(0x30,param_1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_GetPoolName_143fc1bd0;
    puVar5[1] = uVar6;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    puVar5[3] = param_3;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_GetPoolName_143fc1c18;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    piVar7 = (int *)((longlong)plVar3 + 0xc);
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
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
      piVar7 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140531950 FUN_140531950 body=948 status=ok
// SIG undefined FUN_140531950(void)

int * FUN_140531950(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined4 uVar14;
  void *_Dst;
  uint uVar15;
  undefined8 *_Src;
  int iVar16;
  bool local_res8;
  int local_68;
  int local_64;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  uVar14 = 0xffffffff;
  iVar16 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar13 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar12 +
                    (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar10 = *puVar10 | 1 << ((byte)iVar13 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar13 * 0x68 + *param_1);
  FUN_140531070(param_3,_Src);
  *(undefined4 *)(_Src + 0xc) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar12 = (longlong *)_Src[1];
    local_48 = *_Src;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_40 = plVar12;
    FUN_140549690(param_1,&local_68,&local_48);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar12 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    local_res8 = local_68 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_68 * 0x68 + *param_1);
      FUN_140538310(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x60);
      iVar16 = *param_2;
      bVar4 = (byte)iVar16 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x68 + *param_1) = iVar16;
      }
      puVar8 = (undefined4 *)((longlong)iVar16 * 0x68 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar16;
      plVar12 = (longlong *)param_1[4];
      *param_2 = local_68;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar10 = (uint *)((longlong)plVar12 +
                        (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar10 = *puVar10 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140531cd2;
    }
  }
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    local_64 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> local_64 == 0; local_64 = local_64 + -1) {
      }
    }
    iVar16 = 0x20;
    if (uVar7 != 0) {
      iVar16 = 0x1f - local_64;
    }
    uVar7 = (uVar15 >> 1) + 7;
    local_60 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> local_60 == 0; local_60 = local_60 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar16 = 1;
    }
    else {
      iVar16 = 1 << (~(byte)((iVar16 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)local_60) & 0x1f);
    }
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar16 <= (int)param_1[9])))) {
    plVar12 = (longlong *)_Src[1];
    plVar3 = (longlong *)*_Src;
    iVar16 = *param_2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_58 = plVar3;
    local_50 = plVar12;
    uVar15 = (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar5 = *plVar3;
    if (uVar15 < 4) {
      pbVar9 = (byte *)(**(code **)(lVar5 + 0x10))(plVar3);
      uVar15 = (uint)*pbVar9;
    }
    else if (uVar15 < 8) {
      puVar10 = (uint *)(**(code **)(lVar5 + 0x10))();
      uVar15 = *puVar10;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(lVar5 + 0x10))(plVar3);
      uVar15 = (int)*puVar11 + (int)((ulonglong)*puVar11 >> 0x20) * 0x17;
    }
    plVar3 = local_50;
    *(uint *)((longlong)_Src + 100) = (int)param_1[9] - 1U & uVar15;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar12 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar12 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 100)) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 100)) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar16;
    FUN_14055d440(param_1);
  }
LAB_140531cd2:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140531d10 FUN_140531d10 body=765 status=ok
// SIG undefined FUN_140531d10(void)

int * FUN_140531d10(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *_Src;
  bool local_res8;
  int local_res10 [2];
  int local_68 [2];
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_68);
  _Src = local_60;
  puVar4 = (undefined8 *)*param_3;
  plVar12 = local_60 + 1;
  *param_2 = local_68[0];
  *local_60 = *puVar4;
  lVar5 = puVar4[1];
  *plVar12 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  local_60[2] = 0;
  local_60[3] = 0;
  puVar4 = local_60 + 4;
  *(undefined4 *)puVar4 = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar6 = (longlong *)*plVar12;
    local_48 = *local_60;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_40 = plVar6;
    FUN_140549810(param_1,local_res10,&local_48);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      _Src = local_60;
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        _Src = local_60;
        if (iVar13 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          _Src = local_60;
        }
      }
    }
    iVar13 = local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res10[0] * 0x28) != 0) {
        FMemory::Free();
      }
      plVar12 = *(longlong **)((longlong)_Dst + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        _Src = local_60;
        iVar13 = local_res10[0];
        if ((int)lVar5 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          _Src = local_60;
          iVar13 = local_res10[0];
          if (iVar3 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            _Src = local_60;
            iVar13 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar13;
      goto LAB_140531fcc;
    }
  }
  cVar7 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    plVar12 = (longlong *)*plVar12;
    plVar6 = (longlong *)*_Src;
    iVar13 = *param_2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      _Src = local_60;
    }
    local_58 = plVar6;
    local_50 = plVar12;
    uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = *plVar6;
    if (uVar8 < 4) {
      pbVar9 = (byte *)(**(code **)(lVar5 + 0x10))(plVar6);
      uVar8 = (uint)*pbVar9;
    }
    else if (uVar8 < 8) {
      puVar10 = (uint *)(**(code **)(lVar5 + 0x10))();
      uVar8 = *puVar10;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(lVar5 + 0x10))(plVar6);
      uVar8 = (int)*puVar11 + (int)((ulonglong)*puVar11 >> 0x20) * 0x17;
    }
    plVar6 = local_50;
    *(uint *)((longlong)_Src + 0x24) = (int)param_1[9] - 1U & uVar8;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar12 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    iVar3 = *(int *)((longlong)_Src + 0x24);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)puVar4 =
         *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4)
    ;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4) = iVar13;
  }
LAB_140531fcc:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140532010 FUN_140532010 body=852 status=ok
// SIG undefined FUN_140532010(void)

int * FUN_140532010(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  undefined8 local_48;
  longlong *local_40;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      FUN_14055f770();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar12 * 0x168 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x168 + *param_1) = 0xffffffff;
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
  _Src = (undefined8 *)((longlong)iVar12 * 0x168 + *param_1);
  FUN_140530dd0(param_3,_Src);
  *(undefined4 *)(_Src + 0x2c) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar11 = (longlong *)_Src[1];
    local_48 = *_Src;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_40 = plVar11;
    FUN_140549500(param_1,local_res10,&local_48);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar11 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    iVar12 = local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x168 + *param_1);
      FUN_140539840((longlong)_Dst + 0x10);
      plVar11 = *(longlong **)((longlong)_Dst + 8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        iVar12 = local_res10[0];
        if ((int)lVar4 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar12 = local_res10[0];
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
            iVar12 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x160);
      FUN_14055eff0(param_1,*param_2,1);
      *param_2 = iVar12;
      goto LAB_140532326;
    }
  }
  cVar5 = FUN_14053fbe0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    plVar11 = (longlong *)_Src[1];
    plVar3 = (longlong *)*_Src;
    iVar12 = *param_2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar4 = *plVar3;
    if (uVar7 < 4) {
      pbVar8 = (byte *)(**(code **)(lVar4 + 0x10))(plVar3);
      uVar7 = (uint)*pbVar8;
    }
    else if (uVar7 < 8) {
      puVar9 = (uint *)(**(code **)(lVar4 + 0x10))();
      uVar7 = *puVar9;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(lVar4 + 0x10))(plVar3);
      uVar7 = (int)*puVar10 + (int)((ulonglong)*puVar10 >> 0x20) * 0x17;
    }
    *(uint *)((longlong)_Src + 0x164) = (int)param_1[9] - 1U & uVar7;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar11 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x2c) =
         *(undefined4 *)
          ((longlong)plVar11 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x164)) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x164)) * 4) =
         iVar12;
  }
LAB_140532326:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140532370 FUN_140532370 body=941 status=ok
// SIG undefined FUN_140532370(void)

int * FUN_140532370(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 *_Src;
  void *_Dst;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  bool local_res8;
  int local_res10 [2];
  undefined8 local_50;
  longlong *local_48;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar9 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar9 = *puVar9 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)iVar7 * 0x28);
  puVar10 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *_Src = *puVar10;
  lVar3 = puVar10[1];
  _Src[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  _Src[2] = *puVar2;
  lVar3 = puVar2[1];
  _Src[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
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
    FUN_140549810(param_1,local_res10,&local_50);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar11 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_48)();
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res10[0];
      goto LAB_1405326e5;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 < 4) {
    iVar7 = 1;
  }
  else {
    uVar6 = (uVar13 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar12 = 0x20;
    if (uVar6 != 0) {
      iVar12 = 0x1f - iVar7;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar7) & 0x1f);
    }
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    plVar11 = (longlong *)_Src[1];
    plVar4 = (longlong *)*_Src;
    iVar7 = *param_2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar13 = (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar3 = *plVar4;
    if (uVar13 < 4) {
      pbVar8 = (byte *)(**(code **)(lVar3 + 0x10))(plVar4);
      uVar13 = (uint)*pbVar8;
    }
    else if (uVar13 < 8) {
      puVar9 = (uint *)(**(code **)(lVar3 + 0x10))();
      uVar13 = *puVar9;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(lVar3 + 0x10))(plVar4);
      uVar13 = (int)*puVar10 + (int)((ulonglong)*puVar10 >> 0x20) * 0x17;
    }
    *(uint *)((longlong)_Src + 0x24) = (int)param_1[9] - 1U & uVar13;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar11 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_14055d6e0(param_1);
  }
LAB_1405326e5:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140532720 FUN_140532720 body=969 status=ok
// SIG undefined FUN_140532720(void)

int * FUN_140532720(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
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
  uint uVar16;
  undefined8 *_Src;
  int iVar17;
  bool local_res8;
  int local_68;
  int local_64;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  uVar15 = 0xffffffff;
  iVar17 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar14 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
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
  puVar12 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)iVar14 * 0x38 + *param_1);
  lVar3 = param_3[1];
  *_Src = *puVar12;
  lVar4 = puVar12[1];
  _Src[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  FUN_1405371a0(_Src + 2,lVar3);
  *(undefined4 *)(_Src + 6) = 0xffffffff;
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
    FUN_140549380(param_1,&local_68,&local_48);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar13 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    local_res8 = local_68 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_68 * 0x38 + *param_1);
      FUN_140538270(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      iVar17 = *param_2;
      bVar6 = (byte)iVar17 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar17;
      }
      puVar9 = (undefined4 *)((longlong)iVar17 * 0x38 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar9[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar17;
      plVar13 = (longlong *)param_1[4];
      *param_2 = local_68;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar13 +
                        (longlong)((int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_140532ab7;
    }
  }
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar16) {
    uVar8 = (uVar16 >> 1) + 8;
    local_64 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> local_64 == 0; local_64 = local_64 + -1) {
      }
    }
    iVar17 = 0x20;
    if (uVar8 != 0) {
      iVar17 = 0x1f - local_64;
    }
    uVar8 = (uVar16 >> 1) + 7;
    local_60 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> local_60 == 0; local_60 = local_60 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar17 = 1;
    }
    else {
      iVar17 = 1 << (~(byte)((iVar17 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)local_60) & 0x1f);
    }
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar17 <= (int)param_1[9])))) {
    plVar13 = (longlong *)_Src[1];
    plVar5 = (longlong *)*_Src;
    iVar17 = *param_2;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_58 = plVar5;
    local_50 = plVar13;
    uVar16 = (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar3 = *plVar5;
    if (uVar16 < 4) {
      pbVar10 = (byte *)(**(code **)(lVar3 + 0x10))(plVar5);
      uVar16 = (uint)*pbVar10;
    }
    else if (uVar16 < 8) {
      puVar11 = (uint *)(**(code **)(lVar3 + 0x10))();
      uVar16 = *puVar11;
    }
    else {
      puVar12 = (undefined8 *)(**(code **)(lVar3 + 0x10))(plVar5);
      uVar16 = (int)*puVar12 + (int)((ulonglong)*puVar12 >> 0x20) * 0x17;
    }
    plVar5 = local_50;
    *(uint *)((longlong)_Src + 0x34) = (int)param_1[9] - 1U & uVar16;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar13 + 1;
      lVar3 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar13 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x34)) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x34)) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 9) = iVar17;
    FUN_14055cef0(param_1);
  }
LAB_140532ab7:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}


