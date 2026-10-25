// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142deefb0 FUN_142deefb0 body=82 status=ok
// SIG undefined FUN_142deefb0(void)

bool FUN_142deefb0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x03') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x70);
    return lVar2 != 0;
  }
  if (cVar1 == '\x05') {
    if ((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
      return false;
    }
  }
  else if (cVar1 == '\x06') {
    return *(longlong *)(param_1 + 0x68) != 0;
  }
  return true;
}



// FUNCTION 142def010 FUN_142def010 body=45 status=ok
// SIG undefined FUN_142def010(void)

void FUN_142def010(undefined8 param_1,undefined4 param_2)

{
  undefined1 local_28 [40];
  
  FUN_142de7970(param_1,local_28);
  FUN_142c4a520(local_28,param_2);
  return;
}



// FUNCTION 142def040 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8
UEnvQueryGenerator_SinglePoint::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x12;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"NOT IMPLEMENTED!!",0x24);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142def0b0 FUN_142def0b0 body=188 status=ok
// SIG undefined FUN_142def0b0(void)

void FUN_142def0b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x39c) = *(int *)(param_1 + 0x39c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x39c);
  iVar5 = *(int *)(param_1 + 0x390) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x388);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_142def123:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_142def123;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x39c);
  }
  *(int *)(param_1 + 0x39c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x388),0);
    return;
  }
  return;
}



// FUNCTION 142def170 FUN_142def170 body=67 status=ok
// SIG undefined FUN_142def170(void)

void FUN_142def170(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = *param_4;
  local_14 = *(undefined4 *)(param_4 + 1);
  local_10 = param_5;
  local_28 = param_2;
  local_20 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x368,&local_28);
  return;
}



// FUNCTION 142def1c0 FUN_142def1c0 body=124 status=ok
// SIG undefined FUN_142def1c0(void)

undefined8 FUN_142def1c0(undefined8 *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined1 *)*param_1;
    puVar1 = puVar3 + (longlong)*(int *)(param_1 + 1) * 0x18;
    while( true ) {
      if (puVar3 == puVar1) {
        return 1;
      }
      cVar2 = FUN_142def240(param_2,*puVar3,puVar3[1],*(undefined8 *)(puVar3 + 8),
                            *(undefined4 *)(puVar3 + 0x10));
      if (cVar2 == '\0') break;
      puVar3 = puVar3 + 0x18;
    }
  }
  return 0;
}



// FUNCTION 142def240 FUN_142def240 body=514 status=ok
// SIG undefined FUN_142def240(void)

undefined8 FUN_142def240(longlong param_1,char param_2,char param_3,longlong *param_4,uint param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    if (param_3 != '\0') {
      if (param_3 == '\x01') {
        uVar4 = 0;
        if (param_2 == '\0') {
          if (param_5 != 0) {
            do {
              if (*param_4 != 0) {
                plVar3 = *(longlong **)(param_1 + 0x1a0);
                plVar1 = plVar3 + *(int *)(param_1 + 0x1a8);
                for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
                  if (*plVar3 == *param_4) {
                    return 0;
                  }
                }
              }
              uVar4 = uVar4 + 1;
              param_4 = param_4 + 1;
            } while (uVar4 < param_5);
            return 1;
          }
        }
        else if (param_5 != 0) {
          while ((*param_4 == 0 || (cVar2 = FUN_142de4c00(param_1,param_4), cVar2 == '\0'))) {
            uVar4 = uVar4 + 1;
            param_4 = param_4 + 1;
            if (param_5 <= uVar4) {
              return 1;
            }
          }
          return 0;
        }
      }
      else {
        if (param_3 != '\x02') {
          return 0;
        }
        uVar4 = 0;
        if (param_2 == '\0') {
          if (param_5 != 0) {
            do {
              if (*param_4 != 0) {
                plVar3 = *(longlong **)(param_1 + 0x1a0);
                plVar1 = plVar3 + *(int *)(param_1 + 0x1a8);
                while( true ) {
                  if (plVar3 == plVar1) {
                    return 0;
                  }
                  if (*plVar3 == *param_4) break;
                  plVar3 = plVar3 + 1;
                }
              }
              uVar4 = uVar4 + 1;
              param_4 = param_4 + 1;
            } while (uVar4 < param_5);
            return 1;
          }
        }
        else if (param_5 != 0) {
          do {
            if ((*param_4 != 0) && (cVar2 = FUN_142de4c00(param_1,param_4), cVar2 == '\0')) {
              return 0;
            }
            uVar4 = uVar4 + 1;
            param_4 = param_4 + 1;
          } while (uVar4 < param_5);
        }
      }
      return 1;
    }
    uVar4 = 0;
    if (param_2 == '\0') {
      if (param_5 != 0) {
        do {
          if (*param_4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x1a0);
            plVar1 = plVar3 + *(int *)(param_1 + 0x1a8);
            for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
              if (*plVar3 == *param_4) {
                return 1;
              }
            }
          }
          uVar4 = uVar4 + 1;
          param_4 = param_4 + 1;
        } while (uVar4 < param_5);
      }
    }
    else if (param_5 != 0) {
      do {
        if ((*param_4 != 0) && (cVar2 = FUN_142de4c00(param_1,param_4), cVar2 != '\0')) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        param_4 = param_4 + 1;
      } while (uVar4 < param_5);
    }
  }
  return 0;
}



// FUNCTION 142def450 FUN_142def450 body=1399 status=ok
// SIG undefined FUN_142def450(void)

undefined8 FUN_142def450(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong *plVar15;
  byte local_res8 [8];
  byte local_res10 [8];
  longlong *local_res20;
  char local_68;
  char local_67 [3];
  float local_64;
  undefined4 local_60 [10];
  
  local_res8[0] = *(byte *)(param_1 + 1);
  plVar4 = (longlong *)param_2[1];
  local_res20 = param_4;
  if ((byte *)plVar4[1] < (byte *)*plVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8);
  }
  else {
    local_res8[0] = *(byte *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(uint)local_res8[0]) {
    *(uint *)(param_1 + 1) = (uint)local_res8[0];
    iVar11 = (uint)local_res8[0] - iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uint)local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar3);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x18);
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x14) = 0;
      puVar1 = puVar1 + 3;
    }
  }
  else if ((int)(uint)local_res8[0] < iVar3) {
    TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
              (param_1,local_res8[0],iVar3 - (uint)local_res8[0],1);
  }
  plVar15 = (longlong *)*param_1;
  plVar4 = plVar15 + (longlong)(int)param_1[1] * 3;
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    if (plVar15 != plVar4) {
      pfVar10 = (float *)(plVar15 + 2);
      do {
        plVar5 = (longlong *)param_2[1];
        uVar14 = (ulonglong)local_res20 >> 8;
        local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffffffffff00);
        if ((undefined1 *)plVar5[1] < (undefined1 *)*plVar5 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_res20,1);
        }
        else {
          local_res20 = (longlong *)CONCAT71((int7)uVar14,*(undefined1 *)*plVar5);
          *plVar5 = *plVar5 + 1;
        }
        local_res10[0] = 0;
        (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
        if (local_res10[0] == 0) {
          pfVar12 = *(float **)param_2[1];
          if ((float *)((undefined8 *)param_2[1])[1] < pfVar12 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,pfVar10,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,pfVar10,4);
            }
          }
          else {
            *pfVar10 = *pfVar12;
            *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
          }
        }
        else {
          local_64 = 0.0;
          (**(code **)(*param_2 + 0x68))(param_2,&local_64);
          *pfVar10 = (float)(uint)local_64;
        }
        *(byte *)(pfVar10 + 1) = (byte)local_res20 & 0x7f;
        if ((char)(byte)local_res20 < '\0') {
          local_res10[0] = 0;
          (**(code **)(*param_2 + 0x58))(param_2,local_res10,4);
          fVar2 = pfVar10[-2];
          fVar7 = (float)(uint)local_res10[0];
          fVar8 = (float)(uint)local_res10[0];
          if ((int)fVar2 < (int)fVar7) {
            pfVar10[-2] = (float)(uint)local_res10[0];
            if ((int)pfVar10[-1] < (int)(uint)local_res10[0]) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar15 + (longlong)(int)fVar2 * 4),0,
                       (longlong)((int)fVar8 - (int)fVar2) << 2);
          }
          else if (((int)fVar7 < (int)fVar2) && (fVar7 != fVar2)) {
            pfVar10[-2] = fVar8;
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar15);
          }
          pfVar13 = (float *)*plVar15;
          pfVar12 = pfVar13 + (int)pfVar10[-2];
          for (; pfVar13 != pfVar12; pfVar13 = pfVar13 + 1) {
            local_67[0] = '\0';
            (**(code **)(*param_2 + 0x58))(param_2,local_67,1);
            if (local_67[0] == '\0') {
              pfVar6 = *(float **)param_2[1];
              if ((float *)((undefined8 *)param_2[1])[1] < pfVar6 + 1) {
                (**(code **)(*param_2 + 0x50))(param_2,pfVar13,4);
                if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_2,pfVar13,4);
                }
              }
              else {
                *pfVar13 = *pfVar6;
                *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
              }
            }
            else {
              local_64 = 0.0;
              (**(code **)(*param_2 + 0x68))(param_2,&local_64);
              *pfVar13 = (float)(uint)local_64;
            }
          }
        }
        plVar15 = plVar15 + 3;
        pfVar10 = pfVar10 + 6;
      } while (plVar15 != plVar4);
    }
  }
  else if (plVar15 != plVar4) {
    pfVar10 = (float *)(plVar15 + 2);
    do {
      local_67[0] = *(char *)(pfVar10 + -2);
      local_res10[0] = 0;
      if (local_67[0] != '\0') {
        local_res10[0] = 0x80;
      }
      local_res10[0] = local_res10[0] | *(byte *)(pfVar10 + 1);
      plVar5 = (longlong *)param_2[1];
      if ((byte *)plVar5[1] < (byte *)*plVar5 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
      }
      else {
        local_res10[0] = *(byte *)*plVar5;
        *plVar5 = *plVar5 + 1;
      }
      fVar2 = *pfVar10;
      if ((fVar2 < 0.0) || ((float)((int)ROUND(fVar2 + fVar2 + 0.5) >> 1) != fVar2)) {
        local_68 = '\0';
      }
      else {
        local_68 = '\x01';
      }
      (**(code **)(*param_2 + 0x58))(param_2,&local_68,1);
      if (local_68 == '\0') {
        pfVar12 = *(float **)param_2[1];
        if ((float *)((undefined8 *)param_2[1])[1] < pfVar12 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,pfVar10,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,pfVar10,4);
          }
        }
        else {
          *pfVar10 = *pfVar12;
          *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
        }
      }
      else {
        local_64 = (float)(longlong)*pfVar10;
        (**(code **)(*param_2 + 0x68))(param_2,&local_64);
      }
      if (local_67[0] != '\0') {
        (**(code **)(*param_2 + 0x58))(param_2,local_67,4);
        uVar9 = 0;
        pfVar12 = (float *)*plVar15;
        uVar14 = (longlong)(int)pfVar10[-2] & 0x3fffffffffffffff;
        if (pfVar12 + (int)pfVar10[-2] < pfVar12) {
          uVar14 = uVar9;
        }
        if (uVar14 != 0) {
          do {
            local_64 = *pfVar12;
            if ((local_64 < 0.0) ||
               ((float)((int)ROUND(local_64 + local_64 + 0.5) >> 1) != local_64)) {
              local_68 = '\0';
            }
            else {
              local_68 = '\x01';
            }
            (**(code **)(*param_2 + 0x58))(param_2,&local_68,1);
            if (local_68 == '\0') {
              plVar5 = (longlong *)param_2[1];
              if ((float *)plVar5[1] < (float *)*plVar5 + 1) {
                (**(code **)(*param_2 + 0x50))(param_2,&local_64,4);
                if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_2,&local_64,4);
                }
              }
              else {
                local_64 = *(float *)*plVar5;
                *plVar5 = *plVar5 + 4;
              }
            }
            else {
              local_60[0] = (undefined4)(longlong)local_64;
              (**(code **)(*param_2 + 0x68))(param_2,local_60);
            }
            pfVar12 = pfVar12 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar14);
        }
      }
      plVar15 = plVar15 + 3;
      pfVar10 = pfVar10 + 6;
    } while (plVar15 != plVar4);
    *(undefined1 *)local_res20 = 1;
    return 1;
  }
  *(undefined1 *)param_4 = 1;
  return 1;
}



// FUNCTION 142def9d0 FUN_142def9d0 body=271 status=ok
// SIG undefined FUN_142def9d0(void)

void FUN_142def9d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *local_18;
  int local_10;
  
  thunk_FUN_1428f9800();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*(longlong **)(param_2 + 0x118) != (longlong *)0x0) {
      lVar1 = **(longlong **)(param_2 + 0x118);
      if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
        lVar1 = (**(code **)(lVar1 + 0x670))();
        if (lVar1 != 0) {
          uVar2 = FUN_142c98860(param_1 + 0x40,*(undefined8 *)(lVar1 + 0x488));
          FUN_142d408e0(*(undefined8 *)(param_1 + 0x38),lVar1,uVar2,1,0);
        }
      }
      else {
        lVar1 = (**(code **)(lVar1 + 0x148))();
        if (lVar1 != 0) {
          UWorld::GetPlayerControllerIterator(lVar1,&local_18);
          for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
            lVar1 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
            if (lVar1 != 0) {
              uVar2 = FUN_142c98860(param_1 + 0x40,*(undefined8 *)(lVar1 + 0x488));
              FUN_142d408e0(*(undefined8 *)(param_1 + 0x38),lVar1,uVar2,1,0);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142defae0 FUN_142defae0 body=172 status=ok
// SIG undefined FUN_142defae0(void)

void FUN_142defae0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *local_18;
  int local_10;
  
  thunk_FUN_1428f9860();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*(longlong **)(param_2 + 0x118) != (longlong *)0x0) {
      lVar1 = **(longlong **)(param_2 + 0x118);
      if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
        lVar1 = (**(code **)(lVar1 + 0x670))();
        if (lVar1 != 0) {
          FUN_142d49f50(*(undefined8 *)(param_1 + 0x38),lVar1);
        }
      }
      else {
        lVar1 = (**(code **)(lVar1 + 0x148))();
        if (lVar1 != 0) {
          UWorld::GetPlayerControllerIterator(lVar1,&local_18);
          for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
            uVar2 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
            FUN_142d49f50(*(undefined8 *)(param_1 + 0x38),uVar2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142defb90 FUN_142defb90 body=228 status=ok
// SIG undefined FUN_142defb90(void)

void FUN_142defb90(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_142343b00();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar4 = lVar1;
    if (bVar2) goto LAB_142defbeb;
  }
  lVar4 = 0;
LAB_142defbeb:
  *(longlong *)(param_1 + 0x1e0) = lVar4;
  if ((lVar4 == 0) && (lVar1 != 0)) {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(lVar1 + 0x490);
    }
  }
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar3 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar3);
  }
  return;
}



// FUNCTION 142defcd0 OnDeleteNotificationSuccess body=31 status=ok
// SIG undefined OnDeleteNotificationSuccess(void)

void UBackendProxyComponent::OnDeleteNotificationSuccess(longlong param_1)

{
  FUN_142344780();
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



// FUNCTION 142defd00 FUN_142defd00 body=48 status=ok
// SIG undefined FUN_142defd00(void)

void FUN_142defd00(longlong param_1)

{
  UObject::PostLoad();
  FUN_142dedc20(param_1 + 0x48,param_1 + 0x70);
  FUN_142dedc20(param_1 + 0x58,param_1 + 0x90);
  return;
}



// FUNCTION 142defd50 FUN_142defd50 body=275 status=ok
// SIG undefined FUN_142defd50(void)

void FUN_142defd50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined6 uStack_e;
  
  if (*(char *)(param_1 + 3) == '\x03') {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar3 = UAnimNotifyState::GetPrivateStaticClass();
      lVar1 = *(longlong *)(param_1 + 0x10);
      lVar4 = lVar1;
      if (lVar1 != 0) {
        while (lVar4 != lVar3) {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          if (lVar4 == 0) {
            return;
          }
        }
        if (lVar1 != 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(longlong *)(param_1 + 0x48) = lVar1;
          cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x70);
          if (cVar2 == '\0') {
            *(undefined1 *)(param_1 + 3) = 7;
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x78);
            *(undefined4 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(ulonglong *)(param_1 + 0x60) = CONCAT62(uStack_e,0xff00);
            *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x74) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
        }
      }
    }
  }
  else if ((*(char *)(param_1 + 3) == '\x04') && (*(longlong *)(param_1 + 0x18) != 0)) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 3) = 7;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(ulonglong *)(param_1 + 0x60) = CONCAT62(uStack_e,0xff00);
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  return;
}



// FUNCTION 142defe70 FUN_142defe70 body=10 status=ok
// SIG undefined FUN_142defe70(void)

void FUN_142defe70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142defe73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x430))();
  return;
}



// FUNCTION 142defe80 FUN_142defe80 body=554 status=ok
// SIG undefined FUN_142defe80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142defe80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_90 [32];
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    return 0;
  }
  *(longlong *)(param_1 + 0x4f8) = *(longlong *)(param_1 + 0x1e0);
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar2 = 0;
  *(longlong *)(param_1 + 0x4f0) = lVar1;
  local_b0 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_98 = 0;
  local_a8 = 0x10000;
  local_a0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a4 = 0;
  local_94 = 0x101;
  local_9c = 0;
  local_a2 = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x528) = 0x10000;
  *(undefined2 *)(param_1 + 0x52c) = 0;
  *(undefined1 *)(param_1 + 0x52e) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  *(undefined1 *)(param_1 + 0x534) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(undefined2 *)(param_1 + 0x53c) = 0x101;
  if ((undefined1 *)(param_1 + 0x540) != local_90) {
    _guard_xfg_dispatch_icall_nop((undefined1 *)(param_1 + 0x540),local_90,0x20);
    lVar1 = lVar2;
    uVar3 = 0;
    uVar4 = 0;
    if (*(longlong *)(param_1 + 0x560) != 0) {
      FMemory::Free();
      lVar1 = local_70;
      lVar2 = local_50;
      uVar3 = (undefined4)local_68;
      uVar4 = local_68._4_4_;
    }
    *(longlong *)(param_1 + 0x560) = lVar1;
    *(undefined4 *)(param_1 + 0x568) = uVar3;
    *(undefined4 *)(param_1 + 0x56c) = uVar4;
  }
  local_68 = 0;
  local_70 = 0;
  if ((undefined1 *)(param_1 + 0x570) == local_60) {
    if (lVar2 == 0) goto LAB_142df0049;
    FMemory::Free(lVar2);
    lVar1 = local_70;
  }
  else {
    if (lVar2 == 0) {
      _guard_xfg_dispatch_icall_nop((undefined1 *)(param_1 + 0x570),local_60,0x10);
    }
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0x580) != 0) {
      FMemory::Free();
      lVar1 = local_70;
      lVar2 = local_50;
    }
    *(longlong *)(param_1 + 0x580) = lVar2;
    *(undefined4 *)(param_1 + 0x588) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x58c) = local_48._4_4_;
    local_48 = 0;
    local_50 = 0;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
