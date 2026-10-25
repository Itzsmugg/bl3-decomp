// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412a2330 FUN_1412a2330 body=1724 status=ok
// SIG undefined FUN_1412a2330(void)

void FUN_1412a2330(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  bool bVar19;
  longlong *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  if (DAT_146877b20 == '\0') {
    plVar10 = *(longlong **)(param_1 + 0x78);
    uVar17 = 0;
    uVar14 = (longlong)*(int *)(param_1 + 0x80) & 0x1fffffffffffffff;
    if (plVar10 + *(int *)(param_1 + 0x80) < plVar10) {
      uVar14 = uVar17;
    }
    if (uVar14 != 0) {
      do {
        lVar12 = *plVar10;
        if (lVar12 != 0) {
          lVar11 = DAT_1468780c0 + (longlong)DAT_1468780c8 * 0x28;
          for (lVar16 = DAT_1468780c0; lVar16 != lVar11; lVar16 = lVar16 + 0x28) {
            local_f0 = 0;
            local_e8 = 0;
            local_108 = 0xffffffff;
            local_104 = 0;
            local_f8 = 0;
            uVar6 = FSoftObjectPath::FSoftObjectPath(local_80,lVar12);
            FSoftObjectPath::operator=(&local_f8,uVar6);
            FWeakObjectPtr::operator=(&local_108,lVar12);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_104 = CONCAT44(DAT_1464b56f4,(undefined4)local_104);
            cVar5 = FSoftObjectPath::operator==(lVar16 + 0x10,&local_f8);
            if (local_f0 != 0) {
              FMemory::Free();
            }
            if (cVar5 != '\0') {
              bVar19 = true;
              goto LAB_1412a247e;
            }
          }
          bVar19 = false;
LAB_1412a247e:
          if (!bVar19) {
            local_120 = 0;
            local_128 = 0;
            local_118 = 0;
            local_138 = 0xffffffff;
            local_134 = 0;
            uVar6 = FSoftObjectPath::FSoftObjectPath(local_68,lVar12);
            FSoftObjectPath::operator=(&local_128,uVar6);
            FWeakObjectPtr::operator=(&local_138,lVar12);
            iVar4 = DAT_1468780c8;
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            lVar12 = (longlong)DAT_1468780c8;
            local_134 = CONCAT44(DAT_1464b56f4,(undefined4)local_134);
            DAT_1468780c8 = DAT_1468780c8 + 1;
            if (DAT_1468780cc < DAT_1468780c8) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_1468780c0,iVar4);
            }
            puVar3 = (undefined4 *)(DAT_1468780c0 + lVar12 * 0x28);
            *(undefined8 *)(puVar3 + 6) = 0;
            puVar3[9] = 0;
            *puVar3 = 0xffffffff;
            puVar3[1] = 0;
            *(undefined8 *)(puVar3 + 4) = 0;
            local_110 = 0;
            puVar3[8] = 0;
            if (0x7fffffff < (uint)puVar3[9]) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3 + 6,0);
            }
            if (*(undefined2 **)(puVar3 + 6) != (undefined2 *)0x0) {
              **(undefined2 **)(puVar3 + 6) = 0;
            }
            puVar3[2] = 0;
            *puVar3 = local_138;
            puVar3[1] = (undefined4)local_134;
            puVar3[2] = local_134._4_4_;
            local_98 = local_128;
            FString::FString(local_90,&local_120);
            FSoftObjectPath::operator=(puVar3 + 4,&local_98);
            if (local_120 != 0) {
              FMemory::Free();
            }
          }
        }
        plVar10 = plVar10 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar14);
    }
    puVar7 = (undefined8 *)FName::FName(local_e0,L"AssetRegistry",1);
    uVar6 = *puVar7;
    uVar8 = FUN_14168dc80();
    plVar9 = (longlong *)FUN_141690010(uVar8,uVar6);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    plVar10 = (longlong *)(**(code **)(*plVar9 + 0x48))(plVar9);
    lVar12 = FUN_141304350();
    (**(code **)(*plVar10 + 0x28))(plVar10,*(undefined8 *)(lVar12 + 0x18),&local_148,1);
    uVar14 = (ulonglong)(int)local_140;
    plVar18 = local_148 + uVar14 * 0xb;
    plVar10 = local_148;
    if (local_148 != plVar18) {
      do {
        if (*plVar10 != 0) {
          puVar7 = (undefined8 *)FName::ToString(plVar10,local_d8);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar7;
          }
          uVar6 = UObject::GetPrivateStaticClass();
          lVar12 = FUN_141799410(uVar6,0,puVar15,0);
          if (local_d8[0] != 0) {
            FMemory::Free();
          }
          if (lVar12 == 0) {
            puVar7 = (undefined8 *)FName::ToString(plVar10,local_c8);
            if (*(int *)(puVar7 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar7;
            }
            uVar6 = UObject::GetPrivateStaticClass();
            lVar12 = FUN_141799c90(uVar6,0,puVar15,0,0,0,1);
            if (local_c8[0] != 0) {
              FMemory::Free();
            }
            if (lVar12 == 0) goto LAB_1412a274b;
          }
          lVar11 = FUN_141304350();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          if ((bVar19) && (*(longlong *)(lVar12 + 0x90) != 0)) {
            FUN_14128f220(param_1);
          }
        }
LAB_1412a274b:
        plVar10 = plVar10 + 0xb;
      } while (plVar10 != plVar18);
      uVar14 = local_140 & 0xffffffff;
    }
    if ((int)uVar14 != 0) {
      plVar10 = local_148 + 6;
      do {
        if (plVar10[1] != 0) {
          FMemory::Free();
        }
        plVar18 = (longlong *)*plVar10;
        if (plVar18 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar18 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar2 = (int *)((longlong)plVar18 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        plVar10 = plVar10 + 0xb;
        uVar13 = (int)uVar14 - 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 != 0);
    }
    bVar19 = local_140._4_4_ != 0;
    local_140 = (ulonglong)local_140._4_4_ << 0x20;
    if (bVar19) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(&local_148,0);
    }
    plVar10 = (longlong *)(**(code **)(*plVar9 + 0x48))(plVar9);
    lVar12 = FUN_1414a12b0();
    (**(code **)(*plVar10 + 0x28))(plVar10,*(undefined8 *)(lVar12 + 0x18),&local_148,1);
    uVar14 = (ulonglong)(int)local_140;
    plVar9 = local_148 + uVar14 * 0xb;
    plVar10 = local_148;
    if (local_148 != plVar9) {
      do {
        if (*plVar10 != 0) {
          puVar7 = (undefined8 *)FName::ToString(plVar10,local_b8);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar7;
          }
          uVar6 = UObject::GetPrivateStaticClass();
          lVar12 = FUN_141799410(uVar6,0,puVar15,0);
          if (local_b8[0] != 0) {
            FMemory::Free();
          }
          if (lVar12 == 0) {
            puVar7 = (undefined8 *)FName::ToString(plVar10,local_a8);
            if (*(int *)(puVar7 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar7;
            }
            uVar6 = UObject::GetPrivateStaticClass();
            lVar12 = FUN_141799c90(uVar6,0,puVar15,0,0,0,1);
            if (local_a8[0] != 0) {
              FMemory::Free();
            }
            if (lVar12 == 0) goto LAB_1412a2929;
          }
          lVar11 = FUN_1414a12b0();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          if ((bVar19) && (*(longlong *)(lVar12 + 0x2b0) != 0)) {
            FUN_14128f220(param_1);
          }
        }
LAB_1412a2929:
        plVar10 = plVar10 + 0xb;
      } while (plVar10 != plVar9);
      uVar14 = local_140 & 0xffffffff;
    }
    DAT_146877b20 = '\x01';
    if ((int)uVar14 != 0) {
      plVar10 = local_148 + 6;
      do {
        if (plVar10[1] != 0) {
          FMemory::Free();
        }
        plVar9 = (longlong *)*plVar10;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar9 + 1;
          lVar12 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
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
        plVar10 = plVar10 + 0xb;
        uVar13 = (int)uVar14 - 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 != 0);
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
  }
  return;
}



// FUNCTION 1412a29f0 FUN_1412a29f0 body=69 status=ok
// SIG undefined FUN_1412a29f0(void)

ulonglong FUN_1412a29f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x1f8);
  plVar1 = plVar2 + *(int *)(param_1 + 0x200);
  while( true ) {
    if (plVar2 == plVar1) {
      return (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0x38) != 0)) break;
    plVar2 = plVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
}



// FUNCTION 1412a2a40 FUN_1412a2a40 body=117 status=ok
// SIG undefined FUN_1412a2a40(void)

undefined8 FUN_1412a2a40(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_1414eba50();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_140b31d60(param_2,param_1);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1412a2ac0 FUN_1412a2ac0 body=513 status=ok
// SIG undefined FUN_1412a2ac0(void)

undefined8 FUN_1412a2ac0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((((*param_1 != 0) && (param_2 != (longlong *)0x0)) &&
      (cVar3 = FUN_140bf9690(0,(longlong)param_2 + 0x754), cVar3 != '\0')) &&
     (cVar3 = FUN_1412c7dd0(param_2), cVar3 != '\0')) {
    lVar4 = FWeakObjectPtr::Get((longlong)param_2 + 0x754);
    plVar9 = *(longlong **)(lVar4 + 0x1e8);
    plVar1 = plVar9 + *(int *)(lVar4 + 0x1f0);
    if (plVar9 != plVar1) {
      do {
        if (*plVar9 == *param_1) {
          return 0;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
  }
  lVar4 = param_1[0xb];
  lVar7 = 0;
  lVar10 = lVar7;
  if (lVar4 != 0) {
    lVar5 = FUN_142f477c0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar10 = lVar4, *(char *)(lVar4 + 0xd8) == '\x01')) {
      return 0;
    }
  }
  if (param_2 == (longlong *)0x0) goto LAB_1412a2c74;
  if (*(char *)((longlong)param_2 + 0x9f9) != '\0') {
    lVar4 = param_1[0xb];
    if (lVar4 == 0) {
LAB_1412a2bea:
      lVar4 = lVar7;
    }
    else {
      lVar5 = FUN_142f47520();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1412a2bea;
    }
    lVar5 = param_2[0x23];
    if (lVar5 == 0) {
LAB_1412a2c2f:
      lVar5 = lVar7;
    }
    else {
      lVar6 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1412a2c2f;
    }
    if ((lVar4 != 0) &&
       ((cVar3 = FUN_142f3e730(lVar4,lVar5), cVar3 == '\0' ||
        ((cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0' &&
         (cVar3 = FUN_142f43380(lVar4,param_2,0), cVar3 == '\0')))))) {
      return 0;
    }
  }
  lVar7 = (**(code **)(*param_2 + 0x148))(param_2);
LAB_1412a2c74:
  if ((((lVar10 == 0) || (lVar7 == 0)) ||
      (lVar4 = UWorld::GetGameState<APVPGameState>(lVar7), lVar4 == 0)) ||
     (*(longlong *)(lVar4 + 0x5a0) == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = FUN_142f430a0(*(longlong *)(lVar4 + 0x5a0),lVar10,1);
  }
  return uVar8;
}



// FUNCTION 1412a2cd0 FUN_1412a2cd0 body=104 status=ok
// SIG undefined FUN_1412a2cd0(void)

bool FUN_1412a2cd0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x418))();
  if (0 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x420))();
    iVar2 = (**(code **)(*param_1 + 0x418))(param_1);
    return iVar1 == iVar2;
  }
  iVar1 = (**(code **)(*param_1 + 0x440))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x420))(param_1);
  return iVar2 == iVar1;
}



// FUNCTION 1412a2d40 FUN_1412a2d40 body=189 status=ok
// SIG undefined FUN_1412a2d40(void)

undefined8 FUN_1412a2d40(longlong *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 1.0;
  iVar1 = (**(code **)(*param_1 + 0x418))();
  if (iVar1 < 1) {
    iVar1 = (**(code **)(*param_1 + 0x440))(param_1);
    if (iVar1 < 1) goto LAB_1412a2dc0;
    iVar1 = (**(code **)(*param_1 + 0x420))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x440))(param_1);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x420))();
    iVar2 = (**(code **)(*param_1 + 0x418))(param_1);
  }
  fVar3 = (float)iVar1 / (float)iVar2;
LAB_1412a2dc0:
  if ((param_2 <= fVar3) && (1e-08 < ABS(fVar3 - param_2))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1412a2e00 FUN_1412a2e00 body=106 status=ok
// SIG undefined FUN_1412a2e00(void)

undefined1 FUN_1412a2e00(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_141296e00(param_1,param_3);
  if ((lVar2 != 0) && (param_2 != 0)) {
    uVar1 = FUN_1412a2ac0(lVar2,*(undefined8 *)(param_2 + 0xd50));
    if (*param_3 != 0) {
      FMemory::Free();
    }
    return uVar1;
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1412a2e70 FUN_1412a2e70 body=23 status=ok
// SIG undefined FUN_1412a2e70(void)

undefined1 FUN_1412a2e70(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1412a2ac0(param_3,*(undefined8 *)(param_2 + 0xd50));
    return uVar1;
  }
  return 1;
}



// FUNCTION 1412a2eb0 FUN_1412a2eb0 body=605 status=ok
// SIG undefined FUN_1412a2eb0(void)

undefined8 FUN_1412a2eb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  short *_Src;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  short *psVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined8 local_res10;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  short *local_38;
  ulonglong local_30;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0xc0) == 0) {
    return 0;
  }
  FName::ToString(param_1 + 0x78,&local_38);
  _Src = local_38;
  puVar12 = (undefined2 *)0x0;
  iVar3 = (int)local_30;
  local_48 = (undefined2 *)0x0;
  iVar4 = 0;
  local_3c = 0;
  psVar10 = local_38 + iVar3;
  do {
    if (psVar10 == local_38) goto LAB_1412a2f33;
    psVar10 = psVar10 + -1;
  } while (*psVar10 != 0x2f);
  iVar6 = (int)((longlong)psVar10 - (longlong)local_38 >> 1);
  if (iVar6 == -1) {
LAB_1412a2f33:
    iVar4 = iVar3;
    local_40 = iVar3;
    if (iVar3 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_30 & 0xffffffff,0);
      puVar12 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar3 * 2);
      iVar4 = local_40;
    }
  }
  else {
    if (iVar3 == 0) {
      psVar10 = &DAT_143f3eda8;
      iVar3 = iVar4;
    }
    else {
      psVar10 = local_38;
      iVar3 = iVar3 + -1;
    }
    iVar8 = iVar3 - (iVar6 + 1);
    iVar6 = iVar4;
    if ((-1 < iVar8) && (iVar6 = iVar3, iVar8 < iVar3)) {
      iVar6 = iVar8;
    }
    local_48 = (undefined2 *)0x0;
    local_3c = 0;
    psVar10 = psVar10 + ((longlong)iVar3 - (longlong)iVar6);
    if ((psVar10 != (short *)0x0) && (iVar4 = 0, *psVar10 != 0)) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (psVar10[lVar11] != 0);
      iVar3 = (int)lVar11 + 1;
      local_40 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar4 = local_40;
      puVar12 = local_48;
      FGenericPlatformString::Memcpy(local_48,psVar10,(longlong)iVar3 * 2);
    }
  }
  local_res10 = *(undefined8 *)(*(longlong *)(lVar1 + 0xc0) + 0x18);
  FName::ToString(&local_res10,&local_58);
  puVar5 = (undefined8 *)FName::ToString(param_1 + 0x78,&local_48);
  puVar9 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar9 = local_58;
  }
  if (*(int *)(puVar5 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar5;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
  if (iVar3 != 0) {
    puVar9 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar9 = local_58;
    }
    puVar7 = &DAT_143f3eda8;
    if (iVar4 != 0) {
      puVar7 = puVar12;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
    if (iVar4 != 0) {
      bVar2 = false;
      goto LAB_1412a3082;
    }
  }
  bVar2 = true;
LAB_1412a3082:
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (!bVar2) {
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar12 != (undefined2 *)0x0) {
      FMemory::Free(puVar12);
    }
    if (local_38 != (short *)0x0) {
      FMemory::Free();
    }
    return 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  if (local_38 != (short *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1412a3110 FUN_1412a3110 body=180 status=ok
// SIG undefined FUN_1412a3110(void)

undefined1 FUN_1412a3110(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_30 = 0xffffffff;
  local_2c = 0;
  local_20 = 0;
  if (param_2 == 0) {
    local_20 = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_48);
    FSoftObjectPath::operator=(&local_20,uVar2);
    FWeakObjectPtr::operator=(&local_30,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_2c = CONCAT44(DAT_1464b56f4,(undefined4)local_2c);
  }
  uVar1 = FSoftObjectPath::operator==(param_1 + 0xa0,&local_20);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1412a31d0 FUN_1412a31d0 body=69 status=ok
// SIG undefined FUN_1412a31d0(void)

undefined8 FUN_1412a31d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 != 0) {
    local_18 = 0;
    local_10 = 0;
    lVar1 = FUN_1412c3780(&local_18,param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_1412a34f0(lVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1412a3220 FUN_1412a3220 body=718 status=ok
// SIG undefined FUN_1412a3220(void)

undefined1
FUN_1412a3220(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined8 *local_res8;
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  local_98 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_98,&local_68);
  puVar14 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar14 = local_68;
  }
  uVar6 = FUN_140cfc820(param_2);
  puVar8 = (undefined8 *)UKismetStringLibrary::Conv_IntToString(local_38,uVar6);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar8;
  }
  puVar8 = (undefined8 *)FUN_14167d0d0(local_48);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(&local_58,L"%sSaveGames/%s/%s.%s",puVar13,puVar12,puVar14,PTR_DAT_1462a2a08);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_88 = 0;
  puVar12 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar12 = local_58;
  }
  local_80 = 0;
  cVar4 = FUN_141676460(&local_88,puVar12,0);
  if (cVar4 != '\0') {
    puVar8 = (undefined8 *)FName::FName(local_90,"ImageWrapper",1);
    uVar3 = *puVar8;
    uVar9 = FUN_14168dc80();
    plVar10 = (longlong *)FUN_141690010(uVar9,uVar3);
    puVar14 = (undefined2 *)((ulonglong)puVar14 & 0xffffffffffffff00);
    (**(code **)(*plVar10 + 0x40))(plVar10,&local_78,0,2,puVar14);
    if (local_78 != (longlong *)0x0) {
      cVar4 = (**(code **)*local_78)(local_78,local_88,local_80 & 0xffffffff);
      if (cVar4 != '\0') {
        local_res8 = (undefined8 *)0x0;
        cVar4 = (**(code **)(*local_78 + 0x18))(local_78,2,8,&local_res8);
        if (cVar4 != '\0') {
          if (*param_3 == 0) {
            lVar11 = NewObject<UTextureRenderTarget2D>(param_2);
            *param_3 = lVar11;
            if (lVar11 == 0) goto LAB_1412a3446;
          }
          uVar6 = (**(code **)(*local_78 + 0x28))(local_78);
          uVar7 = (**(code **)(*local_78 + 0x20))(local_78);
          FUN_14287a5c0(*param_3,uVar7,uVar6,2,(ulonglong)puVar14 & 0xffffffffffffff00);
          uVar5 = FUN_1424d8330(*param_3,*local_res8,4);
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_70 + 1;
            lVar11 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
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
          goto LAB_1412a34b2;
        }
      }
    }
LAB_1412a3446:
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  lVar11 = *param_3;
  if (lVar11 == 0) {
    lVar11 = NewObject<UTextureRenderTarget2D>(param_2);
    *param_3 = lVar11;
    if (lVar11 != 0) goto LAB_1412a3495;
  }
  else {
LAB_1412a3495:
    FUN_14287a5c0(lVar11,param_4,param_5,2,(ulonglong)puVar14 & 0xffffffffffffff00);
  }
  uVar5 = 1;
LAB_1412a34b2:
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 1412a34f0 FUN_1412a34f0 body=775 status=ok
// SIG undefined FUN_1412a34f0(void)

longlong * FUN_1412a34f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  void *_Src;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  void *_Dst;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined8 *local_res8 [2];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  local_res18 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res18,&local_78);
  puVar14 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar14 = local_78;
  }
  uVar6 = FUN_140cfc820(param_2);
  puVar10 = (undefined8 *)UKismetStringLibrary::Conv_IntToString(local_48,uVar6);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*puVar10;
  }
  puVar10 = (undefined8 *)FUN_14167d0d0(local_58);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar10;
  }
  FString::PrintfImpl(&local_68,L"%sSaveGames/%s/%s.%s",puVar15,puVar13,puVar14,PTR_DAT_1462a2a08);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar13 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar13 = local_68;
  }
  local_88 = 0;
  local_80 = 0;
  cVar5 = FUN_141676460(&local_88,puVar13,0);
  if (cVar5 != '\0') {
    puVar10 = (undefined8 *)FName::FName(local_res20,"ImageWrapper",1);
    uVar4 = *puVar10;
    uVar11 = FUN_14168dc80();
    plVar12 = (longlong *)FUN_141690010(uVar11,uVar4);
    (**(code **)(*plVar12 + 0x40))(plVar12,&local_98,0,2,(ulonglong)puVar14 & 0xffffffffffffff00);
    if (local_98 != (longlong *)0x0) {
      cVar5 = (**(code **)*local_98)(local_98,local_88,local_80 & 0xffffffff);
      if (cVar5 != '\0') {
        local_res8[0] = (undefined8 *)0x0;
        cVar5 = (**(code **)(*local_98 + 0x18))(local_98,2,8,local_res8);
        plVar12 = local_98;
        if (cVar5 != '\0') {
          uVar6 = (**(code **)(*local_98 + 0x28))(local_98);
          uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12);
          plVar12 = (longlong *)FUN_142851030(uVar7,uVar6,2);
          if ((plVar12 != (longlong *)0x0) && (**(longlong **)(plVar12[0x1b] + 0x10) != 0)) {
            lVar1 = **(longlong **)(plVar12[0x1b] + 0x10) + 8;
            _Dst = (void *)FUN_14171efb0(lVar1,2);
            if (_Dst != (void *)0x0) {
              _Src = (void *)*local_res8[0];
              iVar8 = (**(code **)(*local_98 + 0x20))(local_98);
              iVar9 = (**(code **)(*local_98 + 0x28))(local_98);
              _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(iVar8 * iVar9 * 4));
              FUntypedBulkData::Unlock(lVar1);
              (**(code **)(*plVar12 + 0x278))(plVar12);
              if (local_90 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_90 + 1;
                lVar1 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar1 == 1) {
                  (**(code **)*local_90)(local_90);
                  LOCK();
                  piVar3 = (int *)((longlong)local_90 + 0xc);
                  iVar8 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*local_90 + 8))(local_90,1);
                  }
                }
              }
              goto LAB_1412a379f;
            }
          }
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_90 + 1;
      lVar1 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar3 = (int *)((longlong)local_90 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  plVar12 = (longlong *)0x0;
LAB_1412a379f:
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return plVar12;
}



// FUNCTION 1412a3800 FUN_1412a3800 body=282 status=ok
// SIG undefined FUN_1412a3800(void)

void FUN_1412a3800(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (((((lVar5 != 0) || (lVar5 = FUN_1423407b0(), lVar5 != 0)) &&
       (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) &&
      ((cVar2 = FUN_1407c3030(lVar5 + 0x670), cVar2 != '\0' && (*(char *)(param_2 + 0x61) == '\0')))
      ) && ((*(char *)(lVar5 + 0xa48) == '\0' &&
            ((iVar3 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar5 + 0x670),
             DAT_146877ee8 != 0 && (0 < iVar3)))))) {
    iVar4 = DAT_146877ee8;
    if (iVar3 < DAT_146877ee8) {
      iVar4 = iVar3;
    }
    lVar5 = FWeakObjectPtr::Get(DAT_146877ee0 + (longlong)(iVar4 + -1) * 8);
    if (lVar5 != 0) {
      plVar1 = *(longlong **)(param_2 + 0x30);
      iVar3 = *(int *)(param_2 + 0x38);
      for (plVar6 = plVar1; plVar6 != plVar1 + iVar3; plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar5) {
          if ((int)((longlong)plVar6 - (longlong)plVar1 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      *(int *)(param_2 + 0x38) = iVar3 + 1;
      if (*(int *)(param_2 + 0x3c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_2 + 0x30),iVar3);
      }
      *(longlong *)((longlong)iVar3 * 8 + *(longlong *)(param_2 + 0x30)) = lVar5;
    }
  }
  return;
}



// FUNCTION 1412a3920 FUN_1412a3920 body=54 status=ok
// SIG undefined FUN_1412a3920(void)

undefined8 FUN_1412a3920(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x488))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x490))(param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1412a3960 FUN_1412a3960 body=118 status=ok
// SIG undefined FUN_1412a3960(void)

void FUN_1412a3960(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14129ee40();
  if ((lVar2 != 0) && (lVar2 = FUN_14307d810(lVar2,0), lVar2 != 0)) {
    lVar3 = AVolume::GetPrivateStaticClass();
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
      FUN_140a178c0(lVar2,param_1 + 0x3b0);
    }
  }
  return;
}



// FUNCTION 1412a39e0 FUN_1412a39e0 body=58 status=ok
// SIG undefined FUN_1412a39e0(void)

void FUN_1412a39e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(*(longlong *)param_1[0x23] + 0x950))();
                    /* WARNING: Could not recover jumptable at 0x0001412a3a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x4e0))(param_1,uVar2);
  return;
}



// FUNCTION 1412a3a20 FUN_1412a3a20 body=58 status=ok
// SIG undefined FUN_1412a3a20(void)

void FUN_1412a3a20(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(*(longlong *)param_1[0x23] + 0x950))();
                    /* WARNING: Could not recover jumptable at 0x0001412a3a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x4d0))(param_1,uVar2);
  return;
}



// FUNCTION 1412a3a60 FUN_1412a3a60 body=58 status=ok
// SIG undefined FUN_1412a3a60(void)

void FUN_1412a3a60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(*(longlong *)param_1[0x23] + 0x950))();
                    /* WARNING: Could not recover jumptable at 0x0001412a3a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x4d8))(param_1,uVar2);
  return;
}



// FUNCTION 1412a3ab0 FUN_1412a3ab0 body=75 status=ok
// SIG undefined FUN_1412a3ab0(void)

void FUN_1412a3ab0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_18 [3];
  
  if ((undefined8 *)(param_1 + 0x220) != local_18) {
    *(undefined8 *)(param_1 + 0x220) = 0;
    plVar3 = *(longlong **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001412a3af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412a3b00 FUN_1412a3b00 body=359 status=ok
// SIG undefined FUN_1412a3b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412a3b00(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((*(byte *)(param_1 + 0x3b8) & 4) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x388);
    lVar3 = FWeakObjectPtr::Get();
    if ((lVar3 != 0) && (lVar3 = FUN_142da7d10(lVar3,uVar1,0), lVar3 != 0)) {
      lVar4 = FUN_14309ed90(param_1);
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)(lVar4 + 0x460) + 0x10))
                         ((longlong *)(lVar4 + 0x460),*(undefined1 *)(lVar4 + 0x690));
      if (plVar5 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar5 + 0x418))(plVar5);
        if (iVar2 < 1) {
          (**(code **)(*plVar5 + 0x438))(plVar5);
        }
        else {
          (**(code **)(*plVar5 + 0x420))();
        }
        FUN_14260f0c0(lVar3,DAT_146877ff8);
        FUN_142604400(lVar3,DAT_146878020);
      }
    }
  }
  return;
}



// FUNCTION 1412a3c70 FUN_1412a3c70 body=44 status=ok
// SIG undefined FUN_1412a3c70(void)

void FUN_1412a3c70(longlong param_1)

{
  FUN_14309ff70();
  if (*(char *)(param_1 + 0x25c) != '\0') {
    FUN_141292d50(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1412a3ca0 FUN_1412a3ca0 body=46 status=ok
// SIG undefined FUN_1412a3ca0(void)

void FUN_1412a3ca0(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_1430a0b20();
  lVar1 = FUN_1412996f0(param_1);
  if (lVar1 != 0) {
    FUN_1412ab350(param_1);
    return;
  }
  return;
}



// FUNCTION 1412a3cd0 FUN_1412a3cd0 body=120 status=ok
// SIG undefined FUN_1412a3cd0(void)

void FUN_1412a3cd0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_1430a0b20();
  FUN_1412ae1f0(param_1);
  if (((((*(byte *)(param_1 + 0x3b8) & 8) == 0) &&
       (plVar2 = (longlong *)FUN_1412996f0(param_1), plVar2 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2), cVar1 != '\0')) &&
     ((plVar2 = (longlong *)(**(code **)(*plVar2 + 0x668))(plVar2), plVar2 != (longlong *)0x0 &&
      (cVar1 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar1 != '\0')))) {
    FUN_1412971a0(param_1);
  }
  return;
}



// FUNCTION 1412a3d50 FUN_1412a3d50 body=419 status=ok
// SIG undefined FUN_1412a3d50(void)

void FUN_1412a3d50(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x350);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x350) = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  FUN_1412a2080();
  iVar1 = FUN_14233f450(param_1);
  if ((iVar1 == 3) || ((*(byte *)(param_1 + 0x300) & 8) != 0)) {
    if (*(char *)(param_1 + 0x240) == '\0') {
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      puVar2 = (undefined8 *)FName::FName(local_res8,L"OnActivationTrigger",1);
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = *puVar2;
      local_18 = local_28;
      local_14 = local_24;
      local_10 = local_20;
      FUN_143088b50(lVar3,&local_18,*(undefined1 *)(param_1 + 0x241),param_1);
      if (*(char *)(param_1 + 0x242) == '\x03') {
        puVar2 = (undefined8 *)FName::FName(local_res8,L"OnZoomingOut",1);
        FWeakObjectPtr::operator=(&local_28,param_1);
        local_20 = *puVar2;
        local_18 = local_28;
        local_14 = local_24;
        local_10 = local_20;
        FUN_143088b50(lVar3,&local_18,3,param_1);
      }
      puVar2 = (undefined8 *)FName::FName(local_res8,L"OnDeactivationTrigger",1);
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = *puVar2;
      local_18 = local_28;
      local_14 = local_24;
      local_10 = local_20;
      FUN_143088b50(lVar3,&local_18,0,param_1);
      return;
    }
    if (*(char *)(param_1 + 0x240) == '\x01') {
      FUN_14128e070(param_1);
    }
  }
  return;
}



// FUNCTION 1412a3f00 FUN_1412a3f00 body=559 status=ok
// SIG undefined FUN_1412a3f00(void)

void FUN_1412a3f00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  lVar5 = param_1[0x4c];
  if (lVar5 == 0) {
    lVar5 = param_1[0x23];
    param_1[0x4c] = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  lVar2 = param_1[0x4b];
  if ((((param_1[0x23] == 0) ||
       (plVar1 = *(longlong **)(param_1[0x23] + 0x150), plVar1 == (longlong *)0x0)) ||
      (cVar3 = (**(code **)(*plVar1 + 0x780))(plVar1), cVar3 == '\0')) ||
     (cVar3 = (**(code **)(*plVar1 + 0x778))(plVar1), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 0x4b) = cVar3;
  if (cVar3 == '\0') {
    if ((char)lVar2 != '\0') {
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnUsed",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar4;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143094570(lVar5,&local_28,1);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnZoomed",1);
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = *puVar4;
      local_28 = local_48;
      local_24 = local_44;
      local_20 = local_40;
      FUN_143094680(lVar5,&local_28,2);
    }
  }
  else {
    (**(code **)(*param_1 + 0x358))(param_1,1);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    puVar4 = (undefined8 *)FName::FName(local_res8,L"OnUsed",1);
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = *puVar4;
    local_28 = local_48;
    local_24 = local_44;
    local_20 = local_40;
    FUN_143088a40(lVar5,&local_28,1,param_1);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    puVar4 = (undefined8 *)FName::FName(local_res8,L"OnZoomed",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *puVar4;
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_30;
    FUN_143088b50(lVar5,&local_28,2,param_1);
  }
  return;
}



// FUNCTION 1412a4130 FUN_1412a4130 body=72 status=ok
// SIG undefined FUN_1412a4130(void)

void FUN_1412a4130(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 600) = 0x3f800000;
  FUN_141292d50(param_1,1);
  lVar1 = FUN_14309ec30(param_1);
  if (lVar1 != 0) {
    FUN_14308c120(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 1412a4180 FUN_1412a4180 body=397 status=ok
// SIG undefined FUN_1412a4180(void)

void FUN_1412a4180(longlong param_1,longlong param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined8 local_res10;
  code *local_18;
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
      local_18 = FUN_1412a48c0;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerEnteringVehicle",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      FUN_1407260e0(param_2 + 0x1d88,param_1,&local_18,local_res10);
      uStack_10 = uStack_10 & 0xffffffff00000000;
      local_18 = FUN_1412a4930;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerExitedVehicle",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res10,pwVar3 + 2,1);
      FUN_1407260e0(param_2 + 0x1db8,param_1,&local_18,local_res10);
      FUN_1412af310(param_1);
      uVar6 = FUN_14129e600(param_1);
      *(undefined4 *)(param_1 + 0x1a4) = uVar6;
    }
  }
  return;
}



// FUNCTION 1412a4310 GetLevel body=30 status=ok
// SIG undefined GetLevel(void)

void AActor::GetLevel(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140a8dc90();
  FUN_1430a14b0(param_1,uVar1);
  return;
}



// FUNCTION 1412a4330 FUN_1412a4330 body=95 status=ok
// SIG undefined FUN_1412a4330(void)

void FUN_1412a4330(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  longlong local_10;
  
  FUN_143080f00();
  if ((*(char *)(param_1 + 0x958) != '\0') && (*(longlong *)(param_1 + 0x960) != 0)) {
    iVar1 = FUN_14233f450(param_1);
    if (iVar1 == 3) {
      local_10 = FUN_1412996f0(param_1);
      if (local_10 != 0) {
        local_18 = *(undefined8 *)(param_1 + 0x960);
        FUN_142dd9890(local_10,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 1412a43a0 FUN_1412a43a0 body=42 status=ok
// SIG undefined FUN_1412a43a0(void)

void FUN_1412a43a0(longlong param_1)

{
  FUN_1430a1720();
  if (*(char *)(param_1 + 0x270) != -1) {
    FUN_141295840(param_1);
    return;
  }
  return;
}



// FUNCTION 1412a43d0 FUN_1412a43d0 body=116 status=ok
// SIG undefined FUN_1412a43d0(void)

void FUN_1412a43d0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  FUN_1430a1a40();
  *(byte *)(param_1 + 0x3b8) = *(byte *)(param_1 + 0x3b8) & 0xfe;
  bVar1 = *(byte *)(param_1 + 0x3b8);
  if ((bVar1 & 2) != 0) {
    FUN_141295a40(param_1,0);
    bVar1 = *(byte *)(param_1 + 0x3b8);
  }
  if ((bVar1 & 8) != 0) {
    plVar3 = (longlong *)IStreamingManager::Get();
    cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (cVar2 != '\0') {
      uVar4 = IStreamingManager::Get();
      plVar3 = (longlong *)FVoicePacketImpl::GetSampleCounter(uVar4);
      (**(code **)(*plVar3 + 0x108))(plVar3,param_1);
      *(byte *)(param_1 + 0x3b8) = *(byte *)(param_1 + 0x3b8) & 0xf7;
    }
  }
  return;
}



// FUNCTION 1412a4450 FUN_1412a4450 body=193 status=ok
// SIG undefined FUN_1412a4450(void)

void FUN_1412a4450(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_14233f450();
  if (((iVar2 == 3) && (cVar1 = FUN_142d52a00(param_1 + 0x228), cVar1 != '\0')) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)))) {
    uVar4 = FUN_142d52a20(param_1 + 0x228);
    uVar4 = FArchive::operator<<(uVar4);
    FUN_142d5bf00(uVar4,param_1 + 0x344);
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(lVar3 + 0x790);
  }
  FUN_141295360(param_1);
  if (*(int *)(param_1 + 0x2f8) < 1) {
    return;
  }
  FUN_142ca9970(param_1 + 0x2f0,1);
  return;
}



// FUNCTION 1412a4550 FUN_1412a4550 body=300 status=ok
// SIG undefined FUN_1412a4550(void)

void FUN_1412a4550(longlong param_1)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) && (lVar6 = *(longlong *)(param_1 + 0x118), lVar6 != 0))
  {
    uVar3 = FUN_1430a7dc0();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar3);
    if ((plVar4 != (longlong *)0x0) &&
       (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4), plVar4 != (longlong *)0x0)) {
      uVar3 = UUserObjectListEntry::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar4,uVar3);
      if (plVar5 == (longlong *)0x0) {
        uVar3 = FUN_1430255d0();
        uVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar3);
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      *(undefined8 *)(param_1 + 0x1e0) = uVar3;
    }
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    plVar4 = (longlong *)FUN_14307d730(param_1);
    fVar8 = *(float *)(param_1 + 0x1a0);
    if (((0.0 < fVar8) && (plVar4 != (longlong *)0x0)) &&
       (*(int *)(param_1 + 0x1e8) == *(int *)(*(longlong *)(param_1 + 0x118) + 0xc))) {
      lVar6 = *(longlong *)(param_1 + 0x120);
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
        fVar8 = *(float *)(param_1 + 0x1a0);
      }
      fVar1 = *(float *)(lVar6 + 0x790);
      fVar7 = (float)(**(code **)(*plVar4 + 0x898))(plVar4);
      if (fVar1 - fVar8 < fVar7) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x1ec) = 0;
  }
  return;
}



// FUNCTION 1412a4680 FUN_1412a4680 body=304 status=ok
// SIG undefined FUN_1412a4680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412a4680(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((*(byte *)(param_1 + 0x3b8) & 4) != 0) && (*(longlong *)(param_1 + 0x3d0) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x388);
    lVar2 = FWeakObjectPtr::Get();
    if ((lVar2 != 0) && (lVar2 = FUN_142da7d10(lVar2,uVar1,0), lVar2 != 0)) {
      FUN_14260f0c0(lVar2,DAT_146878010,*(undefined4 *)(*(longlong *)(param_1 + 0x3d0) + 0x218));
      local_40 = DAT_1464aa7b0;
      local_28 = _DAT_1464aa6c0;
      uStack_20 = _DAT_1464aa6c8;
      local_18 = _DAT_1464aa6c0;
      uStack_10 = _DAT_1464aa6c8;
      local_50 = DAT_1468b5d98;
      local_30 = DAT_1468b5d98;
      local_58 = _DAT_1468b5d90;
      local_48 = DAT_1464aa7a8;
      local_38 = _DAT_1468b5d90;
      FUN_142604400(lVar2,DAT_146878028,0,&local_38,&local_48,&local_58,&local_18,&local_28);
    }
  }
  return;
}



// FUNCTION 1412a47b0 ResetDelivery body=12 status=ok
// SIG undefined ResetDelivery(void)

void UCS_DeliverableReceiverComponent::ResetDelivery(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001412a47b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x408))(param_1,0);
  return;
}



// FUNCTION 1412a47c0 FUN_1412a47c0 body=119 status=ok
// SIG undefined FUN_1412a47c0(void)

void FUN_1412a47c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = FUN_14129ee40();
  if (lVar1 != 0) {
    lVar3 = *param_2;
    lVar4 = (longlong)(int)param_2[1] * 0x30 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x30) {
      lVar2 = FUN_143077270(lVar1,0,0);
      if (lVar2 != 0) {
        FUN_14306a1b0(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 1412a4840 FUN_1412a4840 body=51 status=ok
// SIG undefined FUN_1412a4840(void)

void FUN_1412a4840(longlong param_1)

{
  FUN_140757f80(param_1 + 0x100,param_1);
  FWeakObjectPtr::operator=(param_1 + 0x100,0);
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 1412a4880 FUN_1412a4880 body=51 status=ok
// SIG undefined FUN_1412a4880(void)

void FUN_1412a4880(longlong param_1)

{
  FUN_140757f80(param_1 + 0x110,param_1);
  FWeakObjectPtr::operator=(param_1 + 0x110,0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}



// FUNCTION 1412a48c0 FUN_1412a48c0 body=97 status=ok
// SIG undefined FUN_1412a48c0(void)

void FUN_1412a48c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x21c);
  }
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  uVar2 = FUN_14129e600(param_1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  return;
}



// FUNCTION 1412a4930 FUN_1412a4930 body=97 status=ok
// SIG undefined FUN_1412a4930(void)

void FUN_1412a4930(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x218);
  }
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  uVar2 = FUN_14129e600(param_1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  return;
}



// FUNCTION 1412a49a0 FUN_1412a49a0 body=389 status=ok
// SIG undefined FUN_1412a49a0(void)

void FUN_1412a49a0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  FUN_142343b00();
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar2 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar2);
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar3);
    if (cVar1 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x350);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x350) = lVar3;
        if (lVar3 == 0) {
          return;
        }
      }
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnAttached",1);
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = *puVar4;
      local_28 = local_48;
      local_24 = local_44;
      local_20 = local_40;
      FUN_143088040(lVar3,&local_28);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"OnDetached",1);
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_30 = *puVar4;
      local_28 = local_38;
      local_24 = local_34;
      local_20 = local_30;
      FUN_143088210(lVar3,&local_28);
    }
  }
  return;
}



// FUNCTION 1412a4b30 FUN_1412a4b30 body=652 status=ok
// SIG undefined FUN_1412a4b30(void)

void FUN_1412a4b30(longlong param_1)

{
  longlong lVar1;
  float _X;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  
  FUN_142343b00();
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    FUN_142232850();
    FUN_14247c340(param_1 + 0x140);
  }
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)))) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    cVar4 = UWorld::IsGameWorld(lVar5);
    if (cVar4 != '\0') {
      lVar5 = *(longlong *)(param_1 + 0x260);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x260) = lVar5;
        if (lVar5 == 0) {
          return;
        }
      }
      iVar8 = 0;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x188) + 0x40);
      if (0 < iVar2) {
        lVar1 = param_1 + 0x208;
        iVar3 = *(int *)(param_1 + 0x250);
        if (iVar3 < iVar2) {
          *(int *)(param_1 + 0x250) = iVar2;
          if (*(int *)(param_1 + 0x254) < iVar2) {
            TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                      (lVar1);
          }
          lVar7 = *(longlong *)(param_1 + 0x248);
          if (*(longlong *)(param_1 + 0x248) == 0) {
            lVar7 = lVar1;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar7 + (longlong)iVar3 * 8),0,(longlong)(iVar2 - iVar3) << 3);
        }
        else if ((iVar2 < iVar3) && (iVar2 != iVar3)) {
          *(int *)(param_1 + 0x250) = iVar2;
          FUN_1412a96f0(lVar1);
        }
        *(undefined4 *)(param_1 + 0x200) = 0;
        fVar10 = 0.0;
        if (0 < iVar2) {
          _X = *(float *)(param_1 + 0x1b0);
          do {
            fVar9 = _guard_xfg_dispatch_icall_nop(_X,(float)iVar8);
            iVar8 = iVar8 + 1;
            fVar10 = fVar10 + fVar9;
          } while (iVar8 < iVar2);
        }
        *(float *)(param_1 + 0x200) = 1.0 / fVar10;
      }
      FWeakObjectPtr::operator=(&local_78,0);
      local_70 = 0;
      puVar6 = (undefined8 *)FName::FName(local_res8,L"OnAttached",1);
      FWeakObjectPtr::operator=(&local_78,param_1);
      local_70 = *puVar6;
      local_58 = local_78;
      local_54 = local_74;
      local_50 = local_70;
      FUN_143088040(lVar5,&local_58);
      FWeakObjectPtr::operator=(&local_68,0);
      local_60 = 0;
      puVar6 = (undefined8 *)FName::FName(local_res8,L"OnDetached",1);
      FWeakObjectPtr::operator=(&local_68,param_1);
      local_60 = *puVar6;
      local_58 = local_68;
      local_54 = local_64;
      local_50 = local_60;
      FUN_143088210(lVar5,&local_58);
    }
  }
  return;
}



// FUNCTION 1412a4dc0 FUN_1412a4dc0 body=25 status=ok
// SIG undefined FUN_1412a4dc0(void)

void FUN_1412a4dc0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)((longlong)param_1 + 0x25c) == param_2) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x25c) == '\0') {
    FUN_1414ea370();
    return;
  }
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2b10);
                    /* WARNING: Could not recover jumptable at 0x0001414ea326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1412a4de0 FUN_1412a4de0 body=251 status=ok
// SIG undefined FUN_1412a4de0(void)

void FUN_1412a4de0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((*(longlong *)(param_1 + 0x118) != 0) &&
      (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x150), plVar4 != (longlong *)0x0))
     && (cVar2 = (**(code **)(*plVar4 + 0x778))(), cVar2 == '\0')) {
    cVar2 = *(char *)(param_1 + 0x200);
    cVar3 = (char)(*(ushort *)(param_1 + 0x202) >> 4);
    *(char *)(param_1 + 0x200) = cVar3;
    if (cVar3 == '\0') {
      if (cVar2 == '\x01') {
        plVar4 = (longlong *)FUN_14309ec70(param_1);
        uVar5 = UMovieSceneAudioSection::GetPrivateStaticClass();
        lVar6 = (**(code **)(*plVar4 + 0x800))(plVar4,uVar5,param_1);
        if (lVar6 != 0) {
          lVar7 = UMovieSceneAudioSection::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_1412a88d0(lVar6);
          }
        }
      }
    }
    else {
      if (cVar3 == '\x01') {
        FUN_1412a72a0(param_1);
        return;
      }
      if (cVar3 == '\x02') {
        FUN_1412ac8e0(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412a4ee0 FUN_1412a4ee0 body=54 status=ok
// SIG undefined FUN_1412a4ee0(void)

void FUN_1412a4ee0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  byte bVar9;
  undefined7 uVar10;
  undefined8 uStackX_8;
  code *pcStack_28;
  ulonglong uStack_20;
  
  if ((*(byte *)(param_1 + 0x60) >> 2 & 1) == (byte)param_2) {
    return;
  }
  uVar10 = (undefined7)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2 << 2;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfb | bVar9;
  if ((bVar9 & 4) == 0) {
    bVar9 = *(byte *)(param_1 + 0x60);
    if ((bVar9 & 4) != 0) {
      return;
    }
    if ((bVar9 & 2) == 0) {
      FUN_1412a2080();
      bVar9 = *(byte *)(param_1 + 0x60);
    }
    *(byte *)(param_1 + 0x60) = bVar9 | 4;
    (**(code **)(*param_1 + 0x260))(param_1);
    if (*(char *)((longlong)param_1 + 0x31c) != '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,CONCAT71(uVar10,1));
    }
    iVar5 = FUN_14233f450(param_1);
    if (iVar5 == 3) {
      cVar4 = FUN_142d52a00(param_1 + 0x45);
      if (((cVar4 != '\0') && (param_1[0x30] != 0)) && (*(longlong *)(param_1[0x30] + 0x30) != 0)) {
        uVar6 = FUN_142d52a20(param_1 + 0x45);
        uVar6 = FArchive::operator<<(uVar6);
        lVar7 = FDuplicateDataWriter::GetSerializeContext(uVar6);
        if (lVar7 != 0) {
          lVar7 = FUN_142d62010(lVar7,*(undefined8 *)(param_1[0x30] + 0x30));
          uStack_20 = uStack_20 & 0xffffffff00000000;
          pcStack_28 = FUN_1412a9780;
          pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UWeaponShieldComponent::ResourceNowFull",L"::");
          pwVar3 = (wchar_t *)0x0;
          while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar3 = pwVar2;
          }
          FName::FName(&uStackX_8,pwVar3 + 2,1);
          FUN_1407260e0(lVar7 + 0x28,param_1,&pcStack_28,uStackX_8);
          uStack_20 = uStack_20 & 0xffffffff00000000;
          pcStack_28 = FUN_1412a97e0;
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&UWeaponShieldComponent::ResourceNowRegenerating",L"::");
          pwVar3 = (wchar_t *)0x0;
          while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
            pwVar3 = pwVar2;
          }
          FName::FName(&uStackX_8,pwVar3 + 2,1);
          FUN_1407260e0(lVar7 + 0x48,param_1,&pcStack_28,uStackX_8);
        }
      }
      cVar4 = FUN_142d52a00(param_1 + 0x45);
      if (cVar4 != '\0') {
        uVar6 = FUN_142d52a20(param_1 + 0x45);
        uVar6 = FArchive::operator<<(uVar6);
        cVar4 = FUN_142d639f0(uVar6,0);
        *(bool *)((longlong)param_1 + 0x301) = cVar4 != '\0';
      }
      if ((param_1[0x23] != 0) &&
         (plVar1 = *(longlong **)(param_1[0x23] + 0x150), plVar1 != (longlong *)0x0)) {
        uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
        lVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
        if (lVar7 != 0) {
          FUN_140a96e80(lVar7,param_1);
        }
      }
    }
    if ((*(char *)((longlong)param_1 + 0x301) != '\x01') &&
       (FUN_1414edd00(param_1), (*(byte *)(param_1 + 0x60) & 1) != 0)) {
      FUN_1412a82b0(param_1);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x52,0);
    return;
  }
  FUN_141295360();
  return;
}



// FUNCTION 1412a4f40 FUN_1412a4f40 body=566 status=ok
// SIG undefined FUN_1412a4f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a4f40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
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
  iVar1 = (**(code **)(*param_1 + 0x420))();
  if ((int)param_1[0x3b] < iVar1) {
    local_98 = FUN_1412a5220;
    lVar2 = param_1[0x24];
    uStack_90 = 0;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
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
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x40,&local_88,0x3dcccccd);
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
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  else if (param_1[0x40] != 0) {
    lVar2 = param_1[0x24];
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x40);
    param_1[0x40] = 0;
  }
  return;
}



// FUNCTION 1412a5180 FUN_1412a5180 body=22 status=ok
// SIG undefined FUN_1412a5180(void)

void FUN_1412a5180(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStackX_8 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  if (((*(byte *)(param_1 + 0x300) & 4) == 0) || (*(char *)(param_1 + 0x301) == param_2)) {
    return;
  }
  if (*(char *)(param_1 + 0x301) == '\0') {
    FUN_1414edd00(param_1);
    if ((*(byte *)(param_1 + 0x300) & 1) != 0) {
      FUN_1412a82b0(param_1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x301) == '\x01') {
    FUN_1414ee0d0(param_1);
    if ((*(byte *)(param_1 + 0x300) & 1) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x350);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x350) = lVar2;
        if (lVar2 == 0) goto LAB_1412ab71e;
      }
      FWeakObjectPtr::operator=(&uStack_28,0);
      uStack_20 = 0;
      puVar1 = (undefined8 *)FName::FName(auStackX_8,L"OnWeaponUsed",1);
      FWeakObjectPtr::operator=(&uStack_28,param_1);
      uStack_20 = *puVar1;
      uStack_18 = uStack_28;
      uStack_14 = uStack_24;
      uStack_10 = uStack_20;
      FUN_143094570(lVar2,&uStack_18,1);
    }
LAB_1412ab71e:
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x2d0,0);
    return;
  }
  return;
}



// FUNCTION 1412a51d0 FUN_1412a51d0 body=80 status=ok
// SIG undefined FUN_1412a51d0(void)

void FUN_1412a51d0(longlong param_1)

{
  longlong lVar1;
  
  FUN_141297510();
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  if (*(char *)(param_1 + 0x270) != -1) {
    FUN_141295840(param_1);
  }
  lVar1 = FUN_14309ec30(param_1);
  if (lVar1 != 0) {
    FUN_14308c120(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 1412a5220 FUN_1412a5220 body=139 status=ok
// SIG undefined FUN_1412a5220(void)

void FUN_1412a5220(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  param_1[0x40] = 0;
  iVar2 = (**(code **)(*param_1 + 0x420))();
  if ((int)param_1[0x3b] < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x420))(param_1);
    *(int *)(param_1 + 0x39) = (int)param_1[0x3b];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    if ((iVar2 != 0) && (plVar3 = (longlong *)FUN_14307d730(param_1), plVar3 != (longlong *)0x0)) {
      cVar1 = (**(code **)(*plVar3 + 0x888))(plVar3);
      if (cVar1 != '\0') {
        FUN_14308e980(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1412a52b0 FUN_1412a52b0 body=140 status=ok
// SIG undefined FUN_1412a52b0(void)

void FUN_1412a52b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1430a21f0();
  FUN_1412ae1f0(param_1);
  if (((*(byte *)(param_1 + 0x3b8) & 2) != 0) && (*(longlong *)(param_1 + 0x388) != 0)) {
    FUN_1412aef70(param_1);
    FUN_1412aeb30(param_1,0,1,0);
    if ((*(byte *)(param_1 + 0x39c) & 0x10) != 0) {
      plVar1 = (longlong *)FUN_14309ed90(param_1);
      uVar2 = UUGStartScreenUW::GetPrivateStaticClass();
      uVar2 = (**(code **)(*plVar1 + 0x7f8))(plVar1,uVar2,(char)plVar1[0xd2]);
      *(undefined8 *)(param_1 + 0x3d8) = uVar2;
    }
  }
  return;
}



// FUNCTION 1412a5340 FUN_1412a5340 body=27 status=ok
// SIG undefined FUN_1412a5340(void)

void FUN_1412a5340(undefined8 param_1)

{
  FUN_1430a21f0();
  FUN_1412ae1f0(param_1);
  return;
}



// FUNCTION 1412a5360 FUN_1412a5360 body=303 status=ok
// SIG undefined FUN_1412a5360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412a5360(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((*(byte *)(param_1 + 0x3b8) & 4) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x388);
    lVar1 = FWeakObjectPtr::Get();
    if ((lVar1 != 0) && (lVar1 = FUN_142da7d10(lVar1,uVar2,0), lVar1 != 0)) {
      if (param_3 == '\0') {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x3f800000;
      }
      FUN_14260f0c0(lVar1,DAT_146878078,uVar3);
      uVar2 = DAT_146878098;
      if (param_3 != '\0') {
        uVar2 = DAT_146878090;
      }
      local_40 = DAT_1464aa7b0;
      local_28 = _DAT_1464aa6c0;
      uStack_20 = _DAT_1464aa6c8;
      local_18 = _DAT_1464aa6c0;
      uStack_10 = _DAT_1464aa6c8;
      local_50 = DAT_1468b5d98;
      local_30 = DAT_1468b5d98;
      local_58 = _DAT_1468b5d90;
      local_48 = DAT_1464aa7a8;
      local_38 = _DAT_1468b5d90;
      FUN_142604400(lVar1,uVar2,0,&local_38,&local_48,&local_58,&local_18,&local_28);
    }
  }
  return;
}



// FUNCTION 1412a5490 FUN_1412a5490 body=125 status=ok
// SIG undefined FUN_1412a5490(void)

void FUN_1412a5490(longlong param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  FUN_1430a2420();
  if ((*(char *)(param_1 + 0x25c) == '\0') && ((*(byte *)(param_1 + 0x229) & 1) != 0)) {
    iVar1 = *(int *)(param_1 + 0x260);
    iVar2 = *(int *)(param_1 + 0x268) + 1;
    *(int *)(param_1 + 0x268) = iVar2;
    if (iVar1 < 1) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = (float)iVar2 / (float)iVar1;
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
    }
    *(float *)(param_1 + 600) = fVar3;
    if (iVar1 <= iVar2) {
      FUN_1412aa9e0(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1412a5540 FUN_1412a5540 body=1685 status=ok
// SIG undefined FUN_1412a5540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412a5540(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  ulonglong in_stack_ffffffffffffff48;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [48];
  
  lVar11 = 0;
  param_1[0x90] = param_1[0x91];
  param_1[0x91] = 0;
  cVar3 = FUN_1413144b0();
  if (cVar3 == '\0') {
    if ((char)param_1[0x8b] != '\0') {
      FUN_141314470(param_1,param_1[0x90]);
      return;
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar10 = lVar11;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar10 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    lVar4 = FUN_14129f8a0(param_1[0x90]);
    uVar5 = FUN_1429fde70();
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar5);
    iVar12 = 0;
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*param_1 + 0x310))(param_1,0);
      uVar15 = (uint)(in_stack_ffffffffffffff48 >> 0x20);
      if (param_1[0x2d] == 0) {
        uVar5 = FUN_142a175e0();
        plVar6 = (longlong *)FName::FName(local_res18,L"Sphere",1);
        local_res8 = 0;
        lVar7 = *plVar6;
        if (lVar7 == 0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        in_stack_ffffffffffffff48 = (ulonglong)uVar15 << 0x20;
        lVar7 = FUN_1417985e0(uVar5,param_1,lVar7,0,in_stack_ffffffffffffff48,0,0,0,0);
        if (lVar7 != 0) {
          FUN_1423bc010(lVar7,0x43480000,1);
          FUN_14234b150(lVar7);
          local_res10 = 0;
          local_res8 = CONCAT44(local_res8._4_4_,0x1000000);
          FUN_142382f60(lVar7,param_1[0x2d],&local_res8,0);
          FUN_14223f010(param_1,lVar7);
          FUN_142398ec0(lVar7,1,2);
        }
      }
      local_res8 = 0;
      uVar5 = FUN_1429fde70();
      local_res10 = 0;
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar22 = 0;
      plVar6 = (longlong *)
               FUN_1417985e0(uVar5,param_1,0,0,in_stack_ffffffffffffff48 & 0xffffffff00000000,0,0,0,
                             0);
      if (plVar6 != (longlong *)0x0) {
        FUN_14234b150(plVar6);
        local_res10 = 0;
        local_res8 = CONCAT44(local_res8._4_4_,0x1000000);
        FUN_142382f60(plVar6,param_1[0x2d],&local_res8,0);
        pfVar1 = (float *)(plVar6 + 0x50);
        *(undefined2 *)(plVar6 + 0x7b) = 0;
        *(undefined1 *)(plVar6 + 0x5a) = 1;
        *(undefined4 *)((longlong)plVar6 + 0x324) = 1;
        local_70 = 0x41d80000;
        local_78 = 0;
        if (((*(float *)(plVar6 + 0x3f) != *pfVar1) ||
            (*(float *)((longlong)plVar6 + 0x1fc) != *(float *)((longlong)plVar6 + 0x284))) ||
           (*(float *)(plVar6 + 0x40) != *(float *)(plVar6 + 0x51))) {
          local_88 = *(longlong *)*(undefined1 (*) [12])(plVar6 + 0x3f);
          auVar14._12_4_ = 0;
          auVar14._0_12_ = *(undefined1 (*) [12])(plVar6 + 0x3f);
          fVar19 = (float)DAT_146877b40;
          fVar20 = DAT_146877b40._4_4_;
          fVar2 = DAT_146877b40._8_4_;
          auVar14 = divps(auVar14,_DAT_146877b40);
          fVar16 = (float)local_88 - (float)(int)auVar14._0_4_ * fVar19;
          fVar17 = (float)((ulonglong)local_88 >> 0x20) - (float)(int)auVar14._4_4_ * fVar20;
          fVar18 = *(float *)(plVar6 + 0x40) - (float)(int)auVar14._8_4_ * fVar2;
          fVar16 = (float)(((uint)(fVar16 + fVar19) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                          (uint)(fVar16 + fVar19));
          fVar17 = (float)(((uint)(fVar17 + fVar20) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                          (uint)(fVar17 + fVar20));
          fVar18 = (float)(((uint)(fVar18 + fVar2) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                          (uint)(fVar18 + fVar2));
          uVar15 = ((uint)(fVar18 - fVar2) ^ (uint)fVar18) & -(uint)(fRam0000000146877b38 < fVar18)
                   ^ (uint)fVar18;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar15);
          *(ulonglong *)pfVar1 =
               CONCAT44(((uint)(fVar17 - fVar20) ^ (uint)fVar17) &
                        -(uint)(fRam0000000146877b34 < fVar17) ^ (uint)fVar17,
                        ((uint)(fVar16 - fVar19) ^ (uint)fVar16) & -(uint)(_DAT_146877b30 < fVar16)
                        ^ (uint)fVar16);
          *(uint *)(plVar6 + 0x51) = uVar15;
          plVar8 = (longlong *)FRotator::Quaternion(pfVar1,local_68);
          lVar7 = plVar8[1];
          plVar6[0x4e] = *plVar8;
          plVar6[0x4f] = lVar7;
        }
        local_88 = plVar6[0x4e];
        uStack_80 = plVar6[0x4f];
        uVar21 = 0;
        FUN_142397be0(plVar6,&local_78,&local_88,0,0,uVar22 & 0xffffffffffffff00);
        uStack_80 = uStack_80 & 0xffffffff00000000;
        local_78 = 0xc2b40000c2b40000;
        local_70 = 0;
        FUN_142398470(plVar6,&local_78,0,0,uVar21 & 0xffffffffffffff00);
        *(undefined1 *)(plVar6 + 0x78) = 1;
        *(undefined4 *)(plVar6 + 0x79) = 0x43480000;
        *(undefined2 *)(plVar6 + 99) = 0;
        *(undefined4 *)(plVar6 + 100) = 0x42c80000;
        (**(code **)(*plVar6 + 0x290))(plVar6,1,0);
        FUN_142398ec0(plVar6,1);
      }
    }
    if (((lVar10 != 0) && (lVar4 != 0)) && (plVar6 != (longlong *)0x0)) {
      plVar8 = plVar6 + 0x61;
      *(undefined4 *)(plVar6 + 0x62) = 0;
      if (*(int *)((longlong)plVar6 + 0x314) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8,0);
        iVar12 = (int)plVar6[0x62];
      }
      *(int *)(plVar6 + 0x62) = iVar12 + 1;
      if (*(int *)((longlong)plVar6 + 0x314) < iVar12 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar12);
      }
      *(longlong **)(*plVar8 + (longlong)iVar12 * 8) = param_1;
      *(undefined1 *)(plVar6 + 0x5a) = 2;
      plVar8 = *(longlong **)(lVar4 + 0x30);
      plVar13 = plVar8 + (longlong)*(int *)(lVar4 + 0x38) * 7;
      for (; plVar8 != plVar13; plVar8 = plVar8 + 7) {
        if ((*plVar8 != 0) &&
           (plVar9 = (longlong *)FUN_140a79980(param_1), plVar9 != (longlong *)0x0)) {
          FUN_1423511f0(plVar9,plVar6);
          (**(code **)(*plVar9 + 0x568))(plVar9,0,*(undefined8 *)(lVar10 + 400));
          (**(code **)(*plVar9 + 0x928))(plVar9,*plVar8);
          FUN_142397040(plVar9,0x49742400);
          FUN_14234b150(plVar9);
          local_res10 = 0;
          local_res8 = CONCAT44(local_res8._4_4_,0x1000000);
          FUN_142382f60(plVar9,param_1[0x2d],&local_res8,0);
        }
      }
      if ((char)param_1[0x8b] == '\0') {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          lVar11 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
        }
        uVar5 = FUN_1429fde70();
        lVar10 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
        if ((lVar11 != 0) && (lVar10 != 0)) {
          fVar19 = *(float *)(param_1 + 0x92);
          if ((fVar19 == 0.0) || (*(float *)((longlong)param_1 + 0x494) == 0.0)) {
            fVar19 = *(float *)(lVar11 + 0x198);
            fVar20 = *(float *)(lVar11 + 0x19c);
          }
          else {
            fVar20 = *(float *)((longlong)param_1 + 0x494);
          }
          if (param_1[0x8c] == 0) {
            lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
            if ((lVar11 != 0) && (param_1[0x8f] == 0)) {
              lVar11 = NewObject<UTextureRenderTarget2D>(param_1);
              param_1[0x8f] = lVar11;
              if (lVar11 != 0) {
                *(undefined1 *)(lVar11 + 0xe1) = 5;
                FUN_14287a580(param_1[0x8f],(longlong)fVar19,(longlong)fVar20);
                FUN_142894320(param_1[0x8f],1);
              }
            }
          }
          else {
            param_1[0x8f] = param_1[0x8c];
          }
          *(longlong *)(lVar10 + 0x3d0) = param_1[0x8f];
          FUN_142385b60(lVar10);
        }
      }
      FUN_140757f80(param_1 + 0x8d,param_1[0x90]);
    }
  }
  return;
}



// FUNCTION 1412a5be0 FUN_1412a5be0 body=705 status=ok
// SIG undefined FUN_1412a5be0(void)

void FUN_1412a5be0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38 [2];
  longlong local_28 [2];
  
  plVar9 = (longlong *)param_1[0x23];
  plVar10 = (longlong *)0x0;
  if (plVar9 == (longlong *)0x0) {
LAB_1412a5c34:
    plVar9 = plVar10;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412a5c34;
  }
  cVar2 = FUN_140bf9670(0,param_1 + 0x31);
  if (cVar2 != '\0') {
    return;
  }
  *(int *)(param_1 + 0x30) = (int)param_1[0x31];
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_1 + 0x18c);
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x31) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x18c) = local_resc;
  cVar2 = FUN_140bf9690(0,param_1 + 0x30);
  if (cVar2 == '\0') {
    return;
  }
  uVar4 = FWeakObjectPtr::Get(param_1 + 0x30);
  lVar3 = FUN_14129f8a0(uVar4);
  if ((lVar3 != 0) &&
     (*(undefined1 *)(param_1 + 0x32) = *(undefined1 *)((longlong)param_1 + 0x191),
     *(longlong *)(lVar3 + 0x50) != 0)) {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x30);
    uVar4 = FName::ToString(lVar5 + 0x78,local_28);
    puVar6 = (undefined8 *)FUN_1424a1af0(local_38,uVar4);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar6;
    }
    plVar7 = (longlong *)FName::FName(&local_res8,puVar8,1);
    param_1[0x37] = *plVar7;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    FUN_1412a8580(param_1);
    if (((plVar9 != (longlong *)0x0) && (*(longlong *)(lVar3 + 0x50) != 0)) &&
       (cVar2 = FUN_1424a40c0(0), cVar2 != '\0')) {
      FUN_1412a1d80(param_1,plVar9,param_1[0x37],(char)param_1[0x32]);
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    plVar7 = plVar10;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      plVar7 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if (plVar7 != (longlong *)0x0) {
      *(int *)(param_1 + 0x34) = (int)plVar7[0x3f];
      param_1[0x36] = plVar7[0x40];
    }
    cVar2 = UActorComponent::IsComponentTickEnabled(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  if ((plVar9 == (longlong *)0x0) || (lVar3 = (**(code **)(*plVar9 + 0x690))(plVar9), lVar3 == 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      plVar10 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if (plVar10 != (longlong *)0x0) {
      uVar11 = (undefined4)plVar10[0x43];
      goto LAB_1412a5e76;
    }
  }
  else {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      plVar10 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if (plVar10 != (longlong *)0x0) {
      uVar11 = *(undefined4 *)((longlong)plVar10 + 0x21c);
      goto LAB_1412a5e76;
    }
  }
  uVar11 = 0;
LAB_1412a5e76:
  *(undefined4 *)(param_1 + 0x35) = uVar11;
  uVar11 = FUN_14129e600(param_1);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar11;
  return;
}



// FUNCTION 1412a5eb0 FUN_1412a5eb0 body=51 status=ok
// SIG undefined FUN_1412a5eb0(void)

void FUN_1412a5eb0(longlong param_1)

{
  FUN_140757f80(param_1 + 0x208,param_1);
  FWeakObjectPtr::operator=(param_1 + 0x208,0);
  *(undefined8 *)(param_1 + 0x210) = 0;
  return;
}



// FUNCTION 1412a5f20 FUN_1412a5f20 body=80 status=ok
// SIG undefined FUN_1412a5f20(void)

void FUN_1412a5f20(longlong param_1)

{
  FUN_1430a2730();
  FUN_1412ae6b0(param_1);
  FUN_1412af260(param_1,1);
  FUN_1412aea20(param_1,1);
  if ((*(byte *)(param_1 + 0x3b8) & 2) == 0) {
    *(byte *)(param_1 + 0x3b8) = *(byte *)(param_1 + 0x3b8) | 1;
    FUN_1412ae6b0(param_1);
    return;
  }
  return;
}



// FUNCTION 1412a5f70 OnWidgetRebuilt body=47 status=ok
// SIG undefined OnWidgetRebuilt(void)

void UCommonActionWidget::OnWidgetRebuilt(undefined8 param_1)

{
  FUN_1430a2730();
  FUN_1412ae6b0(param_1);
  FUN_1412af260(param_1,1);
  FUN_1412aea20(param_1,1);
  return;
}



// FUNCTION 1412a5fa0 FUN_1412a5fa0 body=401 status=ok
// SIG undefined FUN_1412a5fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a5fa0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined **local_138 [7];
  undefined ***local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FUN_1412a6330();
  if ((*(byte *)(param_1 + 0x350) & 1) != 0) {
    local_148[0] = *(undefined1 *)(param_1 + 0x308);
    local_144 = *(undefined4 *)(param_1 + 0x30c);
    uVar2 = 0;
    local_13c = *(undefined4 *)(param_1 + 0x314);
    local_140 = 1;
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    uVar1 = FUN_14309ed90(param_1);
    FUN_1430786d0(uVar1,local_148,local_f8);
    puVar3 = local_f8;
    if (local_38 != (undefined8 *)0x0) {
      puVar3 = local_38;
    }
    uVar4 = (longlong)(int)local_30 & 0x1fffffffffffffff;
    if (puVar3 + (int)local_30 < puVar3) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      do {
        uVar1 = *puVar3;
        FUN_14260f0c0(uVar1,DAT_146878068,0);
        local_100 = local_138;
        local_138[0] = &PTR_LAB_14475bc28;
        FUN_141297010(uVar1,local_138);
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != uVar4);
    }
    *(byte *)(param_1 + 0x350) = *(byte *)(param_1 + 0x350) & 0xfe;
    *(undefined4 *)(param_1 + 0x354) = 1;
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1412a6140 FUN_1412a6140 body=483 status=ok
// SIG undefined FUN_1412a6140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a6140(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined **local_138 [7];
  undefined ***local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  *(byte *)(param_1 + 0x3b8) = *(byte *)(param_1 + 0x3b8) & 0xfe;
  FUN_1412a6330();
  uVar3 = 0;
  if (((*(byte *)(param_1 + 0x3b8) & 2) == 0) && ((*(byte *)(param_1 + 0x3b8) & 4) != 0)) {
    FUN_1412a09a0(param_1);
  }
  else if (*(longlong *)(param_1 + 1000) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 1000);
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  FUN_1412ae6b0(param_1);
  if ((*(byte *)(param_1 + 0x350) & 1) != 0) {
    local_148[0] = *(undefined1 *)(param_1 + 0x308);
    local_144 = *(undefined4 *)(param_1 + 0x30c);
    local_13c = *(undefined4 *)(param_1 + 0x314);
    local_140 = 1;
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    uVar2 = FUN_14309ed90(param_1);
    FUN_1430786d0(uVar2,local_148,local_f8);
    puVar4 = local_f8;
    if (local_38 != (undefined8 *)0x0) {
      puVar4 = local_38;
    }
    uVar5 = (longlong)(int)local_30 & 0x1fffffffffffffff;
    if (puVar4 + (int)local_30 < puVar4) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        uVar2 = *puVar4;
        FUN_14260f0c0(uVar2,DAT_146878068,0);
        local_100 = local_138;
        local_138[0] = &PTR_LAB_14475bcb8;
        FUN_141297010(uVar2,local_138);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != uVar5);
    }
    *(byte *)(param_1 + 0x350) = *(byte *)(param_1 + 0x350) & 0xfe;
    *(undefined4 *)(param_1 + 0x354) = 1;
    if (local_38 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1412a6330 FUN_1412a6330 body=137 status=ok
// SIG undefined FUN_1412a6330(void)

void FUN_1412a6330(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_1430a2780();
  FUN_1412ae6b0(param_1);
  FUN_1412af260(param_1,0);
  if ((*(float *)(param_1 + 0x2f8) != 0.0) || (*(float *)(param_1 + 0x2fc) != 0.0)) {
    lVar2 = FUN_14309ed90(param_1);
    cVar1 = FUN_14307eb30(lVar2);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14307cf20(lVar2,*(undefined1 *)(lVar2 + 0x690));
      if (plVar3 != (longlong *)0x0) {
        local_18 = 0;
        local_10 = 0;
        (**(code **)(*plVar3 + 0x450))(plVar3,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 1412a63c0 FUN_1412a63c0 body=666 status=ok
// SIG undefined FUN_1412a63c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a63c0(longlong param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_1430a27d0();
  if (((((*(byte *)(param_1 + 0x3b8) & 4) == 0) && (param_2 == '\0')) &&
      (0.0 < *(float *)(param_1 + 0x398))) &&
     (((plVar2 = (longlong *)FUN_1412996f0(param_1), plVar2 != (longlong *)0x0 &&
       (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x668))(plVar2), plVar2 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar1 != '\0')))) {
    fVar6 = (float)FUN_14309ee20(param_1);
    fVar7 = (float)FUN_14309ede0(param_1);
    fVar8 = *(float *)(param_1 + 0x398);
    fVar7 = fVar7 * (1.0 - fVar6);
    if (fVar7 <= fVar8) {
      FUN_1412abc50(param_1);
    }
    else {
      local_c8 = FUN_1412abc50;
      lVar3 = *(longlong *)(param_1 + 0x120);
      uStack_c0 = 0;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
        fVar8 = *(float *)(param_1 + 0x398);
      }
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
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_bc;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar3;
        *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_b8 = 0;
      local_b0 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_b8);
      }
      FWeakObjectPtr::operator=(local_a8,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_a0 = 0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_98 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,param_1 + 1000,&local_b8,fVar7 - fVar8);
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar3 = FMemory::Realloc(plVar2,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412a6660 FUN_1412a6660 body=265 status=ok
// SIG undefined FUN_1412a6660(void)

void FUN_1412a6660(longlong param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_1430a2820();
  if (param_2 == '\0') {
    FUN_1412af260(param_1,0);
    if ((*(float *)(param_1 + 0x2f8) != 0.0) || (*(float *)(param_1 + 0x2fc) != 0.0)) {
      lVar3 = FUN_14309ed90(param_1);
      cVar2 = FUN_14307eb30(lVar3);
      if (cVar2 != '\0') {
        plVar4 = (longlong *)FUN_14307cf20(lVar3,*(undefined1 *)(lVar3 + 0x690));
        if (plVar4 != (longlong *)0x0) {
          local_18 = 0;
          local_10 = 0;
          (**(code **)(*plVar4 + 0x450))(plVar4,&local_18);
        }
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0x3b8);
  *(byte *)(param_1 + 0x3b8) = bVar1 & 0xfe;
  if ((bVar1 & 6) == 4) {
    FUN_1412a09a0(param_1);
    return;
  }
  if (*(longlong *)(param_1 + 1000) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar5,param_1 + 1000);
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  return;
}



// FUNCTION 1412a6770 FUN_1412a6770 body=9 status=ok
// SIG undefined FUN_1412a6770(void)

void FUN_1412a6770(longlong *param_1,char param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined8 uStackX_8;
  
  if (param_2 != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x60) & 4) != 0) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfb;
    (**(code **)(*param_1 + 0x260))();
    if (*(char *)((longlong)param_1 + 0x31c) == '\0') {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
    iVar4 = FUN_14233f450(param_1);
    if (iVar4 == 3) {
      if ((param_1[0x23] != 0) &&
         (plVar7 = *(longlong **)(param_1[0x23] + 0x150), plVar7 != (longlong *)0x0)) {
        uVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
        lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
        if ((lVar6 != 0) &&
           (plVar7 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x96c), plVar7 == param_1)) {
          FUN_140a96e80(lVar6,0);
        }
      }
      cVar3 = FUN_142d52a00(param_1 + 0x45);
      if (((cVar3 != '\0') && (param_1[0x30] != 0)) && (*(longlong *)(param_1[0x30] + 0x30) != 0)) {
        uVar5 = FUN_142d52a20(param_1 + 0x45);
        uVar5 = FArchive::operator<<(uVar5);
        lVar6 = FDuplicateDataWriter::GetSerializeContext(uVar5);
        if (lVar6 != 0) {
          lVar6 = FUN_142d62010(lVar6,*(undefined8 *)(param_1[0x30] + 0x30));
          pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UWeaponShieldComponent::ResourceNowFull",L"::");
          pwVar2 = (wchar_t *)0x0;
          while (pwVar1 = pwVar8, pwVar1 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
            pwVar2 = pwVar1;
          }
          FName::FName(&uStackX_8,pwVar2 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x28,param_1,uStackX_8);
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&UWeaponShieldComponent::ResourceNowRegenerating",L"::");
          pwVar2 = (wchar_t *)0x0;
          while (pwVar1 = pwVar8, pwVar1 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
            pwVar2 = pwVar1;
          }
          FName::FName(&uStackX_8,pwVar2 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x48,param_1,uStackX_8);
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x301) != '\x01') {
      FUN_1414ee0d0(param_1);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x54,0);
    return;
  }
  return;
}



// FUNCTION 1412a6780 FUN_1412a6780 body=145 status=ok
// SIG undefined FUN_1412a6780(void)

void FUN_1412a6780(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_1430a2820();
  if (param_2 == '\0') {
    FUN_1412af260(param_1,0);
    if ((*(float *)(param_1 + 0x2f8) != 0.0) || (*(float *)(param_1 + 0x2fc) != 0.0)) {
      lVar2 = FUN_14309ed90(param_1);
      cVar1 = FUN_14307eb30(lVar2);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FUN_14307cf20(lVar2,*(undefined1 *)(lVar2 + 0x690));
        if (plVar3 != (longlong *)0x0) {
          local_18 = 0;
          local_10 = 0;
          (**(code **)(*plVar3 + 0x450))(plVar3,&local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412a6830 FUN_1412a6830 body=494 status=ok
// SIG undefined FUN_1412a6830(void)

void FUN_1412a6830(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  *(undefined1 *)((longlong)param_1 + 0x201) = 0;
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (0 < (int)param_1[0x3d])) {
    (**(code **)(*param_1 + 0x260))(param_1);
    if ((int)param_1[0x3d] < 2) {
      *(undefined1 *)(param_1 + 0x3b) = 0;
    }
    else {
      fVar9 = 0.0;
      lVar6 = param_1[0x3c];
      fVar10 = 0.0;
      lVar7 = lVar6 + (longlong)(int)param_1[0x3d] * 0x48;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x48) {
        fVar10 = fVar10 + *(float *)(lVar6 + 0x44);
      }
      iVar2 = rand();
      iVar8 = 0;
      fVar10 = (float)iVar2 * 3.051851e-05 * fVar10;
      if (0 < (int)param_1[0x3d]) {
        do {
          lVar7 = (longlong)iVar8;
          if ((fVar9 <= fVar10) &&
             (fVar10 <= fVar9 + *(float *)(param_1[0x3c] + 0x44 + lVar7 * 0x48))) {
            *(char *)(param_1 + 0x3b) = (char)iVar8;
            break;
          }
          iVar8 = iVar8 + 1;
          fVar9 = fVar9 + *(float *)(param_1[0x3c] + 0x44 + lVar7 * 0x48);
        } while (iVar8 < (int)param_1[0x3d]);
      }
    }
    plVar3 = (longlong *)FUN_14309ec70(param_1);
    uVar4 = UMovieSceneAudioSection::GetPrivateStaticClass();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x800))(plVar3,uVar4,param_1);
    if (plVar3 != (longlong *)0x0) {
      lVar7 = UMovieSceneAudioSection::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        fVar10 = (float)FUN_142c98860(param_1[0x3c] + (ulonglong)*(byte *)(param_1 + 0x3b) * 0x48,
                                      param_1[0x23]);
        cVar5 = (char)(int)fVar10;
        if ((cVar5 < '\0') || ((int)cVar5 < (int)plVar3[0x4a])) {
          *(char *)((longlong)plVar3 + 0x264) = cVar5;
          (**(code **)(*plVar3 + 0x260))(plVar3);
        }
      }
    }
    FUN_14246fd50(param_1 + 0x38);
  }
  return;
}



// FUNCTION 1412a6a20 FUN_1412a6a20 body=219 status=ok
// SIG undefined FUN_1412a6a20(void)

void FUN_1412a6a20(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_2 == 0) {
    lVar1 = *(longlong *)(param_4 + 8);
  }
  else {
    local_28 = *param_3;
    uStack_20 = *(undefined4 *)(param_3 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FQuat::Rotator(&local_28,&local_18);
    local_28 = param_3[2];
    uStack_20 = *(undefined4 *)(param_3 + 3);
    FUN_14223c850(param_2,&local_28,0,0,1);
    local_28 = local_18;
    uStack_20 = local_10;
    AActor::SetActorRotation(param_2,&local_28,1);
    FUN_143015760(param_2,*(float *)(param_1 + 0x95c) * *(float *)(param_4 + 0x20));
    lVar1 = *(longlong *)(param_4 + 8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412a6b00 FUN_1412a6b00 body=254 status=ok
// SIG undefined FUN_1412a6b00(void)

void FUN_1412a6b00(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_28 [32];
  
  if (((*(byte *)(param_1 + 0x300) & 8) == 0) ||
     ((param_3 != '\0' && (iVar1 = FUN_14233f450(), iVar1 != 3)))) {
    if (param_3 == '\0') {
      return;
    }
    iVar1 = FUN_14233f450(param_1);
    if (iVar1 != 3) {
      return;
    }
    FUN_1414ed300(param_1,param_2);
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x330);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) goto LAB_1412a6b9f;
  }
  lVar4 = FUN_14059b7e0(*(undefined8 *)(param_1 + 0x118),1);
  *(longlong *)(param_1 + 0x330) = lVar4;
LAB_1412a6b9f:
  if (lVar4 == 0) {
    return;
  }
  FUN_1405a3150(lVar4,local_28,param_2,0);
  FUN_140591060(local_28);
  return;
}



// FUNCTION 1412a6c00 FUN_1412a6c00 body=660 status=ok
// SIG undefined FUN_1412a6c00(void)

void FUN_1412a6c00(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  undefined1 local_40;
  byte local_3f;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  if ((((lVar4 != 0) && (0.0 < *(float *)(param_1 + 0x200))) &&
      (*(longlong *)(param_1 + 0x310) != 0)) && (0 < *(int *)(param_1 + 0x1f8))) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x31c) = 1;
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(lVar4 + 0x790);
  }
  if ((*(byte *)(param_1 + 0x300) & 8) == 0) {
    return;
  }
  lVar4 = FUN_14129c640(param_1);
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1412a6b00(param_1,*(longlong *)(param_1 + 0x260),0);
  }
  if ((*(longlong *)(param_1 + 0x210) != 0) && (lVar3 = *(longlong *)(lVar4 + 0x978), lVar3 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468782a8) &&
       (_Init_thread_header(&DAT_1468782a8), DAT_1468782a8 == -1)) {
      FName::FName(&DAT_1468782a0,L"WeaponShieldHit",1);
      _Init_thread_footer(&DAT_1468782a8);
    }
    local_48 = *(undefined8 *)(param_1 + 0x210);
    local_3f = local_3f & 0xfe;
    local_3c = 0x41800000;
    local_34 = 0x42c80000;
    local_28 = DAT_1468782a0;
    local_38 = 0x41100000;
    local_30 = 4;
    local_20 = 0;
    local_40 = 0x5e;
    FUN_142db7ff0(lVar3,&local_48);
  }
  if ((*(byte *)(param_1 + 0x300) & 0x10) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x350);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x118);
      *(longlong **)(param_1 + 0x350) = plVar5;
      if (plVar5 == (longlong *)0x0) goto LAB_1412a6e12;
    }
    (**(code **)(*plVar5 + 0x990))
              (*(undefined4 *)(param_1 + 0x318),local_58,0x12,0x3f800000,
               CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x318)),0,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
  }
LAB_1412a6e12:
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_142e56530(lVar4,*(longlong *)(param_1 + 0x288),0x3f800000,0,0);
  }
  return;
}



// FUNCTION 1412a6ea0 FUN_1412a6ea0 body=1022 status=ok
// SIG undefined FUN_1412a6ea0(void)

void FUN_1412a6ea0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_128;
  float local_120;
  undefined1 local_118 [20];
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_ec;
  float local_e4;
  undefined1 local_b4 [172];
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1e8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0xf0);
  if (lVar1 == 0) {
    return;
  }
  FUN_140729f20(local_118,param_2 + 0x60);
  FWeakObjectPtr::operator=(local_b4,*(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + 0x250));
  plVar2 = *(longlong **)(param_1 + 0x350);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x350) = plVar2;
    if (plVar2 == (longlong *)0x0) goto LAB_1412a725c;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x900))(plVar2,0,0);
  if (plVar2 != (longlong *)0x0) {
    pfVar3 = (float *)(**(code **)(*plVar2 + 0x428))
                                (plVar2,&local_128,*(undefined8 *)(param_1 + 0x308));
    fVar5 = *(float *)(param_2 + 0x124);
    fVar4 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x11c) >> 0x20);
    local_128._0_4_ = (float)*(undefined8 *)(param_2 + 0x11c);
    fVar11 = SQRT(*pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]);
    fVar6 = fVar4 * fVar4 + (float)local_128 * (float)local_128 + fVar5 * fVar5;
    fVar9 = (float)local_128;
    fVar10 = fVar4;
    fVar7 = fVar5;
    if ((fVar6 != 1.0) &&
       (fVar9 = DAT_1468b5d90, fVar10 = DAT_1468b5d94, fVar7 = DAT_1468b5d98, 1e-08 <= fVar6)) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
      fVar9 = fVar7 * (float)local_128;
      fVar10 = fVar4 * fVar7;
      fVar7 = fVar5 * fVar7;
    }
    fVar9 = -(fVar11 * fVar9);
    fVar10 = -(fVar11 * fVar10);
    local_100 = local_100 + fVar10;
    local_120 = -(fVar11 * fVar7);
    local_104 = local_104 + fVar9;
    local_fc = local_fc + local_120;
    fVar5 = fVar9 * fVar9 + fVar10 * fVar10;
    if (fVar5 == 1.0) {
      local_128 = CONCAT44(fVar10,fVar9);
      if (local_120 != 0.0) {
        local_120 = 0.0;
      }
    }
    else if (1e-08 <= fVar5) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
      local_128 = CONCAT44(fVar7 * fVar10,fVar7 * fVar9);
      local_120 = 0.0;
    }
    else {
      local_128 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_120 = DAT_1468b5d98;
    }
    local_ec = local_128;
    local_e4 = local_120;
  }
LAB_1412a725c:
  FUN_142d68ea0(lVar1,*(undefined8 *)(param_2 + 0x48),local_118,1,&DAT_1466ad4f0,0);
  return;
}



// FUNCTION 1412a72a0 FUN_1412a72a0 body=309 status=ok
// SIG undefined FUN_1412a72a0(void)

void FUN_1412a72a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)FUN_14309ec70();
  lVar7 = *plVar5;
  uVar9 = (**(code **)(*param_1 + 0x428))(param_1);
  (**(code **)(lVar7 + 0x990))(plVar5,local_18,2,0x3f800000,uVar9,0,0);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  uVar6 = UMovieSceneAudioSection::GetPrivateStaticClass();
  lVar7 = (**(code **)(*plVar5 + 0x800))(plVar5,uVar6,param_1);
  if (lVar7 != 0) {
    lVar8 = UMovieSceneAudioSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      fVar10 = (float)(**(code **)(*param_1 + 0x428))(param_1);
      if ((int)(uint)*(byte *)(param_1 + 0x3b) < (int)param_1[0x3d]) {
        fVar10 = fVar10 * *(float *)(param_1[0x3c] + 0x40 +
                                    (ulonglong)*(byte *)(param_1 + 0x3b) * 0x48);
      }
      FUN_1412a8ac0(lVar7,fVar10);
    }
  }
  return;
}



// FUNCTION 1412a73e0 FUN_1412a73e0 body=486 status=ok
// SIG undefined FUN_1412a73e0(void)

void FUN_1412a73e0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x968);
  lVar4 = *(longlong *)(lVar3 + 0xe0);
  if (lVar4 != 0) {
    if ((*(int *)(lVar3 + 0xf8) == 0) && (*(int *)(lVar3 + 0xfc) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      uVar2 = FUN_1423ac7e0(*(undefined8 *)(param_1 + 0x970));
      FUN_14227a0e0(uVar2,lVar4,*(undefined8 *)(lVar3 + 0xf8),*(undefined4 *)(lVar3 + 0xe8),
                    *(undefined4 *)(lVar3 + 0xec),*(undefined4 *)(lVar3 + 0xf0),1,0xbf800000,0);
      lVar3 = *(longlong *)(param_1 + 0x968);
    }
  }
  if ((*(char *)(lVar3 + 0x56) != '\0') && (*(longlong *)(lVar3 + 0x108) != 0)) {
    if ((*(int *)(lVar3 + 0x120) == 0) && (*(int *)(lVar3 + 0x124) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((!bVar1) && (*(longlong *)(param_1 + 0x980) != 0)) && (*(longlong *)(param_1 + 0x988) != 0)
       ) {
      lVar3 = FUN_14307cf20(param_1,*(undefined1 *)(param_1 + 0x690));
      if (lVar3 != 0) {
        lVar4 = FUN_1430bdfe0();
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
          if (*(char *)(lVar3 + 0x4ed) == '\0') {
            uVar2 = *(undefined8 *)(param_1 + 0x988);
          }
          else {
            uVar2 = *(undefined8 *)(param_1 + 0x980);
          }
          lVar3 = *(longlong *)(param_1 + 0x968);
          uVar2 = FUN_1423ac7e0(uVar2);
          FUN_14227a0e0(uVar2,*(undefined8 *)(lVar3 + 0x108),*(undefined8 *)(lVar3 + 0x120),
                        *(undefined4 *)(lVar3 + 0x110),*(undefined4 *)(lVar3 + 0x114),
                        *(undefined4 *)(lVar3 + 0x118),1,0xbf800000,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412a75d0 FUN_1412a75d0 body=123 status=ok
// SIG undefined FUN_1412a75d0(void)

undefined8
FUN_1412a75d0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  if (param_3 == 1) {
    FUN_1412a73e0();
  }
  FUN_1430859f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 1412a7650 FUN_1412a7650 body=102 status=ok
// SIG undefined FUN_1412a7650(void)

undefined8
FUN_1412a7650(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  if (param_3 == 1) {
    FUN_1412a73e0();
  }
  FUN_143085ab0(param_1,param_2,param_3,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 1412a76c0 FUN_1412a76c0 body=677 status=ok
// SIG undefined FUN_1412a76c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a76c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined1 local_60 [24];
  longlong local_48 [2];
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142d88390();
  if (param_2 != (longlong *)0x0) {
    local_80 = UEnvQueryTest_Random::StaticClass();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,local_80);
    if (lVar5 != 0) {
      uVar6 = FText::FText(local_60,param_1 + 0x758);
      local_c8 = *(undefined8 *)(param_1 + 0x778);
      cVar4 = FUN_140e1c2e0(lVar5,param_1,uVar6,*(undefined8 *)(param_1 + 0x770));
      if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x780) != 0)) {
        lVar7 = FUN_142dfdfe0();
        for (lVar5 = *(longlong *)(param_1 + 0x780); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)
            ) {
          if (lVar5 == lVar7) {
            if (*(longlong *)(param_1 + 0x780) != 0) {
              local_78 = FUN_142e035e0();
              plVar9 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,local_78);
              if (plVar9 != (longlong *)0x0) {
                lVar5 = 0;
                if (*(longlong *)(param_1 + 0x780) != 0) {
                  lVar8 = FUN_142dfdfe0();
                  for (lVar7 = *(longlong *)(param_1 + 0x780);
                      (lVar5 = 0, lVar7 != 0 &&
                      (lVar5 = *(longlong *)(param_1 + 0x780), lVar7 != lVar8));
                      lVar7 = *(longlong *)(lVar7 + 0x30)) {
                  }
                }
                (**(code **)(*plVar9 + 0x410))(plVar9,lVar5,0);
              }
            }
            break;
          }
        }
      }
    }
    local_a8 = 0;
    FUN_141299550(&local_a0,0);
    if (local_a0 != (longlong *)0x0) {
      FUN_142dcf3a0(param_2,&local_90);
      if (local_90 != 0) {
        local_b8 = 0;
        local_b0 = 0;
        plVar9 = (longlong *)FUN_14129f9c0(param_1,local_70);
        if (&local_b8 != plVar9) {
          local_b8 = *plVar9;
          *plVar9 = 0;
          local_b0 = plVar9[1];
          plVar9[1] = 0;
        }
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        FString::FString(local_48,&local_b8);
        local_38 = '\x01';
        (**(code **)(*local_a0 + 0x60))(local_a0,local_90,local_48);
        if ((local_38 != '\0') && (local_38 = '\0', local_48[0] != 0)) {
          FMemory::Free();
        }
        if (local_b8 != 0) {
          FMemory::Free();
        }
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_88 + 1;
        lVar5 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
    }
    plVar9 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_98 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412a7970 FUN_1412a7970 body=464 status=ok
// SIG undefined FUN_1412a7970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a7970(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60 [2];
  longlong local_50 [2];
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_142d883b0();
  if (param_2 != 0) {
    local_98 = 0;
    FUN_141299550(&local_90,0);
    if (local_90 != (longlong *)0x0) {
      local_80 = 0;
      local_78 = 0;
      lVar4 = FUN_1412c3780(&local_80,param_1);
      if (lVar4 != 0) {
        FUN_142dcf3a0(param_2,&local_70);
        if (local_70 != 0) {
          local_a8 = 0;
          local_a0 = 0;
          plVar5 = (longlong *)FUN_14129fc70(lVar4,local_60);
          if (&local_a8 != plVar5) {
            local_a8 = *plVar5;
            *plVar5 = 0;
            local_a0 = plVar5[1];
            plVar5[1] = 0;
          }
          if (local_60[0] != 0) {
            FMemory::Free();
          }
          FString::FString(local_50,&local_a8);
          local_40 = '\x01';
          (**(code **)(*local_90 + 0x60))(local_90,local_70,local_50);
          if ((local_40 != '\0') && (local_40 = '\0', local_50[0] != 0)) {
            FMemory::Free();
          }
          if (local_a8 != 0) {
            FMemory::Free();
          }
        }
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_68 + 1;
          lVar4 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
      }
    }
    plVar5 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_88 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412a7b40 FUN_1412a7b40 body=110 status=ok
// SIG undefined FUN_1412a7b40(void)

void FUN_1412a7b40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 == *(longlong *)(param_1 + 0x3f8)) {
    FUN_141291330(param_1,0);
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      lVar3 = FUN_14149b100();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        thunk_FUN_14149b320(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412a7bb0 FUN_1412a7bb0 body=27 status=ok
// SIG undefined FUN_1412a7bb0(void)

void FUN_1412a7bb0(undefined8 param_1)

{
  FUN_1423945d0();
  FUN_141294fb0(param_1);
  return;
}



// FUNCTION 1412a7bd0 FUN_1412a7bd0 body=120 status=ok
// SIG undefined FUN_1412a7bd0(void)

void FUN_1412a7bd0(undefined8 param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  UObject::PostLoad();
  FWeakObjectPtr::operator=(&DAT_146877e98,param_1);
  puVar1 = DAT_146877ee0 + (longlong)DAT_146877ee8 * 2;
  for (puVar3 = DAT_146877ee0; puVar3 != puVar1; puVar3 = puVar3 + 2) {
    local_res8 = *puVar3;
    local_resc = puVar3[1];
    lVar2 = FWeakObjectPtr::Get(&local_res8);
    if (lVar2 != 0) {
      FUN_1412a1550(lVar2);
    }
  }
  return;
}



// FUNCTION 1412a7c50 FUN_1412a7c50 body=176 status=ok
// SIG undefined FUN_1412a7c50(void)

void FUN_1412a7c50(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_142d88890();
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 0x278))) {
    FUN_1412a1550(param_1);
    lVar1 = (longlong)DAT_146877ee8;
    if (DAT_146877ee8 < *(int *)(param_1 + 0x278)) {
      iVar2 = *(int *)(param_1 + 0x278) - DAT_146877ee8;
      DAT_146877ee8 = DAT_146877ee8 + iVar2;
      if (DAT_146877eec < DAT_146877ee8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146877ee0);
      }
      _guard_xfg_dispatch_icall_nop((void *)(DAT_146877ee0 + lVar1 * 8),0,(longlong)iVar2 << 3);
    }
    FWeakObjectPtr::operator=
              (DAT_146877ee0 + (longlong)(*(int *)(param_1 + 0x278) + -1) * 8,param_1);
  }
  return;
}



// FUNCTION 1412a7d00 FUN_1412a7d00 body=90 status=ok
// SIG undefined FUN_1412a7d00(void)

void FUN_1412a7d00(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  FUN_142d88890();
  pbVar2 = *(byte **)(param_1 + 600);
  pbVar1 = pbVar2 + (longlong)*(int *)(param_1 + 0x260) * 0x18;
  for (; pbVar2 != pbVar1; pbVar2 = pbVar2 + 0x18) {
    if (*pbVar2 != 0xff) {
      if (*(int *)(pbVar2 + 4) == 1) {
        *(int *)(pbVar2 + 4) = 1 << (*pbVar2 & 0x1f);
      }
      *pbVar2 = 0xff;
    }
  }
  return;
}



// FUNCTION 1412a7d60 FUN_1412a7d60 body=424 status=ok
// SIG undefined FUN_1412a7d60(void)

void FUN_1412a7d60(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  longlong local_38;
  undefined8 local_30;
  
  UObject::PostLoad();
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  plVar4 = *(longlong **)(param_1 + 0x150);
  iVar3 = *(int *)(param_1 + 0x158);
  if (plVar4 != plVar4 + (longlong)iVar3 * 0xc) {
    plVar8 = plVar4 + 0xb;
    do {
      lVar5 = *plVar8;
      if (lVar5 != 0) {
        lVar7 = FUN_142f477c0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (*(char *)(lVar5 + 0xd8) != '\x01')) {
          *(undefined1 *)(param_1 + 0x1e0) = 0;
          break;
        }
      }
      plVar1 = plVar8 + 1;
      plVar8 = plVar8 + 0xc;
    } while (plVar1 != plVar4 + (longlong)iVar3 * 0xc);
  }
  puVar10 = *(undefined4 **)(param_1 + 0xf8);
  puVar9 = puVar10 + (longlong)*(int *)(param_1 + 0x100) * 0x16;
  if (puVar10 != puVar9) {
    puVar11 = puVar10 + 9;
    do {
      if (*(longlong *)(puVar11 + -5) != 0) {
        FSoftObjectPath::ToString(puVar11 + -5,&local_38);
        puVar2 = puVar11 + 1;
        if (puVar2 == (uint *)&local_38) {
          if (local_38 != 0) {
            FMemory::Free();
          }
        }
        else {
          if (*(longlong *)puVar2 != 0) {
            FMemory::Free();
          }
          *(longlong *)puVar2 = local_38;
          puVar11[3] = (uint)local_30;
          puVar11[4] = local_30._4_4_;
          local_30 = 0;
          local_38 = 0;
        }
        *puVar10 = 0xffffffff;
        puVar11[-8] = 0;
        puVar11[-5] = 0;
        puVar11[-4] = 0;
        puVar11[-1] = 0;
        if (0x7fffffff < *puVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar11 + -3,0);
        }
        if (*(undefined2 **)(puVar11 + -3) != (undefined2 *)0x0) {
          **(undefined2 **)(puVar11 + -3) = 0;
        }
        puVar11[-7] = 0;
      }
      puVar10 = puVar10 + 0x16;
      puVar11 = puVar11 + 0x16;
    } while (puVar10 != puVar9);
  }
  return;
}



// FUNCTION 1412a7f10 FUN_1412a7f10 body=41 status=ok
// SIG undefined FUN_1412a7f10(void)

void FUN_1412a7f10(longlong *param_1)

{
  if (param_1[0x12d] != 0) {
    (**(code **)(*param_1 + 0xae0))();
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x7fffffff;
  }
  return;
}



// FUNCTION 1412a7f40 FUN_1412a7f40 body=52 status=ok
// SIG undefined FUN_1412a7f40(void)

void FUN_1412a7f40(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1d0,0);
    return;
  }
  return;
}



// FUNCTION 1412a7f80 FUN_1412a7f80 body=464 status=ok
// SIG undefined FUN_1412a7f80(void)

void FUN_1412a7f80(longlong *param_1,int param_2,char param_3,char param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if ((*(byte *)((longlong)param_1 + 0x1a4) & 1) != 0) {
    if (param_3 != '\0') {
      fVar5 = (float)param_2 * 0.01;
      fVar6 = 0.0;
      if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
        fVar6 = 1.0;
      }
      iVar2 = (**(code **)(*param_1 + 0x418))();
      param_2 = -((int)ROUND(-0.5 - ((float)iVar2 * fVar6 + (float)iVar2 * fVar6)) >> 1);
    }
    if ((param_4 != '\0') && (iVar2 = FUN_14233f450(param_1), iVar2 == 3)) {
      FUN_1430bb910(param_1,param_2);
    }
    iVar2 = (**(code **)(*param_1 + 0x448))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x418))(param_1);
    if (0 < iVar3) {
      if (param_2 < 0) {
        param_2 = *(int *)((longlong)param_1 + 0x1bc);
      }
      iVar4 = (**(code **)(*param_1 + 0x420))(param_1);
      iVar3 = (**(code **)(*param_1 + 0x418))(param_1);
      if (param_2 + iVar4 <= iVar3) {
        iVar3 = param_2 + iVar4;
      }
      iVar4 = iVar2;
      if (iVar3 <= iVar2) {
        iVar4 = iVar3;
      }
      *(int *)(param_1 + 0x39) = iVar4;
      *(int *)(param_1 + 0x3b) = iVar4;
      cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
      if (cVar1 == '\0') {
        iVar2 = iVar2 - (int)param_1[0x39];
        iVar3 = 0;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        *(int *)(param_1 + 0x3a) = iVar3;
      }
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    if (param_5 != '\0') {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    }
    return;
  }
  if (param_3 != '\0') {
    fVar5 = (float)param_2 * 0.01;
    fVar6 = 0.0;
    if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
      fVar6 = 1.0;
    }
    fVar6 = (float)(int)param_1[0x3e] * fVar6;
    param_2 = -((int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1);
  }
  iVar2 = (int)param_1[0x3e];
  if (param_2 < 0) {
    param_2 = iVar2;
  }
  param_2 = *(int *)((longlong)param_1 + 0x1ec) + param_2;
  if (param_2 <= iVar2) {
    iVar2 = param_2;
  }
  *(int *)((longlong)param_1 + 0x1ec) = iVar2;
  return;
}



// FUNCTION 1412a8150 FUN_1412a8150 body=352 status=ok
// SIG undefined FUN_1412a8150(void)

void FUN_1412a8150(longlong *param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  (**(code **)(*param_1 + 0x260))(param_1);
  lVar2 = param_1[0x39];
  iVar5 = (**(code **)(*param_1 + 0x448))(param_1);
  lVar8 = param_1[0x39];
  iVar6 = (**(code **)(*param_1 + 0x418))(param_1);
  if ((int)lVar8 <= iVar5) {
    iVar5 = (int)lVar8;
  }
  if (iVar5 <= iVar6) {
    iVar6 = iVar5;
  }
  *(int *)(param_1 + 0x39) = iVar6;
  iVar6 = (**(code **)(*param_1 + 0x448))(param_1);
  iVar6 = iVar6 - (int)param_1[0x39];
  iVar5 = 0;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  bVar1 = false;
  *(int *)(param_1 + 0x3a) = iVar5;
  plVar7 = (longlong *)FUN_14307d730(param_1);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar7 + 0x950))(plVar7);
    if (lVar8 != 0) {
      lVar8 = (**(code **)(*plVar7 + 0x950))(plVar7);
      if (*(longlong *)(lVar8 + 0x490) != 0) {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x950))(plVar7);
        cVar3 = (**(code **)(*plVar7 + 0x778))(plVar7);
        bVar1 = false;
        if (cVar3 == '\0') {
          bVar1 = true;
        }
      }
    }
  }
  if ((param_2 != '\0') || ((int)param_1[0x39] != (int)lVar2)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    if (bVar1) {
      FUN_1414e9ab0(param_1,(int)param_1[0x39]);
    }
  }
  *(int *)(param_1 + 0x3b) = (int)param_1[0x39];
  *(undefined1 *)((longlong)param_1 + 0x1f9) = 0;
  if (bVar1) {
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x1f9);
    if (0 < *(int *)((longlong)param_1 + 0x1bc)) {
      uVar4 = 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x1f9) = uVar4;
  }
  return;
}



// FUNCTION 1412a82b0 FUN_1412a82b0 body=169 status=ok
// SIG undefined FUN_1412a82b0(void)

void FUN_1412a82b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x350);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x350) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OnWeaponUsed",1);
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = *puVar1;
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  FUN_143088a40(lVar2,&local_18,1,0);
  return;
}



// FUNCTION 1412a8360 FUN_1412a8360 body=533 status=ok
// SIG undefined FUN_1412a8360(void)

void FUN_1412a8360(longlong *param_1)

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
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1412a849f;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_1412a849f:
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
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x10 + *param_1);
        uVar8 = (int)((ulonglong)*(undefined8 *)*puVar13 >> 0x20) + (int)*(undefined8 *)*puVar13 &
                (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 1) =
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



// FUNCTION 1412a8580 FUN_1412a8580 body=273 status=ok
// SIG undefined FUN_1412a8580(void)

void FUN_1412a8580(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1c8);
    iVar4 = 0;
    if (0 < *(int *)(lVar1 + 0x1e0)) {
      lVar6 = 0;
      do {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x1d8) + lVar6);
        if ((((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == lVar3)
           ) {
          if (((int)plVar5[1] != 0) && (plVar2 = (longlong *)*plVar5, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar5 != 0) {
              lVar3 = FMemory::Realloc(*plVar5,0,0);
              *plVar5 = lVar3;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar4 < *(int *)(lVar1 + 0x1e0));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x1d8,0);
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    if (lVar1 != 0) {
      FUN_142494f10(lVar1);
      FMemory::operator_delete(lVar1,0x1f0);
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 1412a86a0 RemoveAtImpl body=188 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FMeltOperationData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + *param_1),(longlong)iVar1 << 5);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1412a8760 FUN_1412a8760 body=186 status=ok
// SIG undefined FUN_1412a8760(void)

void FUN_1412a8760(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x38);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x38),
                 (void *)((longlong)(param_2 + param_3) * 0x38 + *param_1),(longlong)iVar1 * 0x38);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1412a8820 FUN_1412a8820 body=168 status=ok
// SIG undefined FUN_1412a8820(void)

void FUN_1412a8820(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_28 [32];
  
  FUN_1430a3740();
  cVar1 = FUN_1407c3030(param_1 + 800);
  if (cVar1 != '\0') {
    cVar1 = FUN_142d52a00(param_1 + 0x338);
    if (cVar1 != '\0') {
      uVar2 = FUN_142d52a20(param_1 + 0x338);
      lVar3 = FArchive::operator<<(uVar2);
      FUN_14248ba60(lVar3 + 0x1c,param_1 + 800);
      FUN_142d5ac70(param_1 + 0x338);
    }
    puVar4 = (undefined8 *)FUN_14246da30(local_28);
    uVar2 = puVar4[1];
    *(undefined8 *)(param_1 + 800) = *puVar4;
    *(undefined8 *)(param_1 + 0x328) = uVar2;
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(puVar4 + 2);
    *(undefined4 *)(param_1 + 0x318) = 0;
    *(undefined4 *)(param_1 + 0x31c) = 0xbf800000;
  }
  return;
}



// FUNCTION 1412a88d0 FUN_1412a88d0 body=117 status=ok
// SIG undefined FUN_1412a88d0(void)

void FUN_1412a88d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x272) != '\0') {
    *(undefined1 *)(param_1 + 0x272) = 0;
    lVar2 = FUN_14309ec30();
    if (lVar2 != 0) {
      lVar3 = FUN_14149b100();
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
        FUN_14127d640(lVar2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412a8950 FUN_1412a8950 body=366 status=ok
// SIG undefined FUN_1412a8950(void)

void FUN_1412a8950(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  if (param_1[0x3f] != 0) {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar5,param_1 + 0x3f);
    *(undefined1 *)((longlong)param_1 + 0x201) = 1;
    param_1[0x3f] = 0;
    plVar4 = (longlong *)FUN_14309ec70(param_1);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x808))(plVar4,0xffffffff,0);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x36,0);
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    *(ushort *)((longlong)param_1 + 0x202) =
         *(short *)((longlong)param_1 + 0x202) + 1U & 0xf | (ushort)*(byte *)(param_1 + 0x40) << 4;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x201) != '\0') {
    FUN_1412a6830(param_1);
  }
  plVar4 = (longlong *)FUN_14309ec70(param_1);
  uVar5 = UMovieSceneAudioSection::GetPrivateStaticClass();
  lVar3 = (**(code **)(*plVar4 + 0x800))(plVar4,uVar5,param_1);
  if (lVar3 != 0) {
    lVar6 = UMovieSceneAudioSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1412a88d0(lVar3);
    }
  }
  local_res8[0] = 1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x34,local_res8);
  return;
}



// FUNCTION 1412a8ac0 FUN_1412a8ac0 body=562 status=ok
// SIG undefined FUN_1412a8ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412a8ac0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(lVar1 + 0x790);
  if (param_2 <= 0.0) {
    *(undefined4 *)(param_1 + 0x26c) = 0x447a0000;
  }
  else {
    local_b8 = &LAB_141295a30;
    lVar1 = *(longlong *)(param_1 + 0x120);
    uStack_b0 = 0;
    *(float *)(param_1 + 0x26c) = 1.0 / param_2;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_ac;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x288,&local_a8,param_2);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
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



// FUNCTION 1412a8d00 FUN_1412a8d00 body=85 status=ok
// SIG undefined FUN_1412a8d00(void)

void FUN_1412a8d00(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x201) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  plVar1 = (longlong *)FUN_14309ec70();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x808))(plVar1,0xffffffff,0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x1b0,0);
    return;
  }
  return;
}



// FUNCTION 1412a8d60 FUN_1412a8d60 body=92 status=ok
// SIG undefined FUN_1412a8d60(void)

void FUN_1412a8d60(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 != 3) {
    return;
  }
  (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  *(undefined1 *)((longlong)param_1 + 0x25c) = 0;
  (**(code **)(*param_1 + 0x260))(param_1);
  if (*(char *)((longlong)param_1 + 0x25c) != '\0') {
    FUN_1414ea2f0();
    return;
  }
  FUN_1414ea370(param_1);
  return;
}



// FUNCTION 1412a8dc0 FUN_1412a8dc0 body=764 status=ok
// SIG undefined FUN_1412a8dc0(void)

void FUN_1412a8dc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 local_res8 [8];
  
  FUN_1430a3790();
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = (longlong *)plVar2[1];
    cVar1 = (char)param_2[1];
    while (cVar1 != -1) {
      if (cVar1 == '\t') {
        puVar5 = *(undefined4 **)plVar2[1];
        if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar5 + 1) {
          (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0xe0,4);
          if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar2,param_1 + 0xe0,4);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xe0) = *puVar5;
          *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
        }
      }
      else if (cVar1 == '\n') {
        puVar6 = *(undefined1 **)plVar2[1];
        if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0xe4,1);
        }
        else {
          *(undefined1 *)(param_1 + 0xe4) = *puVar6;
          *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
        }
      }
      else {
        if (cVar1 != '\v') {
          return;
        }
        cVar1 = *(char *)(param_1 + 0xdc);
        (**(code **)(*plVar2 + 8))(plVar2);
        if (*(char *)(param_1 + 0xdc) != cVar1) {
          if (*(char *)(param_1 + 0xdc) == '\0') {
            FUN_1414ea370(param_1 + -0x180);
          }
          else {
            FUN_1414ea2f0();
          }
        }
      }
      if ((char)param_2[1] != -1) {
        plVar3 = *(longlong **)(*param_2 + 8);
        puVar6 = *(undefined1 **)plVar3[1];
        if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar6 + 1) {
          (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar6;
          *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
        }
      }
      cVar1 = (char)param_2[1];
    }
  }
  else {
    lVar4 = plVar2[3];
    local_res8[0] = 9;
    if (*(int *)(param_1 + 0xe0) != *(int *)(lVar4 + 0x20)) {
      plVar2 = (longlong *)plVar3[1];
      if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar2;
        *plVar2 = *plVar2 + 1;
      }
      puVar5 = *(undefined4 **)plVar3[1];
      if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar5 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,param_1 + 0xe0,4);
        if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar3,param_1 + 0xe0,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xe0) = *puVar5;
        *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
      }
    }
    local_res8[0] = 10;
    if (*(char *)(param_1 + 0xe4) != *(char *)(lVar4 + 0x24)) {
      plVar2 = (longlong *)plVar3[1];
      if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar2;
        *plVar2 = *plVar2 + 1;
      }
      puVar6 = *(undefined1 **)plVar3[1];
      if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar6 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,param_1 + 0xe4,1);
      }
      else {
        *(undefined1 *)(param_1 + 0xe4) = *puVar6;
        *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
      }
    }
    local_res8[0] = 0xb;
    if (*(char *)(param_1 + 0xdc) != *(char *)(lVar4 + 0x25)) {
      plVar2 = (longlong *)plVar3[1];
      if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
        (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar2;
        *plVar2 = *plVar2 + 1;
      }
      (**(code **)(*plVar3 + 8))(plVar3,param_1 + 0xdc);
    }
  }
  return;
}



// FUNCTION 1412a90c0 FUN_1412a90c0 body=870 status=ok
// SIG undefined FUN_1412a90c0(void)

void FUN_1412a90c0(longlong param_1,longlong *param_2)

{
  short sVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  FUN_1430a3fc0();
  plVar2 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar2;
  if (plVar8 == (longlong *)0x0) {
    plVar2 = (longlong *)plVar2[1];
    cVar6 = (char)param_2[1];
    while (cVar6 != -1) {
      if (cVar6 == '\x02') {
        puVar3 = *(undefined1 **)plVar2[1];
        if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar3 + 1) {
          (**(code **)(*plVar2 + 0x50))(plVar2,(undefined1 *)(param_1 + 0x58),1);
        }
        else {
          *(undefined1 *)(param_1 + 0x58) = *puVar3;
          *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
        }
      }
      else {
        if (cVar6 != '\x03') {
          return;
        }
        sVar1 = *(short *)(param_1 + 0x82);
        puVar4 = *(undefined2 **)plVar2[1];
        if ((undefined2 *)((undefined8 *)plVar2[1])[1] < puVar4 + 1) {
          (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + 0x82,2);
          if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar2,param_1 + 0x82,2);
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x82) = *puVar4;
          *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 2;
        }
        if (*(short *)(param_1 + 0x82) != sVar1) {
          lVar10 = param_1 + -0x180;
          if (((*(longlong *)(param_1 + -0x68) != 0) &&
              (plVar8 = *(longlong **)(*(longlong *)(param_1 + -0x68) + 0x150),
              plVar8 != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(*plVar8 + 0x778))(), cVar6 == '\0')) {
            cVar6 = *(char *)(param_1 + 0x80);
            cVar7 = (char)(*(ushort *)(param_1 + 0x82) >> 4);
            *(char *)(param_1 + 0x80) = cVar7;
            if (cVar7 == '\0') {
              if (cVar6 == '\x01') {
                plVar8 = (longlong *)FUN_14309ec70(lVar10);
                uVar9 = UMovieSceneAudioSection::GetPrivateStaticClass();
                lVar10 = (**(code **)(*plVar8 + 0x800))(plVar8,uVar9,lVar10);
                if (lVar10 != 0) {
                  lVar11 = UMovieSceneAudioSection::GetPrivateStaticClass();
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
                    FUN_1412a88d0(lVar10);
                  }
                }
              }
            }
            else if (cVar7 == '\x01') {
              FUN_1412a72a0(lVar10);
            }
            else if (cVar7 == '\x02') {
              FUN_1412ac8e0(lVar10);
            }
          }
        }
      }
      if ((char)param_2[1] == -1) {
        return;
      }
      plVar8 = *(longlong **)(*param_2 + 8);
      puVar3 = *(undefined1 **)plVar8[1];
      if ((undefined1 *)((undefined8 *)plVar8[1])[1] < puVar3 + 1) {
        (**(code **)(*plVar8 + 0x50))(plVar8,param_2 + 1,1);
      }
      else {
        *(undefined1 *)(param_2 + 1) = *puVar3;
        *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 1;
      }
      cVar6 = (char)param_2[1];
    }
  }
  else {
    lVar10 = plVar2[3];
    local_res8[0] = 2;
    if (*(char *)(param_1 + 0x58) != *(char *)(lVar10 + 0x10)) {
      plVar2 = (longlong *)plVar8[1];
      if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
        (**(code **)(*plVar8 + 0x50))(plVar8,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar2;
        *plVar2 = *plVar2 + 1;
      }
      puVar3 = *(undefined1 **)plVar8[1];
      if ((undefined1 *)((undefined8 *)plVar8[1])[1] < puVar3 + 1) {
        (**(code **)(*plVar8 + 0x50))(plVar8,param_1 + 0x58,1);
      }
      else {
        *(undefined1 *)(param_1 + 0x58) = *puVar3;
        *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 1;
      }
    }
    local_res8[0] = 3;
    if (*(short *)(param_1 + 0x82) != *(short *)(lVar10 + 0x12)) {
      plVar2 = (longlong *)plVar8[1];
      if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
        (**(code **)(*plVar8 + 0x50))(plVar8,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar2;
        *plVar2 = *plVar2 + 1;
      }
      puVar4 = *(undefined2 **)plVar8[1];
      if ((undefined2 *)((undefined8 *)plVar8[1])[1] < puVar4 + 1) {
        (**(code **)(*plVar8 + 0x50))(plVar8,param_1 + 0x82,2);
        if ((*(byte *)((longlong)plVar8 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar8,param_1 + 0x82,2);
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x82) = *puVar4;
        *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 2;
      }
    }
  }
  return;
}



// FUNCTION 1412a9430 FUN_1412a9430 body=603 status=ok
// SIG undefined FUN_1412a9430(void)

void FUN_1412a9430(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    lVar3 = plVar1[1];
    lVar4 = plVar1[4];
    cVar5 = (char)param_2[1];
    while (cVar5 != -1) {
      if (cVar5 == '\0') {
        lVar6 = param_1 + 0x10;
        puVar7 = local_38;
      }
      else if (cVar5 == '\x01') {
        lVar6 = param_1 + 0x1c;
        puVar7 = local_res20;
      }
      else if (cVar5 == '\x02') {
        lVar6 = param_1 + 0x3c;
        puVar7 = local_res18;
      }
      else {
        if (cVar5 != '\x03') {
          return;
        }
        lVar6 = param_1 + 0x48;
        puVar7 = local_res10;
      }
      FUN_142487a60(lVar6,lVar3,lVar4,puVar7);
      if ((char)param_2[1] != -1) {
        plVar1 = *(longlong **)(*param_2 + 8);
        puVar7 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar7 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar7;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
      }
      cVar5 = (char)param_2[1];
    }
  }
  else {
    lVar3 = plVar1[3];
    local_res10[0] = 0;
    if (*(float *)(lVar3 + 8) != *(float *)(param_1 + 0x14)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x10,plVar2,0,local_res18);
    }
    local_res10[0] = 1;
    if (*(float *)(lVar3 + 0xc) != *(float *)(param_1 + 0x20)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x1c,plVar2,0,local_res18);
    }
    local_res10[0] = 2;
    if (*(float *)(lVar3 + 0x10) != *(float *)(param_1 + 0x40)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x3c,plVar2,0,local_res18);
    }
    local_res10[0] = 3;
    if (*(float *)(lVar3 + 0x14) != *(float *)(param_1 + 0x4c)) {
      plVar1 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_res18[0] = 1;
      FUN_142487a60(param_1 + 0x48,plVar2,0,local_res18);
      return;
    }
  }
  return;
}



// FUNCTION 1412a9690 FUN_1412a9690 body=87 status=ok
// SIG undefined FUN_1412a9690(void)

void FUN_1412a9690(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  longlong local_10;
  
  if ((*(char *)(param_1 + 0x958) != '\0') && (*(longlong *)(param_1 + 0x960) != 0)) {
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      local_10 = FUN_1412996f0(param_1);
      if (local_10 != 0) {
        local_18 = *(undefined8 *)(param_1 + 0x960);
        FUN_142dd9890(local_10,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 1412a96f0 FUN_1412a96f0 body=144 status=ok
// SIG undefined FUN_1412a96f0(void)

void FUN_1412a96f0(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar3 = *(uint *)(param_1 + 0x4c);
  if (uVar2 < 9) {
    uVar2 = 8;
    goto LAB_1412a9759;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0x4c);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_1412a9759;
    }
    if (uVar2 == 0) goto LAB_1412a9759;
  }
  uVar2 = uVar3;
LAB_1412a9759:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x4c) = uVar2;
    TInlineAllocator<8,FDefaultAllocator>::ForElementType<USkeletalMeshComponent_*>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1412a9780 FUN_1412a9780 body=89 status=ok
// SIG undefined FUN_1412a9780(void)

void FUN_1412a9780(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x301) != '\0') {
    if (*(char *)(param_1[0x23] + 0x129) == '\x02') {
      (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
    }
    *(undefined1 *)((longlong)param_1 + 0x301) = 0;
    (**(code **)(*param_1 + 0x260))(param_1);
    FUN_1412ab650(param_1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x58,0);
  return;
}



// FUNCTION 1412a97e0 FUN_1412a97e0 body=89 status=ok
// SIG undefined FUN_1412a97e0(void)

void FUN_1412a97e0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x301) != '\0') {
    if (*(char *)(param_1[0x23] + 0x129) == '\x02') {
      (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
    }
    *(undefined1 *)((longlong)param_1 + 0x301) = 0;
    (**(code **)(*param_1 + 0x260))(param_1);
    FUN_1412ab650(param_1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x5c,0);
  return;
}



// FUNCTION 1412a9840 FUN_1412a9840 body=606 status=ok
// SIG undefined FUN_1412a9840(void)

ulonglong FUN_1412a9840(longlong param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  float fVar12;
  undefined8 local_res20;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  
  if (((DAT_1468c217e == '\0') && (param_2 != 0)) && (param_3 != (longlong *)0x0)) {
    lVar4 = FHdrImageWrapper::GetHeight(param_3);
    uStack_3c = 0x467a0000;
    local_48 = (undefined2 *)0x6;
    uStack_40 = CONCAT31(uStack_40._1_3_,1);
    local_38 = (local_38 >> 8 & 0xff) << 8;
    local_a8 = 0;
    local_a0 = 0;
    fVar12 = (float)(**(code **)(*param_3 + 0x2b0))(param_3);
    iVar9 = (int)fVar12;
    fVar12 = (float)(**(code **)(*param_3 + 0x2b8))(param_3);
    iVar7 = (int)fVar12;
    uVar2 = iVar7 * iVar9 + (uint)local_a0;
    local_a0 = CONCAT44(local_a0._4_4_,uVar2);
    if (local_a0._4_4_ < (int)uVar2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8);
      uVar2 = (uint)local_a0;
    }
    in_RAX = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      local_98 = 0;
      uStack_90 = CONCAT44(iVar7,iVar9);
      local_68 = (undefined4)local_48;
      uStack_64 = local_48._4_4_;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      local_78 = 0;
      uStack_74 = 0;
      local_58 = local_38;
      iStack_70 = iVar9;
      iStack_6c = iVar7;
      in_RAX = FUN_1428863d0(lVar4 + 0x68,&local_a8,&local_68,&local_78);
      if ((char)in_RAX != '\0') {
        local_98 = 0;
        uStack_90 = 0;
        FImageUtils::CompressImageArray(iVar9,iVar7,&local_a8,&local_98);
        local_res20 = *(undefined8 *)(param_1 + 0x18);
        FName::ToString(&local_res20,&local_88);
        puVar8 = &DAT_143f3eda8;
        if (iStack_80 != 0) {
          puVar8 = local_88;
        }
        uVar3 = FUN_140cfc820(param_2);
        puVar5 = (undefined8 *)UKismetStringLibrary::Conv_IntToString(&local_48,uVar3);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar5;
        }
        puVar5 = (undefined8 *)FUN_14167d0d0(&local_68);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar5;
        }
        FString::PrintfImpl(&local_78,L"%sSaveGames/%s/%s.%s",puVar11,puVar10,puVar8,
                            PTR_DAT_1462a2a08);
        if (CONCAT44(uStack_64,local_68) != 0) {
          FMemory::Free();
        }
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_88 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_88 = (undefined2 *)local_98;
        puVar8 = &DAT_143f3eda8;
        if (iStack_70 != 0) {
          puVar8 = (undefined2 *)CONCAT44(uStack_74,local_78);
        }
        iStack_80 = (undefined4)uStack_90;
        local_48 = (undefined2 *)local_98;
        uStack_40 = (undefined4)uStack_90;
        uStack_3c = uStack_7c;
        uVar6 = FUN_1415c3d50();
        bVar1 = FUN_14167ef40(&local_48,puVar8,uVar6,0);
        if (CONCAT44(uStack_74,local_78) != 0) {
          FMemory::Free();
        }
        if ((undefined2 *)local_98 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        return (ulonglong)bVar1;
      }
    }
    if (local_a8 != 0) {
      in_RAX = FMemory::Free();
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1412a9aa0 FUN_1412a9aa0 body=2103 status=ok
// SIG undefined FUN_1412a9aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1412a9aa0(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_6c8 [32];
  undefined1 local_6a8 [8];
  longlong *local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  longlong local_688;
  longlong *local_680;
  longlong local_678;
  undefined1 *local_670;
  longlong local_668 [4];
  longlong *local_648;
  undefined8 local_640;
  longlong local_638 [4];
  longlong *local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined1 local_600;
  undefined1 local_5f8 [608];
  undefined8 local_398;
  undefined8 local_390;
  undefined1 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  longlong local_340;
  undefined4 local_338;
  undefined8 local_330;
  longlong local_228;
  undefined8 local_220;
  longlong local_118;
  undefined8 local_110;
  longlong local_88;
  undefined8 local_80;
  longlong local_78 [8];
  
  local_78[3] = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  local_688 = param_1;
  local_680 = param_3;
  local_678 = param_2;
  if ((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0x68) == 0)) {
    FUN_1412aa2e0();
    return;
  }
  local_78[2] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_142ff04c0(param_2,local_78,local_78 + 1,local_78 + 2);
  local_608 = *(undefined8 *)(param_2 + 0x118);
  plVar11 = *(longlong **)(param_2 + 0x220);
  local_600 = 1;
  local_398 = 0;
  local_390 = 0;
  plVar10 = plVar11 + *(int *)(param_2 + 0x228);
  local_388 = 1;
  local_380 = 0;
  local_378 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0xffffffff;
  local_34c = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_228 = 0;
  local_220 = 0;
  local_118 = 0;
  local_110 = 0;
  local_88 = 0;
  local_80 = 0;
  for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
    lVar6 = *plVar11;
    if (lVar6 == 0) {
LAB_1412a9c3b:
      FUN_142df0490(&local_608,lVar6 + 0x1c0);
      FUN_142df0400(&local_608,lVar6 + 0x1b0);
      plVar8 = *(longlong **)(lVar6 + 0x208);
      plVar9 = plVar8 + *(int *)(lVar6 + 0x210);
      for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
        lVar6 = *plVar8;
        if (lVar6 != 0) {
          lVar4 = UXSkinAnimationProfile::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if (bVar17) {
            uVar5 = UDamageableInterface::GetPrivateStaticClass();
            uVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar5);
            FUN_142df03d0(&local_608,uVar5);
          }
        }
      }
    }
    else {
      lVar4 = FUN_1414ec2a0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if ((!bVar17) || (*(char *)(lVar6 + 0x250) == '\0')) goto LAB_1412a9c3b;
    }
    param_1 = local_688;
  }
  uVar14 = 0;
  local_6a0 = (longlong *)0x0;
  local_698 = 0;
  if (local_78[0] != 0) {
    local_698 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_6a0,0);
    uVar14 = local_698 & 0xffffffff;
    *local_6a0 = local_78[0];
  }
  local_618 = (longlong *)0x0;
  local_648 = (longlong *)0x0;
  local_610 = 0;
  local_640 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = DAT_146b33f38;
  lVar15 = DAT_146b33f38 + 0xa0;
  lVar4 = FWeakObjectPtr::Get(lVar15);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar6 + 0xa8)) &&
       (local_690 = 0, *(longlong *)(lVar6 + 0xb0) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar15,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar6 + 0xa8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar15);
      if (lVar4 != 0) {
        uVar14 = local_698 & 0xffffffff;
        goto LAB_1412a9de0;
      }
    }
    uVar14 = local_698 & 0xffffffff;
  }
  else {
LAB_1412a9de0:
    lVar6 = FUN_1413bd170();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      plVar10 = *(longlong **)(param_1 + 0x40);
      plVar11 = plVar10 + (longlong)*(int *)(param_1 + 0x48) * 2;
      for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
        if (((*(float *)(plVar10 + 1) != 0.0) || (*(float *)((longlong)plVar10 + 0xc) != 0.0)) &&
           (lVar6 = FUN_1412c32f0(lVar4,*plVar10), lVar6 != 0)) {
          if ((*(char *)(lVar6 + 8) == '\0') ||
             (plVar9 = *(longlong **)(lVar6 + 0x18), plVar9 == (longlong *)0x0)) {
            fVar18 = (float)FUN_142de8cc0(&local_608,*(undefined8 *)(lVar6 + 0x10),2);
          }
          else {
            fVar18 = (float)(**(code **)(*plVar9 + 0x278))(plVar9,&local_608);
          }
          uVar12 = local_640;
          fVar1 = *(float *)(plVar10 + 1);
          if (0.0 <= fVar1) {
            bVar17 = fVar18 < fVar1;
          }
          else {
            bVar17 = fVar1 < fVar18;
          }
          if (!bVar17 && fVar1 != fVar18) {
            lVar6 = (longlong)(int)local_640;
            iVar3 = (int)local_640 + 1;
            local_640 = CONCAT44(local_640._4_4_,iVar3);
            if (local_640._4_4_ < iVar3) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_668,uVar12 & 0xffffffff);
            }
            plVar9 = local_668;
            if (local_648 != (longlong *)0x0) {
              plVar9 = local_648;
            }
            plVar9[lVar6] = *plVar10;
          }
          uVar12 = local_610;
          fVar1 = *(float *)((longlong)plVar10 + 0xc);
          if (0.0 <= fVar1) {
            bVar17 = fVar18 < fVar1;
          }
          else {
            bVar17 = fVar1 < fVar18;
          }
          if (!bVar17 && fVar1 != fVar18) {
            lVar6 = (longlong)(int)local_610;
            iVar3 = (int)local_610 + 1;
            local_610 = CONCAT44(local_610._4_4_,iVar3);
            if (local_610._4_4_ < iVar3) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (local_638,uVar12 & 0xffffffff);
            }
            plVar9 = local_638;
            if (local_618 != (longlong *)0x0) {
              plVar9 = local_618;
            }
            plVar9[lVar6] = *plVar10;
          }
        }
        param_3 = local_680;
      }
    }
  }
  plVar11 = *(longlong **)(local_688 + 0x70);
  plVar10 = plVar11 + (longlong)*(int *)(local_688 + 0x78) * 3;
  if (plVar11 != plVar10) {
    plVar9 = local_668;
    if (local_648 != (longlong *)0x0) {
      plVar9 = local_648;
    }
LAB_1412a9fa0:
    plVar8 = plVar9 + (int)local_640;
    if (plVar9 != plVar8) {
      plVar7 = plVar9;
      do {
        if (*plVar7 == *plVar11) {
          if (plVar9 != plVar8) {
            plVar7 = plVar9;
            goto LAB_1412a9fd0;
          }
          break;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar8);
    }
    goto LAB_1412a9fde;
  }
LAB_1412a9ffb:
  plVar11 = *(longlong **)(local_688 + 0x60);
  plVar10 = plVar11 + (longlong)*(int *)(local_688 + 0x68) * 3;
  if (plVar11 != plVar10) {
    plVar9 = local_638;
    if (local_618 != (longlong *)0x0) {
      plVar9 = local_618;
    }
    do {
      if (plVar9 != plVar9 + (int)local_610) {
        plVar8 = plVar9;
        do {
          if (*plVar8 == *plVar11) {
            lVar6 = plVar11[2];
            if (lVar6 != 0) goto LAB_1412aa0de;
            goto LAB_1412aa062;
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar9 + (int)local_610);
      }
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar10);
  }
LAB_1412aa062:
  plVar11 = *(longlong **)(local_688 + 0x50);
  plVar10 = plVar11 + (longlong)*(int *)(local_688 + 0x58) * 3;
  if (plVar11 == plVar10) {
LAB_1412aa0bc:
    uVar12 = 0;
    if (*(longlong *)(local_678 + 0x210) == 0) {
      iVar3 = 2;
    }
    else {
      iVar3 = *(int *)(*(longlong *)(local_678 + 0x210) + 0x100);
    }
    local_670 = local_6a8;
    local_6a8[0] = 0;
    FUN_141289770(local_6a0,uVar14,&local_670);
    plVar10 = local_6a0;
    uVar13 = uVar12;
    if (0 < iVar3) {
      do {
        if (((longlong)uVar12 < 0) || ((int)uVar14 <= (int)uVar13)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
          }
          *(longlong *)(*param_3 + (longlong)iVar2 * 8) = plVar10[uVar12];
        }
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)((int)uVar13 + 1);
      } while ((longlong)uVar12 < (longlong)iVar3);
    }
    lVar6 = 1;
    do {
      lVar4 = local_78[lVar6];
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
          lVar4 = local_78[lVar6];
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < 3);
    if (local_648 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_618 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_6a0 != (longlong *)0x0) {
      FMemory::Free(local_6a0);
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
    local_338 = 0;
    if (local_340 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_380);
    FUN_14099aac0(local_5f8);
    return;
  }
  plVar9 = local_668;
  if (local_648 != (longlong *)0x0) {
    plVar9 = local_648;
  }
  while (plVar9 == plVar9 + (int)local_640) {
LAB_1412aa0ae:
    plVar11 = plVar11 + 3;
    if (plVar11 == plVar10) goto LAB_1412aa0bc;
  }
  plVar8 = plVar9;
  while (*plVar8 != *plVar11) {
    plVar8 = plVar8 + 1;
    if (plVar8 == plVar9 + (int)local_640) goto LAB_1412aa0ae;
  }
  lVar6 = plVar11[2];
  if (lVar6 == 0) goto LAB_1412aa0bc;
LAB_1412aa0de:
  iVar3 = (int)uVar14;
  plVar10 = local_6a0;
  do {
    if (plVar10 == local_6a0 + iVar3) {
LAB_1412aa10e:
      uVar16 = iVar3 + 1;
      local_698 = CONCAT44(local_698._4_4_,uVar16);
      if (local_698._4_4_ < (int)uVar16) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_6a0,uVar14);
        uVar16 = (uint)local_698;
      }
      uVar14 = (ulonglong)uVar16;
      local_6a0[iVar3] = lVar6;
      goto LAB_1412aa0bc;
    }
    if (*plVar10 == lVar6) {
      if ((int)((longlong)plVar10 - (longlong)local_6a0 >> 3) != -1) goto LAB_1412aa0bc;
      goto LAB_1412aa10e;
    }
    plVar10 = (longlong *)((longlong)plVar10 + 8);
  } while( true );
  while (plVar7 = plVar7 + 1, plVar7 != plVar8) {
LAB_1412a9fd0:
    if (*plVar7 == plVar11[1]) {
      lVar6 = plVar11[2];
      if (lVar6 != 0) goto LAB_1412aa0de;
      goto LAB_1412a9ffb;
    }
  }
LAB_1412a9fde:
  plVar11 = plVar11 + 3;
  if (plVar11 == plVar10) goto LAB_1412a9ffb;
  goto LAB_1412a9fa0;
}



// FUNCTION 1412aa2e0 FUN_1412aa2e0 body=1325 status=ok
// SIG undefined FUN_1412aa2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1412aa2e0(longlong *param_1,undefined1 *param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  float *pfVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_648 [32];
  undefined1 local_628 [8];
  longlong *local_620;
  undefined1 *local_618;
  longlong *local_610;
  int local_608;
  int local_604;
  undefined8 local_600;
  undefined1 local_5f8;
  undefined1 local_5f0 [608];
  undefined8 local_390;
  undefined8 local_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 local_344;
  longlong local_338;
  undefined4 local_330;
  undefined8 local_328;
  longlong local_220;
  undefined8 local_218;
  longlong local_110;
  undefined8 local_108;
  longlong local_80;
  undefined8 local_78;
  longlong local_70 [7];
  
  local_70[3] = DAT_1468387a8 ^ (ulonglong)auStack_648;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  local_620 = param_1;
  local_618 = param_2;
  FUN_142ff04c0(param_2,local_70,local_70 + 1,local_70 + 2);
  local_600 = *(undefined8 *)(param_2 + 0x118);
  plVar8 = *(longlong **)(param_2 + 0x220);
  local_5f8 = 1;
  local_390 = 0;
  local_388 = 0;
  plVar4 = plVar8 + *(int *)(param_2 + 0x228);
  local_380 = 1;
  local_378 = 0;
  local_370 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0xffffffff;
  local_344 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_220 = 0;
  local_218 = 0;
  local_110 = 0;
  local_108 = 0;
  local_80 = 0;
  local_78 = 0;
  for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
    lVar13 = *plVar8;
    if (lVar13 == 0) {
LAB_1412aa45b:
      FUN_142df0490(&local_600,lVar13 + 0x1c0);
      FUN_142df0400(&local_600,lVar13 + 0x1b0);
      plVar5 = *(longlong **)(lVar13 + 0x208);
      plVar11 = plVar5 + *(int *)(lVar13 + 0x210);
      for (; plVar5 != plVar11; plVar5 = plVar5 + 1) {
        lVar13 = *plVar5;
        if (lVar13 != 0) {
          lVar2 = UXSkinAnimationProfile::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          if (bVar14) {
            uVar3 = UDamageableInterface::GetPrivateStaticClass();
            uVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar3);
            FUN_142df03d0(&local_600,uVar3);
          }
        }
      }
    }
    else {
      lVar2 = FUN_1414ec2a0();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((!bVar14) || (*(char *)(lVar13 + 0x250) == '\0')) goto LAB_1412aa45b;
    }
    param_1 = local_620;
  }
  local_610 = (longlong *)0x0;
  local_604 = 0;
  lVar13 = 1;
  iVar12 = 0;
  if (local_70[0] != 0) {
    local_608 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_610,0);
    *local_610 = local_70[0];
    iVar12 = local_608;
  }
  plVar8 = *(longlong **)((longlong)param_1 + 0x30);
  plVar4 = plVar8 + (longlong)*(int *)((longlong)param_1 + 0x38) * 3;
  plVar11 = local_610;
  local_620 = plVar4;
  if (plVar8 == plVar4) {
LAB_1412aa660:
    if (*(longlong *)(local_618 + 0x210) == 0) {
      iVar9 = 2;
    }
    else {
      iVar9 = *(int *)(*(longlong *)(local_618 + 0x210) + 0x100);
    }
    local_618 = local_628;
    local_628[0] = 0;
    FUN_141289770(plVar11,iVar12,&local_618);
    iVar7 = 0;
    puVar10 = (undefined1 *)(longlong)iVar9;
    lVar2 = 0;
    local_618 = puVar10;
    if (0 < iVar9) {
      do {
        if ((lVar2 < 0) || (iVar12 <= iVar7)) {
          bVar14 = false;
        }
        else {
          bVar14 = true;
        }
        if (bVar14) {
          iVar9 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar9 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar9 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar9);
            puVar10 = local_618;
          }
          *(longlong *)(*param_3 + (longlong)iVar9 * 8) = plVar11[lVar2];
        }
        iVar7 = iVar7 + 1;
        lVar2 = lVar2 + 1;
      } while (lVar2 < (longlong)puVar10);
    }
    do {
      lVar2 = local_70[lVar13];
      if (lVar2 != 0) {
        iVar12 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar12 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar12);
          lVar2 = local_70[lVar13];
        }
        *(longlong *)(*param_3 + (longlong)iVar12 * 8) = lVar2;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < 3);
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (local_220 != 0) {
      FMemory::Free();
    }
    local_330 = 0;
    if (local_338 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_378);
    FUN_14099aac0(local_5f0);
    return;
  }
LAB_1412aa580:
  if (*plVar8 != 0) {
    fVar15 = (float)FUN_142de8cc0(&local_600,*plVar8,2);
    plVar4 = local_620;
    if (0 < (int)plVar8[2]) {
      lVar2 = (longlong)(int)plVar8[2] + -1;
      pfVar6 = (float *)(lVar2 * 0x10 + plVar8[1]);
      do {
        fVar1 = *pfVar6;
        if (0.0 <= fVar1) {
          bVar14 = fVar15 < fVar1;
        }
        else {
          bVar14 = fVar1 < fVar15;
        }
        if (!bVar14 && fVar1 != fVar15) {
          if (*(longlong *)(pfVar6 + 2) != 0) {
            plVar5 = plVar11;
            if (plVar11 == plVar11 + iVar12) goto LAB_1412aa614;
            goto LAB_1412aa5f8;
          }
          break;
        }
        pfVar6 = pfVar6 + -4;
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
  }
  goto LAB_1412aa64b;
  while (plVar5 = plVar5 + 1, plVar5 != plVar11 + iVar12) {
LAB_1412aa5f8:
    if (*plVar5 == *(longlong *)(pfVar6 + 2)) {
      if ((int)((longlong)plVar5 - (longlong)plVar11 >> 3) != -1) goto LAB_1412aa64b;
      break;
    }
  }
LAB_1412aa614:
  local_608 = iVar12 + 1;
  if (local_604 < local_608) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_610,iVar12);
    plVar11 = local_610;
  }
  plVar11[iVar12] = *(longlong *)(pfVar6 + 2);
  plVar4 = local_620;
  iVar12 = local_608;
LAB_1412aa64b:
  plVar8 = plVar8 + 3;
  if (plVar8 == plVar4) goto LAB_1412aa660;
  goto LAB_1412aa580;
}



// FUNCTION 1412aa810 FUN_1412aa810 body=96 status=ok
// SIG undefined FUN_1412aa810(void)

void FUN_1412aa810(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14307d730();
  if (plVar3 != (longlong *)0x0) {
    lVar1 = (**(code **)(*plVar3 + 0x950))(plVar3);
    if (lVar1 != 0) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x950))(plVar3);
      cVar2 = (**(code **)(*plVar3 + 0x778))(plVar3);
      if (cVar2 == '\0') {
        FUN_1414e9ab0(param_1,*(undefined4 *)(param_1 + 0x1c8));
      }
    }
  }
  return;
}



// FUNCTION 1412aa870 FUN_1412aa870 body=354 status=ok
// SIG undefined FUN_1412aa870(void)

void FUN_1412aa870(longlong *param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_14308a840();
  (**(code **)(*param_1 + 0x358))(param_1,param_2);
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    if (param_2 == '\0') {
      if (param_1[0x23] == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1[0x23] + 0xc);
      }
      *(int *)((longlong)param_1 + 0x1ec) = (int)param_1[0x39];
      *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)((longlong)param_1 + 0x1bc);
      *(undefined4 *)(param_1 + 0x3d) = uVar3;
      *(undefined1 *)((longlong)param_1 + 0x1f9) = 0;
      return;
    }
    if ((param_1[0x24] == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
      return;
    }
    if ((*(int *)((longlong)param_1 + 0x1ec) == (int)param_1[0x3e]) &&
       (iVar1 = (**(code **)(*param_1 + 0x418))(param_1), 0 < iVar1)) {
      *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)((longlong)param_1 + 0x1bc);
    }
                    /* WARNING: Could not recover jumptable at 0x0001412aa904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x408))(param_1,1);
    return;
  }
  if (param_2 != '\0') {
    if ((char)param_1[0x3f] != '\0') {
      return;
    }
    FUN_1414ea3b0(param_1);
    return;
  }
  if (param_1[0x40] != 0) {
    lVar2 = param_1[0x24];
    if ((lVar2 != 0) || (lVar2 = FUN_1423407b0(param_1), lVar2 != 0)) {
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      FUN_142880530(uVar4,param_1 + 0x40);
    }
    param_1[0x40] = 0;
    return;
  }
  return;
}



// FUNCTION 1412aa9e0 FUN_1412aa9e0 body=104 status=ok
// SIG undefined FUN_1412aa9e0(void)

void FUN_1412aa9e0(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
    *(undefined1 *)((longlong)param_1 + 0x25c) = param_2;
    (**(code **)(*param_1 + 0x260))(param_1);
    if (*(char *)((longlong)param_1 + 0x25c) != '\0') {
      FUN_1414ea2f0();
      return;
    }
    FUN_1414ea370(param_1);
  }
  return;
}



// FUNCTION 1412aaa50 FUN_1412aaa50 body=40 status=ok
// SIG undefined FUN_1412aaa50(void)

void FUN_1412aaa50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3f8);
  if ((lVar1 != param_2) &&
     (*(longlong *)(param_1 + 0x3f8) = param_2, (*(byte *)(param_1 + 200) & 0x20) != 0)) {
    FUN_141292190(param_1,lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1412aaa80 FUN_1412aaa80 body=105 status=ok
// SIG undefined FUN_1412aaa80(void)

void FUN_1412aaa80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3f0);
  if (lVar1 != param_2) {
    *(longlong *)(param_1 + 0x3f0) = param_2;
    lVar2 = FUN_14129ab90();
    if (lVar2 != 0) {
      if (lVar1 != 0) {
        FUN_142d26ae0(lVar2,lVar1);
      }
      if (*(longlong *)(param_1 + 0x3f0) != 0) {
        FUN_142d271f0(lVar2,*(longlong *)(param_1 + 0x3f0),0);
      }
    }
  }
  return;
}



// FUNCTION 1412aaaf0 FUN_1412aaaf0 body=60 status=ok
// SIG undefined FUN_1412aaaf0(void)

void FUN_1412aaaf0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar1 != 0) {
    lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x5a0) != 0)) {
      UAssetRegistryImpl::OnPathAdded();
      return;
    }
  }
  return;
}



// FUNCTION 1412aab30 FUN_1412aab30 body=116 status=ok
// SIG undefined FUN_1412aab30(void)

void FUN_1412aab30(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
     (*(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588) != 0)) {
    uVar1 = FUN_14129dd30(param_1,uVar2);
    FUN_1412aabb0(param_1,uVar2,uVar1);
  }
  return;
}



// FUNCTION 1412aabb0 FUN_1412aabb0 body=1105 status=ok
// SIG undefined FUN_1412aabb0(void)

void FUN_1412aabb0(undefined8 *param_1,longlong *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x148))(param_2);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  plVar14 = (longlong *)0x0;
  plVar11 = plVar14;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    plVar11 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  *param_1 = 0;
  if (param_3 != 0) {
    if (param_3 == 2) {
      plVar11 = plVar11 + 0x17;
    }
    else {
      if ((param_3 != 1) && (param_3 != 4)) {
        return;
      }
      plVar11 = plVar11 + 0x12;
    }
    plVar7 = (longlong *)FWeakObjectPtr::Get(plVar11);
    if (plVar7 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != (int)plVar11[1]) && (plVar11[2] != 0)) {
        lVar8 = FUN_141796df0();
        FWeakObjectPtr::operator=(plVar11,lVar8);
        if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(plVar11 + 1) = DAT_1464b56f4;
        }
        plVar7 = (longlong *)FWeakObjectPtr::Get(plVar11);
        if (plVar7 != (longlong *)0x0) goto LAB_1412aafb3;
      }
    }
    else {
LAB_1412aafb3:
      lVar8 = FUN_1414f8520();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_1412aafec;
    }
    plVar7 = plVar14;
    goto LAB_1412aafec;
  }
  puVar3 = (undefined4 *)param_1[0x1a];
  iVar2 = *(int *)(param_1 + 0x1b);
  bVar6 = false;
  bVar5 = false;
  if (puVar3 != puVar3 + (longlong)iVar2 * 10) {
    puVar12 = puVar3 + 1;
LAB_1412aac70:
    local_60 = puVar12[-1];
    local_5c = *puVar12;
    local_58 = puVar12[1];
    local_78 = *(undefined8 *)(puVar12 + 3);
    local_48 = 0;
    local_40 = 0;
    local_50 = 0;
    FString::FString(local_70,puVar12 + 5);
    FSoftObjectPath::operator=(&local_50,&local_78);
    plVar7 = (longlong *)FUN_1405ec200(&local_60);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = FUN_14171bfe0();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar9 = (longlong *)FUN_142f71d80();
        plVar10 = plVar7;
        do {
          if (plVar10 == plVar9) {
            plVar9 = (longlong *)FUN_142f71d80();
            plVar10 = plVar7;
            goto LAB_1412aad28;
          }
          plVar10 = (longlong *)plVar10[6];
        } while (plVar10 != (longlong *)0x0);
      }
    }
    goto LAB_1412aad85;
  }
LAB_1412aadad:
  lVar8 = FUN_1405ec200(plVar11 + 8);
  if (lVar8 != 0) {
    FUN_1414f8520();
  }
  lVar8 = FUN_1405ec200(plVar11 + 0xd);
  if (lVar8 != 0) {
    FUN_1414f8520();
  }
  if (bVar5) {
    plVar7 = (longlong *)FWeakObjectPtr::Get(plVar11 + 0xd);
    if (plVar7 != (longlong *)0x0) goto LAB_1412aaed6;
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)plVar11[0xe]) && (plVar11[0xf] != 0)) {
      lVar8 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar11 + 0xd,lVar8);
      if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(plVar11 + 0xe) = DAT_1464b56f4;
      }
      plVar11 = plVar11 + 0xd;
LAB_1412aaec9:
      plVar7 = (longlong *)FWeakObjectPtr::Get(plVar11);
      if (plVar7 != (longlong *)0x0) goto LAB_1412aaed6;
    }
  }
  else {
    plVar7 = (longlong *)FWeakObjectPtr::Get(plVar11 + 8);
    if (plVar7 == (longlong *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != (int)plVar11[9]) && (plVar11[10] != 0)) {
        lVar8 = FUN_141796df0();
        FWeakObjectPtr::operator=(plVar11 + 8,lVar8);
        if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(plVar11 + 9) = DAT_1464b56f4;
        }
        plVar11 = plVar11 + 8;
        goto LAB_1412aaec9;
      }
      goto LAB_1412aaf0c;
    }
LAB_1412aaed6:
    lVar8 = FUN_1414f8520();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_1412aafec;
  }
LAB_1412aaf0c:
  plVar7 = plVar14;
LAB_1412aafec:
  *param_1 = plVar7;
  return;
  while (plVar10 = (longlong *)plVar10[6], plVar10 != (longlong *)0x0) {
LAB_1412aad28:
    if (plVar10 == plVar9) {
      plVar9 = (longlong *)FUN_142f71d80();
      plVar10 = plVar7;
      goto LAB_1412aad40;
    }
  }
  goto LAB_1412aad85;
  while (plVar10 = (longlong *)plVar10[6], plVar13 = plVar14, plVar10 != (longlong *)0x0) {
LAB_1412aad40:
    plVar13 = plVar7;
    if (plVar10 == plVar9) break;
  }
  if (((plVar13[0x1f] != 0) || ((**(code **)(*plVar13 + 0x368))(plVar13), plVar13[0x1f] != 0)) &&
     (lVar8 = FUN_142f5a280(), bVar5 = bVar6, lVar8 != 0)) {
    bVar6 = true;
    bVar5 = true;
  }
LAB_1412aad85:
  if (local_48 != 0) {
    FMemory::Free();
  }
  puVar1 = puVar12 + 9;
  puVar12 = puVar12 + 10;
  if (puVar1 == puVar3 + (longlong)iVar2 * 10) goto LAB_1412aadad;
  goto LAB_1412aac70;
}



// FUNCTION 1412ab010 FUN_1412ab010 body=74 status=ok
// SIG undefined FUN_1412ab010(void)

void FUN_1412ab010(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_142d52a00(param_1 + 0x228);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x228);
    uVar1 = FArchive::operator<<(uVar1);
    FUN_142d6f560(uVar1,param_2,1);
  }
  return;
}



// FUNCTION 1412ab060 FUN_1412ab060 body=121 status=ok
// SIG undefined FUN_1412ab060(void)

undefined1 FUN_1412ab060(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  if (param_4 != '\0') {
    *(longlong *)(param_1 + 0x488) = param_2;
    *(undefined8 *)(param_1 + 0x490) = *param_3;
    FUN_1412a5540();
    return 0;
  }
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x488) == 0)) {
    *(longlong *)(param_1 + 0x488) = param_2;
    *(undefined8 *)(param_1 + 0x490) = *param_3;
    uVar1 = FUN_140e3df00(local_18,param_1,FUN_1412a5540);
    FUN_141292a70(param_2,uVar1);
  }
  return 0;
}



// FUNCTION 1412ab0e0 FUN_1412ab0e0 body=614 status=ok
// SIG undefined FUN_1412ab0e0(void)

void FUN_1412ab0e0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined4 *)(param_1 + 8) = 2;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1412ab297;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1412ab297:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1412ab350 FUN_1412ab350 body=656 status=ok
// SIG undefined FUN_1412ab350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412ab350(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_1b8 [32];
  code *local_198 [2];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_158;
  code *local_148;
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (*(char *)(param_1 + 0x3d8) == '\0') {
    if (*(longlong *)(param_1 + 0x378) == 0) {
      if (*(longlong *)(param_1 + 0x380) != 0) {
        lVar2 = UDungeonEventListener::GetPrivateStaticClass();
        for (lVar3 = *(longlong *)(param_1 + 0x380); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)
            ) {
          if (lVar3 == lVar2) {
            if (*(longlong *)(param_1 + 0x380) != 0) goto LAB_1412ab3bd;
            break;
          }
        }
      }
    }
    else {
LAB_1412ab3bd:
      lVar3 = FUN_14309ed90(param_1);
      if (lVar3 != 0) {
        FUN_143088220(lVar3,param_1 + 0x370);
      }
      *(undefined1 *)(param_1 + 0x3d8) = 1;
    }
  }
  if ((*(longlong *)(param_1 + 0x360) == 0) || (lVar3 = FUN_14309ed90(param_1), lVar3 == 0))
  goto LAB_1412ab5be;
  uVar6 = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_138);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x39c);
  local_148 = (code *)&LAB_141293d50;
  local_168 = 0;
  local_158 = 0;
  if (local_108 == 0) {
LAB_1412ab49c:
    local_198[0] = FUN_1407c3030;
  }
  else {
    plVar5 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar5 = local_118;
    }
    if (plVar5 == (longlong *)0x0) goto LAB_1412ab49c;
    plVar5 = (longlong *)(**(code **)*plVar5)(plVar5,local_188);
    (**(code **)(*plVar5 + 8))(plVar5);
    local_198[0] = local_148;
  }
  FUN_143078810(lVar3,local_198,uVar1,local_f8);
  if ((int)local_30 != 0) {
    if (*(longlong *)(param_1 + 0x3d0) == 0) {
      lVar3 = UMaterialInstanceDynamic::Create(*(undefined8 *)(param_1 + 0x360),param_1);
      *(longlong *)(param_1 + 0x3d0) = lVar3;
      if (lVar3 == 0) goto LAB_1412ab56a;
    }
    puVar4 = local_f8;
    if (local_38 != (undefined8 *)0x0) {
      puVar4 = local_38;
    }
    uVar7 = (longlong)(int)local_30 & 0x1fffffffffffffff;
    if (puVar4 + (int)local_30 < puVar4) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      do {
        FUN_14260f470(*puVar4,*(undefined8 *)(param_1 + 0x368),*(undefined8 *)(param_1 + 0x3d0));
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 != uVar7);
    }
  }
LAB_1412ab56a:
  if (local_108 != 0) {
    plVar5 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar5 = local_118;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
LAB_1412ab5be:
  FUN_1412ae1f0(param_1);
  return;
}



// FUNCTION 1412ab5e0 FUN_1412ab5e0 body=98 status=ok
// SIG undefined FUN_1412ab5e0(void)

void FUN_1412ab5e0(longlong *param_1,undefined8 param_2)

{
  if (*(char *)((longlong)param_1 + 0x301) != '\x01') {
    if (*(char *)(param_1[0x23] + 0x129) == '\x02') {
      (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
    }
    *(undefined1 *)((longlong)param_1 + 0x301) = 1;
    (**(code **)(*param_1 + 0x260))(param_1);
    FUN_1412ab650(param_1);
  }
  FUN_1412a6ea0(param_1,param_2);
  return;
}



// FUNCTION 1412ab650 FUN_1412ab650 body=261 status=ok
// SIG undefined FUN_1412ab650(void)

void FUN_1412ab650(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x301) == '\0') {
    FUN_1414edd00(param_1);
    if ((*(byte *)(param_1 + 0x300) & 1) != 0) {
      FUN_1412a82b0(param_1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x301) == '\x01') {
    FUN_1414ee0d0(param_1);
    if ((*(byte *)(param_1 + 0x300) & 1) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x350);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x118);
        *(longlong *)(param_1 + 0x350) = lVar2;
        if (lVar2 == 0) goto LAB_1412ab71e;
      }
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"OnWeaponUsed",1);
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = *puVar1;
      local_18 = local_28;
      local_14 = local_24;
      local_10 = local_20;
      FUN_143094570(lVar2,&local_18,1);
    }
LAB_1412ab71e:
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x2d0,0);
    return;
  }
  return;
}



// FUNCTION 1412ab760 FUN_1412ab760 body=225 status=ok
// SIG undefined FUN_1412ab760(void)

ulonglong FUN_1412ab760(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (lVar6 != 0) {
    lVar2 = FUN_142f477c0();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = (longlong *)(uVar3 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (longlong *)CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') goto LAB_1412ab7ae;
  }
  lVar6 = 0;
LAB_1412ab7ae:
  if ((((param_2 != 0) && (lVar6 != 0)) &&
      (in_RAX = (longlong *)UWorld::GetGameState<APVPGameState>(param_2), in_RAX != (longlong *)0x0)
      ) && (in_RAX[0xb4] != 0)) {
    in_RAX = (longlong *)UAssetRegistryImpl::OnPathAdded();
    plVar5 = (longlong *)*in_RAX;
    plVar4 = plVar5 + (longlong)(int)in_RAX[1] * 2;
    for (; plVar5 != plVar4; plVar5 = plVar5 + 2) {
      lVar2 = *plVar5;
      if (lVar2 == lVar6) {
        if (((*(char *)((longlong)plVar5 + 10) == '\0') && (lVar2 != 0)) &&
           (in_RAX = (longlong *)FUN_142f43380(lVar2,param_2,0), (char)in_RAX != '\0')) {
          return (ulonglong)*(byte *)(plVar5 + 1);
        }
        break;
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1412ab850 FUN_1412ab850 body=769 status=ok
// SIG undefined FUN_1412ab850(void)

ulonglong FUN_1412ab850(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  bVar9 = false;
  lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
  puVar5 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    local_70 = FUN_142f429c0(lVar4);
    puVar5 = (undefined8 *)0x0;
    if (local_70 != 0) {
      puVar5 = (undefined8 *)UAssetRegistryImpl::OnPathAdded(local_70);
      pauVar11 = (undefined1 (*) [16])*puVar5;
      pauVar10 = pauVar11 + *(int *)(puVar5 + 1);
      for (; pauVar11 != pauVar10; pauVar11 = pauVar11 + 1) {
        local_68 = *pauVar11;
        uVar3 = local_68._0_8_;
        puVar5 = (undefined8 *)(local_68._8_8_ >> 0x10);
        if ((local_68[10] == '\0') && (local_68._0_8_ != 0)) {
          lVar4 = FWeakObjectPtr::Get();
          if (lVar4 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
              puVar5 = (undefined8 *)0x0;
            }
            else {
              puVar5 = (undefined8 *)(ulonglong)DAT_1464b56f4;
            }
            UNLOCK();
            if (((int)puVar5 != *(int *)(uVar3 + 0x78)) &&
               (puVar5 = (undefined8 *)0x0, *(longlong *)(uVar3 + 0x80) != 0)) {
              lVar4 = FUN_141796df0();
              FWeakObjectPtr::operator=(uVar3 + 0x70,lVar4);
              if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(uint *)(uVar3 + 0x78) = DAT_1464b56f4;
              }
              lVar4 = FWeakObjectPtr::Get(uVar3 + 0x70);
              puVar5 = (undefined8 *)0x0;
              if (lVar4 != 0) goto LAB_1412ab972;
            }
            goto LAB_1412abaf0;
          }
LAB_1412ab972:
          lVar6 = FUN_142e67be0();
          iVar1 = *(int *)(lVar6 + 0x90);
          uVar8 = (longlong)iVar1;
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
             (uVar8 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
             *(longlong *)(uVar8 + (longlong)iVar1 * 8) != lVar6 + 0x88)) {
            puVar5 = (undefined8 *)(uVar8 & 0xffffffffffffff00);
          }
          else {
            puVar5 = (undefined8 *)CONCAT71((int7)(uVar8 >> 8),1);
          }
          if ((char)puVar5 == '\0') goto LAB_1412abaf0;
          local_98 = 0xffffffff;
          local_80 = 0;
          local_78 = 0;
          local_94 = 0;
          local_88 = 0;
          if (param_1 == 0) {
            local_88 = 0;
          }
          else {
            uVar7 = FSoftObjectPath::FSoftObjectPath(local_58,param_1);
            FSoftObjectPath::operator=(&local_88,uVar7);
            FWeakObjectPtr::operator=(&local_98,param_1);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_94 = CONCAT44(DAT_1464b56f4,(undefined4)local_94);
          }
          bVar9 = true;
          lVar4 = FWeakObjectPtr::Get();
          if (lVar4 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(uint *)(uVar3 + 0x78)) && (*(longlong *)(uVar3 + 0x80) != 0)) {
              lVar4 = FUN_141796df0();
              FWeakObjectPtr::operator=(uVar3 + 0x70,lVar4);
              if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(uint *)(uVar3 + 0x78) = DAT_1464b56f4;
              }
              lVar4 = FWeakObjectPtr::Get(uVar3 + 0x70);
              if (lVar4 != 0) goto LAB_1412aba8e;
            }
LAB_1412abac4:
            lVar4 = 0;
          }
          else {
LAB_1412aba8e:
            lVar6 = FUN_142e67be0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1412abac4;
          }
          puVar5 = (undefined8 *)FSoftObjectPath::operator==(lVar4 + 0xa0,&local_88);
          if (((char)puVar5 == '\0') ||
             (puVar5 = (undefined8 *)FUN_142f451a0(local_70,uVar3), (char)puVar5 == '\0'))
          goto LAB_1412abaf0;
          bVar2 = true;
        }
        else {
LAB_1412abaf0:
          bVar2 = false;
        }
        if ((bVar9) && (bVar9 = false, local_80 != 0)) {
          puVar5 = (undefined8 *)FMemory::Free();
        }
        if (bVar2) {
          if (uVar3 != 0) {
            uVar8 = FUN_142f43380(uVar3,param_2,0);
            return uVar8;
          }
          return 0;
        }
      }
    }
  }
  return (ulonglong)puVar5 & 0xffffffffffffff00;
}



// FUNCTION 1412abb60 FUN_1412abb60 body=181 status=ok
// SIG undefined FUN_1412abb60(void)

ulonglong FUN_1412abb60(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  longlong local_18;
  
  lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  puVar3 = (undefined8 *)0x0;
  if (((lVar2 != 0) &&
      (puVar3 = (undefined8 *)UWorld::GetGameState<APVPGameState>(lVar2),
      puVar3 != (undefined8 *)0x0)) && (puVar3[0xb4] != 0)) {
    puVar3 = (undefined8 *)UAssetRegistryImpl::OnPathAdded();
    pauVar5 = (undefined1 (*) [16])*puVar3;
    pauVar6 = pauVar5 + *(int *)(puVar3 + 1);
    for (; pauVar5 != pauVar6; pauVar5 = pauVar5 + 1) {
      auVar1 = *pauVar5;
      puVar3 = (undefined8 *)(auVar1._8_8_ >> 0x10);
      if (((auVar1[10] == '\0') && (local_18 = auVar1._0_8_, local_18 != 0)) &&
         ((puVar3 = *(undefined8 **)(param_1 + 0x78), *(undefined8 **)(local_18 + 0x30) == puVar3 &&
          (auVar1[8] != '\0')))) {
        uVar4 = FUN_142f43380(local_18,param_2,0);
        return uVar4;
      }
    }
  }
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



// FUNCTION 1412abc20 FUN_1412abc20 body=41 status=ok
// SIG undefined FUN_1412abc20(void)

bool FUN_1412abc20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0xf0),param_2,0);
    return cVar1 != '\0';
  }
  return false;
}



// FUNCTION 1412abc50 FUN_1412abc50 body=1535 status=ok
// SIG undefined FUN_1412abc50(void)

void FUN_1412abc50(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int *piVar15;
  int *piVar16;
  undefined8 local_res8;
  longlong local_res10;
  int local_58;
  int local_54;
  longlong local_50;
  int local_48;
  int local_44;
  longlong local_40;
  
  param_1[0x7d] = 0;
  if ((*(byte *)(param_1 + 0x77) & 4) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x354) = 1;
  plVar7 = (longlong *)FUN_1412996f0();
  pwVar8 = (wchar_t *)(**(code **)(*plVar7 + 0x668))(plVar7);
  if (pwVar8 != (wchar_t *)0x0) {
    lVar9 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1412abce1;
  }
  pwVar8 = (wchar_t *)0x0;
LAB_1412abce1:
  if (((param_1[0x71] != 0) && (pwVar8 != (wchar_t *)0x0)) &&
     (lVar9 = *(longlong *)(pwVar8 + 0x4bc), lVar9 != 0)) {
    FWeakObjectPtr::operator=(param_1 + 0x76,lVar9);
    *(byte *)(param_1 + 0x77) = *(byte *)(param_1 + 0x77) | 4;
    plVar7 = (longlong *)FUN_14309ed90(param_1);
    if (param_1[0x72] != 0) {
      local_res8 = 0;
      FUN_142d9dd60(lVar9,param_1[0x72],0,0);
    }
    bVar4 = *(byte *)((longlong)param_1 + 0x39c);
    if ((bVar4 & 1) != 0) {
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      plVar10 = (longlong *)FName::FName(&local_res8,L"OnAmmoChanged",1);
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = *plVar10;
      local_48 = local_58;
      local_44 = local_54;
      local_40 = local_50;
      FUN_143087f00(plVar7,&local_48,param_1);
      bVar4 = *(byte *)((longlong)param_1 + 0x39c);
    }
    if ((bVar4 & 2) != 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0xbf800000;
      uVar11 = FUN_1414ec640();
      lVar12 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar11);
      param_1[0x79] = lVar12;
      if (lVar12 != 0) {
        *(longlong **)(lVar12 + 0x338) = param_1;
        *(undefined4 *)(param_1 + 0x7c) = 0xbf800000;
      }
    }
    bVar4 = *(byte *)((longlong)param_1 + 0x39c);
    if ((bVar4 & 4) != 0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UWeaponScopeComponent::OnTargetLockChange",L"::");
      pwVar8 = (wchar_t *)0x0;
      while (pwVar3 = pwVar13, pwVar3 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      lVar12 = local_res10;
      plVar10 = plVar7 + 0xac;
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = lVar12;
      local_res8 = 0;
      if ((lVar12 != 0) && (lVar12 = FWeakObjectPtr::Get(&local_58), lVar12 != 0)) {
        UObject::FindFunction(lVar12,local_50);
      }
      piVar15 = (int *)*plVar10;
      lVar12 = plVar7[0xad];
      for (piVar16 = piVar15; piVar16 != piVar15 + (longlong)(int)lVar12 * 4; piVar16 = piVar16 + 4)
      {
        if (((*piVar16 == local_58) && (piVar16[1] == local_54)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar16), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_58), cVar5 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar16 + 2) == local_50)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar16 - (longlong)piVar15 >> 4) != -1) goto LAB_1412abf65;
          break;
        }
      }
      iVar1 = (int)plVar7[0xad];
      *(int *)(plVar7 + 0xad) = iVar1 + 1;
      if (*(int *)((longlong)plVar7 + 0x56c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      piVar15 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
      *piVar15 = local_58;
      piVar15[1] = local_54;
      *(longlong *)(piVar15 + 2) = local_50;
LAB_1412abf65:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      bVar4 = *(byte *)((longlong)param_1 + 0x39c);
    }
    if ((bVar4 & 8) != 0) {
      uVar11 = FUN_1430bf3b0();
      lVar12 = (**(code **)(*plVar7 + 0x800))(plVar7,uVar11,param_1);
      param_1[0x7a] = lVar12;
      if (lVar12 != 0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UWeaponScopeComponent::OnHeatChanged",L"::");
        pwVar8 = (wchar_t *)0x0;
        while (pwVar3 = pwVar13, pwVar3 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar8 = pwVar3;
        }
        FName::FName(&local_res10,pwVar8 + 2,1);
        lVar12 = param_1[0x7a];
        plVar10 = (longlong *)(lVar12 + 0x208);
        FWeakObjectPtr::operator=(&local_58,0);
        local_50 = 0;
        FWeakObjectPtr::operator=(&local_58,param_1);
        local_res8 = 0;
        local_50 = local_res10;
        if ((local_res10 != 0) && (lVar14 = FWeakObjectPtr::Get(&local_58), lVar14 != 0)) {
          UObject::FindFunction(lVar14,local_50);
        }
        piVar15 = (int *)*plVar10;
        iVar1 = *(int *)(lVar12 + 0x210);
        for (piVar16 = piVar15; piVar16 != piVar15 + (longlong)iVar1 * 4; piVar16 = piVar16 + 4) {
          if (((*piVar16 == local_58) && (piVar16[1] == local_54)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar16), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_58), cVar5 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar16 + 2) == local_50)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar16 - (longlong)piVar15 >> 4) != -1) goto LAB_1412ac0f5;
            break;
          }
        }
        iVar1 = *(int *)(lVar12 + 0x210);
        *(int *)(lVar12 + 0x210) = iVar1 + 1;
        if (*(int *)(lVar12 + 0x214) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
        }
        piVar15 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
        *piVar15 = local_58;
        piVar15[1] = local_54;
        *(longlong *)(piVar15 + 2) = local_50;
LAB_1412ac0f5:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x39c) & 0x10) != 0) {
      lVar12 = FUN_141288780(plVar7);
      param_1[0x7b] = lVar12;
      *(undefined4 *)((longlong)param_1 + 0x3e4) = 0xbf800000;
    }
    uVar6 = 4;
    if (((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
       ((cVar5 = *(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80), cVar5 == '\x02' ||
        ((cVar5 == '\x05' || (cVar5 == '\x06')))))) {
      uVar6 = 2;
    }
    local_res8 = 0;
    FUN_142d9e0d0(lVar9,param_1[0x71],1,0x4110000041800000,0x42c80000,uVar6,1,1,0,0,0,1,0);
    FUN_1412aef70(param_1,param_1[0x71]);
    if ((*(byte *)((longlong)param_1 + 0x39c) & 4) != 0) {
      uVar6 = AWorldScapeRoot::Grid_GetOnPendingLoad(plVar7);
      FUN_1412a5360(param_1,plVar7,uVar6);
    }
    cVar5 = UActorComponent::IsComponentTickEnabled(param_1);
    if ((cVar5 == '\0') && (cVar5 = (**(code **)(*param_1 + 0x458))(param_1), cVar5 != '\0')) {
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
  }
  FUN_1412aeb30(param_1,0,1,0);
  return;
}



// FUNCTION 1412ac250 FUN_1412ac250 body=101 status=ok
// SIG undefined FUN_1412ac250(void)

void FUN_1412ac250(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined4 local_20;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_28 = *param_2;
    local_20 = *(undefined4 *)(param_2 + 1);
    FUN_1424b0690(*(longlong *)(param_1 + 0x1c0),&local_28,param_3);
  }
  return;
}



// FUNCTION 1412ac2e0 FUN_1412ac2e0 body=936 status=ok
// SIG undefined FUN_1412ac2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412ac2e0(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x40) = 1;
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    *(ushort *)((longlong)param_1 + 0x202) =
         *(short *)((longlong)param_1 + 0x202) + 1U & 0xf | (ushort)*(byte *)(param_1 + 0x40) << 4;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  local_f8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x32,local_f8);
  FUN_1412a72a0(param_1);
  fVar8 = 1.0;
  local_f0 = FUN_1412a8d00;
  uStack_e8 = 0;
  if ((int)(uint)*(byte *)(param_1 + 0x3b) < (int)param_1[0x3d]) {
    fVar8 = *(float *)(param_1[0x3c] + 0x3c + (ulonglong)*(byte *)(param_1 + 0x3b) * 0x48);
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x428))(param_1);
  lVar2 = param_1[0x24];
  fVar6 = fVar6 * fVar8;
  if (fVar6 <= 0.01) {
    fVar6 = 0.01;
  }
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
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
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_f0;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_f0._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_e8;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_e4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar2;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_100 = 0xbf800000;
  local_108 = 0;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_1 + 0x3f,&local_d8,fVar6);
  if (local_78 != 0) {
    plVar5 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  uStack_e8 = 0;
  local_f0 = FUN_1412a8950;
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  uVar7 = (**(code **)(*param_1 + 0x428))(param_1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_f0;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_f0._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_e8;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_e4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar2;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_100 = 0xbf800000;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_108 = 0;
  FUN_142880850(uVar4,param_1 + 0x3e,&local_d8,uVar7);
  if (local_78 != 0) {
    plVar5 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  return;
}



// FUNCTION 1412ac690 FUN_1412ac690 body=162 status=ok
// SIG undefined FUN_1412ac690(void)

void FUN_1412ac690(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x1f8)) {
    lVar1 = *(longlong *)(param_1 + 0x350);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x118);
      *(longlong *)(param_1 + 0x350) = lVar1;
      if (lVar1 == 0) goto LAB_1412ac6d7;
    }
    FUN_143083d20(lVar1,**(undefined1 **)(param_1 + 0x1f0),0,
                  *(undefined4 *)(*(undefined1 **)(param_1 + 0x1f0) + 0x28));
  }
LAB_1412ac6d7:
  if ((*(byte *)(param_1 + 0x300) & 8) != 0) {
    if (*(longlong *)(param_1 + 0x248) != 0) {
      FUN_1412a6b00(param_1,*(longlong *)(param_1 + 0x248),0);
    }
    lVar1 = FUN_14129c640(param_1);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x270) != 0)) {
      FUN_142e56530(lVar1,*(longlong *)(param_1 + 0x270),0x3f800000,0,0);
    }
  }
  return;
}



// FUNCTION 1412ac740 FUN_1412ac740 body=74 status=ok
// SIG undefined FUN_1412ac740(void)

void FUN_1412ac740(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x21a) = 1;
  cVar1 = (**(code **)(*param_1 + 0x510))();
  if (cVar1 != '\0') {
    *(undefined2 *)((longlong)param_1 + 0x219) = 1;
    (**(code **)(*param_1 + 0x260))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001412ac77d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x500))(param_1);
    return;
  }
  return;
}



// FUNCTION 1412ac7b0 FUN_1412ac7b0 body=298 status=ok
// SIG undefined FUN_1412ac7b0(void)

void FUN_1412ac7b0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  cVar1 = (**(code **)(*param_1 + 0x3f8))();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 2;
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      *(ushort *)((longlong)param_1 + 0x202) =
           (ushort)*(byte *)(param_1 + 0x40) << 4 | *(short *)((longlong)param_1 + 0x202) + 1U & 0xf
      ;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x3f);
    param_1[0x3f] = 0;
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x3e);
    param_1[0x3e] = 0;
    FUN_1412ac8e0(param_1);
    if (*(char *)((longlong)param_1 + 0x201) != '\0') {
      FUN_1412a6830(param_1);
    }
    local_res8[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x34,local_res8);
  }
  return;
}



// FUNCTION 1412ac8e0 FUN_1412ac8e0 body=361 status=ok
// SIG undefined FUN_1412ac8e0(void)

void FUN_1412ac8e0(undefined8 param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_14309ec70();
  (**(code **)(*plVar2 + 0x9a0))(plVar2,2);
  uVar3 = UMovieSceneAudioSection::GetPrivateStaticClass();
  lVar4 = (**(code **)(*plVar2 + 0x800))(plVar2,uVar3,param_1);
  if (lVar4 != 0) {
    lVar5 = UMovieSceneAudioSection::GetPrivateStaticClass();
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
      *(undefined4 *)(lVar4 + 0x26c) = 0;
      if (*(char *)(lVar4 + 0x25c) == '\0') {
        if (*(char *)(lVar4 + 0x272) != '\0') {
          *(undefined1 *)(lVar4 + 0x272) = 0;
          lVar4 = FUN_14309ec30(lVar4);
          if (lVar4 != 0) {
            lVar5 = FUN_14149b100();
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
              FUN_14127d640(lVar4,0);
            }
          }
        }
      }
      else {
        if (*(longlong *)(lVar4 + 0x288) != 0) {
          lVar5 = *(longlong *)(lVar4 + 0x120);
          if (lVar5 == 0) {
            lVar5 = FUN_1423407b0(lVar4);
          }
          if (*(longlong *)(lVar5 + 400) == 0) {
            uVar3 = *(undefined8 *)(lVar5 + 0x3f8);
          }
          else {
            uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
          }
          FUN_142880530(uVar3,lVar4 + 0x288);
          *(undefined8 *)(lVar4 + 0x288) = 0;
        }
        if (*(char *)(lVar4 + 0x270) == -1) {
          FUN_141292d50(lVar4,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1412aca50 FUN_1412aca50 body=335 status=ok
// SIG undefined FUN_1412aca50(void)

void FUN_1412aca50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x350);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x350) = lVar1;
  }
  if ((0 < *(int *)(param_1 + 0x1f8)) && (lVar1 != 0)) {
    FUN_14308fb00(lVar1,**(undefined1 **)(param_1 + 0x1f0),0);
  }
  if (*(char *)(param_1 + 0x301) == '\x01') {
    if (((lVar1 != 0) && (*(int *)(param_1 + 0x220) != 0)) && (0 < *(int *)(param_1 + 0x1f8))) {
      FUN_143083d20(lVar1,**(undefined1 **)(param_1 + 0x1f0),0);
    }
    if ((*(byte *)(param_1 + 0x300) & 8) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 600) != 0) {
      FUN_1412a6b00(param_1,*(longlong *)(param_1 + 600),0);
    }
    lVar1 = FUN_14129c640(param_1);
    if (lVar1 == 0) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x280);
  }
  else {
    if (((lVar1 != 0) && (*(int *)(param_1 + 0x21c) != 0)) && (0 < *(int *)(param_1 + 0x1f8))) {
      FUN_143083d20(lVar1,**(undefined1 **)(param_1 + 0x1f0),0);
    }
    if ((*(byte *)(param_1 + 0x300) & 8) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x250) != 0) {
      FUN_1412a6b00(param_1,*(longlong *)(param_1 + 0x250),0);
    }
    lVar1 = FUN_14129c640(param_1);
    if (lVar1 == 0) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x288);
  }
  if (lVar2 != 0) {
    FUN_142e56530(lVar1,lVar2,0x3f800000,0,0);
  }
  return;
}



// FUNCTION 1412acba0 FUN_1412acba0 body=76 status=ok
// SIG undefined FUN_1412acba0(void)

undefined8 FUN_1412acba0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x219) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x219) = 0;
    (**(code **)(*param_1 + 0x260))();
    (**(code **)(*param_1 + 0x508))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x21a) = 0;
    return 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x21a) = 0;
  return 1;
}



// FUNCTION 1412acbf0 FUN_1412acbf0 body=84 status=ok
// SIG undefined FUN_1412acbf0(void)

void FUN_1412acbf0(longlong *param_1)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 0x1f9) != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x420))();
    if (iVar1 != (int)param_1[0x3b]) {
      iVar1 = FUN_14233f450(param_1);
      if (iVar1 == 3) {
        *(int *)(param_1 + 0x3b) = (int)param_1[0x39];
                    /* WARNING: Could not recover jumptable at 0x0001412acc37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x260))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412acc50 FUN_1412acc50 body=130 status=ok
// SIG undefined FUN_1412acc50(void)

void FUN_1412acc50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_1414edcc0();
  local_30 = param_5;
  local_28 = param_6;
  local_20 = param_7;
  local_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x2b0,&local_48);
  return;
}



// FUNCTION 1412acce0 FUN_1412acce0 body=843 status=ok
// SIG undefined FUN_1412acce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412acce0(longlong param_1,undefined8 param_2)

{
  void *_Src;
  double dVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong lVar9;
  void *pvVar10;
  longlong *plVar11;
  void *pvVar12;
  float fVar13;
  LARGE_INTEGER local_res8;
  void *local_48;
  float local_40;
  void *local_38;
  float local_30;
  
  pvVar10 = (void *)0x0;
  local_res8.s.LowPart = 0;
  FUN_142357eb0();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  plVar11 = *(longlong **)(param_1 + 0x118);
  if (plVar11 == (longlong *)0x0) {
LAB_1412ace59:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1412ace59;
    plVar7 = (longlong *)(**(code **)(*plVar11 + 0x678))(plVar11);
    if ((plVar7 != (longlong *)0x0) && (cVar3 = FUN_140cfdb70(plVar11), cVar3 == '\0')) {
      lVar6 = plVar7[0x2d];
      if (lVar6 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(void **)(lVar6 + 0x220);
        local_30 = *(float *)(lVar6 + 0x228);
      }
      local_40 = local_30;
      local_48 = local_38;
      fVar13 = (float)(**(code **)(*plVar7 + 0x730))(plVar7);
      local_40 = local_40 - fVar13;
      if ((*(longlong *)(param_1 + 0x1c0) != 0) &&
         (iVar4 = FStaticMeshLODResources::GetNumVertices(), 0 < iVar4)) {
        local_res8.s.HighPart = *(LONG *)(param_1 + 0x1a4);
        local_res8.s.LowPart = *(DWORD *)(param_1 + 0x1a8);
        FUN_1424adc00(*(undefined8 *)(param_1 + 0x1c0),param_2,&local_48,&local_res8);
      }
    }
  }
  lVar6 = DAT_1468780b8;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    pvVar8 = (void *)0x1;
    if (DVar5 == DAT_1468c21c0) goto LAB_1412ace94;
  }
  else {
LAB_1412ace94:
    pvVar8 = pvVar10;
  }
  iVar4 = *(int *)(lVar6 + (longlong)pvVar8 * 4);
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    return;
  }
  if (iVar4 < 1) {
    return;
  }
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 + 16777216.0;
  if ((dVar1 - *(double *)(param_1 + 0x1d0) < (double)iVar4) &&
     (*(double *)(param_1 + 0x1d0) != 0.0)) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x120) != 0) ||
     (lVar6 = FUN_1423407b0(param_1), pvVar8 = local_38, lVar6 != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    lVar6 = *(longlong *)(lVar6 + 0x148);
    pvVar8 = local_38;
    if (lVar6 != 0) {
      lVar9 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pvVar8 = local_38;
      if (bVar2) {
        local_30 = *(float *)(lVar6 + 0x760);
        lVar9 = (longlong)(int)local_30;
        pvVar12 = (void *)0x1;
        _Src = *(void **)(lVar6 + 0x758);
        local_38 = (void *)0x0;
        pvVar8 = pvVar10;
        pvVar10 = pvVar12;
        if (local_30 != 0.0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_38,local_30,0);
          pvVar8 = local_38;
          _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar9 << 3);
          if (local_30 != 0.0) {
            bVar2 = false;
            goto LAB_1412acfdd;
          }
        }
      }
    }
  }
  bVar2 = true;
LAB_1412acfdd:
  if ((pvVar10 != (void *)0x0) && (pvVar8 != (void *)0x0)) {
    FMemory::Free(pvVar8);
  }
  if (bVar2) {
    FUN_140d04be0(plVar11);
    *(double *)(param_1 + 0x1d0) = dVar1;
    *(undefined1 *)(param_1 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1412ad030 FUN_1412ad030 body=105 status=ok
// SIG undefined FUN_1412ad030(void)

void FUN_1412ad030(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_142357eb0();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    iVar2 = (**(code **)(*param_1 + 0x448))(param_1);
    iVar2 = iVar2 - (int)param_1[0x39];
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    if ((int)param_1[0x3a] != iVar1) {
      *(int *)(param_1 + 0x3a) = iVar1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
                    /* WARNING: Could not recover jumptable at 0x0001412ad08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1412ad0a0 FUN_1412ad0a0 body=47 status=ok
// SIG undefined FUN_1412ad0a0(void)

void FUN_1412ad0a0(longlong *param_1)

{
  FUN_142357eb0();
  if (*(char *)((longlong)param_1 + 0x21a) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001412ad0c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x418))(param_1);
    return;
  }
  return;
}



// FUNCTION 1412ad0d0 FUN_1412ad0d0 body=59 status=ok
// SIG undefined FUN_1412ad0d0(void)

void FUN_1412ad0d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_1412ad440();
  cVar1 = FUN_14309f7c0(param_1);
  if (cVar1 != '\0') {
    FUN_1412ae3c0(param_1,param_2,0);
  }
  return;
}



// FUNCTION 1412ad110 FUN_1412ad110 body=427 status=ok
// SIG undefined FUN_1412ad110(void)

void FUN_1412ad110(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (((*(byte *)(param_1 + 0x77) & 1) != (*(byte *)(param_1 + 0x77) >> 1 & 1)) &&
     (*(char *)((longlong)param_1 + 0x2c4) == '\0')) {
    FUN_141295a40();
    if ((*(byte *)(param_1 + 0x77) & 2) == 0) {
      cVar1 = (**(code **)(*param_1 + 0x458))(param_1);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x358))(param_1,0);
      }
    }
  }
  FUN_1412ad440(param_1,param_2,param_3,param_4);
  cVar1 = FUN_14309f7c0(param_1);
  if (cVar1 != '\0') {
    FUN_1412aeb30(param_1,param_2,0,0);
  }
  if ((((*(byte *)(param_1 + 0x77) & 4) != 0) && (lVar3 = param_1[0x71], lVar3 != 0)) &&
     ((param_1[0x79] != 0 || (param_1[0x7b] != 0)))) {
    lVar2 = FWeakObjectPtr::Get();
    if (lVar2 != 0) {
      lVar3 = FUN_142da7d10(lVar2,lVar3,0);
      if (lVar3 != 0) {
        if (param_1[0x79] != 0) {
          lVar2 = param_1[0x79] + 0x228;
          cVar1 = FUN_142d52a00(lVar2);
          if (cVar1 == '\0') {
            fVar5 = 0.0;
          }
          else {
            uVar4 = FUN_142d52a20(lVar2);
            uVar4 = FArchive::operator<<(uVar4);
            fVar5 = (float)FUN_142d5fea0(uVar4);
          }
          if (fVar5 != *(float *)(param_1 + 0x7c)) {
            *(float *)(param_1 + 0x7c) = fVar5;
            FUN_14260f0c0(lVar3,DAT_146878000,fVar5);
          }
        }
        if (param_1[0x7b] != 0) {
          fVar5 = (float)FUN_1430774d0();
          if (fVar5 != *(float *)((longlong)param_1 + 0x3e4)) {
            *(float *)((longlong)param_1 + 0x3e4) = fVar5;
            FUN_14260f0c0(lVar3,DAT_146878018,fVar5);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412ad2c0 FUN_1412ad2c0 body=374 status=ok
// SIG undefined FUN_1412ad2c0(void)

void FUN_1412ad2c0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  
  FUN_142357eb0();
  if (*(char *)((longlong)param_1 + 0x31c) != '\0') {
    lVar2 = param_1[0x24];
    fVar3 = 0.0;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    if (*(float *)(lVar2 + 0x790) < *(float *)(param_1 + 0x40) + *(float *)(param_1 + 100)) {
      fVar3 = (*(float *)(lVar2 + 0x790) - *(float *)(param_1 + 100)) / *(float *)(param_1 + 0x40);
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
      if (param_1[0x41] == 0) {
        fVar3 = fVar3 + fVar3;
        if (1.0 < fVar3) {
          fVar3 = 1.0 - (fVar3 - 1.0);
        }
      }
      else {
        fVar3 = (float)UCurveFloat::GetFloatValue(param_1[0x41],fVar3);
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
      if ((*(byte *)(param_1 + 0x60) & 4) == 0) {
        (**(code **)(*param_1 + 0x358))(param_1,0);
      }
    }
    local_20 = 0;
    local_1c = 0xffffffff;
    local_28[0] = *(undefined1 *)param_1[0x3e];
    local_24 = *(undefined4 *)((undefined1 *)param_1[0x3e] + 0x28);
    lVar2 = param_1[0x6a];
    if (lVar2 == 0) {
      lVar2 = param_1[0x23];
      param_1[0x6a] = lVar2;
    }
    FUN_14308b4a0(lVar2,param_1[0x62],fVar3,local_28);
    lVar2 = param_1[0x67];
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x3b8) & 4) != 0)) {
      uVar1 = *(undefined8 *)(lVar2 + 0x388);
      lVar2 = FWeakObjectPtr::Get();
      if ((lVar2 != 0) && (lVar2 = FUN_142da7d10(lVar2,uVar1,0), lVar2 != 0)) {
        FUN_14260f0c0(lVar2,DAT_146878008,fVar3);
      }
    }
  }
  return;
}



// FUNCTION 1412ad440 FUN_1412ad440 body=447 status=ok
// SIG undefined FUN_1412ad440(void)

void FUN_1412ad440(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined1 local_48 [64];
  
  FUN_1430a62d0();
  if ((*(char *)(param_1 + 0x291) - 1U & 0xfd) == 0) {
    FUN_1412ae6b0(param_1);
  }
  if (((0.0 < *(float *)(param_1 + 0x31c) || *(float *)(param_1 + 0x31c) == 0.0) &&
      (*(float *)(param_1 + 0x318) <= *(float *)(param_1 + 0x300) &&
       *(float *)(param_1 + 0x300) != *(float *)(param_1 + 0x318))) &&
     (cVar4 = FUN_142d52a00(param_1 + 0x338), cVar4 != '\0')) {
    cVar4 = FUN_1407c3030(param_1 + 800);
    if (cVar4 != '\0') {
      uVar5 = FUN_142d52a20(param_1 + 0x338);
      lVar6 = FArchive::operator<<(uVar5);
      FUN_14248ba60(lVar6 + 0x1c,param_1 + 800);
    }
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    fVar8 = (*(float *)(lVar6 + 0x790) - *(float *)(param_1 + 0x31c)) / *(float *)(param_1 + 0x304);
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    *(float *)(param_1 + 0x318) = fVar8 * *(float *)(param_1 + 0x300);
    uVar5 = FUN_142d52a20(param_1 + 0x338);
    lVar6 = FArchive::operator<<(uVar5);
    fVar1 = *(float *)(lVar6 + 0x20);
    uVar5 = FUN_142d52a20(param_1 + 0x338);
    lVar6 = FArchive::operator<<(uVar5);
    fVar2 = *(float *)(lVar6 + 0x14);
    fVar3 = *(float *)(param_1 + 0x318);
    uVar5 = FUN_142d52a20(param_1 + 0x338);
    lVar6 = FArchive::operator<<(uVar5);
    puVar7 = (undefined8 *)
             FUN_14248a390(lVar6 + 0x1c,local_48,param_1 + 800,2,-((fVar1 - fVar2) * fVar3),
                           local_res8);
    uVar5 = puVar7[1];
    *(undefined8 *)(param_1 + 800) = *puVar7;
    *(undefined8 *)(param_1 + 0x328) = uVar5;
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(puVar7 + 2);
    if (fVar8 == 1.0) {
      *(undefined4 *)(param_1 + 0x31c) = 0xbf800000;
    }
  }
  return;
}



// FUNCTION 1412ad600 FUN_1412ad600 body=1863 status=ok
// SIG undefined FUN_1412ad600(void)

ulonglong FUN_1412ad600(longlong param_1,float param_2)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
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
  float local_res8 [2];
  float local_res10;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  
  local_res10 = param_2;
  uVar7 = FUN_142357eb0();
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return uVar7;
  }
  if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
    return uVar7;
  }
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))();
  if (uVar7 == 0) {
    return 0;
  }
  lVar12 = 0;
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x150), lVar13 != 0)) {
    lVar8 = FUN_1413f82e0();
    iVar3 = *(int *)(lVar8 + 0x90);
    uVar7 = (longlong)iVar3;
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < iVar3) ||
       (uVar7 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + 0x88),
       *(longlong *)(uVar7 + (longlong)iVar3 * 8) != lVar8 + 0x88)) {
      uVar7 = uVar7 & 0xffffffffffffff00;
    }
    else {
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
    }
    if ((char)uVar7 != '\0') goto LAB_1412ad6bf;
  }
  lVar13 = lVar12;
LAB_1412ad6bf:
  lVar8 = *(longlong *)(param_1 + 0x260);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x260) = lVar8;
  }
  if ((lVar13 != 0) && (lVar8 != 0)) {
    fVar23 = 1.0;
    cVar6 = FUN_14307ee20(lVar8);
    if (cVar6 == '\0') {
      fVar20 = *(float *)(param_1 + 0x194);
      fVar16 = *(float *)(param_1 + 0x1a0);
    }
    else {
      fVar20 = *(float *)(param_1 + 0x1c0);
      fVar16 = *(float *)(param_1 + 0x1cc);
    }
    if ((0.0 < fVar16) &&
       ((*(char *)(param_1 + 0x1e0) == '\0' || (*(longlong *)(lVar8 + 0x7f8) == DAT_146b479b8)))) {
      (**(code **)(*(longlong *)(lVar13 + 0xd88) + 0x140))
                ((longlong *)(lVar13 + 0xd88),0,&local_dc,&local_e0,local_res8);
      if ((*(float *)(param_1 + 0x1e4) < 1.0) &&
         (fVar17 = (local_e0 - local_dc) * *(float *)(param_1 + 0x1e4) + local_dc,
         fVar17 < local_res8[0])) {
        local_res8[0] = fVar17;
      }
      fVar20 = fVar20 + (local_res8[0] - local_dc) * fVar16;
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x188) + 0x40);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x188) + 0x38);
    if ((0.0 < *(float *)(param_1 + 500)) || (0.0 < fVar20)) {
      if ((*(float *)(param_1 + 0x1f8) <= 1e-08) ||
         (fVar23 = *(float *)(param_1 + 0x1fc) / *(float *)(param_1 + 0x1f8), fVar23 < 0.0)) {
        fVar23 = 0.0;
      }
      else if (1.0 <= fVar23) {
        fVar23 = 1.0;
      }
      fVar23 = 1.0 - fVar23;
      fVar23 = (3.0 - (fVar23 + fVar23)) * fVar23 * fVar23;
      local_d8 = fVar23;
      uVar7 = FUN_14307ee20(lVar8);
      if ((((char)uVar7 != '\0') || (uVar7 = FUN_14307ee20(lVar8), (char)uVar7 == '\0')) &&
         (1e-08 < fVar23)) {
        uVar7 = FMath::FInterpTo(*(undefined4 *)(param_1 + 500),fVar20);
        *(undefined4 *)(param_1 + 500) = extraout_XMM0_Da;
      }
      fVar16 = 0.0;
      local_e4 = 0.0;
      fVar20 = *(float *)(param_1 + 0x1fc) - param_2;
      local_dc = 1.0;
      fVar17 = 0.0;
      local_e0 = 0.0;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      *(float *)(param_1 + 0x1fc) = fVar20;
      if (0 < iVar3) {
        lVar13 = lVar12;
        do {
          if ((0 < iVar4) && (*(int *)(param_1 + 0x250) == iVar3)) {
            uVar7 = *(ulonglong *)(param_1 + 0x248);
            lVar8 = *(longlong *)(param_1 + 0x188);
            uVar9 = uVar7;
            if (uVar7 == 0) {
              uVar9 = param_1 + 0x208U;
            }
            bVar2 = *(byte *)(uVar9 + lVar13 * 8);
            iVar10 = (int)(iVar4 + -1 + (uint)bVar2) % iVar4;
            if ((iVar10 < 0) || (*(int *)(lVar8 + 0x38) <= iVar10)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            fVar23 = (float)DAT_1468b5d88;
            fVar20 = DAT_1468b5d88._4_4_;
            if (bVar5) {
              fVar23 = *(float *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar10 * 8);
              fVar20 = *(float *)(*(longlong *)(lVar8 + 0x30) + 4 + (longlong)iVar10 * 8);
            }
            fVar16 = DAT_1468b5d88._4_4_;
            fVar14 = (float)DAT_1468b5d88;
            if ((int)(uint)bVar2 < *(int *)(lVar8 + 0x38)) {
              fVar16 = *(float *)(*(longlong *)(lVar8 + 0x30) + 4 + (ulonglong)bVar2 * 8);
              fVar14 = *(float *)(*(longlong *)(lVar8 + 0x30) + (ulonglong)bVar2 * 8);
            }
            iVar10 = (int)((longlong)(ulonglong)(bVar2 + 1) % (longlong)iVar4);
            if ((iVar10 < 0) || (*(int *)(lVar8 + 0x38) <= iVar10)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            fVar18 = (float)DAT_1468b5d88;
            fVar17 = DAT_1468b5d88._4_4_;
            if (bVar5) {
              fVar18 = *(float *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar10 * 8);
              fVar17 = *(float *)(*(longlong *)(lVar8 + 0x30) + 4 + (longlong)iVar10 * 8);
            }
            iVar10 = (int)((longlong)(ulonglong)(bVar2 + 2) % (longlong)iVar4);
            if ((iVar10 < 0) || (*(int *)(lVar8 + 0x38) <= iVar10)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            fVar25 = (float)DAT_1468b5d88;
            fVar26 = DAT_1468b5d88._4_4_;
            if (bVar5) {
              fVar25 = *(float *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar10 * 8);
              fVar26 = *(float *)(*(longlong *)(lVar8 + 0x30) + 4 + (longlong)iVar10 * 8);
            }
            if (uVar7 == 0) {
              uVar7 = param_1 + 0x208U;
            }
            fVar22 = *(float *)(uVar7 + 4 + lVar13 * 8);
            fVar15 = fVar22 * fVar22;
            fVar21 = fVar15 * fVar22;
            fVar24 = fVar15 * 3.0 - (fVar21 + fVar21);
            fVar19 = ((fVar21 + fVar21) - fVar15 * 3.0) + 1.0;
            fVar22 = (fVar21 - (fVar15 + fVar15)) + fVar22;
            fVar17 = (fVar24 * fVar17 +
                     (fVar21 - fVar15) * (fVar26 - fVar16) +
                     fVar22 * (fVar17 - fVar20) + fVar19 * fVar16) * local_dc;
            fVar16 = (fVar24 * fVar18 +
                     (fVar21 - fVar15) * (fVar25 - fVar14) +
                     fVar22 * (fVar18 - fVar23) + fVar19 * fVar14) * local_dc;
            local_dc = local_dc * *(float *)(param_1 + 0x1b0);
            fVar17 = local_e0 + fVar17;
            fVar16 = local_e4 + fVar16;
            local_e4 = fVar16;
            local_e0 = fVar17;
          }
          lVar13 = lVar13 + 1;
          fVar23 = local_d8;
          param_2 = local_res10;
        } while (lVar13 < iVar3);
      }
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      *(float *)(param_1 + 0x1ec) =
           fVar16 * *(float *)(param_1 + 0x200) * *(float *)(param_1 + 0x1b4) *
           *(float *)(param_1 + 500);
      *(float *)(param_1 + 0x1e8) =
           fVar17 * *(float *)(param_1 + 0x200) * *(float *)(param_1 + 0x1b8) *
           *(float *)(param_1 + 500);
    }
    else {
      *(undefined8 *)(param_1 + 0x1e8) = DAT_1468b5da0;
      uVar7 = (ulonglong)DAT_1468b5da8;
      *(uint *)(param_1 + 0x1f0) = DAT_1468b5da8;
    }
    if (((0 < iVar4) && (*(int *)(param_1 + 0x250) == iVar3)) &&
       (fVar20 = *(float *)(param_1 + 0x1a8), 0 < iVar3)) {
      uVar9 = param_1 + 0x208;
      do {
        uVar11 = *(ulonglong *)(param_1 + 0x248);
        uVar7 = uVar11;
        if (uVar11 == 0) {
          uVar7 = uVar9;
        }
        fVar16 = fVar20 * param_2 * fVar23 + *(float *)(uVar7 + 4 + lVar12 * 8);
        *(float *)(uVar7 + 4 + lVar12 * 8) = fVar16;
        while (1.0 < fVar16) {
          uVar7 = *(ulonglong *)(param_1 + 0x248);
          if (*(ulonglong *)(param_1 + 0x248) == 0) {
            uVar7 = uVar9;
          }
          *(float *)(uVar7 + 4 + lVar12 * 8) = *(float *)(uVar7 + 4 + lVar12 * 8) - 1.0;
          *(char *)(uVar7 + lVar12 * 8) =
               (char)((longlong)(ulonglong)(*(byte *)(uVar7 + lVar12 * 8) + 1) % (longlong)iVar4);
          uVar11 = *(ulonglong *)(param_1 + 0x248);
          uVar7 = uVar11;
          if (uVar11 == 0) {
            uVar7 = uVar9;
          }
          fVar16 = *(float *)(uVar7 + 4 + lVar12 * 8);
        }
        uVar7 = -uVar11;
        uVar11 = (ulonglong)(uVar11 != 0) - 1 & uVar9 | uVar11;
        pfVar1 = (float *)(uVar11 + 4 + lVar12 * 8);
        if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
          *(undefined4 *)(uVar11 + 4 + lVar12 * 8) = 0;
        }
        fVar20 = fVar20 * *(float *)(param_1 + 0x1ac);
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar3);
    }
  }
  return uVar7;
}



// FUNCTION 1412add50 FUN_1412add50 body=1010 status=ok
// SIG undefined FUN_1412add50(void)

void FUN_1412add50(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_178;
  float fStack_174;
  float local_170;
  float local_16c;
  undefined1 local_168;
  undefined2 local_167;
  undefined1 local_165;
  undefined4 local_164;
  undefined4 local_160;
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
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  FUN_1430930e0();
  if ((*(longlong *)(param_1 + 0x358) != 0) && (0.0 < *(float *)(param_1 + 0x36c))) {
    local_170 = ((SQRT(*(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
                       *(float *)(param_1 + 400) * *(float *)(param_1 + 400) +
                       *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194)) * param_2) /
                *(float *)(param_1 + 0x36c)) * 0.5;
    if (local_170 < 0.0) {
      fVar2 = local_170 * 0.15915494 - 0.5;
    }
    else {
      fVar2 = local_170 * 0.15915494 + 0.5;
    }
    local_170 = local_170 - (float)(int)fVar2 * 6.2831855;
    if (local_170 <= 1.5707964) {
      if (-1.5707964 <= local_170) {
        local_16c = 1.0;
      }
      else {
        local_16c = -1.0;
        local_170 = -3.1415927 - local_170;
      }
    }
    else {
      local_16c = -1.0;
      local_170 = 3.1415927 - local_170;
    }
    fVar2 = local_170 * local_170;
    local_170 = (((((2.7525562e-06 - fVar2 * 2.3889859e-08) * fVar2 - 0.00019840874) * fVar2 +
                  0.008333331) * fVar2 - 0.16666667) * fVar2 + 1.0) * local_170;
    local_178 = (float)DAT_1464aa7b8 * local_170;
    fStack_174 = DAT_1464aa7b8._4_4_ * local_170;
    local_170 = DAT_1464aa7c0 * local_170;
    local_16c = (((((2.4760495e-05 - fVar2 * 2.6051615e-07) * fVar2 - 0.0013888378) * fVar2 +
                  0.041666638) * fVar2 - 0.5) * fVar2 + 1.0) * local_16c;
    FUN_142380800(*(longlong *)(param_1 + 0x358),&local_178,0,0,0);
    lVar1 = *(longlong *)(param_1 + 0x358);
    local_178 = *(float *)(lVar1 + 0x220);
    fStack_174 = *(float *)(lVar1 + 0x224);
    local_170 = *(float *)(lVar1 + 0x228);
    if (1e-08 < ABS(param_2)) {
      fVar2 = fStack_174 - *(float *)(param_1 + 0x364);
      fVar3 = local_178 - *(float *)(param_1 + 0x360);
      fVar4 = local_170 - *(float *)(param_1 + 0x368);
      if ((fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4) / (param_2 * param_2) < 100.0) {
        _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
        local_167 = 0;
        local_165 = 0;
        local_ec = 0;
        local_168 = 0;
        local_164 = local_d4;
        local_14c = local_bc;
        local_140 = local_b0;
        local_134 = local_a4;
        local_128 = local_98;
        local_11c = local_8c;
        local_110 = local_80;
        local_108 = local_78;
        local_104 = local_74;
        local_158 = local_c8;
        local_100 = local_70;
        local_148 = local_b8;
        local_fc = local_6c;
        local_13c = local_ac;
        local_f8 = local_68;
        local_130 = local_a0;
        local_f4 = local_64;
        local_f0 = local_60;
        local_124 = local_94;
        local_e8 = local_58;
        local_118 = local_88;
        local_160 = 0;
        local_e0 = local_50;
        local_10c = local_7c;
        local_15c = 0x3f800000;
        local_154 = local_c4;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x200,&local_168);
      }
      *(ulonglong *)(param_1 + 0x360) = CONCAT44(fStack_174,local_178);
      *(float *)(param_1 + 0x368) = local_170;
    }
  }
  return;
}



// FUNCTION 1412ae150 FUN_1412ae150 body=148 status=ok
// SIG undefined FUN_1412ae150(void)

void FUN_1412ae150(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x7f8) != DAT_146b47938) {
    if ((*(char *)(*(longlong *)(param_1 + 0x968) + 0x140) != '\0') && (param_2 == '\x01')) {
      *(byte *)(param_1 + 0x9b8) = *(byte *)(param_1 + 0x9b8) | 1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x990,0)
      ;
      FUN_143083d20(param_1,0x13,0);
      cVar1 = FUN_14307edb0(param_1,1);
      if (cVar1 == '\0') {
        return;
      }
    }
    FUN_143093d30(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1412ae1f0 FUN_1412ae1f0 body=454 status=ok
// SIG undefined FUN_1412ae1f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412ae1f0(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar3 = (longlong *)FUN_14309ed90();
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  uVar4 = APlayArea::GetPrivateStaticClass();
  lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
  if (lVar5 == 0) {
    return;
  }
  uVar8 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1430786d0(plVar3,param_1 + 0x308,local_108);
  if ((int)local_40 < 1) goto LAB_1412ae36a;
  uVar4 = FUN_14129d880(param_1);
  uVar2 = (**(code **)(*plVar3 + 0x858))(plVar3);
  uVar6 = FUN_14309b5c0(plVar3,uVar2);
  if (uVar6 == 0) {
LAB_1412ae2f8:
    uVar6 = uVar8;
  }
  else {
    lVar7 = FUN_1414193b0();
    if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412ae2f8;
  }
  puVar9 = local_108;
  if (local_48 != (undefined8 *)0x0) {
    puVar9 = local_48;
  }
  uVar10 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (puVar9 + (int)local_40 < puVar9) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    do {
      local_118 = uVar6;
      FUN_141291b70(param_1,*puVar9,lVar5,uVar4);
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 != uVar10);
  }
LAB_1412ae36a:
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412ae3c0 FUN_1412ae3c0 body=743 status=ok
// SIG undefined FUN_1412ae3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412ae3c0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 auStack_218 [32];
  char *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  byte local_1d8;
  char local_1d7 [7];
  ulonglong local_1d0;
  undefined1 local_1c8 [4];
  undefined4 local_1c4;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined **local_158;
  undefined1 *local_150;
  undefined ***local_120;
  undefined8 local_118 [24];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1f8 = local_1d7;
  cVar2 = FUN_141294b90(param_1,param_2,&local_1d8,&local_1d0);
  iVar1 = (int)local_1d0;
  if ((cVar2 != '\0') &&
     (((param_3 != '\0' || (local_1d8 != (*(byte *)(param_1 + 0x350) & 1))) ||
      ((int)local_1d0 != *(int *)(param_1 + 0x354))))) {
    local_1c8[0] = *(undefined1 *)(param_1 + 0x308);
    local_1c4 = *(undefined4 *)(param_1 + 0x30c);
    local_1bc = *(undefined4 *)(param_1 + 0x314);
    uVar6 = 0;
    local_1c0 = 1;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    uVar3 = FUN_14309ed90(param_1);
    FUN_1430786d0(uVar3,local_1c8,local_118);
    puVar5 = local_118;
    if (local_58 != (undefined8 *)0x0) {
      puVar5 = local_58;
    }
    local_1d0 = (longlong)(int)local_50 & 0x1fffffffffffffff;
    if (puVar5 + (int)local_50 < puVar5) {
      local_1d0 = uVar6;
    }
    if (local_1d0 != 0) {
      do {
        uVar3 = *puVar5;
        if ((param_3 != '\0') || ((*(byte *)(param_1 + 0x350) & 1) != local_1d8)) {
          if (local_1d8 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0x3f800000;
          }
          FUN_14260f0c0(uVar3,DAT_146878068,uVar7);
        }
        if (*(int *)(param_1 + 0x354) != iVar1) {
          uVar4 = DAT_146878088;
          if (iVar1 == 2) {
            uVar4 = DAT_146878080;
          }
          local_1a0 = DAT_1464aa7b0;
          local_1e0 = &local_188;
          local_1e8 = &local_178;
          local_1f0 = &local_1b8;
          local_1f8 = (char *)&local_1a8;
          local_188 = _DAT_1464aa6c0;
          uStack_180 = _DAT_1464aa6c8;
          local_178 = _DAT_1464aa6c0;
          uStack_170 = _DAT_1464aa6c8;
          local_1b0 = DAT_1468b5d98;
          local_190 = DAT_1468b5d98;
          local_1b8 = _DAT_1468b5d90;
          local_1a8 = DAT_1464aa7a8;
          local_198 = _DAT_1468b5d90;
          FUN_142604400(uVar3,uVar4,0,&local_198);
        }
        if ((param_3 != '\0') || (*(int *)(param_1 + 0x354) != iVar1)) {
          if ((local_1d7[0] == '\0') && (iVar1 == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          FUN_14129c6c0(param_1,local_168,uVar4);
          local_158 = &PTR_LAB_14475bbf8;
          local_150 = local_168;
          local_120 = &local_158;
          FUN_141297010(uVar3,&local_158);
        }
        puVar5 = puVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != local_1d0);
    }
    *(byte *)(param_1 + 0x350) = *(byte *)(param_1 + 0x350) & 0xfe;
    *(byte *)(param_1 + 0x350) = *(byte *)(param_1 + 0x350) | local_1d8 & 1;
    *(int *)(param_1 + 0x354) = iVar1;
    if (local_58 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1412ae6b0 FUN_1412ae6b0 body=133 status=ok
// SIG undefined FUN_1412ae6b0(void)

void FUN_1412ae6b0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  if (((*(byte *)(param_1 + 0x2ec) & 1) != 0) && (lVar1 = FUN_14309ed90(), lVar1 != 0)) {
    if ((*(byte *)(param_1 + 0x2ec) & 4) == 0) {
      uVar2 = FUN_14309ee20(param_1);
    }
    else {
      uVar2 = FUN_14307dab0(lVar1);
    }
    local_18[0] = *(undefined1 *)(param_1 + 0x308);
    local_14 = *(undefined4 *)(param_1 + 0x30c);
    local_c = *(undefined4 *)(param_1 + 0x314);
    local_10 = 1;
    FUN_14308b4a0(lVar1,DAT_146878048,uVar2,local_18);
  }
  return;
}



// FUNCTION 1412ae740 FUN_1412ae740 body=730 status=ok
// SIG undefined FUN_1412ae740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412ae740(longlong param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [80];
  
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    fVar16 = *(float *)(param_1 + 0x37c);
    fVar17 = *(float *)(param_1 + 0x380);
    plVar4 = (longlong *)FUN_1412996f0();
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x668))(plVar4);
      if (lVar5 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(longlong *)(lVar5 + 0x1430) != 0)) {
          fVar8 = (float)FUN_140e4caf0();
          fVar9 = _guard_xfg_dispatch_icall_nop(fVar8 * 0.008726646);
          fVar10 = (float)FUN_14309f000(param_1,*(undefined1 *)(param_1 + 0x292));
          fVar8 = _guard_xfg_dispatch_icall_nop(fVar10 * fVar8 * 0.008726646);
          fVar16 = fVar16 * (fVar9 / fVar8);
        }
      }
    }
    local_68 = *(undefined8 *)(param_1 + 0x370);
    fVar8 = (float)local_68;
    local_60 = *(float *)(param_1 + 0x378);
    if ((fVar8 < DAT_1462a29e4) && (0.0 < fVar8)) {
      fVar17 = fVar17 * (DAT_1462a29e4 / fVar8);
      fVar16 = fVar16 * (DAT_1462a29e4 / fVar8);
      local_68 = CONCAT44((int)((ulonglong)local_68 >> 0x20),DAT_1462a29e4);
    }
    lVar5 = *(longlong *)(param_1 + 0x3c0);
    pfVar1 = (float *)(lVar5 + 0x280);
    if (((*(float *)(lVar5 + 0x1f8) == *pfVar1) &&
        (*(float *)(lVar5 + 0x1fc) == *(float *)(lVar5 + 0x284))) &&
       (*(float *)(lVar5 + 0x200) == *(float *)(lVar5 + 0x288))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_78 = *(undefined8 *)*(undefined1 (*) [12])(lVar5 + 0x1f8);
      auVar11._12_4_ = 0;
      auVar11._0_12_ = *(undefined1 (*) [12])(lVar5 + 0x1f8);
      fVar8 = (float)DAT_146877b40;
      fVar9 = DAT_146877b40._4_4_;
      fVar10 = DAT_146877b40._8_4_;
      auVar11 = divps(auVar11,_DAT_146877b40);
      fVar13 = (float)local_78 - (float)(int)auVar11._0_4_ * fVar8;
      fVar14 = (float)((ulonglong)local_78 >> 0x20) - (float)(int)auVar11._4_4_ * fVar9;
      fVar15 = *(float *)(lVar5 + 0x200) - (float)(int)auVar11._8_4_ * fVar10;
      fVar13 = (float)(((uint)(fVar13 + fVar8) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar8));
      fVar14 = (float)(((uint)(fVar14 + fVar9) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                      (uint)(fVar14 + fVar9));
      fVar15 = (float)(((uint)(fVar15 + fVar10) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                      (uint)(fVar15 + fVar10));
      uVar12 = ((uint)(fVar15 - fVar10) ^ (uint)fVar15) & -(uint)(fRam0000000146877b38 < fVar15) ^
               (uint)fVar15;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar12);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar14 - fVar9) ^ (uint)fVar14) & -(uint)(fRam0000000146877b34 < fVar14)
                    ^ (uint)fVar14,
                    ((uint)(fVar13 - fVar8) ^ (uint)fVar13) & -(uint)(_DAT_146877b30 < fVar13) ^
                    (uint)fVar13);
      *(uint *)(lVar5 + 0x288) = uVar12;
      puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_58);
      uVar2 = puVar7[1];
      *(undefined8 *)(lVar5 + 0x270) = *puVar7;
      *(undefined8 *)(lVar5 + 0x278) = uVar2;
    }
    local_78 = *(undefined8 *)(lVar5 + 0x270);
    uStack_70 = *(undefined8 *)(lVar5 + 0x278);
    FUN_142397be0(lVar5,&local_68,&local_78,0,0,1);
    uStack_70 = CONCAT44(uStack_70._4_4_,fVar16);
    local_68 = CONCAT44(fVar16,fVar17);
    local_60 = fVar16;
    (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x3f8))
              (*(longlong **)(param_1 + 0x3c0),&local_68);
  }
  return;
}



// FUNCTION 1412aea20 FUN_1412aea20 body=271 status=ok
// SIG undefined FUN_1412aea20(void)

void FUN_1412aea20(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res18 [2];
  undefined8 local_38;
  float local_30;
  float local_28 [2];
  float local_20;
  
  if ((*(float *)(param_1 + 0x2f8) != 0.0) || (*(float *)(param_1 + 0x2fc) != 0.0)) {
    lVar2 = FUN_14309ed90();
    cVar1 = FUN_14307eb30(lVar2);
    if ((cVar1 != '\0') &&
       (plVar3 = (longlong *)FUN_14307cf20(lVar2,*(undefined1 *)(lVar2 + 0x690)),
       plVar3 != (longlong *)0x0)) {
      local_38 = 0;
      local_30 = 0.0;
      if (((param_2 != '\0') && (lVar2 = FUN_143077270(lVar2,0,1), lVar2 != 0)) &&
         ((**(code **)(*plVar3 + 0x458))(plVar3,local_res18), local_res18[0] != 0)) {
        FUN_14307ca20(lVar2,local_28,*(undefined8 *)(param_1 + 0x1b8));
        local_30 = local_20 * *(float *)(param_1 + 0x2f8);
        local_38 = CONCAT44(local_38._4_4_,local_28[0] * *(float *)(param_1 + 0x2fc));
      }
      (**(code **)(*plVar3 + 0x450))(plVar3,&local_38);
    }
  }
  return;
}



// FUNCTION 1412aeb30 FUN_1412aeb30 body=1086 status=ok
// SIG undefined FUN_1412aeb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412aeb30(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_218 [32];
  char *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  char local_1d8;
  byte local_1d7;
  char local_1d6;
  undefined8 *local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  undefined1 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  undefined1 *local_150;
  undefined ***local_120;
  undefined8 local_118 [24];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1f8 = &local_1d8;
  local_1d6 = param_4;
  cVar4 = FUN_141294b90(param_1,param_2,&local_1d7,&local_1d0);
  iVar2 = (int)local_1d0;
  if (cVar4 == '\0') {
    return;
  }
  if (((param_3 == '\0') && (local_1d7 == (*(byte *)(param_1 + 0x350) & 1))) &&
     ((int)local_1d0 == *(int *)(param_1 + 0x354))) {
    return;
  }
  local_1b8[0] = *(undefined1 *)(param_1 + 0x308);
  local_1b4 = *(undefined4 *)(param_1 + 0x30c);
  puVar11 = (undefined8 *)0x0;
  local_1ac = *(undefined4 *)(param_1 + 0x314);
  local_1b0 = 1;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  uVar5 = FUN_14309ed90(param_1);
  FUN_1430786d0(uVar5,local_1b8,local_118);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar6 != 0) {
    if (param_4 == '\0') {
      lVar10 = *(longlong *)(param_1 + 0x388);
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x390);
    }
    if (lVar10 != 0) {
      local_1d0 = (undefined8 *)0x0;
      lVar6 = FUN_142da7d10(lVar6,lVar10,0);
      uVar3 = local_50;
      if (lVar6 != 0) {
        lVar10 = (longlong)(int)local_50;
        iVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (local_50._4_4_ < iVar7) {
          FUN_14127c7c0(local_118,uVar3 & 0xffffffff);
        }
        puVar8 = local_118;
        if (local_58 != (undefined8 *)0x0) {
          puVar8 = local_58;
        }
        puVar8[lVar10] = lVar6;
      }
    }
  }
  uVar13 = 0x3f800000;
  puVar8 = local_118;
  if (local_58 != (undefined8 *)0x0) {
    puVar8 = local_58;
  }
  local_1d0 = (undefined8 *)((longlong)(int)local_50 & 0x1fffffffffffffff);
  if (puVar8 + (int)local_50 < puVar8) {
    local_1d0 = puVar11;
  }
  if (local_1d0 != (undefined8 *)0x0) {
    do {
      uVar5 = *puVar8;
      if ((param_3 != '\0') || ((*(byte *)(param_1 + 0x350) & 1) != local_1d7)) {
        if (local_1d7 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0x3f800000;
        }
        FUN_14260f0c0(uVar5,DAT_146878068,uVar12);
      }
      if (*(int *)(param_1 + 0x354) != iVar2) {
        uVar9 = DAT_146878088;
        if (iVar2 == 2) {
          uVar9 = DAT_146878080;
        }
        local_190 = DAT_1464aa7b0;
        local_1e0 = &local_178;
        local_1e8 = &local_168;
        local_1f0 = &local_1a8;
        local_1f8 = (char *)&local_198;
        local_178 = _DAT_1464aa6c0;
        uStack_170 = _DAT_1464aa6c8;
        local_168 = _DAT_1464aa6c0;
        uStack_160 = _DAT_1464aa6c8;
        local_1a0 = DAT_1468b5d98;
        local_180 = DAT_1468b5d98;
        local_1a8 = _DAT_1468b5d90;
        local_198 = DAT_1464aa7a8;
        local_188 = _DAT_1468b5d90;
        FUN_142604400(uVar5,uVar9,0,&local_188);
      }
      if ((param_3 != '\0') || (*(int *)(param_1 + 0x354) != iVar2)) {
        if ((local_1d8 == '\0') && (iVar2 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        FUN_14129c6c0(param_1,local_1c8,uVar9);
        local_158 = &PTR_LAB_14475bc88;
        local_150 = local_1c8;
        local_120 = &local_158;
        FUN_141297010(uVar5,&local_158);
      }
      puVar8 = puVar8 + 1;
      puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    } while (puVar11 != local_1d0);
  }
  if (((local_1d6 != '\0') || (plVar1 = *(longlong **)(param_1 + 0x3c0), plVar1 == (longlong *)0x0))
     || (iVar7 = (**(code **)(*plVar1 + 0x6c8))(plVar1), iVar7 < 2)) goto LAB_1412aef10;
  local_1d0 = (undefined8 *)0x0;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x5a8))
                    (*(longlong **)(param_1 + 0x3c0),1,0,0);
  if (lVar6 == 0) goto LAB_1412aef10;
  if ((param_3 == '\0') && ((*(byte *)(param_1 + 0x350) & 1) == local_1d7)) {
LAB_1412aeec2:
    if (*(int *)(param_1 + 0x354) == iVar2) goto LAB_1412aef10;
  }
  else {
    if (local_1d7 == 0) {
      uVar13 = 0;
    }
    FUN_1425a2750(lVar6,DAT_146878068,uVar13);
    if (param_3 == '\0') goto LAB_1412aeec2;
  }
  if ((local_1d8 == '\0') && (iVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  FUN_14129c6c0(param_1,local_1c8,uVar5);
  FUN_1425a2be0(lVar6,DAT_146878070,local_1c8);
LAB_1412aef10:
  *(byte *)(param_1 + 0x350) = *(byte *)(param_1 + 0x350) & 0xfe;
  *(byte *)(param_1 + 0x350) = *(byte *)(param_1 + 0x350) | local_1d7 & 1;
  *(int *)(param_1 + 0x354) = iVar2;
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412aef70 FUN_1412aef70 body=741 status=ok
// SIG undefined FUN_1412aef70(void)

void FUN_1412aef70(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_res8;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  longlong *local_60;
  undefined ***local_40;
  
  if ((*(byte *)(param_1 + 0x3b8) & 4) == 0) {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar4 == 0) {
    return;
  }
  local_res8 = 0;
  lVar4 = FUN_142da7d10(lVar4,param_2,0);
  if (lVar4 == 0) {
    return;
  }
  plVar5 = (longlong *)FUN_14309ed90(param_1);
  plVar6 = (longlong *)FUN_1412996f0(param_1);
  if ((plVar6 != (longlong *)0x0) &&
     (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x668))(plVar6), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar6 + 0x1058))(plVar6,&local_res8);
      local_80 = 0;
      local_88 = CONCAT44((local_res8._4_4_ - 0.5) * -9.0,((float)local_res8 - 0.5) * 16.0);
      FUN_142610200(lVar4,DAT_146877ff0,&local_88);
    }
  }
  if (((*(byte *)(param_1 + 0x39c) & 1) != 0) &&
     (plVar6 = (longlong *)(**(code **)(plVar5[0x8c] + 0x10))(plVar5 + 0x8c,(char)plVar5[0xd2]),
     plVar6 != (longlong *)0x0)) {
    iVar3 = (**(code **)(*plVar6 + 0x418))(plVar6);
    if (iVar3 < 1) {
      (**(code **)(*plVar6 + 0x438))(plVar6);
    }
    else {
      (**(code **)(*plVar6 + 0x420))();
    }
    FUN_14260f0c0(lVar4,DAT_146877ff8);
  }
  if (((*(byte *)(param_1 + 0x39c) & 8) != 0) && (*(longlong *)(param_1 + 0x3d0) != 0)) {
    FUN_14260f0c0(lVar4,DAT_146878010);
  }
  plVar6 = (longlong *)FUN_14309ed90(param_1);
  uVar8 = APlayArea::GetPrivateStaticClass();
  local_res20 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar8);
  local_90 = FUN_14129d880(param_1);
  uVar2 = (**(code **)(*plVar5 + 0x858))(plVar5);
  local_res18 = FUN_14309b5c0(plVar5,uVar2);
  if (local_res18 != 0) {
    lVar7 = FUN_1414193b0();
    if ((*(int *)(*(longlong *)(local_res18 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res18 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1412af1df;
  }
  local_res18 = 0;
LAB_1412af1df:
  FUN_14260f0c0(lVar4,DAT_146878060);
  local_70 = &local_res20;
  puStack_68 = &local_90;
  local_60 = &local_res18;
  local_78 = &PTR_LAB_14475bc58;
  local_40 = &local_78;
  FUN_141297010(lVar4,&local_78);
  return;
}



// FUNCTION 1412af260 FUN_1412af260 body=168 status=ok
// SIG undefined FUN_1412af260(void)

void FUN_1412af260(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((((*(int *)(param_1 + 0x2f0) != 0) &&
       (plVar3 = (longlong *)FUN_1412996f0(), plVar3 != (longlong *)0x0)) &&
      (cVar2 = (**(code **)(*plVar3 + 0x778))(plVar3), cVar2 != '\0')) &&
     (lVar4 = (**(code **)(*plVar3 + 0x668))(plVar3), lVar4 != 0)) {
    lVar5 = FUN_14145f370();
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
      FUN_140cf5c80(lVar4,*(undefined4 *)(param_1 + 0x2f0),param_2);
    }
  }
  return;
}



// FUNCTION 1412af310 FUN_1412af310 body=93 status=ok
// SIG undefined FUN_1412af310(void)

void FUN_1412af310(longlong param_1)

{
  longlong lVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar1 + 0x218);
    return;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}



// FUNCTION 1412af370 FUN_1412af370 body=93 status=ok
// SIG undefined FUN_1412af370(void)

void FUN_1412af370(longlong param_1)

{
  longlong lVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar1 + 0x21c);
    return;
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}



// FUNCTION 1412af470 FUN_1412af470 body=132 status=ok
// SIG undefined FUN_1412af470(void)

void FUN_1412af470(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = *param_2;
  if (**(longlong **)(param_1 + 8) != 0) {
    FUN_141291890(**(longlong **)(param_1 + 8),uVar1);
  }
  lVar2 = **(longlong **)(param_1 + 0x10);
  if (lVar2 != 0) {
    local_18 = *(undefined4 *)(lVar2 + 8);
    uStack_14 = *(undefined4 *)(lVar2 + 0xc);
    uStack_10 = *(undefined4 *)(lVar2 + 0x10);
    uStack_c = *(undefined4 *)(lVar2 + 0x14);
    FUN_1425a2be0(uVar1,DAT_146878050,&local_18);
  }
  lVar2 = **(longlong **)(param_1 + 0x18);
  if (lVar2 != 0) {
    local_18 = *(undefined4 *)(lVar2 + 0x90);
    uStack_14 = *(undefined4 *)(lVar2 + 0x94);
    uStack_10 = *(undefined4 *)(lVar2 + 0x98);
    uStack_c = *(undefined4 *)(lVar2 + 0x9c);
    FUN_1425a2be0(uVar1,DAT_146878058,&local_18);
  }
  return;
}



// FUNCTION 1412af500 FUN_1412af500 body=44 status=ok
// SIG undefined FUN_1412af500(void)

void FUN_1412af500(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  uStack_c = puVar1[3];
  FUN_1425a2be0(*param_2,DAT_146878070,&local_18);
  return;
}



// FUNCTION 1412af530 FUN_1412af530 body=42 status=ok
// SIG undefined FUN_1412af530(void)

void FUN_1412af530(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = DAT_1464aa6c0;
  uStack_14 = DAT_1464aa6c4;
  uStack_10 = DAT_1464aa6c8;
  uStack_c = DAT_1464aa6cc;
  FUN_1425a2be0(*param_2,DAT_146878070,&local_18);
  return;
}



// FUNCTION 1412af5d0 FUN_1412af5d0 body=218 status=ok
// SIG undefined FUN_1412af5d0(void)

undefined8 FUN_1412af5d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x270 + lVar2;
  if (lVar2 != lVar3) {
    piVar4 = (int *)(lVar2 + 0x30);
    do {
      if (((piVar4[-2] != 0 || piVar4[-1] != 0) || piVar4[1] != 0) || *piVar4 != 0) {
        if ((((*(int *)(param_2 + 0x28) != 0 || *(int *)(param_2 + 0x2c) != 0) ||
             *(int *)(param_2 + 0x30) != 0) || *(int *)(param_2 + 0x34) != 0) &&
           (((piVar4[-2] == *(int *)(param_2 + 0x28) && piVar4[-1] == *(int *)(param_2 + 0x2c)) &&
            piVar4[1] == *(int *)(param_2 + 0x34)) && *piVar4 == *(int *)(param_2 + 0x30))) {
          return 1;
        }
      }
      cVar1 = FWeakObjectPtr::IsValid(lVar2);
      if ((cVar1 != '\0') &&
         (cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar2,param_2),
         cVar1 != '\0')) {
        return 1;
      }
      lVar2 = lVar2 + 0x270;
      piVar4 = piVar4 + 0x9c;
    } while (lVar2 != lVar3);
  }
  return 0;
}



// FUNCTION 1412af6b0 FUN_1412af6b0 body=186 status=ok
// SIG undefined FUN_1412af6b0(void)

longlong FUN_1412af6b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x270 + lVar3;
  do {
    if (lVar3 == lVar4) {
      return 0;
    }
    lVar6 = *param_2;
    if (*(longlong *)(lVar3 + 0x260) != 0) {
      lVar1 = FUN_142dfdfe0();
      lVar5 = *(longlong *)(lVar3 + 0x260);
      for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar1) goto LAB_1412af717;
      }
    }
    lVar5 = 0;
LAB_1412af717:
    if (lVar6 != 0) {
      lVar1 = FUN_142dfdfe0();
      lVar2 = lVar6;
      do {
        if (lVar2 == lVar1) goto LAB_1412af737;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
    lVar6 = 0;
LAB_1412af737:
    if (lVar5 == lVar6) {
      return lVar3;
    }
    lVar3 = lVar3 + 0x270;
  } while( true );
}



// FUNCTION 1412af770 FUN_1412af770 body=315 status=ok
// SIG undefined FUN_1412af770(void)

longlong FUN_1412af770(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar4 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x270 + lVar4;
  if (lVar4 != lVar3) {
    piVar5 = (int *)(lVar4 + 0x30);
    do {
      lVar1 = *param_2;
      if (lVar1 != 0) {
        if (((piVar5[-2] != 0 || piVar5[-1] != 0) || piVar5[1] != 0) || *piVar5 != 0) {
          if ((((*(int *)(lVar1 + 0x208) != 0 || *(int *)(lVar1 + 0x20c) != 0) ||
               *(int *)(lVar1 + 0x210) != 0) || *(int *)(lVar1 + 0x214) != 0) &&
             (((piVar5[-2] == *(int *)(lVar1 + 0x208) && piVar5[-1] == *(int *)(lVar1 + 0x20c)) &&
              piVar5[1] == *(int *)(lVar1 + 0x214)) && *piVar5 == *(int *)(lVar1 + 0x210))) {
            return lVar4;
          }
        }
        cVar2 = FUN_140bf9690(0,lVar4);
        if ((cVar2 != '\0') &&
           (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar4,lVar1 + 0x200),
           cVar2 != '\0')) {
          return lVar4;
        }
        if ((((*(char *)(lVar1 + 0x1f8) != '\0') && (*(float *)(lVar1 + 0x1ec) == (float)piVar5[2]))
            && (*(float *)(lVar1 + 0x1f0) == (float)piVar5[3])) &&
           (*(float *)(lVar1 + 500) == (float)piVar5[4])) {
          return lVar4;
        }
      }
      lVar4 = lVar4 + 0x270;
      piVar5 = piVar5 + 0x9c;
    } while (lVar4 != lVar3);
  }
  return 0;
}



// FUNCTION 1412af8b0 FUN_1412af8b0 body=463 status=ok
// SIG undefined FUN_1412af8b0(void)

longlong FUN_1412af8b0(longlong *param_1,longlong *param_2)

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
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  lVar10 = *param_1;
  bVar11 = false;
  lVar12 = (longlong)(int)param_1[1] * 0x270 + lVar10;
  do {
    if (lVar10 == lVar12) {
      plVar4 = (longlong *)param_2[1];
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
    lVar7 = FWeakObjectPtr::Get(lVar10 + 0x18);
    if (lVar7 == 0) {
LAB_1412af947:
      lVar7 = 0;
    }
    else {
      lVar8 = AUIWSRiver::StaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_1412af947;
    }
    if (lVar7 == 0) {
LAB_1412af978:
      bVar5 = false;
    }
    else {
      lVar8 = *param_2;
      bVar11 = true;
      uVar9 = FUN_1412bfc20(lVar7,local_58);
      cVar6 = FUniqueNetIdWrapper::operator==(uVar9,lVar8 + 8);
      if (cVar6 == '\0') goto LAB_1412af978;
      bVar5 = true;
    }
    if (bVar11) {
      bVar11 = false;
      local_58[0] = &PTR_FUN_143f740c8;
      if (local_40 != 0) {
        FMemory::Free();
      }
      plVar4 = local_48;
      local_58[0] = &PTR_FUN_143f73d18;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_48)(local_48);
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
    if (bVar5) {
      plVar4 = (longlong *)param_2[1];
      if (plVar4 == (longlong *)0x0) {
        return lVar10;
      }
      LOCK();
      plVar1 = plVar4 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 != 1) {
        return lVar10;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return lVar10;
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return lVar10;
    }
    lVar10 = lVar10 + 0x270;
  } while( true );
}



// FUNCTION 1412afa80 FUN_1412afa80 body=137 status=ok
// SIG undefined FUN_1412afa80(void)

longlong FUN_1412afa80(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x50 + lVar1;
  if (lVar1 != lVar3) {
    piVar2 = (int *)(lVar1 + 0x18);
    do {
      if (((piVar2[-2] == *(int *)(param_2 + 2) && piVar2[-1] == *(int *)((longlong)param_2 + 0x14))
          && piVar2[1] == *(int *)((longlong)param_2 + 0x1c)) && *piVar2 == *(int *)(param_2 + 3))
      goto LAB_1412afaef;
      lVar1 = lVar1 + 0x50;
      piVar2 = piVar2 + 0x14;
    } while (lVar1 != lVar3);
  }
  lVar1 = 0;
LAB_1412afaef:
  *param_2 = &PTR_FUN_1441d26b8;
  return lVar1;
}



// FUNCTION 1412afb10 FUN_1412afb10 body=394 status=ok
// SIG undefined FUN_1412afb10(void)

longlong FUN_1412afb10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = *param_1;
  lVar10 = (longlong)(int)param_1[1] * 0x270 + lVar1;
  if (lVar1 != lVar10) {
    piVar7 = (int *)(lVar1 + 0x30);
    lVar9 = lVar1;
    do {
      lVar2 = *param_2;
      if (lVar2 != 0) {
        if (*(longlong *)(piVar7 + 0x8c) != 0) {
          lVar4 = FUN_142dfdfe0();
          lVar8 = *(longlong *)(piVar7 + 0x8c);
          for (lVar6 = lVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar4) goto LAB_1412afb90;
          }
        }
        lVar8 = 0;
LAB_1412afb90:
        if (*(longlong *)(lVar2 + 0x758) != 0) {
          lVar5 = FUN_142dfdfe0();
          lVar6 = *(longlong *)(lVar2 + 0x758);
          for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) goto LAB_1412afbc0;
          }
        }
        lVar6 = 0;
LAB_1412afbc0:
        if (lVar8 == lVar6) {
          if (((piVar7[-2] != 0 || piVar7[-1] != 0) || piVar7[1] != 0) || *piVar7 != 0) {
            if ((((*(int *)(lVar2 + 0x76c) != 0 || *(int *)(lVar2 + 0x770) != 0) ||
                 *(int *)(lVar2 + 0x774) != 0) || *(int *)(lVar2 + 0x778) != 0) &&
               (((piVar7[-2] == *(int *)(lVar2 + 0x76c) && piVar7[-1] == *(int *)(lVar2 + 0x770)) &&
                piVar7[1] == *(int *)(lVar2 + 0x778)) && *piVar7 == *(int *)(lVar2 + 0x774)))
            goto LAB_1412afc7a;
          }
          cVar3 = FUN_140bf9690(0);
          if ((cVar3 != '\0') &&
             ((*(longlong *)(lVar2 + 0x118) != 0 && (cVar3 = FUN_14058c1e0(lVar9), cVar3 != '\0'))))
          {
LAB_1412afc7a:
            return (lVar9 - lVar1) / 0x270;
          }
        }
      }
      lVar9 = lVar9 + 0x270;
      piVar7 = piVar7 + 0x9c;
    } while (lVar9 != lVar10);
  }
  return 0xffffffff;
}



// FUNCTION 1412afca0 FUN_1412afca0 body=222 status=ok
// SIG undefined FUN_1412afca0(void)

longlong FUN_1412afca0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x270 + lVar1;
  if (lVar1 != lVar3) {
    piVar2 = (int *)(lVar1 + 0x30);
    lVar4 = lVar1;
    do {
      if (((piVar2[-2] != 0 || piVar2[-1] != 0) || piVar2[1] != 0) || *piVar2 != 0) {
        if ((((*(int *)(param_2 + 0x10) != 0 || *(int *)(param_2 + 0x14) != 0) ||
             *(int *)(param_2 + 0x18) != 0) || *(int *)(param_2 + 0x1c) != 0) &&
           (((piVar2[-2] == *(int *)(param_2 + 0x10) && piVar2[-1] == *(int *)(param_2 + 0x14)) &&
            piVar2[1] == *(int *)(param_2 + 0x1c)) && *piVar2 == *(int *)(param_2 + 0x18))) {
          return (lVar4 - lVar1) / 0x270;
        }
      }
      lVar4 = lVar4 + 0x270;
      piVar2 = piVar2 + 0x9c;
    } while (lVar4 != lVar3);
  }
  return 0xffffffff;
}



// FUNCTION 1412afd80 FUN_1412afd80 body=257 status=ok
// SIG undefined FUN_1412afd80(void)

longlong FUN_1412afd80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar1 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x270 + lVar1;
  if (lVar1 != lVar4) {
    piVar5 = (int *)(lVar1 + 0x30);
    lVar3 = lVar1;
    do {
      if (((piVar5[-2] != 0 || piVar5[-1] != 0) || piVar5[1] != 0) || *piVar5 != 0) {
        if ((((*(int *)(param_2 + 0x28) != 0 || *(int *)(param_2 + 0x2c) != 0) ||
             *(int *)(param_2 + 0x30) != 0) || *(int *)(param_2 + 0x34) != 0) &&
           (((piVar5[-2] == *(int *)(param_2 + 0x28) && piVar5[-1] == *(int *)(param_2 + 0x2c)) &&
            piVar5[1] == *(int *)(param_2 + 0x34)) && *piVar5 == *(int *)(param_2 + 0x30)))
        goto LAB_1412afe61;
      }
      cVar2 = FWeakObjectPtr::IsValid(lVar3);
      if ((cVar2 != '\0') &&
         (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3,param_2),
         cVar2 != '\0')) {
LAB_1412afe61:
        return (lVar3 - lVar1) / 0x270;
      }
      lVar3 = lVar3 + 0x270;
      piVar5 = piVar5 + 0x9c;
    } while (lVar3 != lVar4);
  }
  return 0xffffffff;
}



// FUNCTION 1412afe90 FUN_1412afe90 body=69 status=ok
// SIG undefined FUN_1412afe90(void)

ulonglong FUN_1412afe90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1414f4830();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1412afee0 NewObject<USaveGame> body=149 status=ok
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



// FUNCTION 1412aff80 FUN_1412aff80 body=351 status=ok
// SIG undefined FUN_1412aff80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412aff80(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_res8 [4];
  
  FUN_14221fbd0();
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *param_1 = &PTR_FUN_14476bca8;
  param_1[0x95] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  uVar1 = uRam000000014687834c;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(uint *)((longlong)param_1 + 0x4fc) = uVar1;
  uVar1 = uRam0000000146878344 & uRam0000000146878354;
  uVar2 = uRam0000000146878348 & uRam0000000146878358;
  uVar3 = uRam000000014687834c & uRam000000014687835c;
  *(uint *)(param_1 + 0xa2) = _DAT_146878340 & _DAT_146878350;
  *(uint *)((longlong)param_1 + 0x514) = uVar1;
  *(uint *)(param_1 + 0xa3) = uVar2;
  *(uint *)((longlong)param_1 + 0x51c) = uVar3;
  param_1[0xa4] = 0xffffffffffffffff;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0xffffffff;
  FName::FName(local_res8,L"Texture",1);
  param_1[0x95] = local_res8[0];
  *(undefined2 *)(param_1 + 0xb3) = 1;
  *(undefined1 *)((longlong)param_1 + 0x59a) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 3;
  *(undefined1 *)((longlong)param_1 + 0x58c) = 1;
  return param_1;
}



// FUNCTION 1412b00e0 FUN_1412b00e0 body=97 status=ok
// SIG undefined FUN_1412b00e0(void)

undefined8 * FUN_1412b00e0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *param_1 = &PTR_FUN_14476b5b0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return param_1;
}



// FUNCTION 1412b0150 UAnathemaGameplayCueNotify_Burst body=49 status=ok
// SIG undefined UAnathemaGameplayCueNotify_Burst(void)

undefined8 * UAnathemaGameplayCueNotify_Burst::UAnathemaGameplayCueNotify_Burst(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__14476cdf8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  return param_1;
}



// FUNCTION 1412b0190 FUN_1412b0190 body=76 status=ok
// SIG undefined FUN_1412b0190(void)

undefined8 * FUN_1412b0190(undefined8 *param_1)

{
  FUN_1412aff80();
  *param_1 = &PTR__scalar_deleting_destructor__14476c410;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c9) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  return param_1;
}



// FUNCTION 1412b01e0 FUN_1412b01e0 body=2220 status=ok
// SIG undefined FUN_1412b01e0(void)

undefined8 * FUN_1412b01e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14476adc0;
  param_1[0x8b] = &PTR_LAB_14476b4f0;
  param_1[0x8c] = &PTR_LAB_14476b510;
  param_1[0x8d] = &PTR_LAB_14476b570;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 2;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0xbdcccccd;
  *(undefined4 *)(param_1 + 0xb6) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0x41200000;
  *(undefined4 *)(param_1 + 0xb7) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0xbdcccccd;
  *(undefined4 *)(param_1 + 0xb8) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = 0x41200000;
  *(undefined4 *)(param_1 + 0xb9) = 0x40800000;
  param_1[0xba] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  FText::FText(param_1 + 0xbf);
  FText::FText(param_1 + 0xc2);
  param_1[0xc5] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcc] = 0;
  param_1[0xcf] = 0;
  param_1[0xd3] = 0;
  param_1[0xd5] = 0;
  param_1[0xd7] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0x103) = 1;
  *(undefined4 *)(param_1 + 0x109) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x10a) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0x3f800000;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x12f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0;
  *(undefined4 *)(param_1 + 0x13b) = 0x3e99999a;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0x3e99999a;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined4 *)(param_1 + 0x13e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9f4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x13f) = 0;
  param_1[0x143] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa24) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa04) = 0;
  param_1[0x142] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  if ((*(int *)((longlong)param_1 + 0xa24) < 0) && (*(int *)((longlong)param_1 + 0xa24) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x143,0);
  }
  if ((undefined2 *)param_1[0x143] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x143] = 0;
  }
  *(undefined4 *)(param_1 + 0x141) = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  *(undefined4 *)(param_1 + 0x145) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa2c) = 0;
  param_1[0x147] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x149) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa4c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x148,0);
  }
  if ((undefined2 *)param_1[0x148] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x148] = 0;
  }
  *(undefined4 *)(param_1 + 0x146) = 0;
  FUN_140f9f650(param_1 + 0x14a);
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd14) = 0xffffffff;
  param_1[0x1a3] = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd24) = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  *(undefined4 *)(param_1 + 0x19d) = DAT_1468b5ca0;
  *(undefined4 *)((longlong)param_1 + 0xcec) = DAT_1468b5ca4;
  FName::FName(&local_res8,L"ZoneMap",1);
  param_1[0xba] = local_res8;
  *(undefined1 *)((longlong)param_1 + 0x90c) = 0;
  puVar2 = (undefined8 *)FName::FName(local_res18,L"Scene",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429ff160();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  (**(code **)(*plVar4 + 0x500))(plVar4,0);
  FUN_14223f010(param_1,plVar4);
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"SpringArm",1);
  uVar1 = *puVar2;
  uVar3 = AXBakeableSplineMesh::GetPrivateStaticClass();
  lVar5 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0xe5] = lVar5;
  if (lVar5 != 0) {
    local_res8 = 0;
    FUN_142382f60(lVar5,plVar4,&DAT_146af29ec,0);
    *(undefined1 *)(param_1[0xe5] + 0x38) = 2;
  }
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"SceneCapture_MainView",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429fde70();
  lVar5 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x128] = lVar5;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x3d8) = 2;
    local_res8 = 0;
    *(undefined1 *)(param_1[0x128] + 0x2d0) = 2;
    *(undefined1 *)(param_1[0x128] + 0x328) = 1;
    *(undefined1 *)(param_1[0x128] + 0x329) = 0;
    *(byte *)(param_1[0x128] + 0x24c) = *(byte *)(param_1[0x128] + 0x24c) & 0xdf;
    *(byte *)(param_1[0x128] + 0xba) = *(byte *)(param_1[0x128] + 0xba) & 0xfd;
    FUN_142382f60(param_1[0x128],param_1[0xe5],&DAT_146af29ec,0);
  }
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"MinimapSpringArm",1);
  uVar1 = *puVar2;
  uVar3 = AXBakeableSplineMesh::GetPrivateStaticClass();
  lVar5 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0xe6] = lVar5;
  if (lVar5 != 0) {
    local_res8 = 0;
    FUN_142382f60(lVar5,plVar4,&DAT_146af29ec,0);
    *(undefined1 *)(param_1[0xe6] + 0x38) = 2;
  }
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"SceneCapture_MiniMap",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429fde70();
  lVar5 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x129] = lVar5;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x3d8) = 2;
    local_res8 = 0;
    *(undefined1 *)(param_1[0x129] + 0x2d0) = 2;
    *(undefined1 *)(param_1[0x129] + 0x328) = 1;
    *(byte *)(param_1[0x129] + 0x24c) = *(byte *)(param_1[0x129] + 0x24c) & 0xdf;
    *(byte *)(param_1[0x129] + 0xba) = *(byte *)(param_1[0x129] + 0xba) & 0xfd;
    FUN_142382f60(param_1[0x129],param_1[0xe6],&DAT_146af29ec,0);
  }
  *(undefined2 *)((longlong)param_1 + 0x82c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x112) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x864) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0x40400000;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0x41f00000;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0xe3) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1a1) = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0x49742400;
  *(undefined1 *)((longlong)param_1 + 0x974) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c9) = 0;
  *(undefined2 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd22) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd24) = 0;
  return param_1;
}



// FUNCTION 1412b0a90 FUN_1412b0a90 body=193 status=ok
// SIG undefined FUN_1412b0a90(void)

undefined8 * FUN_1412b0a90(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3[1];
  *(undefined4 *)(param_1 + 2) = param_3[2];
  local_38 = *(undefined8 *)(param_3 + 4);
  FString::FString(local_30,param_3 + 6);
  FSoftObjectPath::operator=(param_1 + 3,&local_38);
  return param_1;
}



// FUNCTION 1412b0b60 FUN_1412b0b60 body=403 status=ok
// SIG undefined FUN_1412b0b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1412b0b60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x18,0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x58,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x70,uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x1000000;
  *(undefined2 *)(param_1 + 0x9c) = 1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar2 = uRam000000014687834c;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar2 = uRam0000000146878344 & uRam0000000146878354;
  uVar3 = uRam0000000146878348 & uRam0000000146878358;
  uVar4 = uRam000000014687834c & uRam000000014687835c;
  *(uint *)(param_1 + 0xe0) = _DAT_146878340 & _DAT_146878350;
  *(uint *)(param_1 + 0xe4) = uVar2;
  *(uint *)(param_1 + 0xe8) = uVar3;
  *(uint *)(param_1 + 0xec) = uVar4;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_140f9f7d0(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  uVar2 = uRam000000014687834c;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(uint *)(param_1 + 0x20c) = uVar2;
  uVar2 = uRam0000000146878344 & uRam0000000146878354;
  uVar3 = uRam0000000146878348 & uRam0000000146878358;
  uVar4 = uRam000000014687834c & uRam000000014687835c;
  *(uint *)(param_1 + 0x220) = _DAT_146878340 & _DAT_146878350;
  *(uint *)(param_1 + 0x224) = uVar2;
  *(uint *)(param_1 + 0x228) = uVar3;
  *(uint *)(param_1 + 0x22c) = uVar4;
  *(undefined8 *)(param_1 + 0x230) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 0x259) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  FUN_1412b1e40(param_1,param_2);
  return param_1;
}



// FUNCTION 1412b0d00 FUN_1412b0d00 body=403 status=ok
// SIG undefined FUN_1412b0d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1412b0d00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x18,0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x58,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x70,uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x1000000;
  *(undefined2 *)(param_1 + 0x9c) = 1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar2 = uRam000000014687834c;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar2 = uRam0000000146878344 & uRam0000000146878354;
  uVar3 = uRam0000000146878348 & uRam0000000146878358;
  uVar4 = uRam000000014687834c & uRam000000014687835c;
  *(uint *)(param_1 + 0xe0) = _DAT_146878340 & _DAT_146878350;
  *(uint *)(param_1 + 0xe4) = uVar2;
  *(uint *)(param_1 + 0xe8) = uVar3;
  *(uint *)(param_1 + 0xec) = uVar4;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_140f9f7d0(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  uVar2 = uRam000000014687834c;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(uint *)(param_1 + 0x20c) = uVar2;
  uVar2 = uRam0000000146878344 & uRam0000000146878354;
  uVar3 = uRam0000000146878348 & uRam0000000146878358;
  uVar4 = uRam000000014687834c & uRam000000014687835c;
  *(uint *)(param_1 + 0x220) = _DAT_146878340 & _DAT_146878350;
  *(uint *)(param_1 + 0x224) = uVar2;
  *(uint *)(param_1 + 0x228) = uVar3;
  *(uint *)(param_1 + 0x22c) = uVar4;
  *(undefined8 *)(param_1 + 0x230) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 0x259) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  FUN_1412b1fe0(param_1,param_2);
  return param_1;
}



// FUNCTION 1412b0ea0 FUN_1412b0ea0 body=627 status=ok
// SIG undefined FUN_1412b0ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1412b0ea0(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  FWeakObjectPtr::operator=(param_1 + 6,0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  uVar4 = FUN_1404b03b0();
  FText::FText(param_1 + 0x16,uVar4);
  uVar4 = FUN_1404b03b0();
  FText::FText(param_1 + 0x1c,uVar4);
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0x1000000;
  *(undefined2 *)(param_1 + 0x27) = 1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  uVar7 = uRam000000014687834c;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = uVar7;
  uVar7 = uRam0000000146878344 & uRam0000000146878354;
  uVar8 = uRam0000000146878348 & uRam0000000146878358;
  uVar9 = uRam000000014687834c & uRam000000014687835c;
  param_1[0x38] = _DAT_146878340 & _DAT_146878350;
  param_1[0x39] = uVar7;
  param_1[0x3a] = uVar8;
  param_1[0x3b] = uVar9;
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  FUN_140f9f7d0(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  uVar7 = uRam000000014687834c;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = uVar7;
  uVar7 = uRam0000000146878344 & uRam0000000146878354;
  uVar8 = uRam0000000146878348 & uRam0000000146878358;
  uVar9 = uRam000000014687834c & uRam000000014687835c;
  param_1[0x88] = _DAT_146878340 & _DAT_146878350;
  param_1[0x89] = uVar7;
  param_1[0x8a] = uVar8;
  param_1[0x8b] = uVar9;
  *(undefined8 *)(param_1 + 0x8c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined2 *)((longlong)param_1 + 0x259) = 0;
  param_1[0x97] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *param_1 = local_res8;
  param_1[1] = local_resc;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_50 = (undefined4)param_2[7];
  param_1[0xe] = (int)param_2[6];
  param_1[0xf] = uVar1;
  param_1[0x10] = local_50;
  local_48 = (undefined4)param_2[4];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = (undefined4)param_2[5];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  puVar5 = (undefined8 *)FQuat::Rotator(&local_48,local_58);
  *(undefined8 *)(param_1 + 0x11) = *puVar5;
  param_1[0x13] = *(undefined4 *)(puVar5 + 1);
  if (*param_2 != 0) {
    FText::operator=(param_1 + 0x16,*param_2 + 0x30);
    FText::operator=(param_1 + 0x1c,*param_2 + 0x60);
    FString::operator=(param_1 + 0x22,*param_2 + 0xb0);
    *(undefined1 *)((longlong)param_1 + 0x9d) = *(undefined1 *)(*param_2 + 0xd1);
  }
  puVar6 = (undefined4 *)FGuid::NewGuid(&local_48);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  param_1[10] = *puVar6;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar3;
  FUN_14128c120(param_1 + 0x28,param_2);
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined2 *)((longlong)param_1 + 0x9b) = 0x101;
  return param_1;
}



// FUNCTION 1412b1120 FUN_1412b1120 body=403 status=ok
// SIG undefined FUN_1412b1120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1412b1120(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FWeakObjectPtr::operator=(param_1,0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x18,0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x58,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 0x70,uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x1000000;
  *(undefined2 *)(param_1 + 0x9c) = 1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar2 = uRam000000014687834c;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar2 = uRam0000000146878344 & uRam0000000146878354;
  uVar3 = uRam0000000146878348 & uRam0000000146878358;
  uVar4 = uRam000000014687834c & uRam000000014687835c;
  *(uint *)(param_1 + 0xe0) = _DAT_146878340 & _DAT_146878350;
  *(uint *)(param_1 + 0xe4) = uVar2;
  *(uint *)(param_1 + 0xe8) = uVar3;
  *(uint *)(param_1 + 0xec) = uVar4;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_140f9f7d0(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  uVar2 = uRam000000014687834c;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(uint *)(param_1 + 0x20c) = uVar2;
  uVar2 = uRam0000000146878344 & uRam0000000146878354;
  uVar3 = uRam0000000146878348 & uRam0000000146878358;
  uVar4 = uRam000000014687834c & uRam000000014687835c;
  *(uint *)(param_1 + 0x220) = _DAT_146878340 & _DAT_146878350;
  *(uint *)(param_1 + 0x224) = uVar2;
  *(uint *)(param_1 + 0x228) = uVar3;
  *(uint *)(param_1 + 0x22c) = uVar4;
  *(undefined8 *)(param_1 + 0x230) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 0x259) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  FUN_1412b3220(param_1,param_2);
  return param_1;
}



// FUNCTION 1412b12c0 FUN_1412b12c0 body=349 status=ok
// SIG undefined FUN_1412b12c0(void)

undefined8 * FUN_1412b12c0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14476ab40;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  FUN_142d979c0(param_1 + 0x14);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_142c8c260(param_1 + 0x32,0x3f800000);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x22] = 0x3dcccccd3f800000;
  param_1[0x23] = 0x3f8000003dcccccd;
  param_1[0x26] = 0x3f80000000000000;
  param_1[0x27] = 0x3f80000000000000;
  param_1[0x24] = 0x3f8000003f800000;
  param_1[0x25] = 0x3f8000003f800000;
  param_1[0x2a] = 0x3f80000000000000;
  param_1[0x2b] = 0x3f8000003f333333;
  param_1[0x28] = 0x3f800000;
  param_1[0x29] = 0x3f80000000000000;
  param_1[0x2e] = 0x3f333333;
  param_1[0x2f] = 0x3f8000003f59999a;
  param_1[0x2c] = 0x3f3333333f800000;
  param_1[0x2d] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 1412b1420 FUN_1412b1420 body=85 status=ok
// SIG undefined FUN_1412b1420(void)

undefined8 * FUN_1412b1420(undefined8 *param_1)

{
  FUN_142cb26e0();
  *param_1 = &PTR_FUN_14476f3c8;
  param_1[5] = &PTR_LAB_14476f820;
  param_1[0x2f] = &PTR_LAB_14476f850;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a1) = 1;
  return param_1;
}



// FUNCTION 1412b1480 FUN_1412b1480 body=828 status=ok
// SIG undefined FUN_1412b1480(void)

undefined8 * FUN_1412b1480(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_14476a880;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 100)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
  }
  if ((undefined2 *)param_1[0xb] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((*(int *)((longlong)param_1 + 0x8c) < 0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if ((undefined2 *)param_1[0x10] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x10] = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((*(int *)((longlong)param_1 + 0xb4) < 0) && (*(int *)((longlong)param_1 + 0xb4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x15,0);
  }
  if ((undefined2 *)param_1[0x15] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x15] = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((*(int *)((longlong)param_1 + 0xdc) < 0) && (*(int *)((longlong)param_1 + 0xdc) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a,0);
  }
  if ((undefined2 *)param_1[0x1a] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1a] = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((*(int *)((longlong)param_1 + 300) < 0) && (*(int *)((longlong)param_1 + 300) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x24,0);
  }
  if ((undefined2 *)param_1[0x24] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x24] = 0;
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((*(int *)((longlong)param_1 + 0x154) < 0) && (*(int *)((longlong)param_1 + 0x154) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x29,0);
  }
  if ((undefined2 *)param_1[0x29] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x29] = 0;
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((*(int *)((longlong)param_1 + 0x17c) < 0) && (*(int *)((longlong)param_1 + 0x17c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x2e,0);
  }
  if ((undefined2 *)param_1[0x2e] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x2e] = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x44000000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x44000000;
  *(undefined4 *)(param_1 + 0x3f) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x30) = 0x43480000;
  *(undefined4 *)(param_1 + 0x31) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x45) = 0x3f851eb8;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3f851eb8;
  return param_1;
}



// FUNCTION 1412b17c0 FUN_1412b17c0 body=54 status=ok
// SIG undefined FUN_1412b17c0(void)

undefined8 * FUN_1412b17c0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__14476cb78;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



// FUNCTION 1412b1800 FUN_1412b1800 body=94 status=ok
// SIG undefined FUN_1412b1800(void)

undefined8 * FUN_1412b1800(undefined8 *param_1)

{
  FUN_1412b1860();
  *param_1 = &PTR_FUN_14476df48;
  param_1[5] = &PTR_LAB_14476e838;
  param_1[0x5a] = &PTR_LAB_14476e868;
  param_1[0xe0] = &PTR_LAB_14476e8c0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  return param_1;
}



// FUNCTION 1412b1860 FUN_1412b1860 body=132 status=ok
// SIG undefined FUN_1412b1860(void)

undefined8 * FUN_1412b1860(undefined8 *param_1)

{
  FUN_14235ecd0();
  *param_1 = &PTR_FUN_14476d558;
  param_1[5] = &PTR_LAB_14476de48;
  param_1[0x5a] = &PTR_LAB_14476de78;
  param_1[0xe0] = &PTR_LAB_14476ded0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0xffffffff;
  param_1[0xea] = 0;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x72c) = 1;
  return param_1;
}



// FUNCTION 1412b18f0 FUN_1412b18f0 body=135 status=ok
// SIG undefined FUN_1412b18f0(void)

undefined8 * FUN_1412b18f0(undefined8 *param_1)

{
  FUN_1423c48a0();
  *param_1 = &PTR_FUN_14476e938;
  param_1[5] = &PTR_LAB_14476f2c8;
  param_1[0x5a] = &PTR_LAB_14476f2f8;
  param_1[0xf5] = &PTR_LAB_14476f350;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  *(undefined1 *)(param_1 + 0xff) = 0;
  return param_1;
}



// FUNCTION 1412b1980 FUN_1412b1980 body=326 status=ok
// SIG undefined FUN_1412b1980(void)

void FUN_1412b1980(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar6 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    lVar6 = lVar6 + 0x1d0;
    do {
      if (*(longlong *)(lVar6 + 0x20) != 0) {
        FMemory::Free();
      }
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar6);
      FUN_140bff340(lVar6 + -0x68);
      FUN_140c64420(lVar6 + -0x78);
      if (*(longlong *)(lVar6 + -200) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + -0x128) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + -0x148) != 0) {
        FMemory::Free();
      }
      plVar4 = *(longlong **)(lVar6 + -0x158);
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
      plVar4 = *(longlong **)(lVar6 + -0x170);
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
      lVar6 = lVar6 + 0x270;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar6 = *param_1;
  }
  if (lVar6 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1412b1ad0 FUN_1412b1ad0 body=107 status=ok
// SIG undefined FUN_1412b1ad0(void)

void FUN_1412b1ad0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1412b1b40 FUN_1412b1b40 body=764 status=ok
// SIG undefined FUN_1412b1b40(void)

void FUN_1412b1b40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xd38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xcd0) != 0) {
    FMemory::Free();
  }
  FUN_1412b1980(param_1 + 0xcc0);
  FUN_140fa04a0(param_1 + 0xa50);
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x898) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x808) != 0) {
    FMemory::Free();
  }
  FUN_1412b1980(param_1 + 0x7f8);
  FUN_1412b1980(param_1 + 0x7e8);
  FUN_1412b1980(param_1 + 0x7d8);
  FUN_1412b1980(param_1 + 0x7c8);
  FUN_1412b1980(param_1 + 0x7b8);
  FUN_1412b1980(param_1 + 0x7a8);
  FUN_1412b1980(param_1 + 0x798);
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x618);
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
  plVar4 = *(longlong **)(param_1 + 0x600);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x598);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x588);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x578);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x568);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x558);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x540);
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x520);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x510);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x500);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x490);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x468) = &PTR_FUN_14476ab00;
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_1441b3948;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1444d6628;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1412b1e40 FUN_1412b1e40 body=410 status=ok
// SIG undefined FUN_1412b1e40(void)

undefined4 * FUN_1412b1e40(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  FText::operator=(param_1 + 0x16,param_2 + 0x16);
  FText::operator=(param_1 + 0x1c,param_2 + 0x1c);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x11) = *(undefined8 *)(param_2 + 0x11);
  param_1[0x13] = param_2[0x13];
  FString::operator=(param_1 + 0x22,param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x99) = *(undefined1 *)((longlong)param_2 + 0x99);
  *(undefined1 *)((longlong)param_1 + 0x9b) = *(undefined1 *)((longlong)param_2 + 0x9b);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x9d) = *(undefined1 *)((longlong)param_2 + 0x9d);
  FUN_14128c120(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  FUN_14128bbb0(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)((longlong)param_1 + 0x25a) = *(undefined1 *)((longlong)param_2 + 0x25a);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(param_2 + 0x96);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  FUN_14128bbb0(param_1 + 0x40,param_2 + 0x40);
  *(undefined1 *)((longlong)param_1 + 0x259) = *(undefined1 *)((longlong)param_2 + 0x259);
  return param_1;
}



// FUNCTION 1412b1fe0 FUN_1412b1fe0 body=2786 status=ok
// SIG undefined FUN_1412b1fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1412b1fe0(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined4 *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  plVar16 = (longlong *)0x0;
  local_1d8 = 0;
  local_1f0 = param_1;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar7 = FUN_142f71d80();
    lVar10 = *(longlong *)(param_2 + 0x40);
    lVar12 = lVar10;
    if (lVar10 != 0) {
LAB_1412b2040:
      if (lVar12 != lVar7) goto code_r0x0001412b2049;
      if (lVar10 != 0) {
        plVar11 = (longlong *)FUN_142f71d80();
        for (plVar9 = *(longlong **)(param_2 + 0x40);
            (plVar15 = plVar16, plVar9 != (longlong *)0x0 &&
            (plVar15 = *(longlong **)(param_2 + 0x40), plVar9 != plVar11));
            plVar9 = (longlong *)plVar9[6]) {
        }
        lVar10 = plVar15[0x1f];
        if (lVar10 == 0) {
          (**(code **)(*plVar15 + 0x368))(plVar15);
          lVar10 = plVar15[0x1f];
          if (lVar10 != 0) goto LAB_1412b232c;
          goto LAB_1412b2052;
        }
LAB_1412b232c:
        lVar12 = FUN_142f71d80();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1412b2052;
        bVar4 = true;
        bVar3 = false;
        uVar8 = FUN_142dea370(lVar10 + 0x38,local_110);
        goto LAB_1412b2068;
      }
    }
  }
LAB_1412b2052:
  bVar4 = false;
  bVar3 = true;
  uVar8 = FUN_1404b03b0();
  uVar8 = FText::FText(local_128,uVar8);
LAB_1412b2068:
  FText::operator=(param_1 + 0x16,uVar8);
  if ((bVar3) && (local_120 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_120 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if ((bVar4) && (local_108 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_108 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_1d8,0);
  plVar9 = (longlong *)(param_1 + 0x22);
  *param_1 = local_1d8;
  param_1[1] = local_1d4;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = uVar8;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x30);
  *(longlong **)(param_1 + 0x11) = local_168;
  param_1[0x13] = local_160;
  if ((wchar_t *)*plVar9 != L"miniWaypoint") {
    param_1[0x24] = 0;
    plVar11 = plVar16;
    if (param_1[0x25] != 0xd) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar9,0xd);
      plVar11 = (longlong *)(ulonglong)(uint)param_1[0x24];
    }
    iVar6 = (int)plVar11 + 0xd;
    param_1[0x24] = iVar6;
    if ((int)param_1[0x25] < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar9);
    }
    builtin_wcsncpy((wchar_t *)*plVar9,L"miniWaypoint",0xd);
  }
  *(undefined1 *)((longlong)param_1 + 0x9d) = 4;
  local_a0 = 0;
  local_68 = _DAT_146878340 & _DAT_146878350;
  uStack_64 = uRam0000000146878344 & uRam0000000146878354;
  uStack_60 = uRam0000000146878348 & uRam0000000146878358;
  uStack_5c = uRam000000014687834c & uRam000000014687835c;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = uRam000000014687834c;
  local_a8 = 0;
  local_98 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 0;
  FUN_14128c120(param_1 + 0x28);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9b) = 0x101;
  *(undefined2 *)(param_1 + 0x96) = 0x105;
  param_1[0x54] = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0x1e5) = *(undefined1 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x7a) = *(undefined8 *)(param_2 + 0x68);
  local_1e8 = (longlong *)(param_2 + 0x20);
  plVar9 = (longlong *)FWeakObjectPtr::Get(local_1e8);
  if (plVar9 != (longlong *)0x0) {
    lVar10 = FUN_1414a1520();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1412b2386;
  }
  plVar9 = plVar16;
LAB_1412b2386:
  plVar11 = (longlong *)(param_1 + 0x56);
  *(bool *)((longlong)param_1 + 0x25a) = plVar9 != (longlong *)0x0;
  FUN_1412bdc80(plVar11);
  plVar9 = (longlong *)(param_1 + 0x74);
  iVar6 = param_1[0x76];
  if (iVar6 != 0) {
    plVar15 = (longlong *)(*plVar9 + 0x18);
    do {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1[0x76] = 0;
  if (param_1[0x77] != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (plVar9);
  }
  auVar2._12_4_ = 0;
  auVar2._0_12_ = *(undefined1 (*) [12])(param_2 + 0x28);
  *(undefined1 (*) [16])(param_1 + 0x4c) = auVar2;
  if ((*(char *)((longlong)param_1 + 0x25a) == '\0') || (*(longlong *)(param_2 + 0x40) == 0)) {
LAB_1412b2447:
    plVar15 = local_1e8;
    puVar18 = param_1;
    if (*(int *)(param_2 + 0x50) < 1) {
      lVar10 = FWeakObjectPtr::Get(local_1e8);
      if (lVar10 != 0) {
        lVar12 = FUN_142f71e20();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar8 = UNativeUserListEntry::GetPrivateStaticClass();
          lVar10 = FWeakObjectPtr::Get(plVar15);
          cVar5 = UClass::ImplementsInterface(*(undefined8 *)(lVar10 + 0x10),uVar8);
          if (cVar5 != '\0') {
            local_1d0 = (undefined8 *)0x0;
            local_1c8 = 0;
            uVar8 = FWeakObjectPtr::Get(plVar15);
            FUN_142f78e20(uVar8,&local_1d0);
            local_1e8 = (longlong *)0x0;
            local_168 = (longlong *)
                        ((ulonglong)
                         ((longlong)(local_1d0 + (int)local_1c8) + (7 - (longlong)local_1d0)) >> 3);
            if (local_1d0 + (int)local_1c8 < local_1d0) {
              local_168 = plVar16;
            }
            puVar17 = local_1d0;
            if (local_168 != (longlong *)0x0) {
              do {
                plVar11 = (longlong *)*puVar17;
                plVar15 = plVar16;
                if (plVar11 != (longlong *)0x0) {
                  plVar13 = (longlong *)FUN_142f71d80();
                  plVar14 = plVar11;
                  do {
                    plVar15 = plVar11;
                    if (plVar14 == plVar13) break;
                    plVar14 = (longlong *)plVar14[6];
                    plVar15 = plVar16;
                  } while (plVar14 != (longlong *)0x0);
                }
                if (plVar15 != (longlong *)0x0) {
                  plVar15 = plVar16;
                  if (plVar11 != (longlong *)0x0) {
                    plVar13 = (longlong *)FUN_142f71d80();
                    plVar14 = plVar11;
                    do {
                      plVar15 = plVar11;
                      if (plVar14 == plVar13) break;
                      plVar14 = (longlong *)plVar14[6];
                      plVar15 = plVar16;
                    } while (plVar14 != (longlong *)0x0);
                  }
                  local_180 = 0;
                  local_188 = 0;
                  local_178 = 0;
                  local_198 = 0xffffffff;
                  local_194 = 0;
                  local_1f8 = 0;
                  if (plVar15 == (longlong *)0x0) {
                    local_170 = 0;
                    local_188 = 0;
                  }
                  else {
                    uVar8 = FSoftObjectPath::FSoftObjectPath(local_c8,plVar15);
                    FSoftObjectPath::operator=(&local_188,uVar8);
                    FWeakObjectPtr::operator=(&local_198,plVar15);
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    local_194 = CONCAT44(DAT_1464b56f4,(undefined4)local_194);
                  }
                  lVar10 = *plVar9;
                  iVar6 = param_1[0x76];
                  for (lVar12 = lVar10; lVar12 != lVar10 + (longlong)iVar6 * 0x28;
                      lVar12 = lVar12 + 0x28) {
                    cVar5 = FSoftObjectPath::operator==(lVar12 + 0x10,&local_188);
                    if (cVar5 != '\0') {
                      if ((int)((lVar12 - lVar10) / 0x28) != -1) goto LAB_1412b2a3c;
                      break;
                    }
                  }
                  iVar6 = param_1[0x76];
                  lVar10 = (longlong)iVar6;
                  param_1[0x76] = iVar6 + 1;
                  if ((int)param_1[0x77] < iVar6 + 1) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar6);
                  }
                  lVar7 = *plVar9;
                  *(undefined8 *)(lVar7 + 0x18 + lVar10 * 0x28) = 0;
                  lVar12 = lVar7 + lVar10 * 0x28;
                  *(undefined8 *)(lVar12 + 0x20) = 0;
                  local_1e0 = (longlong *)0x0;
                  *(undefined4 *)(lVar7 + lVar10 * 0x28) = 0xffffffff;
                  *(undefined4 *)(lVar7 + 4 + lVar10 * 0x28) = 0;
                  *(undefined8 *)(lVar12 + 0x10) = 0;
                  *(undefined4 *)(lVar12 + 0x20) = 0;
                  if (0x7fffffff < *(uint *)(lVar12 + 0x24)) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar12 + 0x18,0);
                  }
                  if (*(undefined2 **)(lVar12 + 0x18) != (undefined2 *)0x0) {
                    **(undefined2 **)(lVar12 + 0x18) = 0;
                  }
                  *(undefined4 *)(lVar7 + 8 + lVar10 * 0x28) = 0;
                  *(undefined4 *)(lVar7 + lVar10 * 0x28) = local_198;
                  *(undefined4 *)(lVar7 + 4 + lVar10 * 0x28) = (undefined4)local_194;
                  *(undefined4 *)(lVar7 + 8 + lVar10 * 0x28) = local_194._4_4_;
                  local_140 = local_188;
                  FString::FString(local_138,&local_180);
                  FSoftObjectPath::operator=(lVar12 + 0x10);
LAB_1412b2a3c:
                  if (local_180 != 0) {
                    FMemory::Free();
                  }
                }
                local_1e8 = (longlong *)((longlong)local_1e8 + 1);
                puVar17 = puVar17 + 1;
              } while (local_1e8 != local_168);
              param_1 = local_1f0;
            }
            if (0 < (int)local_1c8) {
              *(undefined1 *)(param_1 + 0x96) = 0;
            }
            if (local_1d0 != (undefined8 *)0x0) {
              FMemory::Free(local_1d0);
              return param_1;
            }
            return param_1;
          }
        }
      }
      *(undefined1 *)(param_1 + 0x96) = 5;
    }
    else {
      puVar17 = *(undefined8 **)(param_2 + 0x48);
      local_1e0 = (longlong *)((longlong)*(int *)(param_2 + 0x50) & 0x1fffffffffffffff);
      if (puVar17 + *(int *)(param_2 + 0x50) < puVar17) {
        local_1e0 = plVar16;
      }
      if (local_1e0 != (longlong *)0x0) {
        do {
          local_1e8 = (longlong *)*puVar17;
          iVar6 = param_1[0x58];
          param_1[0x58] = iVar6 + 1;
          if ((int)param_1[0x59] < iVar6 + 1) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar11);
          }
          lVar10 = *plVar11;
          lVar12 = (longlong)iVar6 * 0x50;
          _guard_xfg_dispatch_icall_nop((void *)(lVar12 + lVar10),0,0x50);
          FUN_140aecb80((void *)(lVar12 + lVar10));
          puVar18 = local_1f0;
          if ((iVar6 < 0) || ((int)local_1f0[0x58] <= iVar6)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_142f604c0(*plVar11 + lVar12,*(undefined8 *)(param_2 + 0x40),local_1e8);
            cVar5 = FUN_142f63b20(*plVar11 + lVar12,0);
            if ((cVar5 == '\0') || (lVar10 = FUN_142f5f490(*plVar11 + lVar12), lVar10 == 0)) {
              FUN_140cc9910(plVar11,iVar6,1,1);
            }
            else {
              ULiveLinkTimeSynchronizationSource::GetDisplayName(lVar10,local_f8);
              FText::operator=(puVar18 + 0x1c);
              plVar9 = local_f0;
              if (local_f0 != (longlong *)0x0) {
                LOCK();
                plVar15 = local_f0 + 1;
                lVar12 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*local_f0)(local_f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar9 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9);
                  }
                }
              }
              *(char *)(local_1f0 + 0x96) = (*(char *)(lVar10 + 0xa8) != '\0') + '\x01';
            }
          }
          puVar17 = puVar17 + 1;
          plVar16 = (longlong *)((longlong)plVar16 + 1);
          puVar18 = local_1f0;
        } while (plVar16 != local_1e0);
      }
    }
    return puVar18;
  }
  lVar12 = FUN_142f71d80();
  lVar10 = *(longlong *)(param_2 + 0x40);
  while( true ) {
    if (lVar10 == 0) goto LAB_1412b2447;
    if (lVar10 == lVar12) break;
    lVar10 = *(longlong *)(lVar10 + 0x30);
  }
  if (*(longlong *)(param_2 + 0x40) == 0) goto LAB_1412b2447;
  plVar15 = (longlong *)FUN_142f71d80();
  for (plVar11 = *(longlong **)(param_2 + 0x40);
      (plVar14 = plVar16, plVar11 != (longlong *)0x0 &&
      (plVar14 = *(longlong **)(param_2 + 0x40), plVar11 != plVar15));
      plVar11 = (longlong *)plVar11[6]) {
  }
  local_1a8 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_1c0 = 0xffffffff;
  local_1bc = 0;
  local_1f8 = 0;
  if (plVar14 == (longlong *)0x0) {
    local_1f8 = 0;
    local_1b0 = 0;
  }
  else {
    uVar8 = FSoftObjectPath::FSoftObjectPath(local_e0,plVar14);
    FSoftObjectPath::operator=(&local_1b0,uVar8);
    FWeakObjectPtr::operator=(&local_1c0,plVar14);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_1bc = CONCAT44(DAT_1464b56f4,(undefined4)local_1bc);
  }
  lVar10 = *plVar9;
  iVar6 = param_1[0x76];
  lVar12 = lVar10;
  do {
    if (lVar12 == lVar10 + (longlong)iVar6 * 0x28) {
LAB_1412b25e4:
      iVar6 = param_1[0x76];
      lVar10 = (longlong)iVar6;
      param_1[0x76] = iVar6 + 1;
      if ((int)param_1[0x77] < iVar6 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar6);
      }
      lVar7 = *plVar9;
      *(undefined8 *)(lVar7 + 0x18 + lVar10 * 0x28) = 0;
      lVar12 = lVar7 + lVar10 * 0x28;
      *(undefined4 *)(lVar12 + 0x24) = 0;
      local_1f8 = 0;
      *(undefined4 *)(lVar7 + lVar10 * 0x28) = 0xffffffff;
      *(undefined4 *)(lVar7 + 4 + lVar10 * 0x28) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined4 *)(lVar12 + 0x20) = 0;
      if (0x7fffffff < *(uint *)(lVar12 + 0x24)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar12 + 0x18,0);
      }
      if (*(undefined2 **)(lVar12 + 0x18) != (undefined2 *)0x0) {
        **(undefined2 **)(lVar12 + 0x18) = 0;
      }
      *(undefined4 *)(lVar7 + 8 + lVar10 * 0x28) = 0;
      *(undefined4 *)(lVar7 + lVar10 * 0x28) = local_1c0;
      *(undefined4 *)(lVar7 + 4 + lVar10 * 0x28) = (undefined4)local_1bc;
      *(undefined4 *)(lVar7 + 8 + lVar10 * 0x28) = local_1bc._4_4_;
      local_158 = local_1b0;
      FString::FString(local_150,&local_1a8);
      FSoftObjectPath::operator=(lVar12 + 0x10,&local_158);
LAB_1412b268f:
      if (local_1a8 != 0) {
        FMemory::Free();
      }
      *(undefined1 *)(param_1 + 0x96) = 4;
      return param_1;
    }
    cVar5 = FSoftObjectPath::operator==(lVar12 + 0x10,&local_1b0);
    if (cVar5 != '\0') {
      if ((int)((lVar12 - lVar10) / 0x28) != -1) goto LAB_1412b268f;
      goto LAB_1412b25e4;
    }
    lVar12 = lVar12 + 0x28;
  } while( true );
code_r0x0001412b2049:
  plVar9 = (longlong *)(lVar12 + 0x30);
  lVar12 = *plVar9;
  if (*plVar9 == 0) goto LAB_1412b2052;
  goto LAB_1412b2040;
}



// FUNCTION 1412b2ad0 FUN_1412b2ad0 body=1753 status=ok
// SIG undefined FUN_1412b2ad0(void)

longlong FUN_1412b2ad0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *local_178;
  ulonglong local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [40];
  
  if (param_2 != 0) {
    local_120 = *(undefined4 *)(param_2 + 0x220);
    uStack_11c = *(undefined4 *)(param_2 + 0x224);
    local_118 = *(undefined4 *)(param_2 + 0x228);
    uStack_7c = *(undefined4 *)(param_2 + 0x22c);
    *(undefined4 *)(param_1 + 0x38) = local_120;
    *(undefined4 *)(param_1 + 0x3c) = uStack_11c;
    *(undefined4 *)(param_1 + 0x40) = local_118;
    local_88 = local_120;
    uStack_84 = uStack_11c;
    uStack_80 = local_118;
    FWeakObjectPtr::operator=(local_120,*(undefined8 *)(param_2 + 0x118));
    uVar7 = UBlendableInterface::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar7);
    if (plVar8 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar8 + 0x28))(plVar8);
      *(undefined4 *)(param_1 + 0x150) = uVar6;
      uVar4 = (**(code **)(*plVar8 + 0x30))(plVar8);
      *(undefined1 *)(param_1 + 0x1e5) = uVar4;
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x38))(plVar8,local_e0);
      *(undefined8 *)(param_1 + 0x1e8) = *puVar9;
    }
    local_78 = *(undefined1 (*) [16])(param_2 + 0x220);
    plVar8 = (longlong *)(param_1 + 0x158);
    auVar2._12_4_ = 0;
    auVar2._0_12_ = local_78._0_12_;
    *(undefined1 (*) [16])(param_1 + 0x130) = auVar2;
    FUN_1412bdc80(plVar8,0);
    lVar10 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(param_2 + 0x710) != 0)) {
      uVar7 = UUserObjectListEntry::GetPrivateStaticClass();
      cVar5 = UClass::ImplementsInterface
                        (*(undefined8 *)(*(longlong *)(param_2 + 0x710) + 0x10),uVar7);
      if (cVar5 != '\0') {
        local_178 = (undefined8 *)0x0;
        local_170 = 0;
        FUN_142f78f60(*(undefined8 *)(param_2 + 0x710),&local_178);
        uVar14 = (ulonglong)(int)local_170;
        puVar9 = local_178 + uVar14 * 6;
        if (local_178 != puVar9) {
          puVar17 = local_178 + 1;
          do {
            cVar5 = FUN_142f63b20(puVar17 + -1,0);
            if ((cVar5 != '\0') && (lVar10 = FUN_142f5f490(puVar17 + -1), lVar10 != 0)) {
              local_e8 = puVar17[4];
              local_ec = *(undefined4 *)((longlong)puVar17 + 0x1c);
              local_108 = *puVar17;
              local_f0 = *(undefined4 *)(puVar17 + 3);
              local_100 = *(undefined4 *)(puVar17 + 1);
              uStack_fc = *(undefined4 *)((longlong)puVar17 + 0xc);
              uStack_f8 = *(undefined4 *)(puVar17 + 2);
              uStack_f4 = *(undefined4 *)((longlong)puVar17 + 0x14);
              local_110 = &DAT_1441d2800;
              local_b8 = local_108;
              local_a0 = local_f0;
              local_9c = local_ec;
              local_98 = local_e8;
              lVar10 = FUN_1412afa80(plVar8);
              if (lVar10 == 0) {
                iVar16 = *(int *)(param_1 + 0x160);
                *(int *)(param_1 + 0x160) = iVar16 + 1;
                if (*(int *)(param_1 + 0x164) < iVar16 + 1) {
                  TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar8);
                }
                lVar10 = *plVar8;
                lVar20 = (longlong)iVar16 * 0x50;
                _guard_xfg_dispatch_icall_nop((void *)(lVar10 + lVar20),0,0x50);
                FUN_140aecb80((void *)(lVar10 + lVar20));
                if (-1 < iVar16) {
                  (**(code **)(*(longlong *)(*plVar8 + lVar20) + 8))();
                  cVar5 = FUN_142f63b20(*plVar8 + lVar20,0);
                  if (cVar5 == '\0') {
                    FUN_140cc9910(plVar8,iVar16,1,1);
                  }
                }
              }
            }
            puVar1 = puVar17 + 5;
            puVar17 = puVar17 + 6;
          } while (puVar1 != puVar9);
          uVar14 = local_170 & 0xffffffff;
        }
        uVar13 = (uint)uVar14;
        puVar9 = local_178;
        while (uVar13 != 0) {
          *puVar9 = &PTR_FUN_1441d26b8;
          puVar9 = puVar9 + 6;
          uVar13 = (int)uVar14 - 1;
          uVar14 = (ulonglong)uVar13;
        }
        if (local_178 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
    }
    plVar8 = (longlong *)(param_1 + 0x1d0);
    iVar16 = *(int *)(param_1 + 0x1d8);
    if (iVar16 != 0) {
      plVar15 = (longlong *)(*plVar8 + 0x18);
      do {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 5;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    uVar14 = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (*(int *)(param_1 + 0x1dc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (plVar8,0);
    }
    lVar10 = FUN_142f71e20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar7 = UNativeUserListEntry::GetPrivateStaticClass();
      lVar10 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar7);
      if (lVar10 != 0) {
        local_140 = (longlong *)0x0;
        local_138 = 0;
        FUN_142f78e20(param_2,&local_140);
        uVar19 = (ulonglong)((longlong)(local_140 + (int)local_138) + (7 - (longlong)local_140)) >>
                 3;
        if (local_140 + (int)local_138 < local_140) {
          uVar19 = uVar14;
        }
        plVar15 = local_140;
        local_128 = uVar19;
        if (uVar19 != 0) {
          do {
            lVar18 = 0;
            lVar10 = *plVar15;
            lVar20 = lVar18;
            if (lVar10 != 0) {
              lVar11 = FUN_142f71d80();
              lVar12 = lVar10;
              do {
                lVar20 = lVar10;
                if (lVar12 == lVar11) break;
                lVar12 = *(longlong *)(lVar12 + 0x30);
                lVar20 = lVar18;
              } while (lVar12 != 0);
            }
            if (lVar20 != 0) {
              lVar20 = lVar18;
              if (lVar10 != 0) {
                lVar11 = FUN_142f71d80();
                lVar12 = lVar10;
                do {
                  lVar20 = lVar10;
                  if (lVar12 == lVar11) break;
                  lVar12 = *(longlong *)(lVar12 + 0x30);
                  lVar20 = lVar18;
                } while (lVar12 != 0);
              }
              local_158 = 0;
              local_150 = 0;
              local_148 = 0;
              local_168 = 0xffffffff;
              local_164 = 0;
              if (lVar20 == 0) {
                local_158 = 0;
              }
              else {
                uVar7 = FSoftObjectPath::FSoftObjectPath(local_68,lVar20);
                FSoftObjectPath::operator=(&local_158,uVar7);
                FWeakObjectPtr::operator=(&local_168,lVar20);
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_164 = CONCAT44(DAT_1464b56f4,(undefined4)local_164);
              }
              lVar10 = *plVar8;
              iVar16 = *(int *)(param_1 + 0x1d8);
              for (lVar20 = lVar10; lVar20 != lVar10 + (longlong)iVar16 * 0x28;
                  lVar20 = lVar20 + 0x28) {
                cVar5 = FSoftObjectPath::operator==(lVar20 + 0x10,&local_158);
                if (cVar5 != '\0') {
                  if ((int)((lVar20 - lVar10) / 0x28) != -1) goto LAB_1412b30c2;
                  break;
                }
              }
              iVar16 = *(int *)(param_1 + 0x1d8);
              lVar10 = (longlong)iVar16;
              *(int *)(param_1 + 0x1d8) = iVar16 + 1;
              if (*(int *)(param_1 + 0x1dc) < iVar16 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar16);
              }
              lVar18 = *plVar8;
              lVar20 = lVar18 + lVar10 * 0x28;
              *(undefined8 *)(lVar20 + 0x18) = 0;
              *(undefined4 *)(lVar20 + 0x24) = 0;
              *(undefined4 *)(lVar18 + lVar10 * 0x28) = 0xffffffff;
              *(undefined4 *)(lVar18 + 4 + lVar10 * 0x28) = 0;
              *(undefined8 *)(lVar20 + 0x10) = 0;
              local_130 = 0;
              *(undefined4 *)(lVar20 + 0x20) = 0;
              if (0x7fffffff < *(uint *)(lVar20 + 0x24)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar20 + 0x18,0);
              }
              if (*(undefined2 **)(lVar20 + 0x18) != (undefined2 *)0x0) {
                **(undefined2 **)(lVar20 + 0x18) = 0;
              }
              *(undefined4 *)(lVar18 + 8 + lVar10 * 0x28) = 0;
              *(undefined4 *)(lVar18 + lVar10 * 0x28) = local_168;
              *(undefined4 *)(lVar18 + 4 + lVar10 * 0x28) = (undefined4)local_164;
              *(undefined4 *)(lVar18 + 8 + lVar10 * 0x28) = local_164._4_4_;
              local_d8 = local_158;
              FString::FString(local_d0,&local_150);
              FSoftObjectPath::operator=(lVar20 + 0x10);
              uVar19 = local_128;
LAB_1412b30c2:
              if (local_150 != 0) {
                FMemory::Free();
              }
            }
            plVar15 = plVar15 + 1;
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar19);
        }
        if (local_140 != (longlong *)0x0) {
          FMemory::Free(local_140);
        }
      }
    }
    uVar6 = 0;
    lVar10 = FUN_142e017e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (*(char *)(param_2 + 0x70c) != '\0') {
        uVar6 = (undefined4)(longlong)*(float *)(param_2 + 0x704);
      }
      *(undefined4 *)(param_1 + 0x25c) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 0x774);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x76c);
      *(undefined8 *)(param_1 + 0x30) = uVar7;
    }
  }
  *(undefined2 *)(param_1 + 0x9b) = 0x101;
  return param_1;
}



// FUNCTION 1412b31b0 FUN_1412b31b0 body=101 status=ok
// SIG undefined FUN_1412b31b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1412b31b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [624];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if (param_2 == 0) {
    uVar1 = FUN_140f9f650(local_288);
    FUN_1412b1e40(param_1,uVar1);
    FUN_140fa04a0(local_288);
  }
  else {
    FUN_1412b1e40();
  }
  return param_1;
}



// FUNCTION 1412b3220 FUN_1412b3220 body=702 status=ok
// SIG undefined FUN_1412b3220(void)

undefined4 * FUN_1412b3220(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (param_2 == 0) {
    return param_1;
  }
  plVar2 = (longlong *)(param_2 + 0x180);
  lVar7 = *plVar2;
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0xd1) == '\x02') {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x200);
      if (plVar6 == (longlong *)0x0) {
LAB_1412b337c:
        lVar7 = *plVar2;
        goto LAB_1412b3389;
      }
      lVar7 = FUN_1413ffe00();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1412b337c;
      lVar7 = (**(code **)(*plVar6 + 0x680))(plVar6);
      if (lVar7 != 0) {
        FText::FText(local_20);
        uVar8 = FUN_14270d290(lVar7,local_48);
        uVar8 = FText::FromString(local_38,uVar8);
        FText::operator=(param_1 + 0x16,uVar8);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_30 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_18 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_18)(local_18);
            LOCK();
            piVar1 = (int *)((longlong)local_18 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_18 + 8))(local_18,1);
            }
          }
        }
      }
    }
    else {
LAB_1412b3389:
      FText::operator=(param_1 + 0x16,lVar7 + 0x30);
    }
    FText::operator=(param_1 + 0x1c,*plVar2 + 0x60);
    FString::operator=(param_1 + 0x22,*plVar2 + 0xb0);
  }
  *param_1 = *(undefined4 *)(param_2 + 0x200);
  param_1[1] = *(undefined4 *)(param_2 + 0x204);
  uVar8 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0xc) = uVar8;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0x1ec);
  param_1[0x10] = *(undefined4 *)(param_2 + 500);
  FUN_14128c120(param_1 + 0x28,plVar2);
  lVar7 = *(longlong *)(param_2 + 0x118);
  if (lVar7 != 0) {
    uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
    if ((plVar6 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x3e) == 0)) {
      uVar8 = (**(code **)(*plVar6 + 0x20))(plVar6);
      *(undefined8 *)(param_1 + 0x3e) = uVar8;
    }
  }
  cVar5 = '\0';
  if (*plVar2 != 0) {
    cVar5 = *(char *)(*plVar2 + 0xd1);
  }
  *(char *)((longlong)param_1 + 0x9d) = cVar5;
  if (cVar5 != '\x03') goto LAB_1412b34b8;
  if (*(longlong *)(param_2 + 0x118) == 0) {
LAB_1412b34b2:
    lVar7 = 0;
  }
  else {
    uVar8 = FUN_142e017e0();
    lVar7 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_2 + 0x118),uVar8);
    if (lVar7 == 0) goto LAB_1412b34b2;
    lVar9 = FUN_142e017e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1412b34b2;
  }
  *(longlong *)(param_1 + 0x14) = lVar7;
LAB_1412b34b8:
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined2 *)((longlong)param_1 + 0x9b) = 1;
  return param_1;
}



// FUNCTION 1412b34e0 FUN_1412b34e0 body=139 status=ok
// SIG undefined FUN_1412b34e0(void)

undefined8 FUN_1412b34e0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x28) != 0 || *(int *)(param_1 + 0x2c) != 0) ||
      *(int *)(param_1 + 0x30) != 0) || *(int *)(param_1 + 0x34) != 0) {
    if ((((*(int *)(param_2 + 0x28) != 0 || *(int *)(param_2 + 0x2c) != 0) ||
         *(int *)(param_2 + 0x30) != 0) || *(int *)(param_2 + 0x34) != 0) &&
       (((*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x28) &&
         *(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x2c)) &&
        *(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x30)) &&
        *(int *)(param_2 + 0x34) == *(int *)(param_1 + 0x34))) {
      return 1;
    }
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1,param_2),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1412b3570 FUN_1412b3570 body=32 status=ok
// SIG undefined FUN_1412b3570(void)

undefined1 FUN_1412b3570(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_1412b34e0();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1412b3590 FUN_1412b3590 body=607 status=ok
// SIG undefined FUN_1412b3590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b3590(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,float *param_7)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar6 = *param_5;
  lVar7 = (longlong)(int)param_5[1] * 0x270 + lVar6;
  if (lVar6 != lVar7) {
    lVar6 = lVar6 + 0x18;
    do {
      cVar1 = FUN_140bf9690(0,lVar6);
      if (cVar1 != '\0') {
        lVar3 = *param_1;
        if (*(char *)(lVar3 + 0xd20) == '\0') {
          plVar2 = (longlong *)FWeakObjectPtr::Get(lVar6);
          (**(code **)(*plVar2 + 0x720))(plVar2,param_2);
          lVar3 = *param_1;
        }
        if (*(longlong *)(lVar3 + 0x118) != 0) {
          FUN_14145f370();
        }
        if (*(char *)(lVar6 + 0x84) != '\0') {
          lVar3 = FWeakObjectPtr::Get(lVar6);
          cVar1 = FUN_1412a2ac0(lVar3 + 0x4d0,*param_1);
          if (((cVar1 != '\0') && (lVar3 = FWeakObjectPtr::Get(), *(char *)(lVar3 + 0x598) != '\0'))
             && (lVar3 = FWeakObjectPtr::Get(), *(char *)(lVar3 + 0x599) == '\0')) {
            local_68 = *param_4;
            local_60 = *(undefined4 *)(param_4 + 1);
            local_78 = *param_3;
            local_70 = *(undefined4 *)(param_3 + 1);
            lVar3 = FWeakObjectPtr::Get(lVar6);
            lVar3 = *(longlong *)(lVar3 + 0x168);
            if (lVar3 == 0) {
              local_84 = DAT_1468b5d98;
              puVar4 = &local_8c;
              local_8c = _DAT_1468b5d90;
            }
            else {
              puVar4 = (undefined8 *)&local_98;
              local_98 = *(undefined4 *)(lVar3 + 0x220);
              local_90 = *(undefined4 *)(lVar3 + 0x228);
              uStack_94 = *(undefined4 *)(lVar3 + 0x224);
            }
            local_58 = *puVar4;
            local_50 = *(undefined4 *)(puVar4 + 1);
            fVar8 = (float)FMath::PointDistToLine(&local_58,&local_68,&local_78);
            if (fVar8 < *param_7 || fVar8 == *param_7) {
              uVar5 = FWeakObjectPtr::Get();
              *param_6 = uVar5;
              *param_7 = fVar8;
            }
          }
        }
      }
      if ((*(char *)(*param_1 + 0xd20) == '\0') && (lVar3 = *(longlong *)(lVar6 + -8), lVar3 != 0))
      {
        uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar5);
        if ((plVar2 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x50))(), cVar1 != '\0'))
        {
          (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
        }
      }
      lVar3 = lVar6 + 600;
      lVar6 = lVar6 + 0x270;
    } while (lVar3 != lVar7);
  }
  return;
}



// FUNCTION 1412b37f0 FUN_1412b37f0 body=186 status=ok
// SIG undefined FUN_1412b37f0(void)

void FUN_1412b37f0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = FUN_1412afd80(param_3);
  if ((iVar2 < 0) || ((int)param_3[1] <= iVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar3 = *param_1;
  lVar5 = (longlong)iVar2 * 0x270 + *param_3;
  if (*(char *)(lVar3 + 0x640) == '\0') goto LAB_1412b3892;
  lVar3 = FWeakObjectPtr::Get(lVar5 + 0x18);
  if (lVar3 == 0) {
LAB_1412b387f:
    lVar3 = 0;
  }
  else {
    lVar4 = UCheckBoxWidgetStyle::StaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412b387f;
  }
  FUN_1414f9330(*param_1,lVar3,lVar5);
  lVar3 = *param_1;
LAB_1412b3892:
  FUN_1412d2bb0(lVar5,lVar3);
  return;
}



// FUNCTION 1412b38b0 FUN_1412b38b0 body=921 status=ok
// SIG undefined FUN_1412b38b0(void)

longlong FUN_1412b38b0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                      undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong local_res8;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  lVar10 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  cVar3 = FUN_140bf9690(0,param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  cVar3 = FUN_1412af5d0(param_3,param_2);
  if (cVar3 != '\0') {
    return 0;
  }
  lVar5 = lVar10;
  if (param_4 != 0) {
    local_38 = 0;
    local_40 = 0;
    local_30 = 0;
    lVar5 = 1;
    local_res8 = 0;
    cVar3 = FSoftObjectPath::operator==(&local_40,param_4 + 0x118);
    if (cVar3 == '\0') {
      bVar2 = true;
      goto LAB_1412b3950;
    }
  }
  bVar2 = false;
LAB_1412b3950:
  if ((lVar5 != 0) && (local_38 != 0)) {
    FMemory::Free();
  }
  if (bVar2) {
    lVar5 = param_4 + 0x108;
    lVar4 = FWeakObjectPtr::Get(lVar5);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if (DAT_1464b56f4 == *(int *)(param_4 + 0x110)) {
        return 0;
      }
      if (*(longlong *)(param_4 + 0x118) == 0) {
        return 0;
      }
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_4 + 0x110) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar5);
      if (lVar4 == 0) {
        return 0;
      }
    }
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = FUN_1429f11d0();
      lVar5 = lVar4;
      do {
        if (lVar5 == lVar6) goto LAB_1412b3a87;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x270);
  lVar4 = lVar10;
  if (*(longlong *)(lVar5 + 0x6d8) != 0) {
    lVar7 = FUN_1429f11d0();
    lVar5 = *(longlong *)(lVar5 + 0x6d8);
    for (lVar6 = lVar5; (lVar4 = lVar10, lVar6 != 0 && (lVar4 = lVar5, lVar6 != lVar7));
        lVar6 = *(longlong *)(lVar6 + 0x30)) {
    }
  }
LAB_1412b3a87:
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = FUN_1412ccff0(*(undefined8 *)(param_1 + 0x270),lVar4);
  if ((lVar5 == 0) &&
     (lVar5 = NewObject<USaveGame>(*(undefined8 *)(param_1 + 0x270),lVar4,0,0,0,0,0), lVar5 == 0)) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x270);
  if (*(longlong *)(lVar5 + 400) != *(longlong *)(lVar4 + 0x720)) {
    local_res8 = CONCAT44(local_res8._4_4_,0x1000000);
    FUN_142382f60(lVar5,*(longlong *)(lVar4 + 0x720),&local_res8,0);
    lVar4 = *(longlong *)(param_1 + 0x270);
  }
  lVar6 = *(longlong *)(lVar4 + 0x948);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x328) != '\0')) {
    if ((*(char *)(lVar4 + 0x5a8) != '\0') && (*(char *)(param_1 + 0x9c) != '\0')) {
      lVar6 = *(longlong *)(lVar4 + 0x940);
    }
    lVar4 = UMovieSceneSection::GetChannelProxy(lVar5);
    if (lVar4 != lVar6) {
      lVar4 = *(longlong *)(param_1 + 0x270);
      if ((*(char *)(lVar4 + 0x5a8) == '\0') || (*(char *)(param_1 + 0x9c) == '\0')) {
        uVar8 = *(undefined8 *)(lVar4 + 0x948);
      }
      else {
        uVar8 = *(undefined8 *)(lVar4 + 0x940);
      }
      FUN_1412d0b30(lVar5,uVar8);
    }
  }
  uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar8);
  if (plVar9 != (longlong *)0x0) {
    if ((param_4 != 0) && (0.0 < *(float *)(param_4 + 0x13c))) {
      (**(code **)(*plVar9 + 0x28))(plVar9);
    }
    (**(code **)(*plVar9 + 0x40))(plVar9,param_5);
    if (param_4 != 0) {
      lVar10 = *(longlong *)(param_4 + 0xa8);
    }
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar10);
    uVar8 = FWeakObjectPtr::Get(param_1);
    (**(code **)(*plVar9 + 0x38))(plVar9,uVar8);
  }
  FUN_14234b150(lVar5);
  *(longlong *)(param_2 + 0x10) = lVar5;
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::ResizeGrow
              (param_3,iVar1);
  }
  FUN_1412b0b60((longlong)iVar1 * 0x270 + *param_3,param_2);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x30))(plVar9);
    return lVar5;
  }
  return lVar5;
}



// FUNCTION 1412b3c50 FUN_1412b3c50 body=664 status=ok
// SIG undefined FUN_1412b3c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1412b3c50(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  cVar10 = FUN_1412af5d0(param_3);
  if (((cVar10 == '\0') && (lVar13 = *param_1, lVar13 != 0)) && (*(longlong *)(lVar13 + 0x100) != 0)
     ) {
    lVar12 = AGPingUsable::GetPrivateStaticClass();
    for (lVar15 = *(longlong *)(lVar13 + 0x100); lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30))
    {
      if (lVar15 == lVar12) {
        if (*(longlong *)(lVar13 + 0x100) == 0) {
          return 0;
        }
        lVar13 = *(longlong *)(*param_1 + 0x100);
        if (lVar13 == 0) {
          return 0;
        }
        lVar12 = AGPingUsable::GetPrivateStaticClass();
        lVar15 = lVar13;
        while (lVar15 != lVar12) {
          lVar15 = *(longlong *)(lVar15 + 0x30);
          if (lVar15 == 0) {
            return 0;
          }
        }
        if (lVar13 == 0) {
          return 0;
        }
        lVar13 = FUN_1412d3a00(*(undefined8 *)(param_1[1] + 0x720),param_2,param_4);
        if (lVar13 != 0) {
          if (*(longlong *)(lVar13 + 0x530) != 0) {
            param_4 = *(longlong *)(lVar13 + 0x530);
          }
          if (param_4 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined8 *)(param_4 + 0xa8);
          }
          *(undefined8 *)(lVar13 + 0x4b0) = uVar14;
          *(longlong *)(lVar13 + 0x4d0) = param_4;
          cVar10 = FUN_140bf9690(0,param_1 + 2);
          if (cVar10 == '\0') {
            uVar22 = *(undefined4 *)(param_2 + 0x40);
            uVar21 = *(undefined4 *)(param_2 + 0x3c);
            uVar20 = *(undefined4 *)(param_2 + 0x38);
            uVar23 = 0;
          }
          else {
            lVar15 = FWeakObjectPtr::Get(param_1 + 2);
            uVar9 = uRam000000014687834c;
            lVar15 = *(longlong *)(lVar15 + 0x168);
            if (lVar15 == 0) {
              uVar20 = 0;
              uVar21 = 0;
              uVar22 = 0;
              uVar23 = 0;
              uVar16 = _DAT_146878340 & _DAT_146878350;
              uVar17 = uRam0000000146878344 & uRam0000000146878354;
              uVar18 = uRam0000000146878348 & uRam0000000146878358;
              uVar19 = uRam000000014687834c & uRam000000014687835c;
              *(undefined4 *)(lVar13 + 0x4f0) = 0;
              *(undefined4 *)(lVar13 + 0x4f4) = 0;
              *(undefined4 *)(lVar13 + 0x4f8) = 0;
              *(uint *)(lVar13 + 0x4fc) = uVar9;
              *(uint *)(lVar13 + 0x510) = uVar16;
              *(uint *)(lVar13 + 0x514) = uVar17;
              *(uint *)(lVar13 + 0x518) = uVar18;
              *(uint *)(lVar13 + 0x51c) = uVar19;
            }
            else {
              uVar2 = *(undefined4 *)(lVar15 + 0x214);
              uVar3 = *(undefined4 *)(lVar15 + 0x218);
              uVar4 = *(undefined4 *)(lVar15 + 0x21c);
              uVar5 = *(undefined4 *)(lVar15 + 0x230);
              uVar6 = *(undefined4 *)(lVar15 + 0x234);
              uVar7 = *(undefined4 *)(lVar15 + 0x238);
              uVar8 = *(undefined4 *)(lVar15 + 0x23c);
              uVar20 = *(undefined4 *)(lVar15 + 0x220);
              uVar21 = *(undefined4 *)(lVar15 + 0x224);
              uVar22 = *(undefined4 *)(lVar15 + 0x228);
              uVar23 = *(undefined4 *)(lVar15 + 0x22c);
              *(undefined4 *)(lVar13 + 0x4f0) = *(undefined4 *)(lVar15 + 0x210);
              *(undefined4 *)(lVar13 + 0x4f4) = uVar2;
              *(undefined4 *)(lVar13 + 0x4f8) = uVar3;
              *(undefined4 *)(lVar13 + 0x4fc) = uVar4;
              *(undefined4 *)(lVar13 + 0x510) = uVar5;
              *(undefined4 *)(lVar13 + 0x514) = uVar6;
              *(undefined4 *)(lVar13 + 0x518) = uVar7;
              *(undefined4 *)(lVar13 + 0x51c) = uVar8;
            }
          }
          *(undefined4 *)(lVar13 + 0x500) = uVar20;
          *(undefined4 *)(lVar13 + 0x504) = uVar21;
          *(undefined4 *)(lVar13 + 0x508) = uVar22;
          *(undefined4 *)(lVar13 + 0x50c) = uVar23;
          FWeakObjectPtr::operator=(param_2 + 0x18,lVar13);
          if ((param_4 == 0) || (*(char *)(param_4 + 0x130) == '\0')) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          *(undefined1 *)(param_2 + 0x9b) = uVar11;
          if ((param_4 == 0) || (*(char *)(param_4 + 0x131) == '\0')) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          *(undefined1 *)(param_2 + 0x9c) = uVar11;
          iVar1 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
            ResizeGrow(param_3,iVar1);
          }
          FUN_1412b0b60((longlong)iVar1 * 0x270 + *param_3,param_2);
          if (((((*(char *)(param_2 + 0x98) == '\0') || (*(char *)(param_2 + 0x99) != '\0')) ||
               (cVar10 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                   (param_1[1] + 0x754,param_1[1] + 0x788), cVar10 != '\0')) &&
              (*(char *)(lVar13 + 0x598) != '\0')) &&
             (((lVar15 = param_1[1], *(char *)(lVar15 + 0x5aa) != '\0' &&
               (*(char *)(param_2 + 0x9b) != '\0')) ||
              ((*(char *)(lVar15 + 0x5a8) != '\0' && (*(char *)(param_2 + 0x9c) != '\0')))))) {
            uVar14 = 1;
          }
          else {
            lVar15 = param_1[1];
            uVar14 = 0;
          }
          FUN_1412cf480(lVar15,lVar13,uVar14,*(undefined1 *)(lVar15 + 0x5a8));
          FUN_1414f5b10(lVar13);
        }
        return lVar13;
      }
    }
  }
  return 0;
}



// FUNCTION 1412b3ef0 FUN_1412b3ef0 body=614 status=ok
// SIG undefined FUN_1412b3ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b3ef0(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar8 = *param_3;
  lVar10 = (longlong)(int)param_3[1] * 0x270 + lVar8;
  if (lVar8 != lVar10) {
    lVar9 = lVar8 + 0x18;
    do {
      cVar1 = FUN_140bf9690(0,lVar9);
      if ((cVar1 != '\0') && (*(char *)(*param_1 + 0xd20) == '\0')) {
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar9);
        (**(code **)(*plVar3 + 0x720))(plVar3,param_2);
        plVar3 = (longlong *)FWeakObjectPtr::Get();
        if ((*(char *)((longlong)plVar3 + 0x58c) != '\0') && (plVar3[0x93] != 0)) {
          if (plVar3[0xb4] == 0) {
            uVar4 = FUN_1429bed90();
            lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
            plVar3[0xb4] = lVar5;
          }
          cVar1 = FUN_140bf9690(0,plVar3 + 0xb2);
          if (cVar1 == '\0') {
            lVar5 = plVar3[0x2d];
            if (lVar5 == 0) {
              local_40 = DAT_1468b5d98;
              puVar6 = &local_48;
              local_48 = _DAT_1468b5d90;
            }
            else {
              puVar6 = (undefined8 *)&local_7c;
              local_7c = *(undefined4 *)(lVar5 + 0x220);
              local_74 = *(undefined4 *)(lVar5 + 0x228);
              uStack_78 = *(undefined4 *)(lVar5 + 0x224);
            }
            local_38 = *puVar6;
            puVar7 = &local_38;
            local_30 = *(undefined4 *)(puVar6 + 1);
          }
          else {
            lVar5 = FWeakObjectPtr::Get(plVar3 + 0xb2);
            lVar5 = *(longlong *)(lVar5 + 0x168);
            if (lVar5 == 0) {
              local_68 = DAT_1468b5d98;
              puVar6 = &local_70;
              local_70 = _DAT_1468b5d90;
            }
            else {
              puVar6 = (undefined8 *)&local_88;
              local_88 = *(undefined4 *)(lVar5 + 0x220);
              local_80 = *(undefined4 *)(lVar5 + 0x228);
              uStack_84 = *(undefined4 *)(lVar5 + 0x224);
            }
            local_58 = *puVar6;
            puVar7 = &local_58;
            local_50 = *(undefined4 *)(puVar6 + 1);
          }
          bVar2 = FUN_1412c7bb0(plVar3[0x93],puVar7);
          if (plVar3[0xb4] != 0) {
            FUN_1423988d0(plVar3[0xb4],bVar2 + 1);
          }
        }
      }
      lVar5 = *(longlong *)(lVar9 + -8);
      if (lVar5 != 0) {
        uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
        if ((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 0x50))(), cVar1 != '\0'))
        {
          (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
          (**(code **)(*plVar3 + 0x60))();
        }
      }
      lVar8 = lVar8 + 0x270;
      lVar9 = lVar9 + 0x270;
    } while (lVar8 != lVar10);
  }
  return;
}



// FUNCTION 1412b4160 FUN_1412b4160 body=174 status=ok
// SIG undefined FUN_1412b4160(void)

undefined4 FUN_1412b4160(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_1412afd80(param_3);
  if ((iVar2 < 0) || ((int)param_3[1] <= iVar2)) {
    return 0;
  }
  lVar3 = (longlong)iVar2 * 0x270 + *param_3;
  cVar1 = FUN_140bf9670(0,*param_1 + 0x978);
  if (cVar1 == '\0') {
    cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                      (lVar3 + 0x18,*param_1 + 0x978);
    if (cVar1 == '\0') goto LAB_1412b41d0;
  }
  FUN_1412d2bb0(lVar3,*param_1);
LAB_1412b41d0:
  FUN_140fd51c0(param_3,iVar2,1,1);
  return 1;
}



// FUNCTION 1412b4210 FUN_1412b4210 body=336 status=ok
// SIG undefined FUN_1412b4210(void)

void FUN_1412b4210(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar5 = *param_2;
  lVar7 = (longlong)(int)param_2[1] * 0x270 + lVar5;
  if (lVar5 != lVar7) {
    lVar4 = lVar5 + 0x18;
    do {
      cVar1 = FUN_140bf9690(0,lVar4);
      if (cVar1 != '\0') {
        if (((param_3 == '\0') ||
            (lVar2 = FWeakObjectPtr::Get(lVar4), *(char *)(lVar2 + 0x598) == '\0')) ||
           (((*(char *)(*param_1 + 0x5aa) == '\0' || (*(char *)(lVar4 + 0x83) == '\0')) &&
            ((*(char *)(*param_1 + 0x5a8) == '\0' || (*(char *)(lVar4 + 0x84) == '\0')))))) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        uVar3 = FWeakObjectPtr::Get(lVar4);
        FUN_1412cf480(*param_1,uVar3,uVar6,*(undefined1 *)(*param_1 + 0x5a8));
      }
      if (*(longlong *)(lVar4 + -8) != 0) {
        if (((param_3 == '\0') ||
            ((cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                (*param_1 + 0x754,*param_1 + 0x788), cVar1 == '\0' &&
             (cVar1 = FUN_140bf9690(0,lVar4), cVar1 == '\0')))) ||
           (((lVar2 = *param_1, *(char *)(lVar2 + 0x5aa) == '\0' ||
             (*(char *)(lVar4 + 0x83) == '\0')) &&
            ((*(char *)(lVar2 + 0x5a8) == '\0' || (*(char *)(lVar4 + 0x84) == '\0')))))) {
          lVar2 = *param_1;
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
        FUN_1412cf680(lVar2,*(undefined8 *)(lVar4 + -8),uVar6);
      }
      lVar5 = lVar5 + 0x270;
      lVar4 = lVar4 + 0x270;
    } while (lVar5 != lVar7);
  }
  return;
}



// FUNCTION 1412b4360 FUN_1412b4360 body=642 status=ok
// SIG undefined FUN_1412b4360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b4360(longlong *param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  float local_78;
  longlong local_68;
  float local_60;
  
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x270 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x270) {
    cVar2 = FWeakObjectPtr::IsValid(lVar7 + 0x18);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(lVar7 + 0x18);
      if (*(char *)(lVar3 + 0x59a) == '\0') {
        if (((*(char *)(*param_1 + 0x5a9) == '\0') && (*(char *)(lVar7 + 600) != '\0')) &&
           ((*(char *)(*param_1 + 0x5aa) == '\0' ||
            (cVar2 = FUN_140cb9b10(param_1[1],lVar7 + 0x28), cVar2 == '\x04')))) {
          lVar3 = FWeakObjectPtr::Get(lVar7 + 0x18);
          uVar9 = *(undefined4 *)(lVar3 + 0x578);
        }
        else {
          uVar9 = 0x3f800000;
        }
        lVar3 = FWeakObjectPtr::Get(lVar7 + 0x18);
        if ((*(longlong *)(lVar3 + 0x538) != 0) && (*(longlong *)(lVar3 + 0x570) != 0)) {
          FUN_1425a2750(*(longlong *)(lVar3 + 0x538),*(undefined8 *)(lVar3 + 0x570),uVar9);
        }
      }
      else {
        if (*(char *)(lVar7 + 0x1e5) != '\0') {
          lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x220);
          fVar1 = *(float *)(*(longlong *)(lVar7 + 0x10) + 0x228);
          if (((*(longlong **)(*param_1 + 0x118) != (longlong *)0x0) &&
              (lVar4 = (**(code **)(**(longlong **)(*param_1 + 0x118) + 0x678))(), lVar4 != 0)) &&
             (*(longlong *)(lVar7 + 0x10) != 0)) {
            lVar4 = *(longlong *)(lVar4 + 0x168);
            if (lVar4 == 0) {
              local_84 = DAT_1468b5d98;
              puVar5 = &local_8c;
              local_8c = _DAT_1468b5d90;
            }
            else {
              local_98 = *(undefined4 *)(lVar4 + 0x220);
              local_94 = *(undefined4 *)(lVar4 + 0x224);
              puVar5 = (undefined8 *)&local_98;
              local_90 = *(undefined4 *)(lVar4 + 0x228);
            }
            local_78 = *(float *)(puVar5 + 1);
            if (200.0 < ABS(local_78 - fVar1)) {
              local_68 = lVar3;
              local_60 = local_78;
              FUN_1423990b0(*(longlong *)(lVar7 + 0x10),&local_68,0,0,0);
              FUN_1423424e0(*(undefined8 *)(lVar7 + 0x10));
            }
          }
        }
        plVar6 = (longlong *)FWeakObjectPtr::Get(lVar7 + 0x18);
        (**(code **)(*plVar6 + 0x310))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 1412b45f0 FUN_1412b45f0 body=344 status=ok
// SIG undefined FUN_1412b45f0(void)

longlong FUN_1412b45f0(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 local_20;
  
  cVar4 = FUN_1412af5d0(param_3);
  if (cVar4 == '\0') {
    lVar6 = 0;
    lVar2 = *param_1;
    if (lVar2 != 0) {
      lVar6 = param_1[1];
      lVar3 = *(longlong *)(lVar6 + 0x720);
      FUN_1417846f0(lVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_28 = 0;
      uVar5 = FUN_14149d260();
      lVar6 = FUN_1417985e0(uVar5,lVar6,0,0,0,0,0,0,0);
      if ((lVar3 != 0) && (lVar6 != 0)) {
        local_20 = 0;
        local_28 = CONCAT44(local_28._4_4_,0x1000000);
        FUN_142382f60(lVar6,lVar3,&local_28,0);
        FUN_14234b150(lVar6);
        FUN_1411fb160(lVar6,lVar2,param_2,param_4);
      }
      if (lVar6 != 0) {
        *(longlong *)(param_2 + 8) = lVar6;
      }
    }
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
      ResizeGrow(param_3,iVar1);
    }
    FUN_1412b0b60((longlong)iVar1 * 0x270 + *param_3,param_2);
    return lVar6;
  }
  return 0;
}



// FUNCTION 1412b4750 FUN_1412b4750 body=838 status=ok
// SIG undefined FUN_1412b4750(void)

void FUN_1412b4750(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  longlong *plVar14;
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
  
  if (param_2 != 0) {
    plVar14 = *(longlong **)(param_2 + 0x308);
    plVar3 = plVar14 + *(int *)(param_2 + 0x310);
    if (plVar14 != plVar3) {
      do {
        lVar6 = *plVar14;
        if (lVar6 != 0) {
          plVar2 = (longlong *)(lVar6 + 0x2b0);
          uStack_94 = 1;
          uVar4 = *(uint *)(lVar6 + 0x2d8);
          puVar1 = (uint *)(lVar6 + 0x2c0);
          local_98 = 0;
          uStack_84 = 0;
          iStack_80 = 0;
          if (uVar4 != 0) {
            puVar13 = *(uint **)(lVar6 + 0x2d0);
            if (*(uint **)(lVar6 + 0x2d0) == (uint *)0x0) {
              puVar13 = puVar1;
            }
            uVar5 = *puVar13;
            iStack_80 = 0;
            local_98 = 0;
            while (uVar5 == 0) {
              lVar11 = (longlong)local_98;
              iStack_80 = iStack_80 + 0x20;
              iVar9 = local_98 + 1;
              bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
              local_98 = iVar9;
              if (bVar7) goto LAB_1412b4860;
              uVar5 = puVar13[lVar11 + 1];
            }
            uStack_94 = uVar5 - 1 & uVar5 ^ uVar5;
            iVar9 = 0x1f;
            if (uStack_94 != 0) {
              for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
              }
            }
            if (uStack_94 == 0) {
              iVar9 = 0x20;
            }
            else {
              iVar9 = 0x1f - iVar9;
            }
            uStack_84 = (iStack_80 - iVar9) + 0x1f;
            if ((int)uVar4 < (int)uStack_84) {
LAB_1412b4860:
              uStack_84 = uVar4;
            }
          }
          uVar5 = *(uint *)(lVar6 + 0x2d8);
          uStack_60 = 0xffffffff;
          uStack_5c = uStack_84;
          local_58 = CONCAT44(uStack_7c,iStack_80);
          uStack_48 = CONCAT44(uStack_94,local_98);
          uVar12 = uVar5 & 0xffffffe0;
          iStack_70 = local_98;
          uStack_6c = uStack_94;
          local_68 = puVar1;
          local_50 = plVar2;
          puStack_40 = puVar1;
          uStack_30 = local_58;
          uStack_38 = uStack_60;
          uStack_34 = uStack_5c;
          uStack_84 = uVar5;
          if (uVar5 != uVar4) {
            puVar13 = *(uint **)(lVar6 + 0x2d0);
            if (*(uint **)(lVar6 + 0x2d0) == (uint *)0x0) {
              puVar13 = puVar1;
            }
            uVar10 = puVar13[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
            iVar9 = (int)uVar5 >> 5;
            while (uVar10 == 0) {
              uVar12 = uVar12 + 0x20;
              if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
              goto LAB_1412b493a;
              uVar10 = puVar13[(longlong)iVar9 + 1];
              iVar9 = iVar9 + 1;
            }
            uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
            iVar9 = 0x1f;
            if (uVar10 != 0) {
              for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
              }
            }
            if (uVar10 == 0) {
              iVar9 = 0x20;
            }
            else {
              iVar9 = 0x1f - iVar9;
            }
            uStack_84 = (uVar12 - iVar9) + 0x1f;
            if ((int)uVar4 < (int)uStack_84) {
LAB_1412b493a:
              uStack_84 = uVar4;
            }
          }
          while( true ) {
            if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) break;
            lVar6 = *(longlong *)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
            if (lVar6 != 0) {
              lVar8 = FUN_1428e7a40();
              lVar11 = *(longlong *)(lVar6 + 0x10);
              if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
                  != lVar8 + 0x88)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if ((bVar7) && (lVar11 != 0)) {
                lVar8 = FUN_1429ff0b0();
                for (lVar11 = *(longlong *)(lVar6 + 0x10); lVar11 != 0;
                    lVar11 = *(longlong *)(lVar11 + 0x30)) {
                  if (lVar11 == lVar8) goto LAB_1412b4a32;
                }
                lVar11 = UMovieSceneSection::GetChannelProxy(lVar6);
                if (((lVar11 != 0) &&
                    (lVar11 = UMovieSceneSection::GetChannelProxy(lVar6), lVar11 != 0)) &&
                   (FUN_1423511f0(lVar6,0), (*(byte *)(lVar6 + 0xb8) & 1) != 0)) {
                  FUN_14234cb00(lVar6);
                }
                FUN_1423511f0(lVar6,0);
                if ((*(byte *)(lVar6 + 0xb8) & 1) != 0) {
                  FUN_14234cb00(lVar6);
                }
              }
            }
LAB_1412b4a32:
            uStack_60 = uStack_60 & ~uStack_6c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar3);
    }
  }
  return;
}



// FUNCTION 1412b4aa0 FUN_1412b4aa0 body=397 status=ok
// SIG undefined FUN_1412b4aa0(void)

void FUN_1412b4aa0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = (int)param_2[1] + -1;
  if (-1 < iVar5) {
    lVar4 = (longlong)iVar5 * 0x270;
    lVar8 = lVar4;
    do {
      cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                        (*param_1 + 0x788,*param_1 + 0x754);
      if (cVar1 == '\0') {
        lVar7 = *param_3;
        lVar3 = *param_2 + lVar4;
        lVar6 = (longlong)(int)param_3[1] * 0x70 + lVar7;
        if (lVar7 != lVar6) {
          piVar2 = (int *)(lVar7 + 0x18);
          do {
            if (((*(int *)(lVar3 + 0x34) != 0 || *(int *)(lVar3 + 0x30) != 0) ||
                *(int *)(lVar3 + 0x2c) != 0) || *(int *)(lVar3 + 0x28) != 0) {
              if ((((piVar2[-2] != 0 || piVar2[-1] != 0) || piVar2[1] != 0) || *piVar2 != 0) &&
                 (((piVar2[-2] == *(int *)(lVar3 + 0x28) && piVar2[1] == *(int *)(lVar3 + 0x34)) &&
                  piVar2[-1] == *(int *)(lVar3 + 0x2c)) && *piVar2 == *(int *)(lVar3 + 0x30)))
              goto LAB_1412b4b93;
            }
            lVar7 = lVar7 + 0x70;
            piVar2 = piVar2 + 0x1c;
          } while (lVar7 != lVar6);
        }
LAB_1412b4bc1:
        FUN_1412d2bb0(*param_2 + lVar8,*param_1);
        FUN_140fd51c0(param_2,iVar5,1,1);
      }
      else {
LAB_1412b4b93:
        cVar1 = FUN_140bf9670(0,*param_2 + lVar8);
        if ((cVar1 != '\0') &&
           ((*(longlong *)(*param_2 + 8 + lVar4) == 0 &&
            (cVar1 = FUN_140bf9670(0,*param_2 + 0x18 + lVar8), cVar1 != '\0')))) goto LAB_1412b4bc1;
      }
      lVar8 = lVar8 + -0x270;
      lVar4 = lVar4 + -0x270;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}



// FUNCTION 1412b4c30 FUN_1412b4c30 body=473 status=ok
// SIG undefined FUN_1412b4c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b4c30(longlong *param_1,float *param_2,float param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  float local_28;
  
  lVar5 = *param_4;
  lVar6 = (longlong)(int)param_4[1] * 0x270 + lVar5;
  if (lVar5 != lVar6) {
    lVar5 = lVar5 + 0x18;
    do {
      if (*(longlong *)(*param_1 + 0x118) != 0) {
        FUN_14145f370();
      }
      cVar1 = FUN_140bf9690(0,lVar5);
      if (((cVar1 != '\0') && (lVar2 = FWeakObjectPtr::Get(), *(char *)(lVar2 + 0x598) != '\0')) &&
         (lVar2 = FWeakObjectPtr::Get(), *(char *)(lVar2 + 0x599) != '\0')) {
        lVar2 = FWeakObjectPtr::Get(lVar5);
        lVar2 = *(longlong *)(lVar2 + 0x168);
        if (lVar2 == 0) {
          local_34 = DAT_1468b5d98;
          puVar3 = &local_3c;
          local_3c = _DAT_1468b5d90;
        }
        else {
          puVar3 = (undefined8 *)&local_48;
          local_48 = *(undefined4 *)(lVar2 + 0x220);
          local_40 = *(undefined4 *)(lVar2 + 0x228);
          uStack_44 = *(undefined4 *)(lVar2 + 0x224);
        }
        local_28 = *(float *)(puVar3 + 1);
        fVar9 = (float)((ulonglong)*puVar3 >> 0x20) - param_2[1];
        fVar8 = (float)*puVar3 - *param_2;
        if (fVar9 * fVar9 + fVar8 * fVar8 + (local_28 - param_2[2]) * (local_28 - param_2[2]) <
            param_3) {
          lVar2 = FWeakObjectPtr::Get(lVar5);
          *(undefined1 *)(lVar2 + 0x599) = 0;
          lVar2 = *param_1;
          if (((*(char *)(lVar2 + 0x5aa) == '\0') || (*(char *)(lVar5 + 0x83) == '\0')) &&
             ((*(char *)(lVar2 + 0x5a8) == '\0' ||
              ((*(char *)(lVar2 + 0xd20) != '\0' || (*(char *)(lVar5 + 0x84) == '\0')))))) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          uVar4 = FWeakObjectPtr::Get(lVar5);
          FUN_1412cf480(*param_1,uVar4,uVar7,*(undefined1 *)(*param_1 + 0x5a8));
        }
      }
      lVar2 = lVar5 + 600;
      lVar5 = lVar5 + 0x270;
    } while (lVar2 != lVar6);
  }
  return;
}



// FUNCTION 1412b4ec0 FUN_1412b4ec0 body=52 status=ok
// SIG undefined FUN_1412b4ec0(void)

undefined8 FUN_1412b4ec0(undefined8 param_1,ulonglong param_2)

{
  FUN_1412b1ad0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b0);
  }
  return param_1;
}



// FUNCTION 1412b4f00 FUN_1412b4f00 body=107 status=ok
// SIG undefined FUN_1412b4f00(void)

longlong FUN_1412b4f00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 1412b4f70 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNavigationSystemGunfire::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x478);
  }
  return param_1;
}



// FUNCTION 1412b4fc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UWeapon::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1412b1ad0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5d0);
  }
  return param_1;
}



// FUNCTION 1412b5000 FUN_1412b5000 body=52 status=ok
// SIG undefined FUN_1412b5000(void)

undefined8 FUN_1412b5000(undefined8 param_1,ulonglong param_2)

{
  FUN_1412b1b40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd50);
  }
  return param_1;
}



// FUNCTION 1412b5040 FUN_1412b5040 body=43 status=ok
// SIG undefined FUN_1412b5040(void)

undefined8 * FUN_1412b5040(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14476ab00;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1412b5070 FUN_1412b5070 body=43 status=ok
// SIG undefined FUN_1412b5070(void)

undefined8 * FUN_1412b5070(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14476d4e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1412b50a0 FUN_1412b50a0 body=207 status=ok
// SIG undefined FUN_1412b50a0(void)

longlong FUN_1412b50a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x1f0);
  plVar1 = *(longlong **)(param_1 + 0x1e8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x1e8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 1412b5170 FUN_1412b5170 body=104 status=ok
// SIG undefined FUN_1412b5170(void)

longlong FUN_1412b5170(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 1412b51e0 FUN_1412b51e0 body=181 status=ok
// SIG undefined FUN_1412b51e0(void)

longlong FUN_1412b51e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 1412b52a0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULogoutCallbackProxy::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1412b5300 FUN_1412b5300 body=87 status=ok
// SIG undefined FUN_1412b5300(void)

longlong FUN_1412b5300(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x700) = &PTR_FUN_14476d4e0;
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x780);
  }
  return param_1;
}



// FUNCTION 1412b5360 FUN_1412b5360 body=87 status=ok
// SIG undefined FUN_1412b5360(void)

longlong FUN_1412b5360(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x700) = &PTR_FUN_14476d4e0;
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 1412b53c0 FUN_1412b53c0 body=66 status=ok
// SIG undefined FUN_1412b53c0(void)

longlong FUN_1412b53c0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x7a8) = &PTR_FUN_14476d4e0;
  FUN_1423c53e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x800);
  }
  return param_1;
}



// FUNCTION 1412b5410 FUN_1412b5410 body=3376 status=ok
// SIG undefined FUN_1412b5410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b5410(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined4 uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_478 [32];
  undefined1 local_458;
  byte local_448;
  ulonglong local_440;
  longlong local_438;
  longlong *local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined **local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined8 local_3ec;
  undefined8 local_3e0;
  longlong local_3d8 [2];
  undefined **local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined8 local_390;
  longlong local_388 [2];
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  longlong local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_330;
  undefined8 local_328;
  undefined1 local_320 [16];
  undefined8 local_310;
  undefined1 local_308 [16];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined1 local_2e8 [96];
  longlong *local_288;
  longlong *local_270;
  longlong local_260;
  longlong local_240;
  longlong local_1e0;
  undefined1 local_190 [16];
  undefined1 local_180 [104];
  undefined1 local_118 [32];
  longlong local_f8;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  plVar17 = (longlong *)(param_1 + -0x458);
  local_430 = plVar17;
  cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1 + 0x2fc,param_1 + 0x330);
  if (cVar4 == '\0') goto LAB_1412b60b6;
  bVar5 = *(byte *)(param_1 + 0x8c9);
  local_448 = bVar5;
  cVar4 = FUN_140bf9670(0,param_1 + 0x2fc);
  if (cVar4 == '\0') {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x2fc);
    uVar9 = (**(code **)(*plVar17 + 0x148))(plVar17);
    cVar4 = FUN_1412a2eb0(uVar8,uVar9);
    if (cVar4 != '\0') goto LAB_1412b54c6;
  }
  else {
LAB_1412b54c6:
    FUN_1412b4aa0(&local_430,param_1 + 0x340,param_2);
    FUN_1412b4aa0(&local_430,param_1 + 0x350,param_2);
    lVar18 = *param_2;
    local_368 = (longlong)(int)param_2[1] * 0x70 + lVar18;
    bVar5 = local_448;
    if (lVar18 != local_368) {
LAB_1412b5540:
      lVar20 = *(longlong *)(param_1 + 0x340);
      lVar21 = (longlong)*(int *)(param_1 + 0x348) * 0x270 + lVar20;
      if (lVar20 != lVar21) {
        piVar15 = (int *)(lVar20 + 0x30);
        do {
          if (((piVar15[-2] != 0 || piVar15[-1] != 0) || piVar15[1] != 0) || *piVar15 != 0) {
            if ((((*(int *)(lVar18 + 0x10) != 0 || *(int *)(lVar18 + 0x14) != 0) ||
                 *(int *)(lVar18 + 0x18) != 0) || *(int *)(lVar18 + 0x1c) != 0) &&
               (((*(int *)(lVar18 + 0x10) == piVar15[-2] && *(int *)(lVar18 + 0x14) == piVar15[-1])
                && *(int *)(lVar18 + 0x1c) == piVar15[1]) && *(int *)(lVar18 + 0x18) == *piVar15)) {
              plVar17 = (longlong *)(param_1 + 0x340);
              iVar6 = (int)((lVar20 - *plVar17) / 0x270);
              if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x348))) {
                lVar20 = *plVar17;
                lVar21 = (longlong)iVar6 * 0x270;
                *(undefined8 *)(lVar21 + 0x38 + lVar20) = *(undefined8 *)(lVar18 + 0x28);
                *(undefined4 *)(lVar21 + 0x40 + lVar20) = *(undefined4 *)(lVar18 + 0x30);
                cVar4 = FUN_140bf9670(0);
                if (cVar4 == '\0') goto LAB_1412b5988;
                if (*(longlong *)(param_1 + 400) == 0) goto LAB_1412b597e;
                lVar10 = UCheckBoxWidgetStyle::StaticClass();
                lVar20 = *(longlong *)(param_1 + 400);
                lVar11 = lVar20;
                goto joined_r0x0001412b596b;
              }
              break;
            }
          }
          lVar20 = lVar20 + 0x270;
          piVar15 = piVar15 + 0x9c;
        } while (lVar20 != lVar21);
      }
      plVar17 = (longlong *)(param_1 + 0x350);
      iVar6 = FUN_1412afca0(plVar17,lVar18);
      uVar19 = (ulonglong)iVar6;
      local_440 = CONCAT44(local_440._4_4_,iVar6);
      if ((iVar6 < 0) || (*(int *)(param_1 + 0x358) <= iVar6)) {
        iVar6 = *(int *)(param_1 + 0x358);
        *(int *)(param_1 + 0x358) = iVar6 + 1;
        if (*(int *)(param_1 + 0x35c) < iVar6 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x350,iVar6);
        }
        lVar20 = (longlong)iVar6 * 0x270;
        FUN_140f9f650(*(longlong *)(param_1 + 0x350) + lVar20);
        if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x358))) {
          FUN_1412b1fe0(*plVar17 + lVar20,lVar18);
          lVar21 = *plVar17 + lVar20;
          if ((*(int *)(lVar21 + 0x160) == 0) && (*(int *)(lVar21 + 0x1d8) == 0)) {
            FUN_1412d2bb0(lVar21,param_1 + -0x458);
            FUN_140fd51c0(plVar17,iVar6,1,1);
          }
          else {
            lVar21 = 0;
            if (*(longlong *)(param_1 + 400) != 0) {
              lVar10 = UCheckBoxWidgetStyle::StaticClass();
              for (lVar11 = *(longlong *)(param_1 + 400);
                  (lVar21 = 0, lVar11 != 0 &&
                  (lVar21 = *(longlong *)(param_1 + 400), lVar11 != lVar10));
                  lVar11 = *(longlong *)(lVar11 + 0x30)) {
              }
            }
            *(longlong *)(*plVar17 + 0x20 + lVar20) = lVar21;
            bVar5 = FUN_1412cba50(param_1 + -0x458,*plVar17 + lVar20);
            local_448 = local_448 | bVar5;
          }
        }
      }
      else {
        lVar20 = uVar19 * 0x270;
        cVar4 = FUN_140bf9670();
        if (cVar4 != '\0') {
          lVar21 = *plVar17;
          *(undefined8 *)(lVar20 + 0x38 + lVar21) = *(undefined8 *)(lVar18 + 0x28);
          *(undefined4 *)(lVar20 + 0x40 + lVar21) = *(undefined4 *)(lVar18 + 0x30);
          if (*(longlong *)(param_1 + 400) != 0) {
            lVar10 = UCheckBoxWidgetStyle::StaticClass();
            lVar21 = *(longlong *)(param_1 + 400);
            for (lVar11 = lVar21; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
              if (lVar11 == lVar10) goto LAB_1412b5660;
            }
          }
          lVar21 = 0;
LAB_1412b5660:
          *(longlong *)(lVar20 + 0x20 + *plVar17) = lVar21;
        }
        lVar21 = *plVar17;
        iVar6 = *(int *)(lVar18 + 0x50);
        if (iVar6 < *(int *)(lVar21 + 0x160 + lVar20)) {
          FUN_1412cf380(lVar21 + 0x158 + lVar20,iVar6,1);
          iVar6 = *(int *)(lVar18 + 0x50);
          lVar21 = *plVar17;
        }
        uVar22 = 0;
        if (0 < iVar6) {
          local_438 = 0;
          uVar19 = uVar22;
          do {
            iVar6 = (int)uVar19;
            if ((iVar6 < 0) || (*(int *)(*(longlong *)(param_1 + 0x350) + 0x160 + lVar20) <= iVar6))
            {
              lVar21 = lVar20 + *(longlong *)(param_1 + 0x350);
              iVar2 = *(int *)(lVar21 + 0x160);
              iVar7 = iVar2 + 1;
              *(int *)(lVar21 + 0x160) = iVar7;
              if (*(int *)(lVar21 + 0x164) < iVar7) {
                TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(lVar21 + 0x158);
              }
              plVar17 = (longlong *)((longlong)iVar2 * 0x50 + *(longlong *)(lVar21 + 0x158));
              _guard_xfg_dispatch_icall_nop(plVar17,0,0x50);
              FUN_140aecb80(plVar17);
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
            lVar21 = *(longlong *)(local_438 + *(longlong *)(lVar18 + 0x48));
            cVar4 = FUN_142f63b20();
            if ((cVar4 == '\0') || (lVar11 = FUN_142f5f490(), lVar11 != lVar21)) {
              local_3c8 = &PTR_FUN_144278ac0;
              local_3c0 = 0;
              local_3b8 = 0;
              uStack_3b0 = 0;
              local_3a4 = 0;
              local_388[0] = 0;
              local_388[1] = 0;
              local_39c = 0;
              local_420 = 0;
              local_390 = 0;
              local_3a8 = 0xffffffff;
              local_3a0 = 0xffffffff;
              FUN_142f604c0(&local_3c8,*(undefined8 *)(lVar18 + 0x40),lVar21);
              lVar21 = *(longlong *)(lVar20 + 0x158 + *(longlong *)(param_1 + 0x350));
              *(undefined8 *)(uVar22 + 8 + lVar21) = local_3c0;
              puVar1 = (undefined4 *)(uVar22 + 0x10 + lVar21);
              *puVar1 = (undefined4)local_3b8;
              puVar1[1] = local_3b8._4_4_;
              puVar1[2] = (undefined4)uStack_3b0;
              puVar1[3] = uStack_3b0._4_4_;
              *(undefined4 *)(uVar22 + 0x20 + lVar21) = local_3a8;
              *(undefined4 *)(uVar22 + 0x24 + lVar21) = local_3a4;
              *(undefined4 *)(uVar22 + 0x28 + lVar21) = local_3a0;
              *(undefined4 *)(uVar22 + 0x2c + lVar21) = (undefined4)local_39c;
              *(undefined4 *)(uVar22 + 0x30 + lVar21) = local_39c._4_4_;
              local_310 = local_390;
              FString::FString(local_308,local_388);
              FSoftObjectPath::operator=(lVar21 + 0x38 + uVar22);
              local_3c8 = &PTR_FUN_144278ac0;
              if (local_388[0] != 0) {
                FMemory::Free();
              }
            }
            local_438 = local_438 + 8;
            uVar19 = (ulonglong)(iVar6 + 1U);
            uVar22 = uVar22 + 0x50;
          } while ((int)(iVar6 + 1U) < *(int *)(lVar18 + 0x50));
          uVar19 = local_440 & 0xffffffff;
          lVar21 = *(longlong *)(param_1 + 0x350);
        }
        bVar5 = FUN_1412cba50(param_1 + -0x458,lVar21 + lVar20);
        local_448 = local_448 | bVar5;
        lVar11 = *(longlong *)(param_1 + 0x350);
        lVar21 = lVar20 + lVar11;
        if (((1e-08 < ABS(*(float *)(lVar20 + 0x38 + lVar11) - *(float *)(lVar18 + 0x28))) ||
            (1e-08 < ABS(*(float *)(lVar21 + 0x3c) - *(float *)(lVar18 + 0x2c)))) ||
           (1e-08 < ABS(*(float *)(lVar21 + 0x40) - *(float *)(lVar18 + 0x30)))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          FUN_1412b0b60(local_2e8);
          plVar17 = (longlong *)(param_1 + 0x340);
          iVar6 = FUN_1412afd80(plVar17,local_2e8);
          if (iVar6 == -1) {
            iVar6 = *(int *)(param_1 + 0x348);
            *(int *)(param_1 + 0x348) = iVar6 + 1;
            if (*(int *)(param_1 + 0x34c) < iVar6 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
              ResizeGrow(plVar17,iVar6);
            }
            FUN_1412b0b60((longlong)iVar6 * 0x270 + *plVar17,local_2e8);
          }
          if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x348))) {
            FUN_140fd51c0((longlong *)(param_1 + 0x350),uVar19 & 0xffffffff,1,1);
            lVar20 = (longlong)iVar6 * 0x270;
            *(undefined1 *)(*plVar17 + 0x98 + lVar20) = 1;
            cVar4 = FUN_140bf9690(0,lVar18 + 0x20);
            if ((cVar4 != '\0') &&
               (cVar4 = FUN_140bf9690(0,*plVar17 + 0x18 + lVar20), cVar4 != '\0')) {
              plVar17 = (longlong *)FWeakObjectPtr::Get(*plVar17 + 0x18 + lVar20);
              lVar20 = FWeakObjectPtr::Get(lVar18 + 0x20);
              (**(code **)(*plVar17 + 0x718))(plVar17,*(undefined8 *)(lVar20 + 0x118));
            }
          }
          if (local_f8 != 0) {
            FMemory::Free();
          }
          TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
          ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(local_118);
          FUN_140bff340(local_180);
          FUN_140c64420(local_190);
          if (local_1e0 != 0) {
            FMemory::Free();
          }
          if (local_240 != 0) {
            FMemory::Free();
          }
          if (local_260 != 0) {
            FMemory::Free();
          }
          plVar17 = local_270;
          if (local_270 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_270 + 1;
            lVar20 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*local_270)(local_270);
              LOCK();
              piVar15 = (int *)((longlong)plVar17 + 0xc);
              iVar6 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
          }
          plVar17 = local_288;
          if (local_288 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_288 + 1;
            lVar20 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*local_288)(local_288);
              LOCK();
              piVar15 = (int *)((longlong)plVar17 + 0xc);
              iVar6 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
          }
        }
      }
      goto LAB_1412b6026;
    }
  }
LAB_1412b6060:
  plVar17 = (longlong *)0x0;
  FUN_1412cb020(param_1 + -0x458);
  if (((*(int *)(param_1 + 0x148) != 0) && (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x18))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x148) != 0) {
      plVar17 = *(longlong **)(param_1 + 0x140);
    }
    (**(code **)(*plVar17 + 0x40))(plVar17,bVar5);
  }
LAB_1412b60b6:
  FUN_1412d6830(param_1 + -0x458);
  return;
joined_r0x0001412b596b:
  if (lVar11 == 0) goto LAB_1412b597e;
  if (lVar11 == lVar10) goto LAB_1412b5980;
  lVar11 = *(longlong *)(lVar11 + 0x30);
  goto joined_r0x0001412b596b;
LAB_1412b597e:
  lVar20 = 0;
LAB_1412b5980:
  *(longlong *)(lVar21 + 0x20 + *plVar17) = lVar20;
LAB_1412b5988:
  iVar6 = *(int *)(lVar18 + 0x50);
  if (iVar6 < *(int *)(lVar21 + 0x160 + *plVar17)) {
    FUN_1412cf380(*plVar17 + 0x158 + lVar21,iVar6,1);
    iVar6 = *(int *)(lVar18 + 0x50);
  }
  uVar19 = 0;
  if (0 < iVar6) {
    local_440 = 0;
    uVar22 = uVar19;
    do {
      iVar6 = (int)uVar22;
      if (iVar6 < 0) {
        lVar20 = *(longlong *)(param_1 + 0x340);
LAB_1412b59dc:
        lVar20 = lVar20 + lVar21;
        iVar2 = *(int *)(lVar20 + 0x160);
        iVar7 = iVar2 + 1;
        *(int *)(lVar20 + 0x160) = iVar7;
        if (*(int *)(lVar20 + 0x164) < iVar7) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(lVar20 + 0x158);
        }
        plVar17 = (longlong *)((longlong)iVar2 * 0x50 + *(longlong *)(lVar20 + 0x158));
        _guard_xfg_dispatch_icall_nop(plVar17,0,0x50);
        FUN_140aecb80(plVar17);
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
      else {
        lVar20 = *(longlong *)(param_1 + 0x340);
        if (*(int *)(lVar21 + 0x160 + lVar20) <= iVar6) goto LAB_1412b59dc;
      }
      lVar20 = *(longlong *)(local_440 + *(longlong *)(lVar18 + 0x48));
      cVar4 = FUN_142f63b20();
      if ((cVar4 == '\0') || (lVar11 = FUN_142f5f490(), lVar11 != lVar20)) {
        local_418 = &PTR_FUN_144278ac0;
        local_410 = 0;
        local_408 = 0;
        uStack_400 = 0;
        local_3f4 = 0;
        local_3d8[0] = 0;
        local_3d8[1] = 0;
        local_3ec = 0;
        local_428 = 0;
        local_3e0 = 0;
        local_3f8 = 0xffffffff;
        local_3f0 = 0xffffffff;
        FUN_142f604c0(&local_418,*(undefined8 *)(lVar18 + 0x40),lVar20);
        lVar20 = *(longlong *)(lVar21 + 0x158 + *(longlong *)(param_1 + 0x340));
        *(undefined8 *)(uVar19 + 8 + lVar20) = local_410;
        puVar1 = (undefined4 *)(uVar19 + 0x10 + lVar20);
        *puVar1 = (undefined4)local_408;
        puVar1[1] = local_408._4_4_;
        puVar1[2] = (undefined4)uStack_400;
        puVar1[3] = uStack_400._4_4_;
        *(undefined4 *)(uVar19 + 0x20 + lVar20) = local_3f8;
        *(undefined4 *)(uVar19 + 0x24 + lVar20) = local_3f4;
        *(undefined4 *)(uVar19 + 0x28 + lVar20) = local_3f0;
        *(undefined4 *)(uVar19 + 0x2c + lVar20) = (undefined4)local_3ec;
        *(undefined4 *)(uVar19 + 0x30 + lVar20) = local_3ec._4_4_;
        local_328 = local_3e0;
        FString::FString(local_320,local_3d8);
        FSoftObjectPath::operator=(lVar20 + 0x38 + uVar19);
        local_418 = &PTR_FUN_144278ac0;
        if (local_3d8[0] != 0) {
          FMemory::Free();
        }
      }
      local_440 = local_440 + 8;
      uVar22 = (ulonglong)(iVar6 + 1U);
      uVar19 = uVar19 + 0x50;
    } while ((int)(iVar6 + 1U) < *(int *)(lVar18 + 0x50));
  }
  plVar17 = (longlong *)0x0;
  cVar4 = FUN_140bf9690(0,lVar18 + 0x20);
  if ((cVar4 != '\0') &&
     (cVar4 = FUN_140bf9690(0,*(longlong *)(param_1 + 0x340) + 0x18 + lVar21), cVar4 != '\0')) {
    lVar20 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x340) + 0x18 + lVar21);
    lVar20 = FWeakObjectPtr::Get(lVar20 + 0x590);
    lVar11 = FWeakObjectPtr::Get(lVar18 + 0x20);
    if (lVar20 != *(longlong *)(lVar11 + 0x118)) {
      plVar12 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x340) + 0x18 + lVar21);
      lVar20 = FWeakObjectPtr::Get(lVar18 + 0x20);
      (**(code **)(*plVar12 + 0x718))(plVar12,*(undefined8 *)(lVar20 + 0x118));
    }
  }
  iVar6 = *(int *)(lVar18 + 0x34);
  plVar12 = (longlong *)(param_1 + 0x340);
  if ((iVar6 != 0) && (lVar20 = *plVar12, *(longlong *)(lVar21 + 0x10 + lVar20) != 0)) {
    if (iVar6 != *(int *)(lVar21 + 0x150 + lVar20)) {
      *(int *)(lVar21 + 0x150 + lVar20) = iVar6;
      lVar20 = *plVar12;
      lVar11 = *(longlong *)(lVar20 + 0x10 + lVar21);
      plVar13 = plVar17;
      if (lVar11 != 0) {
        uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        plVar13 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar8);
        lVar20 = *(longlong *)(param_1 + 0x340);
      }
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x20))(plVar13,*(undefined4 *)(lVar20 + 0x150 + lVar21));
        lVar20 = *(longlong *)(param_1 + 0x340);
      }
    }
    uVar8 = *(undefined8 *)(lVar18 + 0x28);
    uVar16 = *(undefined4 *)(lVar18 + 0x30);
    if (*(char *)(lVar20 + 0x1e5 + lVar21) != '\0') {
      plVar13 = *(longlong **)(param_1 + -0x340);
      if (plVar13 != (longlong *)0x0) {
        plVar17 = (longlong *)(**(code **)(*plVar13 + 0x678))(plVar13);
        lVar20 = *(longlong *)(param_1 + 0x340);
      }
      if (plVar17 != (longlong *)0x0) {
        lVar11 = plVar17[0x2d];
        if (lVar11 == 0) {
          local_358 = DAT_1468b5d98;
          puVar14 = &local_360;
          local_360 = _DAT_1468b5d90;
        }
        else {
          local_378 = *(undefined4 *)(lVar11 + 0x220);
          local_374 = *(undefined4 *)(lVar11 + 0x224);
          uStack_2f0 = *(undefined4 *)(lVar11 + 0x228);
          uStack_2ec = *(undefined4 *)(lVar11 + 0x22c);
          local_370 = uStack_2f0;
          puVar14 = (undefined8 *)&local_378;
          local_2f8 = local_378;
          uStack_2f4 = local_374;
        }
        uVar16 = *(undefined4 *)(puVar14 + 1);
        local_34c = uVar16;
        local_330 = uVar16;
      }
    }
    local_458 = 0;
    local_348 = uVar8;
    local_340 = uVar16;
    FUN_1423990b0(*(undefined8 *)(lVar20 + 0x10 + lVar21),&local_348,0,0);
    FUN_1423424e0(*(undefined8 *)(lVar21 + 0x10 + *plVar12));
  }
  bVar5 = FUN_1412cba50(param_1 + -0x458,*plVar12 + lVar21);
  local_448 = local_448 | bVar5;
LAB_1412b6026:
  lVar18 = lVar18 + 0x70;
  bVar5 = local_448;
  if (lVar18 == local_368) goto LAB_1412b6060;
  goto LAB_1412b5540;
}



// FUNCTION 1412b6140 FUN_1412b6140 body=8 status=ok
// SIG undefined FUN_1412b6140(void)

void FUN_1412b6140(undefined8 param_1,undefined8 param_2)

{
  FUN_1412b6150(param_1,param_2,0);
  return;
}



// FUNCTION 1412b6150 FUN_1412b6150 body=1254 status=ok
// SIG undefined FUN_1412b6150(void)

void FUN_1412b6150(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong lVar18;
  bool bVar19;
  longlong local_res10;
  char local_res18;
  uint local_res20;
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_90;
  uint uStack_8c;
  uint *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x5aa) == '\0') {
      lVar5 = *(longlong *)(param_1 + 0x948);
      lVar18 = *(longlong *)(param_1 + 0x940);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x940);
      lVar18 = *(longlong *)(param_1 + 0x948);
    }
    local_res10 = param_2;
    local_res18 = param_3;
    if (lVar18 != 0) {
      plVar7 = *(longlong **)(lVar18 + 0x308);
      plVar2 = plVar7 + *(int *)(lVar18 + 0x310);
      for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
        if (*plVar7 == param_2) goto LAB_1412b6573;
      }
      uVar8 = 0;
      if (lVar5 != 0) {
        plVar2 = *(longlong **)(lVar5 + 0x308);
        lVar10 = (longlong)*(int *)(lVar5 + 0x310);
        for (plVar7 = plVar2; plVar7 != plVar2 + lVar10; plVar7 = plVar7 + 1) {
          if (*plVar7 == param_2) {
            if (*(int *)(lVar5 + 0x310) != 0) {
              bVar19 = *plVar2 != param_2;
              local_res20 = 0;
              uVar11 = uVar8;
              uVar13 = uVar8;
              uVar16 = uVar8;
              do {
                uVar14 = (uint)uVar16;
                uVar12 = (uint)uVar13;
                uVar11 = uVar11 + 1;
                uVar13 = (ulonglong)(uVar12 + 1);
                if ((longlong)uVar11 < lVar10) {
                  do {
                    if (bVar19 != (*(longlong *)(*(longlong *)(lVar5 + 0x308) + uVar11 * 8) !=
                                  param_2)) break;
                    uVar13 = (ulonglong)((int)uVar13 + 1);
                    uVar11 = uVar11 + 1;
                  } while ((longlong)uVar11 < lVar10);
                }
                iVar3 = (int)uVar13 - uVar12;
                if (bVar19 != false) {
                  if (uVar14 != uVar12) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(*(longlong *)(lVar5 + 0x308) + (longlong)(int)uVar14 * 8),
                               (void *)(*(longlong *)(lVar5 + 0x308) + (longlong)(int)uVar12 * 8),
                               (longlong)iVar3 << 3);
                    uVar14 = local_res20;
                  }
                  local_res20 = uVar14 + iVar3;
                  uVar16 = (ulonglong)local_res20;
                }
                bVar19 = (bool)(bVar19 ^ 1);
              } while ((longlong)uVar11 < lVar10);
              *(int *)(lVar5 + 0x310) = (int)uVar16;
            }
            break;
          }
        }
      }
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar18 + 0x308,&local_res10);
      if (*(char *)(lVar18 + 0x328) != '\0') {
        plVar2 = (longlong *)(param_2 + 0x2b0);
        uStack_c4 = 1;
        uVar14 = *(uint *)(param_2 + 0x2d8);
        puVar1 = (uint *)(param_2 + 0x2c0);
        local_c8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0;
        if (uVar14 != 0) {
          puVar17 = *(uint **)(param_2 + 0x2d0);
          if (*(uint **)(param_2 + 0x2d0) == (uint *)0x0) {
            puVar17 = puVar1;
          }
          uVar12 = *puVar17;
          uVar11 = uVar8;
          while (uVar12 == 0) {
            iVar3 = (int)uVar8;
            uStack_b0 = (int)uVar11 + 0x20;
            uVar11 = (ulonglong)uStack_b0;
            local_c8 = iVar3 + 1;
            uVar8 = (ulonglong)local_c8;
            if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
            goto LAB_1412b63cd;
            uVar12 = puVar17[(longlong)iVar3 + 1];
          }
          uStack_c4 = uVar12 - 1 & uVar12 ^ uVar12;
          iVar3 = 0x1f;
          if (uStack_c4 != 0) {
            for (; uStack_c4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          if (uStack_c4 == 0) {
            iVar3 = 0x20;
          }
          else {
            iVar3 = 0x1f - iVar3;
          }
          uStack_b4 = (uStack_b0 - iVar3) + 0x1f;
          if ((int)uVar14 < (int)uStack_b4) {
LAB_1412b63cd:
            uStack_b4 = uVar14;
          }
        }
        uVar12 = *(uint *)(param_2 + 0x2d8);
        uStack_80 = CONCAT44(uStack_b4,0xffffffff);
        local_78 = CONCAT44(uStack_ac,uStack_b0);
        uStack_68 = CONCAT44(uStack_c4,local_c8);
        uVar15 = uVar12 & 0xffffffe0;
        uStack_90 = local_c8;
        uStack_8c = uStack_c4;
        local_88 = puVar1;
        local_70 = plVar2;
        puStack_60 = puVar1;
        uStack_58 = uStack_80;
        uStack_50 = local_78;
        uStack_b4 = uVar12;
        if (uVar12 != uVar14) {
          puVar17 = *(uint **)(param_2 + 0x2d0);
          if (*(uint **)(param_2 + 0x2d0) == (uint *)0x0) {
            puVar17 = puVar1;
          }
          uVar9 = puVar17[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
          iVar3 = (int)uVar12 >> 5;
          while (uVar9 == 0) {
            uVar15 = uVar15 + 0x20;
            if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
            goto LAB_1412b6497;
            uVar9 = puVar17[(longlong)iVar3 + 1];
            iVar3 = iVar3 + 1;
          }
          uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
          iVar3 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          if (uVar9 == 0) {
            iVar3 = 0x20;
          }
          else {
            iVar3 = 0x1f - iVar3;
          }
          uStack_b4 = (uVar15 - iVar3) + 0x1f;
          if ((int)uVar14 < (int)uStack_b4) {
LAB_1412b6497:
            uStack_b4 = uVar14;
          }
        }
        while( true ) {
          if ((uStack_80._4_4_ == uStack_b4) && (local_88 == puVar1)) {
            bVar19 = true;
          }
          else {
            bVar19 = false;
          }
          if (bVar19) break;
          lVar5 = *(longlong *)(*plVar2 + (longlong)(int)uStack_80._4_4_ * 0x10);
          if (lVar5 != 0) {
            lVar4 = FUN_1428e7a40();
            lVar10 = *(longlong *)(lVar5 + 0x10);
            if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
                != lVar4 + 0x88)) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
            if ((bVar19) && (lVar10 != 0)) {
              lVar4 = FUN_1429ff0b0();
              for (lVar10 = *(longlong *)(lVar5 + 0x10); lVar10 != 0;
                  lVar10 = *(longlong *)(lVar10 + 0x30)) {
                if (lVar10 == lVar4) goto LAB_1412b6549;
              }
              FUN_1412d0b30(lVar5,lVar18);
            }
          }
LAB_1412b6549:
          uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_8c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        }
      }
    }
LAB_1412b6573:
    if (local_res18 == '\0') {
      lVar5 = UCheckBoxWidgetStyle::StaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (bVar19) {
        plVar2 = (longlong *)(param_1 + 0x808);
        plVar7 = (longlong *)*plVar2;
        iVar3 = *(int *)(param_1 + 0x810);
        for (plVar6 = plVar7; plVar6 != plVar7 + iVar3; plVar6 = plVar6 + 1) {
          if (*plVar6 == param_2) {
            if ((int)((longlong)plVar6 - (longlong)plVar7 >> 3) != -1) {
              return;
            }
            break;
          }
        }
        *(int *)(param_1 + 0x810) = iVar3 + 1;
        if (*(int *)(param_1 + 0x814) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
        }
        *(longlong *)(*plVar2 + (longlong)iVar3 * 8) = param_2;
      }
    }
  }
  return;
}



// FUNCTION 1412b6640 FUN_1412b6640 body=435 status=ok
// SIG undefined FUN_1412b6640(void)

void FUN_1412b6640(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar10 = (ulonglong)(int)DAT_1468787d0;
  puVar12 = DAT_1468787c8 + uVar10 * 6;
  if (DAT_1468787c8 != puVar12) {
    piVar8 = (int *)(DAT_1468787c8 + 2);
    puVar11 = DAT_1468787c8;
    do {
      lVar4 = FWeakObjectPtr::Get(piVar8 + -2);
      if (lVar4 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *piVar8) && (*(longlong *)(piVar8 + 2) != 0)) {
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(piVar8 + -2,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *piVar8 = DAT_1464b56f4;
          }
          lVar4 = FWeakObjectPtr::Get(piVar8 + -2);
          if (lVar4 != 0) goto LAB_1412b6706;
        }
LAB_1412b673c:
        lVar4 = 0;
      }
      else {
LAB_1412b6706:
        lVar5 = UNodeMappingContainer::StaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1412b673c;
      }
      iVar1 = *(int *)(param_1 + 0x460);
      *(int *)(param_1 + 0x460) = iVar1 + 1;
      if (*(int *)(param_1 + 0x464) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x458),iVar1);
      }
      uVar2 = *puVar11;
      puVar11 = puVar11 + 6;
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x458));
      piVar8 = piVar8 + 0xc;
      *puVar6 = uVar2;
      puVar6[1] = lVar4;
    } while (puVar11 != puVar12);
    uVar10 = (ulonglong)DAT_1468787d0;
  }
  if ((int)uVar10 != 0) {
    plVar7 = DAT_1468787c8 + 4;
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 6;
      uVar9 = (int)uVar10 - 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 != 0);
  }
  DAT_1468787d0 = 0;
  if (DAT_1468787d4 == 0) {
    return;
  }
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeTo(&DAT_1468787c8,0);
  return;
}



// FUNCTION 1412b6800 FUN_1412b6800 body=1686 status=ok
// SIG undefined FUN_1412b6800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b6800(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong lVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_50;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x758) != 0)) {
    local_68 = param_2;
    lVar5 = FUN_142dfdfe0();
    lVar12 = *(longlong *)(param_2 + 0x758);
    lVar6 = lVar12;
    if (lVar12 != 0) {
      while (lVar6 != lVar5) {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        if (lVar6 == 0) {
          return;
        }
      }
      if ((lVar12 != 0) &&
         ((*(char *)(param_2 + 0x761) != '\0' || (*(char *)(param_2 + 0x760) != '\0')))) {
        plVar8 = (longlong *)(param_1 + 0x7b8);
        iVar4 = FUN_1412afb10(plVar8,&local_68);
        if ((iVar4 < 0) || (*(int *)(param_1 + 0x7c0) <= iVar4)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar12 = (longlong)iVar4 * 0x270;
          cVar3 = FUN_140bf9690(0,*plVar8 + 0x18 + lVar12);
          if (cVar3 != '\0') {
            lVar6 = FWeakObjectPtr::Get(*plVar8 + 0x18 + lVar12);
            uVar7 = FUN_142cc0d70(param_2);
            cVar3 = FUN_1405dc8f0(lVar6 + 0x590,uVar7);
            if (cVar3 != '\0') {
              plVar8 = (longlong *)FWeakObjectPtr::Get(*plVar8 + 0x18 + lVar12);
              lVar12 = *plVar8;
              uVar7 = FUN_142cc0d70(param_2);
              (**(code **)(lVar12 + 0x718))(plVar8,uVar7);
            }
          }
        }
        else {
          plVar9 = (longlong *)(param_1 + 0x7c8);
          iVar4 = FUN_1412afb10(plVar9);
          if ((iVar4 < 0) || (*(int *)(param_1 + 2000) <= iVar4)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (*(char *)(param_2 + 0x77c) == '\0') {
              iVar1 = *(int *)(param_1 + 0x7c0);
              lVar12 = *plVar9;
              *(int *)(param_1 + 0x7c0) = iVar1 + 1;
              if (*(int *)(param_1 + 0x7c4) < iVar1 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>
                ::ResizeGrow(plVar8,iVar1);
              }
              lVar6 = (longlong)iVar1 * 0x270;
              FUN_1412b0b60(lVar6 + *plVar8,(longlong)iVar4 * 0x270 + lVar12);
              if ((iVar1 < 0) || (*(int *)(param_1 + 0x7c0) <= iVar1)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                FUN_140fd51c0(plVar9,iVar4,1,1);
                cVar3 = FUN_140bf9690(0,*plVar8 + 0x18 + lVar6);
                if (cVar3 != '\0') {
                  plVar9 = (longlong *)FWeakObjectPtr::Get(*plVar8 + 0x18 + lVar6);
                  lVar12 = *plVar9;
                  uVar7 = FUN_142cc0d70(param_2);
                  (**(code **)(lVar12 + 0x718))(plVar9,uVar7);
                }
                *(undefined1 *)(lVar6 + 0x98 + *plVar8) = 1;
              }
            }
          }
          else {
            if (*(char *)(param_2 + 0x77c) == '\0') {
              iVar4 = *(int *)(param_1 + 0x7c0);
              *(int *)(param_1 + 0x7c0) = iVar4 + 1;
              if (*(int *)(param_1 + 0x7c4) < iVar4 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>
                ::ResizeGrow(plVar8);
              }
              FUN_140f9f650(*plVar8 + (longlong)iVar4 * 0x270);
              if ((iVar4 < 0) || (*(int *)(param_1 + 0x7c0) <= iVar4)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) {
                return;
              }
              lVar12 = (longlong)iVar4 * 0x270 + *plVar8;
            }
            else {
              iVar4 = *(int *)(param_1 + 2000);
              *(int *)(param_1 + 2000) = iVar4 + 1;
              if (*(int *)(param_1 + 0x7d4) < iVar4 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>
                ::ResizeGrow(plVar9);
              }
              FUN_140f9f650(*plVar9 + (longlong)iVar4 * 0x270);
              if ((iVar4 < 0) || (*(int *)(param_1 + 2000) <= iVar4)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) {
                return;
              }
              lVar12 = *plVar9 + (longlong)iVar4 * 0x270;
            }
            if (lVar12 != 0) {
              uVar18 = *(undefined4 *)(param_2 + 0x224);
              local_60 = *(undefined4 *)(param_2 + 0x228);
              *(undefined4 *)(lVar12 + 0x38) = *(undefined4 *)(param_2 + 0x220);
              *(undefined4 *)(lVar12 + 0x3c) = uVar18;
              *(undefined4 *)(lVar12 + 0x40) = local_60;
              *(undefined8 *)(lVar12 + 0x260) = *(undefined8 *)(param_2 + 0x758);
              if (*(longlong *)(param_1 + 0x628) != 0) {
                lVar10 = UCheckBoxWidgetStyle::StaticClass();
                lVar6 = *(longlong *)(param_1 + 0x628);
                for (lVar5 = lVar6; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
                  if (lVar5 == lVar10) goto LAB_1412b6b60;
                }
              }
              lVar6 = 0;
LAB_1412b6b60:
              *(longlong *)(lVar12 + 0x20) = lVar6;
              if (*(char *)(param_2 + 0x70c) == '\0') {
                fVar13 = 0.0;
              }
              else {
                fVar13 = *(float *)(param_2 + 0x704);
              }
              *(undefined1 *)(lVar12 + 0x9d) = 3;
              *(int *)(lVar12 + 0x25c) = (int)(longlong)fVar13;
              *(bool *)(lVar12 + 0x98) = *(char *)(param_2 + 0x77c) == '\0';
              cVar3 = FUN_140bf9690(0,param_1 + 0x754);
              if (cVar3 != '\0') {
                lVar5 = FWeakObjectPtr::Get(param_1 + 0x754);
                lVar6 = *(longlong *)(lVar5 + 0x170);
                lVar5 = (longlong)*(int *)(lVar5 + 0x178) * 0x60 + lVar6;
                for (; lVar6 != lVar5; lVar6 = lVar6 + 0x60) {
                  cVar3 = FUN_14128c180(lVar6,param_2);
                  if (cVar3 != '\0') goto LAB_1412b6bfa;
                }
              }
              lVar6 = 0;
LAB_1412b6bfa:
              if (lVar6 == 0) {
                *(undefined8 *)(lVar12 + 0x238) = *(undefined8 *)(param_2 + 0x758);
                lVar6 = FUN_142cc0d70(param_2);
                uVar14 = _DAT_1468b5b90;
                uVar15 = uRam00000001468b5b94;
                uVar16 = uRam00000001468b5b98;
                uVar17 = uRam00000001468b5b9c;
                uVar18 = _DAT_1468b5b70;
                uVar19 = uRam00000001468b5b74;
                uVar20 = uRam00000001468b5b78;
                uVar21 = uRam00000001468b5b7c;
                uVar22 = _DAT_1468b5b80;
                uVar23 = uRam00000001468b5b84;
                uVar24 = uRam00000001468b5b88;
                uVar25 = uRam00000001468b5b8c;
                if (lVar6 != 0) {
                  lVar6 = FUN_142cc0d70(param_2);
                  lVar6 = *(longlong *)(lVar6 + 0x168);
                  if (lVar6 == 0) {
                    uVar14 = _DAT_146878340 & _DAT_146878350;
                    uVar15 = uRam0000000146878344 & uRam0000000146878354;
                    uVar16 = uRam0000000146878348 & uRam0000000146878358;
                    uVar17 = uRam000000014687834c & uRam000000014687835c;
                    uVar18 = 0;
                    uVar19 = 0;
                    uVar20 = 0;
                    uVar21 = uRam000000014687834c;
                    uVar22 = 0;
                    uVar23 = 0;
                    uVar24 = 0;
                    uVar25 = 0;
                  }
                  else {
                    uVar14 = *(uint *)(lVar6 + 0x230);
                    uVar15 = *(uint *)(lVar6 + 0x234);
                    uVar16 = *(uint *)(lVar6 + 0x238);
                    uVar17 = *(uint *)(lVar6 + 0x23c);
                    uVar18 = *(undefined4 *)(lVar6 + 0x210);
                    uVar19 = *(undefined4 *)(lVar6 + 0x214);
                    uVar20 = *(undefined4 *)(lVar6 + 0x218);
                    uVar21 = *(uint *)(lVar6 + 0x21c);
                    uVar22 = *(undefined4 *)(lVar6 + 0x220);
                    uVar23 = *(undefined4 *)(lVar6 + 0x224);
                    uVar24 = *(undefined4 *)(lVar6 + 0x228);
                    uVar25 = *(undefined4 *)(lVar6 + 0x22c);
                  }
                }
                *(undefined4 *)(lVar12 + 0x200) = uVar18;
                *(undefined4 *)(lVar12 + 0x204) = uVar19;
                *(undefined4 *)(lVar12 + 0x208) = uVar20;
                *(uint *)(lVar12 + 0x20c) = uVar21;
                *(undefined4 *)(lVar12 + 0x210) = uVar22;
                *(undefined4 *)(lVar12 + 0x214) = uVar23;
                *(undefined4 *)(lVar12 + 0x218) = uVar24;
                *(undefined4 *)(lVar12 + 0x21c) = uVar25;
                *(uint *)(lVar12 + 0x220) = uVar14;
                *(uint *)(lVar12 + 0x224) = uVar15;
                *(uint *)(lVar12 + 0x228) = uVar16;
                *(uint *)(lVar12 + 0x22c) = uVar17;
              }
              else {
                FUN_14128bb50(lVar12 + 0x1f0,lVar6);
              }
              uVar18 = *(undefined4 *)(param_2 + 0x770);
              uVar19 = *(undefined4 *)(param_2 + 0x774);
              uVar20 = *(undefined4 *)(param_2 + 0x778);
              *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(param_2 + 0x76c);
              *(undefined4 *)(lVar12 + 0x2c) = uVar18;
              *(undefined4 *)(lVar12 + 0x30) = uVar19;
              *(undefined4 *)(lVar12 + 0x34) = uVar20;
              *(undefined1 *)(lVar12 + 0x9c) = *(undefined1 *)(param_2 + 0x760);
              *(undefined1 *)(lVar12 + 0x9b) = *(undefined1 *)(param_2 + 0x761);
              cVar3 = FUN_140bf9670(0,lVar12 + 0x18);
              if (cVar3 != '\0') {
                uVar7 = FUN_1412d2f50(param_1,lVar12);
                FWeakObjectPtr::operator=(lVar12 + 0x18,uVar7);
              }
              cVar3 = FUN_140bf9690(0,lVar12 + 0x18);
              if (((cVar3 != '\0') && (*(char *)(lVar12 + 0x98) != '\0')) &&
                 (plVar8 = (longlong *)FWeakObjectPtr::Get(lVar12 + 0x18), plVar8 != (longlong *)0x0
                 )) {
                lVar6 = UScrollBar::GetPrivateStaticClass();
                if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                    lVar6 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  lVar6 = *plVar8;
                  uVar7 = FUN_142cc0d70(param_2);
                  (**(code **)(lVar6 + 0x718))(plVar8,uVar7);
                }
              }
              FUN_1412cac10(lVar12,param_1,1);
              cVar3 = FUN_140bf9690(0,lVar12 + 0x18);
              if (((cVar3 != '\0') && (*(char *)(lVar12 + 0x25b) == '\0')) &&
                 ((*(longlong *)(param_1 + 0x938) != 0 &&
                  ((0.0 < *(float *)(param_2 + 0x764) && (*(char *)(param_2 + 0x70c) != '\0')))))) {
                local_68 = *(longlong *)(param_2 + 0x220);
                local_60 = *(undefined4 *)(param_2 + 0x228);
                local_50 = local_60;
                FUN_1412ac250(*(longlong *)(param_1 + 0x938),&local_68,
                              CONCAT44(*(undefined4 *)(param_2 + 0x768),*(float *)(param_2 + 0x764))
                             );
                lVar6 = FWeakObjectPtr::Get(lVar12 + 0x18);
                *(undefined1 *)(lVar6 + 0x599) = 0;
                if (((*(char *)(param_1 + 0x5aa) == '\0') || (*(char *)(lVar12 + 0x9b) == '\0')) &&
                   (((*(char *)(param_1 + 0x5a8) == '\0' || (*(char *)(param_1 + 0xd20) != '\0')) ||
                    (*(char *)(lVar12 + 0x9c) == '\0')))) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = 1;
                }
                uVar7 = FWeakObjectPtr::Get(lVar12 + 0x18);
                FUN_1412cf480(param_1,uVar7,uVar11,*(undefined1 *)(param_1 + 0x5a8));
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412b6ea0 FUN_1412b6ea0 body=1255 status=ok
// SIG undefined FUN_1412b6ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412b6ea0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  undefined4 local_a8;
  longlong local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar16 = param_1[0x23];
  if (lVar16 != 0) {
    local_b8[0] = lVar16;
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(longlong *)(lVar16 + 0xc98) != 0)) {
      lVar16 = param_1[0xf7];
      lVar9 = (longlong)(int)param_1[0xf8] * 0x270 + lVar16;
      for (; lVar16 != lVar9; lVar16 = lVar16 + 0x270) {
        FUN_1412d2bb0(lVar16,param_1);
      }
      FUN_1412bdd20(param_1 + 0xf7,0);
      plVar2 = param_1 + 0xf9;
      lVar16 = *plVar2;
      lVar9 = (longlong)(int)param_1[0xfa] * 0x270 + lVar16;
      for (; lVar16 != lVar9; lVar16 = lVar16 + 0x270) {
        FUN_1412d2bb0(lVar16,param_1);
      }
      FUN_1412bdd20(plVar2,0);
      cVar7 = FUN_140bf9670(0,(longlong)param_1 + 0x754);
      if (cVar7 == '\0') {
        uVar10 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
        uVar11 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar7 = FUN_1412a2eb0(uVar10,uVar11);
        if (cVar7 == '\0') {
          cVar7 = FUN_140bf9690(0,(longlong)param_1 + 0x754);
          if (cVar7 == '\0') {
            return;
          }
          uVar10 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
          plVar12 = (longlong *)FUN_140633d10(uVar10);
          puVar4 = (undefined8 *)*plVar12;
          lVar16 = plVar12[1];
          if (puVar4 == puVar4 + (longlong)(int)lVar16 * 0xc) {
            return;
          }
          puVar17 = puVar4 + 6;
LAB_1412b7060:
          FString::FString(local_98,puVar17 + -6);
          local_88 = puVar17[-4];
          uStack_80 = puVar17[-3];
          local_58 = puVar17[2];
          local_78 = *(undefined4 *)(puVar17 + -2);
          uStack_74 = *(undefined4 *)((longlong)puVar17 + -0xc);
          uStack_70 = *(undefined4 *)(puVar17 + -1);
          uStack_6c = *(undefined4 *)((longlong)puVar17 + -4);
          local_68 = *puVar17;
          uStack_60 = puVar17[1];
          local_48 = *(undefined4 *)(puVar17 + 4);
          uStack_44 = *(undefined4 *)((longlong)puVar17 + 0x24);
          uStack_40 = *(undefined4 *)(puVar17 + 5);
          uStack_3c = *(undefined4 *)((longlong)puVar17 + 0x2c);
          local_50 = puVar17[3];
          if (local_50 != 0) {
            lVar13 = FUN_142dfdfe0();
            for (lVar9 = local_50; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
              if (lVar9 == lVar13) {
                uVar8 = FUN_14129dc40(local_98);
                iVar3 = (int)param_1[0xfa];
                *(int *)(param_1 + 0xfa) = iVar3 + 1;
                if (*(int *)((longlong)param_1 + 0x7d4) < iVar3 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>
                  ::ResizeGrow(plVar2);
                }
                lVar9 = (longlong)iVar3 * 0x270;
                FUN_140f9f650(*plVar2 + lVar9);
                if ((iVar3 < 0) || ((int)param_1[0xfa] <= iVar3)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) {
                  lVar13 = *plVar2 + lVar9;
                  *(undefined1 *)(lVar13 + 0x25b) = uVar8;
                  local_a8 = uStack_70;
                  *(undefined4 *)(lVar13 + 0x38) = local_78;
                  *(undefined4 *)(lVar13 + 0x3c) = uStack_74;
                  *(undefined4 *)(lVar13 + 0x40) = uStack_70;
                  if (param_1[0xc5] == 0) goto LAB_1412b71a1;
                  lVar14 = UCheckBoxWidgetStyle::StaticClass();
                  lVar15 = param_1[0xc5];
                  lVar5 = lVar15;
                  goto joined_r0x0001412b7191;
                }
                break;
              }
            }
          }
          goto LAB_1412b7289;
        }
      }
      plVar12 = (longlong *)param_1[0x1a7];
      plVar2 = plVar12 + (int)param_1[0x1a8];
      for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
        local_b8[0] = *plVar12;
        cVar7 = FWeakObjectPtr::IsValid(local_b8);
        if ((cVar7 != '\0') && (lVar16 = FWeakObjectPtr::Get(local_b8), lVar16 != 0)) {
          lVar9 = FUN_142e017e0();
          if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            FUN_1412b6800(param_1,lVar16);
          }
        }
      }
    }
  }
  return;
joined_r0x0001412b7191:
  if (lVar5 == 0) goto LAB_1412b71a1;
  if (lVar5 == lVar14) goto LAB_1412b71a3;
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001412b7191;
LAB_1412b71a1:
  lVar15 = 0;
LAB_1412b71a3:
  *(longlong *)(lVar13 + 0x20) = lVar15;
  *(undefined1 *)(lVar13 + 0x9d) = 3;
  FUN_14128bb50(lVar13 + 0x1f0,local_98);
  *(longlong *)(lVar13 + 0x260) = local_50;
  *(undefined1 *)(lVar13 + 0x9c) = 1;
  cVar7 = FUN_140bf9670(0,*plVar2 + 0x18 + lVar9);
  if (cVar7 != '\0') {
    lVar15 = *plVar2;
    uVar10 = FUN_1412d2f50(param_1,lVar15 + lVar9);
    FWeakObjectPtr::operator=(lVar15 + lVar9 + 0x18,uVar10);
  }
  cVar7 = FUN_140bf9690(0,*plVar2 + 0x18 + lVar9);
  if ((cVar7 != '\0') && (lVar9 = FWeakObjectPtr::Get(*plVar2 + 0x18 + lVar9), lVar9 != 0)) {
    lVar15 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8)
        != lVar15 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      FUN_14128bb50(lVar9 + 0x5b0,local_98);
    }
  }
  FUN_1412cac10(lVar13,param_1,1);
LAB_1412b7289:
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  puVar1 = puVar17 + 6;
  puVar17 = puVar17 + 0xc;
  if (puVar1 == puVar4 + (longlong)(int)lVar16 * 0xc) {
    return;
  }
  goto LAB_1412b7060;
}



// FUNCTION 1412b7390 FUN_1412b7390 body=1730 status=ok
// SIG undefined FUN_1412b7390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b7390(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  int iVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  int local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  ulonglong *local_e0;
  longlong *local_d8;
  int local_d0;
  uint local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_b0;
  int local_a8;
  char local_a4;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  undefined8 local_78;
  char local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  puVar26 = (ulonglong *)(param_1 + 0x115);
  plVar24 = (longlong *)*puVar26;
  uVar21 = 0;
  uVar25 = (longlong)(int)param_1[0x116] & 0x1fffffffffffffff;
  if (plVar24 + (int)param_1[0x116] < plVar24) {
    uVar25 = uVar21;
  }
  local_e8 = param_1;
  local_e0 = puVar26;
  if (uVar25 != 0) {
    do {
      plVar22 = (longlong *)*plVar24;
      if (plVar22 != (longlong *)0x0) {
        FUN_142398ec0(plVar22,0,2);
        (**(code **)(*plVar22 + 0x3b0))(plVar22);
      }
      plVar24 = plVar24 + 1;
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar25);
  }
  *(undefined4 *)(param_1 + 0x116) = 0;
  if (*(int *)((longlong)param_1 + 0x8b4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar26,0);
  }
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                    ((longlong)param_1 + 0x754,param_1 + 0xf1);
  if (cVar7 != '\0') {
    if (((int)param_1[0xba] == 0) && (*(int *)((longlong)param_1 + 0x5d4) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((!bVar4) && (lVar10 != 0)) {
      local_f8 = 0;
      lVar11 = UKismetMaterialLibrary::CreateDynamicMaterialInstance(param_1,param_1[0xcb],0);
      local_f8 = lVar11;
      if (lVar11 != 0) {
        local_108 = 0;
        local_f0 = FUN_1428dfc70();
        local_c8 = 5;
        local_70 = '\0';
        local_100 = lVar10;
        FUN_14044bc80(&local_c0,&local_100,&local_f0);
        FUN_14045a130();
        iVar9 = 0;
        if (local_a4 == '\0') {
LAB_1412b7512:
          lVar13 = local_98;
          lVar10 = 0;
          if (local_98 != 0) {
            iVar9 = *(int *)(local_98 + 0xc);
            if (iVar9 < (int)DAT_1469e91c4) {
              uVar18 = iVar9 >> 0x1f & 0xffff;
              uVar8 = iVar9 + uVar18;
              lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar18) * 0x18;
            }
            if (((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) &&
               (cVar7 = FUN_142221b10(local_98,param_1[0xba]), cVar7 != '\0')) {
              lVar10 = *(longlong *)(lVar13 + 0x168);
              if (lVar10 == 0) {
                local_58 = 0;
                uStack_54 = 0;
                uStack_50 = 0;
                uStack_4c = 0;
                local_48 = _DAT_146878340 & _DAT_146878350;
                uStack_44 = uRam0000000146878344 & uRam0000000146878354;
                uStack_40 = uRam0000000146878348 & uRam0000000146878358;
                uStack_3c = uRam000000014687834c & uRam000000014687835c;
                local_68 = 0;
                uStack_64 = 0;
                uStack_60 = 0;
                uStack_5c = uRam000000014687834c;
              }
              else {
                local_58 = *(undefined4 *)(lVar10 + 0x220);
                uStack_54 = *(undefined4 *)(lVar10 + 0x224);
                uStack_50 = *(undefined4 *)(lVar10 + 0x228);
                uStack_4c = *(undefined4 *)(lVar10 + 0x22c);
                local_48 = *(uint *)(lVar10 + 0x230);
                uStack_44 = *(uint *)(lVar10 + 0x234);
                uStack_40 = *(uint *)(lVar10 + 0x238);
                uStack_3c = *(uint *)(lVar10 + 0x23c);
                local_68 = *(undefined4 *)(lVar10 + 0x210);
                uStack_64 = *(undefined4 *)(lVar10 + 0x214);
                uStack_60 = *(undefined4 *)(lVar10 + 0x218);
                uStack_5c = *(uint *)(lVar10 + 0x21c);
              }
              uVar12 = FUN_142a232e0();
              AActor::GetComponentsByClass(lVar13,&local_d8,uVar12);
              plVar24 = local_d8 + local_d0;
              for (plVar22 = local_d8; plVar22 != plVar24; plVar22 = plVar22 + 1) {
                lVar10 = *plVar22;
                if (lVar10 != 0) {
                  lVar13 = FUN_142a232e0();
                  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if ((bVar4) && (plVar14 = (longlong *)FUN_140a79980(), plVar14 != (longlong *)0x0)
                     ) {
                    local_118 = 0;
                    FUN_142399d60(plVar14,&local_68,0,0);
                    (**(code **)(*plVar14 + 0x928))(plVar14,*(undefined8 *)(lVar10 + 0x728));
                    iVar23 = 0;
                    iVar9 = (**(code **)(*plVar14 + 0x6c8))(plVar14);
                    if (0 < iVar9) {
                      do {
                        (**(code **)(*plVar14 + 0x568))(plVar14,iVar23,lVar11);
                        iVar23 = iVar23 + 1;
                        iVar9 = (**(code **)(*plVar14 + 0x6c8))(plVar14);
                      } while (iVar23 < iVar9);
                    }
                    (**(code **)(*plVar14 + 0x638))(plVar14,0);
                    (**(code **)(*plVar14 + 0x838))(plVar14,0);
                    (**(code **)(*plVar14 + 0x500))(plVar14,2);
                    FUN_142398ec0(plVar14,1,2);
                    puVar2 = (undefined8 *)*puVar26;
                    iVar9 = (int)puVar26[1];
                    for (puVar15 = puVar2; puVar15 != puVar2 + iVar9; puVar15 = puVar15 + 1) {
                      if ((longlong *)*puVar15 == plVar14) {
                        if ((int)((longlong)puVar15 - (longlong)puVar2 >> 3) != -1)
                        goto LAB_1412b773b;
                        break;
                      }
                    }
                    *(int *)(puVar26 + 1) = iVar9 + 1;
                    if (*(int *)((longlong)puVar26 + 0xc) < iVar9 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar26);
                    }
                    *(longlong **)(*puVar26 + (longlong)iVar9 * 8) = plVar14;
LAB_1412b773b:
                    FUN_14234b150(plVar14);
                    local_100 = CONCAT44(local_100._4_4_,0x1000000);
                    local_f0 = 0;
                    FUN_142382f60(plVar14,param_1[0xe4],&local_100);
                    local_108 = local_108 + 1;
                  }
                }
              }
              if (local_d8 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
          }
          lVar10 = local_c0;
          iVar23 = local_a8 + 1;
          if (iVar23 < local_88 + local_b0) {
            lVar11 = (longlong)iVar23 * 8;
            iVar9 = local_88;
            iVar19 = local_b0;
            do {
              lVar13 = 0;
              if (iVar23 < iVar19) {
                lVar20 = *(longlong *)(lVar11 + local_b8);
              }
              else {
                lVar20 = *(longlong *)(local_90 + (longlong)(iVar23 - iVar19) * 8);
              }
              local_a0 = local_a0 + 1;
              if ((lVar20 != 0) &&
                 (lVar16 = AActor::GetLevel(), iVar9 = local_88, iVar19 = local_b0, lVar16 != 0)) {
                if ((local_c8 & 1) != 0) {
                  iVar1 = *(int *)(lVar20 + 0xc);
                  if (iVar1 < (int)DAT_1469e91c4) {
                    uVar18 = iVar1 >> 0x1f & 0xffff;
                    uVar8 = iVar1 + uVar18;
                    lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                             (longlong)(int)((uVar8 & 0xffff) - uVar18) * 0x18;
                  }
                  if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) != 0) goto LAB_1412b7931;
                }
                if (((local_c8 >> 1 & 1) == 0) ||
                   (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), iVar9 = local_88,
                   iVar19 = local_b0, cVar7 != '\0')) {
                  if ((local_c8 >> 2 & 1) != 0) {
                    if (((*(byte *)(lVar16 + 0x204) & 0x10) == 0) &&
                       ((*(byte *)(lVar16 + 0x205) & 0x10) == 0)) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    piVar3 = *(int **)(lVar16 + 600);
                    if (((*(longlong *)(lVar16 + 0xc0) == 0) ||
                        (piVar17 = (int *)UWorld::GetActiveLevelCollection(), piVar17 == (int *)0x0)
                        ) || (piVar3 == piVar17)) {
                      bVar5 = true;
                    }
                    else {
                      bVar5 = false;
                    }
                    if ((piVar3 == (int *)0x0) || (*piVar3 == 2)) {
                      bVar6 = true;
                    }
                    else {
                      bVar6 = false;
                    }
                    if ((bVar5) || (bVar5 = false, bVar6)) {
                      bVar5 = true;
                    }
                    iVar9 = local_88;
                    iVar19 = local_b0;
                    if ((!bVar4) || (!bVar5)) goto LAB_1412b7931;
                  }
                  lVar13 = ULevel::GetWorld();
                  iVar9 = local_88;
                  iVar19 = local_b0;
                  if (lVar13 == lVar10) {
                    lVar13 = AActor::GetLevel();
                    if (lVar13 == *(longlong *)(lVar10 + 0x30)) goto LAB_1412b7948;
                    lVar13 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    iVar9 = local_88;
                    iVar19 = local_b0;
                    if (!bVar4) goto LAB_1412b7948;
                  }
                }
              }
LAB_1412b7931:
              iVar23 = iVar23 + 1;
              lVar11 = lVar11 + 8;
              if (iVar9 + iVar19 <= iVar23) break;
            } while( true );
          }
          local_98 = 0;
          local_a4 = '\x01';
          lVar11 = local_f8;
          iVar9 = local_108;
        }
LAB_1412b797f:
        if (local_70 != '\0') {
          local_70 = '\0';
          UWorld::RemoveOnActorSpawnedHandler(local_c0,local_78);
          if (local_90 != 0) {
            FMemory::Free();
          }
          if (local_b8 != 0) {
            FMemory::Free();
          }
        }
        param_1 = local_e8;
        if (0 < iVar9) {
          plVar24 = local_e8 + 0x11c;
          plVar22 = (longlong *)*plVar24;
          iVar9 = (int)local_e8[0x11d];
          for (plVar14 = plVar22; plVar14 != plVar22 + iVar9; plVar14 = plVar14 + 1) {
            if (*plVar14 == lVar11) {
              if ((int)((longlong)plVar14 - (longlong)plVar22 >> 3) != -1) goto LAB_1412b7a1a;
              break;
            }
          }
          *(int *)(local_e8 + 0x11d) = iVar9 + 1;
          if (*(int *)((longlong)local_e8 + 0x8ec) < iVar9 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar24,iVar9);
          }
          *(longlong *)(*plVar24 + (longlong)iVar9 * 8) = lVar11;
        }
      }
LAB_1412b7a1a:
      FUN_1412d0ba0(param_1);
    }
  }
  return;
LAB_1412b7948:
  param_1 = local_e8;
  lVar11 = local_f8;
  puVar26 = local_e0;
  iVar9 = local_108;
  local_a8 = iVar23;
  local_98 = lVar20;
  if (local_a4 != '\0') goto LAB_1412b797f;
  goto LAB_1412b7512;
}



// FUNCTION 1412b7a60 FUN_1412b7a60 body=775 status=ok
// SIG undefined FUN_1412b7a60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b7a60(longlong *param_1,longlong *param_2)

{
  undefined1 (*pauVar1) [12];
  bool bVar2;
  undefined1 auVar3 [12];
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined4 local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  undefined1 local_2e8 [16];
  uint local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [8];
  longlong local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_220;
  undefined1 local_21c;
  undefined1 local_21b;
  longlong local_218;
  undefined1 local_1e8 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  if ((*(char *)((longlong)param_1 + 0x5a9) != '\0') &&
     (lVar5 = (**(code **)(*param_1 + 0x148))(), lVar5 != 0)) {
    FUN_140f9f650(local_2b8);
    lVar5 = UWorld::GetGameState<APVPGameState>(lVar5);
    if (lVar5 != 0) {
      plVar9 = *(longlong **)(lVar5 + 0x470);
      plVar8 = plVar9 + *(int *)(lVar5 + 0x478);
      for (; plVar9 != plVar8; plVar9 = plVar9 + 1) {
        lVar5 = *plVar9;
        cVar4 = FUniqueNetIdWrapper::operator==(lVar5 + 0x4b0,*param_2 + 8);
        if (cVar4 != '\0') {
          FWeakObjectPtr::operator=(local_2b8,lVar5);
          break;
        }
      }
    }
    FWeakObjectPtr::Get(local_2b8);
    local_318 = *param_2;
    local_310 = param_2[1];
    if (local_310 != 0) {
      LOCK();
      *(int *)(local_310 + 8) = *(int *)(local_310 + 8) + 1;
      UNLOCK();
    }
    lVar5 = FUN_1412af8b0(param_1 + 0xff);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar7 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    lVar10 = 0;
    if (lVar7 != 0) {
      lVar10 = *(longlong *)(lVar7 + 0xe0);
    }
    if ((lVar5 == 0) && (lVar10 != 0)) {
      local_220 = 0x10101;
      local_21c = 1;
      local_280 = *(undefined8 *)(*param_2 + 0x74);
      local_278 = *(undefined4 *)(*param_2 + 0x7c);
      puVar6 = (undefined8 *)FGuid::NewGuid(local_2c8);
      local_290 = *puVar6;
      uStack_288 = puVar6[1];
      local_21b = 2;
      pauVar1 = (undefined1 (*) [12])(*param_2 + 0x74);
      local_328 = *(undefined8 *)*pauVar1;
      local_320 = *(undefined4 *)(*param_2 + 0x7c);
      auVar3 = *pauVar1;
      local_1e8._12_4_ = 0;
      local_1e8._0_12_ = *pauVar1;
      local_280 = local_328;
      local_278 = local_320;
      local_218 = lVar10;
      if (*(longlong *)(lVar10 + 0x100) != 0) {
        lVar7 = AGPingUsable::GetPrivateStaticClass();
        local_298 = *(longlong *)(lVar10 + 0x100);
        for (lVar5 = local_298; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar7) goto LAB_1412b7c60;
        }
      }
      local_298 = 0;
LAB_1412b7c60:
      FUN_1412b7d70(param_1,local_2b8,lVar10);
      cVar4 = FWeakObjectPtr::IsValid(local_2a0);
      if ((cVar4 != '\0') &&
         (plVar8 = (longlong *)FWeakObjectPtr::Get(local_2a0), plVar8 != (longlong *)0x0)) {
        lVar5 = AUIWSRiver::StaticClass();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          local_308 = *param_2;
          local_300 = param_2[1];
          if (local_300 != 0) {
            LOCK();
            *(int *)(local_300 + 8) = *(int *)(local_300 + 8) + 1;
            UNLOCK();
          }
          FUN_1412cef00(plVar8,&local_308);
          local_2d8 = _DAT_146878340 & _DAT_146878350;
          uStack_2d4 = uRam0000000146878344 & uRam0000000146878354;
          uStack_2d0 = uRam0000000146878348 & uRam0000000146878358;
          uStack_2cc = uRam000000014687834c & uRam000000014687835c;
          local_2f8 = 0;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2ec = uRam000000014687834c;
          local_2e8._12_4_ = 0;
          local_2e8._0_12_ = auVar3;
          (**(code **)(*plVar8 + 0x728))(plVar8,&local_2f8,1,0);
        }
      }
    }
    FUN_140fa04a0(local_2b8);
  }
  return;
}



// FUNCTION 1412b7d70 FUN_1412b7d70 body=270 status=ok
// SIG undefined FUN_1412b7d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1412b7d70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  undefined1 local_298 [624];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_2a8 = param_3;
  local_2a0 = param_1;
  FUN_1412b0b60(local_298);
  if (((param_3 != 0) &&
      (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                         (param_1 + 0x754,param_1 + 0x788), cVar2 != '\0')) &&
     (cVar2 = FUN_140bf9690(0,param_1 + 0x754), cVar2 != '\0')) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x754);
    plVar5 = *(longlong **)(lVar3 + 0x1e8);
    plVar1 = plVar5 + *(int *)(lVar3 + 0x1f0);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_3) {
        uVar4 = 0;
        goto LAB_1412b7e4e;
      }
    }
  }
  if (*(char *)(param_2 + 0x9a) == '\0') {
    lVar3 = param_1 + 0x7d8;
    if (*(char *)(param_2 + 0x98) == '\0') {
      lVar3 = param_1 + 0x7e8;
    }
  }
  else {
    lVar3 = param_1 + 0x7f8;
  }
  uVar4 = FUN_1412b3c50(&local_2a8,param_2,lVar3,param_3);
LAB_1412b7e4e:
  FUN_140fa04a0(local_298);
  return uVar4;
}



// FUNCTION 1412b7e80 FUN_1412b7e80 body=355 status=ok
// SIG undefined FUN_1412b7e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1412b7e80(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined1 local_2b8 [624];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  FUN_1412b0b60(local_2b8);
  local_48 = param_1;
  if (((param_3 != 0) &&
      (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                         (param_1 + 0x754,param_1 + 0x788), cVar2 != '\0')) &&
     (cVar2 = FUN_140bf9690(0,param_1 + 0x754), cVar2 != '\0')) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x754);
    plVar4 = *(longlong **)(lVar3 + 0x1e8);
    plVar1 = plVar4 + *(int *)(lVar3 + 0x1f0);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_3) {
        lVar3 = 0;
        goto LAB_1412b7fb8;
      }
    }
  }
  if (*(char *)(param_2 + 0x9a) == '\0') {
    lVar3 = 0x7e8;
    if (*(char *)(param_2 + 0x98) != '\0') {
      lVar3 = 0x7d8;
    }
  }
  else {
    lVar3 = 0x7f8;
  }
  local_2c8 = param_4;
  lVar3 = FUN_1412b38b0(local_2b8,param_2,param_1 + lVar3,param_3);
  if (lVar3 != 0) {
    cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (param_1 + 0x754,param_1 + 0x788);
    if ((cVar2 == '\0') ||
       (((*(char *)(param_1 + 0x5aa) == '\0' || (*(char *)(param_2 + 0x9b) == '\0')) &&
        ((*(char *)(param_1 + 0x5a8) == '\0' || (*(char *)(param_2 + 0x9c) == '\0')))))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    FUN_1412cf680(param_1,lVar3,uVar5);
  }
LAB_1412b7fb8:
  FUN_140fa04a0(local_2b8);
  return lVar3;
}



// FUNCTION 1412b7ff0 FUN_1412b7ff0 body=216 status=ok
// SIG undefined FUN_1412b7ff0(void)

undefined8 FUN_1412b7ff0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = param_3;
  local_10 = param_1;
  if (((param_4 != 0) &&
      (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                         (param_1 + 0x754,param_1 + 0x788), cVar2 != '\0')) &&
     (cVar2 = FUN_140bf9690(0,param_1 + 0x754), cVar2 != '\0')) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x754);
    plVar5 = *(longlong **)(lVar3 + 0x1e8);
    plVar1 = plVar5 + *(int *)(lVar3 + 0x1f0);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_4) {
        return 0;
      }
    }
  }
  if (*(char *)(param_2 + 0x9a) == '\0') {
    lVar3 = param_1 + 0x7d8;
    if (*(char *)(param_2 + 0x98) == '\0') {
      lVar3 = param_1 + 0x7e8;
    }
  }
  else {
    lVar3 = param_1 + 0x7f8;
  }
  uVar4 = FUN_1412b45f0(&local_18,param_2,lVar3,param_4);
  return uVar4;
}



// FUNCTION 1412b80d0 FUN_1412b80d0 body=1508 status=ok
// SIG undefined FUN_1412b80d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412b80d0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8 [2];
  longlong local_3d0;
  undefined8 local_3c8;
  undefined4 local_3b8;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 local_398 [16];
  longlong *local_388;
  undefined1 local_370;
  ushort local_36e;
  undefined1 local_368 [16];
  undefined1 local_358 [8];
  longlong *local_350;
  undefined1 local_340 [8];
  longlong *local_338;
  undefined1 local_328 [8];
  longlong *local_320;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined1 local_2f8 [16];
  undefined4 local_2e8 [6];
  undefined1 local_2d0 [8];
  longlong local_2c8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined1 local_290 [24];
  undefined1 local_278 [43];
  char local_24d;
  char local_24c;
  undefined1 local_24b;
  undefined1 local_248 [464];
  longlong local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  lVar5 = 0;
  local_3d8[0] = 0;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    return;
  }
  if (param_1[0xe4] == 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if (*(longlong *)(*param_2 + 0xa8) == 0) {
    return;
  }
  cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                    ((longlong)param_1 + 0x754,param_1 + 0xf1);
  if ((cVar3 != '\0') && (cVar3 = FUN_140bf9690(0,(longlong)param_1 + 0x754), cVar3 != '\0')) {
    lVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
    plVar10 = *(longlong **)(lVar4 + 0x1e8);
    plVar8 = plVar10 + *(int *)(lVar4 + 0x1f0);
    if (plVar10 != plVar8) {
      do {
        if (*plVar10 == *param_2) {
          return;
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar8);
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_398);
  local_36e = local_36e | 4;
  local_370 = 1;
  local_388 = param_1;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  local_78 = param_2[4];
  lStack_70 = param_2[5];
  local_2f8 = *(undefined1 (*) [16])(param_2 + 6);
  local_58 = param_2[8];
  lStack_50 = param_2[9];
  if (lVar5 == 0) {
    fVar12 = 200.0;
  }
  else {
    fVar12 = *(float *)(lVar5 + 0x180);
  }
  lVar5 = *param_2;
  local_68._8_4_ = local_2f8._8_4_ + fVar12;
  local_68._0_8_ = local_2f8._0_8_;
  local_68._12_4_ = 0;
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x100) != 0)) {
    lVar6 = AGPingUsable::GetPrivateStaticClass();
    for (lVar4 = *(longlong *)(lVar5 + 0x100); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar6) {
        if (*(longlong *)(lVar5 + 0x100) != 0) {
          lVar5 = *param_2;
          if (*(longlong *)(lVar5 + 0x100) == 0) goto LAB_1412b83d2;
          lVar4 = AGPingUsable::GetPrivateStaticClass();
          local_3d0 = *(longlong *)(lVar5 + 0x100);
          lVar5 = local_3d0;
          goto joined_r0x0001412b83b9;
        }
        break;
      }
    }
  }
  local_3d0 = UCheckBoxWidgetStyle::StaticClass();
LAB_1412b829f:
  lVar5 = local_3d0;
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar8 = (longlong *)FUN_142550d00(uVar7,lVar5,&local_78,local_398);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x448))(plVar8,param_1);
    if ((*param_2 != 0) && (lVar5 = *(longlong *)(*param_2 + 0xa8), lVar5 != 0)) {
      plVar8[0x96] = lVar5;
    }
    FUN_14128c120(plVar8 + 0x9a,param_2);
    plVar8[0x93] = (longlong)param_1;
    FUN_14222b9f0(plVar8,&local_78,1,0);
    local_3d8[0] = 0x1010000;
    local_3c8 = 0;
    FUN_1422232e0(plVar8,param_1[0xe4],local_3d8,0);
    FUN_140f9f650(local_2e8);
    FWeakObjectPtr::operator=(local_2d0,plVar8);
    bVar11 = *param_2 == 0;
    if (bVar11) {
      uVar7 = FText::FText(local_358);
    }
    else {
      uVar7 = FText::FText(local_340,*param_2 + 0x30);
    }
    FText::operator=(local_290,uVar7);
    if ((bVar11) && (local_350 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_350 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_350)(local_350);
        LOCK();
        piVar1 = (int *)((longlong)local_350 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_350 + 8))(local_350,1);
        }
      }
    }
    if ((!bVar11) && (local_338 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_338 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_338)(local_338);
        LOCK();
        piVar1 = (int *)((longlong)local_338 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_338 + 8))(local_338,1);
        }
      }
    }
    bVar11 = *param_2 == 0;
    if (bVar11) {
      uVar7 = FText::FText(local_328);
    }
    else {
      uVar7 = FText::FText(local_310,*param_2 + 0x60);
    }
    FText::operator=(local_278,uVar7);
    if ((bVar11) && (local_320 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_320 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar1 = (int *)((longlong)local_320 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_320 + 8))(local_320,1);
        }
      }
    }
    if ((!bVar11) && (local_308 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_308 + 1;
      lVar5 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_308)(local_308);
        LOCK();
        piVar1 = (int *)((longlong)local_308 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_308 + 8))(local_308,1);
        }
      }
    }
    local_2b0 = (undefined4)param_2[6];
    uStack_2ac = *(undefined4 *)((longlong)param_2 + 0x34);
    local_3b8 = (undefined4)param_2[7];
    local_3a8 = (undefined4)param_2[4];
    uStack_3a4 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_3a0 = (undefined4)param_2[5];
    uStack_39c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_2a8 = local_3b8;
    puVar9 = (undefined8 *)FQuat::Rotator(&local_3a8,local_368);
    local_2a4 = *puVar9;
    local_29c = *(undefined4 *)(puVar9 + 1);
    local_2c8 = local_3d0;
    local_24b = 1;
    FUN_14128c120(local_248,param_2);
    lVar5 = *param_2;
    if (lVar5 != 0) {
      local_24c = *(char *)(lVar5 + 0x131);
      local_24d = *(char *)(lVar5 + 0x130);
    }
    plVar10 = param_1 + 0xfd;
    cVar3 = FUN_1412af5d0(plVar10,local_2e8);
    if (cVar3 == '\0') {
      FUN_1414f9190(param_1,plVar8,local_2e8);
      iVar2 = (int)param_1[0xfe];
      *(int *)(param_1 + 0xfe) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x7f4) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
        ResizeGrow(plVar10,iVar2);
      }
      FUN_1412b0b60((longlong)iVar2 * 0x270 + *plVar10,local_2e8);
    }
    if (((char)plVar8[0xb3] == '\0') ||
       (((*(char *)((longlong)param_1 + 0x5aa) == '\0' || (local_24d == '\0')) &&
        (((char)param_1[0xb5] == '\0' || (((char)param_1[0x1a4] != '\0' || (local_24c == '\0')))))))
       ) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    FUN_1412cf480(param_1,plVar8,uVar7,(char)param_1[0xb5]);
    FUN_140fa04a0(local_2e8);
  }
  return;
joined_r0x0001412b83b9:
  if (lVar5 == 0) goto LAB_1412b83d2;
  if (lVar5 == lVar4) goto LAB_1412b829f;
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001412b83b9;
LAB_1412b83d2:
  local_3d0 = 0;
  goto LAB_1412b829f;
}



// FUNCTION 1412b86c0 FUN_1412b86c0 body=494 status=ok
// SIG undefined FUN_1412b86c0(void)

void FUN_1412b86c0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_28;
  int local_20;
  
  if ((char)param_1[200] != '\0') {
    plVar8 = (longlong *)((longlong)param_1 + 0x754);
    cVar6 = FUN_140bf9690(0,plVar8);
    if (cVar6 == '\0') {
      plVar8 = param_1 + 0xf1;
    }
    local_res8 = (undefined4)*plVar8;
    local_resc = *(undefined4 *)((longlong)plVar8 + 4);
    cVar6 = FUN_140bf9690(0,&local_res8);
    if (cVar6 != '\0') {
      uVar7 = FWeakObjectPtr::Get(&local_res8);
      plVar8 = (longlong *)FUN_140585cd0(uVar7);
      lVar13 = 0;
      local_28 = 0;
      iVar12 = (int)plVar8[1];
      lVar10 = *plVar8;
      local_20 = iVar12;
      if (iVar12 != 0) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy(&local_28,iVar12,0);
        lVar13 = local_28;
        lVar10 = lVar10 - local_28;
        puVar9 = (undefined4 *)(local_28 + 0x40);
        do {
          *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)((longlong)puVar9 + lVar10 + -0x40);
          FString::FString(puVar9 + -0xe,lVar10 + -0x38 + (longlong)puVar9);
          puVar2 = (undefined8 *)((longlong)puVar9 + lVar10 + -0x20);
          uVar7 = puVar2[1];
          *(undefined8 *)(puVar9 + -8) = *puVar2;
          *(undefined8 *)(puVar9 + -6) = uVar7;
          puVar2 = (undefined8 *)((longlong)puVar9 + lVar10 + -0x10);
          uVar7 = puVar2[1];
          *(undefined8 *)(puVar9 + -4) = *puVar2;
          *(undefined8 *)(puVar9 + -2) = uVar7;
          puVar1 = (undefined4 *)((longlong)puVar9 + lVar10);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar3;
          puVar9[2] = uVar4;
          puVar9[3] = uVar5;
          *(undefined8 *)(puVar9 + 4) = *(undefined8 *)((longlong)puVar9 + lVar10 + 0x10);
          *(undefined8 *)(puVar9 + 6) = *(undefined8 *)((longlong)puVar9 + lVar10 + 0x18);
          puVar9 = puVar9 + 0x18;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      iVar12 = local_20;
      lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar10 != 0) {
        lVar10 = param_1[0xfd];
        lVar11 = (longlong)(int)param_1[0xfe] * 0x270 + lVar10;
        for (; lVar10 != lVar11; lVar10 = lVar10 + 0x270) {
          FUN_1412d2bb0(lVar10,param_1);
        }
        FUN_1412bdd20(param_1 + 0xfd,0);
        for (lVar10 = lVar13; lVar10 != (longlong)iVar12 * 0x60 + lVar13; lVar10 = lVar10 + 0x60) {
          FUN_1412b80d0(param_1,lVar10);
        }
      }
      if (iVar12 != 0) {
        plVar8 = (longlong *)(lVar13 + 8);
        do {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 0xc;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      if (lVar13 != 0) {
        FMemory::Free(lVar13);
      }
    }
  }
  cVar6 = FUN_140bf9690(0,param_1 + 0x12f);
  if (cVar6 != '\0') {
    FUN_1412d1c00(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1412b88b0 FUN_1412b88b0 body=236 status=ok
// SIG undefined FUN_1412b88b0(void)

void FUN_1412b88b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = DAT_1468787b8;
  lVar5 = DAT_1468787b8 + (longlong)DAT_1468787c0 * 0x28;
  lVar4 = DAT_1468787b8;
  do {
    if (lVar4 == lVar5) {
LAB_1412b892f:
      iVar2 = DAT_1468787c0;
      lVar5 = (longlong)DAT_1468787c0;
      DAT_1468787c0 = DAT_1468787c0 + 1;
      if (DAT_1468787c4 < DAT_1468787c0) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_1468787b8,iVar2);
      }
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(DAT_1468787b8 + lVar5 * 0x28,param_1);
LAB_1412b896c:
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FMemory::Free();
        return;
      }
      return;
    }
    cVar3 = FSoftObjectPath::operator==(lVar4 + 0x10,param_1 + 0x10);
    if (cVar3 != '\0') {
      if ((int)((lVar4 - lVar1) / 0x28) != -1) goto LAB_1412b896c;
      goto LAB_1412b892f;
    }
    lVar4 = lVar4 + 0x28;
  } while( true );
}



// FUNCTION 1412b89a0 FUN_1412b89a0 body=483 status=ok
// SIG undefined FUN_1412b89a0(void)

void FUN_1412b89a0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_1412b8ba0();
  if ((((*(longlong *)(param_1 + 0x498) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x938) != 0)) &&
      (lVar3 = FUN_1412994e0(), lVar3 != 0)) &&
     ((*(int *)(param_1 + 0x5f0) != -1 || (*(int *)(param_1 + 0x5f4) != -1)))) {
    uVar4 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
    iVar2 = FStaticMeshLODResources::GetNumVertices(uVar4);
    if (iVar2 != 0) {
      uVar4 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
      cVar1 = FUN_1424a4130(uVar4,param_1 + 0x5f0);
      *(bool *)(param_1 + 0x599) = cVar1 == '\0';
    }
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x938) != 0) &&
       (lVar3 = FUN_1412994e0(), lVar3 != 0)) {
      uVar4 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
      iVar2 = FStaticMeshLODResources::GetNumVertices(uVar4);
      if (iVar2 == 1) {
        return;
      }
    }
    if (((((*(longlong *)(param_1 + 0x538) != 0) && (*(int *)(param_1 + 0x5f0) != -1)) &&
         (*(int *)(param_1 + 0x5f4) != -1)) &&
        ((*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x930) != 0 &&
         (*(longlong *)(param_1 + 0x548) != 0)))) &&
       (FUN_1425a28b0(*(longlong *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x548)),
       *(longlong *)(param_1 + 0x550) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x930);
      local_18 = (float)*(int *)(param_1 + 0x5f0);
      local_10 = (float)*(int *)(lVar3 + 0xc0);
      local_c = (float)*(int *)(lVar3 + 0xc4);
      local_14 = (float)*(int *)(param_1 + 0x5f4);
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x550),&local_18);
      FUN_1425a2750(*(undefined8 *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x558));
    }
  }
  return;
}



// FUNCTION 1412b8ba0 FUN_1412b8ba0 body=1315 status=ok
// SIG undefined FUN_1412b8ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b8ba0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float local_80;
  float local_7c;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(float *)(param_1 + 0x588) == 0.0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar7 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if (lVar7 != 0) {
      *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(lVar7 + 0x180);
    }
  }
  FUN_142223710(param_1);
  lVar7 = *(longlong *)(param_1 + 0x498);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x118);
    if (lVar7 == 0) {
LAB_1412b8c71:
      lVar7 = 0;
    }
    else {
      lVar5 = FUN_1414f8420();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1412b8c71;
    }
    *(longlong *)(param_1 + 0x498) = lVar7;
  }
  if ((*(longlong *)(param_1 + 0x538) != 0) && (lVar7 != 0)) {
    plVar10 = (longlong *)(lVar7 + 0x8e0);
    plVar6 = (longlong *)*plVar10;
    iVar4 = *(int *)(lVar7 + 0x8e8);
    plVar1 = plVar6 + iVar4;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (*plVar6 == *(longlong *)(param_1 + 0x538)) goto LAB_1412b8cdf;
    }
    *(int *)(lVar7 + 0x8e8) = iVar4 + 1;
    if (*(int *)(lVar7 + 0x8ec) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10);
    }
    *(undefined8 *)(*plVar10 + (longlong)iVar4 * 8) = *(undefined8 *)(param_1 + 0x538);
  }
LAB_1412b8cdf:
  cVar3 = FUN_140bf9690(0,param_1 + 0x590);
  if (cVar3 == '\0') {
    local_98 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x540) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x168);
      if (lVar7 == 0) {
        local_98 = _DAT_1468b5d90;
        local_80 = DAT_1468b5d98;
      }
      else {
        local_98 = *(longlong **)(lVar7 + 0x220);
        local_80 = *(float *)(lVar7 + 0x228);
      }
      uStack_90 = CONCAT44(uStack_90._4_4_,local_80);
      local_88 = local_98;
      puVar8 = (undefined8 *)FLinearColor::FLinearColor(local_78,&local_88);
      local_98 = (longlong *)*puVar8;
      uStack_90 = puVar8[1];
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x540),&local_98);
    }
    if ((((*(longlong *)(param_1 + 0x498) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x938) != 0)) &&
        (lVar7 = FUN_1412994e0(), lVar7 != 0)) &&
       ((*(int *)(param_1 + 0x520) != -1 || (*(int *)(param_1 + 0x524) != -1)))) {
      uVar9 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
      iVar4 = FStaticMeshLODResources::GetNumVertices(uVar9);
      if (iVar4 != 0) {
        uVar9 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
        cVar3 = FUN_1424a4130(uVar9,param_1 + 0x520);
        *(bool *)(param_1 + 0x599) = cVar3 == '\0';
      }
    }
    if (*(longlong *)(param_1 + 0x498) != 0) {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x938) != 0) &&
         (lVar7 = FUN_1412994e0(), lVar7 != 0)) {
        uVar9 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
        iVar4 = FStaticMeshLODResources::GetNumVertices(uVar9);
        if (iVar4 == 1) goto LAB_1412b8fbc;
      }
      if ((((*(longlong *)(param_1 + 0x538) != 0) && (*(int *)(param_1 + 0x520) != -1)) &&
          (*(int *)(param_1 + 0x524) != -1)) &&
         ((*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x930) != 0 &&
          (local_98 = (longlong *)0x0, *(longlong *)(param_1 + 0x548) != 0)))) {
        FUN_1425a28b0(*(longlong *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x548));
        local_98 = (longlong *)0x0;
        if (*(longlong *)(param_1 + 0x550) != 0) {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x930);
          local_7c = (float)*(int *)(lVar7 + 0xc4);
          local_80 = (float)*(int *)(lVar7 + 0xc0);
          local_88 = (longlong *)
                     CONCAT44((float)*(int *)(param_1 + 0x524),(float)*(int *)(param_1 + 0x520));
          FUN_1425a2be0(*(undefined8 *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x550),&local_88)
          ;
          FUN_1425a2750(*(undefined8 *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x558));
        }
      }
    }
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x590);
    lVar7 = *(longlong *)(lVar7 + 0x168);
    if (lVar7 == 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = _DAT_146878340 & _DAT_146878350;
      uStack_44 = uRam0000000146878344 & uRam0000000146878354;
      uStack_40 = uRam0000000146878348 & uRam0000000146878358;
      uStack_3c = uRam000000014687834c & uRam000000014687835c;
      uVar9 = 0;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = uRam000000014687834c;
    }
    else {
      local_58 = *(undefined8 *)(lVar7 + 0x220);
      uStack_50 = *(undefined8 *)(lVar7 + 0x228);
      local_48 = *(uint *)(lVar7 + 0x230);
      uStack_44 = *(uint *)(lVar7 + 0x234);
      uStack_40 = *(uint *)(lVar7 + 0x238);
      uStack_3c = *(uint *)(lVar7 + 0x23c);
      local_68 = *(undefined4 *)(lVar7 + 0x210);
      uStack_64 = *(undefined4 *)(lVar7 + 0x214);
      uStack_60 = *(undefined4 *)(lVar7 + 0x218);
      uVar9 = extraout_XMM0_Qa;
      uStack_5c = *(uint *)(lVar7 + 0x21c);
    }
    local_a8 = 0;
    FUN_14223d270(uVar9,&local_68,0,0);
  }
LAB_1412b8fbc:
  if ((*(longlong *)(param_1 + 0x538) != 0) && (*(longlong *)(param_1 + 0x530) != 0)) {
    if (*(float *)(*(longlong *)(param_1 + 0x530) + 0x138) != 0.0) {
      FUN_1425a2750(*(longlong *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x568));
    }
    uVar9 = FUN_1429f11d0();
    AActor::GetComponentsByClass(param_1,&local_88,uVar9);
    plVar1 = local_88 + (int)local_80;
    for (plVar6 = local_88; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      lVar7 = *plVar6;
      if (lVar7 != 0) {
        lVar5 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(undefined4 *)(lVar7 + 0x34c) = *(undefined4 *)(*(longlong *)(param_1 + 0x530) + 0x134);
        }
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  FUN_1414f5b10(param_1);
  return;
}



// FUNCTION 1412b90d0 FUN_1412b90d0 body=138 status=ok
// SIG undefined FUN_1412b90d0(void)

void FUN_1412b90d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    lVar2 = FUN_1414f8420();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1412b9121;
  }
  lVar4 = 0;
LAB_1412b9121:
  *(longlong *)(param_1 + 0x470) = lVar4;
  if (lVar4 != 0) {
    uVar3 = FWeakObjectPtr::Get(lVar4 + 0x780);
    *(undefined8 *)(param_1 + 0x468) = uVar3;
  }
  FUN_1412b6640(param_1);
  FUN_142223710(param_1);
  return;
}



// FUNCTION 1412b9160 FUN_1412b9160 body=1324 status=ok
// SIG undefined FUN_1412b9160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b9160(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  wchar_t *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  longlong *local_68;
  longlong local_60;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  pwVar15 = (wchar_t *)0x0;
  local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffff00000000);
  FUN_1412b8ba0();
  lVar10 = param_1[0xa5];
  if (lVar10 != 0) {
    lVar5 = FUN_142f47520();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar5 = FUN_142f429c0(uVar6);
      if (lVar5 == 0) {
        FWeakObjectPtr::operator=((longlong)param_1 + 0x5cc,0);
      }
      else {
        uVar6 = FUN_142f428d0(lVar5,lVar10);
        FWeakObjectPtr::operator=((longlong)param_1 + 0x5cc,uVar6);
      }
      goto LAB_1412b9450;
    }
  }
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar10 != 0) {
    pwVar7 = (wchar_t *)AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
    local_a0 = (**(code **)(*param_1 + 0x148))(param_1);
    pwVar11 = pwVar15;
    if (pwVar7 != (wchar_t *)0x0) {
      pwVar8 = (wchar_t *)AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
      pwVar12 = pwVar7;
      do {
        pwVar11 = pwVar7;
        if (pwVar12 == pwVar8) break;
        pwVar12 = *(wchar_t **)(pwVar12 + 0x18);
        pwVar11 = pwVar15;
      } while (pwVar12 != (wchar_t *)0x0);
    }
    local_98 = 5;
    local_40 = '\0';
    local_a8 = pwVar11;
    FUN_14044bc80(&uStack_90,&local_a0,&local_a8);
    FUN_14045a130(&local_98);
    pwVar11 = pwVar15;
    plVar2 = local_68;
    while (pwVar7 = pwVar15, (char)uStack_74 == '\0') {
      local_68 = plVar2;
      if (plVar2 == (longlong *)0x0) {
LAB_1412b9314:
        bVar1 = false;
      }
      else {
        pwVar11 = (wchar_t *)0x1;
        puVar9 = (undefined8 *)UObjectBaseUtility::GetFullGroupName(plVar2,&local_b8,0);
        if ((int)param_1[0x9c] == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)param_1[0x9b];
        }
        if (*(int *)(puVar9 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar9;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
        if (iVar4 != 0) goto LAB_1412b9314;
        bVar1 = true;
      }
      if ((pwVar11 != (wchar_t *)0x0) && (pwVar11 = (wchar_t *)0x0, local_b8 != 0)) {
        FMemory::Free();
      }
      if (bVar1) {
        FWeakObjectPtr::operator=(param_1 + 0xb2,plVar2);
        uVar6 = UUGHitTextureButton::GetPrivateStaticClass();
        pwVar7 = (wchar_t *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
        pwVar11 = pwVar7;
        if (pwVar7 == (wchar_t *)0x0) {
          uVar6 = UUGButton::GetPrivateStaticClass();
          pwVar11 = (wchar_t *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
        }
        FWeakObjectPtr::operator=((longlong)param_1 + 0x5cc,pwVar11);
        break;
      }
      FUN_14045a130(&local_98);
      plVar2 = local_68;
    }
    if (local_40 != '\0') {
      local_40 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(CONCAT44(uStack_8c,uStack_90),local_48);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (CONCAT44(uStack_84,local_88) != 0) {
        FMemory::Free();
      }
    }
    if ((pwVar7 != (wchar_t *)0x0) && (1 < *(int *)(pwVar7 + 0x390))) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar10 = UWorld::GetGameState<APVPGameState>(uVar6);
      if (lVar10 != 0) {
        FWeakObjectPtr::operator=(&local_b8,0);
        local_b0 = 0;
        puVar9 = (undefined8 *)FName::FName(&local_a0,L"OnTravelIDsChanged",1);
        FWeakObjectPtr::operator=(&local_b8,param_1);
        local_b0 = *puVar9;
        FUN_1406a5aa0(lVar10 + 0xa28,&local_b8);
      }
    }
  }
LAB_1412b9450:
  lVar10 = FUN_1412c3210(param_1);
  (**(code **)(*param_1 + 0x748))(param_1);
  if (lVar10 != 0) {
    lVar5 = FUN_142f477c0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(undefined1 *)(param_1 + 0xb9) = 1, (char)param_1[0xb3] != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x599) = 0;
    }
  }
  cVar3 = FUN_140bf9690(0,(longlong)param_1 + 0x5cc);
  if (cVar3 != '\0') {
    lVar10 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
    lVar10 = *(longlong *)(lVar10 + 0x118);
    if (lVar10 != 0) {
      lVar5 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar10 = *(longlong *)(lVar10 + 0x168);
        if (lVar10 == 0) {
          local_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          local_78 = _DAT_146878340 & _DAT_146878350;
          uStack_74 = uRam0000000146878344 & uRam0000000146878354;
          uStack_70 = uRam0000000146878348 & uRam0000000146878358;
          uStack_6c = uRam000000014687834c & uRam000000014687835c;
          local_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = uRam000000014687834c;
        }
        else {
          local_88 = *(undefined4 *)(lVar10 + 0x220);
          uStack_84 = *(undefined4 *)(lVar10 + 0x224);
          uStack_80 = *(undefined4 *)(lVar10 + 0x228);
          uStack_7c = *(undefined4 *)(lVar10 + 0x22c);
          local_78 = *(uint *)(lVar10 + 0x230);
          uStack_74 = *(uint *)(lVar10 + 0x234);
          uStack_70 = *(uint *)(lVar10 + 0x238);
          uStack_6c = *(uint *)(lVar10 + 0x23c);
          local_98 = *(undefined4 *)(lVar10 + 0x210);
          uStack_94 = *(undefined4 *)(lVar10 + 0x214);
          uStack_90 = *(undefined4 *)(lVar10 + 0x218);
          uStack_8c = *(uint *)(lVar10 + 0x21c);
        }
        (**(code **)(*param_1 + 0x728))
                  (param_1,&local_98,CONCAT71((int7)((ulonglong)(lVar5 + 0x88) >> 8),1),0);
        lVar10 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
        if (lVar10 != 0) {
          lVar5 = UUGButton::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            pwVar11 = _guard_xfg_dispatch_icall_nop
                                (L"&ThisClass::OnFastTravelStationDiscovered",L"::");
            while (pwVar7 = pwVar11, pwVar7 != (wchar_t *)0x0) {
              pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
              pwVar15 = pwVar7;
            }
            FName::FName(&local_a0,pwVar15 + 2,1);
            lVar5 = local_a0;
            FWeakObjectPtr::operator=(&local_b8,0);
            local_b0 = 0;
            FWeakObjectPtr::operator=(&local_b8,param_1);
            local_b0 = lVar5;
            local_a8 = (wchar_t *)0x0;
            if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_b8), lVar5 != 0)) {
              UObject::FindFunction(lVar5,local_b0);
            }
            FUN_1406a5aa0(lVar10 + 0x718,&local_b8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412b9690 FUN_1412b9690 body=2798 status=ok
// SIG undefined FUN_1412b9690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1412b9690(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined4 uVar15;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  int local_e0;
  ulonglong local_d8 [2];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *(undefined2 *)(param_1 + 0x5a9) = 0;
  *(undefined1 *)(param_1 + 0x5a8) = 0;
  *(undefined1 *)(param_1 + 0x9c8) = 0;
  FUN_1412cd930();
  pwVar13 = (wchar_t *)0x0;
  *(undefined1 *)(param_1 + 0xd20) = 0;
  local_f8 = (code *)0x0;
  uStack_f0 = 0;
  uVar6 = FUN_1412c3780(&local_f8,param_1);
  FWeakObjectPtr::operator=(param_1 + 0x788,uVar6);
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x788);
  pwVar7 = pwVar13;
  if (cVar4 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x788);
    pwVar7 = (wchar_t *)FUN_14129f920(uVar6);
  }
  FWeakObjectPtr::operator=(param_1 + 0x790,pwVar7);
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x788);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x78c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x790);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x794);
  FUN_1412cd7b0(param_1 + 0x7e8,0);
  FUN_1412cd7b0(param_1 + 0x7d8,0);
  FUN_1412cd7b0(param_1 + 0x7f8,0);
  FUN_1412be890(param_1);
  FUN_1412c4410(param_1,1);
  FUN_1412c4670(param_1,1);
  FUN_1412c4200(param_1,1);
  FUN_1412bc1c0(param_1);
  *(undefined1 *)(param_1 + 0x90c) = 0;
  AActor::SetActorTickEnabled(param_1,1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  pwVar7 = pwVar13;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    pwVar7 = *(wchar_t **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if (pwVar7 != (wchar_t *)0x0) {
    *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(pwVar7 + 0xc2);
  }
  pwVar7 = *(wchar_t **)(param_1 + 0x118);
  if (pwVar7 != (wchar_t *)0x0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1412b9865;
  }
  pwVar7 = pwVar13;
LAB_1412b9865:
  plVar11 = *(longlong **)(param_1 + 0x940);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x290))(plVar11,0,1);
    FUN_142398ec0(*(undefined8 *)(param_1 + 0x940),0,1);
    lVar8 = *(longlong *)(param_1 + 0x940);
    *(undefined4 *)(lVar8 + 0x310) = 0;
    if (*(int *)(lVar8 + 0x314) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar8 + 0x308,0);
    }
    lVar8 = *(longlong *)(param_1 + 0x940);
    iVar5 = *(int *)(lVar8 + 0x310);
    *(int *)(lVar8 + 0x310) = iVar5 + 1;
    if (*(int *)(lVar8 + 0x314) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x308,iVar5);
    }
    *(longlong *)(*(longlong *)(lVar8 + 0x308) + (longlong)iVar5 * 8) = param_1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x940) + 0x2d0) = 2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x940) + 0x319) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x940) + 0x32e) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x940) + 0x31a) = 1;
    if (pwVar7 == (wchar_t *)0x0) {
      lVar8 = *(longlong *)(param_1 + 0x940);
      puVar9 = (undefined8 *)(lVar8 + 0x398);
      if ((undefined *)*puVar9 != &DAT_14475c74c) {
        *(undefined4 *)(lVar8 + 0x3a0) = 0;
        iVar5 = 0;
        pwVar10 = pwVar13;
        if (*(int *)(lVar8 + 0x3a4) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar9);
          pwVar10 = (wchar_t *)(ulonglong)*(uint *)(lVar8 + 0x3a0);
          iVar5 = *(int *)(lVar8 + 0x3a4);
        }
        if (iVar5 < (int)pwVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar9);
        }
      }
    }
    else {
      cVar4 = APlayerController::IsPrimaryPlayer(pwVar7);
      if (cVar4 == '\0') {
        local_d8[0] = local_d8[0] & 0xffffffff00000000;
        FUN_142710360(pwVar7,local_d8);
        FStringFormatArg::FStringFormatArg(local_c8,(int)local_d8[0] + 1);
        local_e8 = 0;
        local_e0 = 1;
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_e8,1);
        FStringFormatArg::FStringFormatArg(local_e8,local_c8);
        uVar6 = FString::Format(&local_f8,L"SceneCapture_MainView_P{0}",&local_e8);
        FString::operator=(*(longlong *)(param_1 + 0x940) + 0x398,uVar6);
        if (local_f8 != (code *)0x0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          plVar11 = (longlong *)(local_e8 + 0x10);
          iVar5 = local_e0;
          do {
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (local_e8 != 0) {
          FMemory::Free();
        }
        if (local_b8 != 0) {
          FMemory::Free();
        }
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x940);
        plVar11 = (longlong *)(lVar8 + 0x398);
        if ((wchar_t *)*plVar11 != L"SceneCapture_MainView_P1") {
          *(undefined4 *)(lVar8 + 0x3a0) = 0;
          pwVar10 = pwVar13;
          if (*(int *)(lVar8 + 0x3a4) != 0x19) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar11,0x19);
            pwVar10 = (wchar_t *)(ulonglong)*(uint *)(lVar8 + 0x3a0);
          }
          iVar5 = (int)pwVar10 + 0x19;
          *(int *)(lVar8 + 0x3a0) = iVar5;
          if (*(int *)(lVar8 + 0x3a4) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar11);
          }
          builtin_wcsncpy((wchar_t *)*plVar11,L"SceneCapture_MainView_P1",0x19);
        }
      }
    }
  }
  plVar11 = *(longlong **)(param_1 + 0x948);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x290))(plVar11,0,1);
    FUN_142398ec0(*(undefined8 *)(param_1 + 0x948),0,1);
    lVar8 = *(longlong *)(param_1 + 0x948);
    *(undefined4 *)(lVar8 + 0x310) = 0;
    if (*(int *)(lVar8 + 0x314) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar8 + 0x308,0);
    }
    lVar8 = *(longlong *)(param_1 + 0x948);
    iVar5 = *(int *)(lVar8 + 0x310);
    *(int *)(lVar8 + 0x310) = iVar5 + 1;
    if (*(int *)(lVar8 + 0x314) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x308,iVar5);
    }
    *(longlong *)(*(longlong *)(lVar8 + 0x308) + (longlong)iVar5 * 8) = param_1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x2d0) = 2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x319) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x31a) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x32f) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x32b) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x332) = 1;
    if (pwVar7 == (wchar_t *)0x0) {
      lVar8 = *(longlong *)(param_1 + 0x948);
      puVar9 = (undefined8 *)(lVar8 + 0x398);
      if ((undefined *)*puVar9 != &DAT_14475c8fc) {
        *(undefined4 *)(lVar8 + 0x3a0) = 0;
        iVar5 = 0;
        pwVar7 = pwVar13;
        if (*(int *)(lVar8 + 0x3a4) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar9);
          pwVar7 = (wchar_t *)(ulonglong)*(uint *)(lVar8 + 0x3a0);
          iVar5 = *(int *)(lVar8 + 0x3a4);
        }
        if (iVar5 < (int)pwVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar9);
        }
      }
    }
    else {
      cVar4 = APlayerController::IsPrimaryPlayer(pwVar7);
      if (cVar4 == '\0') {
        local_d8[0] = local_d8[0] & 0xffffffff00000000;
        FUN_142710360(pwVar7,local_d8);
        FStringFormatArg::FStringFormatArg(local_c8,(int)local_d8[0] + 1);
        local_e8 = 0;
        local_e0 = 1;
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_e8,1);
        FStringFormatArg::FStringFormatArg(local_e8,local_c8);
        uVar6 = FString::Format(&local_f8,L"SceneCapture_MiniMap_P{0}",&local_e8);
        FString::operator=(*(longlong *)(param_1 + 0x948) + 0x398,uVar6);
        if (local_f8 != (code *)0x0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          plVar11 = (longlong *)(local_e8 + 0x10);
          iVar5 = local_e0;
          do {
            if (*plVar11 != 0) {
              FMemory::Free();
            }
            plVar11 = plVar11 + 4;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (local_e8 != 0) {
          FMemory::Free();
        }
        if (local_b8 != 0) {
          FMemory::Free();
        }
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x948);
        plVar11 = (longlong *)(lVar8 + 0x398);
        if ((wchar_t *)*plVar11 != L"SceneCapture_MiniMap_P1") {
          *(undefined4 *)(lVar8 + 0x3a0) = 0;
          pwVar7 = pwVar13;
          if (*(int *)(lVar8 + 0x3a4) != 0x18) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar11,0x18);
            pwVar7 = (wchar_t *)(ulonglong)*(uint *)(lVar8 + 0x3a0);
          }
          iVar5 = (int)pwVar7 + 0x18;
          *(int *)(lVar8 + 0x3a0) = iVar5;
          if (*(int *)(lVar8 + 0x3a4) < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar11);
          }
          builtin_wcsncpy((wchar_t *)*plVar11,L"SceneCapture_MiniMap_P1",0x18);
        }
      }
    }
    uVar6 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar6,L"minip");
    if (cVar4 == '\0') {
      uVar6 = FCommandLine::Get();
      cVar4 = FParse::Param(uVar6,L"nominip");
      if (cVar4 != '\0') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x32b) = 0;
      }
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x32b) = 1;
    }
  }
  FUN_1412bb5f0(param_1);
  FUN_142223710(param_1);
  FUN_1412d27e0(param_1);
  uVar15 = FUN_14129a890();
  pwVar7 = *(wchar_t **)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x6e8) = uVar15;
  pwVar10 = pwVar13;
  pwVar14 = pwVar13;
  if (pwVar7 != (wchar_t *)0x0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar10 = pwVar7;
      pwVar14 = *(wchar_t **)(pwVar7 + 0x64c);
    }
  }
  if (pwVar14 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AZoneMapViewer::ChallengesRegistered",L"::");
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar13 = pwVar2;
    }
    FName::FName(&local_e8,pwVar13 + 2,1);
    uVar3 = local_e8;
    FWeakObjectPtr::operator=(&local_f8,0);
    uStack_f0 = 0;
    FWeakObjectPtr::operator=(&local_f8,param_1);
    uStack_f0 = uVar3;
    local_d8[0] = 0;
    if ((uVar3 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_f8), lVar8 != 0)) {
      UObject::FindFunction(lVar8,uStack_f0);
    }
    FUN_1406a5aa0(pwVar14 + 0xbc,&local_f8);
  }
  local_d8[1] = 0;
  local_f8 = FUN_1412bb5f0;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  uVar6 = AActor::GetWorldTimerManager(param_1);
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    *(undefined4 *)(plVar11 + 2) = (undefined4)local_f8;
    *(undefined4 *)((longlong)plVar11 + 0x14) = local_f8._4_4_;
    *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_f0._4_4_;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar11[5] = lVar8;
    *plVar11 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_100 = 0xbf800000;
  local_108 = 1;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar6,local_d8 + 1,&local_a8,0x3dcccccd);
  if (local_48 != 0) {
    plVar12 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar12 = local_58;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    lVar8 = FMemory::Realloc(plVar11,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  if (pwVar10 == (wchar_t *)0x0) {
    *(undefined8 *)(param_1 + 0x9d0) = 0;
  }
  else {
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    local_f8 = FUN_1412c9760;
    pwVar13 = pwVar10 + 0x9c4;
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_f8;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_f8._4_4_;
      *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_f0._4_4_;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar8;
      *plVar11 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(pwVar13,1);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_e8);
      iVar5 = *(int *)(pwVar10 + 0x9c8);
      *(int *)(pwVar10 + 0x9c8) = iVar5 + 1;
      if (*(int *)(pwVar10 + 0x9ca) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar13,iVar5);
      }
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)pwVar13);
      *puVar9 = plVar11;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    local_f8 = (code *)&LAB_1412c97e0;
    pwVar13 = pwVar10 + 0x9d0;
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_f8;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_f8._4_4_;
      *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_f0._4_4_;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar8;
      *plVar11 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(pwVar13,1);
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_e8);
      iVar5 = *(int *)(pwVar10 + 0x9d4);
      *(int *)(pwVar10 + 0x9d4) = iVar5 + 1;
      if (*(int *)(pwVar10 + 0x9d6) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar13,iVar5);
      }
      puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)pwVar13);
      *puVar9 = plVar11;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    uVar6 = FUN_140cff230(pwVar10);
    *(undefined8 *)(param_1 + 0x9d0) = uVar6;
  }
  return;
}



// FUNCTION 1412ba180 FUN_1412ba180 body=207 status=ok
// SIG undefined FUN_1412ba180(void)

void FUN_1412ba180(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142385110();
  lVar4 = 0;
  if (param_1[0xe9] != 0) goto LAB_1412ba1f3;
  lVar3 = param_1[0x23];
  if (lVar3 == 0) {
LAB_1412ba1e4:
    lVar3 = lVar4;
  }
  else {
    lVar2 = FUN_1414f8420();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412ba1e4;
  }
  param_1[0xe9] = lVar3;
LAB_1412ba1f3:
  if (*(float *)(param_1 + 0xe5) == 0.0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0xe5) = *(undefined4 *)(lVar4 + 0x180);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001412ba248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8e8))(param_1);
  return;
}



// FUNCTION 1412ba250 FUN_1412ba250 body=530 status=ok
// SIG undefined FUN_1412ba250(void)

void FUN_1412ba250(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  FUN_142385110();
  if (param_1[0xe9] != 0) goto LAB_1412ba2b4;
  lVar6 = param_1[0x23];
  if (lVar6 == 0) {
LAB_1412ba2ab:
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_1414f8420();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1412ba2ab;
  }
  param_1[0xe9] = lVar6;
LAB_1412ba2b4:
  if (*(float *)(param_1 + 0xe5) == 0.0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar6 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if (lVar6 != 0) {
      *(undefined4 *)(param_1 + 0xe5) = *(undefined4 *)(lVar6 + 0x180);
    }
  }
  (**(code **)(*param_1 + 0x8e8))(param_1);
  if ((param_1[0xe9] != 0) && (lVar6 = *(longlong *)(param_1[0xe9] + 0x118), lVar6 != 0)) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar6 = FUN_140cff230(lVar6), lVar6 != 0)) {
      plVar1 = (longlong *)(lVar6 + 0x4d0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143fcff50;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = 0x412c97f0;
        *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
        *(undefined4 *)(plVar7 + 3) = 0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_1c;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar5;
        *plVar7 = (longlong)&PTR_FUN_143fcff98;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar2 = *(int *)(lVar6 + 0x4d8);
        *(int *)(lVar6 + 0x4d8) = iVar2 + 1;
        if (*(int *)(lVar6 + 0x4dc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar8 = plVar7;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      lVar5 = param_1[0xe0];
      uVar4 = FUN_140d3ba70(lVar6);
      (**(code **)(lVar5 + 0x48))(param_1 + 0xe0,uVar4);
    }
  }
  return;
}



// FUNCTION 1412ba470 FUN_1412ba470 body=89 status=ok
// SIG undefined FUN_1412ba470(void)

void FUN_1412ba470(longlong param_1)

{
  longlong lVar1;
  
  FUN_142385110();
  if (*(float *)(param_1 + 0x7bc) == 0.0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(lVar1 + 0x180);
    }
  }
  return;
}



// FUNCTION 1412ba4d0 Broadcast body=177 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,bool,FString_const_&>::Broadcast
               (longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1412ba538:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
        if (cVar3 == '\0') goto LAB_1412ba538;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1412ba590 FUN_1412ba590 body=11 status=ok
// SIG undefined FUN_1412ba590(void)

bool FUN_1412ba590(longlong param_1)

{
  return *(char *)(param_1 + 0xd21) == '\0';
}



// FUNCTION 1412ba5a0 FUN_1412ba5a0 body=24 status=ok
// SIG undefined FUN_1412ba5a0(void)

undefined1 FUN_1412ba5a0(longlong param_1)

{
  if ((*(char *)(param_1 + 0xd21) == '\0') && (*(byte *)(param_1 + 0xd20) < 2)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1412ba5c0 FUN_1412ba5c0 body=11 status=ok
// SIG undefined FUN_1412ba5c0(void)

bool FUN_1412ba5c0(longlong param_1)

{
  return *(char *)(param_1 + 0xd20) == '\0';
}



// FUNCTION 1412ba5d0 FUN_1412ba5d0 body=362 status=ok
// SIG undefined FUN_1412ba5d0(void)

ulonglong FUN_1412ba5d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  uint7 uVar6;
  ulonglong uVar7;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x498) == 0) goto LAB_1412ba723;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x118);
  if (lVar5 == 0) {
LAB_1412ba697:
    cVar2 = '\0';
LAB_1412ba69a:
    cVar3 = '\0';
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412ba697;
    cVar2 = FUN_140cee9c0(lVar5);
    lVar5 = *(longlong *)(lVar5 + 0x848);
    if (lVar5 == 0) goto LAB_1412ba69a;
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412ba69a;
    cVar3 = UKeyLabel::GetDisplayNameVisibility_Implementation(lVar5);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x590);
  in_RAX = 0;
  if (lVar5 != 0) {
    lVar4 = FUN_14148cad0();
    uVar6 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      in_RAX = (ulonglong)uVar6 << 8;
    }
    else {
      in_RAX = CONCAT71(uVar6,1);
    }
    if ((((char)in_RAX != '\0') && (cVar2 == '\0')) && (cVar3 == '\0')) {
      lVar4 = FUN_141224090(lVar5,local_18);
      if ((*(int *)(lVar4 + 8) < 1) || (*(char *)(lVar5 + 0xbda) != '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      if (local_18[0] == 0) {
        return uVar7;
      }
      FMemory::Free();
      return uVar7;
    }
  }
LAB_1412ba723:
  return in_RAX & 0xffffffffffffff00;
}


