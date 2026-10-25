// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140bca1f0 FUN_140bca1f0 body=1179 status=ok
// SIG undefined FUN_140bca1f0(void)

undefined1 FUN_140bca1f0(longlong *param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  local_c0 = (longlong *)param_2[1];
  local_c8 = (longlong *)*param_2;
  plVar6 = local_c8;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
    plVar6 = (longlong *)*param_2;
  }
  plVar5 = (longlong *)FName::FName(local_res10,L"SPARK",1);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_res20);
  if (*plVar6 == *plVar5) {
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar6 = local_c8;
    if ((lVar7 == 0) || ((*(uint *)(lVar7 + 0x830) >> 2 & 1) == 0)) {
      lVar7 = FUN_140bbb8d0(param_1,&local_c8);
      if (lVar7 != 0) {
        lVar8 = UInputKeySelector::GetPrivateStaticClass();
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
          if ((*(longlong **)(lVar7 + 0x4b8) == (longlong *)0x0) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar7 + 0x4b8) + 0x20))(), cVar3 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            plVar6 = *(longlong **)(lVar7 + 0x4c0);
            plVar5 = *(longlong **)(lVar7 + 0x4b8);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            local_88 = local_c8;
            local_80 = local_c0;
            plVar10 = local_c0;
            goto LAB_140bca3de;
          }
        }
      }
    }
    else {
      plVar5 = (longlong *)FName::FName(local_68,L"SPARK",1);
      plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_60);
      if (*plVar6 == *plVar5) {
        lVar7 = FUN_140b95f90();
      }
      else {
        lVar7 = FUN_140b95e30(param_1 + 0x9e,&local_c8);
      }
      if (lVar7 != 0) {
        if ((*(longlong **)(lVar7 + 8) == (longlong *)0x0) ||
           (cVar3 = (**(code **)(**(longlong **)(lVar7 + 8) + 0x20))(), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar6 = *(longlong **)(lVar7 + 0x10);
          plVar5 = *(longlong **)(lVar7 + 8);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          local_98 = local_c8;
          local_90 = local_c0;
          plVar10 = local_c0;
LAB_140bca3de:
          local_c8 = plVar5;
          local_c0 = plVar6;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar10 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
      }
    }
  }
  if (((param_3 != '\0') ||
      ((lVar7 = (**(code **)(*param_1 + 0x148))(param_1), lVar7 != 0 &&
       ((*(uint *)(lVar7 + 0x830) >> 2 & 1) != 0)))) && (iVar9 = 0, 0 < (int)param_1[0x92])) {
    lVar7 = 0;
    do {
      cVar3 = (**(code **)*local_c8)(local_c8,*(undefined8 *)(lVar7 + param_1[0x91]));
      if (cVar3 != '\0') {
        uVar4 = 1;
        goto LAB_140bca641;
      }
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar9 < (int)param_1[0x92]);
  }
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_140bb7680(param_1,&local_a8);
  puVar12 = local_a8 + (longlong)(int)local_a0 * 2;
  for (puVar11 = local_a8; puVar11 != puVar12; puVar11 = puVar11 + 2) {
    cVar3 = (**(code **)*local_c8)(local_c8,*puVar11);
    if (cVar3 != '\0') {
      uVar4 = 1;
      goto LAB_140bca638;
    }
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_58);
  lVar7 = *plVar6;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_50);
  if (lVar7 == *plVar6) {
    plVar6 = (longlong *)*param_2;
    plVar5 = (longlong *)FName::FName(local_48,L"SPARK",1);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,local_40);
    if (*plVar6 != *plVar5) {
      FUN_140bbc6f0(param_1,&local_b8,param_2);
      plVar6 = plStack_b0;
      if (local_b8 != 0) {
        local_78 = local_b8;
        plStack_70 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
          UNLOCK();
        }
        uVar4 = FUN_140bca1f0(param_1,&local_78,param_3);
        plVar5 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_70 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          plVar6 = plStack_b0;
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar6 = plStack_b0;
            if (iVar9 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
              plVar6 = plStack_b0;
            }
          }
        }
        plVar5 = plStack_b0;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar6 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
            }
          }
        }
        goto LAB_140bca638;
      }
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_b0 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_140bca638:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_a8);
LAB_140bca641:
  plVar6 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_c0 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 140bca690 FUN_140bca690 body=46 status=ok
// SIG undefined FUN_140bca690(void)

undefined1 FUN_140bca690(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140b825a0();
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x6c1) == '\0')) && (*(char *)(lVar1 + 0x6c2) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140bca6c0 FUN_140bca6c0 body=8 status=ok
// SIG undefined FUN_140bca6c0(void)

undefined1 FUN_140bca6c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x588);
}



// FUNCTION 140bca6d0 FUN_140bca6d0 body=254 status=ok
// SIG undefined FUN_140bca6d0(void)

bool FUN_140bca6d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686a8c8) {
    _Init_thread_header(&DAT_14686a8c8);
    if (DAT_14686a8c8 == -1) {
      FName::FName(&DAT_14686a8c0,L"Loader",1);
      _Init_thread_footer(&DAT_14686a8c8);
    }
  }
  if ((char)param_1[0xb1] == '\0') {
    cVar1 = FUN_1411ea6c0(param_1 + 0xf4);
    if (cVar1 == '\0') {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x830) >> 2 & 1) == 0)) {
        lVar2 = UGameInstance::GetGameViewportClient(param_1);
        if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x7c) & 4) == 0)) {
          if (param_2 != 0) {
            return *(longlong *)(param_2 + 0x18) == DAT_14686a8c0;
          }
          return false;
        }
      }
    }
  }
  return true;
}



// FUNCTION 140bca7d0 FUN_140bca7d0 body=182 status=ok
// SIG undefined FUN_140bca7d0(void)

ulonglong FUN_140bca7d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong in_RAX;
  longlong lVar7;
  
  if (*param_2 == 0) {
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar6 = (int)lVar7 - 1;
      in_RAX = (ulonglong)uVar6;
      if (uVar6 == 0) {
        in_RAX = (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          in_RAX = (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return in_RAX & 0xffffffffffffff00;
  }
  lVar7 = FUN_14244bf10();
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
  return (ulonglong)(lVar7 != 0);
}



// FUNCTION 140bca890 FUN_140bca890 body=11 status=ok
// SIG undefined FUN_140bca890(void)

bool FUN_140bca890(longlong param_1)

{
  return *(int *)(param_1 + 0x1054) != 0;
}



// FUNCTION 140bca8a0 FUN_140bca8a0 body=39 status=ok
// SIG undefined FUN_140bca8a0(void)

uint FUN_140bca8a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x830) >> 2 & 0xffffff01;
  }
  return 0;
}



// FUNCTION 140bca8d0 FUN_140bca8d0 body=57 status=ok
// SIG undefined FUN_140bca8d0(void)

undefined8 FUN_140bca8d0(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x430);
  if (uVar2 == 0) {
    if (*(char *)(param_1 + 0xd73) == '\0') {
      return 0;
    }
    if (param_2 != (ushort *)0x0) {
      uVar2 = (ulonglong)*(ushort *)(param_1 + 0xd71);
      *param_2 = *(ushort *)(param_1 + 0xd71);
    }
  }
  else if (param_2 != (ushort *)0x0) {
    uVar1 = *(ushort *)(uVar2 + 8);
    *param_2 = uVar1;
    return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 140bca910 FUN_140bca910 body=204 status=ok
// SIG undefined FUN_140bca910(void)

undefined8 FUN_140bca910(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *local_18;
  longlong *local_10;
  
  uVar7 = 0;
  if (*param_2 == 0) {
    return 0;
  }
  FUN_140bba620(param_1,&local_18,0);
  if (local_18 != (undefined8 *)0x0) {
    cVar6 = (**(code **)*local_18)(local_18,*param_2);
    if (cVar6 != '\0') {
      uVar7 = 1;
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
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 140bca9e0 FUN_140bca9e0 body=8 status=ok
// SIG undefined FUN_140bca9e0(void)

undefined1 FUN_140bca9e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x13a2);
}



// FUNCTION 140bca9f0 FUN_140bca9f0 body=24 status=ok
// SIG undefined FUN_140bca9f0(void)

undefined1 FUN_140bca9f0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x13a1) == '\0') && (*(int *)(param_1 + 0x13b8) < 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140bcaa10 FUN_140bcaa10 body=388 status=ok
// SIG undefined FUN_140bcaa10(void)

undefined1 FUN_140bcaa10(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if (((lVar8 != 0) && ((*(uint *)(lVar8 + 0x830) >> 2 & 1) != 0)) && ((char)param_1[0x175] == '\0')
     ) {
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    return 1;
  }
  lVar8 = UGameInstance::GetFirstGamePlayer(param_1);
  if (lVar8 != 0) {
    lVar8 = FUN_142547b50(lVar8,local_38);
    local_38[0] = &PTR_FUN_143f740c8;
    if (local_20 != 0) {
      FMemory::Free();
    }
    local_38[0] = &PTR_FUN_143f73d18;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    puVar5 = *(undefined8 **)(lVar8 + 8);
    if (puVar5 != (undefined8 *)0x0) {
      uVar7 = (**(code **)*puVar5)(puVar5,*param_2);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return uVar7;
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  return 0;
}



// FUNCTION 140bcaba0 FUN_140bcaba0 body=211 status=ok
// SIG undefined FUN_140bcaba0(void)

bool FUN_140bcaba0(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  char local_res8 [8];
  longlong *local_28;
  longlong *local_20;
  
  bVar6 = false;
  FUN_140dbc5d0(param_1 + 0x5f0,local_res8);
  if (local_res8[0] == '\0') {
    return true;
  }
  FUN_1404cf890(&local_28,0);
  if (local_28 != (longlong *)0x0) {
    if (local_res8[0] == '\x02') {
      bVar6 = *param_3 == 0;
    }
    else if (local_res8[0] == '\x01') {
      iVar5 = (**(code **)(*local_28 + 0x78))(local_28,param_2);
      if (iVar5 != 0) {
        bVar6 = true;
      }
    }
  }
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return bVar6;
}



// FUNCTION 140bcac80 FUN_140bcac80 body=35 status=ok
// SIG undefined FUN_140bcac80(void)

bool FUN_140bcac80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_res8);
  return param_2 == *plVar1;
}



// FUNCTION 140bcacb0 FUN_140bcacb0 body=369 status=ok
// SIG undefined FUN_140bcacb0(void)

undefined8 FUN_140bcacb0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  if (*param_2 != 0) {
    plVar5 = (longlong *)*param_3;
    plVar4 = (longlong *)FName::FName(local_res10,L"SPARK",1);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,local_res20);
    if (*plVar5 == *plVar4) {
      local_38 = *param_2;
      local_30 = (longlong *)param_2[1];
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      uVar6 = FUN_140bb74b0(param_1);
      FUN_140d7da70(uVar6,&local_28,&local_38,param_3,0);
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if ((local_28 != (longlong *)0x0) && (iVar3 = (**(code **)(*local_28 + 0x30))(), iVar3 == 1))
      {
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_20 + 1;
          lVar2 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
        return 1;
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
    }
  }
  return 0;
}



// FUNCTION 140bcae30 FUN_140bcae30 body=12 status=ok
// SIG undefined FUN_140bcae30(void)

bool FUN_140bcae30(longlong param_1)

{
  return *(longlong *)(param_1 + 0x460) != 0;
}



// FUNCTION 140bcae40 FUN_140bcae40 body=51 status=ok
// SIG undefined FUN_140bcae40(void)

undefined1 FUN_140bcae40(longlong param_1)

{
  char cVar1;
  
  cVar1 = FText::IsEmpty(param_1 + 8);
  if (cVar1 == '\0') {
    cVar1 = FText::IsEmpty(param_1 + 0x20);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140bcae80 FUN_140bcae80 body=47 status=ok
// SIG undefined FUN_140bcae80(void)

undefined8 FUN_140bcae80(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x20))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140bcaeb0 FUN_140bcaeb0 body=1989 status=ok
// SIG undefined FUN_140bcaeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bcaeb0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  ulonglong local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  longlong local_158;
  undefined1 local_150 [8];
  undefined8 local_148;
  undefined1 local_138 [8];
  longlong *plStack_130;
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [8];
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108 [8];
  undefined8 local_100;
  longlong *plStack_f8;
  undefined1 local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined **local_d0 [2];
  longlong *local_c0;
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  plVar13 = param_1 + 0x1de;
  local_1d8 = local_1d8 & 0xffffffff00000000;
  local_198 = (longlong *)0x0;
  if (plVar13 != &local_1a0) {
    *plVar13 = 0;
    local_1a0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1df,&local_198);
    plVar3 = local_198;
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_198 + 1;
      lVar14 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
  }
  plVar3 = param_1 + 0x1e0;
  local_188[0] = (longlong *)0x0;
  if (plVar3 != &local_190) {
    *plVar3 = 0;
    local_190 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1e1,local_188);
    plVar12 = local_188[0];
    if (local_188[0] != (longlong *)0x0) {
      LOCK();
      plVar2 = local_188[0] + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_188[0])(local_188[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_188[0] + 8))(local_188[0],1);
        }
      }
    }
  }
  cVar9 = FUN_140ba6b70(param_1,param_2,param_3);
  if (cVar9 == '\0') {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_98,L"This player is no longer joinable.",L"OakGameInstance",
                        L"PlayerNotJoinable");
    FUN_140b999a0(local_d0,uVar11);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_90 + 1;
      lVar14 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_168,0);
    FWeakObjectPtr::operator=(local_160,0);
    FWeakObjectPtr::operator=(local_150,0);
    local_210 = CONCAT71(local_210._1_7_,2);
    local_148 = 0;
    local_218 = local_168;
    FUN_140c23780(2,local_d0,local_150,local_160);
    local_d0[0] = &PTR_FUN_1443170a0;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_a8 + 1;
      lVar14 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    goto LAB_140bcb61d;
  }
  local_1c8 = (longlong *)param_2[1];
  local_1d0 = *param_2;
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
    UNLOCK();
  }
  if (plVar13 != &local_1d0) {
    *plVar13 = local_1d0;
    local_1d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1df,&local_1c8);
  }
  plVar13 = local_1c8;
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1c8 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1c8)(local_1c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_1c8 + 8))(local_1c8,1);
      }
    }
  }
  local_1b8 = (longlong *)param_3[1];
  local_1c0 = *param_3;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
    UNLOCK();
  }
  if (plVar3 != &local_1c0) {
    *plVar3 = local_1c0;
    local_1c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1e1,&local_1b8);
  }
  plVar13 = local_1b8;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1b8 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8,1);
      }
    }
  }
  plVar13 = (longlong *)*param_3;
  plVar12 = (longlong *)FName::FName(local_e8,L"SPARK",1);
  plVar13 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13,local_e0);
  if (*plVar13 != *plVar12) {
    FUN_140bbc6f0(param_1,&local_1e8,param_3);
    uVar8 = uStack_1dc;
    uVar7 = uStack_1e0;
    if (CONCAT44(uStack_1e4,local_1e8) == 0) {
      uVar19 = (uint)local_1d8;
LAB_140bcb26c:
      bVar4 = false;
    }
    else {
      plStack_130 = (longlong *)CONCAT44(uStack_1dc,uStack_1e0);
      uVar19 = 1;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
        UNLOCK();
      }
      cVar9 = FUN_140ba6b70(param_1,param_2,local_138);
      if (cVar9 == '\0') goto LAB_140bcb26c;
      bVar4 = true;
    }
    lVar14 = CONCAT44(uVar8,uVar7);
    if (((uVar19 & 1) != 0) && (plStack_130 != (longlong *)0x0)) {
      LOCK();
      plVar13 = plStack_130 + 1;
      lVar14 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar1 = (int *)((longlong)plStack_130 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plStack_130 + 8))(plStack_130,1);
        }
      }
      lVar14 = CONCAT44(uStack_1dc,uStack_1e0);
    }
    if (bVar4) {
      local_178 = CONCAT44(uStack_1e4,local_1e8);
      uStack_170 = (longlong *)CONCAT44(uStack_1dc,uStack_1e0);
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
        lVar14 = CONCAT44(uStack_1dc,uStack_1e0);
      }
      if (&local_178 != plVar3) {
        local_178 = *plVar3;
        uStack_170 = (longlong *)param_1[0x1e1];
        *(undefined4 *)plVar3 = local_1e8;
        *(undefined4 *)((longlong)param_1 + 0xf04) = uStack_1e4;
        *(undefined4 *)(param_1 + 0x1e1) = uStack_1e0;
        *(undefined4 *)((longlong)param_1 + 0xf0c) = uStack_1dc;
      }
      plVar13 = uStack_170;
      if (uStack_170 != (longlong *)0x0) {
        LOCK();
        plVar3 = uStack_170 + 1;
        lVar14 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*uStack_170)(uStack_170);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*uStack_170 + 8))(uStack_170,1);
          }
        }
        lVar14 = CONCAT44(uStack_1dc,uStack_1e0);
      }
    }
    if (lVar14 != 0) {
      LOCK();
      piVar1 = (int *)(lVar14 + 8);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        puVar18 = (undefined8 *)CONCAT44(uStack_1dc,uStack_1e0);
        (**(code **)*puVar18)(puVar18);
        LOCK();
        piVar1 = (int *)((longlong)puVar18 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*(longlong *)CONCAT44(uStack_1dc,uStack_1e0) + 8))
                    ((longlong *)CONCAT44(uStack_1dc,uStack_1e0),1);
        }
      }
    }
  }
  lVar14 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar14 == 0) {
LAB_140bcb396:
    lVar14 = FUN_140bb6170(param_1);
    if ((lVar14 == 0) && (cVar9 = FUN_140bc2c90(param_1), cVar9 != '\0')) {
      local_128 = *param_2;
      local_120 = param_2[1];
      if (local_120 != 0) {
        LOCK();
        *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
        UNLOCK();
      }
      lVar14 = FUN_14244c070(param_1,&local_128);
      if ((lVar14 != 0) && (lVar14 = *(longlong *)(lVar14 + 0x30), lVar14 != 0)) {
        lVar15 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FWeakObjectPtr::operator=(local_1b0,0);
          local_1a8 = 0;
          pwVar16 = _guard_xfg_dispatch_icall_nop
                              (L"&ThisClass::OnConfirmKickNetworkedPlayersForJoin",L"::");
          pwVar6 = (wchar_t *)0x0;
          while (pwVar5 = pwVar16, pwVar5 != (wchar_t *)0x0) {
            pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
            pwVar6 = pwVar5;
          }
          FName::FName(&local_158,pwVar6 + 2,1);
          FWeakObjectPtr::operator=(local_1b0,param_1);
          local_1a8 = local_158;
          local_1d8 = 0;
          if ((local_158 != 0) && (lVar15 = FWeakObjectPtr::Get(local_1b0), lVar15 != 0)) {
            UObject::FindFunction(lVar15,local_1a8);
          }
          uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_68,
                              L"Joining this player will disconnect all group members. Would you like to continue?"
                              ,L"OakGameInstance",L"KickNetworkedPlayersMessage");
          uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_80,L"Kick Networked Players?",L"OakGameInstance",
                              L"KickNetworkedPlayersHeader");
          local_1f8 = 0;
          local_200 = 0;
          local_208 = 0;
          local_210 = 0;
          local_218 = (undefined1 *)((ulonglong)local_218 & 0xffffffffffffff00);
          lVar14 = FUN_1410f47a0(lVar14,uVar17,uVar11,local_1b0);
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_78 + 1;
            lVar15 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_78)(local_78);
              LOCK();
              piVar1 = (int *)((longlong)local_78 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_78 + 8))(local_78,1);
              }
            }
          }
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_60 + 1;
            lVar15 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)local_60 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
          if (lVar14 != 0) {
            return;
          }
        }
      }
    }
  }
  else {
    uVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar10 = FUN_1428cf800(uVar11);
    if (iVar10 != 3) goto LAB_140bcb396;
  }
  FName::FName(local_118,&DAT_143f3eda8,1);
  local_110 = 0xffffffff;
  local_10c = 0;
  FName::FName(local_108,&DAT_143f3eda8,1);
  local_f0 = 0;
  local_100 = 0;
  plStack_f8 = (longlong *)0x0;
  puVar18 = (undefined8 *)FName::FName(local_d8,&DAT_1442e984c,1);
  FUN_140bd13b0(param_1,0,*puVar18,local_118);
  local_c0 = plStack_f8;
LAB_140bcb61d:
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_c0 + 1;
    lVar14 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 140bcb680 FUN_140bcb680 body=288 status=ok
// SIG undefined FUN_140bcb680(void)

void FUN_140bcb680(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_18;
  int local_10;
  
  *(undefined1 *)(param_1 + 0xe98) = 0;
  FUN_140bb86f0(param_1,&local_18);
  if (0 < local_10) {
    FString::operator=(param_1 + 0xe38,param_2);
    puVar2 = (undefined8 *)operator_new(0x88);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      *puVar2 = &PTR_FUN_144317a50;
      puVar2[0xd] = 0;
      *(int *)(puVar2 + 0xe) = local_10;
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 0xd,local_10,0);
      puVar3 = (undefined8 *)puVar2[0xd];
      do {
        *puVar3 = *local_18;
        lVar1 = local_18[1];
        puVar3[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        puVar3 = puVar3 + 2;
        local_18 = local_18 + 2;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      FString::FString(puVar2 + 0xf,param_2);
    }
    FUN_140be4f80(param_1,puVar2);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  return;
}



// FUNCTION 140bcb7a0 FUN_140bcb7a0 body=1457 status=ok
// SIG undefined FUN_140bcb7a0(void)

undefined8 FUN_140bcb7a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined **local_98 [2];
  longlong *local_88;
  longlong local_80;
  undefined **local_70 [2];
  longlong *local_60;
  longlong local_58;
  longlong *local_48;
  
  lVar7 = FUN_142547b50(param_2,local_98);
  lVar10 = *(longlong *)(lVar7 + 8);
  plVar2 = *(longlong **)(lVar7 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_98[0] = &PTR_FUN_143f740c8;
  if (local_80 != 0) {
    FMemory::Free();
  }
  local_98[0] = &PTR_FUN_143f73d18;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_88 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if (lVar10 == 0) {
    *(undefined1 *)(param_1 + 0x11c0) = 0;
    uVar14 = 0;
    goto LAB_140bcbce9;
  }
  uVar15 = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_f8 = 0;
  local_f0 = 0;
  uVar12 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(param_1 + 0x40) < puVar9) {
    uVar12 = uVar15;
  }
  if (uVar12 != 0) {
    do {
      lVar7 = FUN_142547b50(*puVar9,local_70);
      plVar3 = *(longlong **)(lVar7 + 0x10);
      lVar7 = *(longlong *)(lVar7 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_70[0] = &PTR_FUN_143f740c8;
      if (local_58 != 0) {
        FMemory::Free();
      }
      plVar8 = local_60;
      local_70[0] = &PTR_FUN_143f73d18;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_60 + 1;
        lVar13 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_60)(local_60);
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
      uVar5 = local_f0;
      if (lVar7 != 0) {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        lVar13 = (longlong)(int)local_f0;
        iVar6 = (int)local_f0 + 1;
        local_f0 = CONCAT44(local_f0._4_4_,iVar6);
        if (local_f0._4_4_ < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_f8,uVar5 & 0xffffffff);
        }
        plVar8 = (longlong *)(lVar13 * 0x10 + local_f8);
        *plVar8 = lVar7;
        plVar8[1] = (longlong)plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar3 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        plVar8 = *(longlong **)(param_3 + 0x10);
        uVar14 = *(undefined8 *)(param_3 + 8);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        FUN_140ba9f70(param_1,uVar14,lVar10);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar8 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar8)(plVar8);
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
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar2 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
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
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      puVar9 = puVar9 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar12);
  }
  lVar10 = 0;
  lVar7 = FUN_14244f490(param_1,0);
  if (lVar7 == 0) {
LAB_140bcbafd:
    lVar7 = lVar10;
  }
  else {
    lVar13 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
        != lVar13 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140bcbafd;
  }
  if (((*(longlong *)(param_1 + 0xfd0) == 0) && (lVar7 != 0)) &&
     (*(longlong *)(lVar7 + 0x1428) != 0)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_b0,L"Joining Group",L"OakGameInstance",L"JoiningGameTitle");
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_c8,L"Please wait while you are connected...",L"OakGameInstance",
               L"JoiningGameDescription");
    puVar9 = (undefined8 *)
             FUN_1411d93c0(*(undefined8 *)(lVar7 + 0x1428),local_d8,local_b0,local_c8,0);
    *(undefined8 *)(param_1 + 0xfd0) = *puVar9;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_c0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_a8 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
  }
  uStack_e0 = 0;
  local_e8 = FUN_140bd4410;
  plVar3 = (longlong *)(param_1 + 0x608);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_48 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_1442cc120;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_e8;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_e8._4_4_;
    *(undefined4 *)(plVar8 + 3) = uStack_e0;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_dc;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar10;
    *plVar8 = (longlong)&PTR_FUN_1442cc168;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,1);
    plVar11 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_d0);
    iVar6 = *(int *)(param_1 + 0x610);
    lVar10 = *plVar11;
    *(int *)(param_1 + 0x610) = iVar6 + 1;
    if (*(int *)(param_1 + 0x614) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar6);
    }
    puVar9 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar3);
    *puVar9 = plVar8;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  *(longlong *)(param_1 + 0x218) = lVar10;
  FUN_140dc1e10(param_1 + 0x5f0,&local_f8,param_3);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_f8);
  uVar14 = 1;
LAB_140bcbce9:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return uVar14;
}



// FUNCTION 140bcbd60 FUN_140bcbd60 body=3033 status=ok
// SIG undefined FUN_140bcbd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bcbd60(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 local_394;
  longlong local_390;
  longlong local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  undefined **local_330;
  undefined8 local_328;
  longlong *local_320;
  longlong local_318;
  undefined8 local_310;
  undefined1 local_308 [8];
  longlong local_300;
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [8];
  undefined4 local_2e8;
  undefined4 local_2e4;
  longlong local_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  longlong *plStack_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined4 *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  undefined4 *local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  undefined **local_190;
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [24];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  local_2d8 = &PTR_FUN_143f740c8;
  local_2d0 = 0;
  plStack_2c8 = (longlong *)0x0;
  local_2c0 = 0;
  local_2b8 = 0;
  FUN_1404c0940(param_1 + 0x165,&local_2d8);
  if (local_2c0 != 0) {
    FMemory::Free();
  }
  plVar11 = plStack_2c8;
  if (plStack_2c8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_2c8 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_2c8)(plStack_2c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_2c8 + 8))(plStack_2c8,1);
      }
    }
  }
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar7 != 0) {
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar6 = FUN_1428cf800(uVar8);
    if (iVar6 == 3) {
      return;
    }
  }
  lVar7 = FUN_140bb6170(param_1);
  if (lVar7 == 0) {
    local_280 = *param_2;
    local_278 = param_2[1];
    if (local_278 != 0) {
      LOCK();
      *(int *)(local_278 + 8) = *(int *)(local_278 + 8) + 1;
      UNLOCK();
    }
    lVar7 = FUN_14244c070(param_1,&local_280);
    if (((lVar7 == 0) && (cVar5 = FUN_140bca1f0(param_1,param_2,0), cVar5 != '\0')) &&
       (lVar7 = FUN_14244f490(param_1,0), lVar7 != 0)) {
      lVar9 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_328 = *param_2;
        local_320 = (longlong *)param_2[1];
        if (local_320 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_320 + 1) = (int)local_320[1] + 1;
          UNLOCK();
        }
        local_330 = &PTR_FUN_143f740c8;
        local_318 = 0;
        local_310 = 0;
        FUN_1404c0940(param_1 + 0x165,&local_330);
        if (local_318 != 0) {
          FMemory::Free();
        }
        plVar11 = local_320;
        if (local_320 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_320 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_320)(local_320);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_320 + 8))(local_320,1);
            }
          }
        }
        local_388 = 0;
        local_380 = 0;
        FUN_140bb5a10(param_1,param_2,&local_388);
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_1c8,L"Kick Player?",L"OakGameInstance",L"OnConfirmKickPlayerHeader");
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_1b0,L"Are you sure you want to kick {Player1}?",L"OakGameInstance",
                   L"OnConfirmKickPlayerBody");
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_1e8,
                   L"Are you sure you want to kick {Player1}? The following players will also be removed:\n{Player2}"
                   ,L"OakGameInstance",L"OnConfirmKickMultipleBody");
        plVar11 = *(longlong **)(local_388 + 0x10);
        local_3a8 = *(longlong **)(local_388 + 8);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        uStack_3a0 = plVar11;
        if (local_3a8 != (longlong *)0x0) {
          plVar10 = (longlong *)(**(code **)(*local_3a8 + 8))(local_3a8,local_218);
          lVar9 = *plVar10;
          plVar10 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_198);
          if (lVar9 != *plVar10) {
            local_268 = (undefined4)local_3a8;
            uStack_264 = local_3a8._4_4_;
            uStack_260 = (undefined4)uStack_3a0;
            uStack_25c = uStack_3a0._4_4_;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
            }
            plVar11 = (longlong *)FUN_140bbc950(param_1,local_210,&local_268);
            if (&local_3a8 != plVar11) {
              local_3a8 = (longlong *)*plVar11;
              *plVar11 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_3a0,plVar11 + 1);
            }
            if (local_208 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_208 + 1;
              lVar9 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_208)(local_208);
                LOCK();
                piVar1 = (int *)((longlong)local_208 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*local_208 + 8))(local_208,1);
                }
              }
            }
            plVar11 = (longlong *)CONCAT44(uStack_25c,uStack_260);
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
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
        }
        local_340 = 0;
        local_338 = 0;
        if (local_3a8 != (longlong *)0x0) {
          local_258 = (undefined4)local_3a8;
          uStack_254 = local_3a8._4_4_;
          uStack_250 = (undefined4)uStack_3a0;
          uStack_24c = uStack_3a0._4_4_;
          if (uStack_3a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_3a0 + 1) = (int)uStack_3a0[1] + 1;
            UNLOCK();
          }
          local_3c8 = &local_340;
          FUN_140d79f00(param_1[0x8f],&local_258,0,1);
          plVar11 = (longlong *)CONCAT44(uStack_24c,uStack_250);
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
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
        }
        FText::FText(local_2b0,local_1b0);
        local_f8 = 0;
        local_f0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xffffffff;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uVar8 = FText::FromString(local_158,&local_340);
        local_a8[0] = 4;
        FText::FText(local_98,uVar8);
        local_80 = '\x01';
        local_378 = 0;
        local_370 = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,0);
        FGenericPlatformString::Memcpy(local_378,L"Player1",0x10);
        local_248 = &local_378;
        local_240 = local_a8;
        FUN_1407484b0(&local_f8,local_2f0,&local_248,0);
        if (local_378 != 0) {
          FMemory::Free();
        }
        if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_90 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_150 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar1 = (int *)((longlong)local_150 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
        if (1 < (int)local_380) {
          FText::operator=(local_2b0,local_1e8);
          plVar11 = *(longlong **)(local_388 + 0x38);
          local_3b8 = *(longlong **)(local_388 + 0x30);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          uStack_3b0 = plVar11;
          if (local_3b8 != (longlong *)0x0) {
            plVar10 = (longlong *)(**(code **)(*local_3b8 + 8))(local_3b8,local_1d0);
            lVar9 = *plVar10;
            plVar10 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_1f0);
            if (lVar9 != *plVar10) {
              local_238 = (undefined4)local_3b8;
              uStack_234 = local_3b8._4_4_;
              uStack_230 = (undefined4)uStack_3b0;
              uStack_22c = uStack_3b0._4_4_;
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
              }
              plVar11 = (longlong *)FUN_140bbc950(param_1,local_200,&local_238);
              if (&local_3b8 != plVar11) {
                local_3b8 = (longlong *)*plVar11;
                *plVar11 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_3b0,plVar11 + 1);
              }
              if (local_1f8 != (longlong *)0x0) {
                LOCK();
                plVar11 = local_1f8 + 1;
                lVar9 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_1f8)(local_1f8);
                  LOCK();
                  piVar1 = (int *)((longlong)local_1f8 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*local_1f8 + 8))(local_1f8,1);
                  }
                }
              }
              plVar11 = (longlong *)CONCAT44(uStack_22c,uStack_230);
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
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
            }
          }
          local_350 = 0;
          local_348 = 0;
          if (local_3b8 != (longlong *)0x0) {
            local_228 = (undefined4)local_3b8;
            uStack_224 = local_3b8._4_4_;
            uStack_220 = (undefined4)uStack_3b0;
            uStack_21c = uStack_3b0._4_4_;
            if (uStack_3b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_3b0 + 1) = (int)uStack_3b0[1] + 1;
              UNLOCK();
            }
            local_3c8 = &local_350;
            FUN_140d79f00(param_1[0x8f],&local_228,0,1);
            plVar11 = (longlong *)CONCAT44(uStack_21c,uStack_220);
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
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
          uVar8 = FText::FromString(local_140,&local_350);
          local_78[0] = 4;
          FText::FText(local_68,uVar8);
          local_50 = '\x01';
          local_368 = 0;
          local_360 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
          FGenericPlatformString::Memcpy(local_368,L"Player2",0x10);
          local_290 = &local_368;
          local_288 = local_78;
          FUN_1407484b0(&local_f8,local_308,&local_290,0);
          if (local_368 != 0) {
            FMemory::Free();
          }
          if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
            LOCK();
            plVar11 = local_60 + 1;
            lVar9 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)local_60 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
          if (local_138 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_138 + 1;
            lVar9 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_138)(local_138);
              LOCK();
              piVar1 = (int *)((longlong)local_138 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_138 + 8))(local_138,1);
              }
            }
          }
          if (local_350 != 0) {
            FMemory::Free();
          }
          plVar11 = uStack_3b0;
          if (uStack_3b0 != (longlong *)0x0) {
            LOCK();
            plVar10 = uStack_3b0 + 1;
            lVar9 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*uStack_3b0)(uStack_3b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*uStack_3b0 + 8))(uStack_3b0,1);
              }
            }
          }
        }
        uVar8 = FTextFormat::FTextFormat(local_110,local_2b0);
        uVar8 = FText::Format(local_128,uVar8,&local_f8);
        FText::operator=(local_2b0,uVar8);
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_120 + 1;
          lVar9 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar1 = (int *)((longlong)local_120 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_120 + 8))(local_120,1);
            }
          }
        }
        FWeakObjectPtr::operator=(&local_398,0);
        local_390 = 0;
        pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnConfirmKickPlayer",L"::");
        pwVar4 = (wchar_t *)0x0;
        while (pwVar3 = pwVar12, pwVar3 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_300,pwVar4 + 2,1);
        FWeakObjectPtr::operator=(&local_398,param_1);
        local_390 = local_300;
        local_358 = 0;
        if ((local_300 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_398), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_390);
        }
        local_190 = &PTR_FUN_1443170a0;
        FText::FText(local_188,local_1c8);
        FText::FText(local_170,local_2b0);
        FWeakObjectPtr::operator=(local_2f8,0);
        FWeakObjectPtr::operator=(local_298,lVar7);
        local_2e8 = local_398;
        local_2e4 = local_394;
        local_2e0 = local_390;
        local_3c8 = (longlong *)local_2f8;
        local_3c0 = 0;
        FUN_140c23780(3,&local_190,&local_2e8,local_298);
        FUN_140b9cdd0(&local_190);
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_f8);
        if (local_2a8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_2a8 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_2a8)(local_2a8);
            LOCK();
            piVar1 = (int *)((longlong)local_2a8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_2a8 + 8))(local_2a8,1);
            }
          }
        }
        if (local_340 != 0) {
          FMemory::Free();
        }
        plVar11 = uStack_3a0;
        if (uStack_3a0 != (longlong *)0x0) {
          LOCK();
          plVar10 = uStack_3a0 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*uStack_3a0)(uStack_3a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*uStack_3a0 + 8))(uStack_3a0,1);
            }
          }
        }
        if (local_1e0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_1e0 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1e0)(local_1e0);
            LOCK();
            piVar1 = (int *)((longlong)local_1e0 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1e0 + 8))(local_1e0,1);
            }
          }
        }
        if (local_1a8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_1a8 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1a8)(local_1a8);
            LOCK();
            piVar1 = (int *)((longlong)local_1a8 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1a8 + 8))(local_1a8,1);
            }
          }
        }
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_1c0 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_1c0)(local_1c0);
            LOCK();
            piVar1 = (int *)((longlong)local_1c0 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_1c0 + 8))(local_1c0,1);
            }
          }
        }
        FUN_1404bebc0(&local_388);
      }
    }
  }
  return;
}



// FUNCTION 140bcc940 FUN_140bcc940 body=357 status=ok
// SIG undefined FUN_140bcc940(void)

void FUN_140bcc940(longlong *param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_18;
  int local_10;
  
  FUN_140c27a20(1);
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar4 == 0) || ((*(uint *)(lVar4 + 0x830) >> 2 & 1) == 0)) {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar4 != 0) {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      iVar3 = FUN_1428cf800(uVar5);
      if (iVar3 == 3) goto LAB_140bcc98e;
    }
    lVar4 = FUN_140bb6170(param_1);
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
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
          plVar6 = (longlong *)FWeakObjectPtr::Get();
          if (plVar6 != (longlong *)0x0) {
            lVar4 = FUN_14145f370();
            if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              if ((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) == 0) {
LAB_140bcca84:
                bVar1 = false;
              }
              else {
                cVar2 = (**(code **)(*plVar6 + 0x768))();
                if (cVar2 == '\0') goto LAB_140bcca84;
                bVar1 = true;
              }
              if (!bVar1) {
                FUN_14145e000(plVar6,param_2);
              }
            }
          }
          local_10 = local_10 + 1;
        }
      }
    }
  }
  else {
    lVar4 = FUN_140bb7870(param_1);
    if (lVar4 != 0) {
      FUN_1404d5f40(lVar4,param_2);
    }
  }
LAB_140bcc98e:
  FUN_140c27a20(0);
  return;
}



// FUNCTION 140bccab0 FUN_140bccab0 body=1114 status=ok
// SIG undefined FUN_140bccab0(void)

void FUN_140bccab0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  wchar_t **ppwVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  wchar_t *local_e8;
  uint local_e0;
  int local_dc;
  longlong local_d8 [2];
  undefined2 *local_c8;
  int local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  longlong local_a0 [2];
  undefined **local_90;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar5 = FUN_14244f490(param_1,0);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar6 = FUN_140cfbfb0(lVar5), lVar6 != 0)) &&
       (cVar4 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar6), cVar4 == '\0')) {
      if (DAT_146af4bf0 != (longlong *)0x0) {
        (**(code **)(*DAT_146af4bf0 + 0x18))(DAT_146af4bf0,lVar6);
      }
      FUN_142d87cb0(lVar6);
      if ((*(char *)(lVar5 + 0x128) == '\x03') && (lVar5 = FUN_140b825a0(param_1), lVar5 != 0)) {
        FUN_140ccce90(lVar5,*(int *)(lVar6 + 0x140) + 1);
        *(undefined4 *)(lVar5 + 0x74c) = *(undefined4 *)(lVar6 + 0x144);
      }
      puVar7 = (undefined8 *)FUN_140d3b2a0(lVar6);
      pwVar11 = (wchar_t *)0x0;
      local_e8 = (wchar_t *)0x0;
      local_e0 = *(uint *)(puVar7 + 1);
      lVar5 = (longlong)(int)local_e0;
      _Src = (void *)*puVar7;
      if (local_e0 == 0) {
        local_dc = 0;
        pwVar13 = pwVar11;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
        pwVar13 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar5 * 2);
      }
      iVar14 = local_dc;
      if ((int)local_e0 < 2) {
        uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar5 = FMistWorldUtils::GetDebugEntityDrawSystem(uVar8);
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) {
          ppwVar9 = (wchar_t **)
                    UObjectBaseUtility::GetPathName(*(longlong *)(lVar5 + 0x28),local_a0,0);
          if (&local_e8 != ppwVar9) {
            if (pwVar13 != (wchar_t *)0x0) {
              FMemory::Free(pwVar13);
            }
            pwVar13 = *ppwVar9;
            *ppwVar9 = (wchar_t *)0x0;
            local_e0 = *(uint *)(ppwVar9 + 1);
            iVar14 = *(int *)((longlong)ppwVar9 + 0xc);
            ppwVar9[1] = (wchar_t *)0x0;
            local_e8 = pwVar13;
            local_dc = iVar14;
          }
          if (local_a0[0] != 0) {
            FMemory::Free();
          }
        }
      }
      if ((param_2 != '\0') &&
         (pwVar13 != L"/Game/GameData/FastTravel/FTS_Recruitment.FTS_Recruitment")) {
        local_e0 = 0;
        if (iVar14 != 0x3a) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8,0x3a);
          pwVar11 = (wchar_t *)(ulonglong)local_e0;
          pwVar13 = local_e8;
          iVar14 = local_dc;
        }
        local_e0 = (int)pwVar11 + 0x3a;
        if (iVar14 < (int)local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8);
          pwVar13 = local_e8;
        }
        builtin_wcsncpy(pwVar13,L"/Game/GameData/FastTravel/FTS_Recruitment.FTS_Recruitment",0x3a);
      }
      FName::ToString(param_1 + 0x162,local_d8 + 2);
      local_d8[0] = 0;
      local_d8[1] = 0;
      FUN_140bf2f90(param_1,&local_e8,local_d8 + 2,local_d8);
      puVar12 = &DAT_143f3eda8;
      if (local_c0 != 0) {
        puVar12 = local_c8;
      }
      FName::FName(local_res18,puVar12,1);
      uVar8 = thunk_FUN_1422ca050();
      cVar4 = FUN_140a0b540(uVar8,local_res18);
      if (cVar4 == '\0') {
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_40,
                           L"Unable to launch save game; required content has not finished installing."
                           ,L"OakGameInstance",L"SaveGameContentNotInstalled");
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_58,L"Content Not Available",L"OakGameInstance",
                            L"ContentNotAvailable");
        local_90 = &PTR_FUN_1443170a0;
        FText::FText(local_88,uVar10);
        FText::FText(local_70,uVar8);
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
            iVar14 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
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
            iVar14 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        FWeakObjectPtr::operator=(local_res20,0);
        FWeakObjectPtr::operator=(local_b8,0);
        FWeakObjectPtr::operator=(local_b0,0);
        local_a8 = 0;
        FUN_140c23780(2,&local_90,local_b0,local_b8,local_res20,2);
        FUN_140b9cdd0(&local_90);
      }
      else {
        FUN_140bc8fd0(param_1,param_1 + 0x162,&local_e8,1);
      }
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_e8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140bccf10 FUN_140bccf10 body=215 status=ok
// SIG undefined FUN_140bccf10(void)

void FUN_140bccf10(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0xe38);
  puVar3 = (undefined8 *)0x0;
  if (plVar1 != local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0xe40) = 0;
  }
  FUN_140baffe0(param_1 + 0xd80,0);
  TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xdd0,0);
  TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xea0,0);
  *(undefined1 *)(param_1 + 0xe98) = 0;
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *puVar2 = &PTR_FUN_144317ad0;
    puVar3 = puVar2;
  }
  FUN_140be4f80(param_1,puVar3);
  return;
}



// FUNCTION 140bccff0 FUN_140bccff0 body=1165 status=ok
// SIG undefined FUN_140bccff0(void)

void FUN_140bccff0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  void **ppvVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  void *_Src;
  longlong *plVar17;
  longlong *local_res8;
  undefined1 local_res10 [8];
  void *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined1 local_68 [48];
  
  lVar12 = 0;
  if (param_1[399] != 0) {
    return;
  }
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if (lVar8 == 0) {
LAB_140bcd03c:
    lVar8 = FUN_140bb6170(param_1);
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar7 = FUN_1428cf800(uVar9);
    if (iVar7 != 3) goto LAB_140bcd03c;
  }
  if (*(int *)((longlong)param_1 + 0x1054) == 0) {
    return;
  }
  local_b8 = (void *)0x0;
  local_b0 = 0;
  if (((int)param_1[0x20c] < 2) || ((char)param_1[0x20d] != '\0')) {
    if ((param_1[0x9c] == 0) ||
       (((*(char *)(param_1[0x9c] + 0x10) == '\0' || (cVar6 = FUN_140678610(), cVar6 != '\0')) ||
        (ppvVar10 = (void **)FUN_140573010(param_1[0x9c]), &local_b8 == ppvVar10))))
    goto LAB_140bcd0c8;
    iVar7 = *(int *)(ppvVar10 + 1);
    uVar15 = (ulonglong)iVar7;
    _Src = *ppvVar10;
    local_b0 = CONCAT44(local_b0._4_4_,iVar7);
    iVar16 = local_b0._4_4_;
    if ((iVar7 == 0) && (local_b0._4_4_ == 0)) {
      local_b0 = 0;
      goto LAB_140bcd0c8;
    }
  }
  else {
    if (&local_b8 == (void **)(param_1 + 0x20b)) goto LAB_140bcd0c8;
    uVar2 = *(uint *)(param_1 + 0x20c);
    uVar15 = (ulonglong)(int)uVar2;
    _Src = (void *)param_1[0x20b];
    local_b0 = (ulonglong)uVar2;
    if (uVar2 == 0) goto LAB_140bcd0c8;
    iVar16 = 0;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,uVar15 & 0xffffffff,iVar16);
  _guard_xfg_dispatch_icall_nop(local_b8,_Src,uVar15 * 2);
LAB_140bcd0c8:
  cVar6 = FUN_140dc0fc0(&local_b8);
  if ((cVar6 == '\0') && (cVar6 = FUN_140dc1df0(&local_b8), cVar6 == '\0')) {
    cVar6 = FUN_140dc1000(&local_b8);
    if (cVar6 == '\0') {
      lVar8 = UGameInstance::GetFirstGamePlayer(param_1);
      if (lVar8 == 0) {
        local_res8 = (longlong *)0x0;
        plVar17 = (longlong *)0x0;
        bVar5 = false;
        bVar4 = false;
        bVar3 = true;
      }
      else {
        lVar8 = FUN_142547b50(lVar8,local_68);
        plVar17 = *(longlong **)(lVar8 + 0x10);
        local_res8 = *(longlong **)(lVar8 + 8);
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
      }
      if ((bVar3) && (local_res8 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_res8 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_res8)(local_res8);
          LOCK();
          piVar1 = (int *)((longlong)local_res8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_res8 + 8))(local_res8,1);
          }
        }
      }
      if ((bVar4) && (plVar17 != (longlong *)0x0)) {
        LOCK();
        plVar11 = plVar17 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      if (bVar5) {
        FUN_1404bf980(local_68);
      }
      if (local_res8 != (longlong *)0x0) {
        lVar8 = FUN_142b45e90();
        FOnlineSubsystemEOS::GetAchievementsInterface(*(undefined8 *)(lVar8 + 0x18),&local_98);
        lVar8 = local_98;
        if (local_98 != 0) {
          uStack_80 = 0;
          local_88 = FUN_140bd9e10;
          plVar11 = (longlong *)FMemory::Realloc(0,0x30);
          local_78 = plVar11;
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = (longlong)&PTR_FUN_1443190e0;
            FWeakObjectPtr::operator=(plVar11 + 1,param_1);
            *(undefined4 *)(plVar11 + 2) = (undefined4)local_88;
            *(undefined4 *)((longlong)plVar11 + 0x14) = local_88._4_4_;
            *(undefined4 *)(plVar11 + 3) = uStack_80;
            *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_7c;
            lVar12 = FDelegateHandle::GenerateNewID();
            plVar11[5] = lVar12;
            *plVar11 = (longlong)&PTR_FUN_144319128;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar8 + 0x40,1);
            plVar13 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_res10);
            iVar7 = *(int *)(lVar8 + 0x48);
            lVar12 = *plVar13;
            *(int *)(lVar8 + 0x48) = iVar7 + 1;
            if (*(int *)(lVar8 + 0x4c) < iVar7 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar8 + 0x40,iVar7);
            }
            puVar14 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar8 + 0x40));
            *puVar14 = plVar11;
            *(undefined4 *)(puVar14 + 1) = 3;
          }
          local_a8 = local_res8;
          param_1[399] = lVar12;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
          }
          local_a0 = plVar17;
          FUN_142b64660(local_98,&local_a8,&local_b8);
          plVar11 = local_a0;
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_a0 + 1;
            lVar12 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
        }
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_90 + 1;
          lVar12 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
        }
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar17 + 1;
        lVar12 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
    }
    else {
      FUN_140dcf850(&local_b8);
      TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
                (param_1 + 400,*(undefined4 *)((longlong)param_1 + 0x1054));
    }
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140bcd4a0 FUN_140bcd4a0 body=127 status=ok
// SIG undefined FUN_140bcd4a0(void)

void FUN_140bcd4a0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((param_3 == '\x04') && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    puVar3 = *(undefined8 **)(lVar1 + 0x30);
    puVar4 = puVar3 + (longlong)*(int *)(lVar1 + 0x38) * 0xd;
    for (; puVar3 != puVar4; puVar3 = puVar3 + 0xd) {
      cVar2 = FUN_142f4ff30(puVar3 + 7,param_2);
      if (cVar2 != '\0') {
        FUN_140be24e0(param_1 + -0x458,*puVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bcd520 FUN_140bcd520 body=470 status=ok
// SIG undefined FUN_140bcd520(void)

void FUN_140bcd520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  cVar4 = FUN_140ba6d80();
  if (cVar4 != '\0') {
    puVar5 = (undefined8 *)FName::FName(local_res20,L"SPARK",1);
    FUN_140bbd560(&local_48,*puVar5);
    FUN_140bbb2b0(param_1,&local_58,param_3);
    plVar6 = plStack_50;
    plVar7 = plStack_50;
    if ((local_48 != (longlong *)0x0) && (local_58 != 0)) {
      local_38 = local_58;
      plStack_30 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_48 + 0x90))(plStack_50,param_2,&local_38,0);
      plVar7 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_30 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = plStack_50;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = plStack_50;
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            plVar6 = plStack_50;
          }
        }
      }
      local_28 = local_58;
      plStack_20 = plStack_50;
      plVar7 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        plVar7 = plStack_50;
      }
      FUN_140bc0a50(param_1,&local_28,0);
      plVar6 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_20 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        plVar7 = plStack_50;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar7 = plStack_50;
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar7 = plStack_50;
          }
        }
      }
    }
    plVar6 = plStack_50;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar7 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar7 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bcd700 FUN_140bcd700 body=1750 status=ok
// SIG undefined FUN_140bcd700(void)

void FUN_140bcd700(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  longlong local_158;
  longlong *plStack_150;
  longlong *local_148;
  int local_140;
  longlong local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  bVar10 = false;
  puVar5 = (undefined8 *)FName::FName(local_88,L"SPARK",1);
  FUN_140bbd560(&local_110,*puVar5);
  if (local_110 != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[7];
    plVar11 = plVar12 + (int)param_1[8];
    for (; plVar12 != plVar11; plVar12 = plVar12 + 1) {
      if (*plVar12 != 0) {
        lVar6 = FUN_142547b50(*plVar12,local_60);
        local_158 = *(longlong *)(lVar6 + 8);
        plStack_150 = *(longlong **)(lVar6 + 0x10);
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
          UNLOCK();
        }
        local_60[0] = &PTR_FUN_143f740c8;
        if (local_48 != 0) {
          FMemory::Free();
        }
        plVar8 = local_50;
        local_60[0] = &PTR_FUN_143f73d18;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_50 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        if (local_158 != 0) {
          local_e8 = local_158;
          plStack_e0 = plStack_150;
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
            UNLOCK();
          }
          uVar7 = FUN_140bb74b0(param_1);
          FUN_140d7da70(uVar7,&local_100,&local_e8,param_2,3);
          plVar8 = local_f8;
          bVar13 = local_100 == 0;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_f8 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          plVar8 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_e0 + 1;
            lVar6 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if (bVar13) {
            plVar8 = (longlong *)
                     (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_80);
            lVar6 = *plVar8;
            plVar8 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_78);
            if (lVar6 != *plVar8) {
              local_d8 = local_158;
              plStack_d0 = plStack_150;
              if (plStack_150 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
                UNLOCK();
              }
              iVar4 = FUN_140bb67f0(&local_d8);
              plVar8 = plStack_d0;
              if (plStack_d0 != (longlong *)0x0) {
                LOCK();
                plVar9 = plStack_d0 + 1;
                lVar6 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plStack_d0)(plStack_d0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              if (iVar4 == 1) goto LAB_140bcdc35;
              if (iVar4 == 2) {
                FUN_140bbc950(param_1,&local_138,param_2);
                plVar8 = plStack_130;
                if (local_138 == 0) {
                  bVar13 = true;
                }
                else {
                  bVar10 = true;
                  local_c8 = local_138;
                  plStack_c0 = plStack_130;
                  if (plStack_130 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
                    UNLOCK();
                  }
                  cVar3 = FUN_140bcacb0(param_1,&local_158,&local_c8);
                  bVar13 = cVar3 == '\0';
                }
                plVar9 = plStack_c0;
                if ((bVar10) && (bVar10 = false, plStack_c0 != (longlong *)0x0)) {
                  LOCK();
                  plVar8 = plStack_c0 + 1;
                  lVar6 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  plVar8 = plStack_130;
                  if ((int)lVar6 == 1) {
                    (**(code **)*plStack_c0)(plStack_c0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar9 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    plVar8 = plStack_130;
                    if (iVar4 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                      plVar8 = plStack_130;
                    }
                  }
                }
                plVar9 = plStack_130;
                if (plVar8 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = plVar8 + 1;
                  lVar6 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar6 == 1) {
                    (**(code **)*plStack_130)(plStack_130);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar9 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plStack_130 + 8))(plStack_130,1);
                    }
                  }
                }
                if (bVar13) goto LAB_140bcdc35;
              }
            }
            plVar8 = (longlong *)
                     (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_70);
            lVar6 = *plVar8;
            plVar8 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1,local_68);
            if (lVar6 == *plVar8) {
              local_128 = 0;
              FUN_1404cf890(&local_120,0);
              plVar8 = local_120;
              if (local_120 != (longlong *)0x0) {
                local_148 = (longlong *)0x0;
                local_140 = 0;
                plVar9 = (longlong *)FMemory::Realloc(0,0x20);
                local_140 = 2;
                local_148 = plVar9;
                if (plVar9 != (longlong *)0x0) {
                  plVar9[1] = (longlong)param_1;
                  *plVar9 = (longlong)&PTR_GetPoolName_144318f30;
                  lVar6 = FDelegateHandle::GenerateNewID();
                  plVar9[3] = lVar6;
                  *plVar9 = (longlong)&PTR_GetPoolName_144318f78;
                }
                local_b8 = local_158;
                plStack_b0 = plStack_150;
                if (plStack_150 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
                  UNLOCK();
                  plVar8 = local_120;
                }
                (**(code **)(*plVar8 + 0x168))(plVar8,&local_b8,param_2,&local_148);
                plVar8 = plStack_b0;
                if (plStack_b0 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = plStack_b0 + 1;
                  lVar6 = *plVar9;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)lVar6 == 1) {
                    (**(code **)*plStack_b0)(plStack_b0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar8 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*plVar8 + 8))(plVar8,1);
                    }
                  }
                }
                if (local_140 != 0) {
                  if (local_148 == (longlong *)0x0) goto LAB_140bcdbe5;
                  (**(code **)(*local_148 + 0x28))(local_148,0);
                  if (local_148 != (longlong *)0x0) {
                    local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
                  }
                  local_140 = 0;
                }
                if (local_148 != (longlong *)0x0) {
                  FMemory::Free(local_148);
                }
              }
LAB_140bcdbe5:
              plVar8 = local_118;
              if (local_118 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_118 + 1;
                lVar6 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*local_118 + 8))(local_118,1);
                  }
                }
              }
            }
          }
          else {
LAB_140bcdc35:
            local_a8 = local_158;
            plStack_a0 = plStack_150;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
              UNLOCK();
            }
            (**(code **)(*local_110 + 0x90))(local_110,&local_a8,param_2,0);
            plVar8 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar9 = plStack_a0 + 1;
              lVar6 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plStack_a0)(plStack_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                }
              }
            }
            plVar8 = (longlong *)param_2[1];
            local_98 = *param_2;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            local_90 = plVar8;
            iVar4 = FUN_140bbba30(param_1,&local_98);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar8 + 1;
              lVar6 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8);
                }
              }
            }
            if (iVar4 == 2) {
              TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
                        (param_1 + 0x147,param_2,2);
            }
          }
        }
        plVar8 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_150 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_150)(plStack_150);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_150 + 8))(plStack_150,1);
            }
          }
        }
      }
    }
  }
  plVar12 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_108 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  return;
}



// FUNCTION 140bcdde0 FUN_140bcdde0 body=244 status=ok
// SIG undefined FUN_140bcdde0(void)

undefined8 FUN_140bcdde0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  lVar4 = FUN_140d3a420(uVar3);
  if (lVar4 != 0) {
    lVar4 = FUN_140d3a960(lVar4,param_2);
    if ((lVar4 != 0) && (cVar2 = FUN_140d3db00(lVar4), cVar2 != '\0')) {
      lVar5 = param_1[0x1fb];
      lVar4 = lVar5 + (longlong)(int)param_1[0x1fc] * 0x28;
      while( true ) {
        if (lVar5 == lVar4) {
          return 0;
        }
        if (((*(longlong **)(lVar5 + 8) == (longlong *)0x0) ||
            (cVar2 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x20))(), cVar2 == '\0')) ||
           (cVar2 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((((*(longlong **)(lVar5 + 8) == (longlong *)0x0) ||
             (cVar2 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x20))(), cVar2 == '\0')) &&
            (cVar2 = (**(code **)(*(longlong *)*param_2 + 0x20))(), cVar2 == '\0')) ||
           ((bVar1 && (cVar2 = (**(code **)**(undefined8 **)(lVar5 + 8))
                                         (*(undefined8 **)(lVar5 + 8),*param_2), cVar2 != '\0'))))
        break;
        lVar5 = lVar5 + 0x28;
      }
    }
  }
  return 1;
}



// FUNCTION 140bcdf00 FUN_140bcdf00 body=320 status=ok
// SIG undefined FUN_140bcdf00(void)

void FUN_140bcdf00(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  void *_Src;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 == 0) || ((*(uint *)(lVar3 + 0x830) >> 2 & 1) == 0)) {
    plVar5 = (longlong *)param_1[7];
    plVar1 = plVar5 + (int)param_1[8];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if ((*plVar5 != 0) && (lVar3 = *(longlong *)(*plVar5 + 0x30), lVar3 != 0)) {
        lVar4 = FUN_14145f370();
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
          FUN_141460310(lVar3,param_2);
        }
      }
    }
  }
  else {
    lVar3 = FUN_140bb6170(param_1);
    if (lVar3 != 0) {
      local_10 = *(int *)(param_2 + 1);
      lVar4 = (longlong)local_10;
      _Src = (void *)*param_2;
      local_18 = (void *)0x0;
      if (local_10 == 0) {
        local_c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
        _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar4 * 2);
      }
      FUN_1404e22e0(lVar3,&local_18);
      if (local_18 != (void *)0x0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bce040 FUN_140bce040 body=202 status=ok
// SIG undefined FUN_140bce040(void)

void FUN_140bce040(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_18;
  int local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar4 = (longlong *)FWeakObjectPtr::Get();
      if (plVar4 != (longlong *)0x0) {
        lVar3 = FUN_14145f370();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (cVar2 = (**(code **)(*plVar4 + 0x768))(), cVar2 != '\0')) &&
           (*(byte *)(plVar4 + 0x25) < 3)) {
          FUN_1414603f0();
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140bce110 thunk_FUN_140bf3c30 body=5 status=ok
// SIG undefined thunk_FUN_140bf3c30(void)

void thunk_FUN_140bf3c30(void)

{
  FUN_140bf3c30();
  return;
}



// FUNCTION 140bce120 FUN_140bce120 body=1298 status=ok
// SIG undefined FUN_140bce120(void)

void FUN_140bce120(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  void *_Dst;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 local_res8 [8];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x14d);
  FUN_140bf3dd0(param_1);
  if (param_1[0x9c] == 0) goto LAB_140bce55b;
  FUN_140dc3710();
  bVar4 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686a818) && (_Init_thread_header(&DAT_14686a818), DAT_14686a818 == -1))
  {
    atexit((_func_5014 *)&LAB_143e4d660);
    _Init_thread_footer(&DAT_14686a818);
  }
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_140bb7680(param_1);
  puVar9 = local_68;
  uVar11 = (ulonglong)(int)DAT_14686a810;
  lVar14 = uVar11 * 0x10 + DAT_14686a808;
  if (DAT_14686a808 != lVar14) {
    puVar8 = local_68 + (longlong)(int)local_60 * 2;
    puVar15 = puVar9;
    lVar12 = DAT_14686a808;
    bVar4 = false;
joined_r0x000140bce1ea:
    do {
      if (puVar15 == puVar8) {
        bVar4 = true;
        *(undefined1 *)((longlong)param_1 + 0xbae) = 1;
        FUN_140dc6ab0(param_1[0x9c]);
      }
      else {
        cVar5 = (*(code *)**(undefined8 **)*puVar15)();
        if (cVar5 == '\0') {
          puVar15 = puVar15 + 2;
          goto joined_r0x000140bce1ea;
        }
      }
      lVar12 = lVar12 + 0x10;
      puVar15 = puVar9;
    } while (lVar12 != lVar14);
    uVar11 = (ulonglong)DAT_14686a810;
  }
  puVar15 = puVar9 + (longlong)(int)local_60 * 2;
  if (puVar9 != puVar15) {
    do {
      local_58 = *puVar9;
      local_50 = puVar9[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      cVar5 = FUN_140bca7d0(param_1);
      if (cVar5 == '\0') {
        lVar12 = (longlong)(int)DAT_14686a810 * 0x10 + DAT_14686a808;
        for (lVar14 = DAT_14686a808; lVar14 != lVar12; lVar14 = lVar14 + 0x10) {
          cVar5 = (*(code *)**(undefined8 **)*puVar9)();
          if (cVar5 != '\0') goto LAB_140bce30c;
        }
        *(undefined1 *)((longlong)param_1 + 0xbae) = 1;
        FUN_140dc6a10(param_1[0x9c],puVar9);
        FUN_140d94a80(param_1[0x8f],puVar9);
        local_48 = *puVar9;
        local_40 = puVar9[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        FUN_140be6820(param_1);
        FUN_140be5970(param_1);
      }
LAB_140bce30c:
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar15);
    uVar11 = (ulonglong)DAT_14686a810;
    puVar9 = local_68;
  }
  if (DAT_14686a814 < 0) {
    if ((int)uVar11 != 0) {
      plVar13 = (longlong *)(DAT_14686a808 + 8);
      do {
        plVar3 = (longlong *)*plVar13;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3);
            }
          }
        }
        plVar13 = plVar13 + 2;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
        puVar9 = local_68;
      } while (uVar10 != 0);
    }
    DAT_14686a810 = 0;
    if (DAT_14686a814 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_14686a808);
    }
  }
  else {
    if ((int)uVar11 != 0) {
      plVar13 = (longlong *)(DAT_14686a808 + 8);
      do {
        plVar3 = (longlong *)*plVar13;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3);
            }
          }
        }
        plVar13 = plVar13 + 2;
        uVar10 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar10;
        puVar9 = local_68;
      } while (uVar10 != 0);
    }
    DAT_14686a810 = 0;
  }
  for (; puVar9 != puVar15; puVar9 = puVar9 + 2) {
    local_38 = *puVar9;
    local_30 = puVar9[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    cVar5 = FUN_140bca7d0(param_1);
    if (cVar5 == '\0') {
      lVar14 = (longlong)(int)DAT_14686a810;
      DAT_14686a810 = DAT_14686a810 + 1;
      if (DAT_14686a814 < (int)DAT_14686a810) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_14686a808);
      }
      puVar8 = (undefined8 *)(lVar14 * 0x10 + DAT_14686a808);
      *puVar8 = *puVar9;
      lVar14 = puVar9[1];
      puVar8[1] = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
    }
  }
  if (bVar4) {
    FUN_140dbc5d0(param_1 + 0xbe,local_res8);
    cVar5 = FUN_140bec900(param_1);
    lVar14 = param_1[0x9c];
    if (lVar14 != 0) {
      if (cVar5 == '\0') {
        if ((*(char *)(lVar14 + 0x10) != '\0') && (cVar5 = FUN_140678610(), cVar5 != '\0')) {
          *(undefined4 *)(param_1 + 0x21b) = 0;
          lVar14 = (**(code **)(*param_1 + 0x148))(param_1);
          if (lVar14 != 0) {
            uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
            iVar6 = FUN_1428cf800(uVar7);
            if (iVar6 == 3) goto LAB_140bce551;
          }
          lVar14 = FUN_140bb6170(param_1);
          if (lVar14 == 0) {
            FUN_140ba8040(param_1);
          }
        }
      }
      else if ((*(char *)(lVar14 + 0x10) == '\0') && (*(float *)(param_1 + 0x21b) <= 0.0)) {
        *(undefined4 *)(param_1 + 0x21b) = 0x40a00000;
      }
    }
  }
LAB_140bce551:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_68);
LAB_140bce55b:
  lVar12 = 0;
  FUN_140bf4500(param_1);
  lVar14 = param_1[0x212];
  if (param_1[0x212] == 0) {
    _Dst = (void *)operator_new(0x270);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x270);
      lVar12 = FUN_140b99d60(_Dst);
    }
    param_1[0x212] = lVar12;
    lVar14 = lVar12;
  }
  FUN_140d9f600(lVar14,10);
  lVar14 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar14 == 0) || ((*(uint *)(lVar14 + 0x830) >> 2 & 1) == 0)) && (param_1[0x21a] != 0)) {
    FUN_140dd0ed0(param_1[0x21a],0);
  }
  return;
}



// FUNCTION 140bce640 FUN_140bce640 body=614 status=ok
// SIG undefined FUN_140bce640(void)

void FUN_140bce640(longlong *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 **ppuVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *local_48;
  ulonglong local_40;
  longlong local_38 [2];
  undefined2 *local_28;
  undefined8 local_20;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((lVar4 == 0) || ((*(uint *)(lVar4 + 0x830) >> 2 & 1) == 0)) {
    plVar5 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
    lVar4 = plVar5[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar4 = plVar5[0x1f];
    }
    puVar9 = (undefined2 *)0x0;
    local_40 = 2;
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    local_48 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar2 = local_48;
    FGenericPlatformString::Memcpy(local_48,&DAT_143f73c90,4);
    iVar3 = 0;
    if (*(longlong *)(lVar4 + 0x50) == 0) {
      local_38[0] = 0;
      local_38[1] = 0;
    }
    else {
      FName::ToString((longlong *)(lVar4 + 0x50),local_38);
    }
    FUN_1404e14f0(local_38,&local_48,0,local_38 + 2,0,0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
    local_48 = (undefined2 *)0x0;
    local_40 = local_40 & 0xffffffff;
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar4 != 0) {
      ppuVar6 = (undefined2 **)FUN_1428cc8c0(lVar4,local_38);
      iVar3 = 0;
      if (&local_48 != ppuVar6) {
        iVar1 = *(int *)(ppuVar6 + 1);
        puVar2 = *ppuVar6;
        local_40 = CONCAT44(local_40._4_4_,iVar1);
        iVar3 = 0;
        if (iVar1 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar1,0);
          puVar9 = local_48;
          _guard_xfg_dispatch_icall_nop(local_48,puVar2,(longlong)iVar1 * 2);
          iVar3 = (int)local_40;
        }
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    puVar2 = local_28;
    puVar8 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar8 = local_28;
    }
    puVar7 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar7 = puVar9;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
    if (iVar3 != 0) {
      if (param_1[0x15d] != 0) {
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        if ((lVar4 != 0) && (iVar3 = FUN_1428cf800(lVar4), iVar3 == 3)) {
          FUN_1404c9880(param_1[0x15d],DAT_14686a160);
          *(undefined4 *)((longlong)param_1 + 0xf8c) = 0;
        }
        FUN_1404c9880(param_1[0x15d],DAT_14686a168);
      }
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x91,0);
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x93,0);
      FUN_140bafdc0(param_1 + 0x9e,0);
    }
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  return;
}



// FUNCTION 140bce8b0 FUN_140bce8b0 body=91 status=ok
// SIG undefined FUN_140bce8b0(void)

void FUN_140bce8b0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_1411f58b0(param_1 + 0xf4);
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x830) >> 2 & 1) != 0)) {
    lVar1 = FUN_140bb7870(param_1);
    if (lVar1 != 0) {
      FUN_140dd0eb0(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140bce910 FUN_140bce910 body=617 status=ok
// SIG undefined FUN_140bce910(void)

void FUN_140bce910(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 local_res20;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_2 != 0) {
    lVar8 = 0;
    if (*(char *)(param_1 + 0x9b8) == '\0') {
      local_res20 = 0;
      plVar6 = (longlong *)FUN_1404b0000(&local_res20);
      bVar9 = plVar6 != (longlong *)0x0;
      if (bVar9) {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x68))(plVar6,local_38);
        lVar8 = *plVar6;
      }
      else {
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        plVar6 = &local_68;
      }
      plVar4 = (longlong *)plVar6[1];
      plVar6[1] = 0;
      *plVar6 = 0;
      if ((bVar9) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar6 = local_30 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar6 = plStack_60;
      if ((!bVar9) && (plStack_60 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plStack_60 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      if (lVar8 != 0) {
        FUN_142dcf3a0(param_2,&local_58);
        if (local_58 != 0) {
          local_48 = local_58;
          plStack_40 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
          }
          uVar7 = FUN_140bb7220(param_1);
          FUN_140d6a400(uVar7,&local_48,param_3);
          plVar6 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_40 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_40)(plStack_40);
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
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_50 + 1;
          lVar8 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plStack_50 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_50 + 8))(plStack_50,1);
            }
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    }
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      FUN_140d02c00(param_2,param_3);
    }
  }
  return;
}



// FUNCTION 140bceb80 FUN_140bceb80 body=269 status=ok
// SIG undefined FUN_140bceb80(void)

void FUN_140bceb80(undefined8 param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 local_res10;
  longlong local_res18;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  longlong local_10;
  
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UOakGameInstance::OnSplitscreenDialogDismissed",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res18,pwVar2 + 2,1);
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res18;
  local_res10 = 0;
  if ((local_res18 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_28), lVar4 != 0)) {
    UObject::FindFunction(lVar4,local_20);
  }
  FWeakObjectPtr::operator=(&local_res10,0);
  FWeakObjectPtr::operator=(&local_res18,0);
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  FUN_140c237f0(2,0xc,&local_18,&local_res18,&local_res10,2);
  return;
}



// FUNCTION 140bcec90 FUN_140bcec90 body=116 status=ok
// SIG undefined FUN_140bcec90(void)

void FUN_140bcec90(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 local_res10 [24];
  
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x650,*(undefined8 *)(param_1 + 0x11d0));
  *(undefined8 *)(param_1 + 0x11d0) = 0;
  if (param_2 == 1) {
    uVar1 = FUN_140dbc5d0(param_1 + 0x5f0,local_res10);
    FUN_140bf7280(param_1,uVar1);
    if (*(char *)(param_1 + 0x11c8) != '\0') {
      *(undefined1 *)(param_1 + 0x11c8) = 0;
      FUN_140bd1fa0(param_1,0);
    }
  }
  return;
}



// FUNCTION 140bced10 FUN_140bced10 body=188 status=ok
// SIG undefined FUN_140bced10(void)

void FUN_140bced10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 local_18;
  longlong *local_10;
  
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a160)) &&
      (*(longlong **)(param_3 + 8) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar6 != '\0')) {
    local_18 = *(undefined8 *)(param_3 + 8);
    plVar4 = *(longlong **)(param_3 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_10 = plVar4;
    FUN_140bd83e0(param_1,&local_18,param_4);
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
  return;
}



// FUNCTION 140bcede0 FUN_140bcede0 body=377 status=ok
// SIG undefined FUN_140bcede0(void)

void FUN_140bcede0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a160)) {
    if ((*(longlong **)(param_3 + 0x10) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x20))(), cVar7 != '\0')) {
      local_28 = *(undefined8 *)(param_3 + 0x10);
      local_20 = *(longlong **)(param_3 + 0x18);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_140bd8550(param_1,&local_28,param_4);
      plVar6 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
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
    lVar8 = *(longlong *)(param_3 + 0x30);
    lVar4 = lVar8 + (longlong)*(int *)(param_3 + 0x38) * 0x28;
    for (; lVar8 != lVar4; lVar8 = lVar8 + 0x28) {
      if ((*(longlong **)(lVar8 + 8) != (longlong *)0x0) &&
         (cVar7 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x20))(), cVar7 != '\0')) {
        local_18 = *(undefined8 *)(lVar8 + 8);
        local_10 = *(longlong **)(lVar8 + 0x10);
        if (local_10 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_10 + 1) = (int)local_10[1] + 1;
          UNLOCK();
        }
        FUN_140bd8550(param_1,&local_18,param_4);
        plVar6 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_10)(local_10);
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
    }
  }
  return;
}



// FUNCTION 140bcef60 FUN_140bcef60 body=309 status=ok
// SIG undefined FUN_140bcef60(void)

void FUN_140bcef60(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_40 [2];
  longlong *local_30;
  longlong *local_18;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a168)) {
    uVar5 = FUN_140bb5e90(local_58,param_3);
    uVar5 = FUN_140b998f0(local_40,uVar5);
    FUN_140bbf3a0(param_1,uVar5);
    local_40[0] = &PTR_FUN_1443170a0;
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
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FUN_140bc2f10(param_1);
    *(undefined1 *)(param_1 + 0x11c0) = 0;
    FUN_140bc2fb0(param_1,0);
  }
  return;
}



// FUNCTION 140bcf0a0 FUN_140bcf0a0 body=68 status=ok
// SIG undefined FUN_140bcf0a0(void)

void FUN_140bcf0a0(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a168)) {
    FUN_140bcf6f0();
    FUN_140bc2f10(param_1);
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xa20);
    FUN_140bf4500(param_1);
  }
  return;
}



// FUNCTION 140bcf140 FUN_140bcf140 body=356 status=ok
// SIG undefined FUN_140bcf140(void)

void FUN_140bcf140(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a168)) {
    if ((*(char *)(param_1 + 0x11c0) != '\0') && (0 < *(int *)(param_1 + 0x490))) {
      puVar3 = (undefined8 *)FName::FName(local_res10,L"SPARK",1);
      FUN_140bbd560(&local_38,*puVar3);
      plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
      lVar5 = CONCAT44(uStack_2c,uStack_30);
      if (plVar4 != (longlong *)0x0) {
        lVar7 = *(longlong *)(param_1 + 0x488);
        lVar6 = (longlong)*(int *)(param_1 + 0x490) * 0x10 + lVar7;
        if (lVar7 != lVar6) {
          do {
            local_28 = local_38;
            uStack_24 = uStack_34;
            uStack_20 = uStack_30;
            uStack_1c = uStack_2c;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
              lVar5 = CONCAT44(uStack_2c,uStack_30);
            }
            FUN_140be6cf0(param_1,&local_28,lVar7);
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != lVar6);
          plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
        }
        iVar2 = (**(code **)(*plVar4 + 0xe8))();
        if (iVar2 == 4) {
          FUN_140bee090(param_1);
        }
      }
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 8);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          puVar3 = (undefined8 *)CONCAT44(uStack_2c,uStack_30);
          (**(code **)*puVar3)(puVar3);
          LOCK();
          piVar1 = (int *)((longlong)puVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*(longlong *)CONCAT44(uStack_2c,uStack_30) + 8))
                      ((longlong *)CONCAT44(uStack_2c,uStack_30),1);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x11c0) = 0;
    FUN_140bc2fb0(param_1,0);
    local_18 = 0;
    uStack_10 = 0;
    FUN_140c236f0(1,3,&local_18);
  }
  return;
}



// FUNCTION 140bcf2f0 FUN_140bcf2f0 body=143 status=ok
// SIG undefined FUN_140bcf2f0(void)

void FUN_140bcf2f0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_140dcfa20(param_1 + 0x5f0,param_3,param_4,param_5);
  puVar2 = (undefined2 *)FUN_140dbc5d0(param_1 + 0x5f0,local_res8);
  uVar1 = *puVar2;
  *(undefined2 *)(param_1 + 0x440) = uVar1;
  if ((char)uVar1 == '\x02') {
    FUN_140bf7280(param_1,param_1 + 0x440);
  }
  uVar3 = FUN_140bb7440(param_1);
  FUN_140d9f600(uVar3,0xe);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x9a0,param_1 + 0x440);
  return;
}



// FUNCTION 140bcf380 FUN_140bcf380 body=360 status=ok
// SIG undefined FUN_140bcf380(void)

void FUN_140bcf380(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_40 [2];
  longlong *local_30;
  longlong *local_18;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a168)) {
    FUN_140ba8040();
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x830) >> 2 & 1) != 0)) {
      uVar5 = FUN_140bb9ce0(param_1,local_58,param_3,param_4);
      uVar5 = FUN_140b998f0(local_40,uVar5);
      FUN_140bbf3a0(param_1,uVar5);
      local_40[0] = &PTR_FUN_1443170a0;
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
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    FUN_140bc2f10(param_1);
    *(undefined1 *)(param_1 + 0x238) = 0;
    FUN_140bc2fb0(param_1,0);
  }
  return;
}



// FUNCTION 140bcf4f0 FUN_140bcf4f0 body=271 status=ok
// SIG undefined FUN_140bcf4f0(void)

void FUN_140bcf4f0(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  byte local_28 [16];
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a160)) {
    FUN_140dbbe50(param_1 + 0xbe,local_28,local_res20,local_res10);
    FUN_1404e6640(param_2,param_3 + 8,local_28[0],local_res20[0],local_res10[0]);
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x830) >> 2 & 1) == 0)) {
      FUN_1404e2360(param_2,param_3 + 8,0);
    }
    else {
      FUN_140b97430(param_2,param_3 + 8,1,8);
      lVar2 = FUN_14142a8f0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140dcf700(param_2,param_3 + 8);
      }
    }
    FUN_140bea630(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140bcf600 FUN_140bcf600 body=48 status=ok
// SIG undefined FUN_140bcf600(void)

void FUN_140bcf600(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a178)) {
    FUN_140bf3dd0();
  }
  FUN_1404bed10(param_3);
  return;
}



// FUNCTION 140bcf630 FUN_140bcf630 body=183 status=ok
// SIG undefined FUN_140bcf630(void)

void FUN_140bcf630(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_18;
  longlong *local_10;
  
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a168)) &&
      (*(longlong **)(param_3 + 8) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_3 + 8) + 0x20))(), cVar6 != '\0')) {
    local_18 = *(undefined8 *)(param_3 + 8);
    local_10 = *(longlong **)(param_3 + 0x10);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    FUN_140bd8550(param_1,&local_18,param_4);
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
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bcf6f0 FUN_140bcf6f0 body=3667 status=ok
// SIG undefined FUN_140bcf6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bcf6f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  void *_Dst;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 auStack_1e8 [32];
  byte local_1c8;
  char local_1c7;
  longlong *local_1c0;
  uint local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  lVar24 = *(longlong *)(param_2 + 0xc0);
  local_1b8 = 0;
  local_1c0 = param_1;
  local_110 = param_2;
  if ((lVar24 == DAT_14686a168) || (lVar24 == DAT_14686a160)) {
    if (((int)param_1[0x92] != 0) || (local_1c7 = '\x01', lVar24 != DAT_14686a168)) {
      local_1c7 = '\0';
    }
    lVar24 = *(longlong *)(param_2 + 0x60);
    lVar11 = (longlong)*(int *)(param_2 + 0x68) * 0x40 + lVar24;
    local_1b0 = (longlong *)0x0;
    local_1a8 = 0;
    local_168 = (longlong *)0x0;
    local_160 = 0;
    if (lVar24 != lVar11) {
      piVar23 = (int *)(lVar24 + 0x38);
      do {
        uVar19 = local_1a8;
        lVar14 = (longlong)(int)local_1a8;
        iVar6 = (int)local_1a8 + 1;
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar6);
        if (local_1a8._4_4_ < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1b0,uVar19 & 0xffffffff);
        }
        local_1b0[lVar14 * 2] = *(longlong *)(piVar23 + -10);
        lVar15 = *(longlong *)(piVar23 + -8);
        (local_1b0 + lVar14 * 2)[1] = lVar15;
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
        }
        lVar15 = *(longlong *)(piVar23 + -2);
        lVar14 = lVar15 + (longlong)*piVar23 * 0x28;
        uVar19 = local_1a8;
        for (; lVar15 != lVar14; lVar15 = lVar15 + 0x28) {
          local_1a8._0_4_ = (int)uVar19;
          lVar17 = (longlong)(int)local_1a8;
          local_1a8._0_4_ = (int)local_1a8 + 1;
          local_1a8._4_4_ = (int)(uVar19 >> 0x20);
          if (local_1a8._4_4_ < (int)local_1a8) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1b0,uVar19 & 0xffffffff);
          }
          local_1b0[lVar17 * 2] = *(longlong *)(lVar15 + 8);
          lVar1 = *(longlong *)(lVar15 + 0x10);
          (local_1b0 + lVar17 * 2)[1] = lVar1;
          if (lVar1 != 0) {
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
          }
          uVar19 = local_1a8;
        }
        lVar24 = lVar24 + 0x40;
        piVar23 = piVar23 + 0x10;
        local_1a8 = uVar19;
      } while (lVar24 != lVar11);
    }
    local_140 = param_1 + 0x91;
    plVar10 = (longlong *)*local_140;
    plVar16 = plVar10 + (longlong)(int)param_1[0x92] * 2;
    for (; plVar10 != plVar16; plVar10 = plVar10 + 2) {
      lVar24 = *plVar10;
      plVar13 = local_1b0 + (longlong)(int)local_1a8 * 2;
      for (plVar9 = local_1b0; plVar9 != plVar13; plVar9 = plVar9 + 2) {
        cVar5 = (*(code *)**(undefined8 **)*plVar9)((undefined8 *)*plVar9,lVar24);
        if (cVar5 != '\0') {
          iVar6 = (int)((longlong)plVar9 - (longlong)local_1b0 >> 4);
          if (iVar6 != -1) {
            plVar13 = local_1b0 + (longlong)iVar6 * 2;
            plVar9 = (longlong *)plVar13[1];
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar9 + 1;
              lVar24 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar23 = (int *)((longlong)plVar9 + 0xc);
                iVar20 = *piVar23;
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
            iVar20 = ((int)local_1a8 - iVar6) + -1;
            if (iVar20 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar13,local_1b0 + (longlong)(iVar6 + 1) * 2,(longlong)iVar20 << 4);
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_1a8 + -1);
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&local_1b0);
            goto LAB_140bcf938;
          }
          break;
        }
      }
      uVar19 = local_160;
      lVar24 = (longlong)(int)local_160;
      iVar6 = (int)local_160 + 1;
      local_160 = CONCAT44(local_160._4_4_,iVar6);
      if (local_160._4_4_ < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_168,uVar19 & 0xffffffff);
      }
      local_168[lVar24 * 2] = *plVar10;
      lVar11 = plVar10[1];
      (local_168 + lVar24 * 2)[1] = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
LAB_140bcf938:
    }
    puVar7 = (undefined8 *)FName::FName(local_a0,L"SPARK",1);
    FUN_140bbd560(&local_198,*puVar7);
    FName::FName(local_98,L"SPARK",1);
    FUN_1404d0c50(&local_138);
    local_178 = 0;
    local_170 = 0;
    local_188 = 0;
    local_180 = 0;
    local_d8 = local_168 + (longlong)(int)local_160 * 2;
    local_120 = local_168;
    if (local_168 != local_d8) {
      plVar10 = param_1 + 0x9e;
      plVar16 = param_1 + 0x91;
      plVar9 = local_168;
      do {
        puVar7 = (undefined8 *)*plVar16;
        lVar11 = plVar16[1];
        lVar24 = *plVar9;
        local_120 = plVar9;
        for (puVar18 = puVar7; puVar18 != puVar7 + (longlong)(int)lVar11 * 2; puVar18 = puVar18 + 2)
        {
          cVar5 = (*(code *)**(undefined8 **)*puVar18)((undefined8 *)*puVar18,lVar24);
          if (cVar5 != '\0') {
            uVar19 = (longlong)puVar18 - (longlong)puVar7 >> 4;
            goto LAB_140bcfa0f;
          }
        }
        uVar19 = 0xffffffff;
LAB_140bcfa0f:
        TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (local_140,uVar19 & 0xffffffff,1,1);
        plVar16 = local_1c0;
        lVar11 = local_1c0[0x94];
        if ((int)lVar11 != 0) {
          local_1a0 = 0;
          iVar6 = 0;
          lVar14 = 0;
          cVar5 = (**(code **)**(undefined8 **)local_1c0[0x93])
                            (*(undefined8 **)local_1c0[0x93],lVar24);
          bVar25 = cVar5 == '\0';
          local_f8 = (longlong)(int)lVar11;
          do {
            lVar11 = local_f8;
            plVar10 = local_1c0;
            lVar14 = lVar14 + 1;
            iVar20 = iVar6 + 1;
            local_1c8 = bVar25;
            local_148 = iVar6;
            if (lVar14 < local_f8) {
              lVar15 = lVar14 * 0x10;
              do {
                cVar5 = (**(code **)**(undefined8 **)(lVar15 + plVar10[0x93]))
                                  (*(undefined8 **)(lVar15 + plVar10[0x93]),lVar24);
                plVar16 = local_1c0;
                if ((bool)bVar25 != (cVar5 == '\0')) break;
                iVar20 = iVar20 + 1;
                lVar14 = lVar14 + 1;
                lVar15 = lVar15 + 0x10;
              } while (lVar14 < lVar11);
            }
            iVar6 = iVar20;
            iVar20 = local_1a0;
            iVar21 = iVar6 - local_148;
            if (local_1c8 == 0) {
              if (iVar21 != 0) {
                plVar10 = (longlong *)((longlong)local_148 * 0x10 + 8 + local_1c0[0x93]);
                do {
                  plVar16 = (longlong *)*plVar10;
                  if (plVar16 != (longlong *)0x0) {
                    LOCK();
                    plVar9 = plVar16 + 1;
                    lVar11 = *plVar9;
                    *(int *)plVar9 = (int)*plVar9 + -1;
                    UNLOCK();
                    if ((int)lVar11 == 1) {
                      (**(code **)*plVar16)(plVar16);
                      LOCK();
                      piVar23 = (int *)((longlong)plVar16 + 0xc);
                      iVar20 = *piVar23;
                      *piVar23 = *piVar23 + -1;
                      UNLOCK();
                      if (iVar20 == 1) {
                        (**(code **)(*plVar16 + 8))(plVar16,1);
                      }
                    }
                  }
                  plVar10 = plVar10 + 2;
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
              }
            }
            else {
              if (local_1a0 != local_148) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)local_1a0 * 0x10 + plVar16[0x93]),
                           (void *)((longlong)local_148 * 0x10 + plVar16[0x93]),
                           (longlong)iVar21 << 4);
              }
              local_1a0 = iVar20 + iVar21;
            }
            bVar25 = local_1c8 ^ 1;
            plVar16 = local_1c0;
          } while (lVar14 < local_f8);
          plVar10 = local_1c0 + 0x9e;
          *(int *)(local_1c0 + 0x94) = local_1a0;
          plVar9 = local_120;
          local_1c8 = bVar25;
        }
        plVar16 = local_1c0;
        lVar24 = (**(code **)(*local_1c0 + 0x148))(local_1c0);
        if (((lVar24 != 0) && ((*(uint *)(lVar24 + 0x830) >> 2 & 1) != 0)) ||
           (cVar5 = FUN_140bca1f0(plVar16,plVar9,1), cVar5 == '\0')) {
          uVar19 = local_170;
          lVar24 = (longlong)(int)local_170;
          iVar6 = (int)local_170 + 1;
          local_170 = CONCAT44(local_170._4_4_,iVar6);
          if (local_170._4_4_ < iVar6) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_178,uVar19 & 0xffffffff);
          }
          plVar13 = (longlong *)(lVar24 * 0x10 + local_178);
          *plVar13 = *plVar9;
          lVar24 = plVar9[1];
          plVar13[1] = lVar24;
          if (lVar24 != 0) {
            LOCK();
            *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
            UNLOCK();
          }
          if (CONCAT44(uStack_18c,uStack_190) != 0) {
            LOCK();
            piVar23 = (int *)(CONCAT44(uStack_18c,uStack_190) + 8);
            *piVar23 = *piVar23 + 1;
            UNLOCK();
          }
          plVar13 = (longlong *)CONCAT44(uStack_194,local_198);
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x48))(plVar13,plVar9);
          }
          if (CONCAT44(uStack_18c,uStack_190) != 0) {
            LOCK();
            piVar23 = (int *)(CONCAT44(uStack_18c,uStack_190) + 8);
            iVar6 = *piVar23;
            *piVar23 = *piVar23 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              puVar7 = (undefined8 *)CONCAT44(uStack_18c,uStack_190);
              (**(code **)*puVar7)(puVar7);
              LOCK();
              piVar23 = (int *)((longlong)puVar7 + 0xc);
              iVar6 = *piVar23;
              *piVar23 = *piVar23 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*(longlong *)CONCAT44(uStack_18c,uStack_190) + 8))
                          ((longlong *)CONCAT44(uStack_18c,uStack_190),1);
              }
            }
          }
          if (local_138 != (longlong *)0x0) {
            local_128 = 0x11f;
            (**(code **)(*local_138 + 0x2f8))(local_138,0x11f,plVar9);
          }
          plVar8 = (longlong *)plVar16[0x9d];
          lVar24 = plVar16[0x9c];
          plVar13 = plVar8 + 1;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)plVar13 = (int)*plVar13 + 1;
            UNLOCK();
          }
          if ((*(char *)(lVar24 + 0x10) == '\x04') &&
             (*(longlong *)(local_110 + 0xc0) == DAT_14686a160)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          uVar22 = local_1b8 & 0xfffffffb;
          local_1b8 = uVar22;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            lVar24 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar24 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar23 = (int *)((longlong)plVar8 + 0xc);
              iVar6 = *piVar23;
              *piVar23 = *piVar23 + -1;
              UNLOCK();
              if ((iVar6 == 1) && (plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if (bVar2) {
            uStack_150 = (longlong *)plVar9[1];
            local_158 = (longlong *)*plVar9;
            if (uStack_150 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_150 + 1) = (int)uStack_150[1] + 1;
              UNLOCK();
            }
            if (local_158 != (longlong *)0x0) {
              plVar13 = (longlong *)(**(code **)(*local_158 + 8))(local_158,local_90);
              lVar24 = *plVar13;
              plVar13 = (longlong *)(**(code **)(*plVar16 + 0x338))(plVar16,local_88);
              if (lVar24 != *plVar13) {
                plVar13 = (longlong *)*plVar9;
                plVar8 = (longlong *)FName::FName(local_b0,L"SPARK",1);
                plVar13 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13,local_a8);
                if (*plVar13 == *plVar8) {
                  lVar24 = FUN_140b95f90();
                }
                else {
                  lVar24 = FUN_140b95e30(plVar16 + 0x9e);
                }
                plVar16 = uStack_150;
                if (lVar24 == 0) {
                  plVar8 = (longlong *)0x0;
                  local_f0 = (longlong *)0x0;
                  plVar13 = (longlong *)0x0;
                  uVar12 = 0x10;
                }
                else {
                  plVar13 = *(longlong **)(lVar24 + 0x38);
                  plVar8 = *(longlong **)(lVar24 + 0x30);
                  if (plVar13 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                    UNLOCK();
                  }
                  uVar12 = 8;
                  local_e8 = plVar13;
                }
                plVar4 = local_e8;
                plVar3 = local_f0;
                uVar22 = uVar22 | uVar12;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                  UNLOCK();
                }
                local_108._0_4_ = SUB84(plVar8,0);
                local_58 = (undefined4)local_108;
                local_108._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
                uStack_54 = local_108._4_4_;
                uStack_100._0_4_ = SUB84(plVar13,0);
                uStack_50 = (undefined4)uStack_100;
                uStack_100._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
                uStack_4c = uStack_100._4_4_;
                local_108 = local_158;
                uStack_100 = uStack_150;
                local_1b8 = uVar22;
                local_158 = plVar8;
                if (uStack_150 != (longlong *)0x0) {
                  LOCK();
                  plVar8 = uStack_150 + 1;
                  lVar24 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar24 == 1) {
                    puVar7 = (undefined8 *)*uStack_150;
                    uStack_150 = plVar13;
                    (*(code *)*puVar7)(plVar16);
                    LOCK();
                    piVar23 = (int *)((longlong)plVar16 + 0xc);
                    iVar6 = *piVar23;
                    *piVar23 = *piVar23 + -1;
                    UNLOCK();
                    plVar13 = uStack_150;
                    if (iVar6 == 1) {
                      (**(code **)(*uStack_100 + 8))(uStack_100,1);
                      plVar13 = uStack_150;
                    }
                  }
                }
                uStack_150 = plVar13;
                if (((uVar22 & 0x10) != 0) &&
                   (uVar22 = uVar22 & 0xffffffef, local_1b8 = uVar22, plVar3 != (longlong *)0x0)) {
                  LOCK();
                  plVar16 = plVar3 + 1;
                  lVar24 = *plVar16;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)lVar24 == 1) {
                    (**(code **)*plVar3)(plVar3);
                    LOCK();
                    piVar23 = (int *)((longlong)plVar3 + 0xc);
                    iVar6 = *piVar23;
                    *piVar23 = *piVar23 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar3 + 8))(plVar3,1);
                    }
                  }
                }
                if (((uVar22 & 8) != 0) &&
                   (local_1b8 = uVar22 & 0xfffffff7, plVar4 != (longlong *)0x0)) {
                  LOCK();
                  plVar16 = plVar4 + 1;
                  lVar24 = *plVar16;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)lVar24 == 1) {
                    (**(code **)*plVar4)(plVar4);
                    LOCK();
                    piVar23 = (int *)((longlong)plVar4 + 0xc);
                    iVar6 = *piVar23;
                    *piVar23 = *piVar23 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar4 + 8))(plVar4,1);
                    }
                  }
                }
              }
            }
            local_78 = (undefined4)local_158;
            uStack_74 = local_158._4_4_;
            uStack_70 = (undefined4)uStack_150;
            uStack_6c = uStack_150._4_4_;
            if (uStack_150 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_150 + 1) = (int)uStack_150[1] + 1;
              UNLOCK();
            }
            FUN_140c236f0(1,2,&local_78);
            plVar16 = uStack_150;
            if (uStack_150 != (longlong *)0x0) {
              LOCK();
              plVar13 = uStack_150 + 1;
              lVar24 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*uStack_150)(uStack_150);
                LOCK();
                piVar23 = (int *)((longlong)plVar16 + 0xc);
                iVar6 = *piVar23;
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*uStack_150 + 8))(uStack_150,1);
                }
              }
            }
          }
        }
        local_e0 = plVar9;
        FUN_140b96620(plVar10);
        plVar9 = plVar9 + 2;
        plVar16 = local_140;
        local_120 = plVar9;
      } while (plVar9 != local_d8);
    }
    plVar13 = local_1b0 + (longlong)(int)local_1a8 * 2;
    plVar10 = local_1c0;
    plVar9 = local_140;
    for (plVar16 = local_1b0; local_1c0 = plVar10, local_140 = plVar9, plVar16 != plVar13;
        plVar16 = plVar16 + 2) {
      lVar24 = *plVar16;
      if (lVar24 != 0) {
        plVar10 = (longlong *)plVar16[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        lVar11 = plVar9[1];
        iVar6 = (int)lVar11 + 1;
        *(int *)(plVar9 + 1) = iVar6;
        if (*(int *)((longlong)plVar9 + 0xc) < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9);
        }
        plVar9 = (longlong *)((longlong)(int)lVar11 * 0x10 + *plVar9);
        *plVar9 = lVar24;
        plVar9[1] = (longlong)plVar10;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar10 + 1;
          lVar24 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar23 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar23;
            *piVar23 = *piVar23 + -1;
            UNLOCK();
            if ((iVar6 == 1) && (plVar10 != (longlong *)0x0)) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        plVar10 = local_1c0;
        lVar24 = (**(code **)(*local_1c0 + 0x148))(local_1c0);
        if ((lVar24 != 0) && ((*(uint *)(lVar24 + 0x830) >> 2 & 1) != 0)) {
          plVar9 = (longlong *)plVar16[1];
          lVar24 = *plVar16;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          lVar11 = (longlong)(int)local_180;
          iVar6 = (int)local_180 + 1;
          local_180 = CONCAT44(local_180._4_4_,iVar6);
          if (local_180._4_4_ < iVar6) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_188);
          }
          plVar8 = (longlong *)(lVar11 * 0x10 + local_188);
          *plVar8 = lVar24;
          plVar8[1] = (longlong)plVar9;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar8 = plVar9 + 1;
            lVar24 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar24 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar23 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar23;
              *piVar23 = *piVar23 + -1;
              UNLOCK();
              if ((iVar6 == 1) && (plVar9 != (longlong *)0x0)) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
            }
          }
          if ((CONCAT44(uStack_194,local_198) != 0) && ((char)plVar10[0x238] == '\0')) {
            local_d0 = *plVar16;
            local_c8 = (longlong *)plVar16[1];
            if (local_c8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
              UNLOCK();
            }
            local_68 = local_198;
            uStack_64 = uStack_194;
            uStack_60 = uStack_190;
            uStack_5c = uStack_18c;
            if (CONCAT44(uStack_18c,uStack_190) != 0) {
              LOCK();
              piVar23 = (int *)(CONCAT44(uStack_18c,uStack_190) + 8);
              *piVar23 = *piVar23 + 1;
              UNLOCK();
            }
            FUN_140be6cf0(plVar10,&local_68,&local_d0);
            plVar9 = local_c8;
            if (local_c8 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_c8 + 1;
              lVar24 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*local_c8)(local_c8);
                LOCK();
                piVar23 = (int *)((longlong)plVar9 + 0xc);
                iVar6 = *piVar23;
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
              }
            }
            iVar6 = (**(code **)(*(longlong *)CONCAT44(uStack_194,local_198) + 0xe8))();
            if (iVar6 == 4) {
              FUN_140bee090(plVar10);
            }
          }
          if (local_138 != (longlong *)0x0) {
            local_c0 = *plVar16;
            local_b8 = (longlong *)plVar16[1];
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
              UNLOCK();
            }
            local_118 = 0x11f;
            (**(code **)(*local_138 + 0x2d0))(local_138,0x11f,&local_c0);
            plVar9 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_b8 + 1;
              lVar24 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar23 = (int *)((longlong)plVar9 + 0xc);
                iVar6 = *piVar23;
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
              }
            }
          }
          if (local_1c7 == '\0') {
            plVar9 = (longlong *)plVar16[1];
            lVar24 = *plVar16;
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            lVar11 = plVar10[0x94];
            iVar6 = (int)lVar11 + 1;
            *(int *)(plVar10 + 0x94) = iVar6;
            if (*(int *)((longlong)plVar10 + 0x4a4) < iVar6) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10 + 0x93);
            }
            plVar10 = (longlong *)((longlong)(int)lVar11 * 0x10 + plVar10[0x93]);
            *plVar10 = lVar24;
            plVar10[1] = (longlong)plVar9;
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              LOCK();
              plVar10 = plVar9 + 1;
              lVar24 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar23 = (int *)((longlong)plVar9 + 0xc);
                iVar6 = *piVar23;
                *piVar23 = *piVar23 + -1;
                UNLOCK();
                if ((iVar6 == 1) && (plVar9 != (longlong *)0x0)) {
                  (**(code **)(*plVar9 + 8))(plVar9);
                }
              }
            }
          }
        }
      }
      plVar10 = local_1c0;
      plVar9 = local_140;
    }
    if (*(longlong *)(local_110 + 0xc0) == DAT_14686a160) {
      lVar11 = (longlong)(int)local_170 * 0x10 + local_178;
      for (lVar24 = local_178; lVar24 != lVar11; lVar24 = lVar24 + 0x10) {
        FUN_140bd8880(plVar10);
      }
      lVar11 = (longlong)(int)local_180 * 0x10 + local_188;
      for (lVar24 = local_188; lVar24 != lVar11; lVar24 = lVar24 + 0x10) {
        FUN_140bd86d0(plVar10);
      }
    }
    param_1 = local_1c0;
    lVar24 = (**(code **)(*local_1c0 + 0x148))(local_1c0);
    if (((lVar24 != 0) && ((*(uint *)(lVar24 + 0x830) >> 2 & 1) != 0)) && (param_1[0x21a] != 0)) {
      FUN_140dd0ed0();
    }
    FUN_140bf3c30(param_1);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_188);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_178);
    plVar10 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_130 + 1;
      lVar24 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar23 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_130 + 8))();
        }
      }
    }
    if (CONCAT44(uStack_18c,uStack_190) != 0) {
      LOCK();
      piVar23 = (int *)(CONCAT44(uStack_18c,uStack_190) + 8);
      iVar6 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        puVar7 = (undefined8 *)CONCAT44(uStack_18c,uStack_190);
        (**(code **)*puVar7)(puVar7);
        LOCK();
        piVar23 = (int *)((longlong)puVar7 + 0xc);
        iVar6 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*(longlong *)CONCAT44(uStack_18c,uStack_190) + 8))();
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_168);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_1b0);
  }
  else if ((lVar24 == DAT_14686a178) || (lVar24 == DAT_14686a180)) {
    FUN_140bf3dd0(param_1);
  }
  lVar11 = 0;
  *(undefined1 *)((longlong)param_1 + 0xbae) = 1;
  lVar24 = param_1[0x212];
  if (param_1[0x212] == 0) {
    _Dst = (void *)operator_new(0x270);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x270);
      lVar11 = FUN_140b99d60(_Dst);
    }
    param_1[0x212] = lVar11;
    lVar24 = lVar11;
  }
  FUN_140d9f600(lVar24,10);
  FUN_140bf5100(param_1);
  return;
}



// FUNCTION 140bd0570 FUN_140bd0570 body=109 status=ok
// SIG undefined FUN_140bd0570(void)

void FUN_140bd0570(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc0) == DAT_14686a168)) {
    plVar1 = (longlong *)param_1[0x15d];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x100))(plVar1,param_1 + 0x1ec);
    }
    if (param_1[0x8c] != 0) {
      (**(code **)(*param_1 + 0x388))(param_1,(int)param_1[0x8e],param_3);
    }
  }
  return;
}



// FUNCTION 140bd05e0 FUN_140bd05e0 body=390 status=ok
// SIG undefined FUN_140bd05e0(void)

void FUN_140bd05e0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  uVar5 = FUN_140dbc5d0(param_1 + 0xbe,local_res8);
  cVar3 = FUN_140bec900(param_1,uVar5);
  if (((cVar3 != '\0') && (param_1[0x9c] != 0)) && (*(char *)(param_1[0x9c] + 0x10) == '\0')) {
    uVar8 = 0;
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar4 = uVar8;
    if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
      lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar6 != 0) {
        lVar6 = UWorld::GetGameState<APVPGameState>(lVar6);
        if (lVar6 != 0) {
          cVar3 = FUN_1407c3030(lVar6 + 0x670);
          if (cVar3 != '\0') {
            uVar4 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar6 + 0x670);
          }
        }
      }
    }
    else {
      lVar6 = FUN_14244f490(param_1,0);
      uVar4 = 0;
      if (lVar6 != 0) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        uVar4 = uVar8;
        if (bVar2) {
          lVar6 = FUN_140cfbfb0(lVar6);
          if (lVar6 != 0) {
            cVar3 = FWebMMovieStreamer::IsLastMovieInPlaylist();
            if (cVar3 == '\0') {
              iVar1 = *(int *)(lVar6 + 0x140);
              if ((iVar1 < 0) || (*(int *)(lVar6 + 0x2c0) <= iVar1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                uVar4 = *(undefined4 *)(*(longlong *)(lVar6 + 0x2b8) + 4 + (longlong)iVar1 * 0xc);
              }
            }
          }
        }
      }
    }
    FUN_140dbb710(local_18);
    FUN_140befb30(param_1,local_18,1,uVar4);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140bd0770 FUN_140bd0770 body=243 status=ok
// SIG undefined FUN_140bd0770(void)

void FUN_140bd0770(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  uint uStackX_14;
  
  if (param_2 == 0) {
    return;
  }
  bVar9 = false;
  if (*(longlong *)(param_2 + 0xc0) != DAT_14686a180) {
    return;
  }
  if (1 < param_3 - 3U) {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar6 == '\0') {
    plVar8 = (longlong *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
    plVar8 = *(longlong **)(lVar7 + 0x4e8);
    uVar4 = *(undefined8 *)(lVar7 + 0x4e0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    cVar6 = FUN_140678610(uVar4);
    if (cVar6 == '\0') {
      bVar5 = true;
      goto LAB_140bd0800;
    }
  }
  bVar5 = false;
LAB_140bd0800:
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (bVar5) {
    FUN_140bf6260(param_1);
    TBaseMulticastDelegate<void>::Broadcast(param_1);
  }
  return;
}



// FUNCTION 140bd0870 FUN_140bd0870 body=904 status=ok
// SIG undefined FUN_140bd0870(void)

void FUN_140bd0870(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [8];
  longlong local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  plVar5 = (longlong *)FName::FName(local_res18,&DAT_1442e935c,1);
  if (((param_3 == *plVar5) && (*(longlong *)(param_1 + 0xb50) != 0)) &&
     (*(longlong *)(param_1 + 0xb60) != 0)) {
    puVar6 = (undefined8 *)FName::FName(local_18,L"SPARK",1);
    Online::GetSessionInterface(&local_88,*puVar6);
    if (local_88 != (longlong *)0x0) {
      local_68 = *(undefined8 *)(param_1 + 0xb60);
      local_60 = *(longlong **)(param_1 + 0xb68);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_140bbc6f0(param_1,&local_98,&local_68);
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
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (local_98 != 0) {
        local_28 = local_98;
        plStack_20 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
          UNLOCK();
        }
        local_58 = *(undefined8 *)(param_1 + 0xb50);
        local_50 = *(longlong **)(param_1 + 0xb58);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        (**(code **)(*local_88 + 0x168))(local_88,&local_58,&local_28);
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
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_20)(plStack_20);
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
        puVar6 = (undefined8 *)FName::FName(local_10,L"SPARK",1);
        FUN_140bbd560(&local_78,*puVar6);
        if (local_78 != (longlong *)0x0) {
          local_38 = *(undefined8 *)(param_1 + 0xb60);
          local_30 = *(longlong **)(param_1 + 0xb68);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_30 + 1) = (int)local_30[1] + 1;
            UNLOCK();
          }
          local_48 = *(undefined8 *)(param_1 + 0xb50);
          local_40 = *(longlong **)(param_1 + 0xb58);
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          (**(code **)(*local_78 + 0x90))(local_78,&local_48,&local_38,0);
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
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
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
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
        plVar5 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
            }
          }
        }
      }
      plVar5 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_90 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
    }
    plVar5 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bd0c00 FUN_140bd0c00 body=295 status=ok
// SIG undefined FUN_140bd0c00(void)

undefined8 FUN_140bd0c00(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x830) >> 2 & 1) == 0)) {
    local_18 = 0;
    local_10 = 0;
    FUN_140bb7680(param_1,&local_18);
    lVar5 = (longlong)(int)local_10 * 0x10 + local_18;
    for (lVar2 = local_18; lVar2 != lVar5; lVar2 = lVar2 + 0x10) {
      lVar3 = FUN_140bbb8d0(param_1,lVar2);
      if (lVar3 != 0) {
        lVar4 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(char *)(lVar3 + 0x5f4) != '\0')) {
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
          return 1;
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_18);
  }
  else {
    lVar2 = param_1[0x9e];
    lVar5 = (longlong)(int)param_1[0x9f] * 0x118 + lVar2;
    for (; lVar2 != lVar5; lVar2 = lVar2 + 0x118) {
      if (*(char *)(lVar2 + 0x5d) != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140bd0d30 FUN_140bd0d30 body=772 status=ok
// SIG undefined FUN_140bd0d30(void)

void FUN_140bd0d30(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined **local_78 [2];
  longlong *local_68;
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if ((*(int *)(param_1 + 0x11e8) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x11e0), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 0x11e0) != 0) {
      uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x11e0),0,0);
      *(undefined8 *)(param_1 + 0x11e0) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x11e8) = 0;
  }
  if (*param_2 == 0) {
    if ((*(char *)(param_1 + 0x318) != '\0') && (*(int *)(param_1 + 0x300) == 2)) {
      FUN_140beb420(param_1,param_1 + 0x220);
      return;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x318) != '\0') && (lVar6 = *(longlong *)(param_1 + 0x228), lVar6 != 0)
       ) {
      local_80 = *(longlong *)(param_1 + 0x230);
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      local_88 = lVar6;
      lVar6 = FUN_14244c070(param_1,&local_88);
      if (lVar6 == 0) {
        lVar6 = FUN_142b45e90();
        uVar5 = *(undefined8 *)(lVar6 + 0x18);
        local_b8 = *(undefined8 *)(param_1 + 0x228);
        local_b0 = *(longlong **)(param_1 + 0x230);
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
          UNLOCK();
        }
        FUN_142b41880(uVar5,&local_b8);
        plVar4 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_b0)(local_b0);
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
        local_a8 = *(undefined8 *)(param_1 + 0x228);
        local_a0 = *(longlong **)(param_1 + 0x230);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
        }
        FUN_142b41f30(uVar5,&local_a8);
        plVar4 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_a0)(local_a0);
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
    FUN_140beaf50(param_1,4);
    uVar5 = FUN_140dbb910(param_2,local_40);
    FUN_140b999a0(local_78,uVar5);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_res8,0);
    FWeakObjectPtr::operator=(local_res10,0);
    FWeakObjectPtr::operator=(local_98,0);
    local_90 = 0;
    FUN_140c23780(2,local_78,local_98,local_res10,local_res8,2);
    local_78[0] = &PTR_FUN_1443170a0;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_68 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bd1040 FUN_140bd1040 body=127 status=ok
// SIG undefined FUN_140bd1040(void)

void FUN_140bd1040(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x11e8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x11e0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x11e0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x11e0),0,0);
      *(undefined8 *)(param_1 + 0x11e0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x11e8) = 0;
  }
  *(undefined1 *)(param_1 + 0xd73) = 0;
  FUN_140ba43c0(param_1,param_1 + 0xd71,*(undefined1 *)(param_1 + 0xd70),param_2);
  return;
}



// FUNCTION 140bd10c0 FUN_140bd10c0 body=105 status=ok
// SIG undefined FUN_140bd10c0(void)

void FUN_140bd10c0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x11e8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x11e0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x11e0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x11e0),0,0);
      *(undefined8 *)(param_1 + 0x11e0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x11e8) = 0;
  }
  FUN_140bab1e0(param_1,param_2);
  return;
}



// FUNCTION 140bd1130 FUN_140bd1130 body=181 status=ok
// SIG undefined FUN_140bd1130(void)

void FUN_140bd1130(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined4 local_28 [2];
  undefined8 local_20;
  longlong *local_18;
  
  local_28[0] = *param_2;
  local_20 = *(undefined8 *)(param_2 + 2);
  local_18 = *(longlong **)(param_2 + 4);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x11f8) = 0;
  if ((*(int *)(param_1 + 0x11e8) != 0) && (*(longlong **)(param_1 + 0x11e0) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x11e0) + 0x18))();
    if (cVar5 != '\0') {
      if (*(int *)(param_1 + 0x11e8) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x11e0);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,local_28);
    }
  }
  plVar6 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
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
  return;
}



// FUNCTION 140bd1210 FUN_140bd1210 body=44 status=ok
// SIG undefined FUN_140bd1210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd1210(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_128 [32];
  longlong *plStack_108;
  longlong *plStack_100;
  longlong lStack_f8;
  longlong *plStack_f0;
  longlong alStack_e8 [2];
  longlong *plStack_d8;
  int iStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_a8;
  longlong *plStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 *apuStack_88 [2];
  longlong alStack_78 [4];
  longlong *plStack_58;
  int iStack_48;
  ulonglong uStack_38;
  
  lVar8 = *(longlong *)(param_1 + 0x4e0);
  if (lVar8 == 0) {
    return;
  }
  if (param_2 == '\a') {
    FUN_140db3670(lVar8,9);
    return;
  }
  if (1 < (byte)(*(char *)(lVar8 + 0x10) - 1U)) {
    return;
  }
  uStack_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plStack_58 = (longlong *)0x0;
  iStack_48 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,alStack_78);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = lVar8;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  alStack_e8[0] = 0;
  apuStack_88[0] = &LAB_140db2a60;
  alStack_e8[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_e8,0);
  FGenericPlatformString::Memcpy(alStack_e8[0],L"backup_matchmaking",0x26);
  FUN_140dcdc50(lVar8,alStack_e8,apuStack_88);
  if (alStack_e8[0] != 0) {
    FMemory::Free();
  }
  if (iStack_48 != 0) {
    plVar10 = alStack_78;
    if (plStack_58 != (longlong *)0x0) {
      plVar10 = plStack_58;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (plStack_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar8 + 0x3b8) != 0) {
    return;
  }
  cVar3 = FWeakObjectPtr::IsValid(lVar8 + 0x14);
  if (cVar3 != '\0') {
    uVar6 = FWeakObjectPtr::Get(lVar8 + 0x14);
    cVar3 = FUN_140bc9f60(uVar6);
    if (cVar3 != '\0') {
      return;
    }
  }
  lVar7 = FWeakObjectPtr::Get(lVar8 + 0x14);
  FUN_1404c9880(*(undefined8 *)(lVar7 + 0xae8),DAT_14686f220);
  lVar7 = FWeakObjectPtr::Get(lVar8 + 0x14);
  FUN_1404c9880(*(undefined8 *)(lVar7 + 0xae8),DAT_14686f228);
  FUN_140db2e80(lVar8 + 0x2d8);
  puVar5 = (undefined8 *)FName::FName(auStack_98,L"SPARK",1);
  FUN_1404d0c50(&plStack_108,*puVar5);
  FUN_140db5aa0(lVar8);
  FUN_140db5980(lVar8);
  FUN_140db5ba0(lVar8);
  plVar10 = plStack_108;
  if (plStack_108 != (longlong *)0x0) {
    (**(code **)(*plStack_108 + 0x40))(plStack_108,lVar8 + 0xb8);
    (**(code **)(*plVar10 + 0x1b8))(plVar10,lVar8 + 0x390);
    (**(code **)(*plVar10 + 0x360))(plVar10,lVar8 + 0x1f8);
    (**(code **)(*plVar10 + 0xe0))(plVar10,lVar8 + 0x1e8);
    (**(code **)(*plVar10 + 0x168))(plVar10,lVar8 + 0x1f0);
    iVar4 = (**(code **)(*plVar10 + 0x3a8))(plVar10);
    if ((iVar4 == 1) && (iVar4 = (**(code **)(*plVar10 + 0x378))(plVar10), iVar4 != 0)) {
      FUN_140dbc950(lVar8,&lStack_f8);
      plVar9 = plStack_f0;
      if (lStack_f8 != 0) {
        lStack_a8 = lStack_f8;
        plStack_a0 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
          plVar10 = plStack_108;
        }
        (**(code **)(*plVar10 + 0x380))(plVar10,&lStack_a8);
        plVar2 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_a0 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          plVar9 = plStack_f0;
          plVar10 = plStack_108;
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = plStack_f0;
            plVar10 = plStack_108;
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
              plVar9 = plStack_f0;
              plVar10 = plStack_108;
            }
          }
        }
      }
      plVar2 = plStack_f0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar9 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        plVar10 = plStack_108;
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar10 = plStack_108;
          if (iVar4 == 1) {
            (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
            plVar10 = plStack_108;
          }
        }
      }
    }
    uStack_c8 = 0x120;
    lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x120);
    if (lVar7 != 0) {
      lVar7 = *plVar10;
      uVar6 = FUN_140da5ad0(&plStack_d8,lVar8,FUN_140dc5ae0);
      puVar5 = (undefined8 *)(**(code **)(lVar7 + 0xd8))(plVar10,auStack_90,uVar6);
      *(undefined8 *)(lVar8 + 0x3b8) = *puVar5;
      if (iStack_d0 == 0) {
LAB_140db28d3:
        if (plStack_d8 != (longlong *)0x0) {
          FMemory::Free(plStack_d8);
        }
      }
      else if (plStack_d8 != (longlong *)0x0) {
        (**(code **)(*plStack_d8 + 0x28))(plStack_d8,0);
        if (plStack_d8 != (longlong *)0x0) {
          plStack_d8 = (longlong *)FMemory::Realloc(plStack_d8,0,0);
        }
        iStack_d0 = 0;
        goto LAB_140db28d3;
      }
      uStack_c0 = 0x120;
      (**(code **)(*plVar10 + 0xd0))(plVar10,0x120);
      goto LAB_140db2918;
    }
  }
  uStack_b8 = 0x120;
  FUN_140dc5ae0(lVar8,0x120,1);
LAB_140db2918:
  cVar3 = FUN_140bca8a0(*(undefined8 *)(lVar8 + 0x88));
  if (cVar3 == '\0') {
    lVar8 = FUN_140dbbc10(lVar8 + 0x88);
    if (lVar8 != 0) {
      FUN_141426000(lVar8);
    }
  }
  else {
    lVar8 = FUN_140bb7870(*(undefined8 *)(lVar8 + 0x88));
    if (lVar8 != 0) {
      FUN_140dd4640(lVar8);
    }
  }
  plVar10 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_100 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd1230 FUN_140bd1230 body=178 status=ok
// SIG undefined FUN_140bd1230(void)

void FUN_140bd1230(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_48 [8];
  undefined **local_40;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  plVar1 = (longlong *)FName::FName(local_48,&DAT_1442f6190,1);
  if (param_3 == *plVar1) {
    FUN_140be3520(param_1);
    FUN_140ba8040(param_1);
    FUN_140be97d0(param_1);
    uVar2 = FUN_1404b03b0();
    uVar3 = FUN_1404b03b0();
    local_40 = &PTR_FUN_1443170a0;
    FText::FText(local_38,uVar3);
    FText::FText(local_20,uVar2);
    local_40 = &PTR_FUN_1443170a0;
    FUN_140bb5710(param_1,&local_40);
    FUN_140b9cdd0(&local_40);
  }
  return;
}



// FUNCTION 140bd12f0 FUN_140bd12f0 body=177 status=ok
// SIG undefined FUN_140bd12f0(void)

void FUN_140bd12f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res18 [16];
  
  FUN_140c0e000();
  puVar1 = (undefined8 *)FName::FName(local_res18,L"GbxShiftOverlay",1);
  lVar2 = FModuleManager::GetModulePtr_Internal(*puVar1);
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)FName::FName(local_res18,L"GbxShiftOverlay",1);
    plVar3 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
    (**(code **)(*plVar3 + 0xb8))(plVar3,DAT_14686a658);
  }
  plVar3 = (longlong *)FName::FName(local_res18,&DAT_1442e8b64,1);
  if (param_3 == *plVar3) {
    FUN_140ba8040(param_1);
    FUN_140bf2810(param_1);
    TSet<TTuple<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget_const_,0>,TSharedPtr<FMenuBase,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0xea0,0);
  }
  return;
}



// FUNCTION 140bd13b0 FUN_140bd13b0 body=704 status=ok
// SIG undefined FUN_140bd13b0(void)

void FUN_140bd13b0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_1[0x1de] == 0) {
    return;
  }
  if (param_1[0x1e0] == 0) {
    return;
  }
  plVar3 = (longlong *)FName::FName(local_78,&DAT_1442e988c,1);
  if (param_3 != *plVar3) {
    return;
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)param_1[0x1e0] + 8))((longlong *)param_1[0x1e0],local_70);
  FUN_1404d0c50(&local_50,*puVar4);
  plVar3 = local_50;
  if (local_50 == (longlong *)0x0) goto LAB_140bd15f1;
  if (param_1[0x1e2] == 0) {
    local_30 = FUN_140bd2db0;
    uStack_28 = (longlong *)((ulonglong)uStack_28 & 0xffffffff00000000);
    local_60 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_58 = 3;
    local_60 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_144319458;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_30;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_30._4_4_;
      *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_28;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_28._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_1443194a0;
    }
    plVar5 = (longlong *)(**(code **)(*plVar3 + 0x188))(plVar3,local_68,&local_60);
    param_1[0x1e2] = *plVar5;
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_140bd1529;
      (**(code **)(*local_60 + 0x28))(local_60,0);
      if (local_60 != (longlong *)0x0) {
        local_60 = (longlong *)FMemory::Realloc(local_60,0,0);
      }
      local_58 = 0;
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
  }
LAB_140bd1529:
  local_30 = (code *)param_1[0x1e0];
  uStack_28 = (longlong *)param_1[0x1e1];
  if (uStack_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_28 + 1) = (int)uStack_28[1] + 1;
    UNLOCK();
    plVar3 = local_50;
  }
  local_40 = param_1[0x1de];
  local_38 = (longlong *)param_1[0x1df];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + 0x180))(plVar3,&local_40,&local_30);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_38)(local_38);
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
  plVar3 = uStack_28;
  if (uStack_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = uStack_28 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_28)(uStack_28);
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
LAB_140bd15f1:
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar6 != 0) && ((*(uint *)(lVar6 + 0x830) >> 2 & 1) != 0)) &&
     (lVar6 = FUN_140bb89c0(param_1), lVar6 != 0)) {
    FUN_141105d40(lVar6,0);
  }
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd1670 FUN_140bd1670 body=702 status=ok
// SIG undefined FUN_140bd1670(void)

void FUN_140bd1670(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 local_res18 [8];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  plVar6 = (longlong *)FName::FName(local_res18,&DAT_1442e9624,1);
  if (param_3 != *plVar6) {
    return;
  }
  lVar7 = FUN_140bb7870(param_1);
  if (lVar7 != 0) {
    iVar5 = FUN_1404cc400(lVar7,param_1 + 0x165);
    if (iVar5 != -1) {
LAB_140bd17eb:
      FUN_1404d60e0(lVar7,iVar5,1);
      return;
    }
    lVar9 = param_1[0x166];
    if (lVar9 != 0) {
      local_60 = (longlong *)param_1[0x167];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      local_68 = lVar9;
      FUN_140bbb2b0(param_1,&local_88,&local_68);
      plVar6 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_60)(local_60);
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
      plVar6 = local_80;
      if (local_88 != 0) {
        local_40 = local_88;
        local_38 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
        }
        local_48 = &PTR_FUN_143f740c8;
        local_30 = 0;
        local_28 = 0;
        iVar5 = FUN_1404cc400(lVar7,&local_48);
        FUN_1404bf980(&local_48);
      }
      plVar1 = local_80;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar6 + 1;
        lVar9 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      if (iVar5 != -1) goto LAB_140bd17eb;
    }
  }
  local_58 = param_1[0x166];
  if (local_58 != 0) {
    local_50 = (longlong *)param_1[0x167];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    FUN_140bbb2b0(param_1,&local_78,&local_58);
    plVar6 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_78 != 0) {
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = FUN_142481360(uVar8,local_78);
      if (lVar7 != 0) {
        lVar9 = FUN_14145f370();
        iVar5 = *(int *)(lVar9 + 0x90);
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < iVar5) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)iVar5 * 8)
            != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_14145e000(lVar7,CONCAT71((int7)(int3)((uint)iVar5 >> 8),1));
        }
      }
    }
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bd1930 FUN_140bd1930 body=201 status=ok
// SIG undefined FUN_140bd1930(void)

void FUN_140bd1930(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  uint uStackX_c;
  
  bVar9 = false;
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar6 == '\0') {
    plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
    plVar8 = *(longlong **)(lVar7 + 0x4e8);
    uVar4 = *(undefined8 *)(lVar7 + 0x4e0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    cVar6 = FUN_140678610(uVar4);
    if (cVar6 == '\0') {
      bVar5 = true;
      goto LAB_140bd1996;
    }
  }
  bVar5 = false;
LAB_140bd1996:
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (bVar5) {
    FUN_140bf6260(param_1);
    TBaseMulticastDelegate<void>::Broadcast(param_1);
  }
  return;
}



// FUNCTION 140bd1a00 FUN_140bd1a00 body=205 status=ok
// SIG undefined FUN_140bd1a00(void)

void FUN_140bd1a00(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  puVar6 = (undefined8 *)FName::FName(local_18,L"GbxShiftOverlay",1);
  plVar7 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar6);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7,DAT_14686a658);
    plVar7 = (longlong *)FName::FName(local_10,&DAT_1442ea844,1);
    lVar4 = *(longlong *)(param_1 + 0x1390);
    lVar5 = *plVar7;
    if (lVar4 != 0) {
      plVar7 = *(longlong **)(param_1 + 0x1398);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        FUN_140e2b640(lVar4,param_3 == lVar5);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
  }
  return;
}



// FUNCTION 140bd1ad0 FUN_140bd1ad0 body=107 status=ok
// SIG undefined FUN_140bd1ad0(void)

void FUN_140bd1ad0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FName::FName(local_18,&DAT_1442e87bc,1);
  if (param_3 == *plVar1) {
    lVar3 = UGameInstance::FindLocalPlayerFromControllerId(param_1,*(undefined4 *)(param_4 + 8));
    if (lVar3 != 0) {
      cVar2 = FUN_14254a1f0(lVar3);
      if (cVar2 == '\0') {
        FUN_140bee990(param_1,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140bd1b40 FUN_140bd1b40 body=66 status=ok
// SIG undefined FUN_140bd1b40(void)

void FUN_140bd1b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  cVar1 = FKey::IsGamepadKey(param_4 + 0x10);
  FUN_140bab890(param_1,*(undefined4 *)(param_4 + 8),0,cVar1 == '\0',1,1);
  return;
}



// FUNCTION 140bd1b90 FUN_140bd1b90 body=79 status=ok
// SIG undefined FUN_140bd1b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bd1b90(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bd1bc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140bd1bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140bd1c00 FUN_140bd1c00 body=156 status=ok
// SIG undefined FUN_140bd1c00(void)

void FUN_140bd1c00(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 == 0x11f) {
    FUN_1404d0c50(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x40))(local_18,param_1 + 4);
    }
    (**(code **)(*param_1 + 0x18))(param_1,param_3);
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
  return;
}



// FUNCTION 140bd1ca0 FUN_140bd1ca0 body=754 status=ok
// SIG undefined FUN_140bd1ca0(void)

void FUN_140bd1ca0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  if (param_3 == '\0') {
    lVar6 = FUN_140bb6170();
    if (lVar6 != 0) {
      local_30 = *(undefined8 *)(param_1 + 0x460);
      local_28 = *(longlong **)(param_1 + 0x468);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      local_20 = 0;
      local_38 = &PTR_FUN_143f740c8;
      local_18 = 0;
      uVar8 = FUN_140bb6170(param_1);
      FUN_1404df4c0(uVar8,&local_38);
      local_38 = &PTR_FUN_143f740c8;
      if (local_20 != 0) {
        FMemory::Free();
      }
      plVar4 = local_28;
      local_38 = &PTR_FUN_143f73d18;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
  }
  else {
    lVar6 = UGameInstance::FindLocalPlayerFromControllerId();
    if (lVar6 != 0) {
      iVar5 = *(int *)(param_1 + 0x470);
      if (iVar5 < 0) {
        iVar5 = FUN_140bba230(param_1);
      }
      local_68 = *(undefined8 *)(param_1 + 0x460);
      local_60 = *(longlong **)(param_1 + 0x468);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      FUN_140bec4b0(param_1,lVar6,&local_68,iVar5);
      plVar4 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (lVar6 != 0) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_140d02500(lVar6);
        }
      }
      local_58 = *(undefined8 *)(param_1 + 0x460);
      local_50 = *(longlong **)(param_1 + 0x468);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      FUN_140ba2880(param_1,&local_58);
      plVar4 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    FUN_140ba8250(param_1,0);
  }
  lVar6 = FUN_140bb7870(param_1);
  if (lVar6 != 0) {
    uVar8 = FUN_140bb7870(param_1);
    thunk_FUN_1404d2ae0(uVar8);
  }
  FUN_140bf4500(param_1);
  lVar6 = *(longlong *)(param_1 + 0x1088);
  if (lVar6 == 0) {
    lVar7 = operator_new(0x1a8);
    lVar6 = 0;
    if (lVar7 != 0) {
      lVar6 = FUN_140d64540(lVar7);
    }
    *(longlong *)(param_1 + 0x1088) = lVar6;
  }
  FUN_140d850a0(lVar6,param_1 + 0x460);
  local_48 = *(undefined8 *)(param_1 + 0x460);
  local_40 = *(longlong *)(param_1 + 0x468);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  uVar8 = FUN_140bb7440(param_1);
  FUN_140d9f870(uVar8,&local_48,2);
  uVar8 = FUN_1404b03b0();
  FUN_140baa4e0(param_1,1,uVar8);
  return;
}



// FUNCTION 140bd1fa0 FUN_140bd1fa0 body=883 status=ok
// SIG undefined FUN_140bd1fa0(void)

ulonglong FUN_140bd1fa0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  lVar12 = FUN_140bb7870();
  uVar17 = 0;
  if (lVar12 == 0) goto LAB_140bd2300;
  plVar16 = param_1 + 0xca;
  plVar13 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = (longlong)&PTR_FUN_1442cc120;
    FWeakObjectPtr::operator=(plVar13 + 1,param_1);
    *(undefined4 *)(plVar13 + 2) = 0x40bcec90;
    *(undefined4 *)((longlong)plVar13 + 0x14) = 1;
    *(undefined4 *)(plVar13 + 3) = 0;
    *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_2c;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar13[5] = lVar12;
    *plVar13 = (longlong)&PTR_FUN_1442cc168;
  }
  lVar12 = 0;
  if (plVar13 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar16,1);
    plVar14 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13,local_res8);
    iVar5 = (int)param_1[0xcb];
    lVar18 = (longlong)iVar5;
    lVar12 = *plVar14;
    *(int *)(param_1 + 0xcb) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0x65c) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar5);
    }
    lVar1 = *plVar16;
    *(undefined8 *)(lVar1 + lVar18 * 0x10) = 0;
    *(longlong **)(lVar1 + lVar18 * 0x10) = plVar13;
    *(undefined4 *)(lVar1 + 8 + lVar18 * 0x10) = 3;
  }
  param_1[0x23a] = lVar12;
  cVar3 = FUN_140bb68b0(param_1);
  bVar4 = FUN_140b81c70(param_1);
  uVar15 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar12 = FUN_142f6caf0(uVar15);
  if (lVar12 == 0) {
LAB_140bd2115:
    iVar5 = 0;
  }
  else {
    lVar18 = FUN_142f59790(lVar12);
    if (lVar18 == 0) {
      iVar5 = FUN_142f5a870(lVar12);
      if (iVar5 < 0) goto LAB_140bd2115;
      iVar5 = iVar5 + 1;
    }
    else {
      iVar5 = FUN_142f5e2e0(lVar12,lVar18);
    }
    if (iVar5 < 0) goto LAB_140bd2115;
  }
  lVar12 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar12 == 0) || ((*(uint *)(lVar12 + 0x830) >> 2 & 1) == 0)) {
    plVar16 = (longlong *)FUN_140b823b0(param_1);
    if (plVar16 == (longlong *)0x0) goto LAB_140bd21b4;
    uVar6 = (**(code **)(*plVar16 + 0x408))(plVar16);
  }
  else {
    lVar12 = FUN_14244f490(param_1,0);
    if (lVar12 != 0) {
      lVar18 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar12 = FUN_140cfbfb0(lVar12);
        if (lVar12 != 0) {
          uVar6 = FUN_140c10350(*(undefined4 *)(lVar12 + 0xa0));
          goto LAB_140bd21ba;
        }
      }
    }
LAB_140bd21b4:
    uVar6 = 1;
  }
LAB_140bd21ba:
  lVar12 = FUN_140bb7900(param_1);
  lVar18 = FUN_140bb7870(param_1);
  if (lVar18 == 0) {
    plVar16 = (longlong *)FUN_141424bc0();
    lVar18 = plVar16[0x1f];
    if (lVar18 == 0) {
      (**(code **)(*plVar16 + 0x368))(plVar16);
      lVar18 = plVar16[0x1f];
    }
    iVar7 = FUN_142480900(lVar18);
    iVar8 = FUN_14046e5c0(param_1);
    iVar7 = iVar7 - iVar8;
  }
  else {
    iVar7 = FUN_1404cfa10(lVar18);
  }
  if (lVar12 == 0) {
    plVar16 = (longlong *)FUN_141424bc0();
    lVar12 = plVar16[0x1f];
    if (lVar12 == 0) {
      (**(code **)(*plVar16 + 0x368))(plVar16);
      lVar12 = plVar16[0x1f];
    }
    iVar8 = FUN_142480900(lVar12);
    iVar9 = FUN_14046e5c0(param_1);
    iVar8 = iVar8 - iVar9;
  }
  else {
    iVar8 = FUN_1404cfa10(lVar12);
  }
  plVar16 = (longlong *)FUN_141424bc0();
  lVar12 = plVar16[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar16 + 0x368))(plVar16);
    lVar12 = plVar16[0x1f];
  }
  iVar9 = FUN_142480900(lVar12);
  iVar10 = FUN_140bba270(param_1);
  if (iVar7 <= iVar8) {
    iVar8 = iVar7;
  }
  uVar11 = FUN_140bb9430(param_1);
  if (iVar9 - iVar10 <= iVar8) {
    iVar8 = iVar9 - iVar10;
  }
  uVar17 = FUN_140dd5f80(param_1 + 0xbe,iVar8,uVar6,iVar5,((uint)bVar4 + (uint)bVar4 * 4) * 2,uVar11
                         ,cVar3 == '\x01');
LAB_140bd2300:
  param_1[0x23b] = 0;
  return uVar17 & 0xffffffffffffff00;
}



// FUNCTION 140bd2320 FUN_140bd2320 body=353 status=ok
// SIG undefined FUN_140bd2320(void)

void FUN_140bd2320(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_48 [8];
  longlong *local_40;
  int local_38;
  longlong *local_30;
  longlong *local_28;
  
  FUN_1404d0c50(&local_30,0);
  if (local_30 == (longlong *)0x0) goto LAB_140bd2431;
  local_40 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_38 = 3;
  local_40 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = param_1;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FUN_140bd1c00;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar6 = (undefined8 *)(**(code **)(*local_30 + 0x38))(local_30,local_48,&local_40);
  *(undefined8 *)(param_1 + 0x20) = *puVar6;
  if (local_38 == 0) {
LAB_140bd23ff:
    if (local_40 != (longlong *)0x0) {
      FMemory::Free(local_40);
    }
  }
  else if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x28))(local_40,0);
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)FMemory::Realloc(local_40,0,0);
    }
    local_38 = 0;
    goto LAB_140bd23ff;
  }
  (**(code **)(*local_30 + 0x28))(local_30,param_1 + 0x68,0x11f,param_1 + 0x78);
LAB_140bd2431:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd24b0 FUN_140bd24b0 body=130 status=ok
// SIG undefined FUN_140bd24b0(void)

void FUN_140bd24b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_res10 [24];
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  puVar2 = (undefined2 *)FUN_140dbc5d0(lVar1 + 0x5f0,local_res10);
  *(undefined2 *)(lVar1 + 0x440) = *puVar2;
  lVar1 = *(longlong *)(param_1 + 0x10);
  cVar3 = FUN_140bb68b0(lVar1);
  *(char *)(lVar1 + 0x458) = cVar3;
  *(bool *)(lVar1 + 0x459) = cVar3 == '\x01';
  if (*(longlong *)(lVar1 + 0x1080) != 0) {
    if ((cVar3 == '\0') && (*(char *)(lVar1 + 0xb18) != '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_140d9fcc0(*(longlong *)(lVar1 + 0x1080),uVar4);
  }
  FUN_140bd7420(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 140bd2540 FUN_140bd2540 body=190 status=ok
// SIG undefined FUN_140bd2540(void)

void FUN_140bd2540(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 == 0x11f) {
    FUN_1404d0c50(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x68))(local_18,param_1 + 0x38);
      (**(code **)(*local_18 + 0xb8))(local_18,param_1 + 0x40);
      (**(code **)(*local_18 + 0xe0))(local_18,param_1 + 0x48);
    }
    FUN_140bae420(param_1);
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
  return;
}



// FUNCTION 140bd2600 FUN_140bd2600 body=1156 status=ok
// SIG undefined FUN_140bd2600(void)

void FUN_140bd2600(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  float fVar14;
  longlong *local_res18;
  LARGE_INTEGER local_res20;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined **local_88 [2];
  longlong *local_78;
  longlong local_70;
  longlong *local_60;
  
  uVar12 = 0;
  lVar8 = UGameInstance::GetFirstGamePlayer();
  if (lVar8 == 0) {
    local_res18 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
    plVar13 = (longlong *)0x0;
  }
  else {
    lVar8 = FUN_142547b50(lVar8,local_88);
    plVar13 = *(longlong **)(lVar8 + 0x10);
    local_res18 = *(longlong **)(lVar8 + 8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
  }
  if (bVar4) {
    if (local_res18 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_res18 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_res18)(local_res18);
        LOCK();
        piVar1 = (int *)((longlong)local_res18 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_res18 + 8))(local_res18,1);
        }
      }
    }
  }
  if ((bVar5) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar13 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (bVar6) {
    local_88[0] = &PTR_FUN_143f740c8;
    if (local_70 != 0) {
      FMemory::Free();
    }
    local_88[0] = &PTR_FUN_143f73d18;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_78 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  if ((local_res18 != (longlong *)0x0) &&
     (cVar7 = (*(code *)**(undefined8 **)*param_2)(), cVar7 != '\0')) {
    if ((*(longlong *)(param_1 + 0x1f8) != 0) &&
       (plVar9 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x88))(plVar9,param_1 + 0x12c0);
    }
    lVar8 = FUN_142b45e90();
    uVar3 = *(undefined8 *)(lVar8 + 0x18);
    cVar7 = FUN_142b54910(uVar3,param_2);
    if (cVar7 == '\0') {
      local_e8 = 0;
      local_f0 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d0 = 0;
      FUN_140bb4ac0(param_1,0,&local_100);
      FUN_140b9da90(&local_100);
    }
    else {
      FOnlineSubsystemEOS::GetAchievementsInterface(uVar3,&local_158);
      if (local_158 == 0) {
        local_b0 = 0;
        local_b8 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_98 = 0;
        FUN_140bb4ac0(param_1,0,&local_c8);
        FUN_140b9da90(&local_c8);
      }
      else {
        fVar14 = (float)FUN_142b47b30(local_158,param_2);
        local_130 = 0;
        local_128 = 0;
        local_120 = 0;
        local_118 = 0;
        local_138 = 0.0;
        local_148 = 0;
        uStack_140 = 0;
        cVar7 = FUN_142b496d0(local_158,param_2,&local_148);
        if ((cVar7 == '\0') ||
           (QueryPerformanceCounter(&local_res20),
           (double)fVar14 <= ((double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0) - local_138
           )) {
          lVar8 = local_158;
          local_110 = FUN_140bda1d0;
          uStack_108 = 0;
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          local_60 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_14428ae88;
            FWeakObjectPtr::operator=(plVar9 + 1,param_1);
            *(undefined4 *)(plVar9 + 2) = (undefined4)local_110;
            *(undefined4 *)((longlong)plVar9 + 0x14) = local_110._4_4_;
            *(undefined4 *)(plVar9 + 3) = uStack_108;
            *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_104;
            lVar10 = FDelegateHandle::GenerateNewID();
            plVar9[5] = lVar10;
            *plVar9 = (longlong)&PTR_FUN_14428aed0;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar8 + 0x28,1);
            puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_90);
            iVar2 = *(int *)(lVar8 + 0x30);
            uVar12 = *puVar11;
            *(int *)(lVar8 + 0x30) = iVar2 + 1;
            if (*(int *)(lVar8 + 0x34) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar8 + 0x28,iVar2);
            }
            puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar8 + 0x28));
            *puVar11 = plVar9;
            *(undefined4 *)(puVar11 + 1) = 3;
          }
          *(undefined8 *)(param_1 + 0x12c8) = uVar12;
          FUN_142b641b0(local_158,param_2);
        }
        else {
          FUN_140bb4ac0(param_1,1,&local_148);
        }
        FUN_140b9da90(&local_148);
      }
      if (local_150 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_150 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_150)(local_150);
          LOCK();
          piVar1 = (int *)((longlong)local_150 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_150 + 8))(local_150,1);
          }
        }
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar13 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd2a90 FUN_140bd2a90 body=79 status=ok
// SIG undefined FUN_140bd2a90(void)

void FUN_140bd2a90(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    plVar1 = (longlong *)UUGMenuManager::GetFadeHUD();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0xfe8);
    }
  }
  if (param_2 != '\0') {
    FUN_140be9330(param_1);
  }
  return;
}



// FUNCTION 140bd2ae0 FUN_140bd2ae0 body=713 status=ok
// SIG undefined FUN_140bd2ae0(void)

void FUN_140bd2ae0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar10 = 0;
  if (DAT_14686a050 == 0) {
    uVar6 = thunk_FUN_1422ca050();
    cVar5 = FOutputDevice::CanBeUsedOnAnyThread(uVar6);
    if (cVar5 == '\0') {
      plVar9 = *(longlong **)(param_1 + 0xab8);
      uVar11 = (longlong)*(int *)(param_1 + 0xac0) & 0x1fffffffffffffff;
      if (plVar9 + *(int *)(param_1 + 0xac0) < plVar9) {
        uVar11 = uVar10;
      }
      if (uVar11 != 0) {
        do {
          lVar8 = *plVar9;
          if (lVar8 != 0) {
            local_58 = FUN_140bf5100;
            uStack_50 = 0;
            local_68 = 0;
            local_60 = 0;
            puVar7 = (undefined8 *)operator_new(0x30,&local_68);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(puVar7 + 1,param_1);
              *(undefined4 *)(puVar7 + 2) = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar7 + 0x14) = local_58._4_4_;
              *(undefined4 *)(puVar7 + 3) = uStack_50;
              *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_4c;
              uVar6 = FDelegateHandle::GenerateNewID();
              puVar7[5] = uVar6;
              *puVar7 = &PTR_FUN_143f77bd0;
            }
            uVar6 = thunk_FUN_1422ca050();
            FUN_1409f97d0(uVar6,&local_78,lVar8,&local_68);
            iVar3 = *(int *)(param_1 + 0xd58);
            *(int *)(param_1 + 0xd58) = iVar3 + 1;
            if (*(int *)(param_1 + 0xd5c) < iVar3 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd50,iVar3);
            }
            plVar4 = local_70;
            puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xd50));
            *puVar7 = local_78;
            puVar7[1] = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_70 + 1) = (int)local_70[1] + 1;
              UNLOCK();
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_70 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_70)(local_70);
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
          plVar9 = plVar9 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
      }
      FUN_1416f7d70(0xffffffff);
    }
    else {
      FUN_140bf5100(param_1);
    }
  }
  lVar8 = FUN_140bba540();
  if ((lVar8 != 0) && (cVar5 = FUN_140cba6c0(lVar8), cVar5 == '\0')) {
    FUN_140cc2280(lVar8,1);
  }
  cVar5 = FUN_140becb30(param_1);
  if (((cVar5 != '\0') && (FUN_140ba53b0(param_1), *(char *)(param_1 + 0x13c1) != '\0')) &&
     (*(char *)(param_1 + 0x13c0) == '\0')) {
    cVar5 = FUN_140bc9f40(param_1);
    while (cVar5 != '\0') {
      FUN_140bf0e40(param_1);
      FUN_1416b1760(0x3f000000);
      cVar5 = FUN_140bc9f40(param_1);
    }
  }
  lVar8 = UGameInstance::GetGameViewportClient(param_1);
  if (lVar8 != 0) {
    uStack_50 = 0;
    local_58 = FUN_140be1580;
    local_48 = 0x40be1580;
    uStack_44 = 1;
    uStack_40 = 0;
    uStack_3c = uStack_4c;
    FUN_140b94360(lVar8 + 0x2e0,param_1,&local_48);
  }
  return;
}



// FUNCTION 140bd2db0 FUN_140bd2db0 body=948 status=ok
// SIG undefined FUN_140bd2db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd2db0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 local_220;
  code *local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined **local_1a8 [2];
  longlong *local_198;
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  undefined8 local_140;
  longlong *local_138 [2];
  undefined1 local_128 [184];
  undefined4 local_70;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if (*(longlong *)(param_1 + 0xef0) == 0) {
    return;
  }
  cVar5 = (*(code *)**(undefined8 **)*param_3)();
  if (cVar5 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0xf00) == 0) {
    return;
  }
  cVar5 = (*(code *)**(undefined8 **)*param_4)();
  if (cVar5 == '\0') {
    return;
  }
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_4 + 8))((longlong *)*param_4,local_1d8);
  FUN_1404d0c50(&local_1f8,*puVar6);
  if (local_1f8 != (longlong *)0x0) {
    (**(code **)(*local_1f8 + 400))(local_1f8,param_1 + 0xf10);
  }
  if ((param_2 == 1) && (cVar5 = FUN_140bcae80(param_5), cVar5 != '\0')) {
    plVar8 = (longlong *)*param_4;
    plVar7 = (longlong *)FName::FName(local_1d0,L"SPARK",1);
    plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_1c8);
    if (*plVar8 != *plVar7) {
      local_218 = FUN_140bd3930;
      uStack_1ac = (undefined4)(uStack_210 >> 0x20);
      uStack_210 = uStack_210 & 0xffffffff00000000;
      local_1b8 = 0x40bd3930;
      uStack_1b4 = 1;
      uStack_1b0 = 0;
      uVar9 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                        (local_158,param_1,&local_1b8);
      FUN_140bb45f0(param_1,param_3,param_5,uVar9);
      goto LAB_140bd3102;
    }
    FUN_140b9aa90(local_148,1);
    local_200 = (longlong *)param_3[1];
    local_140 = *param_3;
    if (local_200 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_200 + 1) = (int)local_200[1] + 1;
      UNLOCK();
    }
    local_208 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_138,&local_200);
    plVar8 = local_200;
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_200 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
    FUN_1404c0750(local_128,param_5);
    local_70 = *(undefined4 *)(param_5 + 0xb8);
    puVar2 = (undefined1 *)(param_1 + 800);
    if (local_148 != puVar2) {
      if (*(char *)(param_1 + 0x418) != '\0') {
        *(undefined1 *)(param_1 + 0x418) = 0;
        FUN_140b9da20(puVar2);
      }
      FUN_140b9a9b0(puVar2,local_148);
      *(undefined1 *)(param_1 + 0x418) = 1;
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_60);
    FUN_1404bf650(local_128);
    local_198 = local_138[0];
  }
  else {
    uVar9 = FUN_140bb7aa0(param_1,local_170,param_2);
    FUN_140b999a0(local_1a8,uVar9);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_168 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_1e8,0);
    FWeakObjectPtr::operator=(local_1e0,0);
    FWeakObjectPtr::operator=(&local_218,0);
    local_220 = 2;
    uStack_210 = 0;
    local_228 = local_1e8;
    FUN_140c23780(2,local_1a8,&local_218,local_1e0);
    local_1a8[0] = &PTR_FUN_1443170a0;
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_180 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
  }
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_198 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
LAB_140bd3102:
  plVar8 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1f0 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd3170 FUN_140bd3170 body=440 status=ok
// SIG undefined FUN_140bd3170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bd3170(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_40 [8];
  longlong *local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  
  if (param_2 != 1) {
    *(int *)(param_1 + 0x18) = param_2;
    if (*(int *)(param_1 + 0x10) == 0) {
      return;
    }
    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
      return;
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar4 == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      (**(code **)(_DAT_00000000 + 0x40))(0);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140bd3312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8));
    return;
  }
  FUN_1404d0c50(&local_28,0);
  if (local_28 == (longlong *)0x0) goto LAB_140bd3293;
  local_38 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)FUN_140bd6110;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar7 = (undefined8 *)(**(code **)(*local_28 + 0x160))(local_28,local_40,&local_38);
  *(undefined8 *)(param_1 + 0x28) = *puVar7;
  if (local_30 == 0) {
LAB_140bd3265:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_140bd3265;
  }
  (**(code **)(*local_28 + 0x150))(local_28,param_1 + 0x68,0x11f,param_3);
LAB_140bd3293:
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140bd32db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*local_20 + 8))(local_20,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bd3330 FUN_140bd3330 body=198 status=ok
// SIG undefined FUN_140bd3330(void)

void FUN_140bd3330(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong *local_18;
  longlong *local_10;
  
  puVar7 = &DAT_143f3eda8;
  if ((int)param_1[0xb] == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)param_1[10];
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar7 = (undefined2 *)*param_3;
  }
  uVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
  if ((int)uVar6 == 0) {
    FUN_1404d0c50(&local_18,uVar6);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x1b8))(local_18,param_1 + 0xc);
    }
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_4);
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
  return;
}



// FUNCTION 140bd3400 FUN_140bd3400 body=531 status=ok
// SIG undefined FUN_140bd3400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd3400(longlong param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [40];
  undefined1 local_c0 [152];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0xf30) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0xf28);
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar7 = (undefined2 *)*param_3;
  }
  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
  if ((iVar5 == 0) && (*(longlong *)(param_1 + 0xf18) != 0)) {
    puVar6 = (undefined8 *)FName::FName(local_f8,L"SPARK",1);
    FUN_1404d0c50(&local_138,*puVar6);
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x1b8))(local_138,param_1 + 0xf48);
    }
    FUN_140b9a900(local_e8,param_4);
    plVar9 = (longlong *)0x0;
    if ((param_2 == 1) && (1 < *(int *)(param_1 + 0xf40))) {
      local_118[0] = 0;
      local_110 = 0;
      local_108 = 0;
      FVariantData::SetValue(local_118,param_1 + 0xf38);
      local_100 = 0;
      puVar6 = (undefined8 *)FName::FName(local_f0,L"FRIENDPASSCODE",1);
      FUN_1404b6080(local_c0,*puVar6,local_118);
      FVariantData::Empty(local_118);
    }
    local_128 = *(undefined8 *)(param_1 + 0xf18);
    local_120 = *(longlong **)(param_1 + 0xf20);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    if ((*(int *)(param_1 + 0xf58) != 0) && (*(longlong **)(param_1 + 0xf50) != (longlong *)0x0)) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0xf50) + 0x18))();
      if (cVar4 != '\0') {
        if (*(int *)(param_1 + 0xf58) != 0) {
          plVar9 = *(longlong **)(param_1 + 0xf50);
        }
        (**(code **)(*plVar9 + 0x40))(plVar9,param_2,&local_128,local_e8);
      }
    }
    plVar9 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_1404bf650(local_e8);
    plVar9 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bd3620 FUN_140bd3620 body=778 status=ok
// SIG undefined FUN_140bd3620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd3620(longlong param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined **local_188 [2];
  longlong *local_178;
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined4 local_138 [2];
  undefined8 local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((((param_2 == 1) && (*(longlong *)(param_4 + 8) != 0)) &&
      (*(longlong **)(param_4 + 0xa0) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_4 + 0xa0) + 0x20))(), cVar7 != '\0')) {
    local_130 = *param_3;
    local_118 = &PTR_FUN_143f769a8;
    local_138[0] = 0;
    local_f0 = &PTR_FUN_143f769a0;
    local_1b0 = (longlong *)param_3[1];
    local_128 = (longlong *)0x0;
    local_120 = 0xffffffff;
    local_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 9999;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
      UNLOCK();
    }
    local_1b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_128,&local_1b0);
    plVar3 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    FUN_1404c0750(&local_118,param_4);
    local_60 = *(undefined4 *)(param_4 + 0xb8);
    puVar4 = (undefined4 *)(param_1 + 800);
    if (local_138 != puVar4) {
      if (*(char *)(param_1 + 0x418) != '\0') {
        *(undefined1 *)(param_1 + 0x418) = 0;
        FUN_140b9da20(puVar4);
      }
      FUN_140b9a9b0(puVar4,local_138);
      *(undefined1 *)(param_1 + 0x418) = 1;
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_50);
    FUN_1404bf650(&local_118);
    local_178 = local_128;
  }
  else {
    uVar8 = FUN_140bb7aa0(param_1,local_150,param_2);
    FUN_140b999a0(local_188,uVar8);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_148 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    FWeakObjectPtr::operator=(local_1a8,0);
    FWeakObjectPtr::operator=(local_1a0,0);
    FWeakObjectPtr::operator=(local_198,0);
    local_1c0 = 2;
    local_190 = 0;
    local_1c8 = local_1a8;
    FUN_140c23780(2,local_188,local_198,local_1a0);
    local_188[0] = &PTR_FUN_1443170a0;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_160 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)local_160 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_178 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar2 = (int *)((longlong)local_178 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd3930 FUN_140bd3930 body=810 status=ok
// SIG undefined FUN_140bd3930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd3930(longlong param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined **local_188 [2];
  longlong *local_178;
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  int local_138 [2];
  undefined8 local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((*(longlong *)(param_1 + 0xef0) != 0) &&
     (cVar6 = (*(code *)**(undefined8 **)*param_3)(), cVar6 != '\0')) {
    if ((param_2 == 1) &&
       (((*(longlong *)(param_4 + 8) != 0 && (*(longlong **)(param_4 + 0xa0) != (longlong *)0x0)) &&
        (cVar6 = (**(code **)(**(longlong **)(param_4 + 0xa0) + 0x20))(), cVar6 != '\0')))) {
      local_130 = *param_3;
      local_118 = &PTR_FUN_143f769a8;
      local_f0 = &PTR_FUN_143f769a0;
      local_1b0 = (longlong *)param_3[1];
      local_128 = (longlong *)0x0;
      local_120 = 0xffffffff;
      local_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d4 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0xffffffff;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 9999;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      local_1b8 = 0;
      local_138[0] = param_2;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_128,&local_1b0);
      plVar3 = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      FUN_1404c0750(&local_118,param_4);
      local_60 = *(undefined4 *)(param_4 + 0xb8);
      piVar2 = (int *)(param_1 + 800);
      if (local_138 != piVar2) {
        if (*(char *)(param_1 + 0x418) != '\0') {
          *(undefined1 *)(param_1 + 0x418) = 0;
          FUN_140b9da20(piVar2);
        }
        FUN_140b9a9b0(piVar2,local_138);
        *(undefined1 *)(param_1 + 0x418) = 1;
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_50);
      FUN_1404bf650(&local_118);
      local_178 = local_128;
    }
    else {
      uVar7 = FUN_140bb7aa0(param_1,local_150,param_2);
      FUN_140b999a0(local_188,uVar7);
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_148 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar2 = (int *)((longlong)local_148 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      FWeakObjectPtr::operator=(local_1a8,0);
      FWeakObjectPtr::operator=(local_1a0,0);
      FWeakObjectPtr::operator=(local_198,0);
      local_1c0 = 2;
      local_190 = 0;
      local_1c8 = local_1a8;
      FUN_140c23780(2,local_188,local_198,local_1a0);
      local_188[0] = &PTR_FUN_1443170a0;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_160 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
    }
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_178 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar2 = (int *)((longlong)local_178 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bd3c60 FUN_140bd3c60 body=553 status=ok
// SIG undefined FUN_140bd3c60(void)

void FUN_140bd3c60(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined **local_60 [2];
  longlong *local_50;
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((((param_2 == 1) && (*(longlong *)(param_4 + 8) != 0)) &&
      (*(longlong **)(param_4 + 0xa0) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_4 + 0xa0) + 0x20))(), cVar5 != '\0')) {
    puVar6 = (undefined8 *)FName::FName(local_68,L"SPARK",1);
    FUN_1404d0c50(&local_98,*puVar6);
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x220))(local_98,1,param_3,param_5,param_4);
    }
    plVar3 = local_90;
    if (local_90 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_90 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) {
      return;
    }
    (**(code **)*local_90)(local_90);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    lVar8 = *local_90;
  }
  else {
    uVar7 = FUN_140bb7aa0(param_1,local_28,param_2);
    FUN_140b999a0(local_60,uVar7);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    FWeakObjectPtr::operator=(local_88,0);
    FWeakObjectPtr::operator=(local_80,0);
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    FUN_140c23780(2,local_60,local_78,local_80,local_88,2);
    local_60[0] = &PTR_FUN_1443170a0;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if (local_50 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = local_50 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) {
      return;
    }
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar2 = (int *)((longlong)local_50 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    lVar8 = *local_50;
    local_90 = local_50;
  }
  (**(code **)(lVar8 + 8))(local_90,1);
  return;
}



// FUNCTION 140bd3e90 FUN_140bd3e90 body=720 status=ok
// SIG undefined FUN_140bd3e90(void)

void FUN_140bd3e90(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong in_stack_ffffffffffffff08;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  undefined **local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (param_2 == 1) {
    lVar5 = FUN_14244f490(param_1,0);
    if (lVar5 == 0) {
      return;
    }
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
    if (!bVar4) {
      return;
    }
    if (*(longlong *)(lVar5 + 0x1428) == 0) {
      return;
    }
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Game invite sent.",L"OakGameInstance",L"InviteSent");
    FUN_1411db570(*(undefined8 *)(lVar5 + 0x1428),local_c0,uVar7,0x3f800000,
                  in_stack_ffffffffffffff08 & 0xffffffffffffff00,2);
    local_d0 = local_78;
  }
  else {
    FText::FText(local_d8);
    if (param_2 == 4) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,
                         L"Too many requests have been issued, please wait and try again later.",
                         L"OakGameInstance",L"InviteFailedRateLimitMessage");
      FText::operator=(local_d8,uVar7);
    }
    else if (param_2 == 0xb) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_50,
                         L"This feature requires all active players to be connected to Xbox Live and have multiplayer privileges."
                         ,L"OakGameInstance",L"InviteFailedNoPrivilegeMessage");
      FText::operator=(local_d8,uVar7);
      local_30 = local_48;
    }
    else {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_68,
                         L"There was a problem sending the game invitation, please try again later."
                         ,L"OakGameInstance",L"InviteFailedMessage");
      FText::operator=(local_d8,uVar7);
      local_30 = local_60;
    }
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
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Invite Failed",L"OakGameInstance",L"InviteFailedTitle");
    local_b8 = &PTR_FUN_1443170a0;
    FText::FText(local_b0,uVar7);
    FText::FText(local_98,local_d8);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    FWeakObjectPtr::operator=(local_res18,0);
    FWeakObjectPtr::operator=(local_res20,0);
    FWeakObjectPtr::operator=(local_e8,0);
    local_e0 = 0;
    FUN_140c23780(2,&local_b8,local_e8,local_res20,local_res18,2);
    FUN_140b9cdd0(&local_b8);
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd4160 FUN_140bd4160 body=458 status=ok
// SIG undefined FUN_140bd4160(void)

void FUN_140bd4160(longlong *param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xbe,param_1[0x40]);
  puVar4 = (undefined2 *)FUN_140dbc5d0(param_1 + 0xbe,local_res10);
  *(undefined2 *)(param_1 + 0x88) = *puVar4;
  cVar3 = FUN_140dbb7f0(param_1 + 0xbe);
  *(char *)(param_1 + 0x8b) = cVar3;
  *(bool *)((longlong)param_1 + 0x459) = cVar3 == '\x01';
  if (param_1[0x210] != 0) {
    if ((cVar3 == '\0') && ((char)param_1[0x163] != '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_140d9fcc0(param_1[0x210],uVar5);
  }
  if (param_2 == 1) {
    FUN_140be5250(param_1);
    FUN_140bf4350(param_1,0);
    if ((char)param_1[0x88] == '\x02') {
      uVar5 = FUN_140dbd0e0(param_1 + 0xbe,local_18);
      FUN_140bace80(param_1,param_1 + 0x88,uVar5);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(char *)((longlong)param_1 + 0x11ac) != '\0') {
      FUN_140bf70c0(param_1);
    }
  }
  plVar1 = (longlong *)param_1[0x86];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  if (param_2 == 1) {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
      lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar6 != 0) {
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar1 = *(longlong **)(lVar6 + 0x140);
        if (plVar1 != (longlong *)0x0) {
          lVar6 = FUN_141425c60();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            cVar3 = (**(code **)(*plVar1 + 0x900))(plVar1);
            if ((cVar3 != '\0') && ((longlong *)plVar1[0x96] != (longlong *)0x0)) {
              (**(code **)(*(longlong *)plVar1[0x96] + 0x7c0))();
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xbae) = 1;
  return;
}



// FUNCTION 140bd4330 FUN_140bd4330 body=82 status=ok
// SIG undefined FUN_140bd4330(void)

void FUN_140bd4330(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x620,*(undefined8 *)(param_1 + 0x210));
  if (*(char *)(param_1 + 0x11ac) != '\0') {
    FUN_140bf70c0(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0x430);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140bd4390 FUN_140bd4390 body=116 status=ok
// SIG undefined FUN_140bd4390(void)

void FUN_140bd4390(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 local_res10 [24];
  
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x638,*(undefined8 *)(param_1 + 0x208));
  puVar2 = (undefined2 *)FUN_140dbc5d0(param_1 + 0x5f0,local_res10);
  *(undefined2 *)(param_1 + 0x440) = *puVar2;
  if ((param_2 == 1) && (*(char *)(param_1 + 0x11ac) != '\0')) {
    FUN_140bf70c0(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0x430);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  return;
}



// FUNCTION 140bd4410 FUN_140bd4410 body=1178 status=ok
// SIG undefined FUN_140bd4410(void)

void FUN_140bd4410(longlong *param_1,int param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  int iVar14;
  longlong lVar15;
  undefined1 local_res8 [16];
  undefined8 local_res18;
  longlong local_res20;
  undefined2 *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  undefined1 local_148 [8];
  void *local_140;
  int local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined1 local_120 [8];
  longlong local_118 [2];
  undefined **local_108 [2];
  longlong *local_f8;
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [120];
  
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xc1,param_1[0x43]);
  param_1[0x43] = 0;
  if (param_2 == 1) {
    puVar8 = (undefined2 *)FUN_140dbc5d0(param_1 + 0xbe,local_res8);
    *(undefined2 *)(param_1 + 0x88) = *puVar8;
    FUN_140bf3d70(param_1);
    FUN_140becdf0(param_1);
    uVar9 = FUN_140bb7440(param_1);
    FUN_140d9f600(uVar9,9);
    local_168 = (undefined2 *)0x0;
    local_160 = 0;
    cVar6 = FUN_140dbced0(param_1 + 0xbe,&local_168);
    if (((cVar6 != '\0') && (lVar15 = param_1[0x15d], lVar15 != 0)) &&
       (lVar10 = FUN_140b94840(lVar15,DAT_14686a168), lVar10 != 0)) {
      FUN_140db04c0(lVar15,lVar10);
      iVar14 = 0;
      if ((int)param_1[0x15f] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)param_1[0x15e];
      }
      FString::PrintfImpl(&local_140,L"?Template=%s",puVar8);
      _Src = local_140;
      uVar5 = local_160;
      if (local_138 != 0) {
        iVar14 = local_138 + -1;
      }
      if (iVar14 != 0) {
        iVar4 = (int)local_160;
        lVar15 = (longlong)(int)local_160;
        iVar7 = (uint)((int)local_160 == 0) + (int)local_160 + iVar14;
        local_160 = CONCAT44(local_160._4_4_,iVar7);
        if (local_160._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,uVar5 & 0xffffffff);
        }
        puVar8 = local_168 + (lVar15 - (ulonglong)(iVar4 != 0));
        _guard_xfg_dispatch_icall_nop(puVar8,_Src,(longlong)iVar14 * 2);
        puVar8[iVar14] = 0;
      }
      if (local_140 != (void *)0x0) {
        FMemory::Free(local_140);
      }
      puVar8 = &DAT_143f3eda8;
      if ((int)local_160 != 0) {
        puVar8 = local_168;
      }
      FUN_14289aca0(local_b8,0,puVar8,0);
      uVar9 = FUN_140bb7010(param_1,local_118);
      cVar6 = FUN_140dc0b30(lVar10,local_b8,uVar9);
      if (local_118[0] != 0) {
        FMemory::Free();
      }
      FURL::~FURL(local_b8);
      if (cVar6 != '\0') {
        if (local_168 == (undefined2 *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
    if (local_168 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  *(undefined1 *)(param_1 + 0x238) = 0;
  FUN_140bc2fb0(param_1,0);
  FUN_140bc2f10(param_1);
  FUN_140bf2810(param_1);
  puVar11 = (undefined8 *)FName::FName(local_120,L"GbxShiftOverlay",1);
  plVar12 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar11);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x90))(plVar12);
  }
  lVar15 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar15 != 0) && ((*(uint *)(lVar15 + 0x830) >> 2 & 1) != 0)) &&
     (lVar15 = FUN_140bb89c0(param_1), lVar15 != 0)) {
    FUN_141105d40(lVar15,0);
  }
  FWeakObjectPtr::operator=(&local_158,0);
  local_150 = 0;
  pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UOakGameInstance::OnModalDialogChoiceMade",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar13, pwVar2 != (wchar_t *)0x0) {
    pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res20,pwVar3 + 2,1);
  FWeakObjectPtr::operator=(&local_158,param_1);
  local_res18 = 0;
  local_150 = local_res20;
  if ((local_res20 != 0) && (lVar15 = FWeakObjectPtr::Get(&local_158), lVar15 != 0)) {
    UObject::FindFunction(lVar15,local_150);
  }
  uVar9 = FUN_140bb7aa0(param_1,local_d0,param_2);
  FUN_140b999a0(local_108,uVar9);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_c8 + 1;
    lVar15 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res18,0);
  FWeakObjectPtr::operator=(local_148,0);
  local_130 = local_158;
  local_12c = local_154;
  local_128 = local_150;
  FUN_140c23780(2,local_108,&local_130,local_148,&local_res18,2);
  local_108[0] = &PTR_FUN_1443170a0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_e0 + 1;
    lVar15 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_f8 + 1;
    lVar15 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd48b0 FUN_140bd48b0 body=680 status=ok
// SIG undefined FUN_140bd48b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd48b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  char local_34;
  undefined4 local_30;
  char local_2c;
  undefined2 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar1 = FUN_1428cf800(uVar3);
    if (iVar1 != 3) {
      FUN_140b4bd00(local_88);
      _guard_xfg_dispatch_icall_nop(&local_98,0,0x78);
      plVar5 = param_1 + 0xa0;
      if (&local_98 != plVar5) {
        if ((char)param_1[0xaf] != '\0') {
          *(undefined1 *)(param_1 + 0xaf) = 0;
          if (*(char *)((longlong)param_1 + 0x56c) != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x56c) = 0;
          }
          if (*(char *)((longlong)param_1 + 0x564) != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x564) = 0;
          }
          if (param_1[0xa4] != 0) {
            FMemory::Free();
          }
        }
        *(undefined1 *)plVar5 = (undefined1)local_98;
        *(undefined1 *)((longlong)param_1 + 0x501) = local_98._1_1_;
        *(undefined1 *)((longlong)param_1 + 0x502) = local_98._2_1_;
        *(undefined4 *)((longlong)param_1 + 0x504) = local_98._4_4_;
        *(undefined4 *)(param_1 + 0xa1) = local_90;
        *(undefined4 *)((longlong)param_1 + 0x50c) = local_8c;
        *(undefined1 *)(param_1 + 0xa2) = local_88[0];
        *(undefined4 *)((longlong)param_1 + 0x514) = local_84;
        *(undefined4 *)(param_1 + 0xa3) = local_80;
        *(undefined4 *)((longlong)param_1 + 0x51c) = local_7c;
        param_1[0xa4] = local_78;
        *(undefined4 *)(param_1 + 0xa5) = (undefined4)local_70;
        *(undefined4 *)((longlong)param_1 + 0x52c) = local_70._4_4_;
        *(undefined4 *)(param_1 + 0xa6) = local_68;
        *(undefined4 *)((longlong)param_1 + 0x534) = local_64;
        *(undefined4 *)((longlong)param_1 + 0x53c) = local_5c;
        param_1[0xa8] = local_58;
        param_1[0xa9] = local_50;
        param_1[0xaa] = local_48;
        param_1[0xab] = local_40;
        *(undefined4 *)(param_1 + 0xa7) = local_60;
        *(undefined1 *)((longlong)param_1 + 0x564) = 0;
        local_78 = 0;
        local_70 = 0;
        if (local_34 != '\0') {
          *(undefined4 *)(param_1 + 0xac) = local_38;
          *(undefined1 *)((longlong)param_1 + 0x564) = 1;
        }
        *(undefined1 *)((longlong)param_1 + 0x56c) = 0;
        if (local_2c != '\0') {
          *(undefined4 *)(param_1 + 0xad) = local_30;
          *(undefined1 *)((longlong)param_1 + 0x56c) = 1;
        }
        *(undefined2 *)(param_1 + 0xae) = local_28;
        *(undefined4 *)((longlong)param_1 + 0x574) = local_24;
        *(undefined1 *)(param_1 + 0xaf) = 1;
      }
      local_2c = 0;
      local_34 = 0;
      if (local_78 != 0) {
        FMemory::Free();
      }
      *(undefined1 *)plVar5 = *(undefined1 *)(param_2 + 0x6c2);
      *(undefined1 *)((longlong)param_1 + 0x501) = *(undefined1 *)(param_2 + 0x6c3);
      *(undefined1 *)((longlong)param_1 + 0x502) = *(undefined1 *)(param_2 + 0x6c5);
      *(undefined4 *)((longlong)param_1 + 0x504) = *(undefined4 *)(param_2 + 0x740);
      *(undefined4 *)(param_1 + 0xa1) = *(undefined4 *)(param_2 + 0x744);
      *(undefined4 *)((longlong)param_1 + 0x50c) = *(undefined4 *)(param_2 + 0x74c);
      FUN_140b9ee80(param_1 + 0xa2,param_2 + 0x670);
      *(undefined4 *)(param_1 + 0xa7) = *(undefined4 *)(param_2 + 0x6e0);
      *(undefined4 *)((longlong)param_1 + 0x53c) = *(undefined4 *)(param_2 + 0x6e4);
      param_1[0xa8] = *(longlong *)(param_2 + 0x598);
      param_1[0xa9] = *(longlong *)(param_2 + 0x5a0);
      param_1[0xaa] = *(longlong *)(param_2 + 0x548);
      param_1[0xab] = *(longlong *)(param_2 + 0x5b0);
      if ((longlong *)(param_2 + 0x6e8) != param_1 + 0xac) {
        if (*(char *)((longlong)param_1 + 0x564) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x564) = 0;
        }
        if (*(char *)(param_2 + 0x6ec) != '\0') {
          *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x6e8);
          *(undefined1 *)((longlong)param_1 + 0x564) = 1;
        }
      }
      if ((longlong *)(param_2 + 0x6f0) != param_1 + 0xad) {
        if (*(char *)((longlong)param_1 + 0x56c) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x56c) = 0;
        }
        if (*(char *)(param_2 + 0x6f4) != '\0') {
          *(undefined4 *)(param_1 + 0xad) = *(undefined4 *)(param_2 + 0x6f0);
          *(undefined1 *)((longlong)param_1 + 0x56c) = 1;
        }
      }
      puVar4 = (undefined2 *)FUN_140cb7100(param_2);
      *(undefined2 *)(param_1 + 0xae) = *puVar4;
      *(undefined4 *)((longlong)param_1 + 0x574) = *(undefined4 *)(param_2 + 0xa44);
    }
  }
  return;
}



// FUNCTION 140bd4b60 FUN_140bd4b60 body=466 status=ok
// SIG undefined FUN_140bd4b60(void)

void FUN_140bd4b60(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar1 = FUN_1428cf800(uVar3);
    if ((iVar1 != 3) && ((char)param_1[0xaf] != '\0')) {
      *(char *)(param_2 + 0x6c2) = (char)param_1[0xa0];
      *(undefined1 *)(param_2 + 0x6c3) = *(undefined1 *)((longlong)param_1 + 0x501);
      *(undefined1 *)(param_2 + 0x6c5) = *(undefined1 *)((longlong)param_1 + 0x502);
      *(undefined1 *)(param_2 + 0x6c6) = 1;
      *(undefined4 *)(param_2 + 0x740) = *(undefined4 *)((longlong)param_1 + 0x504);
      *(int *)(param_2 + 0x744) = (int)param_1[0xa1];
      *(undefined4 *)(param_2 + 0x74c) = *(undefined4 *)((longlong)param_1 + 0x50c);
      FUN_140b9ee80(param_2 + 0x670,param_1 + 0xa2);
      *(int *)(param_2 + 0x6e0) = (int)param_1[0xa7];
      *(int *)(param_2 + 0x6dc) = (int)param_1[0xa7];
      *(undefined4 *)(param_2 + 0x6e4) = *(undefined4 *)((longlong)param_1 + 0x53c);
      *(longlong *)(param_2 + 0x598) = param_1[0xa8];
      *(longlong *)(param_2 + 0x5a0) = param_1[0xa9];
      *(longlong *)(param_2 + 0x548) = param_1[0xaa];
      *(longlong *)(param_2 + 0x5b0) = param_1[0xab];
      if (param_1 + 0xac != (longlong *)(param_2 + 0x6e8)) {
        if (*(char *)(param_2 + 0x6ec) != '\0') {
          *(undefined1 *)(param_2 + 0x6ec) = 0;
        }
        if (*(char *)((longlong)param_1 + 0x564) != '\0') {
          *(int *)(param_2 + 0x6e8) = (int)param_1[0xac];
          *(undefined1 *)(param_2 + 0x6ec) = 1;
        }
      }
      if (param_1 + 0xad != (longlong *)(param_2 + 0x6f0)) {
        if (*(char *)(param_2 + 0x6f4) != '\0') {
          *(undefined1 *)(param_2 + 0x6f4) = 0;
        }
        if (*(char *)((longlong)param_1 + 0x56c) != '\0') {
          *(int *)(param_2 + 0x6f0) = (int)param_1[0xad];
          *(undefined1 *)(param_2 + 0x6f4) = 1;
        }
      }
      FUN_140ccf780(param_2,param_1 + 0xae);
      *(undefined4 *)(param_2 + 0xa44) = *(undefined4 *)((longlong)param_1 + 0x574);
      if ((char)param_1[0xaf] != '\0') {
        *(undefined1 *)(param_1 + 0xaf) = 0;
        if (*(char *)((longlong)param_1 + 0x56c) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x56c) = 0;
        }
        if (*(char *)((longlong)param_1 + 0x564) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0x564) = 0;
        }
        if (param_1[0xa4] != 0) {
          FMemory::Free();
        }
      }
      FUN_142d5abe0(param_1);
    }
  }
  return;
}



// FUNCTION 140bd4d40 FUN_140bd4d40 body=301 status=ok
// SIG undefined FUN_140bd4d40(void)

void FUN_140bd4d40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = UGameInstance::GetGameViewportClient();
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x13e0) != 0) {
      TBaseMulticastDelegate<void>::Remove(&DAT_146532738,*(undefined8 *)(param_1 + 0x13e0));
      *(undefined8 *)(param_1 + 0x13e0) = 0;
    }
    uStack_10 = 0;
    local_18 = FUN_140bd4e70;
    plVar5 = (longlong *)(lVar2 + 0x218);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_1440f9050;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
    }
    if (&local_18 != plVar5) {
      if (plVar3 == (longlong *)0x0) {
        if ((*(int *)(lVar2 + 0x220) != 0) &&
           (plVar1 = (longlong *)*plVar5, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar5 != 0) {
            lVar4 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar4;
          }
          *(undefined4 *)(lVar2 + 0x220) = 0;
        }
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,plVar5);
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140bd4e70 FUN_140bd4e70 body=63 status=ok
// SIG undefined FUN_140bd4e70(void)

bool FUN_140bd4e70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)GetMoviePlayer();
  (**(code **)(*plVar2 + 0xc0))(plVar2);
  cVar1 = *(char *)(param_1 + 0x13e8);
  if (cVar1 == '\0') {
    FUN_140bae0b0(param_1);
    cVar1 = *(char *)(param_1 + 0x13e8);
  }
  return cVar1 == '\x04';
}



// FUNCTION 140bd4eb0 FUN_140bd4eb0 body=1132 status=ok
// SIG undefined FUN_140bd4eb0(void)

void FUN_140bd4eb0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
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
  
  puVar13 = (undefined8 *)*param_3;
  puVar14 = puVar13 + (longlong)(int)param_3[1] * 2;
  for (; puVar13 != puVar14; puVar13 = puVar13 + 2) {
    uVar11 = *(undefined8 *)(param_1 + 0x478);
    uVar7 = (**(code **)(*(longlong *)*puVar13 + 8))((longlong *)*puVar13,local_a8);
    cVar6 = FUN_140d86830(uVar11,uVar7);
    plVar12 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_a0 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (cVar6 == '\0') {
      uVar11 = *(undefined8 *)(param_1 + 0x478);
      uVar7 = (**(code **)(*(longlong *)*puVar13 + 8))((longlong *)*puVar13,local_98);
      FUN_140d938f0(uVar11,uVar7);
      plVar12 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_90 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar13 + 8))((longlong *)*puVar13,local_88);
    plVar12 = (longlong *)*puVar8;
    plVar9 = (longlong *)FName::FName(local_res18,L"SPARK",1);
    plVar10 = (longlong *)(**(code **)(*plVar12 + 8))(plVar12,local_res20);
    plVar12 = local_80;
    lVar4 = *plVar9;
    lVar3 = *plVar10;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_80 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = (longlong *)*puVar13;
    if (lVar3 == lVar4) {
      uVar11 = (**(code **)(*plVar12 + 8))(plVar12,local_68);
      uVar7 = FUN_140bb74b0(param_1);
      plVar12 = (longlong *)FUN_140d7d990(uVar7,local_78,uVar11);
      if (&local_d8 != plVar12) {
        local_d8 = *plVar12;
        *plVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,plVar12 + 1);
      }
      plVar12 = local_70;
      plVar9 = local_60;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_70 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = local_60;
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            plVar9 = local_60;
          }
        }
      }
    }
    else {
      uVar11 = (**(code **)(*plVar12 + 8))(plVar12,local_48);
      uVar7 = FUN_140bb74b0(param_1);
      plVar12 = (longlong *)FUN_140d84960(uVar7,local_58,uVar11);
      if (&local_d8 != plVar12) {
        local_d8 = *plVar12;
        *plVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,plVar12 + 1);
      }
      plVar12 = local_50;
      plVar9 = local_40;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = local_40;
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            plVar9 = local_40;
          }
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      lVar4 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar12 = plStack_d0;
    if (local_d8 != 0) {
      local_c8 = local_d8;
      plStack_c0 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
        UNLOCK();
      }
      cVar6 = FUN_140d86830(*(undefined8 *)(param_1 + 0x478),&local_c8);
      plVar9 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_c0 + 1;
        lVar4 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        plVar12 = plStack_d0;
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar12 = plStack_d0;
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            plVar12 = plStack_d0;
          }
        }
      }
      if (cVar6 == '\0') {
        local_b8 = local_d8;
        plStack_b0 = plStack_d0;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          plVar12 = plStack_d0;
        }
        FUN_140d938f0(*(undefined8 *)(param_1 + 0x478),&local_b8);
        plVar9 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_b0 + 1;
          lVar4 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          plVar12 = plStack_d0;
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar12 = plStack_d0;
            if (iVar2 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
              plVar12 = plStack_d0;
            }
          }
        }
      }
    }
    plVar9 = plStack_d0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar12 + 1;
      lVar4 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
  }
  uVar11 = FUN_140bb73a0(param_1);
  FUN_140d96810(uVar11,param_2);
  uVar11 = FUN_140bb7190(param_1);
  FUN_140d965b0(uVar11,param_2);
  return;
}



// FUNCTION 140bd5320 FUN_140bd5320 body=460 status=ok
// SIG undefined FUN_140bd5320(void)

undefined8 * FUN_140bd5320(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong *local_18;
  longlong *local_10;
  
  *param_2 = 0;
  param_2[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  iVar7 = 0;
  FGenericPlatformString::Memcpy(*param_2,&DAT_1442f0a04,6);
  Online::GetIdentityInterface(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    iVar5 = (**(code **)(*local_18 + 0x40))();
    if (iVar5 == 0) {
      if ((undefined4 *)*param_2 == &DAT_1442f35d4) goto LAB_140bd5487;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,3);
        iVar7 = *(int *)(param_2 + 1);
      }
      *(int *)(param_2 + 1) = iVar7 + 3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      puVar6 = (undefined4 *)*param_2;
      *puVar6 = 0x61006e;
    }
    else if (iVar5 == 1) {
      if ((undefined4 *)*param_2 == &DAT_1442f3744) goto LAB_140bd5487;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,3);
        iVar7 = *(int *)(param_2 + 1);
      }
      *(int *)(param_2 + 1) = iVar7 + 3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      puVar6 = (undefined4 *)*param_2;
      *puVar6 = 0x750065;
    }
    else {
      if ((iVar5 != 2) || ((undefined4 *)*param_2 == &DAT_1442f3b54)) goto LAB_140bd5487;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,3);
        iVar7 = *(int *)(param_2 + 1);
      }
      *(int *)(param_2 + 1) = iVar7 + 3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      puVar6 = (undefined4 *)*param_2;
      *puVar6 = 0x70006a;
    }
    *(undefined2 *)(puVar6 + 1) = 0;
  }
LAB_140bd5487:
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140bd54f0 FUN_140bd54f0 body=434 status=ok
// SIG undefined FUN_140bd54f0(void)

void FUN_140bd54f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined **local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_60,&DAT_14686f4e0);
  FText::FText(local_78,&DAT_14686f4f8);
  local_48 = &PTR_FUN_1443170a0;
  FText::FText(local_40,local_60);
  FText::FText(local_28,local_78);
  FWeakObjectPtr::operator=(local_res10,0);
  FWeakObjectPtr::operator=(local_res18,0);
  FWeakObjectPtr::operator=(local_88,0);
  local_80 = 0;
  FUN_140c23780(1,&local_48,local_88,local_res18,local_res10,2);
  local_48 = &PTR_FUN_1443170a0;
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd56b0 FUN_140bd56b0 body=54 status=ok
// SIG undefined FUN_140bd56b0(void)

void FUN_140bd56b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140dbfc10(&DAT_14686a610);
  if (cVar1 == '\0') {
    FUN_140be4580(param_1,param_2);
  }
  return;
}



// FUNCTION 140bd56f0 FUN_140bd56f0 body=17 status=ok
// SIG undefined FUN_140bd56f0(void)

void FUN_140bd56f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStackX_18 [16];
  longlong *plStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  longlong lStack_38;
  longlong *plStack_30;
  
  lVar6 = *(longlong *)(param_1 + 0x4e0);
  if (lVar6 != 0) {
    lVar4 = FWeakObjectPtr::Get(lVar6 + 0x14);
    FUN_1404c9880(*(undefined8 *)(lVar4 + 0xae8),DAT_14686f228);
    FUN_140db5aa0(lVar6);
    FUN_140db5980(lVar6);
    FUN_140db5ba0(lVar6);
    puVar5 = (undefined8 *)FName::FName(auStackX_18,L"SPARK",1);
    FUN_1404d0c50(&plStack_58,*puVar5);
    plVar7 = plStack_58;
    if (plStack_58 != (longlong *)0x0) {
      (**(code **)(*plStack_58 + 0x1b8))(plStack_58,lVar6 + 0x390);
      (**(code **)(*plVar7 + 0x360))(plVar7,lVar6 + 0x1f8);
      (**(code **)(*plVar7 + 0xe0))(plVar7,lVar6 + 0x1e8);
      (**(code **)(*plVar7 + 0x168))(plVar7,lVar6 + 0x1f0);
      iVar3 = (**(code **)(*plVar7 + 0x3a8))(plVar7);
      if (iVar3 == 1) {
        FUN_140dbc950(lVar6,&lStack_48);
        plVar8 = plStack_40;
        if (lStack_48 != 0) {
          lStack_38 = lStack_48;
          plStack_30 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
            UNLOCK();
            plVar7 = plStack_58;
          }
          (**(code **)(*plVar7 + 0x380))(plVar7,&lStack_38);
          plVar2 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar7 = plStack_30 + 1;
            lVar6 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            plVar7 = plStack_58;
            plVar8 = plStack_40;
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar7 = plStack_58;
              plVar8 = plStack_40;
              if (iVar3 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
                plVar7 = plStack_58;
                plVar8 = plStack_40;
              }
            }
          }
        }
        plVar2 = plStack_40;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar8 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          plVar7 = plStack_58;
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = plStack_58;
            if (iVar3 == 1) {
              (**(code **)(*plStack_40 + 8))(plStack_40,1);
              plVar7 = plStack_58;
            }
          }
        }
      }
      lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0x120);
      if (lVar6 != 0) {
        (**(code **)(*plVar7 + 0xd0))(plVar7,0x120);
      }
    }
    plVar7 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_50 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    return;
  }
  return;
}



// FUNCTION 140bd5710 FUN_140bd5710 body=27 status=ok
// SIG undefined FUN_140bd5710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140bd5710(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_1d8 [32];
  longlong lStack_1b8;
  longlong *plStack_1b0;
  longlong alStack_1a8 [3];
  longlong *plStack_190;
  undefined8 uStack_188;
  longlong *plStack_180;
  longlong alStack_178 [2];
  longlong *plStack_168;
  longlong *plStack_160;
  longlong lStack_158;
  longlong *plStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [56];
  undefined1 auStack_108 [64];
  undefined1 *apuStack_c8 [2];
  longlong alStack_b8 [4];
  longlong *plStack_98;
  int iStack_88;
  undefined1 *apuStack_78 [2];
  longlong alStack_68 [4];
  longlong *plStack_48;
  int iStack_38;
  ulonglong uStack_28;
  
  lVar2 = *(longlong *)(param_1 + 0x4e0);
  if (lVar2 == 0) {
    return in_RAX;
  }
  if (param_2 == '\x05') {
    uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
    if ((byte)(*(char *)(lVar2 + 0x10) - 1U) < 4) {
      FUN_140dd0a90(lVar2,5);
      *(undefined2 *)(lVar2 + 0x78) = 0;
      *(undefined8 *)(lVar2 + 0xc0) = 0;
      *(undefined4 *)(lVar2 + 200) = 0;
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(lVar2 + 0xd0,0);
      TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(lVar2 + 0xe0,0);
      iVar9 = *(int *)(lVar2 + 0x120);
      if (iVar9 != 0) {
        lVar6 = *(longlong *)(lVar2 + 0x118) + 8;
        do {
          FUN_1404bf980(lVar6);
          lVar6 = lVar6 + 0x30;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(undefined4 *)(lVar2 + 0x120) = 0;
      if (*(int *)(lVar2 + 0x124) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(lVar2 + 0x118,0);
      }
      if (*(longlong **)(lVar2 + 0x40) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + 0x40) + 0x10))();
        plStack_190 = (longlong *)0x0;
        if ((longlong *)(lVar2 + 0x40) != alStack_1a8 + 2) {
          *(longlong *)(lVar2 + 0x40) = 0;
          alStack_1a8[2] = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar2 + 0x48,&plStack_190);
          plVar8 = plStack_190;
          if (plStack_190 != (longlong *)0x0) {
            LOCK();
            plVar7 = plStack_190 + 1;
            lVar6 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_190)(plStack_190);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plStack_190 + 8))(plStack_190,1);
              }
            }
          }
        }
      }
      plStack_180 = (longlong *)0x0;
      if ((undefined8 *)(lVar2 + 0x20) != &uStack_188) {
        *(undefined8 *)(lVar2 + 0x20) = 0;
        uStack_188 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar2 + 0x28,&plStack_180);
        plVar8 = plStack_180;
        if (plStack_180 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_180 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_180)(plStack_180);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plStack_180 + 8))(plStack_180,1);
            }
          }
        }
      }
      if (*(longlong *)(lVar2 + 0xa8) != 0) {
        uVar5 = FUN_14164ab60();
        FUN_141597530(uVar5,*(undefined8 *)(lVar2 + 0xa8));
        *(undefined8 *)(lVar2 + 0xa8) = 0;
      }
      FUN_140db5aa0(lVar2);
      FUN_140db5980(lVar2);
      FUN_140db5ba0(lVar2);
      FUN_140bafce0(lVar2 + 0x358,0);
      if (*(longlong *)(lVar2 + 0x2f0) != 0) {
        *(undefined4 *)(lVar2 + 0x2e8) = 0;
        uVar5 = FUN_14164ab60();
        FUN_141597530(uVar5,*(undefined8 *)(lVar2 + 0x2f0));
        *(undefined8 *)(lVar2 + 0x2f0) = 0;
      }
      cVar3 = FWeakObjectPtr::IsValid(lVar2 + 0x14);
      if (cVar3 != '\0') {
        lVar6 = FWeakObjectPtr::Get(lVar2 + 0x14);
        lVar6 = *(longlong *)(lVar6 + 0xae8);
        if (lVar6 != 0) {
          FUN_1404c9880(lVar6,DAT_14686f228);
          FUN_1404c9880(lVar6,DAT_14686f220);
        }
        lVar6 = FWeakObjectPtr::Get(lVar2 + 0x14);
        TBaseMulticastDelegate<void>::Remove(lVar6 + 0x9a0,*(undefined8 *)(lVar2 + 0xf0));
        *(undefined8 *)(lVar2 + 0xf0) = 0;
        if (*(longlong *)(lVar2 + 0x2c8) != 0) {
          lVar6 = FWeakObjectPtr::Get(lVar2 + 0x14);
          TBaseMulticastDelegate<void>::Remove(lVar6 + 0x608,*(undefined8 *)(lVar2 + 0x2c8));
          *(undefined8 *)(lVar2 + 0x2c8) = 0;
          uVar5 = FUN_140b99a90(auStack_140);
          TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(lVar2 + 0x478,uVar5);
          FUN_140b9cdd0(auStack_140);
        }
        if (*(longlong *)(lVar2 + 0x2c0) != 0) {
          lVar6 = FWeakObjectPtr::Get(lVar2 + 0x14);
          TBaseMulticastDelegate<void>::Remove(lVar6 + 0x620,*(undefined8 *)(lVar2 + 0x2c0));
          *(undefined8 *)(lVar2 + 0x2c0) = 0;
          uVar5 = FUN_140b99a90(auStack_108);
          TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(lVar2 + 0x478,uVar5);
          FUN_140b9cdd0(auStack_108);
        }
      }
      FUN_140db2e80(lVar2 + 0x2d8);
      puVar4 = (undefined8 *)FName::FName(auStack_148,L"SPARK",1);
      FUN_1404d0c50(&plStack_168,*puVar4);
      plVar8 = plStack_168;
      if (plStack_168 != (longlong *)0x0) {
        (**(code **)(*plStack_168 + 0x40))(plStack_168,lVar2 + 0xb8);
        (**(code **)(*plVar8 + 0x1b8))(plVar8,lVar2 + 0x390);
        (**(code **)(*plVar8 + 0x360))(plVar8,lVar2 + 0x1f8);
        (**(code **)(*plVar8 + 0xe0))(plVar8,lVar2 + 0x1e8);
        (**(code **)(*plVar8 + 0x168))(plVar8,lVar2 + 0x1f0);
        (**(code **)(*plVar8 + 0x1b8))(plVar8,lVar2 + 0x3c0);
        (**(code **)(*plVar8 + 0xe0))(plVar8,lVar2 + 0x3b8);
      }
      if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
        if ((plVar8 != (longlong *)0x0) &&
           (iVar9 = (**(code **)(*plVar8 + 0x3a8))(plVar8), iVar9 == 1)) {
          FUN_140dbc950(lVar2,&lStack_1b8);
          plVar7 = plStack_1b0;
          if (lStack_1b8 != 0) {
            lStack_158 = lStack_1b8;
            plStack_150 = plStack_1b0;
            if (plStack_1b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_1b0 + 1) = (int)plStack_1b0[1] + 1;
              UNLOCK();
              plVar8 = plStack_168;
            }
            (**(code **)(*plVar8 + 0x380))(plVar8,&lStack_158);
            plVar8 = plStack_150;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              plVar7 = plStack_150 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              plVar7 = plStack_1b0;
              if ((int)lVar6 == 1) {
                (**(code **)*plStack_150)(plStack_150);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar7 = plStack_1b0;
                if (iVar9 == 1) {
                  (**(code **)(*plVar8 + 8))(plVar8,1);
                  plVar7 = plStack_1b0;
                }
              }
            }
          }
          plVar8 = plStack_1b0;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar7 + 1;
            lVar6 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_1b0)(plStack_1b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
              }
            }
          }
        }
      }
      else {
        (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x10))();
      }
      FUN_140db39c0(lVar2);
      plStack_48 = (longlong *)0x0;
      iStack_38 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,alStack_68);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = lVar2;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      alStack_178[0] = 0;
      apuStack_78[0] = &LAB_140db2ab0;
      alStack_178[1] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_178,0);
      FGenericPlatformString::Memcpy(alStack_178[0],L"cancel_matchmaking",0x26);
      FUN_140dcdc50(lVar2,alStack_178,apuStack_78);
      if (alStack_178[0] != 0) {
        FMemory::Free();
      }
      if (iStack_38 != 0) {
        plVar8 = alStack_68;
        if (plStack_48 != (longlong *)0x0) {
          plVar8 = plStack_48;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (plStack_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar8 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_160 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plStack_160 + 8))(plStack_160,1);
          }
        }
      }
      uVar5 = 1;
    }
    else {
      plStack_98 = (longlong *)0x0;
      iStack_88 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x10,alStack_b8);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[1] = lVar2;
        *puVar4 = &PTR_FUN_143f77b70;
      }
      alStack_1a8[0] = 0;
      apuStack_c8[0] = &LAB_140db2ad0;
      alStack_1a8[1] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_1a8,0);
      FGenericPlatformString::Memcpy(alStack_1a8[0],L"cancel_matchmaking",0x26);
      FUN_140dcdc50(lVar2,alStack_1a8,apuStack_c8);
      if (alStack_1a8[0] != 0) {
        FMemory::Free();
      }
      if (iStack_88 != 0) {
        plVar8 = alStack_b8;
        if (plStack_98 != (longlong *)0x0) {
          plVar8 = plStack_98;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (plStack_98 != (longlong *)0x0) {
        FMemory::Free();
      }
      uVar5 = 0;
    }
    return uVar5;
  }
  return in_RAX;
}



// FUNCTION 140bd5730 FUN_140bd5730 body=27 status=ok
// SIG undefined FUN_140bd5730(void)

void FUN_140bd5730(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_140dc6e70();
    return;
  }
  return;
}



// FUNCTION 140bd5750 FUN_140bd5750 body=429 status=ok
// SIG undefined FUN_140bd5750(void)

void FUN_140bd5750(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  if ((param_1[0x8c] != 0) && (cVar3 = (*(code *)**(undefined8 **)*param_2)(), cVar3 != '\0')) {
    if ((param_1[0x3f] != 0) && (lVar4 = UUGMenuManager::GetFadeHUD(), lVar4 != 0)) {
      TBaseMulticastDelegate<void>::Remove(lVar4 + 0x38,param_1[0x1f7]);
    }
    if (param_3 == '\0') {
      uVar9 = FUN_1404b03b0();
      FUN_140baa4e0(param_1,0,uVar9);
      return;
    }
    pcVar5 = (char *)FUN_140dbc5d0(param_1 + 0xbe,local_res8);
    if (*pcVar5 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140bd58dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x380))(param_1,(int)param_1[0x8e]);
      return;
    }
    lVar4 = 0;
    plVar1 = param_1 + 0xcd;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_14428ae88;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x40bda930;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar4;
      *plVar6 = (longlong)&PTR_FUN_14428aed0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar2 = (int)param_1[0xce];
      lVar4 = *plVar7;
      *(int *)(param_1 + 0xce) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x674) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar8 = plVar6;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    param_1[0x1f8] = lVar4;
    FUN_140db0da0(param_1 + 0xbe,param_2);
  }
  return;
}



// FUNCTION 140bd5900 FUN_140bd5900 body=1337 status=ok
// SIG undefined FUN_140bd5900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd5900(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  uint local_13c;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (((((char)param_1[99] != '\0') &&
       (puVar1 = (undefined8 *)param_1[0x45], puVar1 != (undefined8 *)0x0)) &&
      (cVar5 = (**(code **)*puVar1)(puVar1,*param_2), cVar5 != '\0')) && ((int)param_1[0x60] == 3))
  {
    if ((param_1[0x3f] != 0) && (lVar8 = UUGMenuManager::GetFadeHUD(), lVar8 != 0)) {
      TBaseMulticastDelegate<void>::Remove(lVar8 + 0x38,param_1[0x1f7]);
    }
    if (param_3 != '\0') {
      local_120 = *param_2;
      local_118 = param_2[1];
      if (local_118 != 0) {
        LOCK();
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
        UNLOCK();
      }
      lVar8 = FUN_14244c070(param_1,&local_120);
      if (lVar8 == 0) {
        uVar6 = FUN_140bb7990(param_1,(int)param_1[0x47]);
        lVar11 = 0;
        local_138 = 0;
        local_130 = 0;
        lVar8 = FUN_1424497b0(param_1,uVar6,&local_138,1);
        if (lVar8 != 0) {
          FUN_140bec4b0(param_1,lVar8,param_2,uVar6);
          bVar4 = false;
          lVar9 = FUN_140bbcf40(param_1);
          lVar10 = FUN_140bb89c0(param_1);
          lVar13 = 0;
          if (lVar10 == 0) {
            if (lVar9 == 0) {
              local_128 = param_1;
              lVar9 = FUN_140ba0b10(&local_128);
              if (lVar9 != 0) {
                lVar13 = *(longlong *)(lVar9 + 0x680);
              }
            }
            else {
              lVar13 = *(longlong *)(lVar9 + 0x4e8);
              bVar4 = true;
            }
          }
          else {
            lVar13 = *(longlong *)(lVar10 + 0x4e8);
          }
          lVar9 = UGameInstance::GetFirstGamePlayer(param_1);
          if (((lVar9 != 0) && (*(longlong **)(lVar9 + 0x30) != (longlong *)0x0)) &&
             (lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x758))(), lVar9 != 0)) {
            lVar11 = FUN_14290f280();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            lVar11 = 0;
            if (bVar3) {
              lVar11 = lVar9;
            }
          }
          uVar12 = FUN_140bb7630(param_1);
          FUN_140d709d0(uVar12);
          iVar7 = FUN_14046e5c0(param_1);
          while (1 < iVar7) {
            lVar9 = UGameInstance::GetLocalPlayerByIndex(param_1,0);
            if (lVar9 == 0) {
              iVar7 = (int)param_1[8];
              if (iVar7 + -1 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)param_1[7],(void *)(param_1[7] + 8),(longlong)(iVar7 + -1) << 3);
                iVar7 = (int)param_1[8];
              }
              *(int *)(param_1 + 8) = iVar7 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 7);
            }
            else {
              plVar2 = *(longlong **)(lVar9 + 0x30);
              if (plVar2 != (longlong *)0x0) {
                lVar10 = FUN_14145f370();
                if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                    lVar10 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((bVar3) && (lVar10 = (**(code **)(*plVar2 + 0xfa8))(plVar2), lVar10 != 0)) {
                  uVar12 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
                  FUN_142ee3cb0(uVar12);
                }
              }
              FUN_140dd1350(&DAT_14686a610,*(undefined4 *)(lVar9 + 0x108));
              FUN_140ba9370(param_1,lVar9);
              if (param_1[0xb6] != 0) {
                FUN_140eea2b0(param_1[0xb6],lVar9);
              }
              FUN_14245cc40(param_1);
            }
            iVar7 = FUN_14046e5c0(param_1);
          }
          lVar9 = UGameInstance::GetFirstGamePlayer(param_1);
          if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0x30), plVar2 != (longlong *)0x0)) {
            lVar9 = FUN_14145f370();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                lVar9 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if ((lVar13 != 0) && (lVar9 = (**(code **)(*plVar2 + 0xfa8))(plVar2), lVar9 != 0)) {
                TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x179);
                uVar12 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
                FUN_142f02280(uVar12,lVar13);
                if (bVar4) {
                  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x176);
                }
              }
              if (lVar11 != 0) {
                local_13c = local_13c & 0xfffffffe;
                local_148 = 0;
                local_140 = 0x40000000;
                local_144 = 1;
                (**(code **)(*plVar2 + 0xe18))(plVar2,lVar11,&local_148);
              }
            }
          }
          *(undefined1 *)(param_1 + 0x175) = 1;
          uVar12 = FUN_140bb7630(param_1);
          FUN_140d74dd0(uVar12);
        }
        if (local_138 != 0) {
          FMemory::Free();
        }
      }
      else if ((char)param_1[0x175] == '\0') {
        uVar6 = FUN_140bb7990(param_1,(int)param_1[0x47]);
        FUN_140bec4b0(param_1,lVar8,param_2,uVar6);
        *(undefined1 *)(param_1 + 0x175) = 1;
      }
      if (lVar8 != 0) {
        lVar11 = *(longlong *)(lVar8 + 0x30);
        if (lVar11 != 0) {
          lVar13 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_140d02500(lVar11);
          }
        }
        if ((int)param_1[0x44] == 3) {
          FUN_140ba4250(param_1,&DAT_146297e34,1);
          FUN_140ba8250(param_1,1);
          return;
        }
        FUN_140b9a900(local_108,param_1 + 0x48);
        FUN_140beaf50(param_1,5);
        (**(code **)(*param_1 + 0x298))(param_1,lVar8,local_108);
        FUN_1404bf650(local_108);
        FUN_140ba8250(param_1,1);
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x238) = 0;
    FUN_140beaf50(param_1,4);
  }
  return;
}



// FUNCTION 140bd5e40 FUN_140bd5e40 body=719 status=ok
// SIG undefined FUN_140bd5e40(void)

void FUN_140bd5e40(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  code *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined1 local_52;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  uVar5 = AActor::GetWorldTimerManager();
  FUN_142880530(uVar5,param_1 + 0x95);
  param_1[0x95] = 0;
  *(undefined1 *)(param_1 + 0x99) = 1;
  if (((*(char *)((longlong)param_1 + 0x4c9) != '\0') && (param_1[0x93] != 0)) &&
     (lVar6 = param_1[0x90], lVar6 != 0)) {
    plVar10 = *(longlong **)(lVar6 + 0x30);
    plVar9 = plVar10 + (longlong)*(int *)(lVar6 + 0x38) * 0xd;
    for (; plVar10 != plVar9; plVar10 = plVar10 + 0xd) {
      if (*plVar10 == param_1[0x93]) {
        *(undefined1 *)((longlong)param_1 + 0x4a4) = 2;
        *(undefined4 *)(param_1 + 0x94) = 0;
        if ((plVar10[5] != 0) && (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) {
          uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          UWorld::GetPlayerControllerIterator(uVar5,&local_78);
          iVar4 = (int)uStack_70;
          while( true ) {
            if ((iVar4 < 0) || (*(int *)(local_78 + 8) <= iVar4)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) break;
            lVar6 = FWeakObjectPtr::Get();
            if (lVar6 != 0) {
              lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((bVar1) && (*(longlong *)(lVar6 + 0x978) != 0)) {
                FUN_142e724b0(*(longlong *)(lVar6 + 0x978),plVar10[5],DAT_14686a480,0);
              }
            }
            iVar4 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,iVar4);
          }
        }
        FUN_142dd6360(param_1,plVar10[3]);
        FUN_142dd6bd0(param_1,plVar10[6]);
        local_64 = 0x3f800000;
        local_68 = 0;
        local_60 = 0;
        local_5c = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_54 = 0;
        local_52 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        local_28 = 0;
        lVar6 = FUN_1407eaf80(param_1,plVar10[1],0,&local_68,local_res10);
        param_1[0x92] = lVar6;
        *(undefined1 *)(param_1 + 0x91) = 0;
        if ((plVar10[6] != 0) && (*(char *)((longlong)plVar10 + 0x21) == '\0')) {
          *(undefined1 *)(param_1 + 0x91) = 1;
        }
        uStack_70 = uStack_70 & 0xffffffff00000000;
        local_78 = FUN_140bdbe30;
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSequenceStop",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res8,pwVar3 + 2,1);
        FUN_1407260e0(param_1[0x92] + 0x398,param_1,&local_78,local_res8);
        if ((char)plVar10[4] != '\0') {
          FUN_141f63530(param_1[0x92],0);
        }
        FUN_141f5abf0(param_1[0x92]);
        if (param_1[0x9c] == 0) {
          return;
        }
        FUN_142aab520();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bd6110 FUN_140bd6110 body=159 status=ok
// SIG undefined FUN_140bd6110(void)

void FUN_140bd6110(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 == 0x11f) {
    FUN_1404d0c50(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x168))(local_18,param_1 + 5);
    }
    (**(code **)(*param_1 + 0x20))(param_1,param_3);
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
  return;
}



// FUNCTION 140bd61b0 FUN_140bd61b0 body=286 status=ok
// SIG undefined FUN_140bd61b0(void)

void FUN_140bd61b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [16];
  longlong *local_18;
  
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x9a0,*(undefined8 *)(param_1 + 0xfb0));
  local_38 = *(longlong *)(param_1 + 0x460);
  if (local_38 == 0) {
    return;
  }
  local_30 = *(longlong **)(param_1 + 0x468);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  uVar7 = FAtomCueNameTrackKeyframe::FAtomCueNameTrackKeyframe(local_28);
  cVar6 = FUN_140bcaba0(param_1,&local_38,uVar7);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
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
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_18 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  if (cVar6 != '\0') {
    FUN_140bc8970(param_1);
    return;
  }
  uVar7 = FUN_1404b03b0();
  FUN_140baa4e0(param_1,0,uVar7);
  return;
}



// FUNCTION 140bd62d0 FUN_140bd62d0 body=140 status=ok
// SIG undefined FUN_140bd62d0(void)

void FUN_140bd62d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar5 = FUN_14044af00(param_1 + 0x1348,0);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x1348);
    uVar7 = FUN_140bb65e0(param_1,local_28);
    FUN_1410eb920(uVar6,uVar7,0);
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
  }
  return;
}



// FUNCTION 140bd6360 FUN_140bd6360 body=37 status=ok
// SIG undefined FUN_140bd6360(void)

void FUN_140bd6360(undefined8 param_1)

{
  FUN_140ba3700();
  FUN_140be6b60(param_1);
  FUN_140bccab0(param_1,0);
  return;
}



// FUNCTION 140bd6390 FUN_140bd6390 body=176 status=ok
// SIG undefined FUN_140bd6390(void)

void FUN_140bd6390(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    FUN_140ba3700();
    FUN_140be6b60(param_1);
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar1 == 0) || ((*(uint *)(lVar1 + 0x830) >> 2 & 1) == 0)) {
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_142f45ed0(uVar2,param_2,1,0,0);
    }
    else {
      uVar2 = UObjectBaseUtility::GetPathName(param_2,local_18,0);
      FUN_140bc8fd0(param_1,param_1 + 0x162,uVar2,1);
      if (local_18[0] != 0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bd6440 FUN_140bd6440 body=107 status=ok
// SIG undefined FUN_140bd6440(void)

void FUN_140bd6440(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar1 = FUN_1428cf800(uVar3);
    if (iVar1 == 3) goto LAB_140bd6484;
  }
  lVar2 = FUN_140bb6170(param_1);
  if (lVar2 == 0) {
    FUN_140bf2810(param_1);
    return;
  }
LAB_140bd6484:
  FUN_140bbf3a0(param_1,param_2);
  return;
}



// FUNCTION 140bd64b0 FUN_140bd64b0 body=27 status=ok
// SIG undefined FUN_140bd64b0(void)

void FUN_140bd64b0(undefined8 param_1)

{
  FUN_140bf6260();
  TBaseMulticastDelegate<void>::Broadcast(param_1);
  return;
}



// FUNCTION 140bd64d0 FUN_140bd64d0 body=494 status=ok
// SIG undefined FUN_140bd64d0(void)

void FUN_140bd64d0(longlong param_1,byte param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res18 [16];
  code *local_58;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x1060) < 2) && (*(int *)(param_1 + 0x1054) != 0)) {
      *(undefined4 *)(param_1 + 0x1054) = 0;
      TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0xc80,0);
    }
    goto LAB_140bd6596;
  }
  cVar1 = FUN_140678610(*(undefined8 *)(param_1 + 0x4e0));
  if ((cVar1 == '\0') && (param_2 != 0)) {
    if (param_2 < 3) {
      FUN_140beb3e0(param_1,2);
      goto LAB_140bd6590;
    }
    if (param_2 == 3) {
      FUN_140beb3e0(param_1,3);
      return;
    }
    if (param_2 == 4) {
      FUN_140beb3e0(param_1,4);
    }
    else {
      if (param_2 != 5) goto LAB_140bd6590;
      FUN_140beb3e0(param_1,5);
    }
LAB_140bd6596:
    if (*(int *)(param_1 + 0x1338) != 0) {
      *(undefined4 *)(param_1 + 0x1338) = 0;
    }
  }
  else {
LAB_140bd6590:
    if (param_2 != 3) goto LAB_140bd6596;
  }
  if (param_2 != 0) {
    return;
  }
  FUN_140bf3dd0(param_1);
  if (1 < *(int *)(param_1 + 0x1060)) {
    if (*(longlong *)(param_1 + 0x1070) == 0) {
      local_58 = FUN_140bda590;
      uStack_50 = 0;
      puVar2 = (undefined8 *)
               TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                         (param_1 + 0xc60,local_res18,param_1,&local_58);
      *(undefined8 *)(param_1 + 0x1070) = *puVar2;
      FUN_140be5350(param_1);
    }
    goto LAB_140bd66a5;
  }
  if (*(char *)(param_1 + 0x12d0) != '\0') {
    *(undefined1 *)(param_1 + 0x12d0) = 0;
    if (*(char *)(param_1 + 0x1310) == '\0') {
      local_30 = 0;
      local_38 = 0;
      local_28 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_20 = 0;
      local_18 = 0;
      FUN_140bb4ac0(param_1,0,&local_48);
      puVar2 = &local_48;
    }
    else {
      FUN_140bb4ac0(param_1,1,param_1 + 0x12d8);
      if (*(char *)(param_1 + 0x1310) == '\0') goto LAB_140bd6695;
      *(undefined1 *)(param_1 + 0x1310) = 0;
      puVar2 = (undefined8 *)(param_1 + 0x12d8);
    }
    FUN_140b9da90(puVar2);
  }
LAB_140bd6695:
  FUN_140ba81c0(param_1);
  FUN_140be3a90(param_1);
LAB_140bd66a5:
  *(undefined8 *)(param_1 + 0xcb0) = 0;
  return;
}



// FUNCTION 140bd66c0 FUN_140bd66c0 body=249 status=ok
// SIG undefined FUN_140bd66c0(void)

void FUN_140bd66c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 local_res8 [8];
  
  puVar3 = (undefined2 *)FUN_140dbc5d0(param_1 + 0xbe,local_res8);
  *(undefined2 *)(param_1 + 0x88) = *puVar3;
  cVar1 = FUN_140dbb7f0(param_1 + 0xbe);
  *(char *)(param_1 + 0x8b) = cVar1;
  *(bool *)((longlong)param_1 + 0x459) = cVar1 == '\x01';
  if (param_1[0x210] != 0) {
    if ((cVar1 == '\0') && ((char)param_1[0x163] != '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    FUN_140d9fcc0(param_1[0x210],uVar6);
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar4 == 0) || ((*(uint *)(lVar4 + 0x830) >> 2 & 1) == 0)) {
    FUN_140be3520(param_1);
    FUN_140be97d0(param_1);
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 == 0) {
LAB_140bd6780:
    lVar4 = FUN_140bb6170(param_1);
    if (lVar4 == 0) goto LAB_140bd67a5;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar2 = FUN_1428cf800(uVar5);
    if (iVar2 != 3) goto LAB_140bd6780;
  }
  if (param_1[0x15d] != 0) {
    FUN_1404c9880(param_1[0x15d],DAT_14686a168);
  }
LAB_140bd67a5:
  FUN_140bf2920(param_1,1);
  return;
}



// FUNCTION 140bd67c0 FUN_140bd67c0 body=306 status=ok
// SIG undefined FUN_140bd67c0(void)

void FUN_140bd67c0(longlong param_1,char param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong *local_res20;
  
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x1078) < 1) {
      return;
    }
  }
  else if (param_3 == *(int *)(param_1 + 0x1078)) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x4e0);
  plVar5 = *(longlong **)(param_1 + 0x4e8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar7 = false;
  if (*(char *)(lVar4 + 0x10) != '\0') {
    local_res20 = *(longlong **)(param_1 + 0x4e8);
    uVar6 = *(undefined8 *)(param_1 + 0x4e0);
    if (local_res20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_res20 + 1) = (int)local_res20[1] + 1;
      UNLOCK();
    }
    bVar7 = true;
    cVar9 = FUN_140678610(uVar6);
    if (cVar9 != '\0') {
      bVar8 = true;
      goto LAB_140bd6859;
    }
  }
  bVar8 = false;
LAB_140bd6859:
  if ((bVar7) && (local_res20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_res20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_res20)(local_res20);
      LOCK();
      piVar2 = (int *)((longlong)local_res20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_res20 + 8))(local_res20,1);
      }
    }
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
  if (!bVar8) {
    return;
  }
  FUN_140ba8040(param_1);
  return;
}



// FUNCTION 140bd6900 FUN_140bd6900 body=413 status=ok
// SIG undefined FUN_140bd6900(void)

void FUN_140bd6900(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if (DAT_14686a488 == 0) {
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
  }
  else {
    FName::ToString(&DAT_14686a488,&local_48);
    puVar7 = local_48;
    if ((int)local_40 != 0) goto LAB_140bd6962;
  }
  puVar7 = &DAT_143f3eda8;
LAB_140bd6962:
  uVar6 = FUN_142aae6e0();
  uVar6 = FUN_141799c90(uVar6,0,puVar7,0,0,0,1);
  *(undefined8 *)(param_1 + 0x4d0) = uVar6;
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar7 = &DAT_143f3eda8;
  if (DAT_14686a4a0 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 0;
  }
  else {
    FName::ToString(&DAT_14686a4a0,&local_38);
    if ((int)local_30 != 0) {
      puVar7 = local_38;
    }
  }
  uVar6 = FUN_1405b97a0();
  uVar6 = FUN_141799c90(uVar6,0,puVar7,0,0,0,1);
  *(undefined8 *)(param_1 + 0x4d8) = uVar6;
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x4b8) != &local_28) {
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4c0,&local_20);
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
  FUN_140be3030(param_1,param_2);
  return;
}



// FUNCTION 140bd6aa0 FUN_140bd6aa0 body=296 status=ok
// SIG undefined FUN_140bd6aa0(void)

void FUN_140bd6aa0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)0x0;
  if (param_1 + 0x263 != &local_18) {
    param_1[0x263] = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x264,&local_10);
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
    if (((int)param_1[0x182] != 0) &&
       (((longlong *)param_1[0x181] != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*(longlong *)param_1[0x181] + 0x18))(), cVar5 != '\0')))) {
      if ((int)param_1[0x182] != 0) {
        plVar7 = (longlong *)param_1[0x181];
      }
      (**(code **)(*plVar7 + 0x38))(plVar7);
    }
  }
  else {
    FUN_140be3ca0(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0xbad) = 0;
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x183);
  return;
}



// FUNCTION 140bd6bd0 FUN_140bd6bd0 body=60 status=ok
// SIG undefined FUN_140bd6bd0(void)

void FUN_140bd6bd0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_18 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_18,L"GbxShiftOverlay",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  (**(code **)(*plVar2 + 0xb8))(plVar2,DAT_14686a658);
  return;
}



// FUNCTION 140bd6c10 FUN_140bd6c10 body=72 status=ok
// SIG undefined FUN_140bd6c10(void)

void FUN_140bd6c10(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = AActor::GetWorldTimerManager();
  FUN_142880530(uVar1,param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  if (*(longlong *)(param_1 + 0x490) != 0) {
    UMovieSceneSequencePlayer::GoToEndAndStop();
  }
  return;
}



// FUNCTION 140bd6c60 FUN_140bd6c60 body=416 status=ok
// SIG undefined FUN_140bd6c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd6c60(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
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
  local_98 = FUN_140bd6c10;
  uStack_90 = 0;
  uVar1 = AActor::GetWorldTimerManager();
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
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
  local_a8 = 0;
  local_70 = 0;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_68 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar1,param_1 + 0x4b0,&local_88,0x3f000000);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140bd6e10 HandleOnLoadoutChangedChanged body=38 status=ok
// SIG undefined HandleOnLoadoutChangedChanged(void)

void URefinementWidget::HandleOnLoadoutChangedChanged(undefined8 param_1,longlong *param_2)

{
  FUN_140ba8d60();
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140bd6e40 FUN_140bd6e40 body=54 status=ok
// SIG undefined FUN_140bd6e40(void)

void FUN_140bd6e40(longlong param_1,longlong *param_2)

{
  *(undefined1 *)(param_1 + 0x4c9) = 1;
  if (*(char *)(param_1 + 0x4c8) != '\0') {
    FUN_140bd5e40();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140bd6e80 FUN_140bd6e80 body=536 status=ok
// SIG undefined FUN_140bd6e80(void)

void FUN_140bd6e80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar4 = (longlong *)FName::FName(local_38,&DAT_1442e8efc,1);
  if (param_3 == *plVar4) {
    FUN_1404cf2e0(&local_98,0);
    if (local_98 != (longlong *)0x0) {
      FText::FText(local_28,&DAT_14686f558);
      local_48 = 0;
      uStack_40 = 2;
      local_50 = 0;
      local_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_84 = 0;
      local_70 = (longlong *)0x0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      lVar6 = *local_98;
      uVar5 = FText::ToString(local_28);
      (**(code **)(lVar6 + 0x98))(local_98,uVar5,&local_88,&local_50);
      if (local_60 != 0) {
        FMemory::Free();
      }
      plVar4 = local_70;
      for (iVar8 = (int)local_68; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_70 != (longlong *)0x0) {
        FMemory::Free(local_70);
      }
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_50);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_20 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
    plVar4 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_90 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  else {
    plVar4 = (longlong *)FName::FName(local_30,"NoRemind",1);
    if ((param_3 == *plVar4) && (lVar6 = FUN_14244f490(param_1,0), lVar6 != 0)) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar6 = FUN_140cff230(lVar6), lVar6 != 0)) {
        *(undefined1 *)(lVar6 + 0x74) = 1;
        *(undefined1 *)(lVar6 + 0x28) = 1;
      }
    }
  }
  return;
}



// FUNCTION 140bd70a0 FUN_140bd70a0 body=886 status=ok
// SIG undefined FUN_140bd70a0(void)

void FUN_140bd70a0(longlong *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  longlong local_50;
  int local_48;
  longlong local_40;
  longlong *local_38;
  
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x134);
  FUN_140ba81c0(param_1);
  cVar5 = *param_2;
  if ((((cVar5 != '\x02') || (param_2[1] != '\0')) && ((char)param_1[99] != '\0')) &&
     (((int)param_1[0x44] == 3 && ((int)param_1[0x60] == 3)))) {
    FUN_140beaf50(param_1,4);
    cVar5 = *param_2;
  }
  if (cVar5 == '\0') {
    FUN_140be3a90(param_1);
  }
  else if (cVar5 == '\x02') {
    FUN_140dbbe50(param_1 + 0xbe,local_res18,local_res10,local_res8);
    uVar7 = FUN_140dbc5d0(param_1 + 0xbe,local_58);
    FUN_140bf7280(param_1,uVar7);
    lVar8 = FUN_140bb7870(param_1);
    if (lVar8 != 0) {
      FUN_1404e6550(lVar8,local_res18[0],local_res10[0],local_res8[0]);
    }
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    if (((lVar8 == 0) || ((*(uint *)(lVar8 + 0x830) >> 2 & 1) == 0)) &&
       (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) {
      UWorld::GetPlayerControllerIterator(lVar8,&local_50);
      while( true ) {
        if ((local_48 < 0) || (*(int *)(local_50 + 8) <= local_48)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) break;
        plVar6 = (longlong *)FWeakObjectPtr::Get();
        if (plVar6 != (longlong *)0x0) {
          lVar8 = FUN_14145f370();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            if (((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) == 0) ||
               (cVar5 = (**(code **)(*plVar6 + 0x768))(), cVar5 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) {
              FUN_14145e570(plVar6,local_res18[0],local_res10[0],local_res8[0]);
            }
          }
        }
        local_48 = local_48 + 1;
      }
    }
    if ((((param_2[1] == '\0') && ((char)param_1[99] != '\0')) && ((int)param_1[0x44] == 3)) &&
       (((int)param_1[0x60] == 3 && (lVar8 = param_1[0x45], lVar8 != 0)))) {
      local_38 = (longlong *)param_1[0x46];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      local_40 = lVar8;
      FUN_140dc0e70(param_1 + 0xbe,&local_40,param_1 + 0x61);
      plVar6 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_38)(local_38);
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
      FUN_140beaf50(param_1,5);
    }
  }
  if (param_1[500] != 0) {
    uVar7 = FUN_14164ab60();
    FUN_141597530(uVar7,param_1[500]);
    param_1[500] = 0;
    FUN_140baaff0(param_1);
  }
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar8 == 0) || ((*(uint *)(lVar8 + 0x830) >> 2 & 1) == 0)) && ((char)param_1[0x180] == '\0')
     ) {
    FUN_142d6f160(param_1);
  }
  else {
    FUN_142d5b8f0(param_1);
  }
  uVar7 = FUN_140bb7440(param_1);
  FUN_140d9f600(uVar7,9);
  uVar7 = FUN_140bb7440(param_1);
  FUN_140d9f600(uVar7,10);
  uVar7 = FUN_140bb7440(param_1);
  FUN_140d9f600(uVar7,0xe);
  FUN_140ba8250(param_1,0);
  return;
}



// FUNCTION 140bd7420 FUN_140bd7420 body=839 status=ok
// SIG undefined FUN_140bd7420(void)

void FUN_140bd7420(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  char local_res8;
  char local_res9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_108;
  longlong *local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined **local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_140dbc5d0(param_1 + 0x5f0,&local_res8);
  if (*(longlong *)(param_1 + 0x10d0) != 0) {
    FUN_140dd0ed0(*(longlong *)(param_1 + 0x10d0),0);
  }
  plVar3 = (longlong *)(param_1 + 0x430);
  lVar6 = *plVar3;
  if (lVar6 == 0) goto LAB_140bd76e5;
  cVar5 = *(char *)(lVar6 + 8);
  if ((*(int *)(lVar6 + 0xc) == 1) && (cVar5 == local_res8)) {
    if (cVar5 != '\x02') goto LAB_140bd76e5;
    if (*(char *)(lVar6 + 9) != local_res9) goto LAB_140bd74cf;
    FUN_140ba89d0(param_1);
    FUN_140becdf0(param_1);
    lVar6 = FUN_142b45e90();
    uVar7 = 1;
    cVar5 = local_res8;
  }
  else {
LAB_140bd74cf:
    if (*(char *)(lVar6 + 10) != '\0') {
      FText::FText(local_e8);
      if (*(int *)(*plVar3 + 0xc) == 4) {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_68,
                           L"Unable to perform action because there have been too many recent online requests. Please wait and try again later."
                           ,L"OakGameInstance",L"NetworkTransitionFailedRateLimit");
        FText::operator=(local_e8,uVar7);
      }
      else if (*(int *)(*plVar3 + 0xc) == 0xb) {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_80,
                           L"This feature requires all active players to be connected to Xbox Live and have multiplayer privileges."
                           ,L"OakGameInstance",L"NetworkTransitionFailedNoPrivilege");
        FText::operator=(local_e8,uVar7);
        local_60 = local_78;
      }
      else {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_98,L"A problem occurred while changing network options.",
                           L"OakGameInstance",L"NetworkTransitionFailed");
        FText::operator=(local_e8,uVar7);
        local_60 = local_90;
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_50,L"Network Error",L"OakGameInstance",L"NetworkError");
      local_d0 = &PTR_FUN_1443170a0;
      FText::FText(local_c8,uVar7);
      FText::FText(local_b0,local_e8);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      FWeakObjectPtr::operator=(local_res10,0);
      FWeakObjectPtr::operator=(local_res18,0);
      FWeakObjectPtr::operator=(local_f8,0);
      local_f0 = 0;
      FUN_140c23780(2,&local_d0,local_f8,local_res18,local_res10,2);
      FUN_140b9cdd0(&local_d0);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
    }
    lVar6 = FUN_142b45e90();
    uVar7 = 0;
  }
  FUN_140ba52f0(*(longlong *)(lVar6 + 0x18) + 0x120,cVar5 != '\0',uVar7);
LAB_140bd76e5:
  local_100 = (longlong *)0x0;
  if (plVar3 != &local_108) {
    *plVar3 = 0;
    local_108 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x438,&local_100);
    plVar3 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  FUN_140bd70a0(param_1,&local_res8);
  return;
}



// FUNCTION 140bd7770 FUN_140bd7770 body=125 status=ok
// SIG undefined FUN_140bd7770(void)

void FUN_140bd7770(longlong param_1,char *param_2)

{
  undefined2 local_res10 [12];
  
  if (*param_2 == '\0') {
    TBaseMulticastDelegate<void>::Remove(param_1 + 0x9a0,*(undefined8 *)(param_1 + 0xff0));
    *(undefined8 *)(param_1 + 0xff0) = 0;
    if (((*(char *)(param_1 + 0xb78) == '\0') &&
        (*(undefined2 **)(param_1 + 0x448) != (undefined2 *)0x0)) &&
       (local_res10[0] = **(undefined2 **)(param_1 + 0x448), *(char *)(param_1 + 0x318) == '\0')) {
      FUN_140ba4250(param_1,local_res10,0);
      return;
    }
  }
  else {
    FUN_140ba4250(param_1,&DAT_14686a12c,0);
  }
  return;
}



// FUNCTION 140bd77f0 FUN_140bd77f0 body=59 status=ok
// SIG undefined FUN_140bd77f0(void)

void FUN_140bd77f0(longlong param_1)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x9a0,*(undefined8 *)(param_1 + 0xff8));
  *(undefined8 *)(param_1 + 0xff8) = 0;
  FUN_140bf26e0(param_1,param_1 + 0x1000);
  return;
}



// FUNCTION 140bd7830 FUN_140bd7830 body=942 status=ok
// SIG undefined FUN_140bd7830(void)

void FUN_140bd7830(undefined8 param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined **local_100;
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
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FText::FText(local_118);
  switch(param_2) {
  case 1:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,L"The group leader removed you from the group.",L"OakGameInstance",
                       L"Kicked");
    FText::operator=(local_118,uVar5);
    local_30 = local_c0;
    break;
  case 2:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b0,L"Your connection to the host was lost. The host left the lobby.",
                       L"OakGameInstance",L"KickedInvite");
    FText::operator=(local_118,uVar5);
    local_30 = local_a8;
    break;
  case 3:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Your connection to the host was lost. The host quit the game.",
                       L"OakGameInstance",L"KickedQuitGame");
    FText::operator=(local_118,uVar5);
    local_30 = local_78;
    break;
  case 4:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,
                       L"The host chose to end the session to play a different network mode.",
                       L"OakGameInstance",L"KickedSessionEnd");
    FText::operator=(local_118,uVar5);
    local_30 = local_90;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,
                       L"Your connection to the host was lost. The host returned to the title screen."
                       ,L"OakGameInstance",L"KickedTitleScreen");
    FText::operator=(local_118,uVar5);
    local_30 = local_60;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,
                       L"Your connection to the host was lost due to incompatible mission state.",
                       L"OakGameInstance",L"KickedMission");
    FText::operator=(local_118,uVar5);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar4 = (longlong *)FUN_14244f490(param_1,0);
    if ((plVar4 != (longlong *)0x0) &&
       (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x4a8))(plVar4), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x2f8))(plVar4);
    }
    goto LAB_140bd7a83;
  default:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Your connection to the host was lost.",L"OakGameInstance",
                       L"KickedGeneric");
    FText::operator=(local_118,uVar5);
  }
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
LAB_140bd7a83:
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Connection Error",L"OakGameInstance",L"BeaconErrorDialogCaption");
  local_100 = &PTR_FUN_1443170a0;
  FText::FText(local_f8,uVar5);
  FText::FText(local_e0,local_118);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_18 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  local_100 = &PTR_FUN_1443170a0;
  FUN_140bbf3a0(param_1,&local_100);
  local_100 = &PTR_FUN_1443170a0;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d8 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_110 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd7c00 FUN_140bd7c00 body=218 status=ok
// SIG undefined FUN_140bd7c00(void)

void FUN_140bd7c00(undefined8 param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_28;
  longlong *local_20;
  
  if ((param_2 == 0x11f) && (param_4 != '\0')) {
    local_28 = *param_3;
    plVar6 = (longlong *)param_3[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_20 = plVar6;
    plVar5 = (longlong *)FUN_140bbb190(param_1,&local_28);
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
    if ((plVar5 != (longlong *)0x0) &&
       (plVar6 = (longlong *)(**(code **)(*plVar5 + 0x4a8))(plVar5), plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x2f8))(plVar6);
    }
    FUN_140bd7830(param_1,1);
  }
  return;
}



// FUNCTION 140bd7ce0 FUN_140bd7ce0 body=38 status=ok
// SIG undefined FUN_140bd7ce0(void)

void FUN_140bd7ce0(longlong param_1)

{
  FUN_1404b8a10(param_1 + 0x9f0);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x9c0);
  return;
}



// FUNCTION 140bd7d10 FUN_140bd7d10 body=23 status=ok
// SIG undefined FUN_140bd7d10(void)

void FUN_140bd7d10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10) != '\0')) {
    if ((*(char *)(lVar1 + 0x10) == '\x02') &&
       (cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x14), cVar2 != '\0')) {
      uVar3 = FWeakObjectPtr::Get(lVar1 + 0x14);
      lVar4 = FUN_140bb7900(uVar3);
      if ((lVar4 != 0) && (cVar2 = FUN_140db24b0(lVar1 + 0x88), cVar2 != '\0')) {
        if (*(longlong **)(lVar1 + 0x30) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc9b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x18))();
          return;
        }
        FUN_140db86e0(lVar1);
      }
    }
    return;
  }
  return;
}



// FUNCTION 140bd7d30 FUN_140bd7d30 body=1697 status=ok
// SIG undefined FUN_140bd7d30(void)

void FUN_140bd7d30(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  char param_5)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  wchar_t *_Str;
  uint uVar19;
  uint uVar20;
  void *_Src;
  undefined2 *puVar21;
  undefined1 local_res10 [8];
  void *local_148;
  ulonglong local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  void *local_118;
  uint local_110;
  undefined4 local_10c;
  longlong local_108;
  int local_100;
  wchar_t *local_f8;
  int local_f0;
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8;
  undefined2 *local_a0;
  int local_98;
  longlong local_90;
  longlong *local_80;
  int local_78;
  longlong local_70;
  undefined1 local_58 [32];
  
  lVar12 = FUN_140bb7870();
  if (lVar12 == 0) {
    lVar12 = FUN_140bb6170(param_1);
    if (lVar12 != 0) {
      plVar13 = (longlong *)FUN_140bb6170(param_1);
      (**(code **)(*plVar13 + 0x2a8))(plVar13,1);
    }
  }
  else {
    plVar13 = (longlong *)FUN_140bb7870();
    (**(code **)(*plVar13 + 0x2a8))(plVar13,1);
  }
  if (param_1[0x3f] != 0) {
    thunk_FUN_140c0a740(param_1[0x3f],param_4);
  }
  lVar12 = FUN_140b825a0(param_1);
  if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x5a0) != 0)) {
    FUN_142f43aa0(*(longlong *)(lVar12 + 0x5a0),param_2,param_3,param_4);
  }
  lVar12 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar12 != 0) {
    UWorld::GetPlayerControllerIterator(lVar12,&local_108);
    while( true ) {
      if ((local_100 < 0) || (*(int *)(local_108 + 8) <= local_100)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) break;
      plVar13 = (longlong *)FWeakObjectPtr::Get();
      if (plVar13 != (longlong *)0x0) {
        lVar12 = FUN_14145f370();
        if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
            != lVar12 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (((bVar7) && (cVar9 = (**(code **)(*plVar13 + 0x768))(), cVar9 != '\0')) &&
           (*(byte *)(plVar13 + 0x25) < 3)) {
          FUN_141460430();
        }
      }
      local_100 = local_100 + 1;
    }
  }
  _Src = (void *)0x0;
  bVar7 = false;
  puVar21 = &DAT_143f3eda8;
  lVar12 = -1;
  if ((param_5 != '\0') &&
     (iVar10 = FUN_141592950(param_2,&DAT_1442ea334,1,0,0xffffffff), iVar10 != -1)) {
    iVar3 = *(int *)(param_2 + 1);
    uVar20 = 0;
    uVar19 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar19 = uVar20;
    }
    uVar19 = uVar19 - iVar10;
    uVar17 = uVar20;
    pvVar6 = _Src;
    if (iVar3 != 0) {
      puVar21 = (undefined2 *)*param_2;
      uVar17 = iVar3 - 1;
      pvVar6 = (void *)(ulonglong)(iVar3 - 1);
    }
    uVar18 = uVar20;
    if ((-1 < (int)uVar19) && (uVar18 = uVar17, (int)uVar19 < (int)uVar17)) {
      uVar18 = uVar19;
    }
    local_148 = (void *)0x0;
    local_140 = 0;
    psVar2 = puVar21 + ((longlong)(int)pvVar6 - (longlong)(int)uVar18);
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      do {
        lVar12 = lVar12 + 1;
      } while (psVar2[lVar12] != 0);
      uVar19 = (int)lVar12 + 1;
      local_140 = (ulonglong)uVar19;
      uVar20 = uVar19;
      if (0 < (int)uVar19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        uVar20 = (uint)local_140;
      }
      _Src = local_148;
      FGenericPlatformString::Memcpy(local_148,psVar2,(longlong)(int)uVar19 * 2);
    }
    local_138 = 0;
    local_130 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"movieToLoad",0x18);
    local_118 = (void *)0x0;
    local_110 = uVar20;
    if (uVar20 == 0) {
      local_10c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,uVar20,0);
      _guard_xfg_dispatch_icall_nop(local_118,_Src,(longlong)(int)uVar20 * 2);
    }
    UGameplayStatics::ParseOption(&local_f8,&local_118,&local_138);
    if (local_138 != 0) {
      FMemory::Free();
    }
    if (local_f0 < 2) {
      bVar7 = false;
    }
    else {
      _Str = L"";
      if (local_f0 != 0) {
        _Str = local_f8;
      }
      iVar10 = _wtoi(_Str);
      FUN_1411f58b0(param_1 + 0xf4,iVar10);
      bVar7 = true;
    }
    if (local_f8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar21 = &DAT_143f3eda8;
  }
  else {
    puVar21 = (undefined2 *)*param_2;
  }
  FUN_14289aca0(local_c8,0,puVar21,0);
  puVar21 = &DAT_143f3eda8;
  if (local_98 != 0) {
    puVar21 = local_a0;
  }
  puVar14 = (undefined8 *)FName::FName(local_res10,puVar21,1);
  uVar15 = thunk_FUN_1422ca050();
  thunk_FUN_140a05c80(uVar15,*puVar14);
  FUN_1405c4db0();
  *(undefined1 *)((longlong)param_1 + 0xba9) = 1;
  puVar21 = &DAT_143f3eda8;
  if (local_98 != 0) {
    puVar21 = local_a0;
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
  plVar16 = (longlong *)FPackageName::GetShortName(local_e8,puVar21);
  plVar13 = param_1 + 0xb2;
  if (plVar13 != plVar16) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    *plVar13 = *plVar16;
    *plVar16 = 0;
    *(int *)(param_1 + 0xb3) = (int)plVar16[1];
    *(undefined4 *)((longlong)param_1 + 0x59c) = *(undefined4 *)((longlong)plVar16 + 0xc);
    plVar16[1] = 0;
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (!bVar7) {
    FUN_1411fbe40(param_1 + 0xf4,plVar13);
  }
  uVar15 = FUN_140bb7440(param_1);
  FUN_140d9f600(uVar15,8);
  FUN_140be3520(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686a704) && (_Init_thread_header(&DAT_14686a704), DAT_14686a704 == -1))
  {
    uVar15 = FCommandLine::Get();
    DAT_14686a700 = FParse::Param(uVar15,L"vkLogPSO");
    _Init_thread_footer(&DAT_14686a704);
  }
  plVar13 = (longlong *)UGameInstance::GetGameViewportClient(param_1);
  if ((plVar13 != (longlong *)0x0) && (DAT_14686a700 != '\0')) {
    if (DAT_146298610 == '\0') {
      local_128 = 0;
      local_120 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      FGenericPlatformString::Memcpy(local_128,L"r.Vulkan.SavePipelineCache",0x36);
      (**(code **)(*plVar13 + 0x2e8))(plVar13,local_d8,&local_128);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
    }
    else {
      DAT_146298610 = '\0';
    }
  }
  cVar9 = FUN_140becb30(param_1);
  if (cVar9 == '\0') goto LAB_140bd82f4;
  if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
    if (DAT_146ac3ac5 == '\0') {
      cVar9 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar11 = GetCurrentThreadId();
        bVar7 = false;
        if (DVar11 == DAT_1468c21c0) goto LAB_140bd8284;
      }
      else {
LAB_140bd8284:
        bVar7 = true;
      }
      if (bVar7) goto LAB_140bd828a;
    }
    plVar13 = (longlong *)FUN_140badd60(local_58,0,0xff);
    lVar12 = *plVar13;
    lVar8 = plVar13[2];
    lVar4 = plVar13[1];
    lVar5 = *(longlong *)(lVar12 + 0x18);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445370(lVar12,lVar4,(int)lVar8,1);
    if (lVar5 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  else {
LAB_140bd828a:
    FBaseGraphTask::GetSmallTaskAllocator();
    ConsoleCommandSavePipelineFileCache();
  }
LAB_140bd82f4:
  plVar13 = local_80;
  if (local_70 != 0) {
    FMemory::Free();
    plVar13 = local_80;
  }
  for (; local_78 != 0; local_78 = local_78 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_80 != (longlong *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140bd83e0 FUN_140bd83e0 body=355 status=ok
// SIG undefined FUN_140bd83e0(void)

void FUN_140bd83e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined8 *local_28;
  int local_20;
  
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_res8);
  lVar1 = *plVar4;
  if (*(int *)(param_1 + 0xd88) != *(int *)(param_1 + 0xdb4)) {
    lVar5 = *(longlong *)(param_1 + 0xdc0);
    if (*(longlong *)(param_1 + 0xdc0) == 0) {
      lVar5 = param_1 + 0xdb8;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0xdc8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0xd80));
        if (*plVar4 == lVar1) {
          if (iVar3 != -1) goto LAB_140bd8485;
          break;
        }
        iVar3 = (int)plVar4[5];
      } while (iVar3 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140bd8485:
  plVar7 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (((plVar7 != (longlong *)0x0) &&
      (cVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*plVar7), cVar2 != '\0'))
     && ((int)plVar7[3] < 2)) {
    FString::operator=(plVar7 + 2,param_3);
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_res8)
    ;
    FUN_140bbbda0(param_1,&local_28,*puVar6);
    for (puVar6 = local_28; puVar6 != local_28 + (longlong)local_20 * 2; puVar6 = puVar6 + 2) {
      cVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*puVar6);
      if (cVar2 == '\0') {
        FUN_140bf0650(param_1,puVar6,param_3);
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_28);
  }
  return;
}



// FUNCTION 140bd8550 FUN_140bd8550 body=382 status=ok
// SIG undefined FUN_140bd8550(void)

void FUN_140bd8550(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_38 = param_2;
  local_30 = param_3;
  FUN_140532af0(param_1 + 0x1ba,local_res10,&local_38,0);
  uVar3 = FUN_140dbc5d0(param_1 + 0xbe,local_res8);
  FUN_140bf7280(param_1,uVar3);
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar2 = FUN_1428cf800(uVar3);
    if (iVar2 == 3) {
      return;
    }
  }
  lVar4 = FUN_140bb6170(param_1);
  if (lVar4 == 0) {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_res18);
    lVar4 = *plVar5;
    if ((int)param_1[0x1b1] != *(int *)((longlong)param_1 + 0xdb4)) {
      plVar5 = (longlong *)param_1[0x1b8];
      if ((longlong *)param_1[0x1b8] == (longlong *)0x0) {
        plVar5 = param_1 + 0x1b7;
      }
      iVar2 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[0x1b9] - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar5 = (longlong *)((longlong)iVar2 * 0x30 + param_1[0x1b0]);
          if (*plVar5 == lVar4) {
            if (iVar2 != -1) goto LAB_140bd8675;
            break;
          }
          iVar2 = (int)plVar5[5];
        } while (iVar2 != -1);
      }
    }
    plVar5 = (longlong *)0x0;
LAB_140bd8675:
    plVar6 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      local_28 = *plVar6;
      local_20 = plVar6[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      cVar1 = FUN_140bca7d0(param_1,&local_28);
      if (cVar1 == '\0') {
        FUN_140bf0220(param_1,plVar6,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 140bd86d0 FUN_140bd86d0 body=426 status=ok
// SIG undefined FUN_140bd86d0(void)

void FUN_140bd86d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_48;
  longlong **local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0x440) == '\x02') {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_res18);
    lVar2 = *plVar5;
    if (*(int *)(param_1 + 0xd88) != *(int *)(param_1 + 0xdb4)) {
      lVar6 = *(longlong *)(param_1 + 0xdc0);
      if (*(longlong *)(param_1 + 0xdc0) == 0) {
        lVar6 = param_1 + 0xdb8;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(param_1 + 0xdc8) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)((longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0xd80));
          if (*plVar5 == lVar2) {
            if (iVar4 != -1) goto LAB_140bd8776;
            break;
          }
          iVar4 = (int)plVar5[5];
        } while (iVar4 != -1);
      }
    }
    plVar5 = (longlong *)0x0;
LAB_140bd8776:
    plVar7 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    if (plVar7 == (longlong *)0x0) {
      local_30 = (longlong *)param_2[1];
      local_38 = (longlong *)*param_2;
      plVar5 = local_38;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        plVar5 = (longlong *)*param_2;
      }
      local_28 = 0;
      local_20 = 0;
      local_48 = (**(code **)(*plVar5 + 8))(plVar5,local_res20);
      local_40 = &local_38;
      FUN_140b95120((longlong *)(param_1 + 0xd80),local_res8,&local_48,0);
      if (local_28 != 0) {
        FMemory::Free();
      }
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_30 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_30)(local_30);
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
      FUN_140bf04a0(param_1,param_2);
      return;
    }
    if ((1 < (int)plVar7[3]) &&
       (cVar3 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*plVar7), cVar3 == '\0')
       ) {
      FUN_140bf0650(param_1,param_2,plVar7 + 2);
    }
  }
  return;
}



// FUNCTION 140bd8880 FUN_140bd8880 body=561 status=ok
// SIG undefined FUN_140bd8880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd8880(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  int local_70;
  undefined8 *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  longlong local_48 [2];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x440) == '\x02') {
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_60);
    lVar3 = *plVar6;
    if (*(int *)(param_1 + 0xd88) != *(int *)(param_1 + 0xdb4)) {
      lVar7 = *(longlong *)(param_1 + 0xdc0);
      if (*(longlong *)(param_1 + 0xdc0) == 0) {
        lVar7 = param_1 + 0xdb8;
      }
      iVar5 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                               (longlong)*(int *)(param_1 + 0xdc8) - 1U) * 4);
      if (iVar5 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0xd80));
          if (*plVar6 == lVar3) {
            if (iVar5 != -1) goto LAB_140bd8945;
            break;
          }
          iVar5 = (int)plVar6[5];
        } while (iVar5 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_140bd8945:
    plVar9 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    if ((plVar9 != (longlong *)0x0) &&
       (cVar4 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*plVar9), cVar4 != '\0')
       ) {
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_58)
      ;
      FUN_140bbbda0(param_1,&local_78,*puVar8);
      local_68 = param_2;
      FUN_140b96910(&local_78,&local_68);
      if (local_70 < 1) {
        puVar8 = (undefined8 *)
                 (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_50);
        FUN_140be7330((longlong *)(param_1 + 0xd80),*puVar8);
      }
      else {
        plVar6 = (longlong *)local_78[1];
        lVar3 = *local_78;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_88 = lVar3;
        plStack_80 = plVar6;
        if (&local_88 != plVar9) {
          local_88 = *plVar9;
          plStack_80 = (longlong *)plVar9[1];
          *plVar9 = lVar3;
          plVar9[1] = (longlong)plVar6;
          local_38 = lVar3;
          plStack_30 = plVar6;
        }
        plVar6 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_80 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_80 + 8))(plStack_80,1);
            }
          }
        }
        plVar6 = plVar9 + 2;
        if (plVar6 != local_48) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          *plVar6 = 0;
          plVar9[3] = 0;
        }
        FUN_140bf04a0(param_1,local_78);
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
    }
  }
  return;
}



// FUNCTION 140bd8ac0 FUN_140bd8ac0 body=1544 status=ok
// SIG undefined FUN_140bd8ac0(void)

void FUN_140bd8ac0(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  void *local_148;
  int local_140;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong *local_110;
  code *local_108;
  ulonglong uStack_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  int local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  iVar4 = (**(code **)(*(longlong *)param_1[0x1c4] + 0x10))();
  if ((iVar4 == 0) && (*(int *)(param_1[0x1c4] + 0x18) == 1)) {
    FUN_140bbbfc0(param_1,&local_148);
    if (1 < local_140) {
      local_res10 = 0;
      plVar5 = (longlong *)FUN_1404b0000(&local_res10);
      if (plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,local_c8);
        lVar6 = *plVar5;
        if ((int)param_1[0x1b1] != *(int *)((longlong)param_1 + 0xdb4)) {
          plVar5 = (longlong *)param_1[0x1b8];
          if ((longlong *)param_1[0x1b8] == (longlong *)0x0) {
            plVar5 = param_1 + 0x1b7;
          }
          iVar4 = *(int *)((longlong)plVar5 +
                          ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                          (longlong)(int)param_1[0x1b9] - 1U) * 4);
          if (iVar4 != -1) {
            do {
              plVar5 = (longlong *)((longlong)iVar4 * 0x30 + param_1[0x1b0]);
              if (*plVar5 == lVar6) {
                if ((iVar4 != -1) && (plVar11 = plVar5 + 1, plVar5 != (longlong *)0x0))
                goto LAB_140bd8bce;
                break;
              }
              iVar4 = (int)plVar5[5];
            } while (iVar4 != -1);
          }
        }
      }
      plVar11 = (longlong *)0x0;
LAB_140bd8bce:
      if (plVar11 != (longlong *)0x0) {
        cVar3 = FUN_140bc9f60(param_1);
        if (cVar3 == '\0') {
          FUN_140bd83e0(param_1,plVar11,&local_148);
        }
        else {
          FString::operator=(plVar11 + 2,&local_148);
          lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
          if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
            lVar6 = UGameInstance::GetFirstGamePlayer(param_1);
            if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)) {
              lVar7 = FUN_14145f370();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                FUN_141460040(lVar6,&local_148);
              }
            }
          }
          else {
            lVar6 = FUN_140bb6170(param_1);
            _Src = local_148;
            if (lVar6 != 0) {
              local_138 = (void *)0x0;
              local_130 = local_140;
              if (local_140 == 0) {
                local_12c = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_138,local_140,0);
                _guard_xfg_dispatch_icall_nop(local_138,_Src,(longlong)local_140 * 2);
              }
              FUN_1404e2160(lVar6,&local_138);
              if (local_138 != (void *)0x0) {
                FMemory::Free();
              }
            }
          }
        }
      }
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free();
    }
  }
  iVar4 = (**(code **)(*(longlong *)param_1[0x1c4] + 0x10))();
  if (iVar4 == 1) {
    if (*(int *)(param_1[0x1c4] + 0x18) == 1) {
      FUN_140bbbfc0(param_1,&local_d8);
      if (1 < local_d0) {
        FUN_140bcdf00(param_1,&local_d8);
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
    }
    else if ((*(int *)(param_1[0x1c4] + 0x18) != 5) && (1 < (int)param_1[0x1c8])) {
      FWeakObjectPtr::operator=(&local_e8,param_1);
      local_e0 = local_e8;
      local_68 = 0;
      local_58 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_88);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_CopyToEmptyStorage_143fcfe50;
        *(undefined4 *)((longlong)puVar8 + 0xc) = local_e0._4_4_;
        *(int *)(puVar8 + 1) = (int)local_e8;
      }
      local_98[0] = &LAB_140ba56a0;
      uVar10 = FUN_14164ab60();
      FUN_14158f940(uVar10,local_c0,L"PresenceSession_JoinRetry",0x41700000,local_98);
    }
  }
  iVar4 = (**(code **)(*(longlong *)param_1[0x1c4] + 0x10))();
  if (((iVar4 == 0) || (iVar4 = (**(code **)(*(longlong *)param_1[0x1c4] + 0x10))(), iVar4 == 1)) &&
     (*(int *)(param_1[0x1c4] + 0x18) == 1)) {
    puVar8 = (undefined8 *)FName::FName(local_b8,L"SPARK",1);
    FUN_1404d0c50(&local_f8,*puVar8);
    if (local_f8 != (longlong *)0x0) {
      local_res18 = 0x11f;
      lVar6 = (**(code **)(*local_f8 + 0x10))(local_f8,0x11f);
      if (lVar6 != 0) {
        local_res20 = 0;
        FUN_1404d0c50(&local_118,0);
        if (local_118 != (longlong *)0x0) {
          puVar8 = *(undefined8 **)(lVar6 + 0xf0);
          puVar12 = puVar8 + (longlong)*(int *)(lVar6 + 0xf8) * 2;
          plVar5 = local_118;
          for (; puVar8 != puVar12; puVar8 = puVar8 + 2) {
            puVar9 = (undefined8 *)
                     (**(code **)(*(longlong *)*puVar8 + 8))((longlong *)*puVar8,local_b0);
            cVar3 = FUN_140bc9fb0(param_1,*puVar9);
            if (cVar3 != '\0') {
              local_108 = (code *)*puVar8;
              uStack_100 = puVar8[1];
              if (uStack_100 != 0) {
                LOCK();
                *(int *)(uStack_100 + 8) = *(int *)(uStack_100 + 8) + 1;
                UNLOCK();
                plVar5 = local_118;
              }
              cVar3 = FUN_140bca7d0(param_1,&local_108);
              if (cVar3 == '\0') {
                local_128 = 0x11f;
                (**(code **)(*plVar5 + 0x2d0))(plVar5,0x11f,puVar8);
              }
            }
          }
          if (*(int *)(lVar6 + 0x110) == 4) {
            local_120 = 0x11f;
            (**(code **)(*plVar5 + 0x58))(plVar5,0x11f);
          }
        }
        plVar5 = local_110;
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_110 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
      }
    }
    iVar4 = (**(code **)(*(longlong *)param_1[0x1c4] + 0x10))();
    if (iVar4 == 0) {
      uVar10 = FUN_140dbc5d0(param_1 + 0xbe,local_res8);
      FUN_140bf7280(param_1,uVar10);
    }
    plVar5 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_f0 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  puVar8 = (undefined8 *)param_1[0x1c4];
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  plVar5 = (longlong *)param_1[0x1c5];
  param_1[0x1c4] = 0;
  if (plVar5 == (longlong *)0x0) {
    plVar11 = (longlong *)param_1[0x1c6];
    plVar5 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) {
      param_1[0x1c4] = (longlong)plVar11;
      param_1[0x1c6] = 0;
      plVar5 = plVar11;
    }
  }
  else {
    param_1[0x1c4] = (longlong)plVar5;
    param_1[0x1c5] = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    uStack_9c = (undefined4)(uStack_100 >> 0x20);
    uStack_100 = uStack_100 & 0xffffffff00000000;
    local_108 = FUN_140bd8ac0;
    local_a8 = 0x40bd8ac0;
    uStack_a4 = 1;
    uStack_a0 = 0;
    FUN_1407ffe80(plVar5 + 1,param_1,&local_a8);
    (**(code **)(*(longlong *)param_1[0x1c4] + 8))();
  }
  return;
}



// FUNCTION 140bd90d0 FUN_140bd90d0 body=1833 status=ok
// SIG undefined FUN_140bd90d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bd90d0(longlong *param_1,int param_2,longlong *param_3,undefined4 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_338 [32];
  undefined1 local_318 [4];
  undefined4 local_314;
  longlong *local_310;
  int local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  longlong *local_2e0;
  code *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  longlong local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined1 local_290 [8];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [16];
  undefined1 local_268 [48];
  undefined4 local_238 [2];
  longlong local_230;
  longlong *local_228;
  undefined4 local_220;
  undefined **local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined **local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  longlong *local_128;
  undefined4 local_120;
  undefined1 local_118 [192];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_314 = param_4;
  if ((((param_2 != 1) || (*(longlong *)(param_5 + 8) == 0)) ||
      (*(longlong **)(param_5 + 0xa0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_5 + 0xa0) + 0x20))(), cVar5 == '\0')) {
    FUN_140becf70(param_1,param_2,param_3);
    return;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((((lVar6 != 0) && ((*(uint *)(lVar6 + 0x830) >> 2 & 1) != 0)) &&
      ((char)param_1[0x175] == '\0')) || (cVar5 = FUN_140bc9df0(param_1), cVar5 != '\0')) {
    local_230 = *param_3;
    local_218 = &PTR_FUN_143f769a8;
    local_238[0] = 4;
    local_1f0 = &PTR_FUN_143f769a0;
    local_2e0 = (longlong *)param_3[1];
    local_228 = (longlong *)0x0;
    local_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d4 = 0;
    local_1cc = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0xffffffff;
    local_194 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 9999;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
      UNLOCK();
    }
    local_2e8 = 0;
    local_220 = param_4;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_228,&local_2e0);
    plVar9 = local_2e0;
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_2e0 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_2e0)(local_2e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_2e0 + 8))(local_2e0,1);
        }
      }
    }
    FUN_1404c0750(&local_218,param_5);
    local_160 = *(undefined4 *)(param_5 + 0xb8);
    plVar9 = param_1 + 100;
    if ((longlong *)local_238 != plVar9) {
      if ((char)param_1[0x83] != '\0') {
        *(undefined1 *)(param_1 + 0x83) = 0;
        FUN_140b9da20(plVar9);
      }
      FUN_140b9a9b0(plVar9,local_238);
      *(undefined1 *)(param_1 + 0x83) = 1;
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_150);
    FUN_1404bf650(&local_218);
    plVar9 = local_228;
    goto LAB_140bd97a8;
  }
  local_2a0 = *param_3;
  local_298 = param_3[1];
  if (local_298 != 0) {
    LOCK();
    *(int *)(local_298 + 8) = *(int *)(local_298 + 8) + 1;
    UNLOCK();
  }
  cVar5 = FUN_140bca7d0(param_1,&local_2a0);
  if (cVar5 == '\0') {
    lVar6 = UGameInstance::GetFirstGamePlayer(param_1);
    if (lVar6 != 0) {
      lVar6 = FUN_142547b50(lVar6,local_268);
      plVar9 = *(longlong **)(lVar6 + 0x10);
      lVar6 = *(longlong *)(lVar6 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      FUN_1404bf980(local_268);
      if (lVar6 != 0) {
        FWeakObjectPtr::operator=(&local_2f8,param_1);
        local_300 = local_2f8;
        local_2fc = local_2f4;
        local_2c8 = *param_3;
        plVar10 = (longlong *)param_3[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_2c0 = 0;
        local_2b8 = 0;
        puVar7 = (undefined8 *)operator_new(0x38,&local_2c0);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_GetPoolName_144318fc0;
          *(undefined4 *)(puVar7 + 1) = local_300;
          *(undefined4 *)((longlong)puVar7 + 0xc) = local_2fc;
          puVar7[2] = local_2c8;
          puVar7[3] = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          *(undefined4 *)(puVar7 + 4) = local_314;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[6] = uVar8;
          *puVar7 = &PTR_GetPoolName_144319008;
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_2b0 = lVar6;
        local_2a8 = plVar9;
        FUN_140bb45f0(param_1,&local_2b0,param_5,&local_2c0);
        plVar3 = local_2a8;
        if (local_2a8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_2a8 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_2a8)(local_2a8);
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
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar10 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        goto LAB_140bd97a8;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar9 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
LAB_140bd936f:
    FUN_140becf70(param_1,2,param_3);
    return;
  }
  cVar5 = FUN_140ba1250(local_318,param_3);
  if (cVar5 != '\0') {
    local_2d8 = FUN_140bd3c60;
    uStack_2d0 = 0;
    local_288 = 0x40bd3c60;
    uStack_284 = 1;
    uStack_280 = 0;
    uStack_27c = uStack_2cc;
    uVar8 = TBaseDelegate<TTypeWrapper<void>_>::
            CreateUObject<AFlarePlayerController,enum_EFlareCombatTactic::Type>
                      (local_278,param_1,&local_288,param_4);
    FUN_140bb45f0(param_1,param_3,param_5,uVar8);
    return;
  }
  if ((param_1[0x3f] == 0) ||
     (plVar9 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar9 == (longlong *)0x0))
  goto LAB_140bd936f;
  if (param_1[0x1af] != 0) {
    (**(code **)(*plVar9 + 0x88))(plVar9,param_1 + 0x1af);
  }
  FWeakObjectPtr::operator=(&local_2f0,param_1);
  local_138 = local_2f0;
  local_134 = local_2ec;
  local_130 = *param_3;
  local_128 = (longlong *)param_3[1];
  if (local_128 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_128 + 1) = (int)local_128[1] + 1;
    UNLOCK();
  }
  local_120 = local_314;
  FUN_140b9a900(local_118,param_5);
  local_310 = (longlong *)0x0;
  plVar10 = (longlong *)FMemory::Realloc(0,0x100,0);
  local_308 = 0x10;
  local_310 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_GetPoolName_144319050;
    *(undefined4 *)(plVar10 + 1) = local_138;
    *(undefined4 *)((longlong)plVar10 + 0xc) = local_134;
    plVar10[2] = local_130;
    plVar10[3] = (longlong)local_128;
    if (local_128 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar10 + 4) = local_120;
    FUN_140b9a900(plVar10 + 5,local_118);
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar10[0x1e] = lVar6;
    *plVar10 = (longlong)&PTR_GetPoolName_144319098;
  }
  plVar10 = (longlong *)(**(code **)(*plVar9 + 0x80))(plVar9,local_290,&local_310);
  param_1[0x1af] = *plVar10;
  if (local_308 == 0) {
LAB_140bd9548:
    if (local_310 != (longlong *)0x0) {
      FMemory::Free(local_310);
    }
  }
  else if (local_310 != (longlong *)0x0) {
    (**(code **)(*local_310 + 0x28))(local_310,0);
    if (local_310 != (longlong *)0x0) {
      local_310 = (longlong *)FMemory::Realloc(local_310,0,0);
    }
    local_308 = 0;
    goto LAB_140bd9548;
  }
  FUN_1404bf650(local_118);
  plVar10 = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_128 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  lVar6 = FUN_142b45e90();
  FUN_142b48170(*(undefined8 *)(lVar6 + 0x18),&local_2d8,param_3);
  if ((local_2d8 == (code *)0x0) || (cVar5 = FUN_142b547b0(), cVar5 == '\0')) {
    FUN_140d2abc0(plVar9,param_3,0);
  }
  plVar9 = (longlong *)CONCAT44(uStack_2cc,uStack_2d0);
LAB_140bd97a8:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 140bd9800 FUN_140bd9800 body=92 status=ok
// SIG undefined FUN_140bd9800(void)

void FUN_140bd9800(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_140bedb60();
  }
  if (*(int *)(param_1 + 0x10dc) == 1) {
    lVar1 = param_1 + 0xc30;
  }
  else {
    if (*(int *)(param_1 + 0x10dc) != 2) goto LAB_140bd9847;
    lVar1 = param_1 + 0xc48;
  }
  FUN_140ba5240(lVar1,param_3);
LAB_140bd9847:
  *(undefined4 *)(param_1 + 0x10dc) = 0;
  return;
}



// FUNCTION 140bd9860 FUN_140bd9860 body=1455 status=ok
// SIG undefined FUN_140bd9860(void)

void FUN_140bd9860(longlong param_1,char param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if (param_2 == '\0') {
    plVar8 = (longlong *)param_3[1];
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*plVar8 + 8))(plVar8,1);
    return;
  }
  lVar5 = FUN_142b45e90();
  uVar4 = *(undefined8 *)(lVar5 + 0x18);
  local_b0 = *param_3;
  local_a8 = (longlong *)param_3[1];
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  FUN_142b4a990(uVar4,&local_c0,&local_b0);
  plVar8 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_c0 == 0) {
LAB_140bd9d8f:
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b8 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    plVar8 = (longlong *)param_3[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  else {
    local_c8 = 0;
    local_e8 = 0;
    plStack_e0 = (longlong *)0x0;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    FUN_1404cf890(&local_f8,0);
    plVar1 = local_f0;
    plVar8 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_f0 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
joined_r0x000140bd9b3b:
          if (iVar3 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*local_f8 + 0x60))(local_f8,local_60,param_5);
      if (&local_e8 != puVar6) {
        local_e8 = *puVar6;
        *puVar6 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_e0,puVar6 + 1);
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_58 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_f8;
        if ((int)lVar5 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar8 = local_f8;
          if (iVar3 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
            plVar8 = local_f8;
          }
        }
      }
      puVar6 = (undefined8 *)FName::FName(local_68,L"SPARK",1);
      pplVar7 = (longlong **)FUN_1404cf890(local_50,*puVar6);
      if (&local_f8 != pplVar7) {
        local_f8 = *pplVar7;
        *pplVar7 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_f0,pplVar7 + 1);
        plVar8 = local_f8;
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_48 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar8 = local_f8;
        if ((int)lVar5 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar8 = local_f8;
          if (iVar3 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
            plVar8 = local_f8;
          }
        }
      }
      plVar1 = local_f0;
      if (plVar8 != (longlong *)0x0) {
        puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x60))(plVar8,local_40,param_6);
        if (&local_d8 != puVar6) {
          local_d8 = *puVar6;
          *puVar6 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_d0,puVar6 + 1);
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_38 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        local_78 = local_e8;
        plStack_70 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
          UNLOCK();
        }
        local_88 = local_d8;
        plStack_80 = plStack_d0;
        if (plStack_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
          UNLOCK();
        }
        local_a0 = &local_88;
        local_98 = &local_78;
        FUN_140b94de0(param_1 + 0xea0,local_res10,&local_a0,0);
        plVar8 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_80 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        plVar8 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_70)(plStack_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
        plVar8 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f0 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_f0 + 8))(local_f0,1);
            }
          }
        }
        plVar8 = plStack_d0;
        if (plStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_d0 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_d0)(plStack_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
            }
          }
        }
        plVar8 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_e0 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_e0)(plStack_e0);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
            }
          }
        }
        goto LAB_140bd9d8f;
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_f0 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      plVar8 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_e0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          local_f0 = plStack_e0;
          goto joined_r0x000140bd9b3b;
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b8 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  }
  return;
}



// FUNCTION 140bd9e10 FUN_140bd9e10 body=955 status=ok
// SIG undefined FUN_140bd9e10(void)

void FUN_140bd9e10(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined4 local_178;
  undefined4 uStack_174;
  longlong local_170;
  longlong *local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [32];
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  local_178 = 0;
  lVar7 = UGameInstance::GetFirstGamePlayer();
  if (lVar7 == 0) {
    plVar9 = (longlong *)CONCAT44(uStack_174,local_178);
    plVar8 = (longlong *)0x0;
    lVar7 = 0;
    plVar10 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    lVar7 = FUN_142547b50(lVar7,local_68);
    plVar9 = *(longlong **)(lVar7 + 0x10);
    lVar7 = *(longlong *)(lVar7 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)CONCAT44(uStack_174,local_178);
    plVar10 = plVar9;
  }
  if ((bVar3) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if ((bVar4) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if (bVar5) {
    local_68[0] = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    local_68[0] = &PTR_FUN_143f73d18;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_58 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  if ((lVar7 != 0) &&
     (cVar6 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,lVar7), cVar6 != '\0')) {
    lVar7 = FUN_142b45e90();
    FOnlineSubsystemEOS::GetAchievementsInterface(*(undefined8 *)(lVar7 + 0x18),&local_170);
    if (local_170 != 0) {
      iVar12 = 0;
      lVar7 = *(longlong *)(param_1 + 0xc78);
      if (0 < *(int *)(local_170 + 0x48)) {
        lVar11 = 0;
        do {
          plVar9 = (longlong *)(*(longlong *)(local_170 + 0x40) + lVar11);
          if ((((int)plVar9[1] != 0) && (plVar8 = (longlong *)*plVar9, plVar8 != (longlong *)0x0))
             && (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,&local_178),
                *plVar8 == lVar7)) {
            if (((int)plVar9[1] != 0) && (plVar8 = (longlong *)*plVar9, plVar8 != (longlong *)0x0))
            {
              (**(code **)(*plVar8 + 0x28))(plVar8,0);
              if (*plVar9 != 0) {
                lVar7 = FMemory::Realloc(*plVar9,0,0);
                *plVar9 = lVar7;
              }
              *(undefined4 *)(plVar9 + 1) = 0;
            }
            break;
          }
          iVar12 = iVar12 + 1;
          lVar11 = lVar11 + 0x10;
        } while (iVar12 < *(int *)(local_170 + 0x48));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_170 + 0x40,0);
      *(undefined8 *)(param_1 + 0xc78) = 0;
      if (param_3 == 1) {
        local_158 = 0;
        local_150 = 0;
        local_148 = 0;
        local_140 = 0;
        local_138 = 0;
        local_130 = 0;
        local_128 = 0;
        local_120 = 0;
        local_118 = 0;
        local_110 = 0;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_b8 = 0;
        FText::FText(local_a0);
        FText::FText(local_88);
        FUN_140db9eb0(&local_158,param_4);
        cVar6 = FUN_140dc18f0(&local_158);
        if (cVar6 != '\0') {
          FUN_140dcf800(&local_158);
          TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
                    (param_1 + 0xc80,*(undefined4 *)(param_1 + 0x1054));
        }
        FUN_140b9d5e0(&local_158);
      }
    }
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_168 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar2 = (int *)((longlong)local_168 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 140bda1d0 FUN_140bda1d0 body=947 status=ok
// SIG undefined FUN_140bda1d0(void)

void FUN_140bda1d0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  bool bVar16;
  uint uStackX_24;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined **local_78 [2];
  longlong *local_68;
  longlong local_60;
  
  lVar9 = UGameInstance::GetFirstGamePlayer();
  if (lVar9 == 0) {
    plVar10 = (longlong *)((ulonglong)uStackX_24 << 0x20);
    plVar12 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = false;
    bVar16 = true;
    lVar9 = 0;
    plVar15 = (longlong *)0x0;
  }
  else {
    lVar9 = FUN_142547b50(lVar9,local_78);
    plVar10 = *(longlong **)(lVar9 + 0x10);
    lVar9 = *(longlong *)(lVar9 + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar12 = (longlong *)((ulonglong)uStackX_24 << 0x20);
    bVar6 = true;
    bVar5 = true;
    bVar16 = false;
    plVar15 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
  }
  if ((bVar16) && (plVar12 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if ((bVar5) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plVar10 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (bVar6) {
    local_78[0] = &PTR_FUN_143f740c8;
    if (local_60 != 0) {
      FMemory::Free();
    }
    local_78[0] = &PTR_FUN_143f73d18;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_68 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  if (((lVar9 == 0) || (puVar3 = (undefined8 *)*param_2, puVar3 == (undefined8 *)0x0)) ||
     (cVar8 = (**(code **)*puVar3)(puVar3,lVar9), cVar8 == '\0')) goto LAB_140bda51f;
  local_a0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  lVar9 = FUN_142b45e90();
  FOnlineSubsystemEOS::GetAchievementsInterface(*(undefined8 *)(lVar9 + 0x18),&local_c8);
  lVar9 = local_c8;
  if (local_c8 == 0) {
LAB_140bda4cd:
    bVar16 = false;
  }
  else {
    iVar14 = 0;
    lVar7 = *(longlong *)(param_1 + 0x12c8);
    if (0 < *(int *)(local_c8 + 0x30)) {
      lVar13 = 0;
      do {
        lVar4 = *(longlong *)(lVar9 + 0x28);
        if (((*(int *)(lVar13 + 8 + lVar4) != 0) &&
            (plVar10 = *(longlong **)(lVar13 + lVar4), plVar10 != (longlong *)0x0)) &&
           (plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_80),
           *plVar10 == lVar7)) {
          if ((*(int *)(lVar13 + 8 + lVar4) != 0) &&
             (plVar10 = *(longlong **)(lVar13 + lVar4), plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x28))(plVar10,0);
            if (*(longlong *)(lVar13 + lVar4) != 0) {
              uVar11 = FMemory::Realloc(*(longlong *)(lVar13 + lVar4),0,0);
              *(undefined8 *)(lVar13 + lVar4) = uVar11;
            }
            *(undefined4 *)(lVar13 + 8 + lVar4) = 0;
          }
          break;
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 0x10;
      } while (iVar14 < *(int *)(lVar9 + 0x30));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar9 + 0x28,0);
    *(undefined8 *)(param_1 + 0x12c8) = 0;
    if (param_3 != 1) goto LAB_140bda4cd;
    local_d8 = *param_2;
    local_d0 = (longlong *)param_2[1];
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    cVar8 = FUN_142b496d0(local_c8,&local_d8,&local_b8);
    plVar10 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_d0 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    bVar16 = cVar8 != '\0';
  }
  FUN_140bb4ac0(param_1,bVar16,&local_b8);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_c0 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  FUN_140b9da90(&local_b8);
LAB_140bda51f:
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar15 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  return;
}



// FUNCTION 140bda590 FUN_140bda590 body=916 status=ok
// SIG undefined FUN_140bda590(void)

void FUN_140bda590(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  void *_Src;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined **local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_40 [3];
  
  if (*(longlong *)(param_1 + 0x1070) == 0) {
    return;
  }
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xc60,*(undefined8 *)(param_1 + 0x1070));
  plVar5 = (longlong *)(param_1 + 0x1058);
  *(undefined8 *)(param_1 + 0x1070) = 0;
  local_c0 = *(int *)(param_1 + 0x1060);
  lVar9 = (longlong)local_c0;
  _Src = (void *)*plVar5;
  local_c8 = (void *)0x0;
  uVar10 = 2;
  if (local_c0 == 0) {
    local_bc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0,0);
    _guard_xfg_dispatch_icall_nop(local_c8,_Src,lVar9 * 2);
  }
  if (plVar5 != local_40) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = 0;
    *(undefined8 *)(param_1 + 0x1060) = 0;
  }
  cVar3 = *(char *)(param_1 + 0x1068);
  *(undefined1 *)(param_1 + 0x1068) = 0;
  if ((local_c0 < 2) || (cVar4 = FUN_140dc1df0(&local_c8), cVar4 == '\0')) {
    if (cVar3 == '\0') {
      plVar5 = *(longlong **)(param_1 + 0xc98);
      plVar8 = plVar5 + (longlong)*(int *)(param_1 + 0xca0) * 2;
      for (; plVar5 != plVar8; plVar5 = plVar5 + 2) {
        if (((int)plVar5[1] != 0) && (*plVar5 != 0)) goto LAB_140bda86a;
      }
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"The selected activity is no longer available.",
                         L"OakGameInstance",L"InvalidMatchmakingActivity");
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_70,L"Matchmaking Error",L"OakGameInstance",L"MatchmakingError");
      local_a8 = &PTR_FUN_1443170a0;
      FText::FText(local_a0,uVar7);
      FText::FText(local_88,uVar6);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_68 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_50 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      FWeakObjectPtr::operator=(local_res8,0);
      FWeakObjectPtr::operator=(local_res10,0);
      FWeakObjectPtr::operator=(local_b8,0);
      local_b0 = 0;
      FUN_140c23780(2,&local_a8,local_b8,local_res10,local_res8,2);
      FUN_140b9cdd0(&local_a8);
    }
LAB_140bda86a:
    uVar10 = 3;
  }
  else if (*(longlong *)(param_1 + 0x4e0) != 0) {
    cVar4 = FUN_140dd3000(*(longlong *)(param_1 + 0x4e0),&local_c8,cVar3);
    lVar9 = *(longlong *)(param_1 + 0xcb0);
    if (cVar4 != '\0') {
      if (lVar9 != 0) {
        FUN_1413c8d80();
      }
      uVar10 = 1;
      if (cVar3 == '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_14686a7d0) &&
           (_Init_thread_header(&DAT_14686a7d0), DAT_14686a7d0 == -1)) {
          FName::FName(&DAT_14686a7c8,L"Matchmaking_Initiate",1);
          _Init_thread_footer(&DAT_14686a7d0);
          FUN_140be2cb0(param_1,&DAT_14686a7c8);
        }
        else {
          FUN_140be2cb0(param_1,&DAT_14686a7c8);
        }
      }
      goto LAB_140bda88e;
    }
    if (lVar9 != 0) {
      FUN_1413c8ca0(lVar9,0);
      *(undefined8 *)(param_1 + 0xcb0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1054) != 0) {
    *(undefined4 *)(param_1 + 0x1054) = 0;
    TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0xc80,0);
  }
LAB_140bda88e:
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 0xc98,uVar10);
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140bda930 FUN_140bda930 body=122 status=ok
// SIG undefined FUN_140bda930(void)

void FUN_140bda930(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[0x8c];
  if (puVar1 != (undefined8 *)0x0) {
    cVar2 = (**(code **)*puVar1)(puVar1,*param_2);
    if (cVar2 != '\0') {
      TBaseMulticastDelegate<void>::Remove(param_1 + 0xcd,param_1[0x1f8]);
      if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140bda986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x380))(param_1,(int)param_1[0x8e]);
        return;
      }
      uVar3 = FUN_1404b03b0();
      FUN_140baa4e0(param_1,0,uVar3);
    }
  }
  return;
}



// FUNCTION 140bda9b0 FUN_140bda9b0 body=781 status=ok
// SIG undefined FUN_140bda9b0(void)

void FUN_140bda9b0(longlong param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  undefined8 local_res10;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  local_res10 = 0x11f;
  if ((param_2 == 0x11f) && (param_4 == 1)) {
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,local_38);
    cVar5 = FUN_140bc9fb0(param_1,*puVar8);
    if (cVar5 != '\0') {
      local_78 = *param_3;
      local_70 = param_3[1];
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      cVar5 = FUN_140bca7d0(param_1,&local_78);
      if (cVar5 == '\0') {
        local_c8 = 0;
        plVar9 = (longlong *)FUN_1404b0000(&local_c8);
        if ((plVar9 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9,param_3), cVar5 == '\0')) {
          (**(code **)(*plVar9 + 0x18))(plVar9,&local_88);
          if (local_88 != (longlong *)0x0) {
            local_c0 = 0x11f;
            uVar6 = (**(code **)(*local_88 + 0x20))(local_88,0x11f);
            if ((1 < uVar6) && (uVar6 != 7)) {
              (**(code **)(*local_88 + 0x2d0))(local_88,0x11f,param_3);
              uVar10 = FUN_140dbc5d0(param_1 + 0x5f0,&local_res10);
              FUN_140bf7280(param_1,uVar10);
            }
          }
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_80 + 1;
            lVar11 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)local_80 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_80 + 8))(local_80,1);
              }
            }
          }
        }
      }
    }
  }
  local_b8 = 0x11f;
  if ((param_2 == 0x11f) && (param_4 == 1)) {
    local_68 = *param_3;
    local_60 = param_3[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    cVar5 = FUN_140bca7d0(param_1,&local_68);
    if (cVar5 == '\0') {
      FUN_140be4af0(param_1);
    }
  }
  lVar11 = FUN_140bb7870(param_1);
  if (lVar11 != 0) {
    local_a8 = *param_3;
    local_a0 = (longlong *)param_3[1];
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    local_98 = 0;
    local_b0 = &PTR_FUN_143f740c8;
    local_90 = 0;
    iVar7 = FUN_1404cc400(lVar11,&local_b0);
    local_b0 = &PTR_FUN_143f740c8;
    if (local_98 != 0) {
      FMemory::Free();
    }
    plVar9 = local_a0;
    local_b0 = &PTR_FUN_143f73d18;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (iVar7 != -1) {
      return;
    }
  }
  lVar11 = FUN_140bbb8d0(param_1,param_3);
  if (lVar11 != 0) {
    lVar12 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_58 = *param_3;
      local_50 = param_3[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      uVar13 = *(undefined1 *)(lVar11 + 0x5f4);
      puVar8 = &local_58;
      goto LAB_140bdac99;
    }
  }
  local_48 = *param_3;
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  uVar13 = 0;
  puVar8 = &local_48;
LAB_140bdac99:
  FUN_140beada0(param_1,puVar8,uVar13);
  return;
}



// FUNCTION 140bdacc0 FUN_140bdacc0 body=299 status=ok
// SIG undefined FUN_140bdacc0(void)

void FUN_140bdacc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_res10;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  int local_10;
  
  local_res10 = 0x11f;
  if (param_2 == 0x11f) {
    FUN_1405499a0(param_1 + 0xe48,&local_res10);
    if ((int)local_res10 != -1) {
      local_30 = *(undefined8 *)
                  ((longlong)(int)local_res10 * 0x20 + 0x10 + *(longlong *)(param_1 + 0xe48));
      FUN_140be6fe0(param_1 + 0xe48);
      FUN_1404d0c50(&local_28,0);
      if ((local_28 != (longlong *)0x0) &&
         ((**(code **)(*local_28 + 0x2e0))(local_28,&local_30), param_4 == 1)) {
        FUN_140bbbfc0(param_1,&local_18);
        if ((1 < local_10) && (cVar6 = FUN_140bc9f60(param_1), cVar6 != '\0')) {
          FUN_140bcdf00(param_1,&local_18);
        }
        if (local_18 != 0) {
          FMemory::Free();
        }
      }
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
  }
  return;
}



// FUNCTION 140bdadf0 FUN_140bdadf0 body=239 status=ok
// SIG undefined FUN_140bdadf0(void)

void FUN_140bdadf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  uint uStackX_14;
  
  if (param_2 == 0) {
    return;
  }
  bVar9 = false;
  if ((*(longlong *)(param_2 + 0xc0) != DAT_14686a178) &&
     (*(longlong *)(param_2 + 0xc0) != DAT_14686a180)) {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar6 == '\0') {
    plVar8 = (longlong *)((ulonglong)uStackX_14 << 0x20);
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
    plVar8 = *(longlong **)(lVar7 + 0x4e8);
    uVar4 = *(undefined8 *)(lVar7 + 0x4e0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    cVar6 = FUN_140678610(uVar4);
    if (cVar6 == '\0') {
      bVar5 = true;
      goto LAB_140bdae7c;
    }
  }
  bVar5 = false;
LAB_140bdae7c:
  if ((bVar9) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (bVar5) {
    FUN_140bf6260(param_1);
    TBaseMulticastDelegate<void>::Broadcast(param_1);
  }
  return;
}



// FUNCTION 140bdaee0 FUN_140bdaee0 body=83 status=ok
// SIG undefined FUN_140bdaee0(void)

void FUN_140bdaee0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  lVar1 = FUN_14244c070(param_1,&local_18);
  if (lVar1 == 0) {
    FUN_140d94a80(*(undefined8 *)(param_1 + 0x478),param_2);
  }
  return;
}



// FUNCTION 140bdaf40 FUN_140bdaf40 body=198 status=ok
// SIG undefined FUN_140bdaf40(void)

void FUN_140bdaf40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
     (cVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar7 != '\0')) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    plVar5 = *(longlong **)(param_2 + 0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_28._0_4_ = (undefined4)uVar4;
    local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_20._0_4_ = SUB84(plVar5,0);
    uStack_20._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
    local_18 = (undefined4)local_28;
    uStack_14 = local_28._4_4_;
    uStack_10 = (undefined4)uStack_20;
    uStack_c = uStack_20._4_4_;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_28 = uVar4;
    uStack_20 = plVar5;
    cVar7 = FUN_140bca7d0(param_1,&local_18);
    if ((cVar7 == '\0') && (*(char *)(param_2 + 0x28) == '\x01')) {
      FUN_140be2980(param_1,&local_28);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140bdb010 FUN_140bdb010 body=606 status=ok
// SIG undefined FUN_140bdb010(void)

void FUN_140bdb010(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_78 [8];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  
  plVar6 = (longlong *)FName::FName(local_78,&DAT_1442e91fc,1);
  if (((param_3 == *plVar6) && (plVar6 = (longlong *)(param_1 + 0xb50), *plVar6 != 0)) &&
     (plVar7 = (longlong *)(param_1 + 0xb60), *plVar7 != 0)) {
    Online::GetSessionInterface(&local_50,0);
    if (local_50 != (longlong *)0x0) {
      local_30 = *plVar7;
      local_28 = *(longlong **)(param_1 + 0xb68);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      local_40 = *plVar6;
      local_38 = *(longlong **)(param_1 + 0xb58);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_50 + 0x160))(local_50,&local_40,&local_30);
      plVar3 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_38)(local_38);
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
      plVar3 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_28)(local_28);
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
    }
    local_68 = (longlong *)0x0;
    if (plVar6 != &local_70) {
      *plVar6 = 0;
      local_70 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb58,&local_68);
      plVar6 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_68 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
    }
    local_58 = (longlong *)0x0;
    if (plVar7 != &local_60) {
      *plVar7 = 0;
      local_60 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb68,&local_58);
      plVar6 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_58 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
    }
    plVar6 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_48 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140bdb270 FUN_140bdb270 body=595 status=ok
// SIG undefined FUN_140bdb270(void)

void FUN_140bdb270(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [8];
  undefined1 local_68 [16];
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  plVar5 = (longlong *)FName::FName(local_res18,&DAT_1442e9254,1);
  if (((param_3 == *plVar5) && (*(longlong *)(param_1 + 0xb50) != 0)) &&
     (*(longlong *)(param_1 + 0xb60) != 0)) {
    puVar6 = (undefined8 *)FName::FName(local_68,L"SPARK",1);
    Online::GetSessionInterface(&local_48,*puVar6);
    if (local_48 != (longlong *)0x0) {
      local_38 = *(undefined8 *)(param_1 + 0xb60);
      local_30 = *(longlong **)(param_1 + 0xb68);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      FUN_140bbc6f0(param_1,&local_58,&local_38);
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
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      if (local_58 != 0) {
        local_18 = local_58;
        plStack_10 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        local_28 = *(undefined8 *)(param_1 + 0xb50);
        local_20 = *(longlong **)(param_1 + 0xb58);
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        (**(code **)(*local_48 + 0x160))(local_48,&local_28,&local_18);
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
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_10 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_10)(plStack_10);
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
      plVar5 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
    }
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
  return;
}



// FUNCTION 140bdb4d0 FUN_140bdb4d0 body=523 status=ok
// SIG undefined FUN_140bdb4d0(void)

void FUN_140bdb4d0(longlong *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_res8;
  code *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  if (((*(char *)((longlong)param_1 + 0x4a4) == '\x02') && (param_1[0x92] == 0)) &&
     (lVar1 = param_1[0x90], lVar1 != 0)) {
    plVar9 = *(longlong **)(lVar1 + 0x30);
    plVar8 = plVar9 + (longlong)*(int *)(lVar1 + 0x38) * 0xd;
    if (plVar9 != plVar8) {
      while (*plVar9 != param_1[0x93]) {
        plVar9 = plVar9 + 0xd;
        if (plVar9 == plVar8) {
          return;
        }
      }
      local_48 = (**(code **)(*param_1 + 0x148))(param_1);
      local_40 = &local_48;
      local_38 = FUN_14073d6c0(&local_48,DAT_14685cf30);
      puVar4 = local_40;
      local_30 = &local_48;
      local_28 = 0;
      puVar5 = (undefined8 *)FUN_14073d6c0(local_40,local_38);
      puVar6 = (undefined8 *)FUN_14073d6c0(local_30,local_28);
      for (; puVar5 != puVar6; puVar5 = (undefined8 *)FUN_14073d6c0(puVar4,*puVar5)) {
        lVar1 = *(longlong *)(puVar5[2] + 0x598);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x3d8) == plVar9[1])) {
          uStack_50 = uStack_50 & 0xffffffff00000000;
          param_1[0x92] = lVar1;
          local_58 = FUN_140bdbe30;
          pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSequenceStop",L"::");
          pwVar3 = (wchar_t *)0x0;
          while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
            pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar3 = pwVar2;
          }
          FName::FName(&local_res8,pwVar3 + 2,1);
          FUN_1407260e0(param_1[0x92] + 0x398,param_1,&local_58,local_res8);
          if (plVar9[2] == 0) {
            return;
          }
          FUN_140be3030(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140bdb6e0 FUN_140bdb6e0 body=644 status=ok
// SIG undefined FUN_140bdb6e0(void)

void FUN_140bdb6e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_98 [8];
  undefined8 local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  undefined **local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  *(undefined1 *)(param_1 + 0xc00) = 0;
  cVar5 = FText::IsEmpty(param_1 + 0x4b0);
  if (cVar5 == '\0') {
    cVar5 = FText::IsEmpty(param_1 + 0x4c8);
    if (cVar5 == '\0') {
      FWeakObjectPtr::operator=(local_res8,0);
      FWeakObjectPtr::operator=(local_res10,0);
      FWeakObjectPtr::operator=(local_98,0);
      local_90 = 0;
      FUN_140c23780(2,param_1 + 0x4a8,local_98,local_res10,local_res8,2);
    }
  }
  uVar6 = FUN_1404b03b0();
  uVar7 = FUN_1404b03b0();
  local_68 = &PTR_FUN_1443170a0;
  FText::FText(local_60,uVar7);
  FText::FText(local_48,uVar6);
  local_68 = &PTR_FUN_1443170a0;
  FText::operator=(param_1 + 0x4b0,local_60);
  FText::operator=(param_1 + 0x4c8,local_48);
  local_68 = &PTR_FUN_1443170a0;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (*(char *)(param_1 + 0xba8) != '\0') {
    lVar8 = FUN_142b45e90();
    cVar5 = APlayerCameraManager::ShouldTickIfViewportsOnly(*(undefined8 *)(lVar8 + 0x18));
    if ((cVar5 == '\0') && (*(longlong *)(param_1 + 0x1f8) != 0)) {
      lVar8 = UUGMenuManager::GetFadeHUD();
      if (lVar8 != 0) {
        cVar5 = FUN_1406ab3a0(lVar8);
        if (cVar5 == '\0') {
          FUN_142450450(param_1,&local_88);
          if (local_88 != 0) {
            local_78 = local_88;
            plStack_70 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            FUN_140d2ae90(lVar8,&local_78);
            plVar1 = plStack_70;
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_70 + 1;
              lVar8 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plStack_70)(plStack_70);
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
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_80 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plStack_80 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_80 + 8))(plStack_80,1);
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0xb7a) != '\0') {
    *(undefined1 *)(param_1 + 0xb7a) = 0;
    FUN_140be03a0(param_1);
  }
  FUN_140bf5100(param_1);
  return;
}



// FUNCTION 140bdb970 FUN_140bdb970 body=596 status=ok
// SIG undefined FUN_140bdb970(void)

void FUN_140bdb970(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (((*(char *)(param_1 + 0x1148) != '\0') && (*(longlong *)(param_1 + 0x1100) != 0)) &&
     (cVar6 = (*(code *)**(undefined8 **)*param_2)(), cVar6 != '\0')) {
    if ((*(longlong *)(param_1 + 0x1f8) != 0) &&
       (plVar8 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0x148))(plVar8,param_1 + 0x1128);
    }
    plVar8 = *(longlong **)(param_1 + 0x1108);
    uVar2 = *(undefined8 *)(param_1 + 0x1100);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *(int *)(param_1 + 0x1144) = *(int *)(param_1 + 0x1144) + 1;
    bVar5 = false;
    iVar9 = *(int *)(param_1 + 0x1144);
    iVar7 = *(int *)(param_1 + 0x1138) + -1;
    lVar10 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar11 = lVar10 << 4;
      bVar5 = false;
      do {
        lVar3 = *(longlong *)(param_1 + 0x1130);
        if ((*(int *)(lVar11 + 8 + lVar3) == 0) ||
           (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_140bdba93:
          bVar5 = true;
        }
        else {
          local_58 = (undefined4)uVar2;
          uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50 = SUB84(plVar8,0);
          uStack_4c = (undefined4)((ulonglong)plVar8 >> 0x20);
          local_38 = local_58;
          uStack_34 = uStack_54;
          uStack_30 = uStack_50;
          uStack_2c = uStack_4c;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_38,param_3,param_4);
          if (cVar6 == '\0') goto LAB_140bdba93;
        }
        lVar11 = lVar11 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar9 = *(int *)(param_1 + 0x1144);
    }
    *(int *)(param_1 + 0x1144) = iVar9 + -1;
    if (bVar5) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                ((longlong *)(param_1 + 0x1130),0);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar8 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    local_48 = *(undefined8 *)(param_1 + 0x1100);
    local_40 = *(longlong *)(param_1 + 0x1108);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    lVar10 = FUN_14244c070(param_1,&local_48);
    if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 != 0)) {
      lVar11 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        FUN_140cf9c40(lVar10,param_3,param_4);
      }
    }
  }
  if (*(char *)(param_1 + 0x1148) != '\0') {
    *(undefined1 *)(param_1 + 0x1148) = 0;
    FUN_140b9db30();
  }
  FUN_140be98b0(param_1);
  return;
}



// FUNCTION 140bdbbd0 FUN_140bdbbd0 body=571 status=ok
// SIG undefined FUN_140bdbbd0(void)

void FUN_140bdbbd0(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (((*(char *)(param_1 + 0x1190) != '\0') && (*(longlong *)(param_1 + 0x1160) != 0)) &&
     (cVar6 = (*(code *)**(undefined8 **)*param_2)(), cVar6 != '\0')) {
    if ((*(longlong *)(param_1 + 0x1f8) != 0) &&
       (plVar8 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0xe8))(plVar8,param_1 + 0x1170);
    }
    plVar8 = *(longlong **)(param_1 + 0x1168);
    uVar2 = *(undefined8 *)(param_1 + 0x1160);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    *(int *)(param_1 + 0x118c) = *(int *)(param_1 + 0x118c) + 1;
    bVar5 = false;
    iVar9 = *(int *)(param_1 + 0x118c);
    iVar7 = *(int *)(param_1 + 0x1180) + -1;
    lVar10 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar11 = lVar10 << 4;
      bVar5 = false;
      do {
        lVar3 = *(longlong *)(param_1 + 0x1178);
        if ((*(int *)(lVar11 + 8 + lVar3) == 0) ||
           (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_140bdbce5:
          bVar5 = true;
        }
        else {
          local_48 = (undefined4)uVar2;
          uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_40 = SUB84(plVar8,0);
          uStack_3c = (undefined4)((ulonglong)plVar8 >> 0x20);
          local_28 = local_48;
          uStack_24 = uStack_44;
          uStack_20 = uStack_40;
          uStack_1c = uStack_3c;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_28,param_3);
          if (cVar6 == '\0') goto LAB_140bdbce5;
        }
        lVar11 = lVar11 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar9 = *(int *)(param_1 + 0x118c);
    }
    *(int *)(param_1 + 0x118c) = iVar9 + -1;
    if (bVar5) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                ((longlong *)(param_1 + 0x1178),0);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar8 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    local_38 = *(undefined8 *)(param_1 + 0x1160);
    local_30 = *(longlong *)(param_1 + 0x1168);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    lVar10 = FUN_14244c070(param_1,&local_38);
    if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 != 0)) {
      lVar11 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        APlayerCameraManager::SetCameraCachePOV(lVar10,param_3);
      }
    }
  }
  if (*(char *)(param_1 + 0x1190) != '\0') {
    *(undefined1 *)(param_1 + 0x1190) = 0;
    FEOSUserInterface_CandidateEOSAccount::~FEOSUserInterface_CandidateEOSAccount();
  }
  FUN_140be9bf0(param_1);
  return;
}



// FUNCTION 140bdbe30 FUN_140bdbe30 body=494 status=ok
// SIG undefined FUN_140bdbe30(void)

void FUN_140bdbe30(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_res8;
  code *local_18;
  ulonglong uStack_10;
  
  FUN_140ba8d60();
  if ((char)param_1[0x25] != '\x03') {
    param_1[0x92] = 0;
    *(undefined1 *)(param_1 + 0x91) = 0;
    return;
  }
  if ((param_1[0x93] != 0) && (lVar6 = param_1[0x90], lVar6 != 0)) {
    plVar9 = *(longlong **)(lVar6 + 0x30);
    plVar8 = plVar9 + (longlong)*(int *)(lVar6 + 0x38) * 0xd;
    for (; plVar9 != plVar8; plVar9 = plVar9 + 0xd) {
      if (*plVar9 == param_1[0x93]) {
        if (param_1[0x92] != 0) {
          uStack_10 = uStack_10 & 0xffffffff00000000;
          local_18 = FUN_140bdbe30;
          pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSequenceStop",L"::");
          pwVar2 = (wchar_t *)0x0;
          while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
            pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
            pwVar2 = pwVar1;
          }
          FName::FName(&local_res8,pwVar2 + 2,1);
          FUN_140a4d850(param_1[0x92] + 0x398,param_1,&local_18,local_res8);
        }
        FUN_142dd6360(param_1,plVar9[6]);
        cVar3 = FUN_142f5f6a0(plVar9 + 7);
        if (cVar3 != '\0') {
          uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar6 = FUN_142f6c9f0(uVar5);
          if (lVar6 != 0) {
            FUN_142f6e6e0(lVar6,plVar9 + 7,0,1,*plVar9);
          }
        }
        param_1[0x92] = 0;
        *(undefined1 *)(param_1 + 0x91) = 0;
        param_1[0x93] = 0;
        *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
        lVar6 = FUN_140b823d0(param_1);
        if ((lVar6 != 0) && (lVar7 = FUN_140cff1b0(lVar6), lVar7 != 0)) {
          lVar6 = FUN_140cff1b0(lVar6);
          FRootMotionMovementParams::Clear(lVar6 + 0x708);
        }
        local_res8 = *plVar9;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x8e,&local_res8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140bdc020 FUN_140bdc020 body=407 status=ok
// SIG undefined FUN_140bdc020(void)

void FUN_140bdc020(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  if (param_3 != '\0') {
    lVar6 = (**(code **)(*param_1 + 0x148))();
    if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0)) {
      plVar5 = (longlong *)param_1[0x8d];
      local_28 = param_1[0x8c];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_20 = plVar5;
      FUN_140beb090(param_1,&local_28,1);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
  }
  plVar5 = (longlong *)param_1[0x8d];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FUN_142d67be0(param_1,param_2,param_3);
  if (param_3 == '\0') {
    local_38 = param_1[0x8c];
    local_30 = (longlong *)param_1[0x8d];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_140dce760(param_1 + 0xbe,&local_38);
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
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
    uVar7 = FUN_1404b03b0();
    FUN_140baa4e0(param_1,0,uVar7);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140bdc1c0 FUN_140bdc1c0 body=17 status=ok
// SIG undefined FUN_140bdc1c0(void)

void FUN_140bdc1c0(longlong param_1)

{
  if (*(char *)(param_1 + 0x11c0) == '\0') {
    FUN_140bc2fb0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140bdc1e0 FUN_140bdc1e0 body=3565 status=ok
// SIG undefined FUN_140bdc1e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bdc1e0(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_408 [32];
  undefined1 *local_3e8;
  longlong *local_3e0;
  undefined4 local_3d8;
  undefined1 local_3c8;
  undefined8 *local_3c0;
  undefined8 local_3b8;
  longlong *local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong *plStack_390;
  undefined4 *local_388;
  longlong *plStack_380;
  longlong local_378;
  longlong *plStack_370;
  undefined1 local_368 [8];
  undefined1 local_360 [8];
  LARGE_INTEGER local_358;
  longlong local_350;
  longlong local_348;
  longlong *local_340;
  longlong local_338;
  longlong *local_330;
  longlong local_328;
  longlong *local_320;
  undefined1 local_318 [8];
  undefined8 local_310;
  undefined1 local_308 [8];
  longlong *local_300;
  longlong local_2e8;
  longlong *plStack_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 *local_2b8;
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [16];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  longlong *local_280;
  undefined **local_270;
  undefined1 local_268 [24];
  undefined1 local_250 [24];
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong *plStack_190;
  undefined **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined **local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  double local_c8;
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_78;
  ulonglong uVar14;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  plVar8 = (longlong *)*param_3;
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  local_3c0 = param_2;
  local_350 = param_4;
  plVar7 = (longlong *)FName::FName(local_290,L"SPARK",1);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_2a8);
  if (*plVar8 == *plVar7) {
    if ((*(char *)(param_1 + 0x458) == '\0') && (*(char *)(param_1 + 0xb18) != '\0')) {
      return;
    }
    local_348 = *param_3;
    local_340 = (longlong *)param_3[1];
    if (local_340 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_340 + 1) = (int)local_340[1] + 1;
      UNLOCK();
    }
    FUN_140bbb2b0(param_1,&local_378,&local_348);
    plVar8 = local_340;
    if (local_340 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_340 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_340)(local_340);
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
    if (local_378 != 0) {
      local_2e8 = local_378;
      plStack_2e0 = plStack_370;
      if (plStack_370 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_370 + 1) = (int)plStack_370[1] + 1;
        UNLOCK();
      }
      uVar9 = FUN_140bb74b0(param_1);
      cVar5 = FUN_140d89890(uVar9,param_2,&local_2e8,3);
      plVar8 = plStack_2e0;
      if (plStack_2e0 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_2e0 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_2e0)(plStack_2e0);
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
      if (cVar5 != '\0') {
        if (plStack_370 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar8 = plStack_370 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 != 1) {
          return;
        }
        (**(code **)*plStack_370)(plStack_370);
        LOCK();
        piVar1 = (int *)((longlong)plStack_370 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*plStack_370 + 8))(plStack_370,1);
        return;
      }
    }
    if (plStack_370 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_370 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_370)(plStack_370);
        LOCK();
        piVar1 = (int *)((longlong)plStack_370 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_370 + 8))(plStack_370,1);
        }
      }
    }
  }
  local_2d8 = *param_2;
  local_2d0 = param_2[1];
  if (local_2d0 != 0) {
    LOCK();
    *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
    UNLOCK();
  }
  lVar10 = FUN_14244c070(param_1,&local_2d8);
  if (lVar10 == 0) {
    return;
  }
  lVar10 = *(longlong *)(lVar10 + 0x30);
  if (lVar10 == 0) {
    return;
  }
  lVar11 = FUN_14145f370();
  lVar10 = *(longlong *)(lVar10 + 0x10);
  if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
      lVar11 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  local_3a8 = 0;
  local_3a0 = 0;
  lVar10 = FUN_14244f490(param_1,0);
  if (lVar10 != 0) {
    lVar11 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140bdc4b6;
  }
  lVar10 = 0;
LAB_140bdc4b6:
  local_338 = *param_3;
  local_330 = (longlong *)param_3[1];
  if (local_330 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_330 + 1) = (int)local_330[1] + 1;
    UNLOCK();
  }
  local_3e0 = &local_3a8;
  local_3d8 = 0xbf800000;
  local_3e8 = (undefined1 *)CONCAT71(local_3e8._1_7_,1);
  cVar5 = FUN_140d7a1d0(*(undefined8 *)(param_1 + 0x478),&local_338,lVar10,1);
  plVar8 = local_330;
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_330 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_330)(local_330);
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
  if (cVar5 == '\0') {
    local_328 = *param_3;
    local_320 = (longlong *)param_3[1];
    if (local_320 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_320 + 1) = (int)local_320[1] + 1;
      UNLOCK();
    }
    FUN_140d938f0(*(undefined8 *)(param_1 + 0x478),&local_328);
    plVar8 = local_320;
    if (local_320 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_320 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_320)(local_320);
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
  }
  FText::FText(local_308);
  if ((int)local_3a0 < 2) {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_208,L"Game invite received!",L"OakGameInstance",
                       L"ConfirmInviteReceivedMessage");
    FText::operator=(local_308,uVar9);
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_200 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar1 = (int *)((longlong)local_200 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_200 + 8))(local_200,1);
        }
      }
    }
  }
  else {
    lVar10 = FText::FromString(local_1c8,&local_3a8);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_220,L"Game invite received from {0}!",L"OakGameInstance",
                       L"ConfirmInviteReceivedFromUser");
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_1d8,uVar9);
    local_b8[0] = 4;
    FText::FText(local_a8,lVar10);
    local_2c8 = *puVar12;
    local_388 = local_b8;
    plStack_380 = &local_88;
    local_2c0 = puVar12[1];
    local_90 = '\x01';
    if (local_2c0 != 0) {
      LOCK();
      *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
      UNLOCK();
    }
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_2a0,&local_388);
    uVar9 = FText::Format(local_238,&local_2c8,uVar9);
    FText::FText(local_288,uVar9);
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_230 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)local_230 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_230 + 8))(local_230,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_2a0);
    if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_a0 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    plVar8 = (longlong *)puVar12[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
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
    plVar8 = *(longlong **)(lVar10 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
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
    FText::operator=(local_308,local_288);
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_280 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar1 = (int *)((longlong)local_280 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_280 + 8))(local_280,1);
        }
      }
    }
    param_2 = local_3c0;
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_218 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        param_2 = local_3c0;
        if (iVar6 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
          param_2 = local_3c0;
        }
      }
    }
  }
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1f0,L"Game Invite Received",L"OakGameInstance",
                     L"ConfirmInviteReceivedHeader");
  local_270 = &PTR_FUN_1443170a0;
  FText::FText(local_268,uVar9);
  FText::FText(local_250,local_308);
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1e8 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  FWeakObjectPtr::operator=(local_368,0);
  FWeakObjectPtr::operator=(local_360,0);
  FWeakObjectPtr::operator=(local_318,0);
  local_3e8 = local_368;
  local_3e0 = (longlong *)CONCAT71(local_3e0._1_7_,2);
  local_310 = 0;
  FUN_140c23780(1,&local_270,local_318,local_360);
  QueryPerformanceCounter(&local_358);
  local_1a8 = *param_2;
  local_188 = &PTR_FUN_143f769a8;
  local_198 = 0;
  plStack_190 = (longlong *)0x0;
  local_1a0 = 0;
  local_160 = &PTR_FUN_143f769a0;
  local_3b0 = (longlong *)param_2[1];
  local_178 = 0;
  uStack_170 = 0;
  local_180 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = -1.0;
  local_168 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 9999;
  dVar3 = (double)local_358.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
    UNLOCK();
  }
  local_3b8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1a0,&local_3b0);
  plVar8 = local_3b0;
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_3b0 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_3b0 + 8))(local_3b0,1);
      }
    }
  }
  plVar8 = plStack_190;
  local_88 = *param_3;
  lStack_80 = param_3[1];
  if (lStack_80 != 0) {
    LOCK();
    *(int *)(lStack_80 + 8) = *(int *)(lStack_80 + 8) + 1;
    UNLOCK();
  }
  local_398 = local_198;
  plStack_390 = plStack_190;
  local_198 = local_88;
  plVar7 = (longlong *)lStack_80;
  if (plStack_190 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_190 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      puVar12 = (undefined8 *)*plStack_190;
      plStack_190 = (longlong *)lStack_80;
      (*(code *)*puVar12)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = plStack_190;
      if (iVar6 == 1) {
        (**(code **)(*plStack_390 + 8))(plStack_390,1);
        plVar7 = plStack_190;
      }
    }
  }
  plStack_190 = plVar7;
  lVar10 = local_350;
  FUN_1404c0750(&local_188,local_350);
  local_d0 = *(undefined4 *)(lVar10 + 0xb8);
  plVar8 = (longlong *)param_3[1];
  local_2b8 = (undefined8 *)*param_3;
  local_c8 = dVar3;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar8 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar8)();
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
  puVar12 = local_2b8;
  plVar8 = (longlong *)(param_1 + 0x420);
  lVar10 = *plVar8;
  lVar16 = (longlong)*(int *)(param_1 + 0x428) * 0xe8 + lVar10;
  for (lVar11 = lVar10; lVar11 != lVar16; lVar11 = lVar11 + 0xe8) {
    if ((*(longlong *)(lVar11 + 0x10) == 0) || (cVar5 = (**(code **)*puVar12)(), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (lVar11 != lVar16) {
        lVar10 = (lVar11 - lVar10) / 0xe8;
        if (((int)lVar10 < 0) || (iVar6 = *(int *)(param_1 + 0x428), iVar6 <= (int)lVar10))
        goto LAB_140bdcc07;
        bVar4 = true;
        goto LAB_140bdcc10;
      }
      break;
    }
  }
  lVar10 = 0xffffffff;
LAB_140bdcc07:
  iVar6 = *(int *)(param_1 + 0x428);
  bVar4 = false;
LAB_140bdcc10:
  if (bVar4) {
    if (((int)lVar10 < 0) || (iVar6 <= (int)lVar10)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_140be7890(plVar8,lVar10,1,1);
    }
  }
  iVar6 = FUN_140bb4350(plVar8,&local_1a8);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_1 + 0x428);
    *(int *)(param_1 + 0x428) = iVar6 + 1;
    if (*(int *)(param_1 + 0x42c) < iVar6 + 1) {
      FUN_140a131a0(plVar8,iVar6);
    }
    lVar10 = *plVar8;
    lVar11 = (longlong)iVar6 * 0xe8;
    *(undefined8 *)(lVar11 + lVar10) = local_1a8;
    *(longlong *)(lVar11 + 8 + lVar10) = local_1a0;
    if (local_1a0 != 0) {
      LOCK();
      *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
      UNLOCK();
    }
    *(longlong *)(lVar11 + 0x10 + lVar10) = local_198;
    *(longlong **)(lVar11 + 0x18 + lVar10) = plStack_190;
    if (plStack_190 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_190 + 8) = *(int *)((longlong)plStack_190 + 8) + 1;
      UNLOCK();
    }
    FUN_140b9a900(lVar10 + 0x20 + lVar11,&local_188);
    *(double *)(lVar11 + 0xe0 + lVar10) = local_c8;
  }
  iVar6 = *(int *)(param_1 + 0x428) + -1;
  if (-1 < iVar6) {
    lVar10 = (longlong)iVar6 * 0xe8;
    do {
      if (1200.0 < dVar3 - *(double *)(*plVar8 + 0xe0 + lVar10)) {
        if ((iVar6 < 0) || (*(int *)(param_1 + 0x428) <= iVar6)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_140be7890(plVar8,iVar6,1,1);
        }
      }
      lVar10 = lVar10 + -0xe8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  lVar10 = (longlong)*(int *)(param_1 + 0x428) * 0xe8;
  FUN_140b990e0(*plVar8,*plVar8 + lVar10,lVar10 / 0xe8,local_3c8);
  if (5 < *(int *)(param_1 + 0x428)) {
    FUN_140be7890(plVar8,5,1,1);
  }
  plVar8 = (longlong *)FUN_1424503b0(param_1);
  if (plVar8 != (longlong *)0x0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar10 = (**(code **)(*plVar8 + 0xfa8))(plVar8);
      uVar14 = 0;
      if ((lVar10 != 0) && (iVar6 = *(int *)(lVar10 + 0x48), uVar15 = uVar14, 0 < iVar6)) {
        do {
          if (((longlong)uVar15 < 0) || (iVar6 <= (int)uVar14)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (((bVar4) &&
              (plVar8 = *(longlong **)(*(longlong *)(lVar10 + 0x40) + uVar15 * 8),
              plVar8 != (longlong *)0x0)) &&
             (lVar11 = (**(code **)(*plVar8 + 0x278))(), lVar11 != 0)) {
            lVar16 = AGMeshParameterCue::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              FUN_14111da10(lVar11);
              break;
            }
          }
          iVar6 = *(int *)(lVar10 + 0x48);
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          uVar15 = uVar15 + 1;
        } while ((int)uVar13 < iVar6);
      }
    }
  }
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0xaa0) == 0) || (*(longlong **)(param_1 + 0xa98) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x18))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    if (*(int *)(param_1 + 0xaa0) != 0) {
      plVar8 = *(longlong **)(param_1 + 0xa98);
    }
    (**(code **)(*plVar8 + 0x40))(plVar8,&local_1a8);
  }
  TBaseDelegate<void>::ExecuteIfBound(param_1 + 0xaa8);
  FUN_140b9dc10(&local_1a8);
  FUN_140b9cdd0(&local_270);
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_300 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)local_300 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_300 + 8))(local_300,1);
      }
    }
  }
  if (local_3a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140bdcff0 FUN_140bdcff0 body=1027 status=ok
// SIG undefined FUN_140bdcff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140bdcff0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined1 local_1a0;
  undefined4 *local_198;
  ulonglong *puStack_190;
  longlong local_188 [3];
  undefined1 local_170 [8];
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined **local_108;
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  iVar7 = TArray<TSharedPtr<FUniqueNetId_const_,0>,FDefaultAllocator>::
          IndexOfByPredicate<FUniqueNetIdMatcher>(param_1 + 0x1440,*param_2);
  if (iVar7 != -1) {
    local_1a8 = local_188;
    local_188[0] = 0;
    local_188[1] = 0;
    cVar6 = FUN_140d79f00(*(undefined8 *)(param_1 + 0x478),param_2,1,0);
    if (cVar6 != '\0') {
      lVar8 = FText::FromString(local_90,local_188);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b8,L"You have been invited to be a SHiFT friend by {0}",
                         L"OakGameInstance",L"FriendInviteReceivedSpecific");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar9);
      local_78[0] = 4;
      FText::FText(local_68,lVar8);
      local_168 = *puVar10;
      local_198 = local_78;
      puStack_190 = local_48;
      local_160 = puVar10[1];
      local_50 = '\x01';
      if (local_160 != 0) {
        LOCK();
        *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
        UNLOCK();
      }
      local_158 = local_198;
      uStack_150 = puStack_190;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_158);
      uVar9 = FText::Format(local_d0,&local_168,uVar9);
      FText::FText(local_120,uVar9);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_c8 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_60 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar4 = (longlong *)puVar10[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar4 = *(longlong **)(lVar8 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b0 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_138,L"Friend Invite Received",L"OakGameInstance",L"FriendInviteReceivedTitle"
                );
      FWeakObjectPtr::operator=(local_188 + 2,0);
      FWeakObjectPtr::operator=(local_170,0);
      FWeakObjectPtr::operator=(&local_198,0);
      local_108 = &PTR_FUN_1443170a0;
      puStack_190 = (ulonglong *)0x0;
      FText::FText(local_100,local_138);
      FText::FText(local_e8,local_120);
      local_1a8 = local_188 + 2;
      local_1a0 = 2;
      FUN_140c23780(1,&local_108,&local_198,local_170);
      FUN_140b9cdd0(&local_108);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_130 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_118 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
    }
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 0x1440,iVar7,1,1);
    if (*(int *)(param_1 + 0x1448) == 0) {
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(param_1 + 0x478) + 0x1e0,*(undefined8 *)(param_1 + 0x1438));
      *(undefined8 *)(param_1 + 0x1438) = 0;
    }
    if (local_188[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140bdd400 FUN_140bdd400 body=1638 status=ok
// SIG undefined FUN_140bdd400(void)

void FUN_140bdd400(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  int iVar14;
  bool bVar15;
  undefined4 local_res18 [2];
  undefined8 in_stack_fffffffffffffe88;
  uint uVar16;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  int local_110;
  undefined4 local_10c;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  longlong local_b0 [2];
  longlong local_a0 [3];
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  longlong local_38;
  
  uVar16 = (uint)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  bVar15 = false;
  local_res18[0] = 0;
  if (param_3 != DAT_146875028) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar9 = AUGDungeon::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) {
    return;
  }
  FUN_1410cd720(param_2,&local_108);
  plVar4 = *(longlong **)(param_2 + 0x820);
  plVar12 = *(longlong **)(param_2 + 0x818);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = ATTLBaseBossBallPawn::CurrentBazookaLevel(param_2);
  if (local_108 == (longlong *)0x0) {
    local_138 = 0;
    local_130 = 5;
    bVar7 = false;
    bVar15 = true;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"NULL",10);
    plVar11 = &local_138;
  }
  else {
    if ((plVar12 != (longlong *)0x0) && (lVar9 != 0)) {
      FName::FName(local_res18,L"SPARK",1);
      (**(code **)(*plVar12 + 8))(plVar12,local_b8);
      uVar3 = *(undefined4 *)(lVar9 + 0x18);
      local_158 = 0;
      local_150 = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_e8 = local_108;
      plStack_e0 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      local_d8 = plVar12;
      plStack_d0 = plVar4;
      uVar10 = FUN_140bb74b0(param_1);
      FUN_140d7da70(uVar10,&local_f8,&local_e8,&local_d8,(ulonglong)uVar16 << 0x20);
      plVar11 = plStack_e0;
      if (plStack_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_e0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_e0)(plStack_e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_d0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (local_f8 != (longlong *)0x0) {
        local_148 = 0;
        local_140 = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        FGenericPlatformString::Memcpy(local_148,L"session_id",0x16);
        (**(code **)(*local_f8 + 0x20))(local_f8,&local_148,&local_158);
        if (local_148 != 0) {
          FMemory::Free();
        }
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_f0 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)local_f0 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      if ((int)local_150 < 2) {
        bVar15 = true;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_c8 = plVar12;
        plStack_c0 = plVar4;
        cVar8 = FUN_140bca1f0(param_1,&local_c8,0);
        if (cVar8 == '\0') goto LAB_140bdd6b4;
        bVar7 = true;
      }
      else {
LAB_140bdd6b4:
        bVar7 = false;
      }
      plVar11 = plStack_c0;
      if ((bVar15) && (plStack_c0 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      if (bVar7) {
        uVar10 = (**(code **)(*plVar12 + 0x28))(plVar12,local_a0);
        plVar11 = (longlong *)FUN_142b451b0(local_b0,uVar10);
        if (&local_158 != plVar11) {
          if (local_158 != 0) {
            FMemory::Free();
          }
          local_158 = *plVar11;
          *plVar11 = 0;
          local_150 = plVar11[1];
          plVar11[1] = 0;
        }
        if (local_b0[0] != 0) {
          FMemory::Free();
        }
        if (local_a0[0] != 0) {
          FMemory::Free();
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_78 = local_108;
      plStack_70 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      local_88 = plVar12;
      plStack_80 = plVar4;
      FUN_140bddd70(param_1,&local_78,&local_88,uVar3,&local_158);
      lVar5 = local_158;
      goto joined_r0x000140bdd9c3;
    }
    bVar7 = true;
    bVar15 = false;
    plVar11 = (longlong *)(**(code **)(*local_108 + 0x28))(local_108,local_68);
  }
  lVar5 = *plVar11;
  *plVar11 = 0;
  local_48 = lVar5;
  plVar11[1] = 0;
  if ((bVar15) && (local_138 != 0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_68[0] != 0)) {
    FMemory::Free();
  }
  bVar15 = plVar12 == (longlong *)0x0;
  if (bVar15) {
    local_128 = 0;
    local_120 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"NULL",10);
    plVar12 = &local_128;
  }
  else {
    plVar12 = (longlong *)(**(code **)(*plVar12 + 0x28))(plVar12,local_58);
  }
  lVar6 = *plVar12;
  *plVar12 = 0;
  local_38 = lVar6;
  plVar12[1] = 0;
  if ((bVar15) && (local_128 != 0)) {
    FMemory::Free();
  }
  if ((!bVar15) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  if (lVar9 == 0) {
    pwVar13 = L"NULL";
  }
  else {
    switch(*(undefined4 *)(lVar9 + 0x18)) {
    case 0:
      pwVar13 = L"Username";
      break;
    case 1:
      pwVar13 = L"Sportsmanship";
      break;
    case 2:
      pwVar13 = L"Abuse";
      break;
    case 3:
      pwVar13 = L"HateSpeech";
      break;
    case 4:
      pwVar13 = L"LeavingOrAfk";
      break;
    case 5:
      pwVar13 = L"Cheating";
      break;
    case 6:
      pwVar13 = L"UserGeneratedContent";
      break;
    case 7:
      pwVar13 = L"IllicitBehavior";
      break;
    default:
      pwVar13 = L"";
    }
  }
  local_118 = 0;
  local_10c = 0;
  if (*pwVar13 != L'\0') {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pwVar13[lVar9] != L'\0');
    iVar14 = (int)lVar9 + 1;
    local_110 = iVar14;
    if (0 < iVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    }
    lVar9 = local_118;
    FGenericPlatformString::Memcpy(local_118,pwVar13,(longlong)iVar14 * 2);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
joined_r0x000140bdd9c3:
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar4 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_100 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plStack_100 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plStack_100 + 8))(plStack_100,1);
      }
    }
  }
  return;
}



// FUNCTION 140bdda90 FUN_140bdda90 body=721 status=ok
// SIG undefined FUN_140bdda90(void)

void FUN_140bdda90(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined **local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_5 != 0) {
    FText::FText(local_f8);
    if (param_5 == 1) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_50,L"A network error occurred",L"OakGameInstance",
                         L"ShiftReportNetworkFailure");
      FText::operator=(local_f8,uVar5);
      plVar6 = local_48;
    }
    else if (param_5 == 2) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_68,L"The reported player could not be found",L"OakGameInstance",
                         L"ShiftReportUserNotFound");
      FText::operator=(local_f8,uVar5);
      plVar6 = local_60;
    }
    else if (param_5 == 3) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_80,L"Something went wrong",L"OakGameInstance",
                         L"ShiftReportGeneralFailure");
      FText::operator=(local_f8,uVar5);
      plVar6 = local_78;
    }
    else {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_98,L"An unspecified error occurred",L"OakGameInstance",
                         L"ShiftReportUnknownError");
      FText::operator=(local_f8,uVar5);
      plVar6 = local_90;
    }
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
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Shift Player Report Failed",L"OakGameInstance",
                       L"ShiftReportFailed");
    local_d0 = &PTR_FUN_1443170a0;
    FText::FText(local_c8,uVar5);
    FText::FText(local_b0,local_f8);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    FWeakObjectPtr::operator=(local_res10,0);
    FWeakObjectPtr::operator=(local_res18,0);
    FWeakObjectPtr::operator=(local_e0,0);
    local_d8 = 0;
    FUN_140c23780(2,&local_d0,local_e0,local_res18,local_res10,2);
    FUN_140b9cdd0(&local_d0);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_f0 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
  }
  plVar6 = *(longlong **)(param_2 + 8);
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
  plVar6 = *(longlong **)(param_3 + 8);
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
  return;
}



// FUNCTION 140bddd70 FUN_140bddd70 body=844 status=ok
// SIG undefined FUN_140bddd70(void)

void FUN_140bddd70(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 local_90 [8];
  longlong local_88 [3];
  longlong *local_70;
  longlong *local_68;
  longlong local_58 [3];
  
  lVar7 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),local_88 + 2,param_2);
  lVar7 = local_88[2];
  if (local_88[2] != 0) {
    lVar10 = *param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar4 = *param_3;
    plVar5 = (longlong *)param_3[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)(local_88[2] + 0x198);
    plVar9 = (longlong *)FMemory::Realloc(0,0x50);
    local_68 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_GetPoolName_144319a40;
      plVar9[1] = param_1;
      plVar9[2] = lVar10;
      plVar9[3] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      plVar9[4] = lVar4;
      plVar9[5] = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar9 + 6) = param_4;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[8] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_144319a88;
    }
    uVar12 = 0;
    if (plVar9 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x20))(plVar9,local_90);
      uVar12 = *puVar11;
      iVar2 = *(int *)(lVar7 + 0x1a0);
      iVar6 = iVar2 + 1;
      *(int *)(lVar7 + 0x1a0) = iVar6;
      if (*(int *)(lVar7 + 0x1a4) < iVar6) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
      }
      puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar8);
      *puVar11 = plVar9;
      *(undefined4 *)(puVar11 + 1) = 5;
    }
    *(undefined8 *)(param_1 + 5000) = uVar12;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar5)(plVar5);
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    local_88[0] = 0;
    local_88[1] = 0;
    uVar12 = (**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,local_58);
    FUN_142b680f0(local_88[2],uVar12,param_4,param_5,local_88);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 140bde0c0 FUN_140bde0c0 body=838 status=ok
// SIG undefined FUN_140bde0c0(void)

wchar_t * FUN_140bde0c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  undefined8 local_res8;
  longlong local_res18;
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  pwVar13 = (wchar_t *)0x0;
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar8 == 0) || ((*(uint *)(lVar8 + 0x830) >> 2 & 1) == 0)) &&
      ((lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 == 0 ||
       ((lVar8 = UWorld::GetGameState<APVPGameState>(lVar8), lVar8 == 0 ||
        (*(int *)(lVar8 + 0x618) == 0)))))) && (param_2 != 0)) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (cVar7 = FUN_140d01750(param_2), cVar7 == '\0')) {
      FUN_140d08690(param_2);
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakGameInstance::OnControllerDisconnectClicked",L"::");
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar13 = pwVar5;
      }
      FName::FName(&local_res18,pwVar13 + 2,1);
      FWeakObjectPtr::operator=(local_78,param_1);
      local_70 = local_res18;
      local_res8 = 0;
      if ((local_res18 != 0) && (lVar8 = FWeakObjectPtr::Get(local_78), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_70);
      }
      local_88[0] = 0;
      local_88[1] = 1;
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(local_88,0);
      lVar8 = local_88[0];
      uVar10 = FUN_1404b03b0();
      FText::FText(lVar8,uVar10);
      lVar6 = local_88[0];
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      *(undefined2 *)(lVar8 + 0x28) = 1;
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_68,L"Okay",L"OakGameInstance",L"DialogChoice_Okay");
      FText::operator=(lVar6,uVar10);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      lVar8 = local_88[0];
      puVar11 = (undefined8 *)FName::FName(&local_res8,&DAT_1442f3d24,1);
      *(undefined8 *)(lVar8 + 0x18) = *puVar11;
      *(undefined8 *)(local_88[0] + 0x20) = DAT_146b3e2a0;
      *(undefined1 *)(local_88[0] + 0x28) = 0;
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_38,L"Your controller was disconnected.",L"OakGameInstance",
                          L"ControllerDisconnectedMessage");
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_50,L"Controller Disconnected",L"OakGameInstance",
                          L"ControllerDisconnectedHeader");
      pwVar13 = (wchar_t *)FUN_1410f2f10(param_2,uVar12,uVar10,local_88,local_78,0,0,0,0,1);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      TArray<FKeyBindMenuEntry,FDefaultAllocator>::~TArray<FKeyBindMenuEntry,FDefaultAllocator>
                (local_88);
    }
  }
  return pwVar13;
}



// FUNCTION 140bde410 FUN_140bde410 body=7002 status=ok
// SIG undefined FUN_140bde410(void)

void FUN_140bde410(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  float *pfVar17;
  undefined4 *puVar18;
  wchar_t *pwVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  uint *puVar23;
  undefined2 *puVar24;
  longlong *plVar25;
  undefined4 *puVar26;
  undefined2 *puVar27;
  double in_stack_fffffffffffffb88;
  undefined4 uVar28;
  undefined2 *local_468;
  undefined8 local_460;
  longlong *local_458;
  ulonglong local_450;
  undefined2 *local_448;
  undefined8 local_440;
  longlong *local_438;
  ulonglong local_430;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  longlong local_3c0;
  undefined8 local_3b8;
  uint local_3b0;
  uint uStack_3ac;
  uint *puStack_3a8;
  undefined4 local_3a0;
  int iStack_39c;
  uint uStack_398;
  undefined4 uStack_394;
  longlong local_390;
  undefined8 local_388;
  uint local_380;
  uint uStack_37c;
  uint *puStack_378;
  undefined4 local_370;
  int iStack_36c;
  uint uStack_368;
  undefined4 uStack_364;
  longlong local_360;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  longlong local_300;
  int local_2f8;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  longlong *local_2e0;
  longlong *local_2d8;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  longlong *local_280;
  undefined8 uStack_278;
  uint *local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 uStack_250;
  uint *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  undefined8 uStack_208;
  uint *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8 [2];
  longlong local_1d8 [2];
  longlong local_1c8 [2];
  longlong local_1b8 [2];
  longlong local_1a8 [2];
  longlong local_198 [2];
  longlong local_188 [2];
  longlong local_178 [2];
  longlong local_168 [2];
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [2];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong local_58 [4];
  
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_228 = lVar8;
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a710) &&
     (_Init_thread_header(&DAT_14686a710), DAT_14686a710 == -1)) {
    FName::FName(&DAT_14686a708,"Friends",1);
    _Init_thread_footer(&DAT_14686a710);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a720) &&
     (_Init_thread_header(&DAT_14686a720), DAT_14686a720 == -1)) {
    FName::FName(&DAT_14686a718,"FriendLoadOut",1);
    _Init_thread_footer(&DAT_14686a720);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a730) &&
     (_Init_thread_header(&DAT_14686a730), DAT_14686a730 == -1)) {
    FName::FName(&DAT_14686a728,"FriendSkillTree",1);
    _Init_thread_footer(&DAT_14686a730);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a740) &&
     (_Init_thread_header(&DAT_14686a740), DAT_14686a740 == -1)) {
    FName::FName(&DAT_14686a738,"FriendCrewQuarter",1);
    _Init_thread_footer(&DAT_14686a740);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a750) &&
     (_Init_thread_header(&DAT_14686a750), DAT_14686a750 == -1)) {
    FName::FName(&DAT_14686a748,"FriendTrophyCase",1);
    _Init_thread_footer(&DAT_14686a750);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a760) &&
     (_Init_thread_header(&DAT_14686a760), DAT_14686a760 == -1)) {
    FName::FName(&DAT_14686a758,"ProfileImages",1);
    _Init_thread_footer(&DAT_14686a760);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a770) &&
     (_Init_thread_header(&DAT_14686a770), DAT_14686a770 == -1)) {
    FName::FName(&DAT_14686a768,"DisplayDataCache",1);
    _Init_thread_footer(&DAT_14686a770);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a780) &&
     (_Init_thread_header(&DAT_14686a780), DAT_14686a780 == -1)) {
    FName::FName(&DAT_14686a778,"Controllers",1);
    _Init_thread_footer(&DAT_14686a780);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a790) &&
     (_Init_thread_header(&DAT_14686a790), DAT_14686a790 == -1)) {
    FName::FName(&DAT_14686a788,"PlayerAlert",1);
    _Init_thread_footer(&DAT_14686a790);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a7a0) &&
     (_Init_thread_header(&DAT_14686a7a0), DAT_14686a7a0 == -1)) {
    FName::FName(&DAT_14686a798,"PresenceSessions",1);
    _Init_thread_footer(&DAT_14686a7a0);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_14686a7b0) &&
     (_Init_thread_header(&DAT_14686a7b0), DAT_14686a7b0 == -1)) {
    FName::FName(&DAT_14686a7a8,"IdleConnections",1);
    _Init_thread_footer(&DAT_14686a7b0);
  }
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a7a8);
    uVar12 = 0;
    puVar27 = &DAT_143f3eda8;
    if (cVar4 != '\0') {
      lVar8 = param_3 + 0x98;
      FDisplayDebugManager::SetDrawColor(lVar8,&DAT_1464aa73c);
      local_3ec = 0;
      local_340 = 0;
      local_338 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_340,0);
      FGenericPlatformString::Memcpy(local_340,L"Idle Connections:",0x24);
      FUN_1428a6fb0(lVar8,&local_340,&local_3ec);
      if (local_340 != 0) {
        FMemory::Free();
      }
      FDisplayDebugManager::SetDrawColor(lVar8,&DAT_1464aa730);
      pfVar17 = (float *)((longlong)param_1 + 0xf8c);
      uVar9 = uVar12;
      do {
        local_3d0 = 0;
        uVar13 = (uint)uVar9 & 0xff;
        if ((char)uVar9 == '\0') {
          pwVar19 = L"Lobby";
        }
        else if (uVar13 == 1) {
          pwVar19 = L"Game";
        }
        else if (uVar13 == 2) {
          pwVar19 = L"Friends";
        }
        else {
          pwVar19 = L"";
        }
        in_stack_fffffffffffffb88 = (double)*(float *)(param_1 + 499);
        FString::PrintfImpl(local_1c8,L"  Connection[%s]: %f/%f",pwVar19,(double)*pfVar17,
                            in_stack_fffffffffffffb88);
        FUN_1428a6fb0(lVar8,local_1c8,&local_3d0);
        if (local_1c8[0] != 0) {
          FMemory::Free();
        }
        uVar13 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar13;
        pfVar17 = pfVar17 + 1;
      } while ((int)uVar13 < 3);
      local_328 = 0;
      FUN_1404d0c50(&local_2e0,0);
      if (local_2e0 != (longlong *)0x0) {
        local_330 = 0x11f;
        lVar6 = (**(code **)(*local_2e0 + 0x10))(local_2e0,0x11f);
        if (lVar6 != 0) {
          local_468 = (undefined2 *)0x0;
          local_460 = 0;
          local_3cc = 0;
          local_3c0 = 0;
          local_3b8 = 0xd;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c0,0);
          FGenericPlatformString::Memcpy(local_3c0,L"GameSession:",0x1a);
          FUN_1428a6fb0(lVar8,&local_3c0,&local_3cc);
          if (local_3c0 != 0) {
            FMemory::Free();
          }
          puVar7 = (undefined8 *)FName::FName(local_c8,L"LOBBYNETWORK",1);
          lVar6 = lVar6 + 0x28;
          cVar4 = FUN_1404a96c0(lVar6,*puVar7,&local_468);
          if (cVar4 != '\0') {
            local_3c8 = 0;
            puVar24 = &DAT_143f3eda8;
            if ((int)local_460 != 0) {
              puVar24 = local_468;
            }
            FString::PrintfImpl(local_1b8,L"  LOBBYNETWORK:%s",puVar24);
            FUN_1428a6fb0(lVar8,local_1b8,&local_3c8);
            if (local_1b8[0] != 0) {
              FMemory::Free();
            }
          }
          puVar7 = (undefined8 *)FName::FName(local_70,L"LOBBYINVITE",1);
          cVar4 = FUN_1404a96c0(lVar6,*puVar7,&local_468);
          if (cVar4 != '\0') {
            local_428 = 0;
            puVar24 = &DAT_143f3eda8;
            if ((int)local_460 != 0) {
              puVar24 = local_468;
            }
            FString::PrintfImpl(local_1a8,L"  LOBBYINVITE:%s",puVar24);
            FUN_1428a6fb0(lVar8,local_1a8,&local_428);
            if (local_1a8[0] != 0) {
              FMemory::Free();
            }
          }
          puVar7 = (undefined8 *)FName::FName(local_c0,L"GAMENETWORK",1);
          cVar4 = FUN_1404a96c0(lVar6,*puVar7,&local_468);
          if (cVar4 != '\0') {
            local_424 = 0;
            puVar24 = &DAT_143f3eda8;
            if ((int)local_460 != 0) {
              puVar24 = local_468;
            }
            FString::PrintfImpl(local_198,L"  GAMENETWORK:%s",puVar24);
            FUN_1428a6fb0(lVar8,local_198,&local_424);
            if (local_198[0] != 0) {
              FMemory::Free();
            }
          }
          puVar7 = (undefined8 *)FName::FName(local_78,L"GAMEINVITE",1);
          cVar4 = FUN_1404a96c0(lVar6,*puVar7,&local_468);
          if (cVar4 != '\0') {
            local_420 = 0;
            puVar24 = &DAT_143f3eda8;
            if ((int)local_460 != 0) {
              puVar24 = local_468;
            }
            FString::PrintfImpl(local_188,L"  GAMEINVITE:%s",puVar24);
            FUN_1428a6fb0(lVar8,local_188,&local_420);
            if (local_188[0] != 0) {
              FMemory::Free();
            }
          }
          puVar7 = (undefined8 *)FName::FName(local_60,L"FRIENDSMESHNETWORK",1);
          cVar4 = FUN_1404a96c0(lVar6,*puVar7,&local_468);
          if (cVar4 != '\0') {
            local_41c = 0;
            puVar24 = &DAT_143f3eda8;
            if ((int)local_460 != 0) {
              puVar24 = local_468;
            }
            FString::PrintfImpl(local_178,L"  FRIENDSMESHNETWORK:%s",puVar24);
            FUN_1428a6fb0(lVar8,local_178,&local_41c);
            if (local_178[0] != 0) {
              FMemory::Free();
            }
          }
          puVar7 = (undefined8 *)FName::FName(local_68,L"FRIENDSMESHINVITE",1);
          cVar4 = FUN_1404a96c0(lVar6,*puVar7,&local_468);
          if (cVar4 != '\0') {
            local_418 = 0;
            puVar24 = &DAT_143f3eda8;
            if ((int)local_460 != 0) {
              puVar24 = local_468;
            }
            FString::PrintfImpl(local_168,L"  FRIENDSMESHINVITE:%s",puVar24);
            FUN_1428a6fb0(lVar8,local_168,&local_418);
            if (local_168[0] != 0) {
              FMemory::Free();
            }
          }
          if (local_468 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
      plVar25 = local_2d8;
      if (local_2d8 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_2d8 + 1;
        lVar8 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_2d8)(local_2d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_2d8 + 8))(local_2d8,1);
          }
        }
      }
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a708);
    if (cVar4 != '\0') {
      uVar9 = param_1[0x211];
      if (uVar9 == 0) {
        lVar8 = operator_new(0x1a8);
        uVar9 = uVar12;
        if (lVar8 != 0) {
          uVar9 = FUN_140d64540(lVar8);
        }
        param_1[0x211] = uVar9;
      }
      FUN_140d72d70(uVar9,param_3);
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a718);
    if (cVar4 != '\0') {
      uVar9 = param_1[0x211];
      if (uVar9 == 0) {
        lVar8 = operator_new(0x1a8);
        uVar9 = uVar12;
        if (lVar8 != 0) {
          uVar9 = FUN_140d64540(lVar8);
        }
        param_1[0x211] = uVar9;
      }
      FUN_140d72150(uVar9,param_3);
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a728);
    if (cVar4 != '\0') {
      uVar9 = param_1[0x211];
      if (uVar9 == 0) {
        lVar8 = operator_new(0x1a8);
        uVar9 = uVar12;
        if (lVar8 != 0) {
          uVar9 = FUN_140d64540(lVar8);
        }
        param_1[0x211] = uVar9;
      }
      FUN_140d72760(uVar9,param_3);
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a738);
    if (cVar4 != '\0') {
      uVar9 = param_1[0x211];
      if (uVar9 == 0) {
        lVar8 = operator_new(0x1a8);
        uVar9 = uVar12;
        if (lVar8 != 0) {
          uVar9 = FUN_140d64540(lVar8);
        }
        param_1[0x211] = uVar9;
      }
      FUN_140d71b40(uVar9,param_3);
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a748);
    if (cVar4 != '\0') {
      uVar9 = param_1[0x211];
      if (uVar9 == 0) {
        lVar8 = operator_new(0x1a8);
        uVar9 = uVar12;
        if (lVar8 != 0) {
          uVar9 = FUN_140d64540(lVar8);
        }
        param_1[0x211] = uVar9;
      }
      FUN_140d72760(uVar9,param_3);
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a758);
    if (cVar4 != '\0') {
      local_438 = (longlong *)0x0;
      local_430 = 0;
      AK::MemoryMgr::StartProfileThreadUsage((int)param_1[0x8f] + 0x1f8);
      plVar25 = (longlong *)(param_3 + 0x98);
      local_2c4 = (float)DAT_1464aa73c._3_1_ * 0.003921569;
      local_2d0 = (float)DAT_1464aa73c._2_1_ * 0.003921569;
      local_2c8 = (float)(byte)DAT_1464aa73c * 0.003921569;
      local_2cc = (float)DAT_1464aa73c._1_1_ * 0.003921569;
      (**(code **)(*plVar25 + 0x20))(plVar25,&local_2d0);
      local_414 = 0;
      local_390 = 0;
      local_388 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_390,0);
      FGenericPlatformString::Memcpy(local_390,L"Profile Image Cache",0x28);
      FUN_1428a6fb0(plVar25,&local_390,&local_414);
      if (local_390 != 0) {
        FMemory::Free();
      }
      local_2b4 = (float)DAT_1464aa730._3_1_ * 0.003921569;
      local_2c0 = (float)DAT_1464aa730._2_1_ * 0.003921569;
      local_2b8 = (float)(byte)DAT_1464aa730 * 0.003921569;
      local_2bc = (float)DAT_1464aa730._1_1_ * 0.003921569;
      (**(code **)(*plVar25 + 0x20))(plVar25,&local_2c0);
      uVar9 = (ulonglong)(int)local_430;
      plVar16 = local_438 + uVar9 * 2;
      plVar14 = local_438;
      if (local_438 != plVar16) {
        do {
          local_410 = 0;
          FUN_1428a6fb0(plVar25,plVar14,&local_410);
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar16);
        uVar9 = local_430 & 0xffffffff;
      }
      uVar13 = (uint)uVar9;
      plVar25 = local_438;
      while (uVar13 != 0) {
        if (*plVar25 != 0) {
          FMemory::Free();
        }
        plVar25 = plVar25 + 2;
        uVar13 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar13;
      }
      if (local_438 != (longlong *)0x0) {
        FMemory::Free(local_438);
      }
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a768);
    if (cVar4 != '\0') {
      local_458 = (longlong *)0x0;
      local_450 = 0;
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1[0x8f]);
      plVar25 = (longlong *)(param_3 + 0x98);
      local_2a4 = (float)DAT_1464aa73c._3_1_ * 0.003921569;
      local_2b0 = (float)DAT_1464aa73c._2_1_ * 0.003921569;
      local_2a8 = (float)(byte)DAT_1464aa73c * 0.003921569;
      local_2ac = (float)DAT_1464aa73c._1_1_ * 0.003921569;
      (**(code **)(*plVar25 + 0x20))(plVar25,&local_2b0);
      local_40c = 0;
      local_350 = 0;
      local_348 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_350,0);
      FGenericPlatformString::Memcpy(local_350,L"Display Data Cache",0x26);
      FUN_1428a6fb0(plVar25,&local_350,&local_40c);
      if (local_350 != 0) {
        FMemory::Free();
      }
      local_294 = (float)DAT_1464aa730._3_1_ * 0.003921569;
      local_2a0 = (float)DAT_1464aa730._2_1_ * 0.003921569;
      local_298 = (float)(byte)DAT_1464aa730 * 0.003921569;
      local_29c = (float)DAT_1464aa730._1_1_ * 0.003921569;
      (**(code **)(*plVar25 + 0x20))(plVar25,&local_2a0);
      uVar9 = (ulonglong)(int)local_450;
      plVar16 = local_458 + uVar9 * 2;
      plVar14 = local_458;
      if (local_458 != plVar16) {
        do {
          local_408 = 0;
          FUN_1428a6fb0(plVar25,plVar14,&local_408);
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar16);
        uVar9 = local_450 & 0xffffffff;
      }
      uVar13 = (uint)uVar9;
      plVar25 = local_458;
      while (uVar13 != 0) {
        if (*plVar25 != 0) {
          FMemory::Free();
        }
        plVar25 = plVar25 + 2;
        uVar13 = (int)uVar9 - 1;
        uVar9 = (ulonglong)uVar13;
      }
      if (local_458 != (longlong *)0x0) {
        FMemory::Free(local_458);
      }
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a788);
    if ((cVar4 != '\0') && (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) {
      plVar25 = (longlong *)(param_3 + 0x98);
      local_28c = (float)DAT_1464aa73c._1_1_ * 0.003921569;
      local_284 = (float)DAT_1464aa73c._3_1_ * 0.003921569;
      local_288 = (float)(byte)DAT_1464aa73c * 0.003921569;
      local_290 = (float)DAT_1464aa73c._2_1_ * 0.003921569;
      (**(code **)(*plVar25 + 0x20))(plVar25,&local_290);
      local_404 = 0;
      local_360 = 0;
      local_358 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360,0);
      FGenericPlatformString::Memcpy(local_360,L"ActivePlayerAlerts",0x26);
      FUN_1428a6fb0(plVar25,&local_360,&local_404);
      if (local_360 != 0) {
        FMemory::Free();
      }
      local_314 = (float)DAT_1464aa730._3_1_ * 0.003921569;
      local_320 = (float)DAT_1464aa730._2_1_ * 0.003921569;
      local_318 = (float)(byte)DAT_1464aa730 * 0.003921569;
      local_31c = (float)DAT_1464aa730._1_1_ * 0.003921569;
      (**(code **)(*plVar25 + 0x20))(plVar25,&local_320);
      UWorld::GetPlayerControllerIterator(lVar8,&local_300);
      while( true ) {
        if ((local_2f8 < 0) || (*(int *)(local_300 + 8) <= local_2f8)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) break;
        lVar8 = FWeakObjectPtr::Get();
        if (lVar8 != 0) {
          lVar6 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_142dcf3a0(lVar8,&local_220);
            if (local_220 != (longlong *)0x0) {
              local_2f0 = (float)DAT_1464aa740._2_1_ * 0.003921569;
              local_2ec = (float)DAT_1464aa740._1_1_ * 0.003921569;
              local_2e8 = (float)(byte)DAT_1464aa740 * 0.003921569;
              local_2e4 = (float)DAT_1464aa740._3_1_ * 0.003921569;
              (**(code **)(*plVar25 + 0x20))(plVar25,&local_2f0);
              local_400 = 0;
              uVar10 = (**(code **)(*local_220 + 0x30))(local_220,local_58);
              FUN_1428a6fb0(plVar25,uVar10,&local_400);
              if (local_58[0] != 0) {
                FMemory::Free();
              }
              local_310 = (float)DAT_1464aa730._2_1_ * 0.003921569;
              local_30c = (float)DAT_1464aa730._1_1_ * 0.003921569;
              local_308 = (float)(byte)DAT_1464aa730 * 0.003921569;
              local_304 = (float)DAT_1464aa730._3_1_ * 0.003921569;
              (**(code **)(*plVar25 + 0x20))(plVar25,&local_310);
              puVar18 = *(undefined4 **)(lVar8 + 0x1978);
              puVar26 = puVar18 + (longlong)*(int *)(lVar8 + 0x1980) * 0x10;
              if (puVar18 != puVar26) {
                puVar15 = puVar18 + 0xe;
                do {
                  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffb88 >> 0x20);
                  local_3fc = 0;
                  local_448 = (undefined2 *)0x0;
                  local_440 = 8;
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448,0);
                  FGenericPlatformString::Memcpy(local_448,L"nullptr",0x10);
                  cVar4 = FWeakObjectPtr::IsValid(puVar15);
                  if (cVar4 != '\0') {
                    lVar8 = FWeakObjectPtr::Get(puVar15);
                    local_230 = *(undefined8 *)(lVar8 + 0x18);
                    FName::ToString(&local_230,&local_448);
                  }
                  puVar24 = &DAT_143f3eda8;
                  if ((int)local_440 != 0) {
                    puVar24 = local_448;
                  }
                  puVar7 = (undefined8 *)
                           (**(code **)(**(longlong **)(puVar15 + -10) + 0x30))
                                     (*(longlong **)(puVar15 + -10),local_b8);
                  if (*(int *)(puVar7 + 1) == 0) {
                    puVar20 = &DAT_143f3eda8;
                  }
                  else {
                    puVar20 = (undefined2 *)*puVar7;
                  }
                  in_stack_fffffffffffffb88 = (double)CONCAT44(uVar28,*puVar18);
                  FString::PrintfImpl(local_1e8,
                                      L"    Instigator %s, TargetedActor %s, LocalPlayerIndex %d, AlertTimeRemaining %f"
                                      ,puVar20,puVar24,in_stack_fffffffffffffb88,
                                      (double)(float)puVar15[-0xd]);
                  if (local_b8[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_448 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                  FUN_1428a6fb0(plVar25,local_1e8,&local_3fc);
                  if (local_1e8[0] != 0) {
                    FMemory::Free();
                  }
                  puVar18 = puVar18 + 0x10;
                  puVar15 = puVar15 + 0x10;
                } while (puVar18 != puVar26);
              }
            }
            plVar14 = local_218;
            if (local_218 != (longlong *)0x0) {
              LOCK();
              plVar16 = local_218 + 1;
              lVar8 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_218)();
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
          }
        }
        local_2f8 = local_2f8 + 1;
      }
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a778);
    if (cVar4 != '\0') {
      FUN_140dd1580(&DAT_14686a610,param_3,param_1 + 7);
      if (param_1[0xb6] != 0) {
        FUN_140f0d1d0(param_1[0xb6],param_3);
      }
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a798);
    if (cVar4 != '\0') {
      local_3f8 = 0;
      plVar25 = param_1 + 0x1b0;
      FString::PrintfImpl(local_158,L"PresenceSessions (%d):",
                          (int)param_1[0x1b1] - *(int *)((longlong)param_1 + 0xdb4));
      lVar8 = param_3 + 0x98;
      FUN_1428a6fb0(lVar8,local_158,&local_3f8);
      if (local_158[0] != 0) {
        FMemory::Free();
      }
      puStack_378 = (uint *)(param_1 + 0x1b2);
      uStack_37c = 1;
      iVar2 = (int)param_1[0x1b5];
      local_380 = 0;
      iStack_36c = 0;
      uStack_368 = 0;
      if (iVar2 != 0) {
        puVar23 = (uint *)param_1[0x1b4];
        if ((uint *)param_1[0x1b4] == (uint *)0x0) {
          puVar23 = puStack_378;
        }
        uVar13 = *puVar23;
        uVar9 = uVar12;
        uVar21 = uVar12;
        while (uVar13 == 0) {
          iVar5 = (int)uVar9;
          uStack_368 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)uStack_368;
          local_380 = iVar5 + 1;
          uVar9 = (ulonglong)local_380;
          iStack_36c = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140bdf646;
          uVar13 = puVar23[(longlong)iVar5 + 1];
        }
        uStack_37c = uVar13 - 1 & uVar13 ^ uVar13;
        iVar5 = 0x1f;
        if (uStack_37c != 0) {
          for (; uStack_37c >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_37c == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_36c = (uStack_368 - iVar5) + 0x1f;
        if (iVar2 < iStack_36c) {
          iStack_36c = iVar2;
        }
      }
LAB_140bdf646:
      local_370 = 0xffffffff;
      uStack_250 = CONCAT44(uStack_37c,local_380);
      uStack_240 = CONCAT44(iStack_36c,0xffffffff);
      local_238 = CONCAT44(uStack_364,uStack_368);
      iVar5 = iStack_36c;
      local_258 = plVar25;
      local_248 = puStack_378;
      local_210 = plVar25;
      uStack_208 = uStack_250;
      puStack_200 = puStack_378;
      uStack_1f8 = uStack_240;
      uStack_1f0 = local_238;
      if (iStack_36c < iVar2) {
        do {
          local_3f4 = 0;
          lVar6 = *local_258;
          lVar11 = (longlong)iVar5;
          plVar25 = *(longlong **)(lVar6 + 8 + lVar11 * 0x30);
          if (*(int *)(lVar6 + 0x20 + lVar11 * 0x30) == 0) {
            puVar24 = &DAT_143f3eda8;
          }
          else {
            puVar24 = *(undefined2 **)(lVar6 + 0x18 + lVar11 * 0x30);
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x30))(plVar25,local_98);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar20 = &DAT_143f3eda8;
          }
          else {
            puVar20 = (undefined2 *)*puVar7;
          }
          puVar7 = (undefined8 *)FName::ToString(lVar6 + lVar11 * 0x30,local_a8);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar22 = &DAT_143f3eda8;
          }
          else {
            puVar22 = (undefined2 *)*puVar7;
          }
          FString::PrintfImpl(local_148,L"  Type:%s, Owner:%s, SessionId:%s",puVar22,puVar20,puVar24
                             );
          FUN_1428a6fb0(lVar8,local_148,&local_3f4);
          if (local_148[0] != 0) {
            FMemory::Free();
          }
          if (local_a8[0] != 0) {
            FMemory::Free();
          }
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          uStack_240 = CONCAT44(uStack_240._4_4_,(uint)uStack_240 & ~uStack_250._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_250);
          iVar5 = uStack_240._4_4_;
        } while (uStack_240._4_4_ < (int)local_248[6]);
      }
      local_3f0 = 0;
      plVar25 = param_1 + 0x1ba;
      FString::PrintfImpl(local_138,L"PlayerPresenceSessionIds (%d):",
                          (int)param_1[0x1bb] - *(int *)((longlong)param_1 + 0xe04));
      FUN_1428a6fb0(lVar8,local_138,&local_3f0);
      if (local_138[0] != 0) {
        FMemory::Free();
      }
      puStack_3a8 = (uint *)(param_1 + 0x1bc);
      local_3b0 = 0;
      iVar2 = (int)param_1[0x1bf];
      uStack_3ac = 1;
      iStack_39c = 0;
      uStack_398 = 0;
      if (iVar2 != 0) {
        puVar23 = (uint *)param_1[0x1be];
        if ((uint *)param_1[0x1be] == (uint *)0x0) {
          puVar23 = puStack_3a8;
        }
        uVar13 = *puVar23;
        uVar9 = uVar12;
        while (uVar13 == 0) {
          iVar5 = (int)uVar9;
          uStack_398 = (int)uVar12 + 0x20;
          uVar12 = (ulonglong)uStack_398;
          local_3b0 = iVar5 + 1;
          uVar9 = (ulonglong)local_3b0;
          iStack_39c = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140bdf8ba;
          uVar13 = puVar23[(longlong)iVar5 + 1];
        }
        uStack_3ac = uVar13 - 1 & uVar13 ^ uVar13;
        iVar5 = 0x1f;
        if (uStack_3ac != 0) {
          for (; uStack_3ac >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uStack_3ac == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        iStack_39c = (uStack_398 - iVar5) + 0x1f;
        if (iVar2 < iStack_39c) {
          iStack_39c = iVar2;
        }
      }
LAB_140bdf8ba:
      local_3a0 = 0xffffffff;
      uStack_278 = CONCAT44(uStack_3ac,local_3b0);
      uStack_268 = CONCAT44(iStack_39c,0xffffffff);
      local_260 = CONCAT44(uStack_394,uStack_398);
      iVar5 = iStack_39c;
      local_280 = plVar25;
      local_270 = puStack_3a8;
      local_210 = plVar25;
      uStack_208 = uStack_278;
      puStack_200 = puStack_3a8;
      uStack_1f8 = uStack_268;
      uStack_1f0 = local_260;
      if (iStack_39c < iVar2) {
        do {
          local_3c4 = 0;
          lVar6 = *local_280;
          lVar11 = (longlong)iVar5;
          plVar25 = *(longlong **)(lVar6 + lVar11 * 0x28);
          if (*(int *)(lVar6 + 0x18 + lVar11 * 0x28) == 0) {
            puVar24 = &DAT_143f3eda8;
          }
          else {
            puVar24 = *(undefined2 **)(lVar6 + 0x10 + lVar11 * 0x28);
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar25 + 0x30))(plVar25,local_88);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar20 = &DAT_143f3eda8;
          }
          else {
            puVar20 = (undefined2 *)*puVar7;
          }
          FString::PrintfImpl(local_128,L"  PlayerId:%s, SessionId:%s",puVar20,puVar24);
          FUN_1428a6fb0(lVar8,local_128,&local_3c4);
          if (local_128[0] != 0) {
            FMemory::Free();
          }
          if (local_88[0] != 0) {
            FMemory::Free();
          }
          uStack_268 = CONCAT44(uStack_268._4_4_,(uint)uStack_268 & ~uStack_278._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_278);
          iVar5 = uStack_268._4_4_;
        } while (uStack_268._4_4_ < (int)local_270[6]);
      }
      pwVar19 = L"FALSE";
      local_3e8 = 0;
      if ((char)param_1[0x1d3] != '\0') {
        pwVar19 = L"TRUE";
      }
      FString::PrintfImpl(local_118,L"bPresenceSessionWaitingForNewPlatformPlayers:%s",pwVar19);
      FUN_1428a6fb0(lVar8,local_118,&local_3e8);
      if (local_118[0] != 0) {
        FMemory::Free();
      }
    }
    if ((*(int *)(local_228 + 0x38) < DAT_14686a7c0) &&
       (_Init_thread_header(&DAT_14686a7c0), DAT_14686a7c0 == -1)) {
      FName::FName(&DAT_14686a7b8,"Discord",1);
      _Init_thread_footer(&DAT_14686a7c0);
    }
    cVar4 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_14686a7b8);
    if ((cVar4 != '\0') && (lVar8 = FUN_1407fccd0(), lVar8 != 0)) {
      local_3e4 = 0;
      FString::PrintfImpl(local_108,L"Party: %d/%d",*(undefined4 *)(lVar8 + 0x110),
                          *(undefined4 *)(lVar8 + 0x114));
      FUN_1428a6fb0(param_3 + 0x98,local_108,&local_3e4);
      if (local_108[0] != 0) {
        FMemory::Free();
      }
      local_3e0 = 0;
      if (*(int *)(lVar8 + 0x108) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = *(undefined2 **)(lVar8 + 0x100);
      }
      FString::PrintfImpl(local_f8,L"PartyId: %s",puVar24);
      FUN_1428a6fb0(param_3 + 0x98,local_f8,&local_3e0);
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
      local_3dc = 0;
      if (*(int *)(lVar8 + 0x130) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = *(undefined2 **)(lVar8 + 0x128);
      }
      FString::PrintfImpl(local_e8,L"JoinSecret: %s",puVar24);
      FUN_1428a6fb0(param_3 + 0x98,local_e8,&local_3dc);
      if (local_e8[0] != 0) {
        FMemory::Free();
      }
      local_3d8 = 0;
      if (*(int *)(lVar8 + 0x98) == 0) {
        puVar24 = &DAT_143f3eda8;
      }
      else {
        puVar24 = *(undefined2 **)(lVar8 + 0x90);
      }
      FString::PrintfImpl(local_d8,L"State: %s",puVar24);
      FUN_1428a6fb0(param_3 + 0x98,local_d8,&local_3d8);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      local_3d4 = 0;
      if (*(int *)(lVar8 + 0xa8) != 0) {
        puVar27 = *(undefined2 **)(lVar8 + 0xa0);
      }
      FString::PrintfImpl(local_1d8,L"Details: %s",puVar27);
      FUN_1428a6fb0(param_3 + 0x98,local_1d8,&local_3d4);
      if (local_1d8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140bdff70 FUN_140bdff70 body=344 status=ok
// SIG undefined FUN_140bdff70(void)

void FUN_140bdff70(longlong param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  
  FUN_1404cf2e0(&local_40,0,param_3,param_4,0);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x220))(local_40,param_1 + 0xf68);
  }
  if (param_2 == 1) {
    local_30 = *param_3;
    local_28 = param_3[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)FUN_14244c070(param_1,&local_30);
    FUN_140db57e0(&DAT_14686a610,param_4);
    if (plVar5 == (longlong *)0x0) {
      local_20 = *param_3;
      plVar5 = (longlong *)param_3[1];
      local_18 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
    }
    else {
      (**(code **)(*plVar5 + 0x2b8))(plVar5,param_4);
    }
  }
  FUN_140c289a0(0);
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 140be00d0 FUN_140be00d0 body=178 status=ok
// SIG undefined FUN_140be00d0(void)

void FUN_140be00d0(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_20;
  longlong *local_18;
  
  uVar6 = 0;
  FUN_1404cf2e0(&local_20,0);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x220))(local_20,param_1 + 0x1350);
  }
  if (param_2 == 1) {
    FUN_140bab890(param_1,param_4,0,0,0,1,uVar6);
  }
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140be0190 FUN_140be0190 body=525 status=ok
// SIG undefined FUN_140be0190(void)

void FUN_140be0190(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined **local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0xf70) != 0) {
    FUN_1404cf2e0(&local_88,0);
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x220))(local_88,param_1 + 0xf80);
    }
    if (((param_2 == 1) && (*param_3 != 0)) &&
       (cVar5 = (**(code **)**(undefined8 **)(param_1 + 0xf70))(), cVar5 == '\0')) {
      local_78 = *(undefined8 *)(param_1 + 0xf70);
      local_70 = *(longlong *)(param_1 + 0xf78);
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      lVar6 = FUN_14244c070(param_1,&local_78);
      if (lVar6 != 0) {
        local_68 = *param_3;
        local_60 = param_3[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        lVar7 = FUN_14244c070(param_1,&local_68);
        if (lVar7 == 0) {
          cVar5 = FUN_14254a1f0(lVar6);
          if (cVar5 == '\0') {
            FUN_140bee990(param_1,lVar6);
            local_58 = *param_3;
            plVar4 = (longlong *)param_3[1];
            local_50 = plVar4;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
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
            }
          }
          else {
            uVar8 = FUN_1404b03b0();
            uVar9 = FUN_1404b03b0();
            local_48 = &PTR_FUN_1443170a0;
            FText::FText(local_40,uVar9);
            FText::FText(local_28,uVar8);
            local_48 = &PTR_FUN_1443170a0;
            FUN_140ba9020(param_1);
            FUN_140bb5710(param_1,&local_48);
            FUN_140b9cdd0(&local_48);
          }
        }
      }
    }
    plVar4 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 140be03a0 FUN_140be03a0 body=765 status=ok
// SIG undefined FUN_140be03a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140be03a0(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 local_res8 [4];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined **local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  
  if (param_1[0x170] != 0) {
    return 1;
  }
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar3 = FUN_1428cf800(uVar5);
    if (iVar3 == 3) goto LAB_140be03f4;
  }
  lVar4 = FUN_140bb6170(param_1);
  if (lVar4 != 0) {
LAB_140be03f4:
    *(undefined1 *)((longlong)param_1 + 0xb7a) = 1;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,
                       L"You have been returned to the title screen because a sign-in change occurred."
                       ,L"OakGameInstance",L"SignInStatusChange_Message");
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (&local_98,L"Sign In Status Change",L"OakGameInstance",L"SigninStatusChange");
    local_68 = &PTR_FUN_1443170a0;
    FText::FText(local_60,uVar6);
    FText::FText(local_48,uVar5);
    plVar8 = (longlong *)CONCAT44(uStack_8c,uStack_90);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_78 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    FUN_140bb5710(param_1,&local_68);
    puVar7 = (undefined8 *)FName::FName(local_res10,L"GbxShiftOverlay",1);
    plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar7);
    (**(code **)(*plVar8 + 0x90))(plVar8);
    (**(code **)(*plVar8 + 0xa0))(plVar8);
    FUN_140b9cdd0(&local_68);
    return 1;
  }
  *(undefined1 *)(param_1 + 0x16f) = 1;
  FUN_140dbc5d0(param_1 + 0xbe,local_res8);
  cVar2 = (char)local_res8[0];
  if (((char *)param_1[0x89] == (char *)0x0) || (*(char *)param_1[0x89] == '\0')) {
    if (cVar2 != '\0') goto LAB_140be057f;
LAB_140be0583:
    local_res8[0] = _DAT_146297e38;
  }
  else {
    if (cVar2 == '\0') goto LAB_140be05a2;
LAB_140be057f:
    if (cVar2 == '\x01') goto LAB_140be0583;
  }
  FUN_140bec2c0(param_1,local_res8);
LAB_140be05a2:
  lVar4 = 0;
  local_98 = FUN_140be07e0;
  uStack_90 = 0;
  plVar8 = param_1 + 0x134;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_98;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_98._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_90;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_8c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar4;
    *plVar9 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    plVar10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_res18);
    iVar3 = (int)param_1[0x135];
    lVar4 = *plVar10;
    *(int *)(param_1 + 0x135) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x9ac) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar3);
    }
    puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar8);
    *puVar7 = plVar9;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  param_1[0x170] = lVar4;
  if (param_1[0x86] == 0) {
    FUN_140ba4250(param_1,&DAT_14686a12c,0);
  }
  return 1;
}



// FUNCTION 140be06a0 FUN_140be06a0 body=309 status=ok
// SIG undefined FUN_140be06a0(void)

void FUN_140be06a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 local_res8 [4];
  undefined1 local_res18 [8];
  longlong *local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0xb80) != 0) {
    if ((*(longlong *)(param_1 + 0x1f8) != 0) && (lVar5 = UUGMenuManager::GetFadeHUD(), lVar5 != 0))
    {
      TBaseMulticastDelegate<void>::Remove(lVar5 + 0x80,*(undefined8 *)(param_1 + 0xb80));
    }
    *(undefined8 *)(param_1 + 0xb80) = 0;
    *(undefined1 *)(param_1 + 0xb79) = 0;
    if (*(undefined2 **)(param_1 + 0x448) != (undefined2 *)0x0) {
      local_res8[0] = **(undefined2 **)(param_1 + 0x448);
      uVar6 = FUN_140bb74b0(param_1);
      thunk_FUN_140d82050(uVar6,param_2);
      puVar7 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
      FUN_140bbd560(&local_18,*puVar7);
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x38))(local_18,param_2);
        (**(code **)(*local_18 + 0x30))(local_18,param_2);
      }
      *(undefined1 *)(param_1 + 0xb78) = 0;
      FUN_140ba4250(param_1,local_res8,0);
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
  return;
}



// FUNCTION 140be07e0 FUN_140be07e0 body=823 status=ok
// SIG undefined FUN_140be07e0(void)

void FUN_140be07e0(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong local_res10;
  undefined1 local_88 [8];
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  if (*param_2 != '\0') {
    FUN_140ba4250(param_1,&DAT_14686a12c,0);
    return;
  }
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x9a0,*(undefined8 *)(param_1 + 0xb80));
  *(undefined8 *)(param_1 + 0xb80) = 0;
  *(undefined1 *)(param_1 + 0xb79) = 1;
  if ((*(longlong *)(param_1 + 0x1f8) != 0) && (lVar4 = UUGMenuManager::GetFadeHUD(), lVar4 != 0)) {
    puVar11 = *(undefined8 **)(param_1 + 0x38);
    local_res10 = 0;
    uVar12 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
    if (puVar11 + *(int *)(param_1 + 0x40) < puVar11) {
      uVar12 = 0;
    }
    if (uVar12 != 0) {
      do {
        lVar5 = FUN_142547b50(*puVar11,local_60);
        plVar3 = *(longlong **)(lVar5 + 0x10);
        lVar5 = *(longlong *)(lVar5 + 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_60[0] = &PTR_FUN_143f740c8;
        if (local_48 != 0) {
          FMemory::Free();
        }
        plVar6 = local_50;
        local_60[0] = &PTR_FUN_143f73d18;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_50 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_50)(local_50);
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
        if (lVar5 != 0) {
          uVar9 = 0;
          local_70 = FUN_140be06a0;
          uStack_68 = 0;
          plVar10 = (longlong *)(lVar4 + 0x80);
          plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = (longlong)&PTR_FUN_143fcfec0;
            FWeakObjectPtr::operator=(plVar6 + 1,param_1);
            *(undefined4 *)(plVar6 + 2) = (undefined4)local_70;
            *(undefined4 *)((longlong)plVar6 + 0x14) = local_70._4_4_;
            *(undefined4 *)(plVar6 + 3) = uStack_68;
            *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_64;
            lVar7 = FDelegateHandle::GenerateNewID();
            plVar6[5] = lVar7;
            *plVar6 = (longlong)&PTR_FUN_143fcff08;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
            puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_88);
            iVar2 = *(int *)(lVar4 + 0x88);
            uVar9 = *puVar8;
            *(int *)(lVar4 + 0x88) = iVar2 + 1;
            if (*(int *)(lVar4 + 0x8c) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
            }
            puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
            *puVar8 = plVar6;
            *(undefined4 *)(puVar8 + 1) = 3;
          }
          *(undefined8 *)(param_1 + 0xb80) = uVar9;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_80 = lVar5;
          local_78 = plVar3;
          FUN_140d2abc0(lVar4,&local_80);
          plVar6 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_78 + 1;
            lVar5 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_78)(local_78);
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
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar3 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        local_res10 = local_res10 + 1;
        puVar11 = puVar11 + 1;
      } while (local_res10 != uVar12);
    }
  }
  return;
}



// FUNCTION 140be0b20 FUN_140be0b20 body=1513 status=ok
// SIG undefined FUN_140be0b20(void)

void FUN_140be0b20(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined **local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  if (param_3 != 0) goto LAB_140be10c0;
  plVar12 = *(longlong **)(param_1 + 0x38);
  plVar13 = (longlong *)0x0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  plVar10 = plVar12 + *(int *)(param_1 + 0x40);
  for (; plVar12 != plVar10; plVar12 = plVar12 + 1) {
    plVar5 = (longlong *)*plVar12;
    lVar9 = FUN_142547b50(plVar5,local_68);
    local_108 = *(longlong *)(lVar9 + 8);
    plStack_100 = *(longlong **)(lVar9 + 0x10);
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
      UNLOCK();
    }
    local_68[0] = &PTR_FUN_143f740c8;
    if (local_50 != 0) {
      FMemory::Free();
    }
    plVar3 = local_58;
    local_68[0] = &PTR_FUN_143f73d18;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_58)(local_58);
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
    cVar8 = FUN_142b547d0(*param_2,&local_108);
    if (cVar8 != '\0') {
      plStack_120 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      local_138 = local_108;
      local_128 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_130,&plStack_120);
      plVar13 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_120 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_120 + 8))(plStack_120,1);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        lVar9 = FUN_141432660();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        plVar13 = plVar5;
        if (bVar6) goto LAB_140be0ce6;
      }
      plVar13 = (longlong *)0x0;
    }
LAB_140be0ce6:
    plVar5 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_100 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_100)(plStack_100);
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
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = UUGMenuManager::GetFadeHUD();
  }
  if ((local_138 != 0) && (lVar9 != 0)) {
    plStack_b0 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
      UNLOCK();
    }
    local_b8 = local_138;
    FUN_140d42fd0(lVar9,&local_b8);
    plVar10 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_b0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plStack_a0 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
      UNLOCK();
    }
    local_a8 = local_138;
    FUN_140d3b970(lVar9,&local_f8,&local_a8);
    plVar10 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_a0 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if ((local_f8 != 0) && (plVar13 != (longlong *)0x0)) {
      local_98 = local_f8;
      plStack_90 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
        UNLOCK();
      }
      FUN_140e5e390(plVar13,&local_98);
      plVar10 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar12 = plStack_90 + 1;
        lVar9 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plStack_80 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
        UNLOCK();
      }
      local_88 = local_138;
      plVar10 = (longlong *)FUN_140bbb8d0(param_1,&local_88);
      if (plVar10 == (longlong *)0x0) {
LAB_140be0f11:
        plVar10 = (longlong *)0x0;
      }
      else {
        lVar9 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_140be0f11;
      }
      plVar12 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_130 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_130 + 8))(plStack_130,1);
          }
        }
      }
      plVar12 = plStack_f0;
      if (plVar10 != (longlong *)0x0) {
        local_118 = local_f8;
        plStack_110 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
        }
        local_e0 = local_f8;
        local_d8 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
        }
        local_d0 = 0;
        local_e8 = &PTR_FUN_143f740c8;
        local_c8 = 0;
        FUN_140e5e440(plVar10,&local_e8);
        FUN_1404bf980(&local_e8);
        plVar5 = plStack_110;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar12 + 1;
          lVar9 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_110)(plStack_110);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_110 + 8))(plStack_110,1);
            }
          }
        }
        lVar9 = *plVar10;
        uVar11 = (**(code **)(*plVar13 + 0x2c0))(plVar13,local_78);
        (**(code **)(lVar9 + 0x730))(plVar10,uVar11);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
    }
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_f0 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar2 = (int *)((longlong)plStack_f0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
        }
      }
    }
  }
  plVar10 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_130 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_130 + 8))(plStack_130,1);
      }
    }
  }
LAB_140be10c0:
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 140be1110 FUN_140be1110 body=112 status=ok
// SIG undefined FUN_140be1110(void)

void FUN_140be1110(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)FName::FName(local_res8,&DAT_144301f64,1);
  if (param_3 == *plVar1) {
    lVar2 = UGameInstance::FindLocalPlayerFromControllerId(param_1,*(undefined4 *)(param_4 + 8));
    if (lVar2 == 0) {
      FUN_140be4580(param_1,param_4);
    }
  }
  if (*(longlong *)(param_1 + 0xf68) == 0) {
    FUN_140c289a0(0);
  }
  return;
}



// FUNCTION 140be1180 FUN_140be1180 body=148 status=ok
// SIG undefined FUN_140be1180(void)

void FUN_140be1180(undefined8 param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  if ((param_2 == 0x11f) && (param_3 == 1)) {
    FUN_1404d0c50(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x58))(local_18,0x11f);
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
  }
  return;
}



// FUNCTION 140be1220 FUN_140be1220 body=32 status=ok
// SIG undefined FUN_140be1220(void)

void FUN_140be1220(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142d6f280();
    FUN_142d6d660(param_1);
  }
  return;
}



// FUNCTION 140be1240 OnTouchMoved body=34 status=ok
// SIG undefined OnTouchMoved(void)

void FGenericApplicationMessageHandler::OnTouchMoved
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0xc0))(param_1,param_2,0x3f800000,param_3,param_4);
  return;
}



// FUNCTION 140be1270 OnTouchStarted body=40 status=ok
// SIG undefined OnTouchStarted(void)

void FGenericApplicationMessageHandler::OnTouchStarted(longlong *param_1)

{
  (**(code **)(*param_1 + 0xb0))();
  return;
}



// FUNCTION 140be12a0 FUN_140be12a0 body=407 status=ok
// SIG undefined FUN_140be12a0(void)

void FUN_140be12a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38 [3];
  longlong *local_20;
  
  plVar3 = (longlong *)(param_1 + 0x10e0);
  if (*plVar3 != 0) {
    if (param_3 == DAT_14686a680) {
      FUN_1404cf2e0(&local_48,0);
      plVar7 = local_48;
      if ((local_48 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*local_48 + 0x10))(local_48,1), cVar6 != '\0')) {
        local_38[2] = *plVar3;
        local_20 = *(longlong **)(param_1 + 0x10e8);
        local_38[0] = 0;
        local_38[1] = 0;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
          plVar7 = local_48;
        }
        (**(code **)(*plVar7 + 0x28))(plVar7,local_38 + 2,0xffffffff,local_38);
        plVar7 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
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
    }
    local_50 = (longlong *)0x0;
    if (plVar3 != &local_58) {
      *plVar3 = 0;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10e8,&local_50);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_50 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140be1440 FUN_140be1440 body=313 status=ok
// SIG undefined FUN_140be1440(void)

void FUN_140be1440(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined **local_78 [2];
  longlong *local_68;
  longlong *local_50;
  undefined **local_40 [2];
  longlong *local_30;
  longlong *local_18;
  
  if (param_2 == 2) {
    uVar5 = FUN_140b9b140(local_78);
    FUN_140ba9020(param_1);
    FUN_140bb5710(param_1,uVar5);
    local_78[0] = &PTR_FUN_1443170a0;
    plVar6 = local_68;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar6 = local_68;
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          plVar6 = local_68;
        }
      }
    }
  }
  else {
    if (param_2 != 0) {
      return;
    }
    uVar5 = FUN_140b9b240(local_40);
    FUN_140ba9020(param_1);
    FUN_140bb5710(param_1,uVar5);
    local_40[0] = &PTR_FUN_1443170a0;
    plVar6 = local_30;
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
        plVar6 = local_30;
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
          plVar6 = local_30;
        }
      }
    }
  }
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
  return;
}



// FUNCTION 140be1580 FUN_140be1580 body=640 status=ok
// SIG undefined FUN_140be1580(void)

undefined8 FUN_140be1580(undefined8 param_1,undefined4 param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar8 = 0;
  if ((*param_3 != DAT_1469ea4f8) || (param_4 != 0)) {
    return 0;
  }
  FUN_1404cf890(&local_58,0);
  bVar9 = local_58 == (longlong *)0x0;
  if (bVar9) {
    plVar7 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)(**(code **)(*local_58 + 0x58))(local_58,local_38,param_2);
    lVar8 = *plVar7;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_60;
  if ((bVar9) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  if ((!bVar9) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  if (lVar8 != 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = lVar8;
    local_40 = plVar4;
    plVar7 = (longlong *)FUN_14244c070(param_1,&local_48);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    if ((plVar7 != (longlong *)0x0) && ((int)plVar7[0x21] < 0)) {
      (**(code **)(*plVar7 + 0x2b8))(plVar7,param_2);
      FUN_140bab890(param_1,param_2,plVar7,0,0,1);
      goto LAB_140be1763;
    }
    cVar6 = FUN_140dc0f20(&DAT_14686a610);
    if (cVar6 == '\0') goto LAB_140be1763;
  }
  FUN_140bed510(param_1,param_2);
LAB_140be1763:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  plVar7 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return 1;
}



// FUNCTION 140be1800 FUN_140be1800 body=541 status=ok
// SIG undefined FUN_140be1800(void)

void FUN_140be1800(longlong param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_60 [8];
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  local_res8 = 0x11f;
  if ((param_2 == 0x11f) && (param_4 == 1)) {
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,local_60);
    cVar5 = FUN_140bc9fb0(param_1,*puVar6);
    if (cVar5 != '\0') {
      local_res10 = 0;
      FUN_1404d0c50(&local_48,0);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x2f8))(local_48,0x11f,param_3);
      }
      FUN_14055e970(param_1 + 0xdd0,param_3);
      uVar7 = FUN_140dbc5d0(param_1 + 0x5f0,&local_res8);
      FUN_140bf7280(param_1,uVar7);
      plVar8 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  if ((param_2 == 0x11f) && (param_4 == 1)) {
    FUN_140bbc950(param_1,&local_58,param_3);
    plVar8 = plStack_50;
    if (local_58 != 0) {
      local_38 = local_58;
      plStack_30 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      FUN_14055e740(param_1 + 0xea0,&local_38);
      plVar1 = plStack_50;
      if (plVar8 == (longlong *)0x0) goto LAB_140be1a03;
      LOCK();
      plVar8 = plVar8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plVar8 = plStack_50;
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        plVar8 = plStack_50;
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar1 = plStack_50;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
LAB_140be1a03:
  FUN_140be70d0(param_1 + 0xd00,param_3);
  return;
}



// FUNCTION 140be1a20 FUN_140be1a20 body=159 status=ok
// SIG undefined FUN_140be1a20(void)

void FUN_140be1a20(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  if (param_2 == 0x11f) {
    FUN_1404d0c50(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x90))(local_18,param_1 + 6);
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_3);
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
  return;
}



// FUNCTION 140be1ac0 FUN_140be1ac0 body=640 status=ok
// SIG undefined FUN_140be1ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140be1ac0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong **pplVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*param_2 == 0) {
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    puVar6 = (undefined8 *)FName::FName(local_48,L"GbxShiftOverlay",1);
    plVar7 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar6);
    if (plVar7 != (longlong *)0x0) {
      plStack_60 = (longlong *)operator_new(0x20);
      if (plStack_60 != (longlong *)0x0) {
        *(undefined4 *)(plStack_60 + 1) = 1;
        *plStack_60 = (longlong)&PTR_FUN_144319530;
        *(undefined4 *)((longlong)plStack_60 + 0xc) = 1;
        plStack_60[2] = (longlong)&PTR_FUN_1443170a8;
        plStack_60[3] = param_1;
      }
      local_68 = plStack_60 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
      local_78 = local_68;
      plStack_70 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      lVar5 = *param_2;
      pplVar8 = (longlong **)(lVar5 + 8);
      if (pplVar8 != &local_78) {
        *pplVar8 = local_68;
        local_78 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar5 + 0x10,&plStack_70);
      }
      plVar2 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_70 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      plVar2 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_60 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_60)(plStack_60);
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
      plVar4 = (longlong *)param_2[1];
      plVar2 = (longlong *)(param_1 + 0x1390);
      lVar5 = *param_2;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_88 = lVar5;
      plStack_80 = plVar4;
      if (&local_88 != plVar2) {
        local_88 = *plVar2;
        plStack_80 = *(longlong **)(param_1 + 0x1398);
        *plVar2 = lVar5;
        *(longlong **)(param_1 + 0x1398) = plVar4;
        local_40 = lVar5;
        plStack_38 = plVar4;
      }
      plVar2 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_80 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
      local_58 = *param_2;
      local_50 = param_2[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar7 + 0x98))(plVar7,&local_58);
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  }
  return;
}



// FUNCTION 140be1d40 FUN_140be1d40 body=1092 status=ok
// SIG undefined FUN_140be1d40(void)

void FUN_140be1d40(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined8 local_30;
  
  lVar4 = FUN_140bba540();
  if (lVar4 == 0) {
    return;
  }
  uVar5 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar5,L"GbxBenchmarkMap");
  if (cVar1 == '\0') {
    return;
  }
  pwVar7 = (wchar_t *)0x0;
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  uVar5 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar5,L"GbxBenchmarkIterations=",&local_38,0);
  if (cVar1 != '\0') {
    pwVar6 = L"";
    if ((int)local_30 != 0) {
      pwVar6 = local_38;
    }
    iVar2 = _wtoi(pwVar6);
    if (iVar2 != 0) {
      if (iVar2 < 1) {
        iVar3 = 1;
      }
      else {
        iVar3 = 999;
        if (iVar2 < 999) {
          iVar3 = iVar2;
        }
      }
      *(int *)(param_1 + 0x13bc) = iVar3;
    }
  }
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  uVar5 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar5,L"GbxBenchmarkSubfolder=",&local_58,0);
  pwVar6 = local_58;
  iVar2 = (int)local_50;
  if (cVar1 == '\0') {
LAB_140be1eb8:
    if ((iVar2 != 0) && (0 < iVar2 + -1)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_14686a8d8) {
        _Init_thread_header(&DAT_14686a8d8);
        if (DAT_14686a8d8 == -1) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          DAT_14686a8d0 =
               (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"GbxCoreStat.BenchmarkSubfolder")
          ;
          _Init_thread_footer(&DAT_14686a8d8);
        }
        iVar2 = (int)local_50;
      }
      if (DAT_14686a8d0 != (longlong *)0x0) {
        pwVar7 = L"";
        if (iVar2 != 0) {
          pwVar7 = local_58;
        }
        (**(code **)(*DAT_14686a8d0 + 0x60))(DAT_14686a8d0,pwVar7,0x8000000);
      }
    }
  }
  else if ((int)local_50 != 0) {
    iVar3 = (int)local_50 + -1;
    if (0 < iVar3) {
      local_48 = (wchar_t *)0x0;
      if (0x80 < iVar3) {
        iVar3 = 0x80;
      }
      local_3c = 0;
      iVar2 = iVar3 + 1;
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      local_40 = iVar2;
      if ((0 < iVar2) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar2 = local_40,
         pwVar7 = local_48, 0 < local_40)) {
        wcsncpy(local_48,pwVar6,(longlong)iVar3);
        pwVar7[iVar3] = L'\0';
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free(local_58);
      }
      local_50 = CONCAT44(local_3c,iVar2);
      local_58 = pwVar7;
    }
    goto LAB_140be1eb8;
  }
  uVar5 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar5,L"GbxBenchmarkUncapped");
  if (cVar1 != '\0') {
    FUN_14248f680(lVar4,0);
    FUN_140ccf440(lVar4,4);
  }
  uVar5 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_ResScale50");
  if (cVar1 == '\0') {
    uVar5 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_ResScale75");
    if (cVar1 == '\0') {
      uVar5 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_ResScale100");
      if (cVar1 == '\0') {
        uVar5 = FCommandLine::Get();
        cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_ResScale150");
        if (cVar1 == '\0') {
          uVar5 = FCommandLine::Get();
          cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_ResScale175");
          if (cVar1 == '\0') {
            uVar5 = FCommandLine::Get();
            cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_ResScale200");
            if (cVar1 == '\0') goto LAB_140be200b;
            uVar5 = 6;
          }
          else {
            uVar5 = 5;
          }
        }
        else {
          uVar5 = 4;
        }
      }
      else {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  FUN_140ccfe10(lVar4,uVar5);
LAB_140be200b:
  *(undefined1 *)(lVar4 + 0x208) = 6;
  uVar5 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_Badass");
  if (cVar1 == '\0') {
    uVar5 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_Ultra");
    if (cVar1 == '\0') {
      uVar5 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_High");
      if (cVar1 == '\0') {
        uVar5 = FCommandLine::Get();
        cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_Medium");
        if (cVar1 == '\0') {
          uVar5 = FCommandLine::Get();
          cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_Low");
          if (cVar1 == '\0') {
            uVar5 = FCommandLine::Get();
            cVar1 = FParse::Param(uVar5,L"GbxBenchmarkCfg_VeryLow");
            if (cVar1 != '\0') {
              *(undefined1 *)(lVar4 + 0x208) = 0;
            }
          }
          else {
            *(undefined1 *)(lVar4 + 0x208) = 1;
          }
        }
        else {
          *(undefined1 *)(lVar4 + 0x208) = 2;
        }
      }
      else {
        *(undefined1 *)(lVar4 + 0x208) = 3;
      }
    }
    else {
      *(undefined1 *)(lVar4 + 0x208) = 4;
    }
  }
  else {
    *(undefined1 *)(lVar4 + 0x208) = 5;
  }
  if (*(char *)(lVar4 + 0x208) != '\x06') {
    FUN_140ccf580(lVar4,*(char *)(lVar4 + 0x208),0);
  }
  *(undefined1 *)(param_1 + 0x13a2) = 1;
  *(undefined4 *)(param_1 + 0x13b8) = 1000;
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140be2190 FUN_140be2190 body=360 status=ok
// SIG undefined FUN_140be2190(void)

longlong FUN_140be2190(longlong param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  wchar_t *_Str;
  undefined2 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_28;
  undefined8 local_20;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_141594550(param_2,&local_28,&DAT_1442eb5ac,1);
  iVar4 = 0;
  if (0 < (int)local_20) {
    do {
      cVar1 = FString::IsNumeric(local_28 + (longlong)iVar4 * 2);
      if (cVar1 != '\0') {
        if ((int)(local_28 + (longlong)iVar4 * 2)[1] == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)local_28[(longlong)iVar4 * 2];
        }
        iVar4 = _wtoi(_Str);
        if (iVar4 < 2) {
          iVar4 = 1;
        }
        *param_3 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_20);
  }
  plVar5 = *(longlong **)(param_1 + 0xab8);
  plVar6 = plVar5 + *(int *)(param_1 + 0xac0);
  for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
    lVar7 = *plVar5;
    puVar2 = (undefined8 *)FText::ToString(lVar7 + 0x90);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar2;
    }
    iVar4 = FUN_141592950(param_2,puVar3,1,0,0xffffffff);
    if (iVar4 != -1) goto LAB_140be22a7;
  }
  lVar7 = 0;
LAB_140be22a7:
  plVar6 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return lVar7;
}



// FUNCTION 140be2300 FUN_140be2300 body=17 status=ok
// SIG undefined FUN_140be2300(void)

void FUN_140be2300(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uStackX_8;
  undefined1 auStack_b8 [4];
  undefined8 uStack_b4;
  undefined1 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte bStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  lVar2 = *(longlong *)(param_1 + 0x490);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x3c8) == '\x01') {
      if ((*(byte *)(lVar2 + 0x3d0) & 1) == 0) {
        uStack_70 = *(undefined8 *)(lVar2 + 0x774);
        plVar3 = *(longlong **)(lVar2 + 0x430);
        uStack_68 = *(undefined8 *)(lVar2 + 0x760);
        *(undefined1 *)(lVar2 + 0x3c8) = 6;
        (**(code **)(*plVar3 + 0x18))(plVar3,&uStack_70);
        if ((char)plVar3[3] != '\0') {
          *(undefined1 *)(plVar3 + 3) = 0;
        }
        *(byte *)(lVar2 + 0x3d0) = *(byte *)(lVar2 + 0x3d0) | 1;
        ConvertFrameTime(&uStackX_8,*(undefined8 *)(lVar2 + 0x774),*(undefined8 *)(lVar2 + 0x760),
                         *(undefined8 *)(lVar2 + 0x768));
        uStack_a0 = *(undefined8 *)(lVar2 + 0x768);
        bStack_78 = bStack_78 & 0xc0;
        uStack_28 = 0;
        uStack_2c = 0;
        uStack_90 = 0x3f800000;
        uStack_b4 = uStackX_8;
        uStack_a8 = uStackX_8;
        uStack_98 = 0;
        uStack_84 = 0;
        uStack_7c = 0;
        auStack_b8[0] = 1;
        uStack_ac = 1;
        uStack_94 = 0x80000000;
        uStack_88 = 0;
        uStack_80 = 0x80000000;
        FUN_141f4a590(lVar2 + 0x448,auStack_b8,lVar2 + 0x28,DAT_146ac9ac0);
        *(byte *)(lVar2 + 0x3d0) = *(byte *)(lVar2 + 0x3d0) & 0xfe;
        FUN_141f421d0(lVar2);
        FWeakObjectPtr::Get(lVar2 + 0x448);
        if (0 < *(int *)(lVar2 + 0x3b0)) {
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (lVar2 + 0x3a8,0);
        }
      }
      else {
        iVar1 = *(int *)(lVar2 + 0x3f8);
        iVar4 = iVar1 + 1;
        *(int *)(lVar2 + 0x3f8) = iVar4;
        if (*(int *)(lVar2 + 0x3fc) < iVar4) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x3f0);
        }
        puVar5 = (undefined1 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0x3f0));
        *puVar5 = 1;
        *(undefined8 *)(puVar5 + 8) = 0;
      }
    }
    return;
  }
  return;
}



// FUNCTION 140be2320 FUN_140be2320 body=435 status=ok
// SIG undefined FUN_140be2320(void)

void FUN_140be2320(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_88 = *(undefined4 *)((longlong)param_1 + 0x142c);
  local_84 = (undefined4)param_1[0x286];
  local_80 = *(undefined4 *)((longlong)param_1 + 0x1434);
  FUN_1405eb5e0(&local_88);
  lVar3 = FUN_140bb5fe0(param_1);
  if ((((((param_2 != 0) && (lVar3 != 0)) && (-1 < param_3)) &&
       ((param_3 < *(int *)(lVar3 + 0x48) &&
        (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + (longlong)param_3 * 8), lVar1 != 0))))
      && ((0 < *(int *)(lVar1 + 0x78) &&
          ((lVar2 = **(longlong **)(lVar1 + 0x70), lVar2 != 0 && (0 < *(int *)(lVar2 + 0x70)))))))
     && ((lVar2 = **(longlong **)(lVar2 + 0x68), lVar2 != 0 &&
         (lVar4 = FUN_140bb7fb0(param_1), lVar4 != 0)))) {
    local_50 = 0xffffffff;
    local_38 = 0;
    local_40 = 0;
    local_30 = 0;
    local_4c = 0;
    uVar5 = FSoftObjectPath::FSoftObjectPath(local_68,lVar3);
    FSoftObjectPath::operator=(&local_40,uVar5);
    FWeakObjectPtr::operator=(&local_50,lVar3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_4c = CONCAT44(DAT_1464b56f4,(undefined4)local_4c);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_1405e3130(uVar5,&local_50,0);
    *(undefined1 *)(lVar4 + 0x47) = 1;
    *(longlong *)(lVar2 + 0xb0) = lVar4;
    puVar6 = (undefined4 *)FUN_140d087b0(param_2,local_78,lVar1);
    *(undefined4 *)((longlong)param_1 + 0x142c) = *puVar6;
    *(undefined4 *)(param_1 + 0x286) = puVar6[1];
    *(undefined4 *)((longlong)param_1 + 0x1434) = puVar6[2];
  }
  return;
}



// FUNCTION 140be24e0 FUN_140be24e0 body=1178 status=ok
// SIG undefined FUN_140be24e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140be24e0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(byte *)(param_1 + 0x25) < 3) {
    return;
  }
  if (param_1[0x93] != 0) {
    return;
  }
  lVar3 = AActor::GetWorldSettings();
  if ((lVar3 == 0) || (lVar3 = AActor::GetWorldSettings(param_1), *(longlong *)(lVar3 + 0x600) == 0)
     ) {
    lVar3 = param_1[0x90];
    if (lVar3 == 0) {
      return;
    }
    plVar4 = *(longlong **)(lVar3 + 0x30);
    plVar7 = plVar4 + (longlong)*(int *)(lVar3 + 0x38) * 0xd;
    if (plVar4 == plVar7) {
      return;
    }
    while ((*plVar4 != param_2 || (plVar4[1] == 0))) {
      plVar4 = plVar4 + 0xd;
      if (plVar4 == plVar7) {
        return;
      }
    }
    param_1[0x93] = param_2;
    *(undefined1 *)((longlong)param_1 + 0x4a4) = 1;
    local_d8 = (code *)*plVar4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x8c,&local_d8);
    if (*(float *)((longlong)plVar4 + 0x24) <= 0.0) {
      if (plVar4[2] == 0) {
        *(undefined1 *)((longlong)param_1 + 0x4c9) = 1;
        FUN_140bd5e40();
        return;
      }
      FUN_140be3030(param_1);
      return;
    }
    FUN_142dd6bd0(param_1,plVar4[3]);
    if ((plVar4[5] != 0) && (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar5,&local_d8);
      while( true ) {
        if ((iStack_d0 < 0) || (*(int *)((longlong)local_d8 + 8) <= iStack_d0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) break;
        lVar3 = FWeakObjectPtr::Get();
        if (lVar3 != 0) {
          lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (*(longlong *)(lVar3 + 0x978) != 0)) {
            local_e8 = 0;
            local_f0 = 1;
            local_f8 = 0;
            local_100 = 0;
            local_108 = DAT_14686a480;
            local_110 = 1;
            local_118 = 1;
            local_120 = CONCAT31(local_120._1_3_,4);
            local_128 = 0x42c80000;
            FUN_142d9e0d0(*(longlong *)(lVar3 + 0x978),plVar4[5],0,0x4110000041800000);
          }
        }
        iStack_d0 = iStack_d0 + 1;
      }
    }
    if (plVar4[2] == 0) {
      *(undefined1 *)((longlong)param_1 + 0x4c9) = 1;
    }
    else {
      FUN_140be3030(param_1);
    }
    uVar1 = *(undefined4 *)((longlong)plVar4 + 0x24);
    local_d8 = FUN_140bd5e40;
    iStack_d0 = 0;
    uVar5 = AActor::GetWorldTimerManager(param_1);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_d8._4_4_;
      *(int *)(plVar4 + 3) = iStack_d0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_cc;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar3;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_120 = 0xbf800000;
    local_128 = local_128 & 0xffffff00;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar5,param_1 + 0x95,&local_c8,uVar1);
  }
  else {
    local_d8 = FUN_140be24e0;
    iStack_d0 = 0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_1441726d8;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_d8._4_4_;
      *(int *)(plVar4 + 3) = iStack_d0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_cc;
      plVar4[4] = param_2;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar3;
      *plVar4 = (longlong)&PTR_FUN_144172720;
    }
    uVar5 = AActor::GetWorldTimerManager(param_1);
    local_c8 = 0;
    local_c0 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_b0 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    FUN_142880af0(uVar5,&local_c8);
  }
  if (local_68 != 0) {
    plVar7 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar7 = local_78;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar3 = FMemory::Realloc(plVar4,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140be2980 FUN_140be2980 body=814 status=ok
// SIG undefined FUN_140be2980(void)

void FUN_140be2980(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if (lVar6 == 0) {
    return;
  }
  if ((*(uint *)(lVar6 + 0x830) >> 2 & 1) == 0) {
    return;
  }
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar6 = UWorld::GetWorldSettings(uVar7,0,1);
  lVar9 = 0;
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = UWorld::GetWorldSettings(uVar7,0,1);
    lVar6 = *(longlong *)(lVar6 + 0x658);
    if (lVar6 != 0) {
      lVar8 = UTextureRenderTargetCube::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_140be2a48;
    }
  }
  lVar6 = lVar9;
LAB_140be2a48:
  if (param_1[0x3f] != 0) {
    lVar9 = UUGMenuManager::GetFadeHUD();
  }
  if ((lVar6 != 0) && (lVar9 != 0)) {
    local_98 = *param_2;
    local_90 = param_2[1];
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    cVar4 = FUN_140bca7d0(param_1,&local_98);
    local_80 = param_2[1];
    local_88 = *param_2;
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    lVar6 = FUN_140cb9800(lVar6,&local_88);
    if ((lVar6 != 0) &&
       (((cVar4 == '\0' || (cVar5 = FUN_140e464f0(lVar6), cVar5 != '\0')) &&
        (FUN_140e584b0(lVar6,0), cVar4 != '\0')))) {
      local_70 = *param_2;
      local_68 = param_2[1];
      local_50 = &PTR_FUN_143f740c8;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_48 = 0;
      uStack_40 = 0;
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      local_78 = &PTR_FUN_143f740c8;
      local_60 = 0;
      local_58 = 0;
      FUN_1404c0940(&local_50,&local_78);
      FUN_1404bf980(&local_78);
      local_28 = 1;
      lVar6 = FUN_140bb7870(param_1);
      if (lVar6 == 0) {
        lVar6 = FUN_140bb6170(param_1);
        if (((lVar6 != 0) && (*(longlong *)(lVar6 + 200) != 0)) &&
           (lVar6 = FUN_1425bd330(*(longlong *)(lVar6 + 200),6), lVar6 != 0)) {
          lVar9 = FUN_1404e6fc0();
          iVar2 = *(int *)(lVar9 + 0x90);
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar2 * 8)
              != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_140b97310(lVar6,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0x1f,&local_50);
          }
        }
      }
      else if ((*(longlong **)(lVar6 + 0x48) != (longlong *)0x0) &&
              (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x48) + 0x390))(), cVar4 != '\0')) {
        plVar10 = *(longlong **)(*(longlong *)(lVar6 + 0x48) + 0x98);
        plVar1 = plVar10 + *(int *)(*(longlong *)(lVar6 + 0x48) + 0xa0);
        for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
          if ((*plVar10 != 0) && (lVar6 = FUN_1425bd330(*plVar10,6), lVar6 != 0)) {
            lVar9 = FUN_1404e6fc0();
            iVar2 = *(int *)(lVar9 + 0x90);
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
                lVar9 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              FUN_140b97310(lVar6,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0x1f,&local_50);
            }
          }
        }
      }
      FUN_1404bf980(&local_50);
    }
  }
  return;
}



// FUNCTION 140be2cb0 FUN_140be2cb0 body=217 status=ok
// SIG undefined FUN_140be2cb0(void)

ulonglong FUN_140be2cb0(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint7 uVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar2 = (longlong *)FUN_140bb89c0();
  if (plVar2 != (longlong *)0x0) {
    local_18 = 0;
    local_10 = 0;
    uVar3 = (**(code **)(*plVar2 + 0x4e8))(plVar2,*param_2,&local_18);
    return uVar3;
  }
  lVar4 = FUN_142d61b30(param_1);
  uVar3 = 0;
  if (lVar4 != 0) {
    lVar4 = UWidgetComponent::GetRenderTarget(lVar4);
    uVar3 = 0;
    if (lVar4 != 0) {
      lVar5 = FUN_142f27b90();
      uVar6 = (uint7)((ulonglong)(lVar5 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        uVar3 = (ulonglong)uVar6 << 8;
        bVar1 = false;
      }
      else {
        uVar3 = CONCAT71(uVar6,1);
        bVar1 = true;
      }
      if ((bVar1) && (plVar2 = *(longlong **)(lVar4 + 0x5e8), plVar2 != (longlong *)0x0)) {
        local_18 = 0;
        local_10 = 0;
        uVar3 = (**(code **)(*plVar2 + 0x4e8))(plVar2,*param_2,&local_18);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140be2d90 FUN_140be2d90 body=395 status=ok
// SIG undefined FUN_140be2d90(void)

void FUN_140be2d90(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x980)) {
    lVar12 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar12 + *(longlong *)(param_1 + 0x978));
      cVar8 = (**(code **)*puVar3)(puVar3,*param_2);
      if (cVar8 != '\0') {
        if (*(char *)(param_1 + 0x988) != '\0') {
          if (((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) &&
             ((DAT_146ac3ac5 != '\0' ||
              (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0' && (DAT_1468c21ae != '\0')) &&
               (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))))) {
            plVar10 = (longlong *)FUN_140badac0(local_48,0,0xff);
            uStack_50 = (undefined4)param_1;
            uStack_4c = (undefined4)((ulonglong)param_1 >> 0x20);
            lVar4 = *plVar10;
            *(int *)(lVar4 + 0x10) = iVar11;
            *(int *)(lVar4 + 0x14) = param_3;
            *(undefined4 *)(lVar4 + 0x18) = uStack_50;
            *(undefined4 *)(lVar4 + 0x1c) = uStack_4c;
            lVar4 = *plVar10;
            lVar7 = plVar10[2];
            lVar5 = plVar10[1];
            lVar6 = *(longlong *)(lVar4 + 0x28);
            piVar1 = (int *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            FUN_1409421c0(lVar4,lVar5,(int)lVar7,1);
            if (lVar6 != 0) {
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                FGraphEvent::Recycle(lVar6);
              }
            }
            goto LAB_140be2ee9;
          }
          FBaseGraphTask::GetSmallTaskAllocator();
        }
        FUN_1411f3560(param_1 + 0x7a0,iVar11,param_3 == 1);
      }
LAB_140be2ee9:
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while (iVar11 < *(int *)(param_1 + 0x980));
  }
  return;
}



// FUNCTION 140be2f20 FUN_140be2f20 body=261 status=ok
// SIG undefined FUN_140be2f20(void)

void FUN_140be2f20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1417931d0();
  if (*(longlong *)(param_1 + 0x10b0) != 0) {
    lVar2 = UForceFeedbackAttenuation::StaticClass();
    lVar1 = *(longlong *)(param_1 + 0x10b0);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar2 = UForceFeedbackAttenuation::StaticClass();
          for (lVar1 = *(longlong *)(param_1 + 0x10b0);
              (lVar4 = 0, lVar1 != 0 && (lVar4 = *(longlong *)(param_1 + 0x10b0), lVar1 != lVar2));
              lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
        }
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar3 = FUN_1417985e0(lVar4,param_1,0,0,0,0,0,0,0);
        *(undefined8 *)(param_1 + 0x10b8) = uVar3;
        AK::MemoryMgr::StartProfileThreadUsage((long)uVar3);
      }
    }
  }
  return;
}



// FUNCTION 140be3030 FUN_140be3030 body=1258 status=ok
// SIG undefined FUN_140be3030(void)

void FUN_140be3030(longlong param_1,longlong param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined8 local_res18;
  undefined8 local_res20;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong local_a8 [3];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  code *local_68;
  ulonglong uStack_60;
  code *local_58;
  ulonglong uStack_50;
  undefined1 *local_48;
  ulonglong uStack_40;
  code *local_38;
  ulonglong uStack_30;
  
  if (*(longlong *)(param_1 + 0x4d0) == 0) {
    local_b0 = 1;
    local_b8 = (undefined8 *)0x0;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_b8,0);
    *local_b8 = DAT_14686a488;
    FString::FString(local_b8 + 1,&DAT_14686a490);
    uVar3 = local_b0;
    lVar11 = (longlong)(int)local_b0;
    iVar4 = (int)local_b0 + 1;
    local_b0 = CONCAT44(local_b0._4_4_,iVar4);
    if (local_b0._4_4_ < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_b8,uVar3 & 0xffffffff);
    }
    local_b8[lVar11 * 3] = DAT_14686a4a0;
    FString::FString(local_b8 + lVar11 * 3 + 1,&DAT_14686a4a8);
    local_a8[0] = 0;
    local_a8[1] = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
    FGenericPlatformString::Memcpy(local_a8[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
    uStack_c0._0_4_ = 0;
    local_c8 = FUN_140bd6900;
    local_88 = 0;
    local_80 = 0;
    puVar5 = (undefined8 *)operator_new(0x30,&local_88);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_1441726d8;
      FWeakObjectPtr::operator=(puVar5 + 1,param_1);
      *(undefined4 *)(puVar5 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar5 + 0x14) = local_c8._4_4_;
      *(undefined4 *)(puVar5 + 3) = (undefined4)uStack_c0;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_c0._4_4_;
      puVar5[4] = param_2;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[5] = uVar6;
      *puVar5 = &PTR_FUN_144172720;
    }
    lVar11 = FUN_1422ca050();
    puVar5 = (undefined8 *)
             FUN_142840b00(lVar11 + 0x178,local_78,&local_b8,&local_88,0,
                           in_stack_ffffffffffffff10 & 0xffffffffffffff00,0,local_a8);
    if ((undefined8 *)(param_1 + 0x4b8) != puVar5) {
      *(undefined8 *)(param_1 + 0x4b8) = *puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4c0,puVar5 + 1);
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_70 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if ((int)local_b0 != 0) {
      plVar9 = local_b8 + 1;
      iVar4 = (int)local_b0;
      do {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_b8 != (undefined8 *)0x0) {
      FMemory::Free();
      return;
    }
  }
  else if (param_2 != 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    pwVar10 = (wchar_t *)0x0;
    uVar6 = UUGCampaignMap::GetPrivateStaticClass();
    lVar11 = FUN_1417985e0(uVar6,param_1,0,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x4e0) = lVar11;
    if (lVar11 != 0) {
      UMediaTexture::SetMediaPlayer(*(undefined8 *)(param_1 + 0x4d0),lVar11);
      lVar11 = *(longlong *)(param_1 + 0x4d8);
      if (lVar11 != 0) {
        uStack_c0 = 0;
        local_c8 = (code *)lVar11;
        uVar6 = FUN_142aaeb30();
        uStack_c0 = UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar6);
        FUN_142aac290(*(undefined8 *)(param_1 + 0x4e0),&local_c8);
      }
      if (*(char *)(param_1 + 0x128) == '\x03') {
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
        local_c8 = FUN_140bd6e40;
        local_68 = FUN_140bd6e40;
        uStack_60 = uStack_c0;
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaOpened",L"::");
        pwVar8 = pwVar10;
        while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar8 = pwVar2;
        }
        FName::FName(&local_res18,pwVar8 + 2,1);
        FUN_1407260e0(*(longlong *)(param_1 + 0x4e0) + 0x48,param_1,&local_68,local_res18);
      }
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      local_c8 = URefinementWidget::HandleOnLoadoutChangedChanged;
      local_58 = URefinementWidget::HandleOnLoadoutChangedChanged;
      uStack_50 = uStack_c0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaOpenFailed",L"::");
      pwVar8 = pwVar10;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res20,pwVar8 + 2,1);
      FUN_1407260e0(*(longlong *)(param_1 + 0x4e0) + 0x58,param_1,&local_58,local_res20);
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      local_c8 = (code *)&LAB_140bd6e00;
      local_48 = &LAB_140bd6e00;
      uStack_40 = uStack_c0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieMediaClosed",L"::");
      pwVar8 = pwVar10;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(local_a8 + 2,pwVar8 + 2,1);
      FUN_1407260e0(*(longlong *)(param_1 + 0x4e0) + 0x38,param_1,&local_48,local_a8[2]);
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      local_c8 = FUN_140bd6c60;
      local_38 = FUN_140bd6c60;
      uStack_30 = uStack_c0;
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMovieEndReached",L"::");
      while (pwVar7 = pwVar8, pwVar7 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar10 = pwVar7;
      }
      FName::FName(&local_90,pwVar10 + 2,1);
      FUN_1407260e0(*(longlong *)(param_1 + 0x4e0) + 0x28,param_1,&local_38,local_90);
      *(bool *)(*(longlong *)(param_1 + 0x4e0) + 0xc1) = *(byte *)(param_1 + 0x128) < 3;
      FUN_142aab3c0(*(undefined8 *)(param_1 + 0x4e0),param_2);
    }
  }
  return;
}



// FUNCTION 140be3520 FUN_140be3520 body=305 status=ok
// SIG undefined FUN_140be3520(void)

void FUN_140be3520(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar4 == 0) || ((*(uint *)(lVar4 + 0x830) >> 2 & 1) == 0)) &&
      (lVar4 = FUN_140b825a0(param_1), lVar4 != 0)) &&
     ((cVar3 = FUN_140cb68f0(lVar4), cVar3 == '\x01' && (0 < *(int *)(lVar4 + 0x9a8))))) {
    plVar8 = (longlong *)param_1[7];
    plVar1 = plVar8 + (int)param_1[8];
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar6 = UPlayer::GetPlayerController(lVar6,uVar5);
        if (lVar6 != 0) {
          lVar7 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_140be36c0(param_1,lVar6,lVar4 + 0x9a0);
          }
        }
      }
    }
    *(undefined4 *)(lVar4 + 0x9a8) = 0;
    if (*(int *)(lVar4 + 0x9ac) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar4 + 0x9a0,0);
    }
  }
  return;
}



// FUNCTION 140be3660 FUN_140be3660 body=85 status=ok
// SIG undefined FUN_140be3660(void)

void FUN_140be3660(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (((param_2 != 0) && (lVar2 = FUN_140b825a0(), lVar2 != 0)) &&
     (cVar1 = FUN_140cb68f0(lVar2), cVar1 == '\x01')) {
    FUN_140be36c0(param_1,param_2,lVar2 + 0x9a0);
  }
  return;
}



// FUNCTION 140be36c0 FUN_140be36c0 body=665 status=ok
// SIG undefined FUN_140be36c0(void)

void FUN_140be36c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  if (((((param_2 != 0) && ((int)param_3[1] != 0)) && (lVar7 = FUN_140b825a0(), lVar7 != 0)) &&
      ((cVar5 = FUN_140cb68f0(lVar7), cVar5 == '\x01' &&
       (lVar8 = FUN_140cff230(param_2), lVar8 != 0)))) && (*(char *)(lVar7 + 0x6c4) == '\0')) {
    plVar11 = (longlong *)*param_3;
    plVar1 = plVar11 + (int)param_3[1];
    for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
      plVar3 = (longlong *)*plVar11;
      if (((plVar3 != (longlong *)0x0) &&
          (cVar5 = (**(code **)(*plVar3 + 0x878))(plVar3), cVar5 != '\0')) &&
         ((lVar7 = FUN_140b2aac0(plVar3), lVar7 == param_2 &&
          (lVar7 = FUN_140b27500(plVar3), lVar7 != 0)))) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar10 = *(longlong *)(DAT_146b33f38 + 0x58);
        if (lVar10 != 0) {
          plVar9 = *(longlong **)(lVar10 + 0x368);
          plVar2 = plVar9 + *(int *)(lVar10 + 0x370);
          for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
            if ((*plVar9 != 0) && (lVar7 == *plVar9)) {
              lVar7 = ATrap::GetActivationShapeComponent(plVar3);
              if (lVar7 != 0) {
                lVar10 = FUN_14142bde0();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
                  FUN_142ff3000(lVar7,local_88);
                  iVar6 = *(int *)(lVar8 + 0x398);
                  *(int *)(lVar8 + 0x398) = iVar6 + 1;
                  if (*(int *)(lVar8 + 0x39c) < iVar6 + 1) {
                    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                              (lVar8 + 0x390,iVar6);
                  }
                  FUN_142fde550((longlong)iVar6 * 0x80 + *(longlong *)(lVar8 + 0x390),local_88);
                  FUN_14172cc40(lVar8,1);
                  if (local_38 != 0) {
                    FMemory::Free();
                  }
                  if (local_48 != 0) {
                    FMemory::Free();
                  }
                  if (local_58 != 0) {
                    FMemory::Free();
                  }
                  if (local_68 != 0) {
                    FMemory::Free();
                  }
                }
              }
              iVar6 = FUN_140cfe750(param_2);
              if (iVar6 < *(int *)(lVar8 + 0x398)) {
                FUN_140be7de0(param_1,param_2,lVar8);
              }
              break;
            }
          }
        }
      }
    }
    cVar5 = FUN_140472310(lVar8);
    if (cVar5 != '\0') {
      FUN_140d1b4d0(param_2);
    }
  }
  return;
}



// FUNCTION 140be3960 FUN_140be3960 body=297 status=ok
// SIG undefined FUN_140be3960(void)

void FUN_140be3960(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *local_18;
  undefined8 local_10;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar4 == 0) || ((*(uint *)(lVar4 + 0x830) >> 2 & 1) == 0)) &&
      (lVar4 = FUN_140b825a0(param_1), lVar4 != 0)) &&
     (cVar3 = FUN_140cb68f0(lVar4), cVar3 == '\x01')) {
    local_18 = (undefined8 *)0x0;
    local_10 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_18,0);
    *local_18 = param_2;
    plVar7 = (longlong *)param_1[7];
    plVar1 = plVar7 + (int)param_1[8];
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar4 = UPlayer::GetPlayerController(lVar4,uVar5);
        if (lVar4 != 0) {
          lVar6 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_140be36c0(param_1,lVar4,&local_18);
          }
        }
      }
    }
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140be3a90 FUN_140be3a90 body=521 status=ok
// SIG undefined FUN_140be3a90(void)

void FUN_140be3a90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 local_res8 [2];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  code *local_28;
  undefined4 uStack_20;
  
  bVar10 = false;
  local_res8[0] = 0;
  if ((*(longlong *)(param_1 + 0x4e0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x4e0) + 0x10) != '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0x440) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x318) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x300) != 1) {
    return;
  }
  FUN_140beaf50(param_1,3);
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = (longlong *)UUGMenuManager::GetFadeHUD();
    bVar10 = false;
    if (plVar8 != (longlong *)0x0) {
      local_50 = *(longlong **)(param_1 + 0x230);
      local_58 = *(undefined8 *)(param_1 + 0x228);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      bVar10 = true;
      cVar7 = FUN_142d868e0(plVar8,&local_58);
      if (cVar7 == '\0') {
        bVar5 = true;
        goto LAB_140be3b5b;
      }
    }
  }
  bVar5 = false;
LAB_140be3b5b:
  plVar3 = local_50;
  if ((bVar10) && (local_50 != (longlong *)0x0)) {
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
  if (bVar5) {
    local_28 = FUN_140bd5900;
    uStack_20 = 0;
    puVar9 = (undefined8 *)FUN_140b94130(plVar8 + 7,local_res8,param_1,&local_28);
    *(undefined8 *)(param_1 + 0xfb8) = *puVar9;
    local_48 = *(undefined8 *)(param_1 + 0x228);
    local_40 = *(longlong **)(param_1 + 0x230);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar8 + 0x48))(plVar8,&local_48);
    plVar8 = local_40;
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x228);
    local_30 = *(longlong **)(param_1 + 0x230);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_140bd5900(param_1,&local_38,1);
    plVar8 = local_30;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 140be3ca0 FUN_140be3ca0 body=1597 status=ok
// SIG undefined FUN_140be3ca0(void)

void FUN_140be3ca0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  int iVar15;
  undefined2 *puVar16;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_res18 [2];
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong local_48 [2];
  
  plVar14 = param_1 + 0x263;
  local_b8 = *plVar14;
  if (local_b8 != 0) {
    plStack_b0 = (longlong *)param_1[0x264];
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
      UNLOCK();
    }
    local_d0 = (longlong *)0x0;
    if (plVar14 != &local_d8) {
      *plVar14 = 0;
      local_d8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x264,&local_d0);
      plVar8 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
    }
    lVar7 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_98,&local_b8);
    if (local_98 != 0) {
      plVar8 = (longlong *)FUN_142b49060(local_98,local_88);
      local_c0 = *(longlong **)(*plVar8 + 0x10);
      lVar7 = *(longlong *)(*plVar8 + 8);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
        UNLOCK();
      }
      local_c8 = lVar7;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_80 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      if (lVar7 != 0) {
        local_108 = 0;
        local_100 = 0;
        uVar9 = UListView::OnItemSelectionChanged(local_c8);
        FUN_142d80a60(uVar9,&local_108);
        cVar6 = FUN_142d7d340(&local_108,local_res8);
        if (cVar6 != '\0') {
          cVar6 = FUN_140bca8a0(param_1);
          if (cVar6 == '\0') {
            local_f8 = local_b8;
            plStack_f0 = plStack_b0;
            if (plStack_b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
              UNLOCK();
            }
            if (plVar14 != &local_f8) {
              *plVar14 = local_b8;
              local_f8 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x264,&plStack_f0);
            }
            plVar14 = plStack_f0;
            if (plStack_f0 != (longlong *)0x0) {
              LOCK();
              plVar8 = plStack_f0 + 1;
              lVar7 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_f0)(plStack_f0);
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                iVar15 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar15 == 1) {
                  (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
                }
              }
            }
            if (local_res8[0] == 2) {
              puVar13 = &DAT_143f3eda8;
              if (*(int *)(local_108 + 0x10 + (longlong)((int)local_100 + -1) * 0x28) == 0) {
                puVar16 = &DAT_143f3eda8;
              }
              else {
                puVar16 = *(undefined2 **)(local_108 + 8 + (longlong)((int)local_100 + -1) * 0x28);
              }
              FString::PrintfImpl(&local_a8,L"%d%s",local_100 & 0xffffffff,puVar16);
              puVar16 = &DAT_143f3eda8;
              if (local_a0 != 0) {
                puVar16 = local_a8;
              }
              if ((int)param_1[0x266] != 0) {
                puVar13 = (undefined2 *)param_1[0x265];
              }
              iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar16);
              if (((iVar15 != 0) && (cVar6 = FUN_140bc9f60(param_1), cVar6 == '\0')) &&
                 (cVar6 = FUN_140bc2c90(param_1), cVar6 == '\0')) {
                FString::operator=(param_1 + 0x265,&local_a8);
                lVar7 = UGameInstance::GetFirstGamePlayer(param_1);
                if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0)) {
                  lVar10 = FUN_14145f370();
                  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    FWeakObjectPtr::operator=(local_e8,0);
                    local_e0 = 0;
                    pwVar11 = _guard_xfg_dispatch_icall_nop
                                        (L"&ThisClass::OnConfirmApplyMicropatches",L"::");
                    pwVar5 = (wchar_t *)0x0;
                    while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
                      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
                      pwVar5 = pwVar4;
                    }
                    FName::FName(local_res18,pwVar5 + 2,1);
                    FWeakObjectPtr::operator=(local_e8,param_1);
                    local_e0 = local_res18[0];
                    local_res10 = 0;
                    if ((local_res18[0] != 0) &&
                       (lVar10 = FWeakObjectPtr::Get(local_e8), lVar10 != 0)) {
                      UObject::FindFunction(lVar10,local_e0);
                    }
                    uVar9 = FInternationalization::
                            ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                      (local_60,
                                       L"There are new game updates available.  Would you like to return to the main menu to apply them?"
                                       ,L"OakGameInstance",L"MicropatchesAvailableMessage");
                    uVar12 = FInternationalization::
                             ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                       (local_78,L"Game Updates Available",L"OakGameInstance",
                                        L"MicropatchesAvailableHeader");
                    FUN_1410f47a0(lVar7,uVar12,uVar9,local_e8,0,0,0,1,0);
                    if (local_70 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = local_70 + 1;
                      lVar7 = *plVar14;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)lVar7 == 1) {
                        (**(code **)*local_70)(local_70);
                        LOCK();
                        piVar2 = (int *)((longlong)local_70 + 0xc);
                        iVar15 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar15 == 1) {
                          (**(code **)(*local_70 + 8))(local_70,1);
                        }
                      }
                    }
                    if (local_58 != (longlong *)0x0) {
                      LOCK();
                      plVar14 = local_58 + 1;
                      lVar7 = *plVar14;
                      *(int *)plVar14 = (int)*plVar14 + -1;
                      UNLOCK();
                      if ((int)lVar7 == 1) {
                        (**(code **)*local_58)(local_58);
                        LOCK();
                        piVar2 = (int *)((longlong)local_58 + 0xc);
                        iVar15 = *piVar2;
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (iVar15 == 1) {
                          (**(code **)(*local_58 + 8))(local_58,1);
                        }
                      }
                    }
                  }
                }
              }
              if (local_a8 != (undefined2 *)0x0) {
                FMemory::Free();
              }
            }
          }
          else {
            plVar14 = param_1 + 0x265;
            if (plVar14 != local_48) {
              if (*plVar14 != 0) {
                FMemory::Free();
              }
              *plVar14 = 0;
              param_1[0x266] = 0;
            }
            FUN_142d87400(&local_108);
            lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
            lVar7 = *(longlong *)(lVar7 + 0x140);
            if (lVar7 != 0) {
              lVar10 = AOfflineGameMode::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((bVar3) && (lVar7 = FUN_140c13f20(lVar7), lVar7 != 0)) {
                FUN_141163800(lVar7);
              }
            }
          }
        }
        if ((int)local_100 != 0) {
          plVar14 = (longlong *)(local_108 + 8);
          iVar15 = (int)local_100;
          do {
            if (plVar14[2] != 0) {
              FMemory::Free();
            }
            if (*plVar14 != 0) {
              FMemory::Free();
            }
            plVar14 = plVar14 + 5;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        if (local_108 != 0) {
          FMemory::Free();
        }
      }
      plVar14 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_c0 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_90 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    plVar14 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_b0 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140be42e0 FUN_140be42e0 body=661 status=ok
// SIG undefined FUN_140be42e0(void)

void FUN_140be42e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 uVar5;
  char cVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 local_res8;
  char local_res9;
  undefined2 local_res10 [4];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined **local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((*(char *)(param_1 + 0xe98) == '\0') &&
     (local_c0 = param_1, cVar6 = FUN_140ba14c0(&local_c0), cVar6 != '\0')) {
    local_res20 = 0;
    FUN_1404d0c50(&local_e8,0);
    if (local_e8 != (longlong *)0x0) {
      local_d8 = 0x11f;
      lVar7 = (**(code **)(*local_e8 + 0x10))(local_e8,0x11f);
      if (lVar7 != 0) {
        puVar8 = (undefined2 *)FUN_140dbc6b0(local_res18,lVar7 + 0x28);
        uVar5 = *puVar8;
        local_res10[0] = uVar5;
        if ((char)uVar5 == '\x02') {
          cVar6 = FUN_140bc9f60(param_1);
          if (cVar6 == '\0') {
            FUN_140ba4250(param_1,local_res10,1);
          }
          else {
            FUN_140dbc5d0(param_1 + 0x5f0,&local_res8);
            if (local_res9 != (char)((ushort)uVar5 >> 8)) {
              FWeakObjectPtr::operator=(&local_d0,0);
              local_c8 = 0;
              uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_48,L"Only the host is allowed to change the session privacy."
                                 ,L"OakGameInstance",L"PlatformSessionPrivacyChangeNotAllowed");
              uVar10 = FInternationalization::
                       ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                 (local_60,L"Network Error",L"OakGameInstance",L"NetworkError");
              local_98 = &PTR_FUN_1443170a0;
              FText::FText(local_90,uVar10);
              FText::FText(local_78,uVar9);
              if (local_58 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_58 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_58)(local_58);
                  LOCK();
                  piVar2 = (int *)((longlong)local_58 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*local_58 + 8))(local_58,1);
                  }
                }
              }
              if (local_40 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_40 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
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
              FWeakObjectPtr::operator=(local_b8,0);
              FWeakObjectPtr::operator=(local_b0,0);
              local_a8 = local_d0;
              local_a4 = local_cc;
              local_a0 = local_c8;
              FUN_140c23780(2,&local_98,&local_a8,local_b0,local_b8,2);
              FUN_140bf7280(param_1,&local_res8);
              FUN_140b9cdd0(&local_98);
            }
          }
        }
      }
    }
    plVar1 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_e0 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140be4580 FUN_140be4580 body=1081 status=ok
// SIG undefined FUN_140be4580(void)

void FUN_140be4580(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  longlong *plVar12;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  
  bVar3 = false;
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
    return;
  }
  if (DAT_146b3e2a0 != *param_2) {
    if (DAT_14686a218 != *param_2) {
      return;
    }
    FUN_140bed510(param_1,(int)param_2[1]);
    return;
  }
  FUN_1404cf890(&local_a8,0);
  FUN_1404cf2e0(&local_88,0);
  if (local_88 == (longlong *)0x0) {
LAB_140be45fa:
    bVar5 = false;
  }
  else {
    cVar7 = (**(code **)(*local_88 + 0x10))(local_88,8);
    bVar5 = true;
    if (cVar7 == '\0') goto LAB_140be45fa;
  }
  plVar12 = local_a8;
  if (local_a8 == (longlong *)0x0) goto LAB_140be4905;
  (**(code **)(*local_a8 + 0x58))(local_a8,&local_98,(int)param_2[1]);
  if (local_98 == 0) {
LAB_140be466d:
    bVar4 = false;
  }
  else {
    local_78 = local_98;
    plStack_70 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
      plVar12 = local_a8;
    }
    bVar3 = true;
    cVar7 = (**(code **)(*plVar12 + 0xa8))(plVar12,&local_78);
    if (cVar7 == '\0') goto LAB_140be466d;
    bVar4 = true;
  }
  plVar9 = plStack_70;
  if ((bVar3) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_70 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    plVar12 = local_a8;
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar12 = local_a8;
      if (iVar8 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
        plVar12 = local_a8;
      }
    }
  }
  bVar3 = false;
  if (bVar4) {
    FUN_140bd54f0(param_1);
    goto LAB_140be48ce;
  }
  if (local_98 == 0) {
LAB_140be471f:
    bVar4 = false;
  }
  else {
    bVar3 = true;
    local_68 = local_98;
    plStack_60 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
      plVar12 = local_a8;
    }
    iVar8 = (**(code **)(*plVar12 + 0x78))(plVar12,&local_68);
    if (iVar8 == 0) goto LAB_140be471f;
    bVar4 = true;
  }
  plVar12 = plStack_60;
  if ((bVar3) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plStack_60 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar12 = plStack_90;
  if (bVar4) {
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    local_58 = local_98;
    local_50 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    plVar9 = (longlong *)FUN_14244c070(param_1,&local_58);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (plVar9 == (longlong *)0x0) {
      if ((bVar5) && (cVar7 = FUN_140dcef00(&DAT_14686a610,(int)param_2[1]), cVar7 != '\0'))
      goto LAB_140be48c3;
      plVar12 = plStack_90;
      local_48 = local_98;
      plStack_40 = plStack_90;
      if (plStack_90 == (longlong *)0x0) goto LAB_140be4905;
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_90 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    else {
      uVar10 = (undefined4)param_2[1];
      if (-1 < (int)plVar9[0x21]) goto LAB_140be48c6;
      (**(code **)(*plVar9 + 0x2b8))(plVar9);
      lVar6 = *param_2;
      if ((((lVar6 == DAT_14686a238) || (lVar6 == DAT_14686a240)) || (lVar6 == DAT_14686a248)) ||
         (((lVar6 == DAT_14686a250 || (lVar6 == DAT_14686a258)) ||
          ((lVar6 == DAT_14686a330 || (lVar6 == DAT_14686a338)))))) {
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
      FUN_140bab890(param_1,(int)param_2[1],plVar9,uVar11,0,1);
    }
  }
  else {
LAB_140be48c3:
    uVar10 = (undefined4)param_2[1];
LAB_140be48c6:
    FUN_140bed510(param_1,uVar10);
  }
LAB_140be48ce:
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_90 + 1;
    lVar6 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plStack_90 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
LAB_140be4905:
  plVar12 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  plVar12 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a0 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return;
}



// FUNCTION 140be49c0 FUN_140be49c0 body=35 status=ok
// SIG undefined FUN_140be49c0(void)

void FUN_140be49c0(longlong param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  TArray<TScriptInterface<IHoodEconomySystemUnlockable>,TSizedDefaultAllocator<32>_>::Remove
            (param_1 + 0xb88,&local_18);
  return;
}



// FUNCTION 140be49f0 FUN_140be49f0 body=255 status=ok
// SIG undefined FUN_140be49f0(void)

void FUN_140be49f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    plVar6 = (longlong *)param_1[7];
    plVar1 = plVar6 + (int)param_1[8];
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) && (lVar4 = UPlayer::GetPlayerController(*plVar6,lVar3), lVar4 != 0)) {
        lVar5 = FUN_14145f370();
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
          thunk_FUN_140c24550(lVar4 + 0x1978,param_1 + 7,lVar3);
        }
      }
    }
  }
  if (((param_2 != 0) && (*(char *)(param_2 + 0x34) != '\0')) && (*(char *)(param_2 + 0x30) != '\0')
     ) {
    FUN_140db8120(&DAT_14686a610);
  }
  FUN_142d6c2c0(param_1,param_2);
  return;
}



// FUNCTION 140be4af0 FUN_140be4af0 body=1086 status=ok
// SIG undefined FUN_140be4af0(void)

void FUN_140be4af0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong *local_a0;
  void *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68 [2];
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  lVar7 = FUN_142b45e90();
  uVar4 = *(undefined8 *)(lVar7 + 0x18);
  FUN_140bb7010(param_1,&local_98);
  if (1 < local_90) {
    uVar13 = 0;
    plVar12 = *(longlong **)(param_1 + 0x38);
    uVar11 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
    if (plVar12 + *(int *)(param_1 + 0x40) < plVar12) {
      uVar11 = uVar13;
    }
    if (uVar11 != 0) {
      do {
        if (*plVar12 != 0) {
          lVar7 = FUN_142547b50(*plVar12,local_58);
          plVar5 = *(longlong **)(lVar7 + 0x10);
          lVar7 = *(longlong *)(lVar7 + 8);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_58[0] = &PTR_FUN_143f740c8;
          if (local_40 != 0) {
            FMemory::Free();
          }
          plVar8 = local_48;
          local_58[0] = &PTR_FUN_143f73d18;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_48 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          if (lVar7 != 0) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            local_88 = lVar7;
            local_80 = plVar5;
            FUN_142b4a990(uVar4,&local_a8,&local_88);
            plVar8 = local_a0;
            if (local_a8 == 0) {
              if (local_a0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_a0 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_a0)(local_a0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              plVar8 = local_80;
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_80 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
joined_r0x000140be4e89:
                  if (iVar3 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
            }
            else {
              if (((*(int *)(local_a8 + 0xa0) == 0) ||
                  (*(longlong **)(local_a8 + 0x98) == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(**(longlong **)(local_a8 + 0x98) + 0x18))(), cVar6 == '\0'))
              {
                lVar7 = local_a8;
                uStack_70 = 0;
                local_78 = FUN_140bd9860;
                pplVar10 = (longlong **)(local_a8 + 0x98);
                plVar8 = (longlong *)FMemory::Realloc(0,0x30);
                local_68[0] = plVar8;
                if (plVar8 != (longlong *)0x0) {
                  *plVar8 = (longlong)&PTR_FUN_1443199b0;
                  FWeakObjectPtr::operator=(plVar8 + 1,param_1);
                  *(undefined4 *)(plVar8 + 2) = (undefined4)local_78;
                  *(undefined4 *)((longlong)plVar8 + 0x14) = local_78._4_4_;
                  *(undefined4 *)(plVar8 + 3) = uStack_70;
                  *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_6c;
                  lVar9 = FDelegateHandle::GenerateNewID();
                  plVar8[5] = lVar9;
                  *plVar8 = (longlong)&PTR_FUN_1443199f8;
                }
                if (local_68 != pplVar10) {
                  if (plVar8 == (longlong *)0x0) {
                    if ((*(int *)(lVar7 + 0xa0) != 0) &&
                       (plVar8 = *pplVar10, plVar8 != (longlong *)0x0)) {
                      (**(code **)(*plVar8 + 0x28))(plVar8,0);
                      if (*pplVar10 != (longlong *)0x0) {
                        plVar8 = (longlong *)FMemory::Realloc(*pplVar10,0,0);
                        *pplVar10 = plVar8;
                      }
                      *(undefined4 *)(lVar7 + 0xa0) = 0;
                    }
                    goto LAB_140be4da4;
                  }
                  (**(code **)(*plVar8 + 0x30))(plVar8,pplVar10);
                }
                if (plVar8 != (longlong *)0x0) {
                  (**(code **)(*plVar8 + 0x28))(plVar8,0);
                  local_68[0] = (longlong *)FMemory::Realloc(plVar8,0,0);
                  if (local_68[0] != (longlong *)0x0) {
                    FMemory::Free(local_68[0]);
                  }
                }
              }
LAB_140be4da4:
              local_b8 = (void *)0x0;
              local_b0 = local_90;
              if (local_90 == 0) {
                local_ac = 0;
              }
              else {
                lVar7 = (longlong)local_90;
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_90,0);
                _guard_xfg_dispatch_icall_nop(local_b8,local_98,lVar7 * 2);
              }
              FUN_142b62a40(local_a8,&local_b8);
              plVar8 = local_a0;
              if (local_a0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_a0 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_a0)(local_a0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar8 + 8))(plVar8,1);
                  }
                }
              }
              plVar8 = local_80;
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_80 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  goto joined_r0x000140be4e89;
                }
              }
            }
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar5 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
        plVar12 = plVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar11);
    }
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140be4f30 FUN_140be4f30 body=78 status=ok
// SIG undefined FUN_140be4f30(void)

void FUN_140be4f30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 800;
  if (param_2 != lVar1) {
    if (*(char *)(param_1 + 0x418) != '\0') {
      *(undefined1 *)(param_1 + 0x418) = 0;
      FUN_140b9da20(lVar1);
    }
    FUN_140b9a9b0(lVar1,param_2);
    *(undefined1 *)(param_1 + 0x418) = 1;
  }
  return;
}



// FUNCTION 140be4f80 FUN_140be4f80 body=225 status=ok
// SIG undefined FUN_140be4f80(void)

void FUN_140be4f80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *local_18;
  undefined4 uStack_10;
  
  if (*(longlong *)(param_1 + 0xe20) == 0) {
    *(longlong **)(param_1 + 0xe20) = param_2;
    local_18 = FUN_140bd8ac0;
    uStack_10 = 0;
    FUN_1407ffe80(param_2 + 1,param_1,&local_18);
                    /* WARNING: Could not emulate address calculation at 0x000140be4fd8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xe20) + 8))();
    return;
  }
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  puVar1 = *(undefined8 **)(param_1 + 0xe30);
  if (iVar2 == 3) {
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(longlong **)(param_1 + 0xe30) = param_2;
    return;
  }
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0xe30) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0xe28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(longlong **)(param_1 + 0xe28) = param_2;
  return;
}



// FUNCTION 140be5070 FUN_140be5070 body=475 status=ok
// SIG undefined FUN_140be5070(void)

void FUN_140be5070(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined **local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar4 = FUN_140a08d00();
  if ((((lVar4 != 0) && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) &&
     ((DAT_1468536c8 != 0 && (*(longlong *)(lVar4 + 0x1f0) != 0)))) {
    FUN_1405a1960();
  }
  lVar4 = FUN_14244f490(param_1,0);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(char *)(lVar4 + 0x128) == '\x03')) {
      uVar10 = 0;
      plVar8 = *(longlong **)(param_1 + 0x10c0);
      uVar9 = (longlong)*(int *)(param_1 + 0x10c8) & 0x1fffffffffffffff;
      if (plVar8 + *(int *)(param_1 + 0x10c8) < plVar8) {
        uVar9 = uVar10;
      }
      if (uVar9 != 0) {
        do {
          if (*plVar8 != 0) {
            FUN_140c5b630();
          }
          plVar8 = plVar8 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar9);
      }
    }
  }
  FUN_140be3520(param_1);
  FUN_140be97d0(param_1);
  FUN_140ba8040(param_1);
  FUN_140bcc940(param_1,3);
  uVar6 = FUN_1404b03b0();
  uVar7 = FUN_1404b03b0();
  local_48 = &PTR_FUN_1443170a0;
  FText::FText(local_40,uVar7);
  FText::FText(local_28,uVar6);
  local_48 = &PTR_FUN_1443170a0;
  FUN_140bb5710(param_1,&local_48);
  local_48 = &PTR_FUN_1443170a0;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_38 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 140be5250 FUN_140be5250 body=250 status=ok
// SIG undefined FUN_140be5250(void)

void FUN_140be5250(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    plVar5 = (longlong *)FUN_141424bc0();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    iVar3 = FUN_142480900(lVar6);
    iVar4 = FUN_14046e5c0(param_1);
    uVar2 = FUN_140bb7dd0(param_1,local_28);
    uVar1 = *(undefined8 *)(param_1 + 0xae8);
    lVar6 = FUN_140b949f0(uVar1,DAT_14686a160,uVar2,iVar3 - iVar4);
    if (lVar6 != 0) {
      FUN_140db0be0(uVar1,lVar6);
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x50) = 0;
      uVar1 = FUN_140bb7010(param_1,local_18);
      FUN_140dd1370(lVar6,uVar1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xa08);
    }
  }
  FUN_140bf5100(param_1);
  return;
}



// FUNCTION 140be5350 FUN_140be5350 body=1432 status=ok
// SIG undefined FUN_140be5350(void)

void FUN_140be5350(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  int local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  longlong *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_40 [2];
  longlong *local_30;
  longlong local_28;
  
  if (*(longlong *)(param_1 + 0x12c0) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x12c8) != 0) {
    return;
  }
  if (((*(longlong *)(param_1 + 0x4e0) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x4e0) + 0x10) != '\0')) &&
     (cVar3 = FUN_140678610(), cVar3 == '\0')) {
    local_140 = 0;
    local_148 = 0;
    local_138 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_130 = 0;
    local_128 = 0;
    FUN_140bb4ac0(param_1,0,&local_158);
    FUN_140b9da90(&local_158);
    return;
  }
  lVar5 = UGameInstance::GetFirstGamePlayer(param_1);
  if (lVar5 == 0) {
    local_108 = 0;
    local_110 = 0;
    local_100 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_f8 = 0;
    local_f0 = 0;
    FUN_140bb4ac0(param_1,0,&local_120);
    FUN_140b9da90(&local_120);
    return;
  }
  lVar5 = FUN_142547b50(lVar5,local_40);
  local_1d8 = *(longlong *)(lVar5 + 8);
  uStack_1d0 = *(longlong **)(lVar5 + 0x10);
  if (uStack_1d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_1d0 + 1) = (int)uStack_1d0[1] + 1;
    UNLOCK();
  }
  local_40[0] = &PTR_FUN_143f740c8;
  if (local_28 != 0) {
    FMemory::Free();
  }
  local_40[0] = &PTR_FUN_143f73d18;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_1d8 == 0) {
    local_d0 = 0;
    local_d8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    FUN_140bb4ac0(param_1,0,&local_e8);
    FUN_140b9da90(&local_e8);
    goto LAB_140be5894;
  }
  iVar4 = FUN_140bb88c0(param_1,&local_1d8);
  if (iVar4 != 2) {
    local_98 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_140bb4ac0(param_1,0,&local_b0);
    FUN_140b9da90(&local_b0);
    goto LAB_140be5894;
  }
  lVar5 = FUN_142b45e90();
  local_1b8 = (undefined4)local_1d8;
  uStack_1b4 = local_1d8._4_4_;
  uStack_1b0 = (undefined4)uStack_1d0;
  uStack_1ac = uStack_1d0._4_4_;
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  if (uStack_1d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_1d0 + 1) = (int)uStack_1d0[1] + 1;
    UNLOCK();
  }
  cVar3 = FUN_142b54910(uVar2,&local_1b8);
  plVar6 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (cVar3 == '\0') {
    local_1a8 = (undefined4)local_1d8;
    uStack_1a4 = local_1d8._4_4_;
    uStack_1a0 = (undefined4)uStack_1d0;
    uStack_19c = uStack_1d0._4_4_;
    if (uStack_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_1d0 + 1) = (int)uStack_1d0[1] + 1;
      UNLOCK();
    }
    FUN_142b48170(uVar2,&local_178,&local_1a8);
    plVar6 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if ((local_178 == 0) || (cVar3 = FUN_142b547b0(), cVar3 == '\0')) {
      local_188 = (undefined4)local_1d8;
      uStack_184 = local_1d8._4_4_;
      uStack_180 = (undefined4)uStack_1d0;
      uStack_17c = uStack_1d0._4_4_;
      if (uStack_1d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_1d0 + 1) = (int)uStack_1d0[1] + 1;
        UNLOCK();
      }
      FUN_140bd2600(param_1,&local_188);
      plVar6 = (longlong *)CONCAT44(uStack_17c,uStack_180);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
    else if ((*(longlong *)(param_1 + 0x1f8) == 0) ||
            (plVar6 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar6 == (longlong *)0x0)) {
      local_60 = 0;
      local_68 = 0;
      local_58 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_50 = 0;
      local_48 = 0;
      FUN_140bb4ac0(param_1,0,&local_78);
      FUN_140b9da90(&local_78);
    }
    else {
      local_198 = FUN_140bd2600;
      uStack_190 = 0;
      local_1c8 = (longlong *)0x0;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_1c0 = 3;
      local_1c8 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_198;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_198._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_190;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_18c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar5;
        *plVar7 = (longlong)&PTR_FUN_143fcff08;
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x80))(plVar6,local_res8,&local_1c8);
      *(undefined8 *)(param_1 + 0x12c0) = *puVar8;
      if (local_1c0 != 0) {
        if (local_1c8 == (longlong *)0x0) goto LAB_140be5851;
        (**(code **)(*local_1c8 + 0x28))(local_1c8,0);
        if (local_1c8 != (longlong *)0x0) {
          local_1c8 = (longlong *)FMemory::Realloc(local_1c8,0,0);
        }
        local_1c0 = 0;
      }
      if (local_1c8 != (longlong *)0x0) {
        FMemory::Free(local_1c8);
      }
    }
  }
  else {
    local_168 = (undefined4)local_1d8;
    uStack_164 = local_1d8._4_4_;
    uStack_160 = (undefined4)uStack_1d0;
    uStack_15c = uStack_1d0._4_4_;
    if (uStack_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_1d0 + 1) = (int)uStack_1d0[1] + 1;
      UNLOCK();
    }
    FUN_140bd2600(param_1,&local_168);
    local_170 = (longlong *)CONCAT44(uStack_15c,uStack_160);
  }
LAB_140be5851:
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_170 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
LAB_140be5894:
  plVar6 = uStack_1d0;
  if (uStack_1d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_1d0 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_1d0)(uStack_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_1d0 + 8))(uStack_1d0,1);
      }
    }
  }
  return;
}



// FUNCTION 140be58f0 FUN_140be58f0 body=113 status=ok
// SIG undefined FUN_140be58f0(void)

void FUN_140be58f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined4 uStack_10;
  
  if ((1 < *(int *)(param_1 + 0x1060)) && (*(longlong *)(param_1 + 0x1070) == 0)) {
    local_18 = FUN_140bda590;
    uStack_10 = 0;
    puVar1 = (undefined8 *)
             TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                       (param_1 + 0xc60,local_res8,param_1,&local_18);
    *(undefined8 *)(param_1 + 0x1070) = *puVar1;
    FUN_140be5350(param_1);
    return;
  }
  return;
}



// FUNCTION 140be5970 FUN_140be5970 body=3750 status=ok
// SIG undefined FUN_140be5970(void)

void FUN_140be5970(code *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  code *pcVar6;
  void *pvVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  char cVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  DWORD DVar19;
  undefined4 uVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 uVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong *plVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  code *pcVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong local_res10;
  longlong *local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  int local_1c0;
  uint local_1bc;
  longlong *local_1b8;
  int local_1b0;
  uint local_1ac;
  code *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 *local_188;
  int local_180;
  undefined4 local_17c;
  undefined8 *local_178;
  int local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  longlong *plStack_150;
  longlong local_148;
  code *local_140;
  longlong *local_138;
  int local_130;
  uint local_12c;
  longlong *local_128;
  int local_120;
  undefined4 local_11c;
  code *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  longlong *local_e0;
  longlong local_d8 [2];
  undefined **local_c8 [2];
  longlong *local_b8;
  longlong local_b0;
  undefined **local_a0 [2];
  longlong *local_90;
  longlong local_88;
  longlong *local_78;
  undefined1 local_68 [40];
  
  uVar31 = 0;
  if (*(int *)(param_1 + 0x7f8) == 0) {
    return;
  }
  puVar27 = *(undefined8 **)(param_1 + 0x38);
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  local_res10 = 0;
  uVar28 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar27 + *(int *)(param_1 + 0x40) < puVar27) {
    uVar28 = uVar31;
  }
  uVar37 = uVar31;
  if (uVar28 != 0) {
    do {
      uVar23 = *puVar27;
      lVar21 = FUN_142547b50(uVar23,local_c8);
      lVar21 = *(longlong *)(lVar21 + 8);
      local_c8[0] = &PTR_FUN_143f740c8;
      if (local_b0 != 0) {
        FMemory::Free();
      }
      plVar25 = local_b8;
      local_c8[0] = &PTR_FUN_143f73d18;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_b8 + 1;
        lVar36 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar36 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar25 + 8))(plVar25,1);
          }
        }
      }
      if (lVar21 != 0) {
        lVar21 = FUN_142547b50(uVar23,local_a0);
        uVar31 = local_1d0;
        plVar25 = *(longlong **)(lVar21 + 0x10);
        lVar21 = *(longlong *)(lVar21 + 8);
        if (plVar25 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
          UNLOCK();
        }
        for (plVar24 = local_1d8; plVar24 != local_1d8 + (longlong)(int)local_1d0 * 2;
            plVar24 = plVar24 + 2) {
          if (*plVar24 == lVar21) {
            if ((int)((longlong)plVar24 - (longlong)local_1d8 >> 4) != -1) goto LAB_140be5b20;
            break;
          }
        }
        lVar36 = (longlong)(int)local_1d0;
        iVar17 = (int)local_1d0 + 1;
        local_1d0 = CONCAT44(local_1d0._4_4_,iVar17);
        if (local_1d0._4_4_ < iVar17) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1d8,uVar31 & 0xffffffff);
        }
        local_1d8[lVar36 * 2] = lVar21;
        (local_1d8 + lVar36 * 2)[1] = (longlong)plVar25;
        if (plVar25 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
          UNLOCK();
LAB_140be5b20:
          if (plVar25 != (longlong *)0x0) {
            LOCK();
            plVar24 = plVar25 + 1;
            lVar21 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar21 == 1) {
              (**(code **)*plVar25)(plVar25);
              LOCK();
              piVar1 = (int *)((longlong)plVar25 + 0xc);
              iVar17 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                (**(code **)(*plVar25 + 8))(plVar25,1);
              }
            }
          }
        }
        local_a0[0] = &PTR_FUN_143f740c8;
        if (local_88 != 0) {
          FMemory::Free();
        }
        plVar25 = local_90;
        local_a0[0] = &PTR_FUN_143f73d18;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar24 = local_90 + 1;
          lVar21 = *plVar24;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)lVar21 == 1) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar25 + 0xc);
            iVar17 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              (**(code **)(*plVar25 + 8))(plVar25,1);
            }
          }
        }
      }
      puVar27 = puVar27 + 1;
      local_res10 = local_res10 + 1;
    } while (local_res10 != uVar28);
    uVar31 = local_1f0 & 0xffffffff;
    uVar37 = local_1e0 & 0xffffffff;
  }
  uVar28 = 0;
  FUN_140bbc150(param_1,&local_1d8);
  if (((int)local_1d0 == *(int *)(param_1 + 0x40)) || ((int)local_1d0 == 0)) goto LAB_140be676e;
  plVar25 = local_1d8 + (longlong)(int)local_1d0 * 2;
  bVar9 = false;
  if (local_1d8 == plVar25) goto LAB_140be676e;
  pcVar32 = param_1 + 0x978;
  plVar24 = local_1d8;
  do {
    puVar27 = *(undefined8 **)pcVar32;
    iVar17 = *(int *)(param_1 + 0x980);
    lVar21 = *plVar24;
    puVar34 = puVar27 + (longlong)iVar17 * 2;
    if (puVar27 != puVar34) {
      do {
        cVar15 = (*(code *)**(undefined8 **)*puVar27)((undefined8 *)*puVar27,lVar21);
        if (cVar15 != '\0') goto LAB_140be5cda;
        puVar27 = puVar27 + 2;
      } while (puVar27 != puVar34);
      iVar17 = *(int *)(param_1 + 0x980);
    }
    *(int *)(param_1 + 0x980) = iVar17 + 1;
    if (*(int *)(param_1 + 0x984) < iVar17 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pcVar32,iVar17);
    }
    plVar29 = (longlong *)((longlong)iVar17 * 0x10 + *(longlong *)pcVar32);
    *plVar29 = *plVar24;
    lVar21 = plVar24[1];
    plVar29[1] = lVar21;
    if (lVar21 != 0) {
      LOCK();
      *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
      UNLOCK();
    }
    bVar9 = true;
LAB_140be5cda:
    plVar24 = plVar24 + 2;
  } while (plVar24 != plVar25);
  bVar11 = false;
  bVar10 = false;
  if (bVar9) {
    local_1f0 = CONCAT44(local_1f0._4_4_,4);
    bVar9 = false;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1f8,0);
    plVar25 = local_1f8;
    local_1e0 = CONCAT44(local_1e0._4_4_,4);
    *local_1f8 = 0;
    local_1f8[1] = 0;
    local_1f8[2] = 0;
    local_1f8[3] = 0;
    local_1f8[4] = 0;
    local_1f8[5] = 0;
    local_1f8[6] = 0;
    local_1f8[7] = 0;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1e8,0);
    plVar24 = local_1e8;
    iVar18 = 0;
    *local_1e8 = 0;
    local_1e8[1] = 0;
    local_1e8[2] = 0;
    local_1e8[3] = 0;
    local_1e8[4] = 0;
    local_1e8[5] = 0;
    local_1e8[6] = 0;
    local_1e8[7] = 0;
    iVar17 = 0;
    if (0 < *(int *)(param_1 + 0x980)) {
      local_1a0 = 0;
      plVar29 = local_1e8;
      pcVar32 = param_1;
      do {
        if (3 < iVar17) break;
        plVar22 = *(longlong **)(local_1a0 + *(longlong *)(param_1 + 0x978));
        plVar22 = (longlong *)(**(code **)(*plVar22 + 8))(plVar22,local_100);
        lVar21 = *plVar22;
        plVar22 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x338))(param_1,local_f8);
        if (lVar21 == *plVar22) {
          local_198 = 0;
          local_158 = 0;
          plStack_150 = (longlong *)0x0;
          bVar10 = true;
          plVar22 = &local_158;
        }
        else {
          bVar11 = true;
          plVar22 = (longlong *)
                    FUN_140bbc6f0(param_1,local_e8,
                                  (longlong)iVar18 * 0x10 + *(longlong *)(param_1 + 0x978));
          local_198 = *plVar22;
        }
        pcVar6 = (code *)plVar22[1];
        plVar22[1] = 0;
        *plVar22 = 0;
        plVar22 = plStack_150;
        if ((bVar10) && (bVar10 = false, plStack_150 != (longlong *)0x0)) {
          LOCK();
          plVar2 = plStack_150 + 1;
          lVar21 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar21 == 1) {
            (**(code **)*plStack_150)(plStack_150);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_150 + 8))(plStack_150,1);
            }
          }
        }
        plVar22 = local_e0;
        if ((bVar11) && (bVar11 = false, local_e0 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_e0 + 1;
          lVar21 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar21 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar22 + 8))(plVar22,1);
            }
          }
        }
        if (local_198 == 0) {
          local_198 = *(longlong *)(local_1a0 + *(longlong *)(param_1 + 0x978));
          local_140 = *(code **)(local_1a0 + 8 + *(longlong *)(param_1 + 0x978));
          if (local_140 != (code *)0x0) {
            LOCK();
            *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
            UNLOCK();
          }
          bVar13 = false;
          bVar12 = true;
          pcVar32 = local_140;
        }
        else {
          if (pcVar6 != (code *)0x0) {
            LOCK();
            *(int *)(pcVar6 + 8) = *(int *)(pcVar6 + 8) + 1;
            UNLOCK();
          }
          bVar13 = true;
          bVar12 = false;
          local_140 = pcVar6;
          local_168 = pcVar6;
        }
        pcVar3 = local_168;
        if (local_140 != (code *)0x0) {
          LOCK();
          *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
          UNLOCK();
        }
        local_148 = local_198;
        if ((bVar12) && (pcVar32 != (code *)0x0)) {
          LOCK();
          pcVar4 = pcVar32 + 8;
          iVar5 = *(int *)pcVar4;
          *(int *)pcVar4 = *(int *)pcVar4 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (*(code *)**(undefined8 **)pcVar32)(pcVar32);
            LOCK();
            pcVar4 = pcVar32 + 0xc;
            iVar5 = *(int *)pcVar4;
            *(int *)pcVar4 = *(int *)pcVar4 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*(longlong *)pcVar32 + 8))(pcVar32,1);
            }
          }
        }
        if ((bVar13) && (pcVar3 != (code *)0x0)) {
          LOCK();
          pcVar4 = pcVar3 + 8;
          iVar5 = *(int *)pcVar4;
          *(int *)pcVar4 = *(int *)pcVar4 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (*(code *)**(undefined8 **)pcVar3)(pcVar3);
            LOCK();
            pcVar4 = pcVar3 + 0xc;
            iVar5 = *(int *)pcVar4;
            *(int *)pcVar4 = *(int *)pcVar4 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*(longlong *)pcVar3 + 8))(pcVar3,1);
            }
          }
        }
        FUN_140d79f00(*(longlong *)(param_1 + 0x478),&local_148,0,0,local_1f8 + (longlong)iVar17 * 2
                     );
        if (*(int *)((longlong)plVar25 + (8 - (longlong)plVar24) + (longlong)plVar29) < 2) {
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_1 + 0x978,iVar18,1);
          iVar18 = iVar18 + -1;
          local_1a0 = local_1a0 + -0x10;
        }
        else {
          uVar16 = FUN_140bbd2a0(param_1,&local_148);
          plVar22 = (longlong *)FUN_1411f1490(local_d8,uVar16);
          if (plVar29 != plVar22) {
            if (*plVar29 != 0) {
              FMemory::Free();
            }
            *plVar29 = *plVar22;
            *plVar22 = 0;
            *(int *)(plVar29 + 1) = (int)plVar22[1];
            *(undefined4 *)((longlong)plVar29 + 0xc) = *(undefined4 *)((longlong)plVar22 + 0xc);
            plVar22[1] = 0;
          }
          if (local_d8[0] != 0) {
            FMemory::Free();
          }
          if (*(int *)(param_1 + 0x40) <= iVar18) {
            bVar9 = true;
          }
          iVar17 = iVar17 + 1;
          plVar29 = plVar29 + 2;
        }
        pcVar3 = local_140;
        if (local_140 != (code *)0x0) {
          LOCK();
          pcVar4 = local_140 + 8;
          iVar5 = *(int *)pcVar4;
          *(int *)pcVar4 = *(int *)pcVar4 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (*(code *)**(undefined8 **)local_140)(local_140);
            LOCK();
            pcVar4 = pcVar3 + 0xc;
            iVar5 = *(int *)pcVar4;
            *(int *)pcVar4 = *(int *)pcVar4 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*(longlong *)pcVar3 + 8))(pcVar3,1);
            }
          }
        }
        if (pcVar6 != (code *)0x0) {
          LOCK();
          pcVar3 = pcVar6 + 8;
          iVar5 = *(int *)pcVar3;
          *(int *)pcVar3 = *(int *)pcVar3 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (*(code *)**(undefined8 **)pcVar6)(pcVar6);
            LOCK();
            pcVar3 = pcVar6 + 0xc;
            iVar5 = *(int *)pcVar3;
            *(int *)pcVar3 = *(int *)pcVar3 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*(longlong *)pcVar6 + 8))(pcVar6,1);
            }
          }
        }
        iVar18 = iVar18 + 1;
        local_1a0 = local_1a0 + 0x10;
      } while (iVar18 < *(int *)(param_1 + 0x980));
      if (bVar9) {
        if (param_1[0x988] == (code)0x0) {
          iVar17 = (int)local_1e0;
          uVar37 = local_1e0 & 0xffffffff;
          local_188 = (undefined8 *)0x0;
          local_180 = (int)local_1e0;
          if ((int)local_1e0 == 0) {
            local_17c = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_188,local_1e0 & 0xffffffff,0);
            puVar27 = local_188;
            plVar25 = local_1e8;
            do {
              *puVar27 = 0;
              iVar18 = (int)plVar25[1];
              pvVar7 = (void *)*plVar25;
              *(int *)(puVar27 + 1) = iVar18;
              if (iVar18 == 0) {
                *(undefined4 *)((longlong)puVar27 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar27,iVar18,0);
                _guard_xfg_dispatch_icall_nop((void *)*puVar27,pvVar7,(longlong)iVar18 * 2);
              }
              puVar27 = puVar27 + 2;
              plVar25 = plVar25 + 2;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          iVar17 = (int)local_1f0;
          uVar31 = local_1f0 & 0xffffffff;
          local_178 = (undefined8 *)0x0;
          local_170 = (int)local_1f0;
          if ((int)local_1f0 == 0) {
            local_16c = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_178,local_1f0 & 0xffffffff,0);
            puVar27 = local_178;
            plVar25 = local_1f8;
            do {
              *puVar27 = 0;
              iVar18 = (int)plVar25[1];
              pvVar7 = (void *)*plVar25;
              *(int *)(puVar27 + 1) = iVar18;
              if (iVar18 == 0) {
                *(undefined4 *)((longlong)puVar27 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar27,iVar18,0);
                _guard_xfg_dispatch_icall_nop((void *)*puVar27,pvVar7,(longlong)iVar18 * 2);
              }
              puVar27 = puVar27 + 2;
              plVar25 = plVar25 + 2;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          FUN_141200600(param_1 + 0x7a0,&local_178,&local_188);
        }
        else {
          iVar17 = (int)local_1f0;
          uVar31 = local_1f0 & 0xffffffff;
          local_1c0 = (int)local_1f0;
          local_1c8 = (longlong *)0x0;
          if ((int)local_1f0 == 0) {
            local_1bc = 0;
            uVar30 = uVar28;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_1c8,local_1f0 & 0xffffffff,0);
            lVar21 = (longlong)local_1c8 - (longlong)local_1f8;
            plVar25 = local_1f8;
            do {
              *(undefined8 *)((longlong)plVar25 + lVar21) = 0;
              iVar18 = (int)plVar25[1];
              pvVar7 = (void *)*plVar25;
              *(int *)((longlong)plVar25 + lVar21 + 8) = iVar18;
              if (iVar18 == 0) {
                *(undefined4 *)((longlong)plVar25 + lVar21 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                          ((undefined8 *)((longlong)plVar25 + lVar21),iVar18,0);
                _guard_xfg_dispatch_icall_nop
                          (*(void **)((longlong)plVar25 + lVar21),pvVar7,(longlong)iVar18 * 2);
              }
              plVar25 = plVar25 + 2;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
            uVar30 = (ulonglong)local_1bc;
          }
          iVar17 = (int)local_1e0;
          uVar37 = local_1e0 & 0xffffffff;
          local_1b8 = (longlong *)0x0;
          local_1b0 = (int)local_1e0;
          if ((int)local_1e0 == 0) {
            local_1ac = 0;
            uVar33 = uVar28;
            uVar35 = (uint)uVar30;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_1e0 & 0xffffffff,0);
            lVar21 = (longlong)local_1b8 - (longlong)local_1e8;
            plVar25 = local_1e8;
            do {
              *(undefined8 *)(lVar21 + (longlong)plVar25) = 0;
              iVar18 = (int)plVar25[1];
              pvVar7 = (void *)*plVar25;
              *(int *)(lVar21 + 8 + (longlong)plVar25) = iVar18;
              if (iVar18 == 0) {
                *(undefined4 *)(lVar21 + 0xc + (longlong)plVar25) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                          ((undefined8 *)(lVar21 + (longlong)plVar25),iVar18,0);
                _guard_xfg_dispatch_icall_nop
                          (*(void **)(lVar21 + (longlong)plVar25),pvVar7,(longlong)iVar18 * 2);
              }
              plVar25 = plVar25 + 2;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
            uVar33 = (ulonglong)local_1ac;
            uVar35 = local_1bc;
          }
          iVar18 = local_1b0;
          iVar17 = local_1c0;
          local_1a8 = param_1;
          if ((DAT_146ac3ac6 == '\0') || (cVar15 = IsInRenderingThread(), cVar15 == '\0')) {
            if ((DAT_146ac3ac5 == '\0') &&
               (((cVar15 = FUN_1415ad720(&DAT_1468e2448), cVar15 != '\0' || (DAT_1468c21ae == '\0'))
                || (DVar19 = GetCurrentThreadId(), DVar19 == DAT_1468c21c0)))) {
              local_138 = local_1c8;
              local_128 = local_1b8;
              local_1c8 = (longlong *)0x0;
              local_1c0 = 0;
              local_1b8 = (longlong *)0x0;
              local_1b0 = 0;
              local_130 = iVar17;
              local_12c = uVar35;
              local_120 = iVar18;
              local_11c = (int)uVar33;
              local_118 = param_1;
              uVar23 = FBaseGraphTask::GetSmallTaskAllocator();
              FUN_140ba09d0(&local_138,uVar23);
              FUN_140b9c260(&local_138);
              plVar25 = local_1b8;
              iVar17 = local_1b0;
            }
            else {
              plVar24 = (longlong *)FUN_140badc10(local_68,0,0xff);
              plVar25 = local_1c8;
              local_1c8 = (longlong *)0x0;
              local_1c0 = 0;
              lVar21 = *plVar24;
              local_1b0 = 0;
              *(longlong **)(lVar21 + 0x10) = plVar25;
              *(uint *)(lVar21 + 0x1c) = uVar35;
              *(int *)(lVar21 + 0x18) = iVar17;
              *(longlong **)(lVar21 + 0x20) = local_1b8;
              *(int *)(lVar21 + 0x2c) = (int)uVar33;
              *(int *)(lVar21 + 0x28) = iVar18;
              *(code **)(lVar21 + 0x30) = param_1;
              lVar21 = *plVar24;
              lVar14 = plVar24[2];
              lVar36 = plVar24[1];
              local_1b8 = (longlong *)0x0;
              lVar8 = *(longlong *)(lVar21 + 0x40);
              piVar1 = (int *)(lVar8 + 0x48);
              if (lVar8 != 0) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                UNLOCK();
                uVar31 = local_1f0 & 0xffffffff;
                uVar37 = local_1e0 & 0xffffffff;
              }
              local_190 = lVar8;
              FUN_14048a8b0(lVar21,lVar36,(int)lVar14,1);
              plVar25 = local_1b8;
              iVar17 = local_1b0;
              if (lVar8 != 0) {
                LOCK();
                iVar17 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar17 == 1) {
                  FGraphEvent::Recycle(local_190);
                }
                uVar37 = local_1e0 & 0xffffffff;
                uVar31 = local_1f0 & 0xffffffff;
                plVar25 = local_1b8;
                iVar17 = local_1b0;
              }
            }
          }
          else {
            uVar23 = FBaseGraphTask::GetSmallTaskAllocator();
            FUN_140ba09d0(&local_1c8,uVar23);
            plVar25 = local_1b8;
            iVar17 = local_1b0;
          }
          for (; iVar17 != 0; iVar17 = iVar17 + -1) {
            if (*plVar25 != 0) {
              FMemory::Free();
            }
            plVar25 = plVar25 + 2;
          }
          plVar25 = local_1c8;
          iVar17 = local_1c0;
          if (local_1b8 != (longlong *)0x0) {
            FMemory::Free();
            plVar25 = local_1c8;
            iVar17 = local_1c0;
          }
          for (; iVar17 != 0; iVar17 = iVar17 + -1) {
            if (*plVar25 != 0) {
              FMemory::Free();
            }
            plVar25 = plVar25 + 2;
          }
          if (local_1c8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        if (*(longlong *)(param_1 + 0xbf8) == 0) {
          uStack_160 = 0;
          local_168 = FUN_140be2d90;
          pcVar32 = param_1 + 0xa38;
          plVar25 = (longlong *)FMemory::Realloc(0,0x30);
          local_78 = plVar25;
          if (plVar25 != (longlong *)0x0) {
            *plVar25 = (longlong)&PTR_FUN_14428ae88;
            FWeakObjectPtr::operator=(plVar25 + 1,param_1);
            *(undefined4 *)(plVar25 + 2) = (undefined4)local_168;
            *(undefined4 *)((longlong)plVar25 + 0x14) = local_168._4_4_;
            *(undefined4 *)(plVar25 + 3) = uStack_160;
            *(undefined4 *)((longlong)plVar25 + 0x1c) = uStack_15c;
            lVar21 = FDelegateHandle::GenerateNewID();
            plVar25[5] = lVar21;
            *plVar25 = (longlong)&PTR_FUN_14428aed0;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(pcVar32,1);
            puVar26 = (ulonglong *)(**(code **)(*plVar25 + 0x20))(plVar25,local_f0);
            iVar17 = *(int *)(param_1 + 0xa40);
            uVar28 = *puVar26;
            *(int *)(param_1 + 0xa40) = iVar17 + 1;
            if (*(int *)(param_1 + 0xa44) < iVar17 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pcVar32,iVar17);
            }
            puVar27 = (undefined8 *)((longlong)iVar17 * 0x10 + *(longlong *)pcVar32);
            *puVar27 = plVar25;
            *(undefined4 *)(puVar27 + 1) = 3;
          }
          *(ulonglong *)(param_1 + 0xbf8) = uVar28;
        }
        puVar27 = *(undefined8 **)(param_1 + 0x978);
        puVar34 = puVar27 + (longlong)*(int *)(param_1 + 0x980) * 2;
        if (puVar27 == puVar34) goto LAB_140be676e;
        do {
          plVar25 = (longlong *)puVar27[1];
          local_110 = *puVar27;
          if (plVar25 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
            UNLOCK();
          }
          local_108 = plVar25;
          uVar20 = FUN_140bbba30(param_1,&local_110);
          FUN_140be2d90(param_1,puVar27,uVar20);
          if (plVar25 != (longlong *)0x0) {
            LOCK();
            plVar24 = plVar25 + 1;
            lVar21 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar21 == 1) {
              (**(code **)*plVar25)(plVar25);
              LOCK();
              piVar1 = (int *)((longlong)plVar25 + 0xc);
              iVar17 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                (**(code **)(*plVar25 + 8))(plVar25,1);
              }
            }
          }
          puVar27 = puVar27 + 2;
        } while (puVar27 != puVar34);
        goto LAB_140be6764;
      }
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x978,0);
  }
LAB_140be6764:
  uVar31 = local_1f0 & 0xffffffff;
  uVar37 = local_1e0 & 0xffffffff;
LAB_140be676e:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_1d8);
  uVar35 = (uint)uVar37;
  plVar25 = local_1e8;
  while (uVar35 != 0) {
    if (*plVar25 != 0) {
      FMemory::Free();
    }
    plVar25 = plVar25 + 2;
    uVar35 = (int)uVar37 - 1;
    uVar37 = (ulonglong)uVar35;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  uVar35 = (uint)uVar31;
  plVar25 = local_1f8;
  while (uVar35 != 0) {
    if (*plVar25 != 0) {
      FMemory::Free();
    }
    plVar25 = plVar25 + 2;
    uVar35 = (int)uVar31 - 1;
    uVar31 = (ulonglong)uVar35;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  return;
}



// FUNCTION 140be6820 FUN_140be6820 body=824 status=ok
// SIG undefined FUN_140be6820(void)

void FUN_140be6820(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_142450450(param_1,&local_88);
  if (((undefined8 *)*param_2 == (undefined8 *)0x0) || (local_88 == 0)) {
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_80 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plStack_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    plVar4 = (longlong *)param_2[1];
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*plVar4 + 8))(plVar4,1);
    return;
  }
  cVar6 = (*(code *)**(undefined8 **)*param_2)();
  if (cVar6 != '\0') goto joined_r0x000140be6a94;
  lVar7 = FUN_1424503b0(param_1);
  if (lVar7 == 0) {
LAB_140be68e9:
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = UUGMenuManager::GetFadeHUD();
    }
    if ((local_88 == 0) || (lVar7 == 0)) goto joined_r0x000140be6a94;
    local_68 = local_88;
    plStack_60 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    lVar7 = FUN_140d3a750(lVar7,&local_68);
    plVar4 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_60)(plStack_60);
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
    if (lVar7 == 0) goto joined_r0x000140be6a94;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || (lVar7 = FUN_140cff230(lVar7), lVar7 == 0)) goto LAB_140be68e9;
  }
  local_78 = *param_2;
  local_70 = (longlong *)param_2[1];
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_58 = local_88;
  plStack_50 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140bb74b0(param_1);
  cVar6 = FUN_140d89890(uVar9,&local_58,&local_78,0);
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
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
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
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
  if (cVar6 != '\0') {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    local_30 = 0;
    local_48 = &PTR_FUN_143f740c8;
    local_28 = 0;
    FUN_140d478e0(lVar7,&local_48);
    FUN_1404bf980(&local_48);
  }
joined_r0x000140be6a94:
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_80 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plStack_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return;
}



// FUNCTION 140be6b60 FUN_140be6b60 body=274 status=ok
// SIG undefined FUN_140be6b60(void)

void FUN_140be6b60(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar2 = FUN_14244f490(param_1,0);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar2 + 0x128) == '\x03')) {
      local_res10[0] = FUN_14143d800();
      lVar2 = FUN_140bb9b90(param_1,local_res10);
      if (lVar2 != 0) {
        lVar3 = FUN_14143d800();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(param_1 + 0x4e0) != 0)) {
          local_18 = 0;
          local_10 = 0;
          uVar4 = FUN_140573010();
          FUN_140dbc5a0(uVar4,&local_18);
          if (0 < (int)local_10) {
            FUN_140c52c40(lVar2,&local_18);
            *(undefined1 *)(lVar2 + 0x80) = 1;
          }
          FUN_140b9c620(&local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 140be6c80 FUN_140be6c80 body=26 status=ok
// SIG undefined FUN_140be6c80(void)

void FUN_140be6c80(longlong param_1,longlong *param_2)

{
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    TArray<TScriptInterface<ITTLArsenalHUDMakerInterface>,FDefaultAllocator>::
    AddUniqueImpl<TScriptInterface<ITTLArsenalHUDMakerInterface>_const_&>(param_1 + 0xb88);
    return;
  }
  return;
}



// FUNCTION 140be6ca0 FUN_140be6ca0 body=79 status=ok
// SIG undefined FUN_140be6ca0(void)

void FUN_140be6ca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_res18 [16];
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)FName::FName(local_res18,L"SPARK",1);
  FUN_140bbd560(local_18,*puVar1);
  FUN_140be6cf0(param_1,local_18,param_2);
  return;
}



// FUNCTION 140be6cf0 FUN_140be6cf0 body=220 status=ok
// SIG undefined FUN_140be6cf0(void)

void FUN_140be6cf0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int local_res8 [2];
  undefined1 local_res20 [8];
  
  plVar2 = (longlong *)(param_1 + 0xd00);
  piVar5 = (int *)FUN_1405499a0(plVar2,local_res20);
  if (*piVar5 != -1) {
    FUN_1405499a0(plVar2,local_res8,param_3);
    pcVar7 = (char *)0x0;
    if (local_res8[0] != -1) {
      pcVar7 = (char *)((longlong)local_res8[0] * 0x20 + *plVar2);
    }
    pcVar6 = pcVar7 + 0x10;
    if (pcVar7 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) {
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return;
    }
  }
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_3);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar5 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 140be6dd0 FUN_140be6dd0 body=514 status=ok
// SIG undefined FUN_140be6dd0(void)

void FUN_140be6dd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int local_res8 [4];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined4 uStack_74;
  undefined1 local_70 [8];
  longlong *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  
  FUN_1405499a0(param_1 + 0xe48,local_res8,param_2);
  lVar7 = 0;
  if (local_res8[0] != -1) {
    lVar7 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xe48);
  }
  lVar5 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    return;
  }
  local_res20 = 0;
  FUN_1404d0c50(&local_58,0);
  if (((local_58 == (longlong *)0x0) ||
      (uVar4 = (**(code **)(*local_58 + 0x20))(local_58,0x11f), uVar4 < 2)) || (uVar4 == 7))
  goto LAB_140be6f7c;
  local_68 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_144318950;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = 0x40bdacc0;
    *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
    *(undefined4 *)(plVar6 + 3) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_74;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_144318998;
  }
  (**(code **)(*local_58 + 0x2d8))(local_58,local_70,&local_68);
  if (local_60 == 0) {
LAB_140be6f31:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
    goto LAB_140be6f31;
  }
  local_40 = local_70;
  local_48 = param_2;
  FUN_140b956f0(param_1 + 0xe48,local_res18,&local_48,0);
  (**(code **)(*local_58 + 0x2d0))(local_58,0x11f,param_2);
LAB_140be6f7c:
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 140be6fe0 FUN_140be6fe0 body=229 status=ok
// SIG undefined FUN_140be6fe0(void)

void FUN_140be6fe0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar7 = (longlong)param_2 * 0x20;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar7 + 0x1c + lVar3));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar6 = *(int *)(lVar7 + 0x18 + lVar3);
        break;
      }
      piVar6 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
      iVar2 = *piVar6;
    }
  }
  plVar4 = *(longlong **)((longlong)param_2 * 0x20 + *param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar6 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 140be70d0 FUN_140be70d0 body=608 status=ok
// SIG undefined FUN_140be70d0(void)

undefined8 FUN_140be70d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar12 = (longlong *)*param_2;
  uVar8 = (**(code **)(*plVar12 + 0x18))(plVar12);
  if (uVar8 < 4) {
    pbVar9 = (byte *)(**(code **)(*plVar12 + 0x10))(plVar12);
    uVar8 = (uint)*pbVar9;
  }
  else {
    pcVar4 = *(code **)(*plVar12 + 0x10);
    if (uVar8 < 8) {
      puVar10 = (uint *)(*pcVar4)();
      uVar8 = *puVar10;
    }
    else {
      puVar11 = (undefined8 *)(*pcVar4)(plVar12);
      uVar8 = (int)((ulonglong)*puVar11 >> 0x20) * 0x17 + (int)*puVar11;
    }
  }
  lVar13 = (longlong)(int)((int)param_1[9] - 1U & uVar8);
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  plVar1 = (longlong *)((longlong)plVar12 + lVar13 * 4);
  iVar2 = *(int *)((longlong)plVar12 + lVar13 * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    plVar16 = (longlong *)((longlong)iVar2 * 0x20 + *param_1);
    plVar5 = (longlong *)plVar16[1];
    puVar11 = (undefined8 *)*plVar16;
    plVar12 = plVar5 + 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar12 = (int)*plVar12 + 1;
      UNLOCK();
    }
    if ((puVar11 == (undefined8 *)*param_2) ||
       (cVar7 = (*(code *)**(undefined8 **)*param_2)(), cVar7 != '\0')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      lVar13 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar14 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (bVar6) break;
    iVar2 = (int)plVar16[3];
    plVar1 = plVar16 + 3;
  }
  iVar2 = (int)*plVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar13 = *param_1;
    lVar17 = (longlong)iVar2 * 0x20;
    lVar15 = (longlong)(int)(*(uint *)(lVar17 + 0x1c + lVar13) & (int)param_1[9] - 1U);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    piVar14 = (int *)((longlong)plVar12 + lVar15 * 4);
    iVar3 = *(int *)((longlong)plVar12 + lVar15 * 4);
    while (iVar3 != -1) {
      if (iVar3 == iVar2) {
        *piVar14 = *(int *)(lVar17 + 0x18 + lVar13);
        break;
      }
      piVar14 = (int *)(lVar13 + 0x18 + (longlong)iVar3 * 0x20);
      iVar3 = *piVar14;
    }
  }
  plVar12 = *(longlong **)((longlong)iVar2 * 0x20 + *param_1 + 8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar14 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar2,1);
  return 1;
}



// FUNCTION 140be7330 FUN_140be7330 body=341 status=ok
// SIG undefined FUN_140be7330(void)

undefined8 FUN_140be7330(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar5 = *(int *)((longlong)plVar7 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar8) * 4);
  if (iVar5 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar5;
      if (*(longlong *)(lVar3 + lVar6 * 0x30) == param_2) {
        lVar6 = lVar6 * 0x30;
        uVar8 = (longlong)*(int *)(lVar6 + 0x2c + lVar3) & uVar8;
        piVar4 = (int *)((longlong)plVar7 + uVar8 * 4);
        iVar2 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x000140be73cc;
      }
      iVar5 = *(int *)(lVar3 + 0x28 + lVar6 * 0x30);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x000140be73cc:
  if (iVar2 == -1) {
LAB_140be7400:
    lVar3 = *param_1;
    if (*(longlong *)(lVar3 + lVar6 + 0x18) != 0) {
      FMemory::Free();
    }
    plVar7 = *(longlong **)(lVar3 + lVar6 + 0x10);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar4 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar2 == iVar5) {
    *piVar4 = *(int *)(lVar6 + lVar3 + 0x28);
    goto LAB_140be7400;
  }
  piVar4 = (int *)((longlong)iVar2 * 0x30 + 0x28 + lVar3);
  iVar2 = *piVar4;
  goto joined_r0x000140be73cc;
}



// FUNCTION 140be7490 FUN_140be7490 body=197 status=ok
// SIG undefined FUN_140be7490(void)

void FUN_140be7490(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    plVar6 = (longlong *)param_1[7];
    plVar1 = plVar6 + (int)param_1[8];
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) && (lVar4 = UPlayer::GetPlayerController(*plVar6,lVar3), lVar4 != 0)) {
        lVar5 = FUN_14145f370();
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
          thunk_FUN_140c24550(lVar4 + 0x1978,param_1 + 7,lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 140be7560 FUN_140be7560 body=240 status=ok
// SIG undefined FUN_140be7560(void)

void FUN_140be7560(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x80);
    iVar3 = param_3;
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
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x80),
                 (void *)((longlong)(param_2 + param_3) * 0x80 + *param_1),(longlong)iVar1 << 7);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FComponentOverrideRecord,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140be7650 FUN_140be7650 body=297 status=ok
// SIG undefined FUN_140be7650(void)

void FUN_140be7650(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  
  if (param_3 != 0) {
    plVar8 = (longlong *)(*param_1 + 0x20 + (longlong)param_2 * 0x48);
    iVar7 = param_3;
    do {
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(plVar8 + 2);
      puVar3 = (undefined8 *)*plVar8;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if (plVar8[-2] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar8[-3];
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
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      plVar8 = plVar8 + 9;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = (int)param_1[1];
    iVar6 = (iVar7 - param_2) - param_3;
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x48),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x48),(longlong)iVar6 * 0x48);
      iVar7 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar7 - param_3;
    if (param_4 != '\0') {
      TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140be7780 FUN_140be7780 body=267 status=ok
// SIG undefined FUN_140be7780(void)

void FUN_140be7780(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x30);
    iVar6 = param_3;
    do {
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(plVar7 + 2);
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x30),
                 (void *)((longlong)(param_2 + param_3) * 0x30 + *param_1),(longlong)iVar5 * 0x30);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140be7890 FUN_140be7890 body=333 status=ok
// SIG undefined FUN_140be7890(void)

void FUN_140be7890(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0xe8);
    iVar6 = param_3;
    do {
      FUN_1404bf650(plVar7 + 1);
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
      plVar3 = (longlong *)plVar7[-2];
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
      plVar7 = plVar7 + 0x1d;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xe8),
                 (void *)((longlong)(param_2 + param_3) * 0xe8 + *param_1),(longlong)iVar5 * 0xe8);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FNamedOnlineSession,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140be79e0 FUN_140be79e0 body=1010 status=ok
// SIG undefined FUN_140be79e0(void)

void FUN_140be79e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined **local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  Online::GetSessionInterface(&local_118,0);
  if ((local_118 != (longlong *)0x0) &&
     (cVar7 = (**(code **)(*local_118 + 0x150))(local_118,1), cVar7 != '\0')) {
    local_a8 = *param_3;
    local_a0 = param_3[1];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    lVar8 = FUN_14244c070(param_1,&local_a8);
    plVar3 = local_110;
    if (lVar8 == 0) {
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      FWeakObjectPtr::operator=(&local_108,0);
      local_100 = 0;
      pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRemoveFriendConfirmed",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar9, pwVar5 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(&local_d0,pwVar6 + 2,1);
      FWeakObjectPtr::operator=(&local_108,param_1);
      local_100 = local_d0;
      local_d8 = 0;
      if ((local_d0 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_108), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_100);
      }
      local_f0 = (longlong *)param_2[1];
      local_f8 = *param_2;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      if ((undefined8 *)(param_1 + 0xb50) != &local_f8) {
        *(undefined8 *)(param_1 + 0xb50) = local_f8;
        local_f8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb58,&local_f0);
      }
      plVar3 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      local_e0 = (longlong *)param_3[1];
      local_e8 = *param_3;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      if ((undefined8 *)(param_1 + 0xb60) != &local_e8) {
        *(undefined8 *)(param_1 + 0xb60) = local_e8;
        local_e8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb68,&local_e0);
      }
      plVar3 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_48,
                          L"Are you sure you want to remove this user from your friends list? They will need to accept another friend request to be added back to your friends list."
                          ,L"OakGameInstance",L"RemoveFriendConfirmationMessage");
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_60,L"Remove Friend?",L"OakGameInstance",
                          L"RemoveFriendConfirmationHeader");
      local_98 = &PTR_FUN_1443170a0;
      FText::FText(local_90,uVar11);
      FText::FText(local_78,uVar10);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_58 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      FWeakObjectPtr::operator=(local_c8,0);
      FWeakObjectPtr::operator=(local_c0,0);
      local_b8 = local_108;
      local_b4 = local_104;
      local_b0 = local_100;
      FUN_140c23780(3,&local_98,&local_b8,local_c0,local_c8,2);
      FUN_140b9cdd0(&local_98);
      return;
    }
  }
  plVar3 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  return;
}



// FUNCTION 140be7de0 FUN_140be7de0 body=863 status=ok
// SIG undefined FUN_140be7de0(void)

void FUN_140be7de0(undefined8 param_1,longlong param_2,longlong param_3)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  size_t _Size;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res18;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined1 local_108 [32];
  longlong local_e8;
  longlong local_d8;
  longlong local_c8;
  longlong local_b8;
  char local_a0;
  undefined1 local_98 [8];
  longlong local_90;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar6 = 0;
  uVar10 = 0xffffffff;
  local_res18 = 0x7fffffff;
  uVar11 = uVar6;
  if (0 < *(int *)(param_3 + 0x398)) {
    do {
      puVar7 = (undefined8 *)(*(longlong *)(param_3 + 0x390) + uVar11);
      local_118 = (void *)0x0;
      local_110 = *(int *)(puVar7 + 1);
      _Size = (size_t)local_110;
      _Src = (void *)*puVar7;
      if (local_110 == 0) {
        local_10c = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_118,local_110,0);
        _guard_xfg_dispatch_icall_nop(local_118,_Src,_Size);
      }
      FUN_140a4f390(local_108);
      local_a0 = *(char *)(puVar7 + 0xf);
      if (local_a0 == '\0') {
        _guard_xfg_dispatch_icall_nop(local_98,0,0x68);
        FUN_142ff9df0(&local_118,local_98);
        if (local_88 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(local_88 + 0xb8);
        }
        if ((lVar9 != 0) && (local_90 != 0)) {
          lVar1 = *(longlong *)(local_90 + 0x230);
          if (lVar1 == 0) {
LAB_140be8004:
            iVar4 = *(int *)(lVar9 + 0x88);
          }
          else {
            lVar5 = FUN_14142e810();
            if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) {
              lVar5 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                cVar3 = FUN_140d01880(param_2,lVar1);
                if (cVar3 != '\0') {
                  iVar4 = -0x80000000;
                  goto LAB_140be800a;
                }
              }
              else {
                lVar5 = FUN_1412fb190();
                if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  cVar3 = FUN_140d01780(param_2,lVar1);
                  iVar4 = -0x80000000;
                  if (cVar3 != '\0') goto LAB_140be800a;
                }
              }
              goto LAB_140be8004;
            }
            cVar3 = FUN_140d01d10(param_2,lVar1);
            if (cVar3 == '\0') goto LAB_140be8004;
            iVar4 = -0x80000000;
          }
LAB_140be800a:
          if (iVar4 < local_res18) {
            uVar10 = uVar6;
            local_res18 = iVar4;
          }
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      if (local_e8 != 0) {
        FMemory::Free();
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free();
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar11 = uVar11 + 0x80;
    } while ((int)uVar8 < *(int *)(param_3 + 0x398));
    if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(param_3 + 0x398))) {
      bVar2 = true;
      goto LAB_140be80fd;
    }
  }
  bVar2 = false;
LAB_140be80fd:
  if (bVar2) {
    FUN_140be7560(param_3 + 0x390,uVar10,1,1);
    FUN_14172cc40(param_3,1);
  }
  return;
}



// FUNCTION 140be8140 FUN_140be8140 body=28 status=ok
// SIG undefined FUN_140be8140(void)

void FUN_140be8140(longlong param_1,longlong param_2)

{
  if ((*(longlong **)(param_1 + 0xb20) != (longlong *)0x0) && (param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140be8154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x280))();
    return;
  }
  return;
}



// FUNCTION 140be8160 FUN_140be8160 body=197 status=ok
// SIG undefined FUN_140be8160(void)

void FUN_140be8160(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    plVar6 = (longlong *)param_1[7];
    plVar1 = plVar6 + (int)param_1[8];
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) && (lVar4 = UPlayer::GetPlayerController(*plVar6,lVar3), lVar4 != 0)) {
        lVar5 = FUN_14145f370();
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
          thunk_FUN_140c24d00(lVar4 + 0x1978,param_1 + 7,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140be8230 FUN_140be8230 body=784 status=ok
// SIG undefined FUN_140be8230(void)

void FUN_140be8230(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_res20;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  undefined **local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  cVar7 = FUN_140ba7650();
  if (cVar7 != '\0') {
    FWeakObjectPtr::operator=(&local_d8,0);
    local_d0 = 0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRemoveShiftFriendConfirmed",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_a8,pwVar6 + 2,1);
    FWeakObjectPtr::operator=(&local_d8,param_1);
    local_d0 = local_a8;
    local_res20 = 0;
    if ((local_a8 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_d8), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_d0);
    }
    local_c0 = (longlong *)param_2[1];
    local_c8 = *param_2;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(param_1 + 0xb50) != &local_c8) {
      *(undefined8 *)(param_1 + 0xb50) = local_c8;
      local_c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb58,&local_c0);
    }
    plVar3 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    local_b0 = (longlong *)param_3[1];
    local_b8 = *param_3;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    if ((undefined8 *)(param_1 + 0xb60) != &local_b8) {
      *(undefined8 *)(param_1 + 0xb60) = local_b8;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb68,&local_b0);
    }
    plVar3 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_38,
                        L"Are you sure you want to remove this user from your friends list? They will need to accept another friend request to be added back to your friends list."
                        ,L"OakGameInstance",L"RemoveFriendConfirmationMessage");
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_50,L"Remove Friend?",L"OakGameInstance",
                        L"RemoveFriendConfirmationHeader");
    local_88 = &PTR_FUN_1443170a0;
    FText::FText(local_80,uVar11);
    FText::FText(local_68,uVar10);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    FWeakObjectPtr::operator=(&local_res20,0);
    FWeakObjectPtr::operator=(local_a0,0);
    local_98 = local_d8;
    local_94 = local_d4;
    local_90 = local_d0;
    FUN_140c23780(3,&local_88,&local_98,local_a0,&local_res20,2);
    FUN_140b9cdd0(&local_88);
  }
  return;
}



// FUNCTION 140be8540 FUN_140be8540 body=721 status=ok
// SIG undefined FUN_140be8540(void)

void FUN_140be8540(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_res20;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(char *)(param_1 + 0x458) != '\0') || (*(char *)(param_1 + 0xb18) == '\0')) {
    local_58 = *param_3;
    local_50 = param_3[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    cVar6 = FUN_140bca7d0(param_1,&local_58);
    if (cVar6 == '\0') {
      FUN_140bbc6f0(param_1,&local_88,param_3);
      plVar10 = local_80;
      if (local_88 == 0) {
        if (local_80 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = local_80 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return;
        }
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plStack_60 = local_80;
      }
      else {
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        FUN_140bbc6f0(param_1,&local_68,param_3);
        plVar10 = plStack_60;
        if (local_68 != 0) {
          plVar10 = (longlong *)param_2[1];
          local_48 = *param_2;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          local_40 = plVar10;
          lVar7 = FUN_140bbb190(param_1,&local_48);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          plVar10 = plStack_60;
          if (lVar7 != 0) {
            FWeakObjectPtr::operator=(local_78,0);
            local_70 = 0;
            pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnShiftReportReasonSelected",L"::")
            ;
            pwVar5 = (wchar_t *)0x0;
            while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
              pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
              pwVar5 = pwVar4;
            }
            FName::FName(&local_res20,pwVar5 + 2,1);
            FWeakObjectPtr::operator=(local_78,param_1);
            local_70 = local_res20;
            if ((local_res20 != 0) && (lVar9 = FWeakObjectPtr::Get(local_78), lVar9 != 0)) {
              UObject::FindFunction(lVar9,local_70);
            }
            plVar10 = plStack_60;
            local_38 = local_68;
            plStack_30 = plStack_60;
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
              UNLOCK();
            }
            FUN_1410f3be0(lVar7,&local_38,local_78);
            plVar1 = plStack_30;
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              plVar10 = plStack_30 + 1;
              lVar7 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              plVar10 = plStack_60;
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_30)(plStack_30);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar10 = plStack_60;
                if (iVar3 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                  plVar10 = plStack_60;
                }
              }
            }
          }
        }
        plVar1 = plStack_60;
        if (plVar10 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar10 = plVar10 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return;
        }
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
      }
      if (iVar3 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140be8820 FUN_140be8820 body=1041 status=ok
// SIG undefined FUN_140be8820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140be8aa9) */
/* WARNING: Removing unreachable block (ram,0x000140be8ab5) */
/* WARNING: Removing unreachable block (ram,0x000140be8ace) */

undefined8 FUN_140be8820(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 uStack_280;
  code *local_278;
  undefined4 uStack_270;
  longlong local_268;
  longlong *local_260;
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [16];
  undefined4 local_238 [2];
  longlong local_230;
  longlong *plStack_228;
  undefined4 local_220;
  undefined **local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined **local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  undefined1 local_118 [184];
  undefined4 local_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  plVar9 = *(longlong **)(param_1 + 0x420);
  iVar8 = *(int *)(param_1 + 0x428);
  plVar6 = plVar9;
  while( true ) {
    if (plVar6 == plVar9 + (longlong)iVar8 * 0x1d) {
      return 0;
    }
    if (((((*plVar6 != 0) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) &&
         (cVar5 = (*(code *)**(undefined8 **)*param_2)(), cVar5 != '\0')) &&
        ((plVar6[2] != 0 && ((undefined8 *)param_2[2] != (undefined8 *)0x0)))) &&
       (cVar5 = (*(code *)**(undefined8 **)param_2[2])(), cVar5 != '\0')) break;
    plVar6 = plVar6 + 0x1d;
  }
  if (plVar6 == plVar9 + (longlong)iVar8 * 0x1d) {
    return 0;
  }
  uVar3 = ((longlong)plVar6 - (longlong)plVar9) / 0xe8;
  iVar8 = (int)uVar3;
  if (iVar8 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x428) <= iVar8) {
    return 0;
  }
  plVar9 = (longlong *)((longlong)iVar8 * 0xe8 + *(longlong *)(param_1 + 0x420));
  local_138 = *plVar9;
  local_130 = (longlong *)plVar9[1];
  if (local_130 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_130 + 1) = (int)local_130[1] + 1;
    UNLOCK();
  }
  local_128 = (longlong *)plVar9[2];
  local_120 = plVar9[3];
  if (local_120 != 0) {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
    UNLOCK();
  }
  FUN_140b9a900(local_118,plVar9 + 4);
  local_58 = plVar9[0x1c];
  if (iVar8 < *(int *)(param_1 + 0x428)) {
    FUN_140be7890(param_1 + 0x420,uVar3 & 0xffffffff,1,1);
  }
  plVar9 = local_128;
  if ((local_138 != 0) && (local_128 != (longlong *)0x0)) {
    plVar6 = (longlong *)FName::FName(local_258,L"SPARK",1);
    plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9,local_250);
    if (*plVar9 == *plVar6) {
      if (local_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
      }
      local_288._0_4_ = (undefined4)local_138;
      local_288._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
      uStack_280._0_4_ = SUB84(local_130,0);
      uStack_280._4_4_ = (undefined4)((ulonglong)local_130 >> 0x20);
      uStack_3c = uStack_280._4_4_;
      uStack_40 = (undefined4)uStack_280;
      uStack_44 = local_288._4_4_;
      local_48 = (undefined4)local_288;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 9999;
      local_168 = 0;
      uStack_170 = 0;
      local_178 = 0;
      local_180 = 0;
      local_188 = 0;
      local_194 = 0;
      local_198 = 0xffffffff;
      local_1a0 = 0;
      local_1a8 = 0;
      local_1c0 = 0;
      local_1c8 = 0;
      local_1cc = 0;
      local_1d4 = 0;
      local_1d8 = 0;
      local_1e0 = 0;
      local_1e8 = 0;
      local_1f0 = &PTR_FUN_143f769a0;
      local_1f8 = 0;
      uStack_200 = 0;
      local_208 = 0;
      local_210 = 0;
      local_218 = &PTR_FUN_143f769a8;
      local_220 = 0xffffffff;
      plStack_228 = local_130;
      local_230 = local_138;
      local_238[0] = 0;
      uStack_280 = 0;
      local_288 = 0;
      FUN_1404c0750(&local_218,local_118);
      puVar2 = (undefined4 *)(param_1 + 800);
      local_160 = local_60;
      if (local_238 != puVar2) {
        if (*(char *)(param_1 + 0x418) != '\0') {
          *(undefined1 *)(param_1 + 0x418) = 0;
          FUN_140b9da20(puVar2);
        }
        FUN_140b9a9b0(puVar2,local_238);
        *(undefined1 *)(param_1 + 0x418) = 1;
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_150);
      FUN_1404bf650(&local_218);
      plVar9 = plStack_228;
    }
    else {
      local_268 = local_138;
      local_278 = FUN_140bd3620;
      uStack_270 = 0;
      local_260 = local_130;
      if (local_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = (int)local_130[1] + 1;
        UNLOCK();
      }
      uVar7 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                        (local_248,param_1,&local_278);
      FUN_140bb45f0(param_1,&local_268,local_118,uVar7);
      plVar9 = local_260;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_140b9dc10(&local_138);
    return 1;
  }
  FUN_140b9dc10(&local_138);
  return 0;
}



// FUNCTION 140be8c40 FUN_140be8c40 body=439 status=ok
// SIG undefined FUN_140be8c40(void)

void FUN_140be8c40(longlong *param_1,int param_2)

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
      plVar7 = (longlong *)(*param_1 + 0x18);
      do {
        FUN_1404bf650(plVar7 + 1);
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
        plVar3 = (longlong *)plVar7[-2];
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
        plVar7 = plVar7 + 0x1d;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<232,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar6 != 0) {
      plVar7 = (longlong *)(*param_1 + 0x18);
      do {
        FUN_1404bf650(plVar7 + 1);
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
        plVar3 = (longlong *)plVar7[-2];
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
        plVar7 = plVar7 + 0x1d;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140be8e00 FUN_140be8e00 body=17 status=ok
// SIG undefined FUN_140be8e00(void)

void FUN_140be8e00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4e0) == 0) {
    return;
  }
  return;
}



// FUNCTION 140be8e20 FUN_140be8e20 body=247 status=ok
// SIG undefined FUN_140be8e20(void)

void FUN_140be8e20(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    iVar2 = FUN_1428cf800(lVar3);
    if (iVar2 != 3) {
      if (param_1[0x3f] != 0) {
        lVar4 = AAIController::GetPerceptionComponent();
        if (lVar4 != 0) {
          ULandscapeSubsystem::RegisterActor(lVar4,param_2);
        }
      }
      UWorld::GetPlayerControllerIterator(lVar3,&local_18);
      while( true ) {
        if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar3 = FWeakObjectPtr::Get();
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
            FUN_14145e390(lVar3,param_2);
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}



// FUNCTION 140be8f20 ResizeForCopy body=130 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FOptionRowData,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x128,0);
    iVar3 = (int)(uVar1 / 0x128);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x128,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 140be8fb0 ResizeForCopy body=142 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FDCBlueprintSessionResult,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xe8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x1a7b9611a7b9611b) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xe8,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 140be9040 FUN_140be9040 body=295 status=ok
// SIG undefined FUN_140be9040(void)

void FUN_140be9040(void *param_1,int param_2)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x388);
  uVar5 = 4;
  if (4 < uVar4) {
    if ((*(int *)((longlong)param_1 + 0x38c) != 0) || (4 < uVar4)) {
      uVar5 = (longlong)(int)uVar4 + 0x10 + ((ulonglong)((longlong)(int)uVar4 * 3) >> 3);
    }
    uVar5 = FMemory::QuantizeSize(uVar5 * 0xe0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar5;
    lVar7 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    uVar6 = (uVar5 - lVar7 >> 1) + lVar7 >> 7;
    uVar5 = uVar6 & 0xffffffff;
    if ((int)uVar6 < (int)uVar4) {
      uVar5 = 0x7fffffff;
    }
  }
  uVar4 = (uint)uVar5;
  *(uint *)((longlong)param_1 + 0x38c) = uVar4;
  pvVar2 = *(void **)((longlong)param_1 + 0x380);
  if (uVar4 < 5) {
    if (pvVar2 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar2,(longlong)param_2 * 0xe0);
    pvVar2 = *(void **)((longlong)param_1 + 0x380);
    if (pvVar2 == (void *)0x0) {
      return;
    }
    lVar7 = 0;
  }
  else {
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
      if (uVar4 != 0) {
        pvVar2 = (void *)FMemory::Realloc(0,(longlong)(int)uVar4 * 0xe0,0);
        *(void **)((longlong)param_1 + 0x380) = pvVar2;
      }
      _guard_xfg_dispatch_icall_nop(pvVar2,param_1,(longlong)param_2 * 0xe0);
      return;
    }
    lVar7 = (longlong)(int)uVar4 * 0xe0;
  }
  uVar3 = FMemory::Realloc(pvVar2,lVar7,0);
  *(undefined8 *)((longlong)param_1 + 0x380) = uVar3;
  return;
}



// FUNCTION 140be9170 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FComponentOverrideRecord,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 7)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 7,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 7);
      }
      goto LAB_140be91cd;
    }
    if (iVar3 == 0) goto LAB_140be91cd;
  }
  iVar3 = iVar4;
LAB_140be91cd:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 7,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140be9200 ResizeShrink body=171 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FNamedOnlineSession,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

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
  if ((0x3fff < uVar2 * 0xe8) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0xe8,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x1a7b9611a7b9611b) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x1a7b9611a7b9611b) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 7);
      }
      goto LAB_140be927a;
    }
    if (iVar5 == 0) goto LAB_140be927a;
  }
  iVar5 = iVar6;
LAB_140be927a:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xe8,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140be92b0 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<280,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x118,0);
    iVar3 = (int)(uVar1 / 0x118);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x118,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140be9330 FUN_140be9330 body=1172 status=ok
// SIG undefined FUN_140be9330(void)

void FUN_140be9330(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined2 local_res8 [4];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78;
  undefined8 uStack_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  if (*(undefined2 **)(param_1 + 0x448) == (undefined2 *)0x0) {
    return;
  }
  uVar2 = **(undefined2 **)(param_1 + 0x448);
  local_res8[0] = uVar2;
  cVar3 = FUN_140bc2c90();
  if (cVar3 != '\0') {
    return;
  }
  if ((char)uVar2 != '\x02') {
LAB_140be977a:
    FUN_140ba4250(param_1,local_res8,0);
    return;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  puVar8 = puVar9 + *(int *)(param_1 + 0x40);
  for (; puVar9 != puVar8; puVar9 = puVar9 + 1) {
    lVar5 = FUN_142547b50(*puVar9,local_68);
    plVar6 = *(longlong **)(lVar5 + 0x10);
    local_b8 = *(undefined8 *)(lVar5 + 8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_68[0] = &PTR_FUN_143f740c8;
    local_b0 = plVar6;
    if (local_50 != 0) {
      FMemory::Free();
    }
    plVar7 = local_58;
    local_68[0] = &PTR_FUN_143f73d18;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_58 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = local_b0;
      if ((int)lVar5 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = local_b0;
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
          plVar6 = local_b0;
        }
      }
    }
    iVar4 = FUN_140bb88c0(param_1,&local_b8);
    plVar7 = local_b0;
    if (iVar4 != 2) {
      if (plVar6 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar6 = plVar6 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return;
      }
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return;
      }
      (**(code **)(*local_b0 + 8))(local_b0,1);
      return;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  lVar5 = FUN_142b45e90();
  cVar3 = APlayerCameraManager::ShouldTickIfViewportsOnly(*(undefined8 *)(lVar5 + 0x18));
  if (cVar3 != '\0') goto LAB_140be977a;
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    return;
  }
  plVar6 = (longlong *)UUGMenuManager::GetFadeHUD();
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  cVar3 = FUN_1406ab3a0(plVar6);
  if (cVar3 != '\0') {
    local_88 = FUN_140bd2a90;
    uStack_80 = 0;
    local_a8 = (longlong *)0x0;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_a0 = 3;
    local_a8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      plVar7[2] = (longlong)local_88;
      plVar7[3] = CONCAT44(uStack_7c,uStack_80);
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar5;
      *plVar7 = (longlong)&PTR_FUN_143fcff98;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x60))(plVar6,local_res10,&local_a8);
    *(undefined8 *)(param_1 + 0xfe8) = *puVar8;
    if (local_a0 != 0) {
      if (local_a8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_a8 + 0x28))(local_a8,0);
      if (local_a8 != (longlong *)0x0) {
        local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
      }
      local_a0 = 0;
    }
    if (local_a8 == (longlong *)0x0) {
      return;
    }
    FMemory::Free(local_a8);
    return;
  }
  FUN_142450450(param_1,&local_88);
  if (local_88 == (code *)0x0) goto LAB_140be9746;
  local_78 = FUN_140bd2a90;
  uStack_70 = (longlong *)((ulonglong)uStack_70._4_4_ << 0x20);
  local_98 = (longlong *)0x0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_90 = 3;
  local_98 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    plVar7[2] = (longlong)local_78;
    plVar7[3] = (longlong)uStack_70;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar5;
    *plVar7 = (longlong)&PTR_FUN_143fcff98;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x60))(plVar6,local_res18,&local_98);
  *(undefined8 *)(param_1 + 0xfe8) = *puVar8;
  if (local_90 == 0) {
LAB_140be96da:
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
    goto LAB_140be96da;
  }
  uStack_70 = (longlong *)CONCAT44(uStack_7c,uStack_80);
  local_78 = local_88;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
    UNLOCK();
  }
  FUN_140d2ae90(plVar6,&local_78);
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = uStack_70 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_70)(uStack_70);
      LOCK();
      piVar1 = (int *)((longlong)uStack_70 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_70 + 8))(uStack_70,1);
      }
    }
  }
LAB_140be9746:
  plVar6 = (longlong *)CONCAT44(uStack_7c,uStack_80);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar7 = plVar6 + 1;
  lVar5 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar5 != 1) {
    return;
  }
  (**(code **)*plVar6)(plVar6);
  LOCK();
  piVar1 = (int *)((longlong)plVar6 + 0xc);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 != 1) {
    return;
  }
  (**(code **)(*plVar6 + 8))(plVar6,1);
  return;
}



// FUNCTION 140be97d0 FUN_140be97d0 body=222 status=ok
// SIG undefined FUN_140be97d0(void)

void FUN_140be97d0(void)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  undefined8 local_10;
  
  plVar3 = (longlong *)UListView::OnItemSelectionChanged();
  plVar5 = (longlong *)*plVar3;
  plVar3 = plVar5 + (int)plVar3[1];
  for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
    if ((*plVar5 != 0) && (lVar1 = *(longlong *)(*plVar5 + 0x30), lVar1 != 0)) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140d1b4d0(lVar1);
        local_18 = 0;
        local_10 = 0;
        FUN_140d0dc60(lVar1,&local_18);
        if (local_18 != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar1 + 0xc80) != 0) {
          AK::MemoryMgr::StartProfileThreadUsage((long)*(longlong *)(lVar1 + 0xc80));
        }
      }
    }
  }
  return;
}



// FUNCTION 140be98b0 FUN_140be98b0 body=818 status=ok
// SIG undefined FUN_140be98b0(void)

void FUN_140be98b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined8 *local_68;
  undefined1 local_58 [32];
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x1148) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x10f8) < 1) {
    return;
  }
  FUN_140b9aca0(&local_88,*(undefined8 *)(param_1 + 0x10f0));
  FUN_140be7650(param_1 + 0x10f0,0,1,1);
  if ((local_68 == (undefined8 *)0x0) || (local_68[2] == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) && (local_88 != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    FUN_140be98b0(param_1);
    goto LAB_140be9b64;
  }
  plVar6 = (longlong *)(param_1 + 0x1100);
  if (&local_88 != plVar6) {
    if (*(char *)(param_1 + 0x1148) != '\0') {
      *(undefined1 *)(param_1 + 0x1148) = 0;
      FUN_140b9db30(plVar6);
    }
    FUN_140b9aca0(plVar6,&local_88);
    *(undefined1 *)(param_1 + 0x1148) = 1;
  }
  local_38 = local_88;
  local_30 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  lVar4 = FUN_14244c070(param_1,&local_38);
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140cebd40(lVar4,local_78);
    }
  }
  if ((*(longlong *)(param_1 + 0x1f8) == 0) ||
     (plVar6 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar6 == (longlong *)0x0))
  goto LAB_140be9b64;
  uVar9 = 0;
  uStack_20 = 0;
  local_28 = FUN_140bdb970;
  local_a8 = (longlong *)0x0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_a0 = 3;
  local_a8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144060be0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_1);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_1c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar4;
    *plVar7 = (longlong)&PTR_FUN_144060c28;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x140))(plVar6,local_res8,&local_a8);
  *(undefined8 *)(param_1 + 0x1128) = *puVar8;
  if (local_a0 == 0) {
LAB_140be9add:
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  else if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x28))(local_a8,0);
    if (local_a8 != (longlong *)0x0) {
      local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
    }
    local_a0 = 0;
    goto LAB_140be9add;
  }
  if (local_68 != (undefined8 *)0x0) {
    uVar9 = local_68[2];
  }
  local_98 = local_88;
  local_90 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  FUN_140d58bd0(plVar6,&local_98,local_78,uVar9);
  plVar6 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_90 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_90)(local_90);
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
LAB_140be9b64:
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(local_58);
  if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,1);
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_80 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 140be9bf0 FUN_140be9bf0 body=644 status=ok
// SIG undefined FUN_140be9bf0(void)

void FUN_140be9bf0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  longlong *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_30 [24];
  
  if (*(char *)(param_1 + 0x588) != '\0') {
    *(undefined1 *)(param_1 + 0x5a0) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x1190) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x1158) < 1) {
    return;
  }
  FUN_140b9ae60(&local_48,*(undefined8 *)(param_1 + 0x1150));
  FUN_140be7780(param_1 + 0x1150,0,1,1);
  if (local_48 == 0) {
    FUN_140be9bf0(param_1);
    goto LAB_140be9e10;
  }
  plVar3 = (longlong *)(param_1 + 0x1160);
  if (&local_48 != plVar3) {
    if (*(char *)(param_1 + 0x1190) != '\0') {
      *(undefined1 *)(param_1 + 0x1190) = 0;
      FEOSUserInterface_CandidateEOSAccount::~FEOSUserInterface_CandidateEOSAccount(plVar3);
    }
    FUN_140b9ae60(plVar3,&local_48);
    *(undefined1 *)(param_1 + 0x1190) = 1;
  }
  if ((*(longlong *)(param_1 + 0x1f8) == 0) ||
     (plVar3 = (longlong *)UUGMenuManager::GetFadeHUD(), plVar3 == (longlong *)0x0))
  goto LAB_140be9e10;
  uStack_50 = (longlong *)((ulonglong)uStack_50 & 0xffffffff00000000);
  local_68 = (longlong *)0x0;
  local_58 = FUN_140bdbbd0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_144089a20;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_58._4_4_;
    *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_50._4_4_;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_144089a68;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar3 + 0xe0))(plVar3,local_res8,&local_68);
  *(undefined8 *)(param_1 + 0x1170) = *puVar6;
  if (local_60 == 0) {
LAB_140be9da1:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
    goto LAB_140be9da1;
  }
  uStack_50 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_140d589a0(plVar3,&local_58);
  plVar3 = uStack_50;
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = uStack_50 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_50)(uStack_50);
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
LAB_140be9e10:
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(local_30);
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140be9e80 FUN_140be9e80 body=1256 status=ok
// SIG undefined FUN_140be9e80(void)

/* WARNING: Removing unreachable block (ram,0x000140bea30d) */

void FUN_140be9e80(longlong *param_1,undefined8 *param_2,void **param_3,longlong param_4,
                  longlong **param_5)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Src;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  short *psVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  bool bVar17;
  int iVar18;
  undefined4 local_res8 [2];
  longlong *local_d8;
  int local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  
  bVar17 = false;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 0x27d) & 0xfd) != 0) {
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
    return;
  }
  if (param_4 == 0) {
    local_58 = *param_2;
    local_50 = param_2[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_140bb29c0(param_5,&local_58,param_3,0);
    plVar5 = (longlong *)param_2[1];
    goto joined_r0x000140bea322;
  }
  lVar10 = (**(code **)(*param_1 + 0x148))();
  puVar16 = local_c8;
  if ((lVar10 == 0) || ((*(uint *)(lVar10 + 0x830) >> 2 & 1) == 0)) {
LAB_140be9fb2:
    bVar7 = false;
  }
  else {
    local_c8 = (undefined2 *)0x0;
    local_c0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    puVar16 = local_c8;
    FGenericPlatformString::Memcpy(local_c8,&DAT_1443179c0,0xc);
    puVar14 = &DAT_143f3eda8;
    if ((int)local_c0 != 0) {
      puVar14 = puVar16;
    }
    if (*(int *)(param_3 + 1) == 0) {
      psVar11 = &DAT_143f3eda8;
    }
    else {
      psVar11 = *param_3;
    }
    bVar17 = true;
    lVar10 = (longlong)puVar14 - (longlong)psVar11;
    do {
      sVar3 = *psVar11;
      sVar4 = *(short *)((longlong)psVar11 + lVar10);
      if (sVar3 != sVar4) break;
      psVar11 = psVar11 + 1;
    } while (sVar4 != 0);
    if (sVar3 == sVar4) goto LAB_140be9fb2;
    bVar7 = true;
  }
  if ((bVar17) && (puVar16 != (undefined2 *)0x0)) {
    FMemory::Free(puVar16);
  }
  if (bVar7) {
    local_48 = *param_2;
    local_40 = param_2[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    FUN_140bb29c0(param_5,&local_48,param_3,0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
    return;
  }
  iVar18 = 0;
  if (0 < (int)param_1[0x21f]) {
    plVar5 = param_1 + 0x21e;
    lVar10 = 0;
    do {
      cVar8 = (*(code *)**(undefined8 **)*param_2)
                        ((undefined8 *)*param_2,*(undefined8 *)(lVar10 + *plVar5));
      if (cVar8 != '\0') {
        if (*(int *)(param_3 + 1) == 0) {
          puVar16 = &DAT_143f3eda8;
        }
        else {
          puVar16 = *param_3;
        }
        if (*(int *)(*plVar5 + 0x18 + lVar10) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = *(undefined2 **)(*plVar5 + 0x10 + lVar10);
        }
        iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar16);
        if (iVar9 == 0) {
          lVar6 = *(longlong *)(*plVar5 + 0x20 + lVar10);
          lVar12 = 0;
          if (lVar6 != 0) {
            lVar12 = *(longlong *)(lVar6 + 0x10);
          }
          if (lVar12 == param_4) {
            if (iVar18 != -1) goto LAB_140bea256;
            break;
          }
        }
      }
      iVar18 = iVar18 + 1;
      lVar10 = lVar10 + 0x48;
    } while (iVar18 < (int)param_1[0x21f]);
  }
  local_60 = (longlong *)param_2[1];
  local_b8 = *param_2;
  local_b0 = (longlong *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 2;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_68 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_b0,&local_60);
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (&local_a8 != param_3) {
    iVar18 = *(int *)(param_3 + 1);
    _Src = *param_3;
    local_a0 = CONCAT44(local_a0._4_4_,iVar18);
    if ((iVar18 == 0) && (local_a0._4_4_ == 0)) {
      local_a0 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar18);
      _guard_xfg_dispatch_icall_nop(local_a8,_Src,(longlong)iVar18 * 2);
    }
  }
  if (local_98 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)operator_new(0x18);
    puVar15 = (undefined8 *)0x0;
    if (puVar13 != (undefined8 *)0x0) {
      FGCObject::FGCObject(puVar13);
      puVar13[2] = param_4;
      *puVar13 = &PTR__scalar_deleting_destructor__1440f8f50;
      puVar15 = puVar13;
    }
  }
  else {
    local_98[2] = param_4;
    puVar15 = local_98;
  }
  local_98 = puVar15;
  iVar18 = (int)param_1[0x21f];
  *(int *)(param_1 + 0x21f) = iVar18 + 1;
  if (*(int *)((longlong)param_1 + 0x10fc) < iVar18 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0x21e,iVar18);
  }
  FUN_140b9aca0(param_1[0x21e] + (longlong)iVar18 * 0x48,&local_b8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_88);
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)*local_98)(local_98,1);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (iVar18 != -1) {
LAB_140bea256:
    lVar10 = param_1[0x21e] + (longlong)iVar18 * 0x48;
    if ((*(int *)(param_5 + 1) != 0) && (plVar5 = *param_5, plVar5 != (longlong *)0x0)) {
      local_d8 = (longlong *)0x0;
      local_d0 = 0;
      if (param_5 != &local_d8) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_d8);
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar10 + 0x30,1);
      if ((local_d0 != 0) && (local_d8 != (longlong *)0x0)) {
        (**(code **)(*local_d8 + 0x20))(local_d8,local_res8);
      }
      iVar18 = *(int *)(lVar10 + 0x38);
      *(int *)(lVar10 + 0x38) = iVar18 + 1;
      if (*(int *)(lVar10 + 0x3c) < iVar18 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar10 + 0x30,iVar18);
      }
      puVar15 = (undefined8 *)((longlong)iVar18 * 0x10 + *(longlong *)(lVar10 + 0x30));
      *puVar15 = 0;
      *puVar15 = local_d8;
      local_d8 = (longlong *)0x0;
      *(int *)(puVar15 + 1) = local_d0;
      local_d0 = 0;
    }
  }
  FUN_140be98b0(param_1);
  plVar5 = (longlong *)param_2[1];
joined_r0x000140bea322:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140bea370 FUN_140bea370 body=698 status=ok
// SIG undefined FUN_140bea370(void)

/* WARNING: Removing unreachable block (ram,0x000140bea5c1) */

void FUN_140bea370(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((*(byte *)(param_1 + 0x13e8) & 0xfd) != 0) {
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
    return;
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1158)) {
    do {
      cVar5 = (*(code *)**(undefined8 **)*param_2)();
      if (cVar5 != '\0') {
        if (iVar8 != -1) goto LAB_140bea513;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x1158));
  }
  local_60 = (longlong *)param_2[1];
  local_58 = *param_2;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 2;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_68 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&local_60);
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x1158);
  *(int *)(param_1 + 0x1158) = iVar8 + 1;
  if (*(int *)(param_1 + 0x115c) < iVar8 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x1150),iVar8);
  }
  FUN_140b9ae60((longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x1150),&local_58);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_40);
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (iVar8 != -1) {
LAB_140bea513:
    lVar7 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x1150);
    if ((*(int *)(param_3 + 1) != 0) && (plVar4 = *param_3, plVar4 != (longlong *)0x0)) {
      local_78 = (longlong *)0x0;
      local_70 = 0;
      if (param_3 != &local_78) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_78);
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x18,1);
      if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
        (**(code **)(*local_78 + 0x20))(local_78,local_res8);
      }
      iVar8 = *(int *)(lVar7 + 0x20);
      *(int *)(lVar7 + 0x20) = iVar8 + 1;
      if (*(int *)(lVar7 + 0x24) < iVar8 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x18,iVar8);
      }
      puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar7 + 0x18));
      *puVar6 = 0;
      *puVar6 = local_78;
      local_78 = (longlong *)0x0;
      *(int *)(puVar6 + 1) = local_70;
      local_70 = 0;
    }
  }
  FUN_140be9bf0(param_1);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 140bea630 FUN_140bea630 body=503 status=ok
// SIG undefined FUN_140bea630(void)

void FUN_140bea630(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_2 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x4f0);
    lVar9 = (longlong)*(int *)(param_1 + 0x4f8) * 0x118 + lVar10;
    for (; lVar10 != lVar9; lVar10 = lVar10 + 0x118) {
      if ((*(longlong **)(param_2 + 0x48) != (longlong *)0x0) &&
         (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x390))(), cVar5 != '\0')) {
        plVar8 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x98);
        plVar1 = plVar8 + *(int *)(*(longlong *)(param_2 + 0x48) + 0xa0);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          lVar6 = *plVar8;
          if (lVar6 != 0) {
            if ((*(longlong **)(lVar6 + 0x160) == (longlong *)0x0) ||
               (cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x20))(), cVar5 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if ((*(longlong **)(param_3 + 0x10) == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x20))(), cVar5 == '\0')) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) goto LAB_140bea71d;
              bVar3 = true;
            }
            else {
LAB_140bea71d:
              bVar3 = false;
            }
            if ((*(longlong **)(lVar6 + 0x160) == (longlong *)0x0) ||
               (cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x20))(), cVar5 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
LAB_140bea75c:
              if ((bVar3) &&
                 (cVar5 = (**(code **)**(undefined8 **)(param_3 + 0x10))
                                    (*(undefined8 **)(param_3 + 0x10),*(undefined8 *)(lVar6 + 0x160)
                                    ), cVar5 != '\0')) goto LAB_140bea774;
              bVar3 = false;
            }
            else {
              if ((*(longlong **)(param_3 + 0x10) == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0x20))(), cVar5 == '\0')) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) goto LAB_140bea75c;
LAB_140bea774:
              bVar3 = true;
            }
            if (bVar3) {
              lVar6 = FUN_1425bd330(lVar6,6);
              if (lVar6 != 0) {
                lVar7 = FUN_1404e6fc0();
                iVar2 = *(int *)(lVar7 + 0x90);
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
                    lVar7 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  FUN_140b971f0(lVar6,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0x1c,lVar10);
                }
              }
              break;
            }
          }
        }
      }
    }
    FUN_140bf4500(param_1);
  }
  return;
}



// FUNCTION 140bea830 FUN_140bea830 body=125 status=ok
// SIG undefined FUN_140bea830(void)

void FUN_140bea830(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
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
      TBaseMulticastDelegate<void>::Broadcast(lVar2 + 0xa80);
      return;
    }
  }
  return;
}



// FUNCTION 140bea8b0 FUN_140bea8b0 body=514 status=ok
// SIG undefined FUN_140bea8b0(void)

void FUN_140bea8b0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_res18 [8];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  lVar4 = FUN_140bb6170();
  if (lVar4 == 0) {
    lVar4 = FUN_140bb7870(param_1);
    if (lVar4 == 0) {
      FUN_142d6f380(param_1,param_2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140beaa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x388))(param_1,param_2,1);
    return;
  }
  if (param_1[0x15d] != 0) {
    uStack_40 = 0;
    local_48 = FUN_140bd0570;
    local_58 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_50 = 3;
    local_58 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_144089a20;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_48._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_40;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_3c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_144089a68;
    }
    plVar5 = (longlong *)
             (**(code **)(*(longlong *)param_1[0x15d] + 0xf8))
                       ((longlong *)param_1[0x15d],local_res18,&local_58);
    param_1[0x1ec] = *plVar5;
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_140bea9b7;
      (**(code **)(*local_58 + 0x28))(local_58,0);
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
      }
      local_50 = 0;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
LAB_140bea9b7:
  local_30 = param_1[0x8c];
  local_28 = (longlong *)param_1[0x8d];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_20 = 0;
  local_38 = &PTR_FUN_143f740c8;
  local_18 = 0;
  uVar6 = FUN_140bb6170(param_1);
  FUN_1404df4b0(uVar6,&local_38);
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 140beaac0 FUN_140beaac0 body=400 status=ok
// SIG undefined FUN_140beaac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140beaac0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
  char local_64;
  longlong local_58;
  longlong local_50;
  undefined8 local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_14244f490(param_1,0);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140beab31;
  }
  lVar2 = 0;
LAB_140beab31:
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x128) == '\x03')) {
    local_98 = FUN_1413ffe00();
    if (local_98 != 0) {
      lVar3 = FUN_1413ffe00();
      lVar2 = local_98;
      do {
        if (lVar2 == lVar3) goto LAB_140beab80;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
    local_98 = 0;
LAB_140beab80:
    local_88[0] = 5;
    local_30 = '\0';
    local_90 = uVar4;
    FUN_14044bc80(&local_80,&local_90,&local_98);
    FUN_14045a130(local_88);
    while (local_64 == '\0') {
      if (local_58 != 0) {
        FUN_140e281c0(local_58,param_2,param_3);
        break;
      }
      FUN_14045a130(local_88);
    }
    if (local_30 != '\0') {
      local_30 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_80,local_38);
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}