LAB_142df0049:
  FUN_142de7f50(param_1,(undefined8 *)(param_1 + 0x518));
  FUN_142deca90(param_1,param_1 + 0x500,param_1 + 0x50c);
  return 2;
}



// FUNCTION 142df00b0 FUN_142df00b0 body=794 status=ok
// SIG undefined FUN_142df00b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142df00b0(longlong *param_1,longlong *param_2,longlong param_3,byte param_4,byte param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [32];
  byte local_a8 [8];
  int local_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  byte local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8[0] = param_4;
  cVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_4);
  if (cVar2 == '\0') {
    lVar6 = *(longlong *)(param_3 + 0x18);
    lVar1 = param_2[2];
    local_98 = 0xffffffff;
    local_88 = lVar6;
    local_80 = param_4;
    if (lVar1 != 0) {
      FWeakObjectPtr::operator=(&local_a0,lVar1);
      local_98 = CONCAT44(uStack_9c,local_a0);
    }
    bVar13 = local_80;
    lVar10 = local_88;
    FUN_142de87d0(&DAT_1466ada60,&local_a0,&local_98);
    if ((local_a0 == -1) || (lVar4 = (longlong)local_a0 * 0x60 + DAT_1466ada60, lVar4 == 0)) {
      local_90 = &local_98;
      FUN_142de1570(&DAT_1466ada60,&local_a0,&local_90);
      lVar4 = (longlong)local_a0 * 0x60 + DAT_1466ada60;
      lVar10 = local_88;
      bVar13 = local_80;
    }
    plVar8 = (longlong *)(lVar4 + 8);
    if (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c)) {
      lVar5 = *(longlong *)(lVar4 + 0x48);
      if (*(longlong *)(lVar4 + 0x48) == 0) {
        lVar5 = lVar4 + 0x40;
      }
      iVar3 = *(int *)(lVar5 + (((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)local_88) ^
                                (ulonglong)bVar13) & (longlong)*(int *)(lVar4 + 0x50) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar3 * 0x38 + *plVar8);
          if ((*plVar7 == lVar10) && (*(byte *)(plVar7 + 1) == bVar13)) {
            if (iVar3 != -1) goto LAB_142df0237;
            break;
          }
          iVar3 = (int)plVar7[6];
        } while (iVar3 != -1);
      }
    }
    plVar7 = (longlong *)0x0;
LAB_142df0237:
    plVar11 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    if (plVar11 == (longlong *)0x0) {
      local_90 = &local_88;
      FUN_142de1850(plVar8,&local_a0,&local_90,0);
      plVar11 = (longlong *)(*plVar8 + (longlong)local_a0 * 0x38 + 0x10);
      FUN_142de8970(&local_78,lVar6,local_a8[0]);
      for (lVar6 = FUN_141719c60(lVar1,local_78,1); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30))
      {
        iVar3 = (int)plVar11[3];
        *(int *)(plVar11 + 3) = iVar3 + 1;
        if (*(int *)((longlong)plVar11 + 0x1c) < iVar3 + 1) {
          TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
          ::ResizeGrow(plVar11,iVar3);
        }
        plVar8 = (longlong *)plVar11[2];
        if ((longlong *)plVar11[2] == (longlong *)0x0) {
          plVar8 = plVar11;
        }
        plVar8[iVar3] = lVar6;
      }
    }
    uVar12 = 0;
    local_60 = (undefined1 *)0x0;
    iVar3 = (int)plVar11[3];
    plVar8 = (longlong *)plVar11[2];
    local_58 = iVar3;
    if (iVar3 == 0) {
      local_54 = 0;
    }
    else {
      TArray<TRefCountPtr<FRHIRenderQuery>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
                (local_70,iVar3,0);
      if (plVar8 == (longlong *)0x0) {
        plVar8 = plVar11;
      }
      puVar9 = local_70;
      if (local_60 != (undefined1 *)0x0) {
        puVar9 = local_60;
      }
      _guard_xfg_dispatch_icall_nop(puVar9,plVar8,(longlong)iVar3 << 3);
    }
    uVar15 = uVar12;
    if (0 < local_58) {
      do {
        local_a8[0] = param_5;
        puVar9 = local_70;
        if (local_60 != (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(puVar9 + uVar12),local_a8);
        uVar12 = uVar12 + 8;
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while ((int)uVar14 < local_58);
    }
    if (local_60 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142df03d0 FUN_142df03d0 body=36 status=ok
// SIG undefined FUN_142df03d0(void)

void FUN_142df03d0(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_1406fd9f0(param_1 + 0x500,local_res10);
  }
  return;
}



// FUNCTION 142df0400 FUN_142df0400 body=143 status=ok
// SIG undefined FUN_142df0400(void)

void FUN_142df0400(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2[1];
  if (0 < (int)lVar3) {
    lVar2 = *param_2;
    iVar1 = *(int *)(param_1 + 1000);
    *(int *)(param_1 + 1000) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3ec) < iVar1 + 1) {
      TArray<FGuid,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x2e0,iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x3e0);
    if (*(longlong *)(param_1 + 0x3e0) == 0) {
      lVar4 = param_1 + 0x2e0;
    }
    *(longlong *)(lVar4 + (longlong)iVar1 * 0x10) = lVar2;
    *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar2 + (longlong)(int)lVar3 * 0x48;
  }
  return;
}



// FUNCTION 142df0490 FUN_142df0490 body=150 status=ok
// SIG undefined FUN_142df0490(void)

void FUN_142df0490(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2[1];
  if (0 < (int)lVar3) {
    lVar2 = *param_2;
    iVar1 = *(int *)(param_1 + 0x4f8);
    *(int *)(param_1 + 0x4f8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x4fc) < iVar1 + 1) {
      TArray<FGuid,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x3f0,iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x4f0);
    if (*(longlong *)(param_1 + 0x4f0) == 0) {
      lVar4 = param_1 + 0x3f0;
    }
    *(longlong *)(lVar4 + (longlong)iVar1 * 0x10) = lVar2;
    *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = (longlong)(int)lVar3 * 0x50 + lVar2;
  }
  return;
}



// FUNCTION 142df0530 FUN_142df0530 body=12 status=ok
// SIG undefined FUN_142df0530(void)

void FUN_142df0530(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x2d8) = param_2;
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



// FUNCTION 142df0540 FUN_142df0540 body=669 status=ok
// SIG undefined FUN_142df0540(void)

void FUN_142df0540(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  lVar1 = param_1 + 0x230;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x250),0,0);
    *(undefined8 *)(param_1 + 0x250) = uVar4;
  }
  puVar2 = (uint *)(param_1 + 600);
  uVar8 = *puVar2;
  if (uVar8 != 0) {
    FUN_1406f49a0();
    if (0 < (int)uVar8) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar8;
      do {
        lVar11 = *(longlong *)(param_1 + 0x250);
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar11 = lVar1;
        }
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar11 + uVar9 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x210);
    local_58 = 0;
    iVar7 = *(int *)(param_1 + 0x220);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar7 != 0) {
      puVar14 = *(uint **)(param_1 + 0x218);
      if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar8 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar11 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar3) goto LAB_142df068f;
        uVar8 = puVar14[lVar11 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar7 < iStack_44) {
LAB_142df068f:
        iStack_44 = iVar7;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar7) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar11 = param_1;
        }
        puVar15 = (ulonglong *)(lVar11 + (longlong)iStack_1c * 0x20);
        iVar7 = (int)(*puVar15 >> 4);
        uVar12 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
        uVar10 = -(uVar12 + iVar7) ^ uVar12 >> 0xd;
        uVar8 = (iVar7 - uVar12) - uVar10 ^ uVar10 >> 0xc;
        uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 5;
        uVar8 = (uVar8 - uVar12) - uVar10 ^ uVar10 >> 3;
        uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar8 = ((uVar10 - uVar12) - uVar8 ^ uVar12 >> 0xf) & *puVar2 - 1;
        *(uint *)((longlong)puVar15 + 0x1c) = uVar8;
        lVar11 = *(longlong *)(param_1 + 0x250);
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar11 = lVar1;
        }
        *(undefined4 *)(puVar15 + 3) =
             *(undefined4 *)(lVar11 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4);
        lVar11 = *(longlong *)(param_1 + 0x250);
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar11 = lVar1;
        }
        *(int *)(lVar11 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 142df07e0 Rehash body=648 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<GameplayCueInterfacePrivate::FCueNameAndUFunction,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int *piVar16;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar6 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_142df091f;
        uVar10 = puVar15[lVar5 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_142df091f:
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
        piVar16 = (int *)((longlong)iStack_1c * 0x60 + *param_1);
        uVar10 = piVar16[1];
        uVar12 = *piVar16 - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar10 ^ uVar12 << 8;
        uVar13 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
        uVar10 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar9 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 10;
        uVar10 = ((uVar13 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        piVar16[0x17] = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar16[0x16] =
             *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142df0a70 FUN_142df0a70 body=537 status=ok
// SIG undefined FUN_142df0a70(void)

void FUN_142df0a70(longlong *param_1)

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
        if (bVar4) goto LAB_142df0baf;
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
LAB_142df0baf:
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
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x38 + *param_1);
        uVar8 = ((int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 ^ (uint)*(byte *)(puVar11 + 1))
                & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x34) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 6) =
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



// FUNCTION 142df0c90 FUN_142df0c90 body=252 status=ok
// SIG undefined FUN_142df0c90(void)

void FUN_142df0c90(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    if (*(longlong *)(param_1 + 0x260) == 0) {
      lVar2 = param_1;
    }
    plVar3 = (longlong *)(lVar2 + 0x88 + (longlong)param_2 * 0x98);
    iVar4 = param_3;
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x13;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = *(int *)(param_1 + 0x268);
    iVar1 = (iVar4 - param_2) - param_3;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x260);
      if (*(longlong *)(param_1 + 0x260) == 0) {
        lVar2 = param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)param_2 * 0x98),
                 (void *)((longlong)(iVar4 - iVar1) * 0x98 + lVar2),(longlong)iVar1 * 0x98);
      iVar4 = *(int *)(param_1 + 0x268);
    }
    *(int *)(param_1 + 0x268) = iVar4 - param_3;
    if (param_4 != '\0') {
      FUN_140e8f6d0(param_1);
    }
  }
  return;
}



// FUNCTION 142df0da0 FUN_142df0da0 body=682 status=ok
// SIG undefined FUN_142df0da0(void)

void FUN_142df0da0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if ((param_1 != 0) && (iVar6 = FUN_142235230(), iVar6 != 3)) {
    plVar2 = (longlong *)(param_1 + 0x2b0);
    uVar3 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar11 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar4 = *puVar11;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar9 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar6 = local_88 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar6;
        if (bVar5) goto LAB_142df0e9d;
        uVar4 = puVar11[lVar9 + 1];
      }
      uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar6 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_74 = (iStack_70 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_142df0e9d:
        uStack_74 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x2d8);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar10 = uVar4 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar1;
    local_40 = plVar2;
    puStack_30 = puVar1;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar4;
    if (uVar4 != uVar3) {
      puVar11 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar6 = (int)uVar4 >> 5;
      while (uVar8 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_142df0f75;
        uVar8 = puVar11[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_74 = (uVar10 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_142df0f75:
        uStack_74 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) break;
      lVar9 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
      if (lVar9 != 0) {
        lVar7 = FUN_142e80f20();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          *(undefined4 *)(lVar9 + 0x238) = 0;
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return;
}



// FUNCTION 142df1050 FUN_142df1050 body=141 status=ok
// SIG undefined FUN_142df1050(void)

void FUN_142df1050(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2);
    pvVar1 = *(void **)((longlong)param_1 + 0x10);
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
        *(void **)((longlong)param_1 + 0x10) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 142df10e0 ResizeForCopy body=112 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<TRefCountPtr<FRHIRenderQuery>,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<2,FDefaultAllocator>::
    ForElementType<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*>::ResizeAllocation
              (param_1,0,iVar1,8);
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



// FUNCTION 142df1150 FUN_142df1150 body=120 status=ok
// SIG undefined FUN_142df1150(void)

void FUN_142df1150(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    lVar3 = 4;
    if ((*(int *)(param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar3 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    iVar2 = FMemory::QuantizeSize(lVar3,0);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  FUN_142df1050(param_1,param_2,iVar2,1);
  return;
}



// FUNCTION 142df11d0 ResizeGrow body=257 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FGuid,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x108);
  if (uVar1 < 0x11) {
    uVar2 = 0x10;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x10c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x100);
  if (uVar2 < 0x11) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x100);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x100) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar5;
  return;
}



// FUNCTION 142df12e0 FUN_142df12e0 body=93 status=ok
// SIG undefined FUN_142df12e0(void)

void FUN_142df12e0(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      iVar1 = FMemory::QuantizeSize((longlong)(int)param_2,0);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar1;
    FUN_142df1050(param_1,*(undefined4 *)(param_1 + 0x18),iVar1,1);
  }
  return;
}



// FUNCTION 142df1340 FUN_142df1340 body=400 status=ok
// SIG undefined FUN_142df1340(void)

bool FUN_142df1340(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_3;
  if ((longlong *)*param_3 != (longlong *)&DAT_ffffffffffffffff) goto LAB_142df14bf;
  if (param_2 == (longlong *)0x0) {
LAB_142df14ba:
    param_2 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_142c2de20();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_2 = (longlong *)param_2[0xad];
    }
    else {
      lVar2 = FUN_1428dfc70();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = (**(code **)(*param_2 + 0x668))(param_2);
        if (lVar2 != 0) {
          lVar3 = FUN_142c2de20();
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
            lVar2 = *(longlong *)(lVar2 + 0x568);
            *param_3 = lVar2;
            return lVar2 != 0;
          }
        }
        uVar4 = FUN_142c36280();
        lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
        *param_3 = lVar2;
        return lVar2 != 0;
      }
      lVar2 = FUN_142c36280();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142df14ba;
    }
  }
  *param_3 = (longlong)param_2;
  plVar5 = param_2;
LAB_142df14bf:
  return plVar5 != (longlong *)0x0;
}



// FUNCTION 142df14d0 FUN_142df14d0 body=311 status=ok
// SIG undefined FUN_142df14d0(void)

longlong FUN_142df14d0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  
  lVar2 = (**(code **)(*param_1 + 0x18))();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    lVar2 = 0;
    local_50 = 0;
    local_48 = 0;
    local_28 = 0;
    if (((*(int *)((longlong)param_2 + 0x1c) == 0 && *(int *)(param_2 + 3) == 0) &&
        *(int *)((longlong)param_2 + 0x14) == 0) && *(int *)(param_2 + 2) == 0) {
      lVar2 = param_2[1];
    }
    local_38 = *(undefined4 *)(param_2 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_30 = *(undefined4 *)(param_2 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_58 = *param_2;
    local_40 = lVar2;
    lVar3 = FUN_142de2260(&local_58,0);
    if ((lVar3 == 0) && (lVar2 != param_2[1])) {
      local_40 = param_2[1];
      lVar3 = FUN_142de2260(&local_58,0);
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (lVar3 != 0) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
      lVar6 = *plVar4;
      lVar2 = lVar6 + (longlong)(int)plVar4[1] * 0x48;
      for (; lVar6 != lVar2; lVar6 = lVar6 + 0x48) {
        lVar5 = FUN_142de2260(lVar6,uVar1);
        if (lVar5 == lVar3) {
          if (*(int *)(lVar6 + 0x40) <= (int)(uint)*(byte *)(param_2 + 6)) {
            return 0;
          }
          lVar2 = FindField<UObjectProperty>
                            (uVar1,*(undefined8 *)
                                    (*(longlong *)(lVar6 + 0x38) +
                                    (ulonglong)*(byte *)(param_2 + 6) * 8));
          if (lVar2 == 0) {
            return 0;
          }
          return lVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142df1610 FUN_142df1610 body=325 status=ok
// SIG undefined FUN_142df1610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142df1610(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_68;
  char local_67;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_2 + 8) = 0xff;
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x28) != 0)) {
    lVar4 = FUN_142dfb450();
    lVar1 = *param_1;
    lVar2 = *(longlong *)(lVar1 + 0x28);
    for (lVar3 = lVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) {
        local_58 = param_1[1];
        local_60 = lVar1;
        uVar5 = FUN_142ccdf70(&local_48,&local_60,param_3);
        FUN_140a2f480(param_2,uVar5);
        return param_2;
      }
    }
    local_60 = param_1[2];
    local_50 = 0;
    local_38 = 0;
    local_58._0_4_ = (uint)local_58 & 0xffff0000;
    local_58 = CONCAT44(0xffffffff,(uint)local_58);
    local_48 = 0;
    uStack_40 = 0;
    local_80 = FUN_140c74740(lVar1,param_1[1],0);
    local_88 = lVar2;
    local_78 = lVar1;
    FUN_1424ab540(&local_68,&local_60,1,&local_48);
    if (local_67 == '\0') {
      FUN_142ccf820(param_2,&local_48,param_3);
    }
  }
  return param_2;
}



// FUNCTION 142df1760 FUN_142df1760 body=337 status=ok
// SIG undefined FUN_142df1760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142df1760(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44 [12];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_2 + 1) = 0xff;
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 4);
    goto LAB_142df1862;
  case 1:
  case 2:
    *param_2 = *(undefined8 *)(param_1 + 4);
    *(undefined1 *)(param_2 + 1) = 1;
    goto switchD_142df17b5_caseD_4;
  case 3:
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x70);
    if (lVar3 == 0) {
LAB_142df185b:
      uVar4 = 0;
    }
    else {
      uVar4 = 0x3f800000;
    }
    break;
  default:
    goto switchD_142df17b5_caseD_4;
  case 5:
    cVar1 = FUN_142df1340(param_1,param_3,param_5);
    if (cVar1 == '\0') goto switchD_142df17b5_caseD_4;
    local_48 = 0;
    FUN_142cc40f0(param_1 + 0x58,*param_5,&local_48);
    uVar4 = local_48;
    break;
  case 6:
    if ((*(longlong *)(param_1 + 0x68) == 0) ||
       (cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0x68),param_3,param_4), cVar1 == '\0'))
    goto LAB_142df185b;
    uVar4 = 0x3f800000;
    break;
  case 7:
    uVar2 = FUN_142caac20(param_1 + 0x20,local_44);
    FUN_140a2f480(param_2,uVar2);
    goto switchD_142df17b5_caseD_4;
  }
  *(undefined4 *)param_2 = uVar4;
LAB_142df1862:
  *(undefined1 *)(param_2 + 1) = 0;
switchD_142df17b5_caseD_4:
  if ((((*(byte *)(param_1 + 2) & 1) != 0) && (*(char *)(param_2 + 1) == '\0')) &&
     (fVar5 = (float)FUN_142cc4350(param_2,0), fVar5 < 0.0)) {
    FUN_140a393e0(param_2);
    *(undefined4 *)param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 142df18e0 FUN_142df18e0 body=53 status=ok
// SIG undefined FUN_142df18e0(void)

void FUN_142df18e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x9d];
  *(undefined1 *)(param_1 + 0x9d) = 1;
  (**(code **)(*param_1 + 0x438))();
  *(char *)(param_1 + 0x9d) = (char)lVar1;
  return;
}



// FUNCTION 142df1920 FUN_142df1920 body=545 status=ok
// SIG undefined FUN_142df1920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142df1920(longlong param_1)

{
  float fVar1;
  float *pfVar2;
  undefined1 *puVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_90 [32];
  undefined1 *local_70;
  int local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_b8 = *(undefined8 *)(param_1 + 0x518);
  local_68 = *(int *)(param_1 + 0x568);
  lVar5 = (longlong)local_68;
  local_98 = *(undefined4 *)(param_1 + 0x538);
  pvVar4 = *(void **)(param_1 + 0x560);
  local_b0 = *(undefined8 *)(param_1 + 0x520);
  local_a8 = *(undefined1 *)(param_1 + 0x528);
  local_a7 = *(undefined1 *)(param_1 + 0x529);
  local_a6 = *(undefined1 *)(param_1 + 0x52a);
  local_a5 = *(undefined1 *)(param_1 + 0x52b);
  local_a4 = *(undefined1 *)(param_1 + 0x52c);
  local_a3 = *(undefined1 *)(param_1 + 0x52d);
  local_a2 = *(undefined1 *)(param_1 + 0x52e);
  local_a0 = *(undefined4 *)(param_1 + 0x530);
  local_9c = *(undefined1 *)(param_1 + 0x534);
  local_94 = *(undefined1 *)(param_1 + 0x53c);
  local_93 = *(undefined1 *)(param_1 + 0x53d);
  local_70 = (undefined1 *)0x0;
  if (local_68 == 0) {
    local_64 = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(local_90,local_68,0);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)(param_1 + 0x540);
    }
    puVar3 = local_90;
    if (local_70 != (undefined1 *)0x0) {
      puVar3 = local_70;
    }
    _guard_xfg_dispatch_icall_nop(puVar3,pvVar4,lVar5 << 2);
  }
  local_48 = *(int *)(param_1 + 0x588);
  lVar5 = (longlong)local_48;
  pvVar4 = *(void **)(param_1 + 0x580);
  local_50 = (undefined1 *)0x0;
  if (local_48 == 0) {
    local_44 = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy(local_60,local_48,0);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)(param_1 + 0x570);
    }
    puVar3 = local_60;
    if (local_50 != (undefined1 *)0x0) {
      puVar3 = local_50;
    }
    _guard_xfg_dispatch_icall_nop(puVar3,pvVar4,lVar5 << 2);
  }
  local_b8 = DAT_146b34b78;
  pfVar2 = (float *)FRotator::Vector(param_1 + 0x50c,local_c8);
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    fVar1 = *(float *)(param_1 + 0x1c8);
    local_e8 = &DAT_146aefe68;
    local_d8 = fVar1 * *pfVar2 + *(float *)(param_1 + 0x500);
    local_d4 = fVar1 * pfVar2[1] + *(float *)(param_1 + 0x504);
    local_d0 = fVar1 * pfVar2[2] + *(float *)(param_1 + 0x508);
    local_f8 = 0x13;
    local_f0 = (undefined8 *)(param_1 + 0x518);
    UWorld::LineTraceMultiByChannel
              (*(longlong *)(param_1 + 0x4f0),param_1 + 0x4d8,(float *)(param_1 + 0x500),&local_d8);
  }
  if (local_50 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_70 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142df1b50 FUN_142df1b50 body=140 status=ok
// SIG undefined FUN_142df1b50(void)

void FUN_142df1b50(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,
                  float *param_5,undefined8 param_6)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  
  if (param_2 != 0) {
    fVar1 = *(float *)(param_1 + 0x1c8);
    local_18 = fVar1 * *param_5 + *param_4;
    local_14 = fVar1 * param_5[1] + param_4[1];
    local_10 = fVar1 * param_5[2] + param_4[2];
    UWorld::LineTraceMultiByChannel(param_2,param_6,param_4,&local_18,0x13,param_3,&DAT_146aefe68);
  }
  return;
}



// FUNCTION 142df1be0 FUN_142df1be0 body=1401 status=ok
// SIG undefined FUN_142df1be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142df1be0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined1 auStack_238 [32];
  longlong *local_218;
  undefined2 *local_210;
  undefined4 *local_208;
  int local_1f8;
  uint uStack_1f4;
  uint *puStack_1f0;
  uint local_1e8;
  uint uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined2 *local_1b8;
  int local_1b0;
  undefined2 *local_1a8;
  int local_1a0;
  longlong *local_198;
  int iStack_190;
  uint uStack_18c;
  uint *local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  longlong local_170 [2];
  longlong local_160 [2];
  longlong local_150 [2];
  longlong *local_140;
  undefined8 uStack_138;
  uint *puStack_130;
  uint uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if (0 < *(int *)(param_1 + 0x248)) {
    lVar5 = *(longlong *)(param_1 + 0x118);
    if (lVar5 != 0) {
      plVar14 = (longlong *)(lVar5 + 0x2b0);
      local_1f8 = 0;
      uVar2 = *(uint *)(lVar5 + 0x2d8);
      puVar1 = (uint *)(lVar5 + 0x2c0);
      uStack_1f4 = 1;
      uStack_1e4 = 0;
      iStack_1e0 = 0;
      if (uVar2 != 0) {
        puVar17 = *(uint **)(lVar5 + 0x2d0);
        if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
          puVar17 = puVar1;
        }
        uVar3 = *puVar17;
        iStack_1e0 = 0;
        local_1f8 = 0;
        while (uVar3 == 0) {
          lVar9 = (longlong)local_1f8;
          iStack_1e0 = iStack_1e0 + 0x20;
          iVar7 = local_1f8 + 1;
          bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1f8;
          local_1f8 = iVar7;
          if (bVar4) goto LAB_142df1cf2;
          uVar3 = puVar17[lVar9 + 1];
        }
        uStack_1f4 = uVar3 - 1 & uVar3 ^ uVar3;
        iVar7 = 0x1f;
        if (uStack_1f4 != 0) {
          for (; uStack_1f4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_1f4 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_1e4 = (iStack_1e0 - iVar7) + 0x1f;
        if ((int)uVar2 < (int)uStack_1e4) {
LAB_142df1cf2:
          uStack_1e4 = uVar2;
        }
      }
      uVar3 = *(uint *)(lVar5 + 0x2d8);
      uStack_180 = 0xffffffff;
      uStack_17c = uStack_1e4;
      local_178 = CONCAT44(uStack_1dc,iStack_1e0);
      uStack_138 = CONCAT44(uStack_1f4,local_1f8);
      local_1e8 = -1 << ((byte)uVar3 & 0x1f);
      uVar16 = uVar3 & 0xffffffe0;
      iStack_190 = local_1f8;
      uStack_18c = uStack_1f4;
      puStack_1f0 = puVar1;
      uStack_1e4 = uVar3;
      local_188 = puVar1;
      local_140 = plVar14;
      puStack_130 = puVar1;
      uStack_120 = local_178;
      local_198 = plVar14;
      uStack_128 = uStack_180;
      uStack_124 = uStack_17c;
      if (uVar3 != uVar2) {
        puVar17 = *(uint **)(lVar5 + 0x2d0);
        if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
          puVar17 = puVar1;
        }
        uVar8 = puVar17[(int)uVar3 >> 5] & local_1e8;
        iVar7 = (int)uVar3 >> 5;
        while (uVar8 == 0) {
          uVar16 = uVar16 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_142df1dc7;
          uVar8 = puVar17[(longlong)iVar7 + 1];
          local_1e8 = 0xffffffff;
          iVar7 = iVar7 + 1;
        }
        uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
        iVar7 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_1e4 = (uVar16 - iVar7) + 0x1f;
        uVar3 = uStack_1e4;
        if ((int)uVar2 < (int)uStack_1e4) {
LAB_142df1dc7:
          uStack_1e4 = uVar2;
          uVar3 = uVar2;
        }
      }
      while( true ) {
        if ((uStack_17c == uVar3) && (local_188 == puVar1)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (local_198 == plVar14)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) break;
        plVar18 = *(longlong **)(*local_198 + (longlong)(int)uStack_17c * 0x10);
        if (plVar18 != (longlong *)0x0) {
          lVar5 = FUN_1429f11d0();
          if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar10 = *(longlong **)(param_1 + 0x240);
            plVar11 = plVar10 + *(int *)(param_1 + 0x248);
            for (; plVar10 != plVar11; plVar10 = plVar10 + 1) {
              if (*plVar10 == plVar18[3]) {
                iVar7 = (**(code **)(*plVar18 + 0x4f0))(plVar18,0x13);
                if (iVar7 == 0) {
                  (**(code **)(*plVar18 + 0x830))(plVar18);
                }
                break;
              }
            }
          }
        }
        uStack_180 = uStack_180 & ~uStack_18c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_190);
      }
      uVar13 = 0;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        local_58 = (longlong *)0x0;
        local_50 = 0;
        FUN_140725150(*(longlong *)(param_1 + 0x118),local_118,0);
        plVar14 = *(longlong **)(param_1 + 0x240);
        uVar19 = (longlong)*(int *)(param_1 + 0x248) & 0x1fffffffffffffff;
        if (plVar14 + *(int *)(param_1 + 0x248) < plVar14) {
          uVar19 = uVar13;
        }
        plVar18 = local_58;
        if (uVar19 != 0) {
          do {
            local_1d8 = *plVar14;
            plVar11 = local_118;
            if (plVar18 != (longlong *)0x0) {
              plVar11 = plVar18;
            }
            plVar10 = plVar11 + (int)local_50;
            for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
              if (*(longlong *)(*plVar11 + 0x18) == local_1d8) goto LAB_142df20ea;
            }
            puVar6 = (undefined8 *)FName::ToString(&local_1d8,&local_1f8);
            if (*(int *)(puVar6 + 1) == 0) {
              puVar12 = &DAT_143f3eda8;
            }
            else {
              puVar12 = (undefined2 *)*puVar6;
            }
            local_1d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x18);
            FName::ToString(&local_1d0,&local_1a8);
            local_1c8 = *(undefined8 *)(param_1 + 0x18);
            puVar20 = &DAT_143f3eda8;
            if (local_1a0 != 0) {
              puVar20 = local_1a8;
            }
            FName::ToString(&local_1c8,&local_1b8);
            puVar21 = &DAT_143f3eda8;
            if (local_1b0 != 0) {
              puVar21 = local_1b8;
            }
            lVar5 = UObjectBaseUtility::GetOutermost(param_1);
            local_1c0 = *(undefined8 *)(lVar5 + 0x18);
            FName::ToString(&local_1c0,local_160);
            puVar6 = (undefined8 *)FPackageName::GetLongPackageAssetName(local_150,local_160);
            if (*(int *)(puVar6 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar6;
            }
            local_218 = (longlong *)puVar20;
            local_210 = puVar12;
            FString::PrintfImpl(local_170,
                                L"[%s] UsableComponent \"%s\" of %s missing RequiredComponent \"%s\""
                                ,puVar15,puVar21);
            local_208 = &DAT_1464aa770;
            local_218 = local_170;
            local_210 = (undefined2 *)CONCAT71(local_210._1_7_,1);
            AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
            if (local_170[0] != 0) {
              FMemory::Free();
            }
            if (local_150[0] != 0) {
              FMemory::Free();
            }
            if (local_160[0] != 0) {
              FMemory::Free();
            }
            if (local_1b8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_1a8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            plVar18 = local_58;
            if (CONCAT44(uStack_1f4,local_1f8) != 0) {
              FMemory::Free();
              plVar18 = local_58;
            }
LAB_142df20ea:
            plVar14 = plVar14 + 1;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar19);
        }
        if (plVar18 != (longlong *)0x0) {
          FMemory::Free(plVar18);
        }
      }
    }
  }
  return;
}



// FUNCTION 142df2160 FUN_142df2160 body=225 status=ok
// SIG undefined FUN_142df2160(void)

undefined8 FUN_142df2160(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x28);
  if (((*(byte *)(param_2 + 5) & 3) == 0) || ((param_2[6] & 0x2000000000001000U) != 0)) {
    puVar1 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x30),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  else {
    FUN_141764720(param_2,param_1 + 0x30,*(undefined8 *)(param_1 + 0x28));
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 8);
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_2);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_1 + 0x10);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return 1;
}



// FUNCTION 142df2250 FUN_142df2250 body=586 status=ok
// SIG undefined FUN_142df2250(void)

undefined8 FUN_142df2250(char *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b34ce0) {
    _Init_thread_header(&DAT_146b34ce0);
    if (DAT_146b34ce0 == -1) {
      FName::FName(&DAT_146b34cd8,L"BlackboardKeyName",1);
      _Init_thread_footer(&DAT_146b34ce0);
    }
  }
  if (param_2[2] == DAT_146b34cd8) {
    (**(code **)(*param_3 + 0x40))(param_3,param_1 + 0x58);
    return 1;
  }
  lVar1 = *param_2;
  local_res10 = 3;
  if (lVar1 == 3) {
    if (*param_1 != '\x01') {
      *param_1 = '\x01';
      FUN_142de72e0(param_1);
    }
    if ((char)param_2[1] == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 4) = uVar4;
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[3] = '\0';
    FUN_142de7650(param_1);
    uVar3 = 1;
  }
  else if (lVar1 == 2) {
    plVar2 = (longlong *)param_3[1];
    local_res10 = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,4);
      }
    }
    else {
      local_res10 = (ulonglong)*(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (*param_1 != '\x02') {
      *param_1 = '\x02';
      FUN_142de72e0(param_1);
    }
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[3] = '\0';
    *(float *)(param_1 + 4) = (float)(int)local_res10;
    FUN_142de7650(param_1);
    uVar3 = 1;
  }
  else if (lVar1 == 4) {
    plVar2 = (longlong *)param_3[1];
    local_res10 = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_res10,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,&local_res10,4);
      }
    }
    else {
      local_res10 = (ulonglong)*(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (*param_1 != '\0') {
      *param_1 = '\0';
      FUN_142de72e0(param_1);
    }
    *(int *)(param_1 + 4) = (int)local_res10;
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[3] = '\0';
    FUN_142de7650(param_1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 142df24a0 FUN_142df24a0 body=85 status=ok
// SIG undefined FUN_142df24a0(void)

void FUN_142df24a0(longlong param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x408))(param_2), cVar1 == '\x01')) {
    (**(code **)(*param_2 + 0x410))(param_2,*(undefined8 *)(param_1 + 0x1e0),param_3);
  }
  return;
}



// FUNCTION 142df2500 FUN_142df2500 body=85 status=ok
// SIG undefined FUN_142df2500(void)

void FUN_142df2500(longlong param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x408))(param_2), cVar1 == '\x01')) {
    (**(code **)(*param_2 + 0x418))(param_2,*(undefined8 *)(param_1 + 0x1e0),param_3);
  }
  return;
}



// FUNCTION 142df2560 FUN_142df2560 body=463 status=ok
// SIG undefined FUN_142df2560(void)

void FUN_142df2560(longlong param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_27;
  
  cVar3 = FUN_1407c3030(param_1 + 0x440);
  if ((cVar3 == '\0') && (param_2 != 0)) {
    local_30 = 0;
    if (*(char *)(param_2 + 0x25c) != '\0') {
      local_30 = *(undefined8 *)(param_1 + 0x2b0);
    }
    local_38 = *(undefined8 *)(param_1 + 0x1e0);
    local_28 = param_3;
    local_27 = param_4;
    lVar5 = FUN_142ded610(param_2,param_3,param_4);
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x52) != '\0') {
        uVar7 = *(undefined8 *)(param_2 + 0x118);
        if (*(char *)(lVar5 + 0x60) == '\x01') {
          uVar7 = *(undefined8 *)(param_1 + 0x1e0);
        }
        fVar8 = (float)FUN_142c98860(lVar5 + 0x68,uVar7);
        if ((0 < (int)fVar8) &&
           (plVar1 = *(longlong **)(param_1 + 0x1e0), plVar1 != (longlong *)0x0)) {
          lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (iVar4 = (**(code **)(*plVar1 + 0x1028))(plVar1,*(undefined8 *)(lVar5 + 0x58)),
             iVar4 < (int)fVar8)) {
            FUN_142e84710(param_1,param_2,param_3,param_4);
            return;
          }
        }
      }
      iVar4 = FUN_142de5990(param_1,param_2,lVar5);
      cVar3 = FUN_142df4100(param_2,&local_38);
      if ((((cVar3 != '\0') && (lVar5 = *(longlong *)(lVar5 + 0x58), 0 < iVar4)) && (lVar5 != 0)) &&
         (plVar1 = *(longlong **)(param_1 + 0x1e0), plVar1 != (longlong *)0x0)) {
        lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*plVar1 + 0x1030))(plVar1,-iVar4,lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 142df2730 FUN_142df2730 body=101 status=ok
// SIG undefined FUN_142df2730(void)

void FUN_142df2730(longlong *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (param_2 = param_2 ^ 1, param_2 != *(byte *)((longlong)param_1 + 0x1a9))) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(byte *)((longlong)param_1 + 0x1a9) = param_2;
    if (param_1[0x30] != 0) {
      FUN_142ddc970(param_1[0x23],*(undefined1 *)(param_1[0x30] + 0x69),param_2);
    }
  }
  return;
}



// FUNCTION 142df27a0 FUN_142df27a0 body=22 status=ok
// SIG undefined FUN_142df27a0(void)

void FUN_142df27a0(longlong param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = param_2;
  if (fVar1 == *(float *)(param_1 + 4)) {
    *(undefined4 *)(param_1 + 4) = param_2;
  }
  return;
}



// FUNCTION 142df27c0 FUN_142df27c0 body=688 status=ok
// SIG undefined FUN_142df27c0(void)

void FUN_142df27c0(longlong param_1,undefined1 param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if ((param_1 != 0) && (iVar7 = FUN_142235230(), iVar7 != 3)) {
    plVar2 = (longlong *)(param_1 + 0x2b0);
    uVar3 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    iStack_70 = 0;
    if (uVar3 != 0) {
      puVar11 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar4 = *puVar11;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar4 == 0) {
        lVar9 = (longlong)local_88;
        iStack_70 = iStack_70 + 0x20;
        iVar7 = local_88 + 1;
        bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
        local_88 = iVar7;
        if (bVar6) goto LAB_142df28bd;
        uVar4 = puVar11[lVar9 + 1];
      }
      uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar7 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_74 = (iStack_70 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_142df28bd:
        uStack_74 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x2d8);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,iStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar10 = uVar4 & 0xffffffe0;
    iStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar1;
    local_40 = plVar2;
    puStack_30 = puVar1;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar4;
    if (uVar4 != uVar3) {
      puVar11 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar7 = (int)uVar4 >> 5;
      while (uVar8 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142df2995;
        uVar8 = puVar11[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
      iVar7 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_74 = (uVar10 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_74) {
LAB_142df2995:
        uStack_74 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) break;
      plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
      if (plVar5 != (longlong *)0x0) {
        lVar9 = FUN_142e80f20();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          (**(code **)(*plVar5 + 0x290))(plVar5,param_2,0);
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    }
  }
  return;
}



// FUNCTION 142df2a70 FUN_142df2a70 body=218 status=ok
// SIG undefined FUN_142df2a70(void)

void FUN_142df2a70(longlong *param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 local_res18;
  
  local_res18 = param_3;
  if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x3c] + 0x768))();
    if (cVar1 != '\0') {
      if (param_2 == '\0') {
        FUN_142dbb5d0(param_1 + 0x75,&local_res18);
      }
      else {
        FUN_142dafbc0();
      }
    }
  }
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 == 3) {
    cVar1 = FUN_1407c3030(param_1 + 0x88);
    if (param_2 == '\0') {
      FUN_142dbb5d0(param_1 + 0x88,&local_res18);
    }
    else {
      FUN_142dafbc0();
    }
    cVar2 = FUN_1407c3030(param_1 + 0x88);
    if ((cVar1 != cVar2) && (param_1[0x23] != 0)) {
      (**(code **)(*param_1 + 0x260))(param_1);
      (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
    }
  }
  return;
}



// FUNCTION 142df2b50 FUN_142df2b50 body=327 status=ok
// SIG undefined FUN_142df2b50(void)

void FUN_142df2b50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res18 [8];
  undefined4 uStack_c;
  
  iVar2 = FUN_14233f450();
  if (((iVar2 == 3) && (param_2 != param_1)) &&
     ((param_2 == 0 || (*(longlong *)(param_2 + 0x1b0) == 0)))) {
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      FUN_140483870(*(longlong *)(param_1 + 0x1b0) + 400,param_1);
    }
    *(longlong *)(param_1 + 0x1b0) = param_2;
    if (param_2 != 0) {
      plVar1 = (longlong *)(param_2 + 400);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_144012f30;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = 0x42ded8a0;
        *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
        *(undefined4 *)(plVar3 + 3) = 0;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar4;
        *plVar3 = (longlong)&PTR_FUN_144012f78;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar3 + 0x20))(plVar3,local_res18);
        iVar2 = *(int *)(param_2 + 0x198);
        *(int *)(param_2 + 0x198) = iVar2 + 1;
        if (*(int *)(param_2 + 0x19c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar5 = plVar3;
        *(undefined4 *)(puVar5 + 1) = 3;
      }
      FUN_142df2e20(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x180));
    }
  }
  return;
}



// FUNCTION 142df2ca0 FUN_142df2ca0 body=58 status=ok
// SIG undefined FUN_142df2ca0(void)

void FUN_142df2ca0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (*(longlong *)(param_1 + 0x1b0) == 0)) {
    FUN_142df2e20(param_1,param_2);
  }
  return;
}



// FUNCTION 142df2ce0 FUN_142df2ce0 body=248 status=ok
// SIG undefined FUN_142df2ce0(void)

void FUN_142df2ce0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 local_res8 [8];
  undefined1 *local_18;
  undefined4 uStack_10;
  
  if ((((*(char *)(param_1 + 0x1a8) != param_2) &&
       (*(char *)(param_1 + 0x1a8) = param_2, (*(byte *)(param_1 + 200) & 0x20) != 0)) &&
      (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) &&
     ((lVar2 = *(longlong *)(param_1 + 0x180), lVar2 != 0 && (*(char *)(lVar2 + 0x68) != '\0')))) {
    FUN_142ddc730(lVar1,*(undefined1 *)(lVar2 + 0x69),param_2);
    if (*(char *)(param_1 + 0x1a9) != '\0') {
      FUN_142ddc970(lVar1,*(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x69),
                    *(undefined1 *)(param_1 + 0x1a8));
    }
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      FUN_140483870();
      return;
    }
    cVar3 = FMulticastDelegateBase<FWeakObjectPtr>::IsBoundToObject(lVar1 + 0x3b0,param_1);
    if (cVar3 == '\0') {
      local_18 = &LAB_142df2de0;
      uStack_10 = 0;
      FUN_140722860(lVar1 + 0x3b0,local_res8,param_1,&local_18);
    }
  }
  return;
}



// FUNCTION 142df2e20 FUN_142df2e20 body=513 status=ok
// SIG undefined FUN_142df2e20(void)

void FUN_142df2e20(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 *local_28;
  undefined4 uStack_20;
  
  (**(code **)(*param_1 + 0x260))();
  lVar10 = param_1[0x23];
  lVar2 = param_1[0x30];
  param_1[0x30] = param_2;
  if ((lVar10 != 0) && ((char)param_1[0x35] != '\0')) {
    if ((lVar2 != 0) &&
       (((*(char *)(lVar2 + 0x68) != '\0' && (lVar2 != param_2)) &&
        (FUN_142ddc730(lVar10,*(undefined1 *)(lVar2 + 0x69),0),
        *(char *)((longlong)param_1 + 0x1a9) != '\0')))) {
      FUN_142ddc970(lVar10,*(undefined1 *)(lVar2 + 0x69),0);
    }
    lVar9 = param_1[0x30];
    if (((lVar9 != 0) && (*(char *)(lVar9 + 0x68) != '\0')) &&
       (FUN_142ddc730(lVar10,*(undefined1 *)(lVar9 + 0x69),1),
       *(char *)((longlong)param_1 + 0x1a9) != '\0')) {
      FUN_142ddc970(lVar10,*(undefined1 *)(param_1[0x30] + 0x69),1);
    }
    if ((param_1[0x30] == 0) || (*(char *)(param_1[0x30] + 0x68) == '\0')) {
      FUN_140483870(lVar10 + 0x3b0,param_1);
    }
    else {
      cVar4 = FMulticastDelegateBase<FWeakObjectPtr>::IsBoundToObject(lVar10 + 0x3b0,param_1);
      if (cVar4 == '\0') {
        local_28 = &LAB_142df2de0;
        uStack_20 = 0;
        FUN_140722860(lVar10 + 0x3b0,local_res8,param_1,&local_28);
      }
    }
  }
  if (param_1[0x30] != lVar2) {
    FUN_142df3d40(param_1);
    plVar1 = param_1 + 0x32;
    plVar6 = (longlong *)*plVar1;
    plVar8 = plVar6 + (longlong)(int)param_1[0x33] * 2;
    for (; plVar6 != plVar8; plVar6 = plVar6 + 2) {
      if (((int)plVar6[1] != 0) && (*plVar6 != 0)) {
        *(int *)((longlong)param_1 + 0x1a4) = *(int *)((longlong)param_1 + 0x1a4) + 1;
        iVar7 = *(int *)((longlong)param_1 + 0x1a4);
        bVar3 = false;
        iVar5 = (int)param_1[0x33] + -1;
        lVar10 = (longlong)iVar5;
        if (-1 < iVar5) {
          lVar9 = lVar10 << 4;
          bVar3 = false;
          do {
            if (((*(int *)(lVar9 + 8 + *plVar1) == 0) ||
                (plVar6 = *(longlong **)(lVar9 + *plVar1), plVar6 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,param_1,lVar2), cVar4 == '\0')) {
              bVar3 = true;
            }
            lVar9 = lVar9 + -0x10;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
          iVar7 = *(int *)((longlong)param_1 + 0x1a4);
        }
        *(int *)((longlong)param_1 + 0x1a4) = iVar7 + -1;
        if (!bVar3) {
          return;
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142df3030 FUN_142df3030 body=67 status=ok
// SIG undefined FUN_142df3030(void)

void FUN_142df3030(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    iVar2 = FUN_14233f450();
    if ((iVar2 == 3) && (*(longlong *)(param_1 + 0x1b0) == 0)) {
      FUN_142df2e20(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 142df3080 FUN_142df3080 body=45 status=ok
// SIG undefined FUN_142df3080(void)

void FUN_142df3080(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    return;
  }
  FUN_142dbb5d0(param_1 + 0x280,local_res18);
  return;
}



// FUNCTION 142df30b0 FUN_142df30b0 body=152 status=ok
// SIG undefined FUN_142df30b0(void)

void FUN_142df30b0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x03')) {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1);
    uVar4 = 0;
    if (0 < *(int *)(puVar2 + 1)) {
      plVar3 = (longlong *)*puVar2;
      uVar5 = uVar4;
      while( true ) {
        if ((*plVar3 != 0) && (*(longlong *)(*plVar3 + 0x18) == param_2)) break;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 5;
        if ((longlong)*(int *)(puVar2 + 1) <= (longlong)uVar4) {
          return;
        }
      }
      if ((int)plVar3[3] < 1) {
        FUN_142dedd80(param_1,uVar5,param_3);
      }
    }
  }
  return;
}



// FUNCTION 142df3150 FUN_142df3150 body=172 status=ok
// SIG undefined FUN_142df3150(void)

void FUN_142df3150(longlong param_1,byte param_2)

{
  undefined6 uStack_4e;
  
  *(byte *)(param_1 + 3) = param_2;
  if (2 < param_2) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (param_2 != 7) {
    *(undefined1 (*) [16])(param_1 + 0x20) = ZEXT1216((undefined1  [12])0x0) << 0x20;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0x3f800000;
  }
  if (param_2 != 5) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(ulonglong *)(param_1 + 0x60) = CONCAT62(uStack_4e,0xff00);
  }
  if (param_2 != 6) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (param_2 != 3) {
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 142df3200 FUN_142df3200 body=12 status=ok
// SIG undefined FUN_142df3200(void)

void FUN_142df3200(char *param_1,char param_2)

{
  if (*param_1 != param_2) {
    *param_1 = param_2;
    FUN_142de72e0();
    return;
  }
  return;
}



// FUNCTION 142df3220 FUN_142df3220 body=18 status=ok
// SIG undefined FUN_142df3220(void)

undefined1 FUN_142df3220(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x220) == 0) {
    return 0;
  }
  uVar1 = FUN_142df3240();
  return uVar1;
}



// FUNCTION 142df3240 FUN_142df3240 body=226 status=ok
// SIG undefined FUN_142df3240(void)

undefined8 FUN_142df3240(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  
  if ((*(uint *)((longlong)param_1 + 0x6c) & 0x600) != 0) {
    fVar4 = (float)(**(code **)(*param_1 + 0x2c8))();
    bVar1 = true;
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x200) != 0) {
      fVar5 = (float)FUN_142c98860(param_1 + 0xe,*param_2);
      bVar1 = true;
      if (fVar4 < fVar5) {
        bVar1 = false;
      }
    }
    bVar2 = true;
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x400) != 0) {
      fVar5 = (float)FUN_142c98860(param_1 + 0x15,*param_2);
      bVar2 = true;
      if (fVar5 < fVar4) {
        bVar2 = false;
      }
    }
    if ((*(uint *)((longlong)param_1 + 0x6c) & 0x800) == 0) {
      if (!bVar1) {
        return 0;
      }
    }
    else if (bVar1) goto LAB_142df32eb;
    if (!bVar2) {
      return 0;
    }
  }
LAB_142df32eb:
  if ((param_1[0x1c] != 0) && (cVar3 = FUN_142c48f60(param_1[0x1c],*param_2,0), cVar3 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142df3330 FUN_142df3330 body=466 status=ok
// SIG undefined FUN_142df3330(void)

void FUN_142df3330(undefined4 param_1,byte param_2)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong in_RCX;
  longlong *plVar6;
  
  if (1 < param_2) {
    return;
  }
  plVar6 = (longlong *)(in_RCX + 0x368 + (ulonglong)param_2 * 0x10);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if ((((*(char *)((longlong)plVar6 + 9) != '\0') ||
       (param_1 = 0, 0.0 < *(float *)((longlong)plVar6 + 0xc))) || (*plVar6 != 0)) &&
     (((char)plVar6[1] == '\x01' && (*plVar6 != 0)))) {
    FUN_142e85260(param_1,*plVar6,param_2);
  }
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0xbf800000;
  *plVar6 = 0;
  *(undefined2 *)(plVar6 + 1) = 0;
  cVar3 = FUN_1407c3030(in_RCX + 0x3a8);
  if ((cVar3 == '\0') && (cVar3 = FUN_1407c3030(in_RCX + 0x440), cVar3 == '\0')) {
    plVar4 = (longlong *)FUN_142dead50(in_RCX + 0x2a8,in_RCX + 0x248);
  }
  else {
    plVar4 = (longlong *)(in_RCX + 0x308);
  }
  plVar2 = (longlong *)*plVar4;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)(plVar2 + 0x45) & 0x10) != 0) {
    return;
  }
  if (*(char *)((longlong)plVar4 + 0x11) == '\0') {
    return;
  }
  *plVar6 = (longlong)plVar2;
  cVar3 = (**(code **)(*plVar2 + 0x408))(plVar2);
  *(char *)(plVar6 + 1) = cVar3;
  if (*(char *)((longlong)plVar4 + 0x11) == '\0') goto LAB_142df3442;
  if (param_2 == 0) {
    if (*(char *)((longlong)plVar4 + 0x12) == '\0') {
      cVar1 = *(char *)((longlong)plVar4 + 0x13);
joined_r0x000142df349d:
      if (cVar1 == '\0') goto LAB_142df3442;
    }
  }
  else {
    if (param_2 != 1) goto LAB_142df3442;
    if (*(char *)((longlong)plVar4 + 0x14) == '\0') {
      cVar1 = *(char *)((longlong)plVar4 + 0x15);
      goto joined_r0x000142df349d;
    }
  }
  if (cVar3 == '\x01') {
    *(undefined1 *)((longlong)plVar6 + 9) = 1;
    FUN_142e85210(in_RCX,plVar2,param_2);
    return;
  }
LAB_142df3442:
  cVar3 = (char)plVar2[0x2f];
  if (cVar3 == '\x02') {
    lVar5 = FUN_142ded610(plVar2,param_2,1,*(undefined8 *)(in_RCX + 0x1e0));
    cVar3 = '\x02';
    if (lVar5 == 0) {
      cVar3 = '\0';
    }
  }
  if (cVar3 == '\0') {
    FUN_142df42c0(in_RCX,plVar2,param_2,0);
    *plVar6 = 0;
    *(undefined2 *)(plVar6 + 1) = 0;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 0xbf800000;
  }
  else if (cVar3 == '\x01') {
    *(undefined1 *)((longlong)plVar6 + 9) = 1;
    *(int *)((longlong)plVar6 + 0xc) = (int)plVar2[0x30];
  }
  else if (cVar3 == '\x02') {
    *(undefined1 *)((longlong)plVar6 + 9) = 0;
    *(undefined4 *)((longlong)plVar6 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0x17c);
  }
  return;
}



// FUNCTION 142df3510 FUN_142df3510 body=86 status=ok
// SIG undefined FUN_142df3510(void)

longlong FUN_142df3510(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    uVar2 = UCircularThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
    if ((lVar3 == 0) && (plVar1 = (longlong *)param_1[0x2a], plVar1 != (longlong *)0x0)) {
      uVar2 = UCircularThrobber::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000142df3557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      return lVar3;
    }
  }
  return lVar3;
}



// FUNCTION 142df3570 FUN_142df3570 body=15 status=ok
// SIG undefined FUN_142df3570(void)

uint FUN_142df3570(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_2 == param_1) {
    return (uint)*(byte *)(param_1 + 0x40);
  }
  if ((int)(uint)*(byte *)(param_2 + 0x6a) < *(int *)(param_1 + 0x88)) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1 + 0x70;
    }
    bVar1 = *(byte *)(lVar2 + (ulonglong)*(byte *)(param_2 + 0x6a));
    if (bVar1 != 0) {
      return bVar1 - 1;
    }
  }
  if ((int)(uint)*(byte *)(param_1 + 0x6a) < *(int *)(param_2 + 0xa8)) {
    lVar2 = *(longlong *)(param_2 + 0xa0);
    if (*(longlong *)(param_2 + 0xa0) == 0) {
      lVar2 = param_2 + 0x90;
    }
    bVar1 = *(byte *)(lVar2 + (ulonglong)*(byte *)(param_1 + 0x6a));
    if (bVar1 != 0) {
      return bVar1 - 1;
    }
  }
  if (*(char *)(param_2 + 0x43) != '\0') {
    return (uint)*(byte *)(param_2 + 0x42);
  }
  return (uint)*(byte *)(param_1 + 0x41);
}



// FUNCTION 142df3580 FUN_142df3580 body=327 status=ok
// SIG undefined FUN_142df3580(void)

longlong FUN_142df3580(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined1 local_res8 [8];
  
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
    lVar2 = param_1[0x121];
LAB_142df364f:
    if (lVar2 == 0) goto LAB_142df3660;
  }
  else {
    lVar2 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = param_1[0x124];
      goto LAB_142df364f;
    }
    uVar3 = UCircularThrobber::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
    if (lVar2 == 0) {
      plVar4 = (longlong *)param_1[0x2a];
      if (plVar4 == (longlong *)0x0) goto LAB_142df3660;
      uVar3 = UCircularThrobber::GetPrivateStaticClass();
      lVar2 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar3);
      goto LAB_142df364f;
    }
  }
  if (*(longlong *)(lVar2 + 0x180) != 0) {
    return *(longlong *)(lVar2 + 0x180);
  }
LAB_142df3660:
  uVar3 = UGenericTeamAgentInterface::GetPrivateStaticClass();
  plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
  if (plVar4 != (longlong *)0x0) {
    pbVar5 = (byte *)(**(code **)(*plVar4 + 0x18))(plVar4,local_res8);
    if ((int)(uint)*pbVar5 < DAT_146b34b70) {
      puVar6 = DAT_146b34b68;
      if (DAT_146b34b68 == (undefined *)0x0) {
        puVar6 = &DAT_146b34ae8;
      }
      if (*(longlong *)(puVar6 + (ulonglong)*pbVar5 * 8) != 0) {
        return *(longlong *)(puVar6 + (ulonglong)*pbVar5 * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 142df36d0 FUN_142df36d0 body=49 status=ok
// SIG undefined FUN_142df36d0(void)

undefined8 FUN_142df36d0(byte param_1)

{
  undefined *puVar1;
  
  if ((int)(uint)param_1 < DAT_146b34b70) {
    puVar1 = DAT_146b34b68;
    if (DAT_146b34b68 == (undefined *)0x0) {
      puVar1 = &DAT_146b34ae8;
    }
    return *(undefined8 *)(puVar1 + (ulonglong)param_1 * 8);
  }
  return 0;
}



// FUNCTION 142df3710 FUN_142df3710 body=45 status=ok
// SIG undefined FUN_142df3710(void)

longlong FUN_142df3710(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142dccd00();
  if (lVar1 == 0) {
    if (param_1 != 0) {
      return *(longlong *)(param_1 + 0x488);
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 142df3740 FUN_142df3740 body=192 status=ok
// SIG undefined FUN_142df3740(void)

void FUN_142df3740(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (1 < param_2) {
    return;
  }
  plVar3 = (longlong *)(param_1 + 0x368 + (ulonglong)param_2 * 0x10);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((char)plVar3[1] == '\x01') {
    if (*plVar3 != 0) {
      FUN_142e85260(param_1,*plVar3,param_2);
    }
  }
  else {
    plVar2 = (longlong *)FUN_142de9690();
    lVar1 = *plVar2;
    if (((lVar1 == *plVar3) && (lVar1 != 0)) && (*(char *)((longlong)plVar2 + 0x11) != '\0')) {
      if (*(char *)(lVar1 + 0x178) == '\x02') {
        if (*(char *)((longlong)plVar3 + 9) == '\0') {
          FUN_142df42c0(param_1,lVar1,param_2,0);
          goto LAB_142df37dc;
        }
      }
      else if ((*(char *)(lVar1 + 0x178) == '\0') || (*(char *)((longlong)plVar3 + 9) == '\0'))
      goto LAB_142df37dc;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1a8,0)
      ;
    }
  }
LAB_142df37dc:
  *plVar3 = 0;
  *(undefined2 *)(plVar3 + 1) = 0;
  *(undefined4 *)((longlong)plVar3 + 0xc) = 0xbf800000;
  return;
}



// FUNCTION 142df3800 FUN_142df3800 body=1339 status=ok
// SIG undefined FUN_142df3800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142df3800(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  FUN_142357eb0();
  iVar5 = FUN_14233f450(param_1);
  if (1 < iVar5) {
    local_98 = 0;
    local_94 = 0;
    local_92 = 0;
    FText::FText(local_90);
    local_58 = _DAT_1468b5d90;
    plVar6 = param_1 + 0x55;
    local_50 = DAT_1468b5d98;
    local_78 = 0;
    uStack_70 = 0;
    local_4c = 0;
    *plVar6 = 0;
    param_1[0x56] = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_140ce30d0(param_1 + 0x57,&local_98);
    param_1[0x5f] = local_58;
    *(undefined4 *)((longlong)param_1 + 0x304) = local_4c;
    *(undefined4 *)(param_1 + 0x60) = local_50;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    cVar4 = FUN_1407c3030(param_1 + 0x75);
    if ((cVar4 == '\0') && (cVar4 = FUN_1407c3030(param_1 + 0x88), cVar4 == '\0')) {
      FUN_142de69f0(param_1);
      (**(code **)(*param_1 + 0x448))(param_1,plVar6);
    }
    if (iVar5 == 3) {
      param_1[0x49] = *plVar6;
      param_1[0x4a] = param_1[0x56];
      FUN_140ce30d0(param_1 + 0x4b,param_1 + 0x57);
      param_1[0x53] = param_1[0x5f];
      *(int *)(param_1 + 0x54) = (int)param_1[0x60];
      *(undefined4 *)((longlong)param_1 + 0x2a4) = *(undefined4 *)((longlong)param_1 + 0x304);
      if (((param_1[0x3d] != param_1[0x49]) ||
          (cVar4 = FUN_142de40f0(param_1 + 0x3f,param_1 + 0x4b), cVar4 != '\0')) &&
         (param_1[0x23] != 0)) {
        (**(code **)(*param_1 + 0x260))(param_1);
        (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
      }
    }
    cVar4 = FUN_1407c3030(param_1 + 0x75);
    if ((cVar4 == '\0') && (cVar4 = FUN_1407c3030(param_1 + 0x88), cVar4 == '\0')) {
      plVar6 = (longlong *)FUN_142dead50(plVar6,param_1 + 0x49);
    }
    else {
      plVar6 = param_1 + 0x61;
    }
    lVar3 = plVar6[6];
    lVar7 = *plVar6;
    iVar8 = 0;
    iVar12 = iVar8;
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x52) != '\0')) && (lVar7 != 0)) {
      lVar7 = *(longlong *)(lVar7 + 0x118);
      if (*(char *)(lVar3 + 0x60) == '\x01') {
        lVar7 = param_1[0x3c];
      }
      fVar11 = (float)FUN_142c98860(lVar3 + 0x68,lVar7);
      lVar7 = *plVar6;
      iVar12 = (int)fVar11;
    }
    lVar3 = plVar6[7];
    iVar14 = iVar8;
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x52) != '\0')) && (lVar7 != 0)) {
      lVar7 = *(longlong *)(lVar7 + 0x118);
      if (*(char *)(lVar3 + 0x60) == '\x01') {
        lVar7 = param_1[0x3c];
      }
      fVar11 = (float)FUN_142c98860(lVar3 + 0x68,lVar7);
      lVar7 = *plVar6;
      iVar14 = (int)fVar11;
    }
    lVar3 = plVar6[8];
    iVar13 = iVar8;
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x52) != '\0')) && (lVar7 != 0)) {
      lVar7 = *(longlong *)(lVar7 + 0x118);
      if (*(char *)(lVar3 + 0x60) == '\x01') {
        lVar7 = param_1[0x3c];
      }
      fVar11 = (float)FUN_142c98860(lVar3 + 0x68,lVar7);
      lVar7 = *plVar6;
      iVar13 = (int)fVar11;
    }
    lVar3 = plVar6[9];
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x52) != '\0')) && (lVar7 != 0)) {
      lVar7 = *(longlong *)(lVar7 + 0x118);
      if (*(char *)(lVar3 + 0x60) == '\x01') {
        lVar7 = param_1[0x3c];
      }
      fVar11 = (float)FUN_142c98860(lVar3 + 0x68,lVar7);
      lVar7 = *plVar6;
      iVar8 = (int)fVar11;
    }
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x25c) != '\0')) {
      if ((iVar5 == 3) &&
         (((((int)param_1[0x73] != iVar12 || (*(int *)((longlong)param_1 + 0x39c) != iVar13)) ||
           ((int)param_1[0x74] != iVar14)) || (*(int *)((longlong)param_1 + 0x3a4) != iVar8)))) {
        (**(code **)(*param_1 + 0x260))(param_1);
        param_1[0x73] = CONCAT44(iVar13,iVar12);
        param_1[0x74] = CONCAT44(iVar8,iVar14);
      }
      iVar12 = (int)param_1[0x73];
      iVar13 = *(int *)((longlong)param_1 + 0x39c);
      iVar14 = (int)param_1[0x74];
      iVar8 = *(int *)((longlong)param_1 + 0x3a4);
    }
    *(int *)(param_1 + 0x71) = iVar12;
    *(int *)((longlong)param_1 + 0x38c) = iVar13;
    *(int *)(param_1 + 0x72) = iVar14;
    *(int *)((longlong)param_1 + 0x394) = iVar8;
    (**(code **)(*param_1 + 0x450))(param_1);
    param_1[0x3d] = *plVar6;
    param_1[0x3e] = plVar6[1];
    FUN_140ce30d0(param_1 + 0x3f,plVar6 + 2);
    param_1[0x47] = plVar6[10];
    *(int *)(param_1 + 0x48) = (int)plVar6[0xb];
    *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)((longlong)plVar6 + 0x5c);
    if (((longlong *)param_1[0x3c] != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x3c] + 0x768))(), cVar4 != '\0')) {
      bVar10 = 0;
      pcVar9 = (char *)((longlong)param_1 + 0x371);
      do {
        if (pcVar9[-1] == '\0') {
          if ((*(longlong *)(pcVar9 + -9) != 0) &&
             (cVar4 = FUN_142dee990(*(longlong *)(pcVar9 + -9),param_1), cVar4 != '\0')) {
            lVar3 = *(longlong *)(pcVar9 + -9);
            if ((lVar3 == 0) ||
               ((cVar4 = *(char *)(lVar3 + 0x178), cVar4 == '\0' ||
                (fVar11 = *(float *)(pcVar9 + 3), *(float *)(pcVar9 + 3) = fVar11 - param_2,
                0.0 < fVar11 - param_2)))) goto LAB_142df3cf6;
            if (cVar4 == '\x02') {
              if (*pcVar9 == '\0') {
                *(undefined4 *)(pcVar9 + 3) = *(undefined4 *)(lVar3 + 0x180);
                *pcVar9 = '\x01';
                goto LAB_142df3cd2;
              }
            }
            else {
LAB_142df3cd2:
              if (cVar4 != '\x01') goto LAB_142df3cf6;
            }
            FUN_142df42c0(param_1,lVar3,bVar10,1);
          }
LAB_142df3ce6:
          pcVar9[-9] = '\0';
          pcVar9[-8] = '\0';
          pcVar9[-7] = '\0';
          pcVar9[-6] = '\0';
          pcVar9[-5] = '\0';
          pcVar9[-4] = '\0';
          pcVar9[-3] = '\0';
          pcVar9[-2] = '\0';
          pcVar9[-1] = '\0';
          pcVar9[0] = '\0';
          pcVar9[3] = '\0';
          pcVar9[4] = '\0';
          pcVar9[5] = -0x80;
          pcVar9[6] = -0x41;
        }
        else if (((pcVar9[-1] == '\x01') && (*pcVar9 != '\0')) &&
                ((*(longlong *)(pcVar9 + -9) != 0 &&
                 (cVar4 = FUN_142dee990(*(longlong *)(pcVar9 + -9),param_1), cVar4 == '\0')))) {
          FUN_142e85260(param_1,*(undefined8 *)(pcVar9 + -9),bVar10);
          goto LAB_142df3ce6;
        }
LAB_142df3cf6:
        bVar10 = bVar10 + 1;
        pcVar9 = pcVar9 + 0x10;
      } while (bVar10 < 2);
    }
  }
  return;
}



// FUNCTION 142df3d40 FUN_142df3d40 body=733 status=ok
// SIG undefined FUN_142df3d40(void)

void FUN_142df3d40(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  byte local_18 [8];
  undefined8 local_10;
  
  plVar7 = *(longlong **)(param_1 + 0x118);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  uVar2 = (**(code **)(*plVar7 + 0x148))(plVar7);
  lVar3 = FUN_142c1f5b0(uVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = (**(code **)(*plVar7 + 0x688))(plVar7);
  if (lVar4 != 0) {
    uVar2 = FUN_142df90a0();
    FUN_142c28cb0(lVar3,lVar4,uVar2);
    plVar5 = (longlong *)FUN_142df90a0();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    bVar8 = *(byte *)(lVar6 + 0x48);
    uVar2 = *(undefined8 *)(lVar6 + 0x50);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146859258) &&
       (_Init_thread_header(&DAT_146859258), DAT_146859258 == -1)) {
      DAT_146859248 = 0xff;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
    if (((bVar8 == DAT_146859248) || (*(int *)(lVar3 + 0xd8) <= (int)(uint)bVar8)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + (ulonglong)bVar8 * 8) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar2 = FUN_142df90a0();
      FUN_142c23f40(lVar3,local_18,uVar2);
      plVar5 = (longlong *)FUN_142df90a0();
      lVar6 = plVar5[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x368))(plVar5);
        lVar6 = plVar5[0x1f];
      }
      bVar8 = *(byte *)(lVar6 + 0x48);
      uVar2 = *(undefined8 *)(lVar6 + 0x50);
    }
    local_18[0] = bVar8;
    local_10 = uVar2;
    FUN_142c243a0(lVar3,local_18,lVar4);
  }
  uVar2 = FUN_142c2cf40();
  lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar2);
  if (lVar4 != 0) {
    FUN_142c288e0(lVar4);
    FUN_142c25040(lVar4);
  }
  lVar4 = FUN_1429d7ab0();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    plVar5 = (longlong *)plVar7[0x92];
    if (plVar5 != (longlong *)0x0) {
      uVar2 = UHomeWidget::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if (lVar4 != 0) goto LAB_142df3f4c;
    }
LAB_142df3f32:
    uVar2 = UHomeWidget::GetPrivateStaticClass();
    lVar4 = *plVar7;
  }
  else {
    lVar4 = FUN_14291fb80();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142df3f32;
    uVar2 = UHomeWidget::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar2);
    if (lVar4 != 0) goto LAB_142df3f4c;
    plVar7 = (longlong *)plVar7[0x91];
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    uVar2 = UHomeWidget::GetPrivateStaticClass();
    lVar4 = *plVar7;
  }
  lVar4 = (**(code **)(lVar4 + 0x628))(plVar7,uVar2);
  if (lVar4 == 0) {
    return;
  }
LAB_142df3f4c:
  FUN_142c2b860(lVar3,lVar4);
  return;
}



// FUNCTION 142df4020 FUN_142df4020 body=142 status=ok
// SIG undefined FUN_142df4020(void)

void FUN_142df4020(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_2 != 0) && (param_1 != (longlong *)0x0)) && (-1 < param_3)) {
    lVar1 = (**(code **)(*param_1 + 0x670))();
    if (lVar1 == 0) {
      lVar1 = (**(code **)(*param_1 + 0x668))(param_1);
    }
    if (((*(char *)(param_2 + 0x61) != '\0') || (lVar1 != 0)) &&
       (lVar2 = FUN_142dec8c0(param_1), lVar2 != 0)) {
      FUN_142de0f50(lVar2,lVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142df40b0 FUN_142df40b0 body=74 status=ok
// SIG undefined FUN_142df40b0(void)

void FUN_142df40b0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (-1 < param_3)) &&
     ((*(char *)(param_2 + 0x61) != '\0' && (lVar1 = FUN_142dec8c0(), lVar1 != 0)))) {
    FUN_142de0f50(lVar1,0,param_2,param_3);
  }
  return;
}



// FUNCTION 142df4100 FUN_142df4100 body=440 status=ok
// SIG undefined FUN_142df4100(void)

undefined8 FUN_142df4100(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_1[0x24] == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) {
    return 0;
  }
  lVar5 = param_1[0x24];
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  iVar4 = FUN_1428cf800(lVar5);
  if (iVar4 == 3) {
    return 0;
  }
  lVar5 = FUN_142ded610(param_1,*(undefined1 *)(param_2 + 2),
                        *(undefined1 *)((longlong)param_2 + 0x11),*param_2);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(char *)((longlong)param_1 + 0x25c) == '\0') goto LAB_142df4283;
  if ((((char)param_1[0x33] != '\0') && (param_1[0x34] != 0)) ||
     ((param_1[0x32] != 0 && (*(longlong *)(param_1[0x32] + 0x30) != 0)))) {
    FUN_142c496e0();
  }
  local_48 = 0;
  local_44 = 0;
  local_42 = 0;
  FText::FText(local_40);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*param_1 + 0x420))(param_1,*param_2,param_2[1],&local_48);
  if (*(char *)(param_2 + 2) == '\0') {
    cVar6 = local_48._2_1_;
    cVar3 = local_48._3_1_;
LAB_142df4220:
    if (*(char *)((longlong)param_2 + 0x11) != '\0') {
      cVar6 = cVar3;
    }
  }
  else {
    cVar6 = '\0';
    if (*(char *)(param_2 + 2) == '\x01') {
      cVar6 = (char)local_44;
      cVar3 = local_44._1_1_;
      goto LAB_142df4220;
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (cVar6 == '\0') {
    return 0;
  }
LAB_142df4283:
  *(int *)(param_1 + 0x47) = (int)param_1[0x47] + 1;
  (**(code **)(*param_1 + 0x430))(param_1,param_2);
  return 1;
}



// FUNCTION 142df42c0 FUN_142df42c0 body=108 status=ok
// SIG undefined FUN_142df42c0(void)

void FUN_142df42c0(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      FUN_142e852b0(param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142df4330 FUN_142df4330 body=122 status=ok
// SIG undefined FUN_142df4330(void)

void FUN_142df4330(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x4d8);
  if (puVar1 != (undefined8 *)(param_3 + 0x100)) {
    _Src = *(void **)(param_3 + 0x100);
    iVar2 = *(int *)(param_3 + 0x108);
    *(int *)(param_1 + 0x4e0) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x4e4) == 0)) {
      *(undefined4 *)(param_1 + 0x4e4) = 0;
      return;
    }
    TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
    _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x90);
  }
  return;
}



// FUNCTION 142df43b0 FUN_142df43b0 body=12 status=ok
// SIG undefined FUN_142df43b0(void)

bool FUN_142df43b0(longlong param_1)

{
  return (byte)(*(char *)(param_1 + 3) - 1U) < 2;
}



// FUNCTION 142df43c0 FUN_142df43c0 body=307 status=ok
// SIG undefined FUN_142df43c0(void)

undefined8 FUN_142df43c0(longlong param_1,char param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  float fStack_20;
  undefined4 uStack_1c;
  
  if (param_2 == '\0') {
LAB_142df4402:
    pcVar4 = (char *)(param_1 + 0x6f0);
  }
  else {
    if (param_2 != '\x01') {
      if (param_2 == '\x02') {
        if (*(char *)(param_1 + 0x751) == '\0') {
          pcVar4 = (char *)(param_1 + 0x730);
          goto LAB_142df4409;
        }
        if (*(char *)(param_1 + 0x750) != '\x01') goto LAB_142df43f0;
      }
      goto LAB_142df4402;
    }
LAB_142df43f0:
    pcVar4 = (char *)(param_1 + 0x710);
  }
LAB_142df4409:
  if (*pcVar4 == '\0') {
    fVar2 = *(float *)(pcVar4 + 4);
    if (0.0 < fVar2) {
      uStack_1c = *(undefined4 *)(param_1 + 0x22c);
      fVar8 = *param_3 - *(float *)(param_1 + 0x220);
      fVar7 = param_3[1] - *(float *)(param_1 + 0x224);
      if ((fVar7 * fVar7 + fVar8 * fVar8 <= fVar2 * fVar2) &&
         ((*(float *)(pcVar4 + 8) <= 0.0 ||
          (ABS(param_3[2] - *(float *)(param_1 + 0x228)) <= *(float *)(pcVar4 + 8) * 0.5))))
      goto LAB_142df44dc;
    }
    plVar6 = *(longlong **)(pcVar4 + 0x10);
    plVar1 = plVar6 + *(int *)(pcVar4 + 0x18);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (*plVar6 != 0) {
        local_28 = *(undefined8 *)param_3;
        fStack_20 = param_3[2];
        cVar3 = FUN_1428ca150(*plVar6,&local_28,0,0);
        if (cVar3 != '\0') goto LAB_142df44dc;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_142df44dc:
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 142df4500 FUN_142df4500 body=159 status=ok
// SIG undefined FUN_142df4500(void)

longlong FUN_142df4500(longlong param_1,char param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float *pfVar2;
  uint7 uVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
LAB_142df452a:
      pfVar2 = (float *)(param_1 + 0x714);
      goto LAB_142df4543;
    }
    if (param_2 == '\x02') {
      if (*(char *)(param_1 + 0x751) == '\0') {
        pfVar2 = (float *)(param_1 + 0x734);
        goto LAB_142df4543;
      }
      if (*(char *)(param_1 + 0x750) != '\x01') goto LAB_142df452a;
    }
  }
  pfVar2 = (float *)(param_1 + 0x6f4);
LAB_142df4543:
  fVar1 = *pfVar2;
  uVar3 = (uint7)((ulonglong)pfVar2 >> 8);
  if (0.0 < fVar1) {
    fVar4 = *param_3 - *(float *)(param_1 + 0x220);
    fVar5 = param_3[1] - *(float *)(param_1 + 0x224);
    fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
    if ((fVar1 * param_4 * fVar1 * param_4 <= fVar4) && (fVar4 <= fVar1 * param_5 * fVar1 * param_5)
       ) {
      return CONCAT71(uVar3,1);
    }
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 142df45a0 FUN_142df45a0 body=143 status=ok
// SIG undefined FUN_142df45a0(void)

void FUN_142df45a0(byte param_1,byte param_2,byte param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  
  iVar1 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar5 = 0x20;
  cVar4 = ' ';
  if (param_2 != 0) {
    iVar5 = 0x1f - iVar1;
  }
  uVar2 = param_2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    cVar4 = '\x1f' - (char)iVar1;
  }
  uVar2 = 0;
  for (bVar3 = param_3; bVar3 < (byte)((0x20U - cVar4 & ~(byte)((iVar5 << 0x1a) >> 0x1f)) + param_3)
      ; bVar3 = bVar3 + 1) {
    uVar2 = uVar2 | 1 << (bVar3 & 0x1f);
  }
  *param_4 = (uint)param_1 << (param_3 & 0x1f) | ~uVar2 & *param_4;
  return;
}



// FUNCTION 142df4630 FUN_142df4630 body=53 status=ok
// SIG undefined FUN_142df4630(void)

void FUN_142df4630(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_1458c2118;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142df4670 FUN_142df4670 body=47 status=ok
// SIG undefined FUN_142df4670(void)

longlong FUN_142df4670(void)

{
  if (DAT_146b34ed0 == 0) {
    FUN_141786440(&DAT_146b34ed0,&PTR_GetPrivateStaticClass_1458bd060);
  }
  return DAT_146b34ed0;
}



// FUNCTION 142df46a0 FUN_142df46a0 body=47 status=ok
// SIG undefined FUN_142df46a0(void)

longlong FUN_142df46a0(void)

{
  if (DAT_146b34eb0 == 0) {
    FUN_141786a30(&DAT_146b34eb0,&PTR_FUN_1466ade60);
  }
  return DAT_146b34eb0;
}



// FUNCTION 142df46d0 FUN_142df46d0 body=47 status=ok
// SIG undefined FUN_142df46d0(void)

longlong FUN_142df46d0(void)

{
  if (DAT_146b34eb8 == 0) {
    FUN_141786a30(&DAT_146b34eb8,&PTR_FUN_1466adee0);
  }
  return DAT_146b34eb8;
}



// FUNCTION 142df4700 FUN_142df4700 body=47 status=ok
// SIG undefined FUN_142df4700(void)

longlong FUN_142df4700(void)

{
  if (DAT_146b34ec0 == 0) {
    FUN_141786a30(&DAT_146b34ec0,&PTR_FUN_1466adfd0);
  }
  return DAT_146b34ec0;
}



// FUNCTION 142df4730 FUN_142df4730 body=47 status=ok
// SIG undefined FUN_142df4730(void)

longlong FUN_142df4730(void)

{
  if (DAT_146b34ec8 == 0) {
    FUN_141786a30(&DAT_146b34ec8,&PTR_FUN_1466ae050);
  }
  return DAT_146b34ec8;
}



// FUNCTION 142df4780 FUN_142df4780 body=53 status=ok
// SIG undefined FUN_142df4780(void)

void FUN_142df4780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1458c0808;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df47c0 FUN_142df47c0 body=53 status=ok
// SIG undefined FUN_142df47c0(void)

void FUN_142df47c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1458c0920;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df4800 FUN_142df4800 body=47 status=ok
// SIG undefined FUN_142df4800(void)

longlong FUN_142df4800(void)

{
  if (DAT_146b350e8 == 0) {
    FUN_141786440(&DAT_146b350e8,&PTR_FUN_1458bd440);
  }
  return DAT_146b350e8;
}



// FUNCTION 142df4830 FUN_142df4830 body=47 status=ok
// SIG undefined FUN_142df4830(void)

longlong FUN_142df4830(void)

{
  if (DAT_146b350e0 == 0) {
    FUN_141786a30(&DAT_146b350e0,&PTR_FUN_1466b1850);
  }
  return DAT_146b350e0;
}



// FUNCTION 142df4860 FUN_142df4860 body=53 status=ok
// SIG undefined FUN_142df4860(void)

void FUN_142df4860(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_1458c2230;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df48a0 FUN_142df48a0 body=53 status=ok
// SIG undefined FUN_142df48a0(void)

void FUN_142df48a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1458c2348;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df4900 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAsyncActionLoadPrimaryAssetBase::StaticClass(void)

{
  if (DAT_146b34f70 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"ActorPartSetData",&DAT_146b34f70,FUN_142df6ac0,0x78
                  ,0x10000001,0,L"Engine",&LAB_142df56e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b34f70;
}



// FUNCTION 142df49b0 FUN_142df49b0 body=162 status=ok
// SIG undefined FUN_142df49b0(void)

longlong FUN_142df49b0(void)

{
  if (DAT_146b34fd8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AIDataProvider_AttributeData",&DAT_146b34fd8,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_142df5560,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAIDataProvider::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b34fd8;
}



// FUNCTION 142df4a70 FUN_142df4a70 body=162 status=ok
// SIG undefined FUN_142df4a70(void)

longlong FUN_142df4a70(void)

{
  if (DAT_146b34fe8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AIDataProvider_AttributeInitializationData",
                  &DAT_146b34fe8,FUN_140447710,0x70,0x10000000,0,L"Engine",FUN_142df5590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAIDataProvider::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b34fe8;
}



// FUNCTION 142df4b30 FUN_142df4b30 body=162 status=ok
// SIG undefined FUN_142df4b30(void)

longlong FUN_142df4b30(void)

{
  if (DAT_146b34ff8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AIDataProvider_AttributeInitializer",&DAT_146b34ff8
                  ,FUN_140447710,0x40,0x10000000,0,L"Engine",
                  InternalConstructor<UAutomationEditorTask>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAIDataProvider::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b34ff8;
}



// FUNCTION 142df4bf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidget::GetPrivateStaticClass(void)

{
  if (DAT_146b34ed8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"ActorPartData",&DAT_146b34ed8,FUN_142df6a90,0x100,
                  0x10000001,0,L"Engine",&LAB_142df56a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b34ed8;
}



// FUNCTION 142df4cb0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPawnAction_BlueprintBase::GetPrivateStaticClass(void)

{
  if (DAT_146b34f30 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"ActorPartSelectionData",&DAT_146b34f30,
                  FUN_140447710,0x98,0x10000001,0,L"Engine",&LAB_142df56c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b34f30;
}



// FUNCTION 142df4d60 FUN_142df4d60 body=162 status=ok
// SIG undefined FUN_142df4d60(void)

longlong FUN_142df4d60(void)

{
  if (DAT_146b34fb8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AIChargeData",&DAT_146b34fb8,FUN_140447710,0x260,
                  0x10000000,0,L"Engine",&LAB_142df5540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b34fb8;
}



// FUNCTION 142df4e10 FUN_142df4e10 body=53 status=ok
// SIG undefined FUN_142df4e10(void)

void FUN_142df4e10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1458c0aa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df4e50 FUN_142df4e50 body=53 status=ok
// SIG undefined FUN_142df4e50(void)

void FUN_142df4e50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1458c0bb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df4e90 FUN_142df4e90 body=53 status=ok
// SIG undefined FUN_142df4e90(void)

void FUN_142df4e90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1458c0cd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df4ee0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULevelSequencePlayer::GetPrivateStaticClass(void)

{
  if (DAT_146b35068 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AIDodgeComponent",&DAT_146b35068,FUN_142df6a30,
                  0x908,0x10000000,0,L"Engine",&LAB_142df5620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b35068;
}



// FUNCTION 142df4fa0 FUN_142df4fa0 body=47 status=ok
// SIG undefined FUN_142df4fa0(void)

longlong FUN_142df4fa0(void)

{
  if (DAT_146b34f68 == 0) {
    FUN_141786440(&DAT_146b34f68,&PTR_StaticClass_1458bf320);
  }
  return DAT_146b34f68;
}



// FUNCTION 142df4fd0 FUN_142df4fd0 body=47 status=ok
// SIG undefined FUN_142df4fd0(void)

longlong FUN_142df4fd0(void)

{
  if (DAT_146b34f60 == 0) {
    FUN_141786a30(&DAT_146b34f60,&PTR_FUN_1466aee10);
  }
  return DAT_146b34f60;
}



// FUNCTION 142df5000 FUN_142df5000 body=47 status=ok
// SIG undefined FUN_142df5000(void)

longlong FUN_142df5000(void)

{
  if (DAT_146b35038 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b35038,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b03c0);
  }
  return DAT_146b35038;
}



// FUNCTION 142df5030 FUN_142df5030 body=47 status=ok
// SIG undefined FUN_142df5030(void)

longlong FUN_142df5030(void)

{
  if (DAT_146b35060 == 0) {
    FUN_141786440(&DAT_146b35060,&PTR_GetPrivateStaticClass_1458bfb80);
  }
  return DAT_146b35060;
}



// FUNCTION 142df5060 FUN_142df5060 body=47 status=ok
// SIG undefined FUN_142df5060(void)

longlong FUN_142df5060(void)

{
  if (DAT_146b35040 == 0) {
    FUN_141786a30(&DAT_146b35040,&PTR_FUN_1466b0510);
  }
  return DAT_146b35040;
}



// FUNCTION 142df5090 FUN_142df5090 body=47 status=ok
// SIG undefined FUN_142df5090(void)

longlong FUN_142df5090(void)

{
  if (DAT_146b35048 == 0) {
    FUN_141786a30(&DAT_146b35048,&PTR_FUN_1466b0720);
  }
  return DAT_146b35048;
}



// FUNCTION 142df50c0 FUN_142df50c0 body=47 status=ok
// SIG undefined FUN_142df50c0(void)

longlong FUN_142df50c0(void)

{
  if (DAT_146b35050 == 0) {
    FUN_141786a30(&DAT_146b35050,&PTR_FUN_1466b0860);
  }
  return DAT_146b35050;
}



// FUNCTION 142df50f0 FUN_142df50f0 body=47 status=ok
// SIG undefined FUN_142df50f0(void)

longlong FUN_142df50f0(void)

{
  if (DAT_146b35058 == 0) {
    FUN_141786a30(&DAT_146b35058,&PTR_FUN_1466b09e0);
  }
  return DAT_146b35058;
}



// FUNCTION 142df5120 FUN_142df5120 body=53 status=ok
// SIG undefined FUN_142df5120(void)

void FUN_142df5120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1458c0e18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df5160 FUN_142df5160 body=53 status=ok
// SIG undefined FUN_142df5160(void)

void FUN_142df5160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1458c19f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df51a0 FUN_142df51a0 body=53 status=ok
// SIG undefined FUN_142df51a0(void)

void FUN_142df51a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b8;
    *puVar1 = &PTR_FUN_1458c1b08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df51f0 FUN_142df51f0 body=53 status=ok
// SIG undefined FUN_142df51f0(void)

void FUN_142df51f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_1458c1c20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df5230 FUN_142df5230 body=162 status=ok
// SIG undefined FUN_142df5230(void)

longlong FUN_142df5230(void)

{
  if (DAT_146b34e88 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"ActorAttributeContextResolver",&DAT_146b34e88,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",&LAB_142df5680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1413c1cb0,&LAB_140447700,0);
  }
  return DAT_146b34e88;
}



// FUNCTION 142df52f0 FUN_142df52f0 body=53 status=ok
// SIG undefined FUN_142df52f0(void)

void FUN_142df52f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1458c0f70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df5340 FUN_142df5340 body=53 status=ok
// SIG undefined FUN_142df5340(void)

void FUN_142df5340(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1458c1088;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df5380 FUN_142df5380 body=53 status=ok
// SIG undefined FUN_142df5380(void)

void FUN_142df5380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1458c1d80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df53d0 FUN_142df53d0 body=162 status=ok
// SIG undefined FUN_142df53d0(void)

longlong FUN_142df53d0(void)

{
  if (DAT_146b350f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AISense_Bullet",&DAT_146b350f0,FUN_142df6a60,0xf8,
                  0x10000004,0,L"Game",&LAB_142df5640,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c33440,&LAB_140447700,0);
  }
  return DAT_146b350f0;
}



// FUNCTION 142df5490 FUN_142df5490 body=162 status=ok
// SIG undefined FUN_142df5490(void)

longlong FUN_142df5490(void)

{
  if (DAT_146b350b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AimControlData",&DAT_146b350b8,FUN_140447710,0x98,
                  0x10000000,0,L"Engine",FUN_142df5700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b350b8;
}



// FUNCTION 142df5560 FUN_142df5560 body=41 status=ok
// SIG undefined FUN_142df5560(void)

void FUN_142df5560(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAIDataProvider::UAIDataProvider(puVar1,param_1);
    *puVar1 = &PTR_FUN_1458c1200;
  }
  return;
}



// FUNCTION 142df5590 FUN_142df5590 body=73 status=ok
// SIG undefined FUN_142df5590(void)

void FUN_142df5590(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAIDataProvider::UAIDataProvider(puVar1,param_1);
    *puVar1 = &PTR_FUN_1458c1488;
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0x3f800000;
  }
  return;
}



// FUNCTION 142df55e0 InternalConstructor<UAutomationEditorTask> body=49 status=ok
// SIG undefined InternalConstructor<UAutomationEditorTask>(void)

void InternalConstructor<UAutomationEditorTask>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UAIDataProvider::UAIDataProvider(puVar1,param_1);
    *puVar1 = &PTR_FUN_1458c1710;
    puVar1[5] = 0;
  }
  return;
}



// FUNCTION 142df5700 FUN_142df5700 body=170 status=ok
// SIG undefined FUN_142df5700(void)

void FUN_142df5700(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined4 *)(puVar1 + 6) = 0x40000000;
    *puVar1 = &PTR_FUN_1458c1e98;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x44340000;
    *(undefined4 *)(puVar1 + 7) = 0x42200000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x42200000;
    *(undefined4 *)(puVar1 + 8) = 0x3e800000;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x3e4ccccd;
    *(undefined4 *)(puVar1 + 0x10) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x3e4ccccd;
    *(undefined4 *)(puVar1 + 0x11) = 0x3f59999a;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 0x3f000000;
    *(undefined4 *)(puVar1 + 0x12) = 0x3f800000;
  }
  return;
}



// FUNCTION 142df57b0 operator= body=113 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FMeshToMeshVertData,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 6);
  }
  return param_1;
}



// FUNCTION 142df5830 FUN_142df5830 body=688 status=ok
// SIG undefined FUN_142df5830(void)

undefined1 * FUN_142df5830(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x98] = param_2[0x98];
  param_1[0x99] = param_2[0x99];
  param_1[0x9a] = param_2[0x9a];
  param_1[0x9b] = param_2[0x9b];
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  param_1[0x118] = param_2[0x118];
  param_1[0x119] = param_2[0x119];
  param_1[0x11a] = param_2[0x11a];
  param_1[0x11b] = param_2[0x11b];
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  uVar1 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar1 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  param_1[0x198] = param_2[0x198];
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  param_1[0x1a0] = param_2[0x1a0];
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  param_1[0x1a8] = param_2[0x1a8];
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  param_1[0x1b0] = param_2[0x1b0];
  return param_1;
}



// FUNCTION 142df5ae0 FUN_142df5ae0 body=98 status=ok
// SIG undefined FUN_142df5ae0(void)

longlong FUN_142df5ae0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142df5b60 FUN_142df5b60 body=50 status=ok
// SIG undefined FUN_142df5b60(void)

void FUN_142df5b60(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x98);
  FUN_142de2eb0(param_2);
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  return;
}



// FUNCTION 142df5c00 FUN_142df5c00 body=85 status=ok
// SIG undefined FUN_142df5c00(void)

void FUN_142df5c00(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x78);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0x43b40000;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x43b40000;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x43b40000;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0x43b40000;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0x43b40000;
  *(undefined4 *)((longlong)param_2 + 100) = 0x43b40000;
  return;
}



// FUNCTION 142df5d60 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FWrestlerSave>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142df5830(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1b8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142df5db0 Copy body=81 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FStatusEffectSpawnability>::Copy
          (undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = param_2[param_3];
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 8,param_2 + param_3 + 8);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142df5e10 FUN_142df5e10 body=124 status=ok
// SIG undefined FUN_142df5e10(void)

undefined8 FUN_142df5e10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 9);
    do {
      *(undefined8 *)(puVar1 + -9) = *(undefined8 *)(puVar1 + param_3 + -9);
      puVar1[-1] = puVar1[param_3 + -1];
      *puVar1 = puVar1[param_3];
      puVar1[1] = puVar1[param_3 + 1];
      *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(puVar1 + param_3 + 3);
      puVar1[0xb] = puVar1[param_3 + 0xb];
      TArray<FMeshToMeshVertData,FDefaultAllocator>::operator=(puVar1 + 0xf,puVar1 + param_3 + 0xf);
      puVar1 = puVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142df5e90 FUN_142df5e90 body=320 status=ok
// SIG undefined FUN_142df5e90(void)

undefined8 FUN_142df5e90(undefined8 param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  uint local_res20;
  
  uVar4 = (ulonglong)param_4;
  local_res20 = param_4;
  if (param_4 != 0) {
    do {
      uVar3 = (uint)uVar4;
      if (param_2 != param_3) {
        iVar7 = (int)param_2[1];
        if (iVar7 != 0) {
          plVar5 = (longlong *)(*param_2 + 8);
          do {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 3;
            iVar7 = iVar7 + -1;
            uVar3 = local_res20;
          } while (iVar7 != 0);
        }
        iVar7 = (int)param_3[1];
        lVar2 = *param_3;
        *(int *)(param_2 + 1) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar7);
          puVar6 = (undefined1 *)*param_2;
          uVar3 = local_res20;
          if (iVar7 != 0) {
            puVar8 = (undefined8 *)(lVar2 + 8);
            do {
              *puVar6 = *(undefined1 *)(puVar8 + -1);
              *(undefined8 *)(puVar6 + 8) = 0;
              iVar1 = *(int *)(puVar8 + 1);
              _Src = (void *)*puVar8;
              *(int *)(puVar6 + 0x10) = iVar1;
              if (iVar1 == 0) {
                *(undefined4 *)(puVar6 + 0x14) = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar6 + 8,iVar1,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + 8),_Src,(longlong)iVar1 << 3);
              }
              puVar6 = puVar6 + 0x18;
              puVar8 = puVar8 + 3;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
      param_3 = param_3 + 2;
      local_res20 = uVar3 - 1;
      uVar4 = (ulonglong)local_res20;
      param_2 = param_2 + 2;
    } while (local_res20 != 0);
    uVar4 = 0;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 142df5fd0 FUN_142df5fd0 body=342 status=ok
// SIG undefined FUN_142df5fd0(void)

undefined8 FUN_142df5fd0(undefined8 param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  uint local_res20;
  
  uVar4 = (ulonglong)param_4;
  local_res20 = param_4;
  if (param_4 != 0) {
    do {
      uVar3 = (uint)uVar4;
      if (param_2 != param_3) {
        iVar7 = (int)param_2[1];
        if (iVar7 != 0) {
          plVar5 = (longlong *)(*param_2 + 8);
          do {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 3;
            iVar7 = iVar7 + -1;
            uVar3 = local_res20;
          } while (iVar7 != 0);
        }
        iVar7 = (int)param_3[1];
        lVar2 = *param_3;
        *(int *)(param_2 + 1) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar7);
          puVar6 = (undefined1 *)*param_2;
          uVar3 = local_res20;
          if (iVar7 != 0) {
            puVar8 = (undefined1 *)(lVar2 + 1);
            do {
              *puVar6 = puVar8[-1];
              puVar6[1] = *puVar8;
              *(undefined8 *)(puVar6 + 8) = 0;
              iVar1 = *(int *)(puVar8 + 0xf);
              _Src = *(void **)(puVar8 + 7);
              *(int *)(puVar6 + 0x10) = iVar1;
              if (iVar1 == 0) {
                *(undefined4 *)(puVar6 + 0x14) = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar6 + 8,iVar1,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + 8),_Src,(longlong)iVar1 << 3);
              }
              puVar6 = puVar6 + 0x18;
              puVar8 = puVar8 + 0x18;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
      param_3 = param_3 + 2;
      local_res20 = uVar3 - 1;
      uVar4 = (ulonglong)local_res20;
      param_2 = param_2 + 2;
    } while (local_res20 != 0);
    uVar4 = 0;
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 142df6130 FUN_142df6130 body=88 status=ok
// SIG undefined FUN_142df6130(void)

undefined8 FUN_142df6130(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8 + param_2);
      *(undefined1 *)(param_2 + -7) = *(undefined1 *)(param_3 + -7 + param_2);
      TArray<FName,FDefaultAllocator>::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142df6190 Copy body=87 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimSequenceTrackContainer>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2,param_3 + param_2);
      TArray<FName,FDefaultAllocator>::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142df61f0 FUN_142df61f0 body=432 status=ok
// SIG undefined FUN_142df61f0(void)

undefined8 FUN_142df61f0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  
  if (param_4 != 0) {
    plVar10 = (longlong *)(param_3 + 0x18);
    do {
      *param_2 = (int)plVar10[-3];
      TArray<FName,FDefaultAllocator>::operator=(param_2 + 2,plVar10 + -2);
      plVar1 = (longlong *)(param_2 + 6);
      if (plVar1 != plVar10) {
        plVar5 = (longlong *)*plVar1;
        for (iVar8 = param_2[8]; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (plVar5[2] != 0) {
            FMemory::Free();
          }
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 4;
        }
        iVar8 = (int)plVar10[1];
        lVar3 = *plVar10;
        param_2[8] = iVar8;
        if ((iVar8 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
          puVar7 = (undefined8 *)*plVar1;
          if (iVar8 != 0) {
            piVar9 = (int *)(lVar3 + 8);
            puVar6 = (undefined4 *)((longlong)puVar7 + 0x1c);
            do {
              *puVar7 = 0;
              iVar2 = *piVar9;
              pvVar4 = *(void **)(piVar9 + -2);
              puVar6[-5] = iVar2;
              if (iVar2 == 0) {
                puVar6[-4] = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar7,iVar2,0);
                _guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar4,(longlong)iVar2 << 3);
              }
              *(undefined8 *)(puVar6 + -3) = 0;
              iVar2 = piVar9[4];
              pvVar4 = *(void **)(piVar9 + 2);
              puVar6[-1] = iVar2;
              if (iVar2 == 0) {
                *puVar6 = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (puVar6 + -3,iVar2,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + -3),pvVar4,(longlong)iVar2 << 3);
              }
              puVar7 = puVar7 + 4;
              puVar6 = puVar6 + 8;
              piVar9 = piVar9 + 8;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
      }
      plVar10 = plVar10 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142df63a0 FUN_142df63a0 body=211 status=ok
// SIG undefined FUN_142df63a0(void)

undefined8 FUN_142df63a0(undefined8 param_1,uint *param_2,longlong param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  void *_Src;
  uint *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (uint *)(param_3 + 8);
    do {
      puVar1 = param_2 + 2;
      *param_2 = *param_2 ^ (puVar3[-2] ^ *param_2) & 1;
      if (puVar1 != puVar3) {
        uVar2 = puVar3[2];
        _Src = *(void **)puVar3;
        param_2[4] = uVar2;
        if ((uVar2 == 0) && (param_2[5] == 0)) {
          param_2[5] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,uVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)puVar1,_Src,(longlong)(int)uVar2 << 3);
        }
      }
      TArray<FMeshToMeshVertData,FDefaultAllocator>::operator=(param_2 + 6,puVar3 + 4);
      puVar3 = puVar3 + 10;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142df6480 Destruct body=43 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FNiagaraEmitterScriptProperties>::Destruct
               (undefined8 param_1,longlong param_2)

{
  TArray<FHmdUserProfileField,FDefaultAllocator>::~TArray<FHmdUserProfileField,FDefaultAllocator>
            (param_2 + 0x18);
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142df64b0 FUN_142df64b0 body=55 status=ok
// SIG undefined FUN_142df64b0(void)

void FUN_142df64b0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b34d08 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34d08 = GetStaticEnum(FUN_142df73c0,uVar1,L"EAIDodgeType");
  }
  return;
}



// FUNCTION 142df64f0 FUN_142df64f0 body=55 status=ok
// SIG undefined FUN_142df64f0(void)

void FUN_142df64f0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b34d00 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34d00 = GetStaticEnum(FUN_142df73f0,uVar1,L"EActorPartReplacementMode");
  }
  return;
}



// FUNCTION 142df6530 FUN_142df6530 body=55 status=ok
// SIG undefined FUN_142df6530(void)

void FUN_142df6530(void)

{
  undefined8 uVar1;
  
  if (DAT_146b34ce8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34ce8 = GetStaticEnum(FUN_142df7420,uVar1,L"EActorPartTypeSelectionOverrideMode");
  }
  return;
}



// FUNCTION 142df6570 FUN_142df6570 body=55 status=ok
// SIG undefined FUN_142df6570(void)

void FUN_142df6570(void)

{
  undefined8 uVar1;
  
  if (DAT_146b34d10 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34d10 = GetStaticEnum(FUN_142df7450,uVar1,L"EActorTagQueryMode");
  }
  return;
}



// FUNCTION 142df65b0 FUN_142df65b0 body=55 status=ok
// SIG undefined FUN_142df65b0(void)

void FUN_142df65b0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b34cf0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34cf0 = GetStaticEnum(FUN_142df7480,uVar1,L"EChargeCurveType");
  }
  return;
}



// FUNCTION 142df65f0 FUN_142df65f0 body=55 status=ok
// SIG undefined FUN_142df65f0(void)

void FUN_142df65f0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b34cf8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34cf8 = GetStaticEnum(FUN_142df74b0,uVar1,L"ERelativeSizeCharge");
  }
  return;
}



// FUNCTION 142df6630 FUN_142df6630 body=151 status=ok
// SIG undefined FUN_142df6630(void)

longlong FUN_142df6630(void)

{
  if (DAT_146b34e78 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AchievementUtility",&DAT_146b34e78,FUN_140447710,
                  0x28,0x10000000,0,L"Engine",&LAB_142df5660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b34e78;
}



// FUNCTION 142df66d0 FUN_142df66d0 body=162 status=ok
// SIG undefined FUN_142df66d0(void)

longlong FUN_142df66d0(void)

{
  if (DAT_146b35088 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AimAssistParameters",&DAT_146b35088,FUN_140447710,
                  0x30,0x10000000,0,L"Engine",FUN_1405fc740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b35088;
}



// FUNCTION 142df6780 FUN_142df6780 body=162 status=ok
// SIG undefined FUN_142df6780(void)

longlong FUN_142df6780(void)

{
  if (DAT_146b35098 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AimAssistStrategy",&DAT_146b35098,FUN_140447710,
                  0x28,0x10000001,0,L"Engine",&LAB_142929740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,UCharacterMovementComponentGunfire::GetPrivateStaticClass,0);
  }
  return DAT_146b35098;
}



// FUNCTION 142df6830 FUN_142df6830 body=6 status=ok
// SIG undefined FUN_142df6830(void)

undefined8 FUN_142df6830(void)

{
  return 0xab1aeffb;
}



// FUNCTION 142df6840 FUN_142df6840 body=6 status=ok
// SIG undefined FUN_142df6840(void)

undefined8 FUN_142df6840(void)

{
  return 0x1c52edd3;
}



// FUNCTION 142df6850 FUN_142df6850 body=6 status=ok
// SIG undefined FUN_142df6850(void)

undefined8 FUN_142df6850(void)

{
  return 0x4c6b4919;
}



// FUNCTION 142df6860 FUN_142df6860 body=6 status=ok
// SIG undefined FUN_142df6860(void)

undefined8 FUN_142df6860(void)

{
  return 0x116c45ef;
}



// FUNCTION 142df6870 FUN_142df6870 body=6 status=ok
// SIG undefined FUN_142df6870(void)

undefined8 FUN_142df6870(void)

{
  return 0xef60fb4b;
}



// FUNCTION 142df6880 FUN_142df6880 body=6 status=ok
// SIG undefined FUN_142df6880(void)

undefined8 FUN_142df6880(void)

{
  return 0x9c72dbd3;
}



// FUNCTION 142df6890 FUN_142df6890 body=6 status=ok
// SIG undefined FUN_142df6890(void)

undefined8 FUN_142df6890(void)

{
  return 0xb8c9b79f;
}



// FUNCTION 142df68a0 FUN_142df68a0 body=6 status=ok
// SIG undefined FUN_142df68a0(void)

undefined8 FUN_142df68a0(void)

{
  return 0x28432a8a;
}



// FUNCTION 142df68b0 FUN_142df68b0 body=6 status=ok
// SIG undefined FUN_142df68b0(void)

undefined8 FUN_142df68b0(void)

{
  return 0xe5127e0b;
}



// FUNCTION 142df68c0 FUN_142df68c0 body=6 status=ok
// SIG undefined FUN_142df68c0(void)

undefined8 FUN_142df68c0(void)

{
  return 0xce85714a;
}



// FUNCTION 142df68d0 FUN_142df68d0 body=6 status=ok
// SIG undefined FUN_142df68d0(void)

undefined8 FUN_142df68d0(void)

{
  return 0x175e218a;
}



// FUNCTION 142df68e0 FUN_142df68e0 body=6 status=ok
// SIG undefined FUN_142df68e0(void)

undefined8 FUN_142df68e0(void)

{
  return 0xdacaa283;
}



// FUNCTION 142df68f0 FUN_142df68f0 body=6 status=ok
// SIG undefined FUN_142df68f0(void)

undefined8 FUN_142df68f0(void)

{
  return 0xfaf9aeb6;
}



// FUNCTION 142df6900 FUN_142df6900 body=6 status=ok
// SIG undefined FUN_142df6900(void)

undefined8 FUN_142df6900(void)

{
  return 0x1693992e;
}



// FUNCTION 142df6910 FUN_142df6910 body=6 status=ok
// SIG undefined FUN_142df6910(void)

undefined8 FUN_142df6910(void)

{
  return 0x317c7db0;
}



// FUNCTION 142df6920 FUN_142df6920 body=6 status=ok
// SIG undefined FUN_142df6920(void)

undefined8 FUN_142df6920(void)

{
  return 0x5d3d1805;
}



// FUNCTION 142df6930 FUN_142df6930 body=6 status=ok
// SIG undefined FUN_142df6930(void)

undefined8 FUN_142df6930(void)

{
  return 0xd66f0a57;
}



// FUNCTION 142df6940 FUN_142df6940 body=6 status=ok
// SIG undefined FUN_142df6940(void)

undefined8 FUN_142df6940(void)

{
  return 0x729f411e;
}



// FUNCTION 142df6950 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_142d90ad0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142df69c0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_142d90b20(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142df6a30 FUN_142df6a30 body=34 status=ok
// SIG undefined FUN_142df6a30(void)

void FUN_142df6a30(void)

{
  undefined8 uVar1;
  
  uVar1 = ULevelSequencePlayer::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_TriggerBulletDodge_1458c1d40,4);
  return;
}



// FUNCTION 142df6a60 FUN_142df6a60 body=34 status=ok
// SIG undefined FUN_142df6a60(void)

void FUN_142df6a60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142df53d0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ReportBulletEvent_1458c2460,1);
  return;
}



// FUNCTION 142df6a90 FUN_142df6a90 body=34 status=ok
// SIG undefined FUN_142df6a90(void)

void FUN_142df6a90(void)

{
  undefined8 uVar1;
  
  uVar1 = UWidget::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_EnumerateGestaltMeshPartNames_1458c0a40,4);
  return;
}



// FUNCTION 142df6ac0 FUN_142df6ac0 body=34 status=ok
// SIG undefined FUN_142df6ac0(void)

void FUN_142df6ac0(void)

{
  undefined8 uVar1;
  
  uVar1 = UAsyncActionLoadPrimaryAssetBase::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnumeratePartListForPartType_1458c0f30,1)
  ;
  return;
}



// FUNCTION 142df6af0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RefPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b350d0 == 0) {
    uVar1 = FUN_142df6830();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b350d0 = GetStaticStruct(FUN_142df74e0,uVar2,L"AIBulletEvent",0x38,uVar1);
  }
  return;
}



// FUNCTION 142df6b50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34fc0 == 0) {
    uVar1 = FUN_142df6840();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34fc0 = GetStaticStruct(FUN_142df7510,uVar2,L"AIChargeState",0x18,uVar1);
  }
  return;
}



// FUNCTION 142df6bb0 FUN_142df6bb0 body=82 status=ok
// SIG undefined FUN_142df6bb0(void)

void FUN_142df6bb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b35030 == 0) {
    uVar1 = FUN_142df6850();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b35030 = GetStaticStruct(FUN_142df5000,uVar2,L"AIDodgeBasicData",0x98,uVar1);
  }
  return;
}



// FUNCTION 142df6c10 FUN_142df6c10 body=82 status=ok
// SIG undefined FUN_142df6c10(void)

void FUN_142df6c10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b35020 == 0) {
    uVar1 = FUN_142df6860();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b35020 = GetStaticStruct(FUN_142df7540,uVar2,L"AIDodgeData",0x1b8,uVar1);
  }
  return;
}



// FUNCTION 142df6c70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSubmixEffectConvolutionReverbSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b35010 == 0) {
    uVar1 = FUN_142df6870();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b35010 = GetStaticStruct(FUN_142df7570,uVar2,L"AIDodgeInstance",0x20,uVar1);
  }
  return;
}



// FUNCTION 142df6cd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34ef8 == 0) {
    uVar1 = FUN_142df6890();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34ef8 = GetStaticStruct(FUN_142df75a0,uVar2,L"ActorPartList",0x18,uVar1);
  }
  return;
}



// FUNCTION 142df6d30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FReferenceBoneFrame::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34f40 == 0) {
    uVar1 = FUN_142df6880();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34f40 = GetStaticStruct(FUN_142df75d0,uVar2,L"ActorPartListData",0x28,uVar1);
  }
  return;
}



// FUNCTION 142df6d90 FUN_142df6d90 body=82 status=ok
// SIG undefined FUN_142df6d90(void)

void FUN_142df6d90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34ee8 == 0) {
    uVar1 = FUN_142df68a0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34ee8 =
         GetStaticStruct(FUN_142df7600,uVar2,L"ActorPartSelectionOverrideData",0x10,uVar1);
  }
  return;
}



// FUNCTION 142df6df0 FUN_142df6df0 body=82 status=ok
// SIG undefined FUN_142df6df0(void)

void FUN_142df6df0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34f80 == 0) {
    uVar1 = FUN_142df68b0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34f80 = GetStaticStruct(FUN_142df7630,uVar2,L"ActorTagCompositeQuery",0x10,uVar1);
  }
  return;
}



// FUNCTION 142df6e50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPoseDriverTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34f90 == 0) {
    uVar1 = FUN_142df68c0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34f90 = GetStaticStruct(FUN_142df7660,uVar2,L"ActorTagQuery",0x18,uVar1);
  }
  return;
}



// FUNCTION 142df6eb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSubmixEffectConvolutionReverbSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b35070 == 0) {
    uVar1 = FUN_142df68d0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b35070 = GetStaticStruct(FUN_142df7690,uVar2,L"AimAssistSmoothingProperties",0x20,uVar1);
  }
  return;
}



// FUNCTION 142df6f10 FUN_142df6f10 body=82 status=ok
// SIG undefined FUN_142df6f10(void)

void FUN_142df6f10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b350c0 == 0) {
    uVar1 = FUN_142df68e0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b350c0 = GetStaticStruct(FUN_142df76c0,uVar2,L"AimControlParameters",0x78,uVar1);
  }
  return;
}



// FUNCTION 142df6f70 FUN_142df6f70 body=82 status=ok
// SIG undefined FUN_142df6f70(void)

void FUN_142df6f70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b350a0 == 0) {
    uVar1 = FUN_142df68f0();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b350a0 = GetStaticStruct(FUN_142df76f0,uVar2,L"AimSensitivityLevelParameters",0x1c,uVar1)
    ;
  }
  return;
}



// FUNCTION 142df6fd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSubmixEffectConvolutionReverbSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34ea0 == 0) {
    uVar1 = FUN_142df6900();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34ea0 =
         GetStaticStruct(FUN_142df7720,uVar2,L"ConditionalMultiSelectionGestaltPartNameData",0x20,
                         uVar1);
  }
  return;
}



// FUNCTION 142df7030 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FReferenceBoneFrame::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34e90 == 0) {
    uVar1 = FUN_142df6910();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34e90 =
         GetStaticStruct(FUN_142df7750,uVar2,L"MultiSelectionGestaltPartNameData",0x28,uVar1);
  }
  return;
}



// FUNCTION 142df7090 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FReferenceBoneFrame::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34f08 == 0) {
    uVar1 = FUN_142df6920();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34f08 = GetStaticStruct(FUN_142df7780,uVar2,L"RuntimeActorPartListData",0x28,uVar1);
  }
  return;
}



// FUNCTION 142df70f0 FUN_142df70f0 body=82 status=ok
// SIG undefined FUN_142df70f0(void)

void FUN_142df70f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34f18 == 0) {
    uVar1 = FUN_142df6930();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34f18 = GetStaticStruct(FUN_142df77b0,uVar2,L"RuntimeActorPartListPartTypeData",8,uVar1)
    ;
  }
  return;
}



// FUNCTION 142df7150 FUN_142df7150 body=82 status=ok
// SIG undefined FUN_142df7150(void)

void FUN_142df7150(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b34f50 == 0) {
    uVar1 = FUN_142df6940();
    uVar2 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    DAT_146b34f50 = GetStaticStruct(FUN_142df77e0,uVar2,L"WeightedActorPartData",0x40,uVar1);
  }
  return;
}



// FUNCTION 142df71b0 FUN_142df71b0 body=47 status=ok
// SIG undefined FUN_142df71b0(void)

longlong FUN_142df71b0(void)

{
  if (DAT_146b34fb0 == 0) {
    FUN_141786440(&DAT_146b34fb0,&PTR_FUN_1458be360);
  }
  return DAT_146b34fb0;
}



// FUNCTION 142df71e0 FUN_142df71e0 body=47 status=ok
// SIG undefined FUN_142df71e0(void)

longlong FUN_142df71e0(void)

{
  if (DAT_146b34fd0 == 0) {
    FUN_141786440(&DAT_146b34fd0,&PTR_FUN_1458bd660);
  }
  return DAT_146b34fd0;
}



// FUNCTION 142df7210 FUN_142df7210 body=47 status=ok
// SIG undefined FUN_142df7210(void)

longlong FUN_142df7210(void)

{
  if (DAT_146b34fe0 == 0) {
    FUN_141786440(&DAT_146b34fe0,&PTR_FUN_1458bd820);
  }
  return DAT_146b34fe0;
}



// FUNCTION 142df7240 FUN_142df7240 body=47 status=ok
// SIG undefined FUN_142df7240(void)

longlong FUN_142df7240(void)

{
  if (DAT_146b34ff0 == 0) {
    FUN_141786440(&DAT_146b34ff0,&PTR_FUN_1458bda70);
  }
  return DAT_146b34ff0;
}



// FUNCTION 142df7270 FUN_142df7270 body=47 status=ok
// SIG undefined FUN_142df7270(void)

longlong FUN_142df7270(void)

{
  if (DAT_146b34e70 == 0) {
    FUN_141786440(&DAT_146b34e70,&PTR_thunk_FUN_142df6630_1458bdc20);
  }
  return DAT_146b34e70;
}



// FUNCTION 142df72a0 FUN_142df72a0 body=47 status=ok
// SIG undefined FUN_142df72a0(void)

longlong FUN_142df72a0(void)

{
  if (DAT_146b34e80 == 0) {
    FUN_141786440(&DAT_146b34e80,&PTR_FUN_1458bf690);
  }
  return DAT_146b34e80;
}



// FUNCTION 142df72d0 FUN_142df72d0 body=47 status=ok
// SIG undefined FUN_142df72d0(void)

longlong FUN_142df72d0(void)

{
  if (DAT_146b34f28 == 0) {
    FUN_141786440(&DAT_146b34f28,&PTR_GetPrivateStaticClass_1458be9f0);
  }
  return DAT_146b34f28;
}



// FUNCTION 142df7300 FUN_142df7300 body=47 status=ok
// SIG undefined FUN_142df7300(void)

longlong FUN_142df7300(void)

{
  if (DAT_146b35080 == 0) {
    FUN_141786440(&DAT_146b35080,&PTR_thunk_FUN_142df66d0_1458c0160);
  }
  return DAT_146b35080;
}



// FUNCTION 142df7330 FUN_142df7330 body=47 status=ok
// SIG undefined FUN_142df7330(void)

longlong FUN_142df7330(void)

{
  if (DAT_146b35090 == 0) {
    FUN_141786440(&DAT_146b35090,&PTR_thunk_FUN_142df6780_1458c0280);
  }
  return DAT_146b35090;
}



// FUNCTION 142df7360 FUN_142df7360 body=47 status=ok
// SIG undefined FUN_142df7360(void)

longlong FUN_142df7360(void)

{
  if (DAT_146b350b0 == 0) {
    FUN_141786440(&DAT_146b350b0,&PTR_FUN_1458bc730);
  }
  return DAT_146b350b0;
}



// FUNCTION 142df7390 FUN_142df7390 body=47 status=ok
// SIG undefined FUN_142df7390(void)

longlong FUN_142df7390(void)

{
  if (DAT_146b35000 == 0) {
    FUN_141786a30(&DAT_146b35000,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466affc0);
  }
  return DAT_146b35000;
}



// FUNCTION 142df73c0 FUN_142df73c0 body=47 status=ok
// SIG undefined FUN_142df73c0(void)

longlong FUN_142df73c0(void)

{
  if (DAT_146b35008 == 0) {
    FUN_1417866a0(&DAT_146b35008,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b1ad0);
  }
  return DAT_146b35008;
}



// FUNCTION 142df73f0 FUN_142df73f0 body=47 status=ok
// SIG undefined FUN_142df73f0(void)

longlong FUN_142df73f0(void)

{
  if (DAT_146b34f38 == 0) {
    FUN_1417866a0(&DAT_146b34f38,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b1990);
  }
  return DAT_146b34f38;
}



// FUNCTION 142df7420 FUN_142df7420 body=47 status=ok
// SIG undefined FUN_142df7420(void)

longlong FUN_142df7420(void)

{
  if (DAT_146b34ee0 == 0) {
    FUN_1417866a0(&DAT_146b34ee0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b1940);
  }
  return DAT_146b34ee0;
}



// FUNCTION 142df7450 FUN_142df7450 body=47 status=ok
// SIG undefined FUN_142df7450(void)

longlong FUN_142df7450(void)

{
  if (DAT_146b34f78 == 0) {
    FUN_1417866a0(&DAT_146b34f78,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b19e0);
  }
  return DAT_146b34f78;
}



// FUNCTION 142df7480 FUN_142df7480 body=47 status=ok
// SIG undefined FUN_142df7480(void)

longlong FUN_142df7480(void)

{
  if (DAT_146b34fa0 == 0) {
    FUN_1417866a0(&DAT_146b34fa0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b1a30);
  }
  return DAT_146b34fa0;
}



// FUNCTION 142df74b0 FUN_142df74b0 body=47 status=ok
// SIG undefined FUN_142df74b0(void)

longlong FUN_142df74b0(void)

{
  if (DAT_146b34fa8 == 0) {
    FUN_1417866a0(&DAT_146b34fa8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b1a80);
  }
  return DAT_146b34fa8;
}



// FUNCTION 142df74e0 FUN_142df74e0 body=47 status=ok
// SIG undefined FUN_142df74e0(void)

longlong FUN_142df74e0(void)

{
  if (DAT_146b350d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b350d8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b1680);
  }
  return DAT_146b350d8;
}



// FUNCTION 142df7510 FUN_142df7510 body=47 status=ok
// SIG undefined FUN_142df7510(void)

longlong FUN_142df7510(void)

{
  if (DAT_146b34fc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34fc8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466afc70);
  }
  return DAT_146b34fc8;
}



// FUNCTION 142df7540 FUN_142df7540 body=47 status=ok
// SIG undefined FUN_142df7540(void)

longlong FUN_142df7540(void)

{
  if (DAT_146b35028 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b35028,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b02a0);
  }
  return DAT_146b35028;
}



// FUNCTION 142df7570 FUN_142df7570 body=47 status=ok
// SIG undefined FUN_142df7570(void)

longlong FUN_142df7570(void)

{
  if (DAT_146b35018 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b35018,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b0090);
  }
  return DAT_146b35018;
}



// FUNCTION 142df75a0 FUN_142df75a0 body=47 status=ok
// SIG undefined FUN_142df75a0(void)

longlong FUN_142df75a0(void)

{
  if (DAT_146b34f00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34f00,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ae540);
  }
  return DAT_146b34f00;
}



// FUNCTION 142df75d0 FUN_142df75d0 body=47 status=ok
// SIG undefined FUN_142df75d0(void)

longlong FUN_142df75d0(void)

{
  if (DAT_146b34f48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34f48,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466aec20);
  }
  return DAT_146b34f48;
}



// FUNCTION 142df7600 FUN_142df7600 body=47 status=ok
// SIG undefined FUN_142df7600(void)

longlong FUN_142df7600(void)

{
  if (DAT_146b34ef0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34ef0,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ae480);
  }
  return DAT_146b34ef0;
}



// FUNCTION 142df7630 FUN_142df7630 body=47 status=ok
// SIG undefined FUN_142df7630(void)

longlong FUN_142df7630(void)

{
  if (DAT_146b34f88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34f88,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466af090);
  }
  return DAT_146b34f88;
}



// FUNCTION 142df7660 FUN_142df7660 body=47 status=ok
// SIG undefined FUN_142df7660(void)

longlong FUN_142df7660(void)

{
  if (DAT_146b34f98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34f98,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466af210);
  }
  return DAT_146b34f98;
}



// FUNCTION 142df7690 FUN_142df7690 body=47 status=ok
// SIG undefined FUN_142df7690(void)

longlong FUN_142df7690(void)

{
  if (DAT_146b35078 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b35078,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b0e90);
  }
  return DAT_146b35078;
}



// FUNCTION 142df76c0 FUN_142df76c0 body=47 status=ok
// SIG undefined FUN_142df76c0(void)

longlong FUN_142df76c0(void)

{
  if (DAT_146b350c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b350c8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b1580);
  }
  return DAT_146b350c8;
}



// FUNCTION 142df76f0 FUN_142df76f0 body=47 status=ok
// SIG undefined FUN_142df76f0(void)

longlong FUN_142df76f0(void)

{
  if (DAT_146b350a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b350a8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466b10b0);
  }
  return DAT_146b350a8;
}



// FUNCTION 142df7720 FUN_142df7720 body=47 status=ok
// SIG undefined FUN_142df7720(void)

longlong FUN_142df7720(void)

{
  if (DAT_146b34ea8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34ea8,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466add70);
  }
  return DAT_146b34ea8;
}



// FUNCTION 142df7750 FUN_142df7750 body=47 status=ok
// SIG undefined FUN_142df7750(void)

longlong FUN_142df7750(void)

{
  if (DAT_146b34e98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34e98,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466adc40);
  }
  return DAT_146b34e98;
}



// FUNCTION 142df7780 FUN_142df7780 body=47 status=ok
// SIG undefined FUN_142df7780(void)

longlong FUN_142df7780(void)

{
  if (DAT_146b34f10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34f10,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ae730);
  }
  return DAT_146b34f10;
}



// FUNCTION 142df77b0 FUN_142df77b0 body=47 status=ok
// SIG undefined FUN_142df77b0(void)

longlong FUN_142df77b0(void)

{
  if (DAT_146b34f20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34f20,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466ae7a0);
  }
  return DAT_146b34f20;
}



// FUNCTION 142df77e0 FUN_142df77e0 body=47 status=ok
// SIG undefined FUN_142df77e0(void)

longlong FUN_142df77e0(void)

{
  if (DAT_146b34f58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b34f58,&PTR_Z_Construct_UPackage__Script_AnimGraphRuntime_1466aed10);
  }
  return DAT_146b34f58;
}



// FUNCTION 142df7810 FUN_142df7810 body=231 status=ok
// SIG undefined FUN_142df7810(void)

void FUN_142df7810(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x280))(param_1,local_res8[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142df7900 FUN_142df7900 body=465 status=ok
// SIG undefined FUN_142df7900(void)

void FUN_142df7900(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_38 = local_58;
  local_28 = local_48;
  local_30 = local_50;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142db5a00(local_60,&local_28,&local_38,bVar1,local_68,local_res20[0]);
  return;
}



// FUNCTION 142df7ae0 FUN_142df7ae0 body=331 status=ok
// SIG undefined FUN_142df7ae0(void)

void FUN_142df7ae0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_38;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar2 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142d4d560(local_res20,puVar1,puVar2,local_res10[0]);
  return;
}



// FUNCTION 142df7c30 FUN_142df7c30 body=437 status=ok
// SIG undefined FUN_142df7c30(void)

void FUN_142df7c30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_48;
  undefined1 local_40 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_48 = 0;
  puVar2 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142d4db00(param_1,local_res10[0],puVar2,local_48,local_res20[0],local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142df7df0 FUN_142df7df0 body=329 status=ok
// SIG undefined FUN_142df7df0(void)

void FUN_142df7df0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  local_res20 = 0;
  puVar1 = local_20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142d4dc40(local_28,puVar1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142df7f40 FUN_142df7f40 body=426 status=ok
// SIG undefined FUN_142df7f40(void)

void FUN_142df7f40(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  local_res10[0] = 0;
  puVar2 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142d4de90(local_48,local_res20,puVar1,puVar2,local_res10[0]);
  return;
}



// FUNCTION 142df80f0 FUN_142df80f0 body=53 status=ok
// SIG undefined FUN_142df80f0(void)

void FUN_142df80f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x170;
    *puVar1 = &PTR_FUN_1458c86e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df8130 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1e0;
    *puVar1 = &PTR_FUN_1458c85c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df8180 FUN_142df8180 body=53 status=ok
// SIG undefined FUN_142df8180(void)

void FUN_142df8180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_1458c87f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df81c0 FUN_142df81c0 body=162 status=ok
// SIG undefined FUN_142df81c0(void)

longlong FUN_142df81c0(void)

{
  if (DAT_146b35480 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AnimNotifyState_StretchBonesMarker",&DAT_146b35480,
                  FUN_140447710,0x70,0x10000000,0,L"Engine",&LAB_142df9e80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142df8a60,&LAB_140447700,0);
  }
  return DAT_146b35480;
}



// FUNCTION 142df82a0 FUN_142df82a0 body=53 status=ok
// SIG undefined FUN_142df82a0(void)

void FUN_142df82a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1458c8910;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df82e0 FUN_142df82e0 body=47 status=ok
// SIG undefined FUN_142df82e0(void)

longlong FUN_142df82e0(void)

{
  if (DAT_146b354e0 == 0) {
    FUN_141786440(&DAT_146b354e0,&PTR_LAB_1458c31d0);
  }
  return DAT_146b354e0;
}



// FUNCTION 142df8310 FUN_142df8310 body=47 status=ok
// SIG undefined FUN_142df8310(void)

longlong FUN_142df8310(void)

{
  if (DAT_146b354d8 == 0) {
    FUN_141786a30(&DAT_146b354d8,&PTR_FUN_1466b3fb0);
  }
  return DAT_146b354d8;
}



// FUNCTION 142df8350 FUN_142df8350 body=53 status=ok
// SIG undefined FUN_142df8350(void)

void FUN_142df8350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_1458c8a28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df8390 FUN_142df8390 body=53 status=ok
// SIG undefined FUN_142df8390(void)

void FUN_142df8390(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1458c8b40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df83d0 FUN_142df83d0 body=162 status=ok
// SIG undefined FUN_142df83d0(void)

longlong FUN_142df83d0(void)

{
  if (DAT_146b35518 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AttributeEffectMultiMutatorData",&DAT_146b35518,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_142dfa130,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142dfaf30,&LAB_140447700,0);
  }
  return DAT_146b35518;
}



// FUNCTION 142df8490 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UFGPlayerSettings::GetPrivateStaticClass(void)

{
  if (DAT_146b353d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AnimNotifyState_DeathOverride",&DAT_146b353d8,
                  FUN_140447710,0x50,0x10000006,0,L"Game",FUN_142df9d10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotifyState::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b353d8;
}



// FUNCTION 142df8540 FUN_142df8540 body=53 status=ok
// SIG undefined FUN_142df8540(void)

void FUN_142df8540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1458c78c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df8580 FUN_142df8580 body=47 status=ok
// SIG undefined FUN_142df8580(void)

longlong FUN_142df8580(void)

{
  if (DAT_146b35520 == 0) {
    FUN_141786440(&DAT_146b35520,&PTR_thunk_FUN_142dfaf30_1458c3d20);
  }
  return DAT_146b35520;
}



// FUNCTION 142df85c0 FUN_142df85c0 body=162 status=ok
// SIG undefined FUN_142df85c0(void)

longlong FUN_142df85c0(void)

{
  if (DAT_146b353e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AnimNotifyState_DisableLegIK",&DAT_146b353e8,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_142df9d50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotifyState::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b353e8;
}



// FUNCTION 142df86a0 FUN_142df86a0 body=162 status=ok
// SIG undefined FUN_142df86a0(void)

longlong FUN_142df86a0(void)

{
  if (DAT_146b353f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AnimNotifyState_DisableLegIKTracing",&DAT_146b353f8
                  ,FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_142df9d70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotifyState::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b353f8;
}



// FUNCTION 142df8750 FUN_142df8750 body=53 status=ok
// SIG undefined FUN_142df8750(void)

void FUN_142df8750(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1458c8ee0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142df87a0 FUN_142df87a0 body=162 status=ok
// SIG undefined FUN_142df87a0(void)

longlong FUN_142df87a0(void)

{
  if (DAT_146b35408 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AnimNotifyState_DisableLookAt",&DAT_146b35408,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_142df9d90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotifyState::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b35408;
}



// FUNCTION 142df8850 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimNotifyState::GetPrivateStaticClass(void)

{
  if (DAT_146b35560 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AttributeInitializer",&DAT_146b35560,
                  StaticRegisterNativesUAnimNotifyState,0x30,0x10000001,0,L"Engine",&LAB_1405ba8e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b35560;
}



// FUNCTION 142df88f0 FUN_142df88f0 body=47 status=ok
// SIG undefined FUN_142df88f0(void)

longlong FUN_142df88f0(void)

{
  if (DAT_146b35558 == 0) {
    FUN_141786440(&DAT_146b35558,&PTR_GetPrivateStaticClass_1458c4680);
  }
  return DAT_146b35558;
}



// FUNCTION 142df8920 FUN_142df8920 body=47 status=ok
// SIG undefined FUN_142df8920(void)

longlong FUN_142df8920(void)

{
  if (DAT_146b35548 == 0) {
    FUN_141786a30(&DAT_146b35548,&PTR_FUN_1466b44d0);
  }
  return DAT_146b35548;
}



// FUNCTION 142df8950 FUN_142df8950 body=47 status=ok
// SIG undefined FUN_142df8950(void)

longlong FUN_142df8950(void)

{
  if (DAT_146b35550 == 0) {
    FUN_141786a30(&DAT_146b35550,&PTR_FUN_1466b4630);
  }
  return DAT_146b35550;
}



// FUNCTION 142df8990 FUN_142df8990 body=162 status=ok
// SIG undefined FUN_142df8990(void)

longlong FUN_142df8990(void)

{
  if (DAT_146b35418 == 0) {
    FUN_14171ccd0(L"/Script/GbxGameSystemCore",L"AnimNotifyState_Feedback",&DAT_146b35418,
                  FUN_140447710,0x78,0x10000000,0,L"Engine",&LAB_142df9db0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotifyState::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b35418;
}


