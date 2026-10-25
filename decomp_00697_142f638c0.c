// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f638c0 RegisterReferencedObject body=28 status=ok
// SIG undefined RegisterReferencedObject(void)

void UGameInstance::RegisterReferencedObject(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_140bf9840(param_1 + 0x50,local_res10);
  return;
}



// FUNCTION 142f638e0 FUN_142f638e0 body=560 status=ok
// SIG undefined FUN_142f638e0(void)

undefined8 FUN_142f638e0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x40);
  if (cVar2 != '\0') {
    return 1;
  }
  cVar2 = FUN_142f5f710(param_1);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1);
    plVar10 = (longlong *)0x0;
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 == *(int *)(param_1 + 8)) || (*(longlong *)(param_1 + 0x10) == 0))
      goto LAB_142f63afd;
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 8) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(param_1);
      if (lVar3 == 0) goto LAB_142f63afd;
    }
    lVar4 = FUN_14171bfe0();
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
      lVar4 = FUN_142f71d80();
      do {
        if (lVar3 == lVar4) {
          plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
          plVar9 = plVar10;
          if (plVar5 == (longlong *)0x0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 == *(int *)(param_1 + 8)) || (*(longlong *)(param_1 + 0x10) == 0))
            goto LAB_142f63ab6;
            lVar3 = FUN_141796df0();
            FWeakObjectPtr::operator=(param_1,lVar3);
            if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 8) = DAT_1464b56f4;
            }
            plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
            if (plVar5 == (longlong *)0x0) goto LAB_142f63ab6;
          }
          lVar3 = FUN_14171bfe0();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_142f63ab6;
          plVar6 = (longlong *)FUN_142f71d80();
          plVar8 = plVar5;
          goto LAB_142f63aa5;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  goto LAB_142f63afd;
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar10, plVar8 != (longlong *)0x0) {
LAB_142f63aa5:
    plVar9 = plVar5;
    if (plVar8 == plVar6) break;
  }
LAB_142f63ab6:
  lVar3 = plVar9[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar3 = plVar9[0x1f];
  }
  uVar7 = FUN_142f5c080(lVar3,param_1 + 0x30);
  FWeakObjectPtr::operator=(param_1 + 0x40,uVar7);
  FWeakObjectPtr::Get(param_1 + 0x40);
LAB_142f63afd:
  uVar7 = FWeakObjectPtr::IsValid(param_1 + 0x40);
  return uVar7;
}



// FUNCTION 142f63b10 FUN_142f63b10 body=9 status=ok
// SIG undefined FUN_142f63b10(void)

void FUN_142f63b10(longlong param_1)

{
  FWeakObjectPtr::IsValid(param_1 + 0x20);
  return;
}



// FUNCTION 142f63b20 FUN_142f63b20 body=248 status=ok
// SIG undefined FUN_142f63b20(void)

undefined8 FUN_142f63b20(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_res8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 4);
  if (cVar2 != '\0') {
    return 1;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_res8);
  if (local_res8 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142f71d80();
    for (plVar1 = local_res8; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar3) {
        cVar2 = FUN_142f5f6a0(param_1);
        if (cVar2 != '\0') {
          if (local_res8 == (longlong *)0x0) goto LAB_142f63bc0;
          plVar3 = (longlong *)FUN_142f71d80();
          plVar1 = local_res8;
          goto joined_r0x000142f63bb0;
        }
        break;
      }
    }
  }
  goto LAB_142f63c04;
joined_r0x000142f63bb0:
  if (plVar1 == (longlong *)0x0) goto LAB_142f63bc0;
  plVar6 = local_res8;
  if (plVar1 == plVar3) goto LAB_142f63bc2;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000142f63bb0;
LAB_142f63bc0:
  plVar6 = (longlong *)0x0;
LAB_142f63bc2:
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
  }
  uVar4 = FUN_142f5bca0(lVar5,param_1 + 2);
  FWeakObjectPtr::operator=(param_1 + 4,uVar4);
  FWeakObjectPtr::Get(param_1 + 4);
LAB_142f63c04:
  uVar4 = FWeakObjectPtr::IsValid(param_1 + 4);
  return uVar4;
}



// FUNCTION 142f63c20 FUN_142f63c20 body=92 status=ok
// SIG undefined FUN_142f63c20(void)

undefined1 FUN_142f63c20(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    plVar2 = (longlong *)FUN_142f71d80();
    param_1 = (longlong *)*param_1;
    for (plVar1 = param_1; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar2) goto LAB_142f63c50;
    }
  }
  param_1 = (longlong *)0x0;
LAB_142f63c50:
  lVar3 = param_1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 0x368))(param_1);
    lVar3 = param_1[0x1f];
  }
  return *(undefined1 *)(lVar3 + 0x177);
}



// FUNCTION 142f63c80 FUN_142f63c80 body=2317 status=ok
// SIG undefined FUN_142f63c80(void)

void FUN_142f63c80(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  void *_Src;
  uint uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  
  FUN_142f513f0();
  local_a0 = 0;
  local_98 = 0;
  FUN_142f58b30(param_1,&local_a0);
  *(undefined1 *)(param_1 + 0x579) = 1;
  puVar14 = *(ulonglong **)(param_1 + 0x458);
  puVar8 = puVar14 + (longlong)*(int *)(param_1 + 0x460) * 0x10;
  local_res18 = puVar8;
  if (puVar14 == puVar8) {
LAB_142f63df1:
    uVar17 = (ulonglong)(int)local_98;
    lVar1 = local_a0 + uVar17 * 0x48;
    lVar24 = local_a0;
    if (local_a0 != lVar1) {
      do {
        lVar9 = FWeakObjectPtr::Get(lVar24 + 0x40);
        puVar10 = (undefined8 *)FUN_142f5af50(lVar24,&local_res18);
        lVar11 = FUN_142f5c680(param_1,*puVar10);
        if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x28) != 0)) &&
           (*(longlong *)(lVar11 + 0x28) == lVar9)) {
          local_90 = (longlong *)0x0;
          local_88 = 0;
          FUN_142f59550(lVar11,&local_90,1);
          plVar21 = local_90;
          plVar23 = local_90 + (int)local_88;
          for (plVar15 = local_90; plVar15 != plVar23; plVar15 = plVar15 + 1) {
            lVar9 = *plVar15;
            iVar6 = FUN_142f5d020(lVar11 + 8,lVar9);
            if ((iVar6 < 0) || (*(int *)(lVar11 + 0x20) <= iVar6)) goto LAB_142f64505;
            uVar13 = *(uint *)(*(longlong *)(lVar11 + 0x18) + (longlong)iVar6 * 4);
            if (*(char *)(lVar9 + 0xa0) != '\0') {
              uVar7 = uVar13;
              uVar13 = 0;
              for (; uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
                uVar13 = uVar13 + 1;
              }
            }
            if ((byte)uVar13 < *(byte *)(lVar9 + 0x28)) goto LAB_142f64505;
          }
          lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x70);
          if (lVar9 != 0) {
            FUN_142f526d0(param_1,*(undefined8 *)(lVar11 + 8),lVar9,0,0);
          }
LAB_142f64505:
          if (plVar21 != (longlong *)0x0) {
            FMemory::Free(plVar21);
          }
        }
        lVar24 = lVar24 + 0x48;
      } while (lVar24 != lVar1);
      uVar17 = local_98 & 0xffffffff;
    }
    lVar1 = local_a0;
    if ((int)uVar17 != 0) {
      plVar15 = (longlong *)(local_a0 + 0x18);
      do {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 9;
        uVar13 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar13;
      } while (uVar13 != 0);
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    return;
  }
LAB_142f63d00:
  plVar15 = (longlong *)0x0;
  uVar17 = *puVar14;
  if (uVar17 != 0) {
    cVar5 = (char)puVar14[2];
    if (cVar5 == '\0') {
LAB_142f63d2f:
      FUN_142f72090(uVar17);
      uVar17 = *puVar14;
      puVar10 = *(undefined8 **)(uVar17 + 0x210);
      plVar21 = (longlong *)((longlong)*(int *)(uVar17 + 0x218) & 0x1fffffffffffffff);
      if (puVar10 + *(int *)(uVar17 + 0x218) < puVar10) {
        plVar21 = (longlong *)0x0;
      }
      if (plVar21 != (longlong *)0x0) {
        do {
          FUN_142f6b400(*puVar14,*puVar10,0,0);
          plVar15 = (longlong *)((longlong)plVar15 + 1);
          puVar10 = puVar10 + 1;
        } while (plVar15 != plVar21);
        uVar17 = *puVar14;
      }
      uVar16 = 0;
      puVar10 = *(undefined8 **)(uVar17 + 0x200);
      uVar22 = (longlong)*(int *)(uVar17 + 0x208) & 0x1fffffffffffffff;
      if (puVar10 + *(int *)(uVar17 + 0x208) < puVar10) {
        uVar22 = 0;
      }
      puVar8 = local_res18;
      if (uVar22 != 0) {
        do {
          FUN_142f6b5e0(*puVar14,*puVar10);
          uVar16 = uVar16 + 1;
          puVar10 = puVar10 + 1;
          puVar8 = local_res18;
        } while (uVar16 != uVar22);
      }
      goto LAB_142f63de4;
    }
    if (cVar5 != '\x01') {
      if (cVar5 == '\x02') {
        FUN_142f71fd0(uVar17);
        puVar18 = (undefined *)*puVar14;
        iVar6 = 0;
        plVar21 = plVar15;
        if (0 < *(int *)(puVar18 + 0x218)) {
          do {
            lVar1 = *(longlong *)(*(longlong *)(puVar18 + 0x210) + (longlong)plVar21);
            uVar13 = *(uint *)((longlong)plVar15 + puVar14[3]);
            uVar7 = uVar13;
            uVar3 = 0;
            if (*(char *)(lVar1 + 0xa0) != '\0') {
              for (; uVar13 = uVar3, uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
                uVar3 = uVar13 + 1;
              }
            }
            local_78 = 0;
            local_80 = &DAT_1441d2800;
            local_70 = 0;
            uStack_68 = 0;
            local_60 = 0xffffffff;
            local_5c = 0;
            local_58 = 0;
            FMemFileOut::seekp(&local_80,*(undefined8 *)(puVar18 + 0x10));
            FWeakObjectPtr::operator=(&local_60,lVar1);
            local_70 = *(undefined8 *)(lVar1 + 200);
            uStack_68 = *(undefined8 *)(lVar1 + 0xd0);
            local_78 = *(undefined8 *)(lVar1 + 0x18);
            cVar4 = FUN_142f63b20(&local_80,param_1);
            cVar5 = '\0';
            if (cVar4 != '\0') {
              uVar12 = FWeakObjectPtr::Get(&local_60);
              puVar18 = local_80;
              puVar10 = (undefined8 *)(**(code **)(local_80 + 0x18))(&local_80,local_res20);
              lVar24 = FUN_142f5c680(param_1,*puVar10);
              cVar5 = '\0';
              if (lVar24 != 0) {
                bVar2 = *(byte *)(lVar24 + 0x10);
                if (bVar2 == 0) {
LAB_142f64035:
                  cVar5 = '\0';
                }
                else if (bVar2 < 3) {
                  cVar5 = FUN_142f636b0(uVar12,lVar24);
                }
                else if (bVar2 == 3) goto LAB_142f64035;
              }
            }
            FUN_142f6b400(*puVar14,lVar1,
                          CONCAT71((int7)((ulonglong)puVar18 >> 8),-(cVar5 != '\0')) &
                          0xffffffffffffff03,uVar13 & 0xff);
            puVar18 = (undefined *)*puVar14;
            plVar15 = (longlong *)((longlong)plVar15 + 4);
            iVar6 = iVar6 + 1;
            plVar21 = plVar21 + 1;
          } while (iVar6 < *(int *)(puVar18 + 0x218));
        }
        uVar17 = 0;
        puVar10 = *(undefined8 **)(puVar18 + 0x200);
        uVar16 = (longlong)*(int *)(puVar18 + 0x208) & 0x1fffffffffffffff;
        if (puVar10 + *(int *)(puVar18 + 0x208) < puVar10) {
          uVar16 = 0;
        }
        puVar8 = local_res18;
        if (uVar16 != 0) {
          do {
            FUN_142f6b5e0(*puVar14,*puVar10,2);
            uVar17 = uVar17 + 1;
            puVar10 = puVar10 + 1;
            puVar8 = local_res18;
          } while (uVar17 != uVar16);
        }
      }
      else {
        puVar8 = local_res18;
        if (cVar5 == '\x03') goto LAB_142f63d2f;
      }
      goto LAB_142f63de4;
    }
    FUN_142f71f50(uVar17);
    local_b0 = (longlong *)0x0;
    local_a8 = 0;
    FUN_142f59550(puVar14,&local_b0,1);
    uVar17 = puVar14[5];
    if (uVar17 != 0) {
      if (*(char *)(uVar17 + 0x7c) != '\0') {
        _Src = *(void **)(uVar17 + 0x28);
        local_90 = (longlong *)0x0;
        iVar6 = *(int *)(uVar17 + 0x30);
        local_88 = CONCAT44(local_88._4_4_,iVar6);
        if (iVar6 == 0) {
          local_88 = 0;
          local_88._0_4_ = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_90,iVar6,0);
          plVar15 = local_90;
          _guard_xfg_dispatch_icall_nop(local_90,_Src,(longlong)iVar6 << 3);
        }
        uVar17 = 0;
        plVar21 = plVar15 + (int)local_88;
        for (plVar23 = plVar15; plVar19 = plVar15, plVar23 != plVar21; plVar23 = plVar23 + 1) {
          cVar5 = FUN_142f636b0(*plVar23,puVar14);
          if (cVar5 == '\0') {
            uVar16 = (ulonglong)((longlong)plVar21 + (7 - (longlong)plVar15)) >> 3;
            if (plVar21 < plVar15) {
              uVar16 = uVar17;
            }
            if (uVar16 != 0) {
              do {
                lVar1 = *plVar15;
                if (((lVar1 != 0) && (*(char *)(lVar1 + 0xa2) != '\0')) &&
                   (cVar5 = FUN_142f636b0(lVar1,puVar14), cVar5 != '\0')) {
                  FUN_142f54c00(param_1,puVar14[1],lVar1);
                }
                plVar15 = plVar15 + 1;
                uVar17 = uVar17 + 1;
                plVar19 = local_90;
              } while (uVar17 != uVar16);
            }
            break;
          }
        }
        if (plVar19 != (longlong *)0x0) {
          FMemory::Free(plVar19);
        }
      }
      FUN_142f52490(param_1,*puVar14,puVar14[5]);
      FUN_142f52340(param_1,*puVar14,puVar14[5]);
      FUN_142f51c90(param_1,*puVar14,puVar14[5]);
      FUN_142f51fe0(param_1,*puVar14,puVar14[5]);
    }
    uVar20 = 0;
    uVar17 = *puVar14;
    uVar16 = uVar20;
    uVar22 = uVar20;
    if (0 < *(int *)(uVar17 + 0x218)) {
LAB_142f64270:
      lVar1 = *(longlong *)(uVar20 + *(longlong *)(uVar17 + 0x210));
      uVar13 = *(uint *)(uVar22 + puVar14[3]);
      if (*(char *)(lVar1 + 0xa0) != '\0') {
        uVar7 = uVar13;
        uVar13 = 0;
        for (; uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
          uVar13 = uVar13 + 1;
        }
      }
      local_60 = 0xffffffff;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_5c = 0;
      local_58 = 0;
      local_80 = &DAT_1441d2800;
      FMemFileOut::seekp(&local_80,*(undefined8 *)(uVar17 + 0x10));
      FWeakObjectPtr::operator=(&local_60,lVar1);
      local_70 = *(undefined8 *)(lVar1 + 200);
      uStack_68 = *(undefined8 *)(lVar1 + 0xd0);
      local_78 = *(undefined8 *)(lVar1 + 0x18);
      cVar5 = FUN_142f63b20(&local_80,param_1);
      if (cVar5 == '\0') {
LAB_142f64351:
        for (plVar15 = local_b0; plVar15 != local_b0 + (int)local_a8; plVar15 = plVar15 + 1) {
          if (*plVar15 == lVar1) {
            plVar21 = (longlong *)puVar14[6];
            plVar15 = plVar21 + (int)puVar14[7];
            goto joined_r0x000142f64404;
          }
        }
        uVar12 = 0;
      }
      else {
        uVar12 = FWeakObjectPtr::Get(&local_60);
        puVar10 = (undefined8 *)(**(code **)(local_80 + 0x18))(&local_80,local_b8);
        lVar24 = FUN_142f5c680(param_1,*puVar10);
        if (((lVar24 == 0) || (1 < (byte)(*(char *)(lVar24 + 0x10) - 1U))) ||
           (cVar5 = FUN_142f636b0(uVar12,lVar24), cVar5 == '\0')) goto LAB_142f64351;
        uVar12 = 3;
      }
      goto LAB_142f64377;
    }
LAB_142f643a8:
    if (0 < *(int *)(uVar17 + 0x208)) {
      for (uVar17 = **(ulonglong **)(uVar17 + 0x200); uVar17 != 0;
          uVar17 = *(ulonglong *)(uVar17 + 0x70)) {
        if (uVar17 == puVar14[5]) {
          if (uVar17 != 0) {
            if (uVar17 != puVar14[5]) goto LAB_142f644b9;
            cVar5 = '\x01';
            plVar15 = local_b0 + (int)local_a8;
            plVar21 = local_b0;
            goto joined_r0x000142f64448;
          }
          break;
        }
        FUN_142f6b5e0(*puVar14,uVar17,2);
      }
    }
    goto LAB_142f644e7;
  }
  goto LAB_142f63de4;
joined_r0x000142f64404:
  if (plVar21 == plVar15) goto LAB_142f64414;
  if (*plVar21 == lVar1) {
    uVar12 = 2;
    goto LAB_142f64377;
  }
  plVar21 = plVar21 + 1;
  goto joined_r0x000142f64404;
LAB_142f64414:
  uVar12 = 1;
LAB_142f64377:
  FUN_142f6b400(*puVar14,lVar1,uVar12,uVar13 & 0xff);
  uVar17 = *puVar14;
  uVar13 = (int)uVar16 + 1;
  uVar20 = uVar20 + 8;
  uVar16 = (ulonglong)uVar13;
  uVar22 = uVar22 + 4;
  if (*(int *)(uVar17 + 0x218) <= (int)uVar13) goto LAB_142f643a8;
  goto LAB_142f64270;
joined_r0x000142f64448:
  if (plVar21 == plVar15) goto LAB_142f644a3;
  lVar1 = *plVar21;
  iVar6 = FUN_142f5d020(puVar14 + 1,lVar1);
  if ((iVar6 < 0) || ((int)puVar14[4] <= iVar6)) {
LAB_142f644a0:
    cVar5 = '\0';
    goto LAB_142f644a3;
  }
  uVar13 = *(uint *)(puVar14[3] + (longlong)iVar6 * 4);
  if (*(char *)(lVar1 + 0xa0) != '\0') {
    uVar7 = uVar13;
    uVar13 = 0;
    for (; uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
      uVar13 = uVar13 + 1;
    }
  }
  if ((byte)uVar13 < *(byte *)(lVar1 + 0x28)) goto LAB_142f644a0;
  plVar21 = plVar21 + 1;
  goto joined_r0x000142f64448;
LAB_142f644a3:
  FUN_142f6b5e0(*puVar14,uVar17,cVar5 + '\x01');
  uVar17 = *(ulonglong *)(uVar17 + 0x70);
LAB_142f644b9:
  if (uVar17 != 0) {
    if (uVar17 == puVar14[5]) {
      uVar17 = *(ulonglong *)(uVar17 + 0x70);
    }
    for (; uVar17 != 0; uVar17 = *(ulonglong *)(uVar17 + 0x70)) {
      FUN_142f6b5e0(*puVar14,uVar17,0);
    }
  }
LAB_142f644e7:
  puVar8 = local_res18;
  if (local_b0 != (longlong *)0x0) {
    FMemory::Free(local_b0);
    puVar8 = local_res18;
  }
LAB_142f63de4:
  puVar14 = puVar14 + 0x10;
  if (puVar14 == puVar8) goto LAB_142f63df1;
  goto LAB_142f63d00;
}



// FUNCTION 142f64590 FUN_142f64590 body=171 status=ok
// SIG undefined FUN_142f64590(void)

void FUN_142f64590(longlong *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_142f6c9f0(uVar2);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x128) == '\x03')) &&
       (cVar1 = FUN_142f6f290(lVar3,param_2), cVar1 != '\0')) {
      uVar2 = FWeakObjectPtr::Get(param_2 + 0x40);
      puVar4 = (undefined8 *)FUN_142f5af50(param_2,local_res8);
      FUN_142f64640(lVar3,*puVar4,uVar2,param_3);
    }
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142f64640 FUN_142f64640 body=313 status=ok
// SIG undefined FUN_142f64640(void)

void FUN_142f64640(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  if ((((*(char *)(param_1 + 0x128) == '\x03') && (lVar2 = FUN_142f5c680(), lVar2 != 0)) &&
      (param_3 != 0)) &&
     ((*(char *)(lVar2 + 0x10) == '\x01' && (lVar1 = *(longlong *)(lVar2 + 0x28), lVar1 != param_3))
     )) {
    lVar3 = 0;
    if (lVar1 != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x70);
    }
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x70)) {
      if (lVar3 == param_3) goto LAB_142f646d7;
    }
    if (lVar1 == 0) {
LAB_142f646d7:
      *(longlong *)(param_1 + 0x4a8) = param_3;
      local_18[0] = 0;
      local_18[1] = 0;
      if (param_4 == '\0') {
        lVar1 = *(longlong *)(lVar2 + 0x28);
        lVar3 = lVar1;
        if (lVar1 == 0) {
          lVar3 = param_3;
        }
        if (lVar1 == param_3) {
          return;
        }
        do {
          FUN_142f526d0(param_1,param_2,lVar3,local_18,0);
          if ((*(longlong *)(param_1 + 0x4a8) != param_3) || (lVar3 == 0)) break;
          lVar3 = *(longlong *)(lVar3 + 0x70);
        } while (*(longlong *)(lVar2 + 0x28) != param_3);
      }
      else {
        FUN_142f526d0(param_1,param_2,param_3,local_18,1);
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142f64780 FUN_142f64780 body=83 status=ok
// SIG undefined FUN_142f64780(void)

void FUN_142f64780(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f64640(lVar1,*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142f647e0 FUN_142f647e0 body=111 status=ok
// SIG undefined FUN_142f647e0(void)

longlong FUN_142f647e0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_14171bfe0();
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
      lVar4 = FUN_142f791f0();
      lVar3 = lVar2;
      do {
        if (lVar3 == lVar4) {
          return lVar2;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  return 0;
}



// FUNCTION 142f64850 FUN_142f64850 body=134 status=ok
// SIG undefined FUN_142f64850(void)

undefined8 FUN_142f64850(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        cVar1 = (**(code **)(*param_1 + 0x720))(param_1,param_2);
        if (cVar1 != '\0') {
          return 0;
        }
        lVar3 = FUN_142f5c680(param_1,param_2);
        if (lVar3 == 0) {
          return 0;
        }
        if ((*(char *)(lVar3 + 0x10) != '\0') && (*(char *)(lVar3 + 0x10) != '\x03')) {
          return 0;
        }
        cVar1 = FUN_142f64900(param_1,param_2);
        if (cVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 142f648e0 FUN_142f648e0 body=23 status=ok
// SIG undefined FUN_142f648e0(void)

ulonglong FUN_142f648e0(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if (param_2 != 0) {
    in_RAX = 0;
    if ((*(char *)(param_2 + 0x10) == '\0') || (*(char *)(param_2 + 0x10) == '\x03')) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f64900 FUN_142f64900 body=789 status=ok
// SIG undefined FUN_142f64900(void)

ulonglong FUN_142f64900(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *in_RAX;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined1 local_res18 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (param_2 != (longlong *)0x0) {
    in_RAX = (longlong *)FUN_142f71d80();
    plVar11 = param_2;
    do {
      if (plVar11 == in_RAX) {
        plVar5 = (longlong *)FUN_142f71d80();
        plVar11 = param_2;
        goto LAB_142f64957;
      }
      plVar11 = (longlong *)plVar11[6];
    } while (plVar11 != (longlong *)0x0);
  }
  goto LAB_142f64935;
  while (plVar11 = (longlong *)plVar11[6], plVar7 = plVar15, plVar11 != (longlong *)0x0) {
LAB_142f64957:
    plVar15 = (longlong *)0x0;
    plVar7 = param_2;
    if (plVar11 == plVar5) break;
  }
  plVar11 = (longlong *)plVar7[0x1f];
  if (plVar11 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar11 = (longlong *)plVar7[0x1f];
    if (plVar11 != (longlong *)0x0) goto LAB_142f64994;
LAB_142f649ca:
    plVar11 = plVar15;
  }
  else {
LAB_142f64994:
    lVar6 = FUN_142f71d80();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142f649ca;
  }
  plVar7 = (longlong *)FUN_142f71d80();
  plVar5 = param_2;
  do {
    plVar9 = param_2;
    if (plVar5 == plVar7) break;
    plVar5 = (longlong *)plVar5[6];
    plVar9 = plVar15;
  } while (plVar5 != (longlong *)0x0);
  cVar3 = FUN_142f63b20(plVar11 + 0x35,plVar9);
  plVar5 = plVar15;
  if (cVar3 != '\0') {
    puVar8 = (undefined8 *)(**(code **)(plVar11[0x35] + 0x18))(plVar11 + 0x35,local_res18);
    plVar5 = (longlong *)*puVar8;
    plVar9 = (longlong *)FUN_142f71d80();
    plVar7 = param_2;
    do {
      plVar13 = param_2;
      if (plVar7 == plVar9) break;
      plVar7 = (longlong *)plVar7[6];
      plVar13 = plVar15;
    } while (plVar7 != (longlong *)0x0);
    iVar4 = FUN_142f5de40(param_1,plVar11 + 0x35,0,plVar13);
    in_RAX = (longlong *)FUN_142f5c680(param_1,plVar5);
    if ((((in_RAX == (longlong *)0x0) || ((char)in_RAX[2] != '\x02')) && (iVar4 != 3)) &&
       ((iVar4 != 1 || ((char)plVar11[0x3f] != '\0')))) {
LAB_142f64935:
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  puVar1 = (undefined4 *)plVar11[0x33];
  puVar10 = (undefined4 *)(longlong)(int)plVar11[0x34];
  lVar6 = (longlong)puVar10 * 10;
  if (puVar1 == puVar1 + lVar6) {
LAB_142f64bf6:
    return CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  }
  puVar16 = puVar1 + 1;
LAB_142f64ab0:
  local_60 = puVar16[-1];
  local_5c = *puVar16;
  local_58 = puVar16[1];
  local_78 = *(undefined8 *)(puVar16 + 3);
  local_48 = 0;
  local_40 = 0;
  local_50 = 0;
  FString::FString(local_70,puVar16 + 5);
  FSoftObjectPath::operator=(&local_50,&local_78);
  plVar11 = (longlong *)FUN_1405ec200(&local_60);
  if (plVar11 != (longlong *)0x0) {
    lVar12 = FUN_14171bfe0();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar9 = (longlong *)FUN_142f71d80();
      plVar7 = plVar11;
      do {
        if (plVar7 == plVar9) {
          plVar9 = (longlong *)FUN_142f71d80();
          plVar7 = plVar11;
          goto LAB_142f64b68;
        }
        plVar7 = (longlong *)plVar7[6];
      } while (plVar7 != (longlong *)0x0);
    }
  }
  goto LAB_142f64bd6;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_142f64b68:
    if (plVar7 == plVar9) {
      plVar7 = plVar15;
      if (plVar5 == (longlong *)0x0) goto LAB_142f64b96;
      plVar13 = (longlong *)FUN_142f71d80();
      plVar9 = plVar5;
      goto LAB_142f64b85;
    }
  }
  goto LAB_142f64bd6;
  while (plVar9 = (longlong *)plVar9[6], plVar7 = plVar15, plVar9 != (longlong *)0x0) {
LAB_142f64b85:
    plVar7 = plVar5;
    if (plVar9 == plVar13) break;
  }
LAB_142f64b96:
  plVar13 = (longlong *)FUN_142f71d80();
  plVar9 = plVar11;
  do {
    plVar14 = plVar11;
    if (plVar9 == plVar13) break;
    plVar9 = (longlong *)plVar9[6];
    plVar14 = plVar15;
  } while (plVar9 != (longlong *)0x0);
  if ((plVar7 != plVar14) &&
     ((in_RAX = (longlong *)FUN_142f5c680(param_1,plVar11), in_RAX == (longlong *)0x0 ||
      ((char)in_RAX[2] != '\x02')))) {
    if (local_48 != 0) {
      in_RAX = (longlong *)FMemory::Free();
    }
    goto LAB_142f64935;
  }
LAB_142f64bd6:
  if (local_48 != 0) {
    FMemory::Free();
  }
  puVar10 = puVar16 + 9;
  puVar16 = puVar16 + 10;
  if (puVar10 == puVar1 + lVar6) goto LAB_142f64bf6;
  goto LAB_142f64ab0;
}



// FUNCTION 142f64c30 FUN_142f64c30 body=111 status=ok
// SIG undefined FUN_142f64c30(void)

void FUN_142f64c30(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_18;
  undefined1 local_10;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) {
        if (0 < *(int *)(param_1 + 0x38)) {
          local_18 = param_2;
          local_10 = param_3;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x30,&local_18);
        }
        break;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  FUN_142f6f200(param_1 + -0x178);
  return;
}



// FUNCTION 142f64ca0 FUN_142f64ca0 body=115 status=ok
// SIG undefined FUN_142f64ca0(void)

undefined8 FUN_142f64ca0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(lVar2 + 0x140);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = UObject::FindFunction(plVar1,param_2);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x8c) == '\0')) {
      (**(code **)(*plVar1 + 0x208))(plVar1,lVar2,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142f64d20 FUN_142f64d20 body=859 status=ok
// SIG undefined FUN_142f64d20(void)

void FUN_142f64d20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *_Src;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  void **ppvVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong local_res8;
  undefined1 local_res18 [16];
  undefined1 local_58 [8];
  undefined4 local_50;
  void *local_48;
  ulonglong local_40;
  
  if ((((*(char *)(param_1 + 0x128) == '\x03') && (*param_2 != 0)) &&
      ((longlong *)param_2[1] != (longlong *)0x0)) &&
     (lVar10 = (**(code **)(*(longlong *)param_2[1] + 0x10))(), lVar10 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x660);
    lVar15 = *plVar1;
    lVar18 = (longlong)*(int *)(param_1 + 0x668) * 0x70 + lVar15;
    for (; lVar15 != lVar18; lVar15 = lVar15 + 0x70) {
      cVar6 = FUN_14058c1e0(lVar15 + 0x20,lVar10);
      if (cVar6 != '\0') {
        return;
      }
    }
    plVar20 = (longlong *)0x0;
    plVar14 = plVar20;
    if (*param_2 != 0) {
      plVar14 = (longlong *)param_2[1];
    }
    (**(code **)(*plVar14 + 0x48))(plVar14,&local_res8);
    local_48 = (void *)0x0;
    local_40 = 0;
    plVar14 = plVar20;
    if (*param_2 != 0) {
      plVar14 = (longlong *)param_2[1];
    }
    (**(code **)(*plVar14 + 0x50))();
    plVar14 = plVar20;
    plVar19 = plVar20;
    if (0 < (int)local_40) {
      do {
        lVar15 = local_res8;
        if (((*(longlong *)((longlong)local_48 + (longlong)plVar19) != 0) &&
            (*(char *)(*(longlong *)((longlong)local_48 + (longlong)plVar19) + 0xa5) != '\0')) &&
           (local_res8 != 0)) {
          lVar18 = FUN_142f71d80();
          do {
            if (lVar15 == lVar18) {
              lVar15 = FUN_142f5c680(param_1);
              if (((lVar15 != 0) && (lVar15 = *(longlong *)(lVar15 + 0x28), lVar15 != 0)) &&
                 ((lVar18 = *(longlong *)(lVar15 + 0x68), lVar18 != 0 ||
                  (lVar18 = *(longlong *)(lVar15 + 0x60), lVar18 != 0)))) {
                *(longlong *)((longlong)local_48 + (longlong)plVar19) = lVar18;
              }
              break;
            }
            lVar15 = *(longlong *)(lVar15 + 0x30);
          } while (lVar15 != 0);
        }
        uVar17 = (int)plVar14 + 1;
        plVar14 = (longlong *)(ulonglong)uVar17;
        plVar19 = plVar19 + 1;
      } while ((int)uVar17 < (int)local_40);
    }
    iVar3 = *(int *)(param_1 + 0x668);
    iVar8 = iVar3 + 1;
    *(int *)(param_1 + 0x668) = iVar8;
    if (*(int *)(param_1 + 0x66c) < iVar8) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1);
    }
    lVar18 = (longlong)iVar3 * 0x70;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + lVar18),0,0x70);
    lVar15 = *plVar1;
    *(longlong *)(lVar18 + lVar15) = *param_2;
    *(longlong *)(lVar18 + 8 + lVar15) = param_2[1];
    lVar15 = *plVar1;
    puVar11 = (undefined4 *)FGuid::NewGuid(local_58);
    uVar9 = puVar11[1];
    uVar4 = puVar11[2];
    uVar5 = puVar11[3];
    puVar2 = (undefined4 *)(lVar15 + 0x10 + lVar18);
    *puVar2 = *puVar11;
    puVar2[1] = uVar9;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    FWeakObjectPtr::operator=(*plVar1 + 0x20 + lVar18,lVar10);
    uVar9 = *(undefined4 *)(lVar10 + 0x224);
    local_50 = *(undefined4 *)(lVar10 + 0x228);
    lVar15 = *plVar1;
    puVar2 = (undefined4 *)(lVar15 + 0x28 + lVar18);
    *puVar2 = *(undefined4 *)(lVar10 + 0x220);
    puVar2[1] = uVar9;
    *(undefined4 *)(lVar15 + 0x30 + lVar18) = local_50;
    plVar14 = plVar20;
    if (*param_2 != 0) {
      plVar14 = (longlong *)param_2[1];
    }
    lVar10 = *plVar1;
    uVar9 = (**(code **)(*plVar14 + 0x28))();
    *(undefined4 *)(lVar10 + 0x34 + lVar18) = uVar9;
    plVar14 = plVar20;
    if (*param_2 != 0) {
      plVar14 = (longlong *)param_2[1];
    }
    lVar10 = *plVar1;
    uVar7 = (**(code **)(*plVar14 + 0x30))();
    *(undefined1 *)(lVar10 + 0x60 + lVar18) = uVar7;
    plVar14 = plVar20;
    if (*param_2 != 0) {
      plVar14 = (longlong *)param_2[1];
    }
    lVar10 = *plVar1;
    puVar12 = (undefined8 *)(**(code **)(*plVar14 + 0x38))(plVar14,local_res18);
    *(undefined8 *)(lVar10 + 0x68 + lVar18) = *puVar12;
    plVar14 = plVar20;
    if (*param_2 != 0) {
      plVar14 = (longlong *)param_2[1];
    }
    lVar10 = *plVar1;
    uVar13 = (**(code **)(*plVar14 + 0x18))();
    _Src = local_48;
    *(undefined8 *)(lVar10 + 0x38 + lVar18) = uVar13;
    *(longlong *)(*plVar1 + 0x40 + lVar18) = local_res8;
    ppvVar16 = (void **)(*plVar1 + 0x48 + lVar18);
    if (ppvVar16 != &local_48) {
      lVar10 = (longlong)(int)local_40;
      *(int *)(ppvVar16 + 1) = (int)local_40;
      if (((int)local_40 == 0) && (*(int *)((longlong)ppvVar16 + 0xc) == 0)) {
        *(undefined4 *)((longlong)ppvVar16 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                  (ppvVar16,local_40 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar16,_Src,lVar10 << 3);
      }
    }
    if (*param_2 != 0) {
      plVar20 = (longlong *)param_2[1];
    }
    (**(code **)(*plVar20 + 0x58))(plVar20,*plVar1 + 0x58 + lVar18,*plVar1 + 0x5c + lVar18);
    *(undefined1 *)(param_1 + 0x670) = 1;
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142f65080 FUN_142f65080 body=242 status=ok
// SIG undefined FUN_142f65080(void)

void FUN_142f65080(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*param_2 != 0)) && (param_2[1] != 0)) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x668)) {
      plVar1 = (longlong *)(param_1 + 0x660);
      plVar3 = (longlong *)*plVar1;
      do {
        if (*plVar3 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = plVar3[1];
        }
        if ((lVar5 == param_2[1]) && (*plVar3 == *param_2)) {
          if (((longlong *)*plVar1)[(longlong)iVar6 * 0xe + 9] != 0) {
            FMemory::Free();
          }
          iVar4 = *(int *)(param_1 + 0x668);
          iVar2 = (iVar4 - iVar6) + -1;
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar6 * 0x70),
                       (void *)((longlong)(iVar6 + 1) * 0x70 + *plVar1),(longlong)iVar2 * 0x70);
            iVar4 = *(int *)(param_1 + 0x668);
          }
          *(int *)(param_1 + 0x668) = iVar4 + -1;
          TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(plVar1);
          break;
        }
        iVar6 = iVar6 + 1;
        plVar3 = plVar3 + 0xe;
      } while (iVar6 < *(int *)(param_1 + 0x668));
    }
    *(undefined1 *)(param_1 + 0x670) = 1;
  }
  return;
}



// FUNCTION 142f65180 FUN_142f65180 body=534 status=ok
// SIG undefined FUN_142f65180(void)

void FUN_142f65180(longlong param_1,longlong param_2,char param_3,undefined1 param_4,uint param_5,
                  int param_6)

{
  char cVar1;
  longlong lVar2;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  if ((*(int *)(param_1 + 0x48) < 1) ||
     (cVar1 = FUN_142f63b20(param_2,param_1 + -0x178), cVar1 == '\0')) goto LAB_142f6537f;
  lVar2 = FWeakObjectPtr::Get(param_2 + 0x20);
  if ((param_6 == 0) || (*(char *)(lVar2 + 0xa0) == '\0')) {
LAB_142f65332:
    local_50 = *(undefined8 *)(param_2 + 8);
    local_48 = *(undefined4 *)(param_2 + 0x10);
    uStack_44 = *(undefined4 *)(param_2 + 0x14);
    uStack_40 = *(undefined4 *)(param_2 + 0x18);
    uStack_3c = *(undefined4 *)(param_2 + 0x1c);
    local_38 = *(undefined4 *)(param_2 + 0x20);
    local_34 = *(undefined4 *)(param_2 + 0x24);
    local_30 = *(undefined8 *)(param_2 + 0x28);
  }
  else if (param_3 == '\0') {
    local_38 = *(undefined4 *)(param_2 + 0x20);
    local_50 = *(undefined8 *)(param_2 + 8);
    local_48 = *(undefined4 *)(param_2 + 0x10);
    uStack_44 = *(undefined4 *)(param_2 + 0x14);
    uStack_40 = *(undefined4 *)(param_2 + 0x18);
    uStack_3c = *(undefined4 *)(param_2 + 0x1c);
    local_34 = *(undefined4 *)(param_2 + 0x24);
    local_30 = *(undefined8 *)(param_2 + 0x28);
    if ((param_5 & *(uint *)(param_1 + 0x20)) == 0) {
      param_3 = '\0';
    }
    else {
LAB_142f652d3:
      param_3 = '\x03';
    }
  }
  else {
    if (param_3 != '\x01') {
      if (param_3 == '\b') {
        local_50 = *(undefined8 *)(param_2 + 8);
        local_48 = *(undefined4 *)(param_2 + 0x10);
        uStack_44 = *(undefined4 *)(param_2 + 0x14);
        uStack_40 = *(undefined4 *)(param_2 + 0x18);
        uStack_3c = *(undefined4 *)(param_2 + 0x1c);
        local_38 = *(undefined4 *)(param_2 + 0x20);
        local_34 = *(undefined4 *)(param_2 + 0x24);
        local_30 = *(undefined8 *)(param_2 + 0x28);
        local_58 = &DAT_1441d2800;
        FUN_142f53a80(param_1 + 0x40,&local_58,8,param_4);
        if (*(int *)(param_1 + 0x20) != param_6) goto LAB_142f6537f;
        param_3 = '\n';
      }
      else if (param_3 == '\n') {
        if ((param_5 & *(uint *)(param_1 + 0x20)) != 0) goto LAB_142f6537f;
        param_3 = '\n';
      }
      goto LAB_142f65332;
    }
    local_38 = *(undefined4 *)(param_2 + 0x20);
    local_50 = *(undefined8 *)(param_2 + 8);
    local_48 = *(undefined4 *)(param_2 + 0x10);
    uStack_44 = *(undefined4 *)(param_2 + 0x14);
    uStack_40 = *(undefined4 *)(param_2 + 0x18);
    uStack_3c = *(undefined4 *)(param_2 + 0x1c);
    local_34 = *(undefined4 *)(param_2 + 0x24);
    local_30 = *(undefined8 *)(param_2 + 0x28);
    if ((param_5 & *(uint *)(param_1 + 0x20)) != 0) goto LAB_142f652d3;
    param_3 = '\x01';
  }
  local_58 = &DAT_1441d2800;
  FUN_142f53a80(param_1 + 0x40,&local_58,param_3,param_4);
LAB_142f6537f:
  FUN_142f6f200(param_1 + -0x178);
  return;
}



// FUNCTION 142f653a0 FUN_142f653a0 body=327 status=ok
// SIG undefined FUN_142f653a0(void)

void FUN_142f653a0(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_f0 [2];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [24];
  longlong local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_68 [8];
  longlong local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (0 < *(int *)(param_1 + 0x58)) {
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_c0);
    local_98 = *(undefined8 *)(param_2 + 0x28);
    local_90 = *(undefined4 *)(param_2 + 0x30);
    uStack_8c = *(undefined4 *)(param_2 + 0x34);
    uStack_88 = *(undefined4 *)(param_2 + 0x38);
    uStack_84 = *(undefined4 *)(param_2 + 0x3c);
    local_80 = *(undefined4 *)(param_2 + 0x40);
    local_7c = *(undefined4 *)(param_2 + 0x44);
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_108,local_c0);
    local_e0 = local_98;
    local_c8 = local_80;
    local_c4 = local_7c;
    local_d8 = local_90;
    uStack_d4 = uStack_8c;
    uStack_d0 = uStack_88;
    uStack_cc = uStack_84;
    FUN_140c631a0(&local_78);
    local_78 = local_108;
    local_74 = local_104;
    local_70 = local_100;
    local_28 = local_f8;
    FString::FString(local_20,local_f0);
    FSoftObjectPath::operator=(local_68,&local_28);
    local_50 = local_e0;
    local_38 = local_c8;
    local_34 = local_c4;
    local_48 = local_d8;
    uStack_44 = uStack_d4;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
    local_30 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x50,&local_78);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_f0[0] != 0) {
      FMemory::Free();
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  FUN_142f6f200(param_1 + -0x178);
  return;
}



// FUNCTION 142f654f0 FUN_142f654f0 body=876 status=ok
// SIG undefined FUN_142f654f0(void)

undefined8 FUN_142f654f0(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined1 local_res18 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  plVar5 = (longlong *)FUN_142f71d80();
  plVar10 = param_2;
  while (plVar10 != plVar5) {
    plVar10 = (longlong *)plVar10[6];
    if (plVar10 == (longlong *)0x0) {
      return 0;
    }
  }
  plVar5 = (longlong *)FUN_142f71d80();
  plVar10 = param_2;
  do {
    plVar12 = (longlong *)0x0;
    plVar7 = param_2;
    if (plVar10 == plVar5) break;
    plVar10 = (longlong *)plVar10[6];
    plVar7 = plVar12;
  } while (plVar10 != (longlong *)0x0);
  plVar10 = (longlong *)plVar7[0x1f];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar10 = (longlong *)plVar7[0x1f];
    if (plVar10 != (longlong *)0x0) goto LAB_142f6558d;
  }
  else {
LAB_142f6558d:
    lVar6 = FUN_142f71d80();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142f655c6;
  }
  plVar10 = plVar12;
LAB_142f655c6:
  plVar7 = (longlong *)FUN_142f71d80();
  plVar5 = param_2;
  do {
    plVar9 = param_2;
    if (plVar5 == plVar7) break;
    plVar5 = (longlong *)plVar5[6];
    plVar9 = plVar12;
  } while (plVar5 != (longlong *)0x0);
  cVar4 = FUN_142f63b20(plVar10 + 0x35,plVar9);
  plVar5 = plVar12;
  if (cVar4 != '\0') {
    puVar8 = (undefined8 *)(**(code **)(plVar10[0x35] + 0x18))(plVar10 + 0x35,local_res18);
    plVar5 = (longlong *)*puVar8;
    plVar9 = (longlong *)FUN_142f71d80();
    plVar7 = param_2;
    do {
      plVar13 = param_2;
      if (plVar7 == plVar9) break;
      plVar7 = (longlong *)plVar7[6];
      plVar13 = plVar12;
    } while (plVar7 != (longlong *)0x0);
    FUN_142f5de40(param_1,plVar10 + 0x35,0,plVar13);
    lVar6 = FUN_142f5c680(param_1,plVar5);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) == '\x01')) {
      return 1;
    }
  }
  puVar2 = (undefined4 *)plVar10[0x33];
  lVar6 = plVar10[0x34];
  if (puVar2 == puVar2 + (longlong)(int)lVar6 * 10) {
    return 0;
  }
  puVar14 = puVar2 + 1;
LAB_142f65690:
  local_60 = puVar14[-1];
  local_5c = *puVar14;
  local_58 = puVar14[1];
  local_78 = *(undefined8 *)(puVar14 + 3);
  local_48 = 0;
  local_40 = 0;
  local_50 = 0;
  FString::FString(local_70,puVar14 + 5);
  FSoftObjectPath::operator=(&local_50,&local_78);
  plVar10 = (longlong *)FWeakObjectPtr::Get(&local_60);
  if (plVar10 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != local_58) && (local_50 != 0)) {
      lVar11 = FUN_141796df0(&local_50);
      FWeakObjectPtr::operator=(&local_60,lVar11);
      if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_58 = DAT_1464b56f4;
      }
      plVar10 = (longlong *)FWeakObjectPtr::Get(&local_60);
      if (plVar10 != (longlong *)0x0) goto LAB_142f65754;
    }
  }
  else {
LAB_142f65754:
    lVar11 = FUN_14171bfe0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar12 = (longlong *)FUN_142f71d80();
      plVar7 = plVar10;
      do {
        if (plVar7 == plVar12) {
          plVar12 = (longlong *)FUN_142f71d80();
          plVar7 = plVar10;
          goto LAB_142f657b8;
        }
        plVar7 = (longlong *)plVar7[6];
      } while (plVar7 != (longlong *)0x0);
    }
  }
  goto LAB_142f657a0;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_142f657b8:
    if (plVar7 == plVar12) {
      plVar7 = (longlong *)0x0;
      if (plVar5 == (longlong *)0x0) goto LAB_142f657e8;
      plVar9 = (longlong *)FUN_142f71d80();
      plVar12 = plVar5;
      goto LAB_142f657d5;
    }
  }
LAB_142f657a0:
  if (local_48 != 0) {
    FMemory::Free();
  }
LAB_142f6581b:
  puVar1 = puVar14 + 9;
  puVar14 = puVar14 + 10;
  if (puVar1 == puVar2 + (longlong)(int)lVar6 * 10) {
    return 0;
  }
  goto LAB_142f65690;
  while (plVar12 = (longlong *)plVar12[6], plVar7 = (longlong *)0x0, plVar12 != (longlong *)0x0) {
LAB_142f657d5:
    plVar7 = plVar5;
    if (plVar12 == plVar9) break;
  }
LAB_142f657e8:
  plVar9 = (longlong *)FUN_142f71d80();
  plVar12 = plVar10;
  do {
    plVar13 = plVar10;
    if (plVar12 == plVar9) goto LAB_142f65805;
    plVar12 = (longlong *)plVar12[6];
  } while (plVar12 != (longlong *)0x0);
  plVar13 = (longlong *)0x0;
LAB_142f65805:
  if (((plVar7 != plVar13) && (lVar11 = FUN_142f5c680(param_1,plVar10), lVar11 != 0)) &&
     (*(char *)(lVar11 + 0x10) == '\x01')) {
    if (local_48 == 0) {
      return 1;
    }
    FMemory::Free();
    return 1;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  goto LAB_142f6581b;
}



// FUNCTION 142f65860 FUN_142f65860 body=206 status=ok
// SIG undefined FUN_142f65860(void)

undefined8 FUN_142f65860(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar4 = 0;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)UDynamicEntryBox::GetAllEntries(lVar1);
    for (iVar5 = 0; (-1 < iVar5 && (iVar5 < (int)plVar2[1])); iVar5 = iVar5 + 1) {
      lVar1 = *(longlong *)(*plVar2 + (longlong)iVar5 * 8);
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x204) & 0x10) != 0)) {
        plVar3 = (longlong *)ULevel::GetLevelScriptActor();
        if (plVar3 != (longlong *)0x0) {
          lVar1 = UObject::FindFunction(plVar3,param_2);
          if ((lVar1 != 0) && (*(char *)(lVar1 + 0x8c) == '\0')) {
            (**(code **)(*plVar3 + 0x208))(plVar3,lVar1,0);
            uVar4 = 1;
          }
        }
      }
    }
    return uVar4;
  }
  return 0;
}



// FUNCTION 142f65930 FUN_142f65930 body=841 status=ok
// SIG undefined FUN_142f65930(void)

undefined8
FUN_142f65930(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  byte local_res8 [8];
  int local_res10 [2];
  
  *param_4 = 1;
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,1);
  }
  else {
    *(undefined1 *)(param_1 + 1) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 2,4);
    }
  }
  else {
    param_1[2] = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1c);
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 10,4);
    }
  }
  else {
    param_1[10] = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_1[0xb] = param_1[10];
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 4,0);
  }
  puVar6 = *(undefined4 **)(param_1 + 8);
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    puVar6 = param_1 + 4;
  }
  (**(code **)(*param_2 + 0x50))
            (param_2,puVar6,
             (longlong)((int)(param_1[10] + 0x1f + (param_1[10] + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  local_res8[0] = 0;
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    bVar3 = 0 < (int)param_1[0xe];
    local_res8[0] = 0 < (int)param_1[0xe];
    if (0 < (int)param_1[0x12]) {
      local_res8[0] = bVar3 | 2;
    }
    bVar4 = bVar3 | 2;
    if ((int)param_1[0x12] < 1) {
      bVar4 = bVar3;
    }
    if (0 < (int)param_1[0x16]) {
      local_res8[0] = bVar4 | 4;
    }
    bVar5 = bVar4 | 4;
    if ((int)param_1[0x16] < 1) {
      bVar5 = bVar4;
    }
    if (0 < (int)param_1[0x1a]) {
      local_res8[0] = bVar5 | 8;
    }
  }
  plVar2 = (longlong *)param_2[1];
  if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if ((local_res8[0] & 1) != 0) {
    (**(code **)(*param_2 + 0x78))(param_2,(longlong)(int)param_1[0xe],(longlong)(int)param_1[0xf]);
    local_res10[0] = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_res10[0] = param_1[0xe];
    }
    plVar2 = (longlong *)param_2[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((((char)*(byte *)(param_2 + 5) < '\0') || (local_res10[0] < 0)) ||
       (((*(byte *)((longlong)param_2 + 0x2b) & 8) != 0 && (0x1000000 < local_res10[0])))) {
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
    }
    else {
      param_1[0xe] = local_res10[0];
      if (((local_res10[0] != 0) || (iVar7 = 0, param_1[0xf] != 0)) &&
         (iVar7 = local_res10[0], (*(byte *)(param_2 + 5) & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                  (param_1 + 0xc,local_res10[0],param_1[0xf]);
        iVar7 = param_1[0xe];
      }
      (**(code **)(*param_2 + 0x50))(param_2,*(undefined8 *)(param_1 + 0xc),(longlong)iVar7);
    }
  }
  if ((local_res8[0] & 2) != 0) {
    FUN_1408bda20(param_2,param_1 + 0x10);
  }
  if ((local_res8[0] & 4) != 0) {
    FUN_1408bda20(param_2,param_1 + 0x14);
  }
  if ((local_res8[0] & 8) != 0) {
    FUN_1408bda20(param_2,param_1 + 0x18);
  }
  return 1;
}



// FUNCTION 142f65c80 FUN_142f65c80 body=284 status=ok
// SIG undefined FUN_142f65c80(void)

void FUN_142f65c80(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *local_28;
  int local_20;
  
  if (param_2 != 0) {
    lVar3 = FUN_142f71d80();
    lVar5 = param_2;
    while (lVar5 != lVar3) {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 == 0) {
        return;
      }
    }
    iVar7 = *(int *)(param_1 + 0x5f0);
    lVar5 = *(longlong *)(param_1 + 0x5e8);
    local_28 = (longlong *)0x0;
    local_20 = iVar7;
    if (iVar7 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,iVar7,0);
      lVar5 = lVar5 - (longlong)local_28;
      plVar4 = local_28 + 1;
      do {
        plVar4[-1] = 0;
        *plVar4 = 0;
        plVar4[-1] = *(longlong *)(lVar5 + -8 + (longlong)plVar4);
        lVar3 = 0;
        if (*(longlong *)(lVar5 + -8 + (longlong)plVar4) != 0) {
          lVar3 = *(longlong *)(lVar5 + (longlong)plVar4);
        }
        *plVar4 = lVar3;
        plVar4 = plVar4 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    plVar2 = local_28;
    plVar6 = local_28 + (longlong)local_20 * 2;
    for (plVar4 = local_28; plVar4 != plVar6; plVar4 = plVar4 + 2) {
      if ((*plVar4 != 0) && (plVar1 = (longlong *)plVar4[1], plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  return;
}



// FUNCTION 142f65da0 FUN_142f65da0 body=348 status=ok
// SIG undefined FUN_142f65da0(void)

void FUN_142f65da0(longlong param_1,longlong param_2,undefined1 param_3,float param_4,float param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *local_48;
  int local_40;
  
  if (param_2 != 0) {
    lVar3 = FUN_142f71d80();
    lVar5 = param_2;
    while (lVar5 != lVar3) {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 == 0) {
        return;
      }
    }
    iVar7 = *(int *)(param_1 + 0x5f0);
    lVar5 = *(longlong *)(param_1 + 0x5e8);
    local_48 = (longlong *)0x0;
    local_40 = iVar7;
    if (iVar7 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar7,0);
      lVar5 = lVar5 - (longlong)local_48;
      plVar4 = local_48 + 1;
      do {
        plVar4[-1] = 0;
        *plVar4 = 0;
        plVar4[-1] = *(longlong *)(lVar5 + -8 + (longlong)plVar4);
        lVar3 = 0;
        if (*(longlong *)(lVar5 + -8 + (longlong)plVar4) != 0) {
          lVar3 = *(longlong *)(lVar5 + (longlong)plVar4);
        }
        *plVar4 = lVar3;
        plVar4 = plVar4 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    plVar2 = local_48;
    plVar6 = local_48 + (longlong)local_40 * 2;
    for (plVar4 = local_48; plVar4 != plVar6; plVar4 = plVar4 + 2) {
      if ((*plVar4 != 0) && (plVar1 = (longlong *)plVar4[1], plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))
                  (plVar1,param_2,param_3,(longlong)param_4,(int)(longlong)param_5);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  return;
}



// FUNCTION 142f65f00 FUN_142f65f00 body=539 status=ok
// SIG undefined FUN_142f65f00(void)

void FUN_142f65f00(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  longlong local_res10;
  longlong *local_68;
  int local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    lVar6 = FUN_142f71d80();
    lVar7 = param_2;
    while (lVar7 != lVar6) {
      lVar7 = *(longlong *)(lVar7 + 0x30);
      if (lVar7 == 0) {
        return;
      }
    }
    if (param_3 != 0) {
      local_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      uVar14 = 0;
      local_34 = 0;
      local_30 = 0;
      local_38 = 0xffffffff;
      local_58 = &DAT_1441d2800;
      FMemFileOut::seekp(&local_58,param_2);
      FWeakObjectPtr::operator=(&local_38,param_3);
      local_48 = *(undefined8 *)(param_3 + 200);
      uStack_40 = *(undefined8 *)(param_3 + 0xd0);
      local_50 = *(undefined8 *)(param_3 + 0x18);
      uVar12 = 0;
      lVar7 = FUN_142f5c680(param_1,param_2);
      if (((lVar7 != 0) && (iVar5 = FUN_142f5d020(&local_res10,param_3), -1 < iVar5)) &&
         (iVar5 < *(int *)(lVar7 + 0x20))) {
        uVar14 = *(uint *)(*(longlong *)(lVar7 + 0x18) + (longlong)iVar5 * 4);
        uVar12 = (undefined1)uVar14;
        uVar2 = uVar14;
        uVar4 = 0;
        uVar8 = 0;
        if (*(char *)(param_3 + 0xa0) != '\0') {
          for (; uVar12 = uVar4, uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
            uVar13 = (int)uVar8 + 1;
            uVar4 = (char)uVar13;
            uVar8 = (ulonglong)uVar13;
          }
        }
      }
      iVar5 = *(int *)(param_1 + 0x5f0);
      lVar7 = *(longlong *)(param_1 + 0x5e8);
      local_68 = (longlong *)0x0;
      local_60 = iVar5;
      if (iVar5 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_68,iVar5,0);
        lVar7 = lVar7 - (longlong)local_68;
        puVar9 = (ulonglong *)(local_68 + 1);
        do {
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[-1] = *(ulonglong *)(lVar7 + -8 + (longlong)puVar9);
          uVar8 = 0;
          if (*(longlong *)(lVar7 + -8 + (longlong)puVar9) != 0) {
            uVar8 = *(ulonglong *)(lVar7 + (longlong)puVar9);
          }
          *puVar9 = uVar8;
          puVar9 = puVar9 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      plVar3 = local_68;
      plVar11 = local_68 + (longlong)local_60 * 2;
      for (plVar10 = local_68; plVar10 != plVar11; plVar10 = plVar10 + 2) {
        if ((*plVar10 != 0) && (plVar1 = (longlong *)plVar10[1], plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,param_4,uVar12,uVar14,0);
        }
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 142f66120 FUN_142f66120 body=377 status=ok
// SIG undefined FUN_142f66120(void)

void FUN_142f66120(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_78;
  int local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 != 0) {
    lVar3 = FUN_142f71d80();
    lVar6 = param_2;
    do {
      if (lVar6 == lVar3) {
        local_68 = 0xffffffff;
        local_50 = 0;
        local_58 = 0;
        local_48 = 0;
        local_64 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0xffffffff;
        local_24 = 0;
        FUN_142f60520(&local_68,param_2,param_3);
        iVar5 = *(int *)(param_1 + 0x5f0);
        lVar6 = *(longlong *)(param_1 + 0x5e8);
        local_78 = (longlong *)0x0;
        local_70 = iVar5;
        if (iVar5 != 0) {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_78,iVar5,0);
          lVar6 = lVar6 - (longlong)local_78;
          plVar4 = local_78 + 1;
          do {
            plVar4[-1] = 0;
            *plVar4 = 0;
            plVar4[-1] = *(longlong *)(lVar6 + -8 + (longlong)plVar4);
            lVar3 = 0;
            if (*(longlong *)(lVar6 + -8 + (longlong)plVar4) != 0) {
              lVar3 = *(longlong *)(lVar6 + (longlong)plVar4);
            }
            *plVar4 = lVar3;
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        plVar2 = local_78;
        plVar7 = local_78 + (longlong)local_70 * 2;
        for (plVar4 = local_78; plVar4 != plVar7; plVar4 = plVar4 + 2) {
          if ((*plVar4 != 0) && (plVar1 = (longlong *)plVar4[1], plVar1 != (longlong *)0x0)) {
            (**(code **)(*plVar1 + 0x20))(plVar1,&local_68,param_4);
          }
        }
        if (plVar2 != (longlong *)0x0) {
          FMemory::Free(plVar2);
        }
        if (local_50 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 142f662a0 FUN_142f662a0 body=248 status=ok
// SIG undefined FUN_142f662a0(void)

void FUN_142f662a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  int local_10;
  
  iVar5 = *(int *)(param_1 + 0x5f0);
  lVar6 = *(longlong *)(param_1 + 0x5e8);
  local_18 = (longlong *)0x0;
  local_10 = iVar5;
  if (iVar5 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_18,iVar5,0);
    lVar6 = lVar6 - (longlong)local_18;
    plVar4 = local_18 + 1;
    do {
      plVar4[-1] = 0;
      *plVar4 = 0;
      plVar4[-1] = *(longlong *)(lVar6 + -8 + (longlong)plVar4);
      lVar3 = 0;
      if (*(longlong *)(lVar6 + -8 + (longlong)plVar4) != 0) {
        lVar3 = *(longlong *)(lVar6 + (longlong)plVar4);
      }
      *plVar4 = lVar3;
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  plVar2 = local_18;
  plVar7 = local_18 + (longlong)local_10 * 2;
  for (plVar4 = local_18; plVar4 != plVar7; plVar4 = plVar4 + 2) {
    if ((*plVar4 != 0) && (plVar1 = (longlong *)plVar4[1], plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x48))
                (plVar1,*(longlong *)(param_1 + 0x568) != 0,*(undefined4 *)(param_1 + 0x570));
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 142f663a0 FUN_142f663a0 body=321 status=ok
// SIG undefined FUN_142f663a0(void)

void FUN_142f663a0(longlong param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong local_res10;
  int local_res20 [2];
  longlong local_28;
  int local_20;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    lVar2 = FUN_142f71d80();
    lVar6 = param_2;
    while (lVar6 != lVar2) {
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (lVar6 == 0) {
        return;
      }
    }
    FUN_142f58d00(param_1 + 0x598,local_res20,&local_res10);
    plVar4 = (longlong *)0x0;
    if (local_res20[0] != -1) {
      plVar4 = (longlong *)((longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x598));
    }
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      iVar8 = (int)plVar3[1];
      lVar6 = *plVar3;
      local_28 = 0;
      local_20 = iVar8;
      if (iVar8 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,iVar8,0);
        lVar6 = lVar6 - local_28;
        puVar5 = (undefined8 *)(local_28 + 8);
        do {
          *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(lVar6 + -8 + (longlong)puVar5);
          *(undefined4 *)((longlong)puVar5 + -4) = *(undefined4 *)(lVar6 + -4 + (longlong)puVar5);
          *puVar5 = *(undefined8 *)(lVar6 + (longlong)puVar5);
          puVar5 = puVar5 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar2 = local_28;
      lVar7 = (longlong)local_20 * 0x10 + local_28;
      for (lVar6 = local_28; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
        if ((*(longlong *)(lVar6 + 8) != 0) &&
           (cVar1 = FWeakObjectPtr::IsValid(lVar6), cVar1 != '\0')) {
          (**(code **)(**(longlong **)(lVar6 + 8) + 0x10))
                    (*(longlong **)(lVar6 + 8),param_2,param_3);
        }
      }
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 142f664f0 FUN_142f664f0 body=398 status=ok
// SIG undefined FUN_142f664f0(void)

void FUN_142f664f0(longlong param_1,longlong param_2,undefined1 param_3,float param_4,float param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong local_res10;
  int local_58 [2];
  longlong local_50;
  int local_48;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    lVar2 = FUN_142f71d80();
    lVar6 = param_2;
    while (lVar6 != lVar2) {
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (lVar6 == 0) {
        return;
      }
    }
    FUN_142f58d00(param_1 + 0x598,local_58,&local_res10);
    plVar3 = (longlong *)0x0;
    if (local_58[0] != -1) {
      plVar3 = (longlong *)((longlong)local_58[0] * 0x20 + *(longlong *)(param_1 + 0x598));
    }
    plVar5 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      iVar8 = (int)plVar5[1];
      lVar6 = *plVar5;
      local_50 = 0;
      local_48 = iVar8;
      if (iVar8 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_50,iVar8,0);
        lVar6 = lVar6 - local_50;
        puVar4 = (undefined8 *)(local_50 + 8);
        do {
          *(undefined4 *)(puVar4 + -1) = *(undefined4 *)(lVar6 + -8 + (longlong)puVar4);
          *(undefined4 *)((longlong)puVar4 + -4) = *(undefined4 *)(lVar6 + -4 + (longlong)puVar4);
          *puVar4 = *(undefined8 *)(lVar6 + (longlong)puVar4);
          puVar4 = puVar4 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar2 = local_50;
      lVar7 = (longlong)local_48 * 0x10 + local_50;
      for (lVar6 = local_50; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
        if ((*(longlong *)(lVar6 + 8) != 0) &&
           (cVar1 = FWeakObjectPtr::IsValid(lVar6), cVar1 != '\0')) {
          (**(code **)(**(longlong **)(lVar6 + 8) + 0x28))
                    (*(longlong **)(lVar6 + 8),param_2,param_3,(longlong)param_4,
                     (int)(longlong)param_5);
        }
      }
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 142f66680 FUN_142f66680 body=599 status=ok
// SIG undefined FUN_142f66680(void)

void FUN_142f66680(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong local_res10 [2];
  undefined1 local_res20;
  int local_88 [2];
  longlong local_80;
  int local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    local_res20 = param_4;
    lVar5 = FUN_142f71d80();
    lVar6 = param_2;
    while (lVar6 != lVar5) {
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (lVar6 == 0) {
        return;
      }
    }
    if (param_3 != 0) {
      FUN_142f58d00((longlong *)(param_1 + 0x598),local_88,local_res10);
      plVar10 = (longlong *)0x0;
      plVar7 = plVar10;
      if (local_88[0] != -1) {
        plVar7 = (longlong *)((longlong)local_88[0] * 0x20 + *(longlong *)(param_1 + 0x598));
      }
      plVar13 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar13 = plVar10;
      }
      if (plVar13 != (longlong *)0x0) {
        local_70 = &DAT_1441d2800;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0xffffffff;
        uVar9 = 0;
        local_4c = 0;
        local_48 = 0;
        FMemFileOut::seekp(&local_70,param_2);
        FWeakObjectPtr::operator=(&local_50,param_3);
        local_60 = *(undefined8 *)(param_3 + 200);
        uStack_58 = *(undefined8 *)(param_3 + 0xd0);
        local_68 = *(undefined8 *)(param_3 + 0x18);
        uVar11 = 0;
        lVar6 = FUN_142f5c680(param_1,param_2);
        if (((lVar6 != 0) && (iVar4 = FUN_142f5d020(local_res10,param_3), -1 < iVar4)) &&
           (iVar4 < *(int *)(lVar6 + 0x20))) {
          uVar9 = *(uint *)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar4 * 4);
          uVar11 = (undefined1)uVar9;
          uVar1 = uVar9;
          uVar2 = 0;
          if (*(char *)(param_3 + 0xa0) != '\0') {
            for (; uVar11 = uVar2, uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
              uVar12 = (int)plVar10 + 1;
              plVar10 = (longlong *)(ulonglong)uVar12;
              uVar2 = (char)uVar12;
            }
          }
        }
        iVar4 = (int)plVar13[1];
        lVar6 = *plVar13;
        local_80 = 0;
        local_78 = iVar4;
        if (iVar4 != 0) {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_80,iVar4,0);
          lVar6 = lVar6 - local_80;
          puVar8 = (undefined8 *)(local_80 + 8);
          do {
            *(undefined4 *)(puVar8 + -1) = *(undefined4 *)(lVar6 + -8 + (longlong)puVar8);
            *(undefined4 *)((longlong)puVar8 + -4) = *(undefined4 *)(lVar6 + -4 + (longlong)puVar8);
            *puVar8 = *(undefined8 *)(lVar6 + (longlong)puVar8);
            puVar8 = puVar8 + 2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        lVar5 = local_80;
        uVar2 = local_res20;
        lVar14 = (longlong)local_78 * 0x10 + local_80;
        for (lVar6 = local_80; lVar6 != lVar14; lVar6 = lVar6 + 0x10) {
          if ((*(longlong *)(lVar6 + 8) != 0) &&
             (cVar3 = FWeakObjectPtr::IsValid(lVar6), cVar3 != '\0')) {
            (**(code **)(**(longlong **)(lVar6 + 8) + 0x18))
                      (*(longlong **)(lVar6 + 8),&local_70,uVar2,uVar11,uVar9,param_5);
          }
        }
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 142f668e0 FUN_142f668e0 body=429 status=ok
// SIG undefined FUN_142f668e0(void)

void FUN_142f668e0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_res10;
  longlong local_78;
  int local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    lVar2 = FUN_142f71d80();
    lVar7 = param_2;
    do {
      if (lVar7 == lVar2) {
        local_68 = 0xffffffff;
        local_50 = 0;
        local_58 = 0;
        local_48 = 0;
        local_64 = 0;
        local_78 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0xffffffff;
        local_24 = 0;
        FUN_142f60520(&local_68,param_2,param_3);
        FUN_142f58d00(param_1 + 0x598,&local_78,&local_res10);
        plVar4 = (longlong *)0x0;
        if ((int)local_78 != -1) {
          plVar4 = (longlong *)((longlong)(int)local_78 * 0x20 + *(longlong *)(param_1 + 0x598));
        }
        plVar3 = plVar4 + 1;
        if (plVar4 == (longlong *)0x0) {
          plVar3 = (longlong *)0x0;
        }
        if (plVar3 != (longlong *)0x0) {
          iVar6 = (int)plVar3[1];
          lVar7 = *plVar3;
          local_78 = 0;
          local_70 = iVar6;
          if (iVar6 != 0) {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_78,iVar6,0);
            lVar7 = lVar7 - local_78;
            puVar5 = (undefined8 *)(local_78 + 8);
            do {
              *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(lVar7 + -8 + (longlong)puVar5);
              *(undefined4 *)((longlong)puVar5 + -4) =
                   *(undefined4 *)(lVar7 + -4 + (longlong)puVar5);
              *puVar5 = *(undefined8 *)(lVar7 + (longlong)puVar5);
              puVar5 = puVar5 + 2;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar2 = local_78;
          lVar8 = (longlong)local_70 * 0x10 + local_78;
          for (lVar7 = local_78; lVar7 != lVar8; lVar7 = lVar7 + 0x10) {
            if ((*(longlong *)(lVar7 + 8) != 0) &&
               (cVar1 = FWeakObjectPtr::IsValid(lVar7), cVar1 != '\0')) {
              (**(code **)(**(longlong **)(lVar7 + 8) + 0x20))
                        (*(longlong **)(lVar7 + 8),&local_68,param_4);
            }
          }
          if (lVar2 != 0) {
            FMemory::Free(lVar2);
          }
        }
        if (local_50 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 142f66a90 FUN_142f66a90 body=834 status=ok
// SIG undefined FUN_142f66a90(void)

void FUN_142f66a90(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  longlong *local_48;
  int local_40;
  
  plVar8 = (longlong *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 != 0) {
    lVar2 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        FUN_142f58d00(param_1 + 0x598,local_res8,&local_res10);
        plVar5 = plVar8;
        if (local_res8[0] != -1) {
          plVar5 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x598));
        }
        plVar4 = plVar5 + 1;
        if (plVar5 == (longlong *)0x0) {
          plVar4 = plVar8;
        }
        if (plVar4 != (longlong *)0x0) {
          iVar7 = (int)plVar4[1];
          lVar3 = *plVar4;
          local_48 = (longlong *)0x0;
          local_40 = iVar7;
          if (iVar7 != 0) {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar7,0);
            lVar3 = lVar3 - (longlong)local_48;
            plVar5 = local_48 + 1;
            do {
              *(undefined4 *)(plVar5 + -1) = *(undefined4 *)(lVar3 + -8 + (longlong)plVar5);
              *(undefined4 *)((longlong)plVar5 + -4) =
                   *(undefined4 *)(lVar3 + -4 + (longlong)plVar5);
              *plVar5 = *(longlong *)(lVar3 + (longlong)plVar5);
              plVar5 = plVar5 + 2;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          plVar4 = local_48;
          plVar6 = local_48 + (longlong)local_40 * 2;
          for (plVar5 = local_48; plVar5 != plVar6; plVar5 = plVar5 + 2) {
            if ((plVar5[1] != 0) && (cVar1 = FWeakObjectPtr::IsValid(plVar5), cVar1 != '\0')) {
              (**(code **)(*(longlong *)plVar5[1] + 0x40))((longlong *)plVar5[1],param_2);
            }
          }
          if (plVar4 != (longlong *)0x0) {
            FMemory::Free(plVar4);
          }
        }
        break;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  if (param_3 != 0) {
    lVar3 = FUN_142f71d80();
    do {
      if (param_3 == lVar3) {
        FUN_142f58d00(param_1 + 0x598,&local_res10,&local_res18);
        plVar5 = plVar8;
        if ((int)local_res10 != -1) {
          plVar5 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(param_1 + 0x598));
        }
        plVar4 = plVar5 + 1;
        if (plVar5 == (longlong *)0x0) {
          plVar4 = plVar8;
        }
        if (plVar4 != (longlong *)0x0) {
          iVar7 = (int)plVar4[1];
          lVar3 = *plVar4;
          local_48 = (longlong *)0x0;
          local_40 = iVar7;
          if (iVar7 != 0) {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar7,0);
            lVar3 = lVar3 - (longlong)local_48;
            plVar5 = local_48 + 1;
            do {
              *(undefined4 *)(plVar5 + -1) = *(undefined4 *)(lVar3 + -8 + (longlong)plVar5);
              *(undefined4 *)((longlong)plVar5 + -4) =
                   *(undefined4 *)(lVar3 + -4 + (longlong)plVar5);
              *plVar5 = *(longlong *)(lVar3 + (longlong)plVar5);
              plVar5 = plVar5 + 2;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          plVar4 = local_48;
          plVar6 = local_48 + (longlong)local_40 * 2;
          for (plVar5 = local_48; plVar5 != plVar6; plVar5 = plVar5 + 2) {
            if ((plVar5[1] != 0) && (cVar1 = FWeakObjectPtr::IsValid(plVar5), cVar1 != '\0')) {
              (**(code **)(*(longlong *)plVar5[1] + 0x40))((longlong *)plVar5[1],param_2);
            }
          }
          if (plVar4 != (longlong *)0x0) {
            FMemory::Free(plVar4);
          }
        }
        break;
      }
      param_3 = *(longlong *)(param_3 + 0x30);
    } while (param_3 != 0);
  }
  iVar7 = *(int *)(param_1 + 0x5f0);
  lVar3 = *(longlong *)(param_1 + 0x5e8);
  local_48 = (longlong *)0x0;
  local_40 = iVar7;
  if (iVar7 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar7,0);
    lVar3 = lVar3 - (longlong)local_48;
    plVar5 = local_48 + 1;
    do {
      plVar5[-1] = 0;
      *plVar5 = 0;
      plVar5[-1] = *(longlong *)(lVar3 + -8 + (longlong)plVar5);
      plVar4 = plVar8;
      if (*(longlong *)(lVar3 + -8 + (longlong)plVar5) != 0) {
        plVar4 = *(longlong **)(lVar3 + (longlong)plVar5);
      }
      *plVar5 = (longlong)plVar4;
      plVar5 = plVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  plVar5 = local_48;
  plVar4 = local_48 + (longlong)local_40 * 2;
  for (plVar8 = local_48; plVar8 != plVar4; plVar8 = plVar8 + 2) {
    if ((*plVar8 != 0) && (plVar6 = (longlong *)plVar8[1], plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x40))(plVar6,param_2);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar5);
  return;
}



// FUNCTION 142f66de0 FUN_142f66de0 body=160 status=ok
// SIG undefined FUN_142f66de0(void)

void FUN_142f66de0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *local_28;
  undefined8 local_20;
  
  uVar4 = 0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_142f5e530(param_1,&local_28);
  puVar1 = local_28;
  uVar2 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
  if (local_28 + (int)local_20 < local_28) {
    uVar2 = uVar4;
  }
  puVar3 = local_28;
  if (uVar2 != 0) {
    do {
      FUN_142f7b610(*puVar3,param_2,param_3);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != uVar2);
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  return;
}



// FUNCTION 142f66e80 FUN_142f66e80 body=920 status=ok
// SIG undefined FUN_142f66e80(void)

void FUN_142f66e80(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *local_res8;
  undefined1 local_res10;
  uint in_stack_ffffffffffffff98;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  
  plVar5 = *(longlong **)(param_1 + 0x458);
  plVar8 = plVar5 + (longlong)*(int *)(param_1 + 0x460) * 0x10;
  local_res8 = plVar8;
  local_res10 = param_2;
  if (plVar5 != plVar8) {
    plVar4 = plVar5 + 1;
    do {
      uVar6 = 0;
      if ((char)plVar4[1] == '\x01') {
        lVar3 = *plVar5;
        if (*(char *)(lVar3 + 0x248) != '\0') {
          lVar2 = *(longlong *)(lVar3 + 0x250);
          if ((lVar2 == 0) && (*(longlong *)(lVar3 + 600) == 0)) {
LAB_142f67208:
            FUN_142f583f0(param_1,*plVar4);
            goto LAB_142f67073;
          }
          if (plVar4[4] != 0) {
            if (lVar2 != 0) goto LAB_142f66f26;
            if (0 < *(int *)(lVar3 + 0x208)) {
              for (lVar2 = **(longlong **)(lVar3 + 0x200); lVar2 != 0;
                  lVar2 = *(longlong *)(lVar2 + 0x70)) {
LAB_142f66f26:
                if (lVar2 == plVar4[4]) goto LAB_142f67208;
                if (lVar2 == *(longlong *)(lVar3 + 600)) break;
              }
            }
          }
        }
        if ((((plVar4[4] == 0) && ((char)plVar4[0xc] != '\0')) && (0 < *(int *)(lVar3 + 0x208))) &&
           (**(longlong **)(lVar3 + 0x200) != 0)) {
          in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffff00;
          FUN_142f526d0(param_1,*plVar4,**(longlong **)(lVar3 + 0x200),0,in_stack_ffffffffffffff98);
        }
        local_58 = (longlong *)0x0;
        local_50 = 0;
        FUN_142f59550(plVar5,&local_58,1);
        uVar9 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
        if (local_58 + (int)local_50 < local_58) {
          uVar9 = 0;
        }
        plVar7 = local_58;
        if (uVar9 != 0) {
          do {
            lVar3 = *plVar7;
            if ((((*(char *)(lVar3 + 0xa5) != '\0') && (*(char *)(lVar3 + 0xa6) == '\0')) ||
                (*(char *)(lVar3 + 0xa1) != '\0')) &&
               ((iVar1 = FUN_142f5d020(plVar4,lVar3), -1 < iVar1 && (iVar1 < (int)plVar4[3])))) {
              if (*(int *)(plVar4[2] + (longlong)iVar1 * 4) != 0) {
                *(undefined4 *)(plVar4[2] + (longlong)iVar1 * 4) = 0;
                FUN_142f65f00(param_1,*plVar4,lVar3,7);
                in_stack_ffffffffffffff98 = 0;
                FUN_142f66680(param_1,*plVar4,lVar3,7,0);
              }
            }
            uVar6 = uVar6 + 1;
            plVar7 = plVar7 + 1;
            plVar8 = local_res8;
          } while (uVar6 != uVar9);
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free(local_58);
        }
      }
LAB_142f67073:
      if ((char)plVar4[1] != '\x02') {
        *(undefined1 *)(plVar4 + 9) = 1;
        FWeakObjectPtr::operator=(local_48,0);
        local_40 = 0;
        FUN_1405f0e70(local_48,0,0);
        FWeakObjectPtr::Get(local_48);
        FUN_1405f0e70(plVar4 + 10);
        FUN_1405f0e70(local_48);
      }
      plVar5 = plVar5 + 0x10;
      plVar4 = plVar4 + 0x10;
    } while (plVar5 != plVar8);
  }
  FUN_142f4e710(param_1 + 0x5e8,&local_res8);
  TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x598,0);
  *(undefined4 *)(param_1 + 0x608) = 0;
  if (*(int *)(param_1 + 0x60c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x600,0);
  }
  iVar1 = *(int *)(param_1 + 0x668);
  if (iVar1 != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x660) + 0x48);
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 0xe;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x668) = 0;
  if (*(int *)(param_1 + 0x66c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x660,0);
  }
  FUN_142f56570(param_1,*(undefined8 *)(param_1 + 0x4c8));
  plVar5 = *(longlong **)(param_1 + 0x510);
  plVar8 = plVar5 + (longlong)*(int *)(param_1 + 0x518) * 2;
  for (; plVar5 != plVar8; plVar5 = plVar5 + 2) {
    if (((int)plVar5[1] != 0) && (plVar4 = (longlong *)*plVar5, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      if (*plVar5 != 0) {
        lVar3 = FMemory::Realloc(*plVar5,0,0);
        *plVar5 = lVar3;
      }
      *(undefined4 *)(plVar5 + 1) = 0;
    }
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x510,0);
  *(undefined2 *)(param_1 + 0x578) = 0;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 142f67220 FUN_142f67220 body=443 status=ok
// SIG undefined FUN_142f67220(void)

void FUN_142f67220(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18 [2];
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  local_res10 = param_2;
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  lVar4 = FUN_142f6c9f0(lVar4);
  if (((lVar4 != 0) && (local_res10 != 0)) &&
     (lVar5 = FUN_142f71d80(), lVar7 = local_res10, local_res10 != 0)) {
    while (lVar7 != lVar5) {
      lVar7 = *(longlong *)(lVar7 + 0x30);
      if (lVar7 == 0) {
        return;
      }
    }
    uVar6 = FUN_142f768a0();
    lVar7 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar6);
    if ((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) {
      FUN_142f58d00(lVar4 + 0x598,local_res8,&local_res10);
      if ((local_res8[0] == -1) ||
         (lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar4 + 0x598), lVar5 == 0)) {
        local_res18[0] = &local_res10;
        FUN_142f4ceb0(lVar4 + 0x598,local_res8,local_res18,0);
        lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(lVar4 + 0x598);
      }
      local_38 = 0xffffffff;
      local_34 = 0;
      plVar1 = (longlong *)(lVar5 + 8);
      FWeakObjectPtr::operator=(&local_38,param_1);
      lVar4 = *plVar1;
      iVar2 = *(int *)(lVar5 + 0x10);
      local_30 = lVar7;
      for (lVar9 = lVar4; lVar9 != (longlong)iVar2 * 0x10 + lVar4; lVar9 = lVar9 + 0x10) {
        if ((*(longlong *)(lVar9 + 8) == lVar7) &&
           (cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar9,&local_38),
           lVar7 = local_30, cVar3 != '\0')) {
          if ((int)(lVar9 - lVar4 >> 4) != -1) {
            return;
          }
          break;
        }
      }
      iVar2 = *(int *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x10) = iVar2 + 1;
      if (*(int *)(lVar5 + 0x14) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar8 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar8 = local_38;
      puVar8[1] = local_34;
      *(longlong *)(puVar8 + 2) = local_30;
    }
  }
  return;
}



// FUNCTION 142f673e0 EndInstancedStaticMeshOverride body=10 status=ok
// SIG undefined EndInstancedStaticMeshOverride(void)

void AOCWorldTile::EndInstancedStaticMeshOverride(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142f673e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6f8))();
  return;
}



// FUNCTION 142f673f0 FUN_142f673f0 body=523 status=ok
// SIG undefined FUN_142f673f0(void)

void FUN_142f673f0(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  short *psVar8;
  longlong *plVar9;
  bool bVar10;
  longlong lVar11;
  undefined2 *puVar12;
  ulonglong local_res8;
  undefined2 *local_38;
  undefined8 local_30;
  short *local_28;
  int local_20;
  
  bVar10 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_142ec7db0();
  *(undefined8 *)(param_1 + 0x40) = 0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  cVar5 = FConfigCacheIni::GetString
                    (DAT_1468b6148,L"MissionDebugMenu",L"MissionGraphName",&local_38,&DAT_1468e2360)
  ;
  if (cVar5 != '\0') {
    uVar6 = (**(code **)(*(longlong *)(param_1 + -0x2b8) + 0x148))();
    lVar7 = FUN_142f6c9f0(uVar6);
    if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x498), lVar7 != 0)) {
      local_res8 = *(ulonglong *)(lVar7 + 0x18);
      FName::ToString(&local_res8,&local_28);
      puVar12 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar12 = local_38;
      }
      psVar8 = &DAT_143f3eda8;
      if (local_20 != 0) {
        psVar8 = local_28;
      }
      lVar11 = (longlong)puVar12 - (longlong)psVar8;
      do {
        sVar2 = *psVar8;
        sVar3 = *(short *)((longlong)psVar8 + lVar11);
        if (sVar2 != sVar3) break;
        psVar8 = psVar8 + 1;
      } while (sVar3 != 0);
      if (local_28 != (short *)0x0) {
        FMemory::Free();
      }
      if (sVar2 == sVar3) {
        *(longlong *)(param_1 + 0x40) = lVar7;
      }
      else {
        plVar9 = *(longlong **)(lVar7 + 0x68);
        plVar1 = plVar9 + *(int *)(lVar7 + 0x70);
        psVar8 = local_28;
        for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
          lVar7 = *plVar9;
          if (lVar7 == 0) {
LAB_142f6758d:
            bVar4 = false;
          }
          else {
            local_res8 = *(ulonglong *)(lVar7 + 0x18);
            bVar10 = true;
            FName::ToString(&local_res8,&local_28);
            puVar12 = &DAT_143f3eda8;
            if ((int)local_30 != 0) {
              puVar12 = local_38;
            }
            psVar8 = &DAT_143f3eda8;
            if (local_20 != 0) {
              psVar8 = local_28;
            }
            lVar11 = (longlong)puVar12 - (longlong)psVar8;
            do {
              sVar2 = *psVar8;
              sVar3 = *(short *)((longlong)psVar8 + lVar11);
              if (sVar2 != sVar3) break;
              psVar8 = psVar8 + 1;
            } while (sVar3 != 0);
            psVar8 = local_28;
            if (sVar2 != sVar3) goto LAB_142f6758d;
            bVar4 = true;
          }
          if ((bVar10) && (bVar10 = false, psVar8 != (short *)0x0)) {
            FMemory::Free(psVar8);
            psVar8 = local_28;
          }
          if (bVar4) {
            *(longlong *)(param_1 + 0x40) = lVar7;
            break;
          }
        }
      }
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f67610 thunk_FUN_142f6cdb0 body=5 status=ok
// SIG undefined thunk_FUN_142f6cdb0(void)

void thunk_FUN_142f6cdb0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(longlong *)(param_1 + 0x738) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x730);
    if (*(char *)(param_1 + 0x798) != '\0') {
      if (lVar2 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar1 = AGFreezeCharacterCue::GetPrivateStaticClass();
        uVar3 = 0;
        uVar1 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
        *(undefined8 *)(param_1 + 0x730) = uVar1;
        FUN_14260f940(uVar1,*(undefined8 *)(param_1 + 0x738));
        FUN_142382f60(*(undefined8 *)(param_1 + 0x730),param_1,&DAT_146532184,0);
        FUN_142398770(*(undefined8 *)(param_1 + 0x730),param_1 + 0x740,0,0,uVar3 & 0xffffff00);
        FUN_14234b150(*(undefined8 *)(param_1 + 0x730));
        lVar2 = *(longlong *)(param_1 + 0x730);
      }
      FUN_1425fcab0(lVar2,0);
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x730),1);
      return;
    }
    if (lVar2 != 0) {
      FUN_142600fa0();
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x730),0,1);
      return;
    }
  }
  return;
}



// FUNCTION 142f67620 FUN_142f67620 body=605 status=ok
// SIG undefined FUN_142f67620(void)

void FUN_142f67620(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res8 [2];
  undefined8 local_res10;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  
  cVar4 = (**(code **)(*param_1 + 0x700))();
  if (cVar4 != '\0') {
    lVar13 = param_1[0x8b];
    lVar12 = (longlong)(int)param_1[0x8c] * 0x80 + lVar13;
    for (; lVar13 != lVar12; lVar13 = lVar13 + 0x80) {
      uVar1 = *(undefined8 *)(lVar13 + 8);
      local_res10 = uVar1;
      FUN_142f58d00(param_1 + 0xb3,local_res8,&local_res10);
      if (local_res8[0] == -1) {
        lVar7 = 0;
      }
      else {
        lVar7 = (longlong)local_res8[0] * 0x20 + param_1[0xb3];
      }
      plVar5 = (longlong *)(lVar7 + 8);
      if (lVar7 == 0) {
        plVar5 = (longlong *)0x0;
      }
      if (plVar5 != (longlong *)0x0) {
        iVar11 = (int)plVar5[1];
        lVar7 = *plVar5;
        local_58 = 0;
        local_50 = iVar11;
        if (iVar11 == 0) {
          local_4c = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar11,0);
          lVar7 = lVar7 - local_58;
          puVar8 = (undefined8 *)(local_58 + 8);
          do {
            *(undefined4 *)(puVar8 + -1) = *(undefined4 *)(lVar7 + -8 + (longlong)puVar8);
            *(undefined4 *)((longlong)puVar8 + -4) = *(undefined4 *)(lVar7 + -4 + (longlong)puVar8);
            *puVar8 = *(undefined8 *)(lVar7 + (longlong)puVar8);
            puVar8 = puVar8 + 2;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        lVar6 = local_58;
        lVar9 = (longlong)local_50 * 0x10 + local_58;
        for (lVar7 = local_58; lVar7 != lVar9; lVar7 = lVar7 + 0x10) {
          if ((*(longlong *)(lVar7 + 8) != 0) &&
             (cVar4 = FWeakObjectPtr::IsValid(lVar7), cVar4 != '\0')) {
            (**(code **)(**(longlong **)(lVar7 + 8) + 0x38))
                      (*(longlong **)(lVar7 + 8),param_1,uVar1);
          }
        }
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      iVar11 = (int)param_1[0xbe];
      lVar7 = param_1[0xbd];
      local_48 = (longlong *)0x0;
      local_40 = iVar11;
      if (iVar11 == 0) {
        local_3c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar11,0);
        lVar7 = lVar7 - (longlong)local_48;
        plVar5 = local_48 + 1;
        do {
          plVar5[-1] = 0;
          *plVar5 = 0;
          plVar5[-1] = *(longlong *)(lVar7 + -8 + (longlong)plVar5);
          lVar6 = 0;
          if (*(longlong *)(lVar7 + -8 + (longlong)plVar5) != 0) {
            lVar6 = *(longlong *)(lVar7 + (longlong)plVar5);
          }
          *plVar5 = lVar6;
          plVar5 = plVar5 + 2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      plVar3 = local_48;
      plVar10 = local_48 + (longlong)local_40 * 2;
      for (plVar5 = local_48; plVar5 != plVar10; plVar5 = plVar5 + 2) {
        if ((*plVar5 != 0) && (plVar2 = (longlong *)plVar5[1], plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x38))(plVar2,param_1,uVar1);
        }
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 142f67880 FUN_142f67880 body=300 status=ok
// SIG undefined FUN_142f67880(void)

void FUN_142f67880(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_142f4e4b0(param_1 + 0x610,param_3,&local_58,0);
  puVar3 = local_58;
  uVar4 = (uint)local_50;
  uVar5 = (ulonglong)(int)(uint)local_50;
  puVar6 = local_58 + uVar5 * 6;
  puVar2 = puVar3;
  if (local_58 != puVar6) {
    puVar7 = local_58 + 1;
    do {
      local_40 = *puVar7;
      local_38 = *(undefined4 *)(puVar7 + 1);
      uStack_34 = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_30 = *(undefined4 *)(puVar7 + 2);
      uStack_2c = *(undefined4 *)((longlong)puVar7 + 0x14);
      local_28 = *(undefined4 *)(puVar7 + 3);
      local_24 = *(undefined4 *)((longlong)puVar7 + 0x1c);
      local_20 = puVar7[4];
      local_48 = &DAT_1441d2800;
      FUN_142f6e6e0(param_1,&local_48,0,1,param_2);
      puVar1 = puVar7 + 5;
      puVar7 = puVar7 + 6;
    } while (puVar1 != puVar6);
  }
  while (uVar4 != 0) {
    *puVar2 = &PTR_FUN_1441d26b8;
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
    puVar2 = puVar2 + 6;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 142f679d0 FUN_142f679d0 body=570 status=ok
// SIG undefined FUN_142f679d0(void)

undefined8 FUN_142f679d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  uVar6 = 0;
  if (*(char *)(param_1 + 0x8c) != '\x02') {
    return 0;
  }
  local_30 = *(longlong *)(param_1 + 0x38);
  bVar2 = false;
  local_22 = 0;
  local_28 = 0xffffffff;
  local_24 = 0x101;
  local_38 = param_1;
  FUN_140472e10(&local_38);
  if (local_30 == 0) {
    return 0;
  }
  plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    lVar4 = local_30;
    if (bVar2) {
      lVar5 = UIntProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if ((*(int *)(*plVar1 + 0x38) < DAT_146b42bf0) &&
           (_Init_thread_header(&DAT_146b42bf0), DAT_146b42bf0 == -1)) {
          FName::FName(&DAT_146b42be8,L"ObjectiveCount",1);
          _Init_thread_footer(&DAT_146b42bf0);
        }
        if (*(longlong *)(lVar4 + 0x18) == DAT_146b42be8) {
          uVar6 = 1;
        }
      }
    }
    else {
      lVar5 = UEnumProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (bVar2 = true,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
         != lVar5 + 0x88)) {
        bVar2 = false;
      }
      if (!bVar2) {
        return uVar6;
      }
      if ((*(int *)(*plVar1 + 0x38) < DAT_146b42be0) &&
         (_Init_thread_header(&DAT_146b42be0), DAT_146b42be0 == -1)) {
        FName::FName(&DAT_146b42bd8,L"ObjectiveEvent",1);
        _Init_thread_footer(&DAT_146b42be0);
      }
      bVar2 = true;
      if (*(longlong *)(lVar4 + 0x18) != DAT_146b42bd8) {
        return uVar6;
      }
    }
    local_30 = *(longlong *)(lVar4 + 0x28);
    FUN_140472e10(&local_38);
    if (local_30 == 0) {
      return uVar6;
    }
  } while( true );
}



// FUNCTION 142f67c10 FUN_142f67c10 body=1026 status=ok
// SIG undefined FUN_142f67c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f67c10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong **pplVar14;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined8 *local_340;
  code **local_338;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined2 local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [40];
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  code *local_2b8;
  undefined4 local_2b0;
  longlong local_2a8 [2];
  code *local_298;
  longlong *local_288 [2];
  int local_278;
  longlong **local_268;
  int local_258;
  undefined1 local_248 [520];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  plVar6 = (longlong *)FUN_142f5c680();
  if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
    cVar4 = (**(code **)(*param_1 + 0x700))(param_1);
    if ((cVar4 == '\0') || ((plVar6[0xe] != 0 && (*(char *)(plVar6[0xe] + 0x10) == '\0')))) {
      lVar7 = plVar6[1];
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_1441bfda8;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        plVar6[2] = (longlong)FUN_142f67c10;
        plVar6[3] = lVar7;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_1441bfdf0;
      }
      uVar8 = AActor::GetWorldTimerManager(param_1);
      local_2b8 = (code *)0x0;
      local_2b0 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_2b8);
      }
      FWeakObjectPtr::operator=(local_2a8,0);
      local_340 = (undefined8 *)CONCAT44(local_340._4_4_,0xbf800000);
      local_348 = (undefined8 *)((ulonglong)local_348 & 0xffffffffffffff00);
      local_2a8[1] = 0;
      local_268 = (longlong **)0x0;
      local_258 = 0;
      local_298 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar8,param_1 + 0xd3,&local_2b8,0x3dcccccd);
      if (local_258 != 0) {
        pplVar14 = local_288;
        if (local_268 != (longlong **)0x0) {
          pplVar14 = local_268;
        }
        if (pplVar14 != (longlong **)0x0) {
          (*(code *)(*pplVar14)[2])(pplVar14,0);
        }
      }
      if (local_268 != (longlong **)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2b8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar7 = FMemory::Realloc(plVar6,0,0);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
    }
    else {
      plVar1 = (longlong *)*plVar6;
      if ((*(char *)((longlong)plVar1 + 0x176) == '\0') ||
         (*(char *)((longlong)plVar1 + 0x175) == '\0')) {
        FUN_142f6c160(param_1,plVar6[1]);
        FUN_142f72050(*plVar6);
      }
      else {
        if (((longlong *)plVar1[5] != (longlong *)0x0) &&
           (lVar7 = (**(code **)(*(longlong *)plVar1[5] + 0x6e8))(), lVar7 != 0)) {
          plVar13 = (longlong *)plVar1[2];
          lVar11 = plVar13[0x1f];
          if (lVar11 == 0) {
            (**(code **)(*plVar13 + 0x368))(plVar13);
            lVar11 = plVar13[0x1f];
          }
          local_288[0] = (longlong *)0x0;
          local_2b8 = AK::MemoryMgr::StartProfileThreadUsage;
          local_278 = 0;
          local_328 = 0xffffffff00000000;
          local_318 = 0;
          local_310 = 0;
          local_320 = 0;
          local_248[0] = 0;
          local_40 = 0;
          local_38 = 0;
          TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_2f8,lVar11 + 0x360);
          local_2c0 = *(undefined8 *)(lVar11 + 0x398);
          local_2d0 = *(undefined4 *)(lVar11 + 0x388);
          uStack_2cc = *(undefined4 *)(lVar11 + 0x38c);
          uStack_2c8 = *(undefined4 *)(lVar11 + 0x390);
          uStack_2c4 = *(undefined4 *)(lVar11 + 0x394);
          uVar8 = (**(code **)(*plVar1 + 0x148))(plVar1);
          local_338 = &local_2b8;
          local_340 = &local_318;
          local_348 = &local_328;
          puVar9 = (undefined4 *)FUN_1405f2e30(local_308,uVar8,local_2f8,local_248);
          *(undefined4 *)(plVar1 + 0x51) = *puVar9;
          *(undefined4 *)((longlong)plVar1 + 0x28c) = puVar9[1];
          *(undefined4 *)(plVar1 + 0x52) = puVar9[2];
          if (local_40 != 0) {
            FMemory::Free();
          }
          if (local_278 != 0) {
            plVar13 = local_2a8;
            if (local_288[0] != (longlong *)0x0) {
              plVar13 = local_288[0];
            }
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x10))(plVar13,0);
            }
          }
          if (local_288[0] != (longlong *)0x0) {
            FMemory::Free();
          }
          FUN_142f6c160(lVar7,plVar1[2]);
        }
        FUN_142f54060(param_1);
      }
      lVar7 = plVar6[1];
      *(undefined1 *)(plVar6 + 0xd) = 1;
      bVar3 = false;
      *(int *)((longlong)param_1 + 0x4c4) = *(int *)((longlong)param_1 + 0x4c4) + 1;
      iVar10 = *(int *)((longlong)param_1 + 0x4c4);
      iVar5 = (int)param_1[0x97] + -1;
      lVar11 = (longlong)iVar5;
      if (-1 < iVar5) {
        lVar12 = lVar11 << 4;
        bVar3 = false;
        do {
          lVar2 = param_1[0x96];
          if (((*(int *)(lVar12 + 8 + lVar2) == 0) ||
              (plVar6 = *(longlong **)(lVar12 + lVar2), plVar6 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,lVar7), cVar4 == '\0')) {
            bVar3 = true;
          }
          lVar12 = lVar12 + -0x10;
          lVar11 = lVar11 + -1;
        } while (-1 < lVar11);
        iVar10 = *(int *)((longlong)param_1 + 0x4c4);
      }
      *(int *)((longlong)param_1 + 0x4c4) = iVar10 + -1;
      if (bVar3) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x96,0);
      }
    }
  }
  return;
}



// FUNCTION 142f68020 FUN_142f68020 body=22 status=ok
// SIG undefined FUN_142f68020(void)

void FUN_142f68020(longlong *param_1)

{
  if (0 < (int)param_1[0x9b]) {
                    /* WARNING: Could not recover jumptable at 0x000142f6802e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x738))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142f68040 FUN_142f68040 body=315 status=ok
// SIG undefined FUN_142f68040(void)

bool FUN_142f68040(undefined8 param_1,undefined8 *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_142f5c680(param_1,*param_2);
  if (plVar5 == (longlong *)0x0) {
    return false;
  }
  cVar1 = (char)plVar5[2];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (*(char *)(param_2 + 1) != '\x02') {
        if (*(char *)(param_2 + 1) != '\x01') {
          return false;
        }
        if (*(int *)(*plVar5 + 0x208) < 1) {
          lVar6 = 0;
        }
        else {
          lVar6 = **(longlong **)(*plVar5 + 0x200);
        }
        lVar2 = param_2[4];
        if (lVar2 == 0) {
          return false;
        }
        lVar3 = plVar5[5];
        if (lVar2 == lVar3) {
          return false;
        }
        if (lVar3 != 0) {
          if (lVar6 == 0) {
            return false;
          }
          while( true ) {
            if (lVar6 == lVar2) {
              return false;
            }
            if (lVar6 == lVar3) break;
            lVar6 = *(longlong *)(lVar6 + 0x70);
            if (lVar6 == 0) {
              return false;
            }
          }
        }
      }
    }
    else {
      if (cVar1 == '\x02') {
        return *(char *)(param_2 + 1) == '\x02';
      }
      if (cVar1 != '\x03') {
        return false;
      }
      cVar1 = *(char *)(param_2 + 1);
      if (param_3 == '\0') {
        return cVar1 != '\0';
      }
      if (cVar1 != '\x02') {
        if (cVar1 != '\x01') {
          return false;
        }
        bVar4 = FUN_142f62f10(*plVar5,param_2[4]);
        return (bool)(bVar4 ^ 1);
      }
    }
  }
  return true;
}



// FUNCTION 142f68180 FUN_142f68180 body=66 status=ok
// SIG undefined FUN_142f68180(void)

void FUN_142f68180(longlong param_1)

{
  UObject::PostLoad();
  if (*(char *)(param_1 + 0x170) != '\0') {
    *(undefined1 *)(param_1 + 0x172) = 1;
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  if (*(char *)(param_1 + 0x171) != '\0') {
    *(undefined1 *)(param_1 + 0x173) = 1;
    *(undefined1 *)(param_1 + 0x171) = 0;
  }
  return;
}



// FUNCTION 142f681d0 FUN_142f681d0 body=821 status=ok
// SIG undefined FUN_142f681d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f681d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(param_1 + 0xaf) = 1;
  cVar2 = (**(code **)(*param_1 + 0x730))();
  if (cVar2 == '\0') {
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_1441bfda8;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_142f681d0;
      plVar5[3] = param_2;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar7;
      *plVar5 = (longlong)&PTR_FUN_1441bfdf0;
    }
    uVar6 = AActor::GetWorldTimerManager(param_1);
    local_88 = 0;
    local_80 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_90 = 0xbf800000;
    local_98 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,param_1 + 0xd0,&local_88,0x3e800000);
    if (local_28 != 0) {
      plVar10 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar10 = local_38;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar7 = FMemory::Realloc(plVar5,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  else {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xa2);
    FUN_142f63c80(param_1);
    if (param_1[0xb0] != 0) {
      lVar4 = FUN_142f71d80();
      for (lVar7 = param_1[0xb0]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar4) {
          if (param_1[0xb0] != 0) {
            lVar7 = FUN_142f5c680(param_1);
            if ((lVar7 == 0) || ((*(char *)(lVar7 + 0x10) - 1U & 0xfd) != 0)) {
              FUN_142f6c3d0(param_1,0);
              param_1[0xb0] = 0;
            }
            else {
              FUN_142f6c3d0(param_1,param_1[0xb0]);
              param_1[0xb0] = 0;
            }
            goto LAB_142f682eb;
          }
          break;
        }
      }
    }
    if (param_1[0x8d] != 0) {
      lVar4 = FUN_142f71d80();
      for (lVar7 = param_1[0x8d]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar4) {
          if (param_1[0x8d] != 0) goto LAB_142f682eb;
          break;
        }
      }
    }
    FUN_142f6c3d0(param_1,0);
LAB_142f682eb:
    lVar7 = param_1[0x8b];
    iVar3 = (int)param_1[0x8c];
    lVar4 = (longlong)iVar3 * 0x80 + lVar7;
    if (lVar7 != lVar4) {
      puVar9 = (undefined8 *)(lVar7 + 8);
      do {
        FUN_142f61c10(param_1,*puVar9);
        lVar7 = lVar7 + 0x80;
        puVar9 = puVar9 + 0x10;
      } while (lVar7 != lVar4);
      iVar3 = (int)param_1[0x8c];
    }
    lVar7 = param_1[0x8b];
    lVar4 = (longlong)iVar3 * 0x80 + lVar7;
    for (; lVar7 != lVar4; lVar7 = lVar7 + 0x80) {
      iVar3 = *(int *)(lVar7 + 0x48) + -1;
      lVar8 = (longlong)iVar3;
      if (-1 < iVar3) {
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + lVar8 * 8);
          if ((lVar1 != 0) && (*(char *)(lVar1 + 0xaa) != '\0')) {
            FUN_142f6dbf0(param_1,*(undefined8 *)(lVar7 + 8));
          }
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
      }
    }
  }
  return;
}



// FUNCTION 142f68510 FUN_142f68510 body=400 status=ok
// SIG undefined FUN_142f68510(void)

void FUN_142f68510(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_78 [3];
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined8 local_2c;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (param_2[0xe] == 0) {
    lVar3 = *param_2;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_30 = *(undefined4 *)(lVar3 + 0x338);
    local_2c = *(undefined8 *)(lVar3 + 0x33c);
    local_48 = *(undefined8 *)(lVar3 + 0x348);
    FString::FString(local_40,lVar3 + 0x350);
    FSoftObjectPath::operator=(&local_20,&local_48);
    if (local_20 != 0) {
      local_78[0] = 0;
      local_78[1] = 0x20;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      FGenericPlatformString::Memcpy(local_78[0],L"RequestAsyncLoad SingleDelegate",0x40);
      local_78[2] = 0;
      local_60 = 0;
      lVar3 = FUN_1422ca050();
      plVar4 = (longlong *)
               FStreamableManager::RequestAsyncLoad
                         (lVar3 + 0x178,local_58,&local_20,local_78 + 2,0,1,0,local_78);
      if (param_2 + 0xe != plVar4) {
        param_2[0xe] = *plVar4;
        *plVar4 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0xf,plVar4 + 1);
      }
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
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142f686a0 FUN_142f686a0 body=247 status=ok
// SIG undefined FUN_142f686a0(void)

longlong FUN_142f686a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *local_28;
  undefined8 local_20;
  
  lVar2 = FUN_142f687a0();
  if (((*(char *)(param_1 + 0x128) == '\x03') && (lVar2 != 0)) &&
     ((*(byte *)(param_1 + 0x94) & 0x18) == 0x10)) {
    uVar4 = 0;
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_142f5e530(param_1,&local_28);
    puVar1 = local_28;
    uVar5 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
    if (local_28 + (int)local_20 < local_28) {
      uVar5 = uVar4;
    }
    puVar3 = local_28;
    if (uVar5 != 0) {
      do {
        FUN_142f7b320(*puVar3,param_2);
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != uVar5);
    }
    if (puVar1 != (undefined8 *)0x0) {
      FMemory::Free(puVar1);
    }
    FUN_142f72090(lVar2);
    FUN_142f61c10(param_1,param_2);
  }
  return lVar2;
}



// FUNCTION 142f687a0 FUN_142f687a0 body=2270 status=ok
// SIG undefined FUN_142f687a0(void)

longlong FUN_142f687a0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  uint *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong local_res18;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [24];
  
  plVar17 = (longlong *)0x0;
  plVar15 = plVar17;
  local_b0 = param_2;
  if (param_2 != (longlong *)0x0) {
    plVar8 = (longlong *)FUN_142f71d80();
    plVar9 = param_2;
    do {
      plVar15 = param_2;
      if (plVar9 == plVar8) break;
      plVar9 = (longlong *)plVar9[6];
      plVar15 = plVar17;
    } while (plVar9 != (longlong *)0x0);
  }
  if ((*(byte *)((longlong)plVar15 + 0xb4) & 1) != 0) {
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    plVar9 = (longlong *)FUN_142f71d80();
    plVar15 = param_2;
    do {
      if (plVar15 == plVar9) {
        plVar15 = (longlong *)FUN_142f5c680(param_1,param_2);
        if ((plVar15 != (longlong *)0x0) && (*plVar15 != 0)) {
          return *plVar15;
        }
        break;
      }
      plVar15 = (longlong *)plVar15[6];
    } while (plVar15 != (longlong *)0x0);
  }
  plVar15 = plVar17;
  if (param_2 != (longlong *)0x0) {
    plVar8 = (longlong *)FUN_142f71d80();
    plVar9 = param_2;
    do {
      plVar15 = param_2;
      if (plVar9 == plVar8) break;
      plVar9 = (longlong *)plVar9[6];
      plVar15 = plVar17;
    } while (plVar9 != (longlong *)0x0);
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar10 = FUN_1417985e0(plVar15,param_1,0,0,0,0,0,0,0);
  if (((*(char *)(lVar10 + 0x177) != '\0') && (*(char *)(lVar10 + 0x191) == '\0')) &&
     (*(int *)(lVar10 + 0x1a0) == 0)) {
    return 0;
  }
  plVar15 = plVar17;
  if (param_2 != (longlong *)0x0) {
    plVar8 = (longlong *)FUN_142f71d80();
    plVar9 = param_2;
    do {
      plVar15 = param_2;
      if (plVar9 == plVar8) break;
      plVar9 = (longlong *)plVar9[6];
      plVar15 = plVar17;
    } while (plVar9 != (longlong *)0x0);
  }
  local_res18 = plVar15[0x1f];
  if (local_res18 == 0) {
    (**(code **)(*plVar15 + 0x368))(plVar15);
    local_res18 = plVar15[0x1f];
    if (local_res18 != 0) goto LAB_142f6892d;
  }
  else {
LAB_142f6892d:
    lVar11 = FUN_142f71d80();
    if ((*(int *)(*(longlong *)(local_res18 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res18 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142f68977;
  }
  local_res18 = 0;
LAB_142f68977:
  plVar15 = (longlong *)(lVar10 + 0x268);
  *(undefined1 *)(lVar10 + 0x172) = *(undefined1 *)(local_res18 + 0x172);
  *(undefined1 *)(lVar10 + 0x174) = *(undefined1 *)(local_res18 + 0x174);
  *(undefined1 *)(lVar10 + 0x248) = *(undefined1 *)(local_res18 + 0x248);
  *(undefined8 *)(lVar10 + 0x250) = *(undefined8 *)(local_res18 + 0x250);
  *(undefined8 *)(lVar10 + 600) = *(undefined8 *)(local_res18 + 600);
  *(undefined1 *)(lVar10 + 0x260) = *(undefined1 *)(local_res18 + 0x260);
  if (plVar15 != (longlong *)(local_res18 + 0x268)) {
    iVar13 = *(int *)(lVar10 + 0x270);
    if (iVar13 != 0) {
      plVar9 = (longlong *)(*plVar15 + 0x18);
      do {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 5;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar13 = *(int *)(local_res18 + 0x270);
    lVar11 = *(longlong *)(local_res18 + 0x268);
    *(int *)(lVar10 + 0x270) = iVar13;
    if ((iVar13 == 0) && (*(int *)(lVar10 + 0x274) == 0)) {
      *(undefined4 *)(lVar10 + 0x274) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar15,iVar13);
      if (iVar13 != 0) {
        lVar11 = lVar11 - *plVar15;
        local_d0 = 0;
        puVar14 = (uint *)(*plVar15 + 0x24);
        local_c8 = lVar11 + -0x1c;
        local_c0 = lVar11 + -0x14;
        local_b8 = lVar11 + -0x24;
        do {
          puVar14[-3] = 0;
          puVar14[-2] = 0;
          puVar14[-1] = 0;
          puVar14[0] = 0;
          puVar14[-9] = 0xffffffff;
          puVar14[-8] = 0;
          puVar14[-5] = 0;
          puVar14[-4] = 0;
          puVar14[-1] = 0;
          if (0x7fffffff < *puVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar14 + -3,0);
          }
          if (*(undefined2 **)(puVar14 + -3) != (undefined2 *)0x0) {
            **(undefined2 **)(puVar14 + -3) = 0;
          }
          puVar14[-7] = 0;
          puVar14[-9] = *(uint *)(local_b8 + (longlong)puVar14);
          puVar14[-8] = *(uint *)(lVar11 + -0x20 + (longlong)puVar14);
          puVar14[-7] = *(uint *)(local_c8 + (longlong)puVar14);
          local_a8 = *(undefined8 *)(local_c0 + (longlong)puVar14);
          FString::FString(local_a0,lVar11 + -0xc + (longlong)puVar14);
          FSoftObjectPath::operator=(puVar14 + -5,&local_a8);
          puVar14 = puVar14 + 10;
          iVar13 = iVar13 + -1;
          param_2 = local_b0;
        } while (iVar13 != 0);
      }
    }
  }
  *(undefined8 *)(lVar10 + 0x278) = *(undefined8 *)(local_res18 + 0x278);
  *(undefined8 *)(lVar10 + 0x280) = *(undefined8 *)(local_res18 + 0x280);
  *(undefined4 *)(lVar10 + 0x308) = *(undefined4 *)(local_res18 + 0x308);
  *(undefined4 *)(lVar10 + 0x30c) = *(undefined4 *)(local_res18 + 0x30c);
  *(undefined4 *)(lVar10 + 0x310) = *(undefined4 *)(local_res18 + 0x310);
  local_90 = *(undefined8 *)(local_res18 + 0x318);
  FString::FString(local_88,local_res18 + 800);
  FSoftObjectPath::operator=(lVar10 + 0x318,&local_90);
  *(undefined1 *)(lVar10 + 0x330) = *(undefined1 *)(local_res18 + 0x330);
  *(undefined4 *)(lVar10 + 0x3a0) = *(undefined4 *)(local_res18 + 0x3a0);
  *(undefined4 *)(lVar10 + 0x3a4) = *(undefined4 *)(local_res18 + 0x3a4);
  *(undefined4 *)(lVar10 + 0x3a8) = *(undefined4 *)(local_res18 + 0x3a8);
  local_78 = *(undefined8 *)(local_res18 + 0x3b0);
  FString::FString(local_70,local_res18 + 0x3b8);
  FSoftObjectPath::operator=(lVar10 + 0x3b0,&local_78);
  iVar13 = *(int *)(lVar10 + 0x218) + -1;
  if (-1 < iVar13) {
    lVar11 = (longlong)iVar13 * 8;
    lVar16 = (longlong)*(int *)(lVar10 + 0x218) << 3;
    lVar18 = lVar11;
    do {
      lVar2 = *(longlong *)(lVar10 + 0x210);
      if (*(longlong *)(lVar18 + lVar2) == 0) {
        iVar7 = *(int *)(lVar10 + 0x218);
        iVar6 = (iVar7 - iVar13) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + lVar11),(void *)(lVar16 + lVar2),(longlong)iVar6 << 3);
          iVar7 = *(int *)(lVar10 + 0x218);
        }
        *(int *)(lVar10 + 0x218) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(lVar10 + 0x210));
      }
      lVar16 = lVar16 + -8;
      lVar11 = lVar11 + -8;
      lVar18 = lVar18 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
  }
  iVar7 = *(int *)(lVar10 + 0x208);
  iVar13 = iVar7 + -1;
  if (-1 < iVar13) {
    lVar11 = (longlong)iVar13 * 8;
    lVar16 = (longlong)iVar7 << 3;
    lVar18 = lVar11;
    do {
      lVar2 = *(longlong *)(lVar10 + 0x200);
      if (*(longlong *)(lVar18 + lVar2) == 0) {
        iVar7 = *(int *)(lVar10 + 0x208);
        iVar6 = (iVar7 - iVar13) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar2 + lVar11),(void *)(lVar16 + lVar2),(longlong)iVar6 << 3);
          iVar7 = *(int *)(lVar10 + 0x208);
        }
        *(int *)(lVar10 + 0x208) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(lVar10 + 0x200));
      }
      lVar16 = lVar16 + -8;
      lVar11 = lVar11 + -8;
      lVar18 = lVar18 + -8;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
    iVar7 = *(int *)(lVar10 + 0x208);
  }
  if (0 < iVar7) {
    lVar11 = **(longlong **)(lVar10 + 0x200);
    lVar18 = lVar11;
    while ((lVar18 != 0 && (lVar11 != 0))) {
      lVar11 = *(longlong *)(lVar11 + 0x70);
      if (lVar18 == lVar11) {
        return 0;
      }
      if (lVar11 == 0) break;
      lVar11 = *(longlong *)(lVar11 + 0x70);
      if (lVar18 == lVar11) {
        return 0;
      }
      lVar18 = *(longlong *)(lVar18 + 0x70);
    }
  }
  puVar3 = *(undefined4 **)(lVar10 + 0x198);
  iVar13 = *(int *)(lVar10 + 0x1a0);
  if (puVar3 != puVar3 + (longlong)iVar13 * 10) {
    puVar19 = puVar3 + 1;
    do {
      local_f8 = puVar19[-1];
      local_f4 = *puVar19;
      local_f0 = puVar19[1];
      local_60 = *(undefined8 *)(puVar19 + 3);
      local_e0 = 0;
      local_d8 = 0;
      local_e8 = 0;
      FString::FString(local_58,puVar19 + 5);
      FSoftObjectPath::operator=(&local_e8,&local_60);
      plVar9 = (longlong *)FWeakObjectPtr::Get(&local_f8);
      plVar15 = plVar17;
      if (plVar9 == (longlong *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != local_f0) && (local_e8 != 0)) {
          lVar11 = FUN_141796df0(&local_e8);
          FWeakObjectPtr::operator=(&local_f8,lVar11);
          if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_f0 = DAT_1464b56f4;
          }
          plVar9 = (longlong *)FWeakObjectPtr::Get(&local_f8);
          if (plVar9 != (longlong *)0x0) goto LAB_142f68e39;
        }
      }
      else {
LAB_142f68e39:
        lVar11 = FUN_14171bfe0();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
            != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          plVar12 = (longlong *)FUN_142f71d80();
          plVar8 = plVar9;
          do {
            plVar15 = plVar9;
            if (plVar8 == plVar12) break;
            plVar8 = (longlong *)plVar8[6];
            plVar15 = plVar17;
          } while (plVar8 != (longlong *)0x0);
        }
      }
      plVar9 = plVar17;
      if (param_2 != (longlong *)0x0) {
        plVar12 = (longlong *)FUN_142f71d80();
        plVar8 = param_2;
        do {
          plVar9 = param_2;
          if (plVar8 == plVar12) break;
          plVar8 = (longlong *)plVar8[6];
          plVar9 = plVar17;
        } while (plVar8 != (longlong *)0x0);
      }
      if (plVar15 == plVar9) {
        if (local_e0 == 0) {
          return 0;
        }
        FMemory::Free();
        return 0;
      }
      if (local_e0 != 0) {
        FMemory::Free();
      }
      puVar1 = puVar19 + 9;
      puVar19 = puVar19 + 10;
    } while (puVar1 != puVar3 + (longlong)iVar13 * 10);
  }
  if (param_2 != (longlong *)0x0) {
    plVar9 = (longlong *)FUN_142f71d80();
    plVar15 = param_2;
    do {
      if (plVar15 == plVar9) break;
      plVar15 = (longlong *)plVar15[6];
    } while (plVar15 != (longlong *)0x0);
  }
  cVar5 = FUN_142f63b20(lVar10 + 0x1a8);
  if (cVar5 != '\0') {
    plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar10 + 0x1a8) + 0x18))(lVar10 + 0x1a8);
    plVar15 = plVar17;
    if (*plVar9 != 0) {
      plVar12 = (longlong *)FUN_142f71d80();
      for (plVar8 = (longlong *)*plVar9;
          (plVar15 = plVar17, plVar8 != (longlong *)0x0 &&
          (plVar15 = (longlong *)*plVar9, plVar8 != plVar12)); plVar8 = (longlong *)plVar8[6]) {
      }
    }
    plVar9 = plVar17;
    if (param_2 != (longlong *)0x0) {
      plVar12 = (longlong *)FUN_142f71d80();
      plVar8 = param_2;
      do {
        plVar9 = param_2;
        if (plVar8 == plVar12) break;
        plVar8 = (longlong *)plVar8[6];
        plVar9 = plVar17;
      } while (plVar8 != (longlong *)0x0);
    }
    if (plVar15 == plVar9) {
      return 0;
    }
  }
  *(longlong *)(lVar10 + 0x28) = param_1;
  plVar15 = (longlong *)(param_1 + 0x458);
  iVar13 = *(int *)(param_1 + 0x460);
  iVar7 = iVar13 + 1;
  *(int *)(param_1 + 0x460) = iVar7;
  if (*(int *)(param_1 + 0x464) < iVar7) {
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(plVar15);
  }
  lVar11 = (longlong)iVar13 * 0x80;
  _guard_xfg_dispatch_icall_nop((void *)(*plVar15 + lVar11),0,0x80);
  plVar15 = (longlong *)(*plVar15 + lVar11);
  plVar15[1] = (longlong)param_2;
  *plVar15 = lVar10;
  *(undefined1 *)(plVar15 + 2) = 0;
  *(undefined1 *)(plVar15 + 10) = 1;
  iVar13 = FUN_142f5cd30();
  if (0 < iVar13) {
    iVar7 = (int)plVar15[4];
    if (iVar7 < iVar13) {
      *(int *)(plVar15 + 4) = iVar13;
      if (*(int *)((longlong)plVar15 + 0x24) < iVar13) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15 + 3);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(plVar15[3] + (longlong)iVar7 * 4),0,(longlong)(iVar13 - iVar7) << 2);
    }
    else if ((iVar13 < iVar7) && (iVar7 - iVar13 != 0)) {
      *(int *)(plVar15 + 4) = iVar7 - (iVar7 - iVar13);
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar15 + 3);
    }
  }
  if (*(int *)((longlong)plVar15 + 0x24) != (int)plVar15[4]) {
    TArray<float,FDefaultAllocator>::ResizeTo();
    return lVar10;
  }
  return lVar10;
}



// FUNCTION 142f69080 FUN_142f69080 body=100 status=ok
// SIG undefined FUN_142f69080(void)

void FUN_142f69080(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*param_2 != 0) && ((*(uint *)(*param_2 + 8) >> 0xf & 1) == 0)) {
    TArray<TScriptInterface<ITTLArsenalHUDMakerInterface>,FDefaultAllocator>::
    AddUniqueImpl<TScriptInterface<ITTLArsenalHUDMakerInterface>_const_&>(param_1 + 0xc0);
    cVar1 = (**(code **)(*param_1 + 0x700))();
    if (cVar1 != '\0') {
      if (*param_2 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)param_2[1];
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 0xcc);
    }
  }
  return;
}



// FUNCTION 142f690f0 FUN_142f690f0 body=877 status=ok
// SIG undefined FUN_142f690f0(void)

void FUN_142f690f0(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  int local_res10 [4];
  int local_res20 [2];
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong **local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  lVar9 = *param_2;
  if ((lVar9 != 0) && ((*(uint *)(lVar9 + 8) >> 0xf & 1) == 0)) {
    if (param_3 == '\0') {
      plVar14 = (longlong *)0x0;
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      plVar6 = plVar14;
      if (lVar9 != 0) {
        plVar6 = (longlong *)param_2[1];
      }
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_50);
      local_70 = local_50;
      local_80 = (longlong *)0x0;
      plVar6 = (longlong *)
               ((ulonglong)((longlong)(local_50 + (int)local_48) + (7 - (longlong)local_50)) >> 3);
      if (local_50 + (int)local_48 < local_50) {
        plVar6 = plVar14;
      }
      if (plVar6 != (longlong *)0x0) {
LAB_142f69220:
        local_78 = (longlong *)*local_70;
        if (local_78 != (longlong *)0x0) {
          plVar3 = (longlong *)FUN_142f71d80();
          for (plVar8 = local_78; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[6]) {
            if (plVar8 == plVar3) {
              FUN_142f58d00(param_1 + 0xb3,local_res10,&local_78);
              if ((local_res10[0] == -1) ||
                 (lVar9 = (longlong)local_res10[0] * 0x20 + param_1[0xb3], lVar9 == 0)) {
                local_68 = &local_78;
                FUN_142f4ceb0(param_1 + 0xb3,local_res20,&local_68,0);
                lVar9 = (longlong)local_res20[0] * 0x20 + param_1[0xb3];
              }
              plVar8 = (longlong *)(lVar9 + 8);
              local_60 = 0xffffffff;
              local_5c = 0;
              FWeakObjectPtr::operator=(&local_60,*param_2);
              plVar3 = plVar14;
              if (*param_2 != 0) {
                plVar3 = (longlong *)param_2[1];
              }
              lVar11 = *plVar8;
              lVar13 = (longlong)*(int *)(lVar9 + 0x10) * 0x10 + lVar11;
              lVar10 = lVar11;
              local_58 = plVar3;
              if (lVar11 == lVar13) goto LAB_142f69324;
              goto LAB_142f692f3;
            }
          }
        }
        goto LAB_142f69401;
      }
LAB_142f69426:
      if (local_50 != (undefined8 *)0x0) {
        FMemory::Free(local_50);
      }
    }
    else {
      TArray<TScriptInterface<ITTLArsenalHUDMakerInterface>,FDefaultAllocator>::
      AddUniqueImpl<TScriptInterface<ITTLArsenalHUDMakerInterface>_const_&>(param_1 + 0xbd);
      cVar2 = (**(code **)(*param_1 + 0x700))(param_1);
      if (cVar2 != '\0') {
        lVar9 = param_1[0x8b];
        lVar11 = (longlong)(int)param_1[0x8c] * 0x80 + lVar9;
        if (lVar9 != lVar11) {
          puVar12 = (undefined8 *)(lVar9 + 8);
          do {
            plVar6 = (longlong *)0x0;
            if (*param_2 != 0) {
              plVar6 = (longlong *)param_2[1];
            }
            (**(code **)(*plVar6 + 0x38))(plVar6,param_1,*puVar12);
            lVar9 = lVar9 + 0x80;
            puVar12 = puVar12 + 0x10;
          } while (lVar9 != lVar11);
        }
      }
    }
  }
  return;
  while (lVar10 = lVar10 + 0x10, lVar10 != lVar13) {
LAB_142f692f3:
    if ((*(longlong **)(lVar10 + 8) == plVar3) &&
       (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar10,&local_60),
       plVar3 = local_58, cVar2 != '\0')) {
      if ((int)(lVar10 - lVar11 >> 4) != -1) goto LAB_142f6935a;
      break;
    }
  }
LAB_142f69324:
  iVar1 = *(int *)(lVar9 + 0x10);
  *(int *)(lVar9 + 0x10) = iVar1 + 1;
  if (*(int *)(lVar9 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
  }
  puVar7 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar8);
  *puVar7 = local_60;
  puVar7[1] = local_5c;
  *(longlong **)(puVar7 + 2) = local_58;
LAB_142f6935a:
  cVar2 = (**(code **)(*param_1 + 0x700))(param_1);
  if ((cVar2 != '\0') && (lVar9 = FUN_142f5c680(param_1,local_78), lVar9 != 0)) {
    plVar8 = plVar14;
    if (*(longlong *)(lVar9 + 8) != 0) {
      plVar4 = (longlong *)FUN_142f71d80();
      for (plVar3 = *(longlong **)(lVar9 + 8);
          (plVar8 = plVar14, plVar3 != (longlong *)0x0 &&
          (plVar8 = *(longlong **)(lVar9 + 8), plVar3 != plVar4)); plVar3 = (longlong *)plVar3[6]) {
      }
    }
    plVar3 = plVar14;
    if (local_78 != (longlong *)0x0) {
      plVar5 = (longlong *)FUN_142f71d80();
      for (plVar4 = local_78;
          (plVar3 = plVar14, plVar4 != (longlong *)0x0 && (plVar3 = local_78, plVar4 != plVar5));
          plVar4 = (longlong *)plVar4[6]) {
      }
    }
    if (plVar8 == plVar3) {
      plVar8 = plVar14;
      if (*param_2 != 0) {
        plVar8 = (longlong *)param_2[1];
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,param_1,*(undefined8 *)(lVar9 + 8));
    }
  }
LAB_142f69401:
  local_80 = (longlong *)((longlong)local_80 + 1);
  local_70 = local_70 + 1;
  if (local_80 == plVar6) goto LAB_142f69426;
  goto LAB_142f69220;
}



// FUNCTION 142f69460 FUN_142f69460 body=633 status=ok
// SIG undefined FUN_142f69460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f69460(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98 [2];
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
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x148), lVar4 != 0)) {
    lVar5 = FUN_142e4e3f0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar4 + 0x548) != 0)) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AMissionTracker::OnStatIncrement",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(local_98,pwVar3 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void,UParticleSystemComponent_*>::
      __Internal_AddUniqueDynamic<AEmitter>
                (*(longlong *)(lVar4 + 0x548) + 0x458,param_1,&LAB_142f504f8,local_98[0]);
      return;
    }
  }
  uVar7 = AActor::GetWorldTimerManager(param_1);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)FUN_142f69460;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar4;
    *plVar8 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_88 = 0;
  local_80 = 0;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_88);
  }
  FWeakObjectPtr::operator=(local_78,0);
  local_a0 = 0xbf800000;
  local_a8 = 0;
  local_70 = 0;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_68 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar7,param_1 + 0xd2,&local_88,0x3dcccccd);
  if (local_28 != 0) {
    plVar9 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar9 = local_38;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar4 = FMemory::Realloc(plVar8,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return;
}



// FUNCTION 142f696e0 FUN_142f696e0 body=314 status=ok
// SIG undefined FUN_142f696e0(void)

void FUN_142f696e0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  
  if ((char)param_1[0x25] != '\x03') {
    piVar6 = (int *)*param_2;
    piVar4 = piVar6 + (longlong)*(int *)(param_2 + 1) * 0x1e;
    for (; piVar6 != piVar4; piVar6 = piVar6 + 0x1e) {
      iVar1 = *piVar6;
      if (((-1 < iVar1) && (iVar1 < (int)param_1[0x8c])) &&
         (puVar2 = (undefined8 *)((longlong)iVar1 * 0x80 + param_1[0x8b]),
         *(char *)(puVar2 + 2) == '\0')) {
        FUN_142f4fba0(puVar2,piVar6);
        if (*(char *)((longlong)puVar2 + 0x6a) != '\0') {
          (**(code **)(*param_1 + 0x768))(param_1);
          return;
        }
        if (*(char *)(puVar2 + 2) == '\x01') {
          FUN_142f515a0(param_1,*puVar2);
        }
        else if (*(char *)(puVar2 + 2) == '\x03') {
          *(undefined1 *)((longlong)puVar2 + 0x69) = 1;
        }
      }
    }
    FUN_142f4fb20(param_1 + 0xa9,param_2 + 3);
    *(undefined1 *)(param_1 + 0x92) = 1;
    if (*(char *)((longlong)param_1 + 0x579) != '\0') {
      lVar3 = param_1[0x8b];
      lVar5 = (longlong)(int)param_1[0x8c] * 0x80 + lVar3;
      if (lVar3 != lVar5) {
        puVar2 = (undefined8 *)(lVar3 + 8);
        do {
          FUN_142f61c10(param_1,*puVar2);
          lVar3 = lVar3 + 0x80;
          puVar2 = puVar2 + 0x10;
        } while (lVar3 != lVar5);
      }
    }
    lVar3 = param_2[2];
    param_1[0x8d] = lVar3;
    FUN_142f66a90(param_1,lVar3,0);
  }
  return;
}



// FUNCTION 142f69820 FUN_142f69820 body=1298 status=ok
// SIG undefined FUN_142f69820(void)

void FUN_142f69820(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,char param_5)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  byte bVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 local_res10;
  longlong local_res18;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    local_res10 = param_2;
    local_res18 = param_3;
    lVar8 = FUN_142f5c680();
    local_60 = (longlong *)0x0;
    local_58 = 0;
    FUN_142f59550(lVar8,&local_60,1);
    iVar7 = (int)local_58;
    lVar18 = (longlong)(int)local_58;
    plVar1 = local_60 + lVar18;
    plVar10 = local_60;
    plVar16 = local_60;
    if (local_60 != plVar1) {
LAB_142f698b0:
      if (*plVar10 != param_3) goto code_r0x000142f698b5;
      bVar4 = false;
      iVar6 = FUN_142f5d020(&local_res10,param_3);
      if ((-1 < iVar6) && (iVar6 < *(int *)(lVar8 + 0x20))) {
        bVar3 = *(byte *)(param_3 + 0x28);
        uVar12 = *(uint *)(*(longlong *)(lVar8 + 0x18) + (longlong)iVar6 * 4);
        puVar2 = (uint *)(*(longlong *)(lVar8 + 0x18) + (longlong)iVar6 * 4);
        uVar17 = uVar12;
        if (*(char *)(param_3 + 0xa0) != '\0') {
          uVar17 = 0;
          for (uVar9 = uVar12; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            uVar17 = uVar17 + 1;
          }
        }
        plVar16 = local_60;
        if ((uint)bVar3 <= (uVar17 & 0xff)) goto LAB_142f698c3;
        if (*(char *)(param_3 + 0xa0) == '\0') {
          bVar11 = (char)uVar12 + param_5;
          uVar12 = (uint)bVar3;
          if (bVar11 <= bVar3) {
            uVar12 = (uint)bVar11;
          }
          *puVar2 = uVar12;
        }
        else {
          if ((param_4 == 0) || ((uVar12 & param_4) == param_4)) goto LAB_142f698c3;
          uVar12 = uVar12 | param_4;
          *puVar2 = uVar12;
          if (*(char *)(param_3 + 0xa0) != '\0') {
            uVar17 = uVar12;
            uVar12 = 0;
            for (; uVar17 != 0; uVar17 = uVar17 & uVar17 - 1) {
              uVar12 = uVar12 + 1;
            }
          }
          uVar12 = uVar12 & 0xff;
        }
        if (uVar12 == bVar3) {
          bVar4 = true;
        }
      }
      FUN_142f65f00(param_1,param_2,param_3,8);
      FUN_142f66680(param_1,param_2,param_3,8,0);
      plVar16 = local_60;
      if (bVar4) {
        if (*(char *)(param_3 + 0xb8) != '\0') {
          iVar6 = *(int *)(lVar8 + 0x48);
          *(int *)(lVar8 + 0x48) = iVar6 + 1;
          if (*(int *)(lVar8 + 0x4c) < iVar6 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x40,iVar6);
          }
          *(longlong *)(*(longlong *)(lVar8 + 0x40) + (longlong)iVar6 * 8) = param_3;
        }
        local_50 = (longlong *)0x0;
        local_48 = 0;
        FUN_142f59550(lVar8,&local_50,1);
        plVar10 = local_50;
        plVar16 = local_60;
        if (iVar7 == (int)local_48) {
          iVar7 = _guard_xfg_dispatch_icall_nop(local_60,local_50,lVar18 * 8);
          bVar4 = false;
          if (iVar7 != 0) goto LAB_142f69a75;
        }
        else {
LAB_142f69a75:
          bVar4 = true;
        }
        FUN_142f65f00(param_1,param_2,param_3,10);
        if (bVar4) {
          FUN_142f66120(param_1,param_2,*(undefined8 *)(lVar8 + 0x28),4);
          uVar19 = 0;
          uVar15 = (ulonglong)((longlong)plVar1 + (7 - (longlong)local_60)) >> 3;
          if (plVar1 < local_60) {
            uVar15 = uVar19;
          }
          if (uVar15 != 0) {
            plVar16 = local_50 + (int)local_48;
            plVar10 = local_50;
            plVar13 = local_60;
            do {
              lVar18 = *plVar13;
              for (plVar14 = plVar10; plVar14 != plVar16; plVar14 = plVar14 + 1) {
                if (*plVar14 == lVar18) goto LAB_142f69b43;
              }
              cVar5 = FUN_142f636b0(lVar18,lVar8);
              plVar10 = local_50;
              if (cVar5 == '\0') {
                FUN_142f65f00(param_1,param_2,lVar18,5);
                plVar10 = local_50;
              }
LAB_142f69b43:
              plVar13 = plVar13 + 1;
              uVar19 = uVar19 + 1;
              param_3 = local_res18;
            } while (uVar19 != uVar15);
          }
          uVar19 = 0;
          uVar15 = (ulonglong)((longlong)(local_50 + (int)local_48) + (7 - (longlong)local_50)) >> 3
          ;
          if (local_50 + (int)local_48 < local_50) {
            uVar15 = uVar19;
          }
          plVar13 = local_60;
          plVar16 = local_60;
          plVar14 = local_50;
          plVar10 = local_50;
          if (uVar15 != 0) {
            do {
              for (plVar16 = plVar13; plVar16 != plVar1; plVar16 = plVar16 + 1) {
                if (*plVar16 == *plVar14) goto LAB_142f69bd1;
              }
              FUN_142f65f00(param_1,param_2,*plVar14,4);
              plVar13 = local_60;
LAB_142f69bd1:
              uVar19 = uVar19 + 1;
              plVar16 = local_60;
              plVar14 = plVar14 + 1;
              plVar10 = local_50;
            } while (uVar19 != uVar15);
          }
        }
        FUN_142f66680(param_1,param_2,param_3,10,0);
        plVar13 = plVar10;
        if (bVar4) {
          FUN_142f668e0(param_1,param_2,*(undefined8 *)(lVar8 + 0x28),4);
          uVar19 = 0;
          uVar15 = (ulonglong)((longlong)plVar1 + (7 - (longlong)local_60)) >> 3;
          if (plVar1 < local_60) {
            uVar15 = uVar19;
          }
          if (uVar15 != 0) {
            lVar8 = (longlong)(int)local_48;
            plVar16 = local_60;
            do {
              for (plVar14 = plVar10; plVar14 != plVar10 + lVar8; plVar14 = plVar14 + 1) {
                if (*plVar14 == *plVar16) goto LAB_142f69c90;
              }
              FUN_142f66680(param_1,param_2,*plVar16,5,0);
LAB_142f69c90:
              plVar16 = plVar16 + 1;
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar15);
          }
          uVar19 = 0;
          uVar15 = (ulonglong)((longlong)(plVar10 + (int)local_48) + (7 - (longlong)plVar10)) >> 3;
          if (plVar10 + (int)local_48 < plVar10) {
            uVar15 = uVar19;
          }
          plVar14 = local_60;
          plVar16 = local_60;
          if (uVar15 != 0) {
            do {
              for (plVar16 = plVar14; plVar16 != plVar1; plVar16 = plVar16 + 1) {
                if (*plVar16 == *plVar10) goto LAB_142f69d06;
              }
              FUN_142f66680(param_1,param_2,*plVar10,4,0);
              plVar14 = local_60;
LAB_142f69d06:
              plVar10 = plVar10 + 1;
              uVar19 = uVar19 + 1;
              plVar16 = local_60;
              plVar13 = local_50;
            } while (uVar19 != uVar15);
          }
        }
        if (plVar13 != (longlong *)0x0) {
          FMemory::Free(plVar13);
        }
      }
    }
LAB_142f698c3:
    if (plVar16 != (longlong *)0x0) {
      FMemory::Free(plVar16);
    }
  }
  return;
code_r0x000142f698b5:
  plVar10 = plVar10 + 1;
  if (plVar10 == plVar1) goto LAB_142f698c3;
  goto LAB_142f698b0;
}



// FUNCTION 142f69d40 FUN_142f69d40 body=795 status=ok
// SIG undefined FUN_142f69d40(void)

void FUN_142f69d40(longlong param_1,undefined8 param_2,longlong param_3,ulonglong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  if (((*(char *)(param_1 + 0x128) != '\x03') && (lVar4 = FUN_142f5c680(), lVar4 != 0)) &&
     (*(longlong *)(lVar4 + 0x28) != param_3)) {
    uVar7 = 0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_142f59550(lVar4,&local_58,1);
    lVar1 = *(longlong *)(lVar4 + 0x28);
    *(longlong *)(lVar4 + 0x28) = param_3;
    puVar8 = (undefined8 *)*param_4;
    uVar10 = (longlong)(int)param_4[1] & 0x1fffffffffffffff;
    if (puVar8 + (int)param_4[1] < puVar8) {
      uVar10 = uVar7;
    }
    if (uVar10 != 0) {
      do {
        FUN_142f51850(param_1,*puVar8,lVar4,1);
        uVar7 = uVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar7 != uVar10);
    }
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_142f59550(lVar4,&local_48,1);
    lVar4 = (longlong)(int)local_40;
    if (lVar1 != 0) {
      FUN_142f66120(param_1,param_2,lVar1,6);
      FUN_142f668e0(param_1,param_2,lVar1,6);
      plVar2 = local_48;
      uVar7 = 0;
      uVar10 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
      if (local_58 + (int)local_50 < local_58) {
        uVar10 = uVar7;
      }
      plVar9 = local_58;
      if (uVar10 != 0) {
        do {
          lVar1 = *plVar9;
          if (lVar1 != 0) {
            for (plVar6 = plVar2; plVar6 != plVar2 + lVar4; plVar6 = plVar6 + 1) {
              if (*plVar6 == lVar1) goto LAB_142f69f16;
            }
            lVar5 = FUN_142f5c680(param_1,param_2);
            if (((lVar5 == 0) || (1 < (byte)(*(char *)(lVar5 + 0x10) - 1U))) ||
               (cVar3 = FUN_142f636b0(lVar1,lVar5), cVar3 == '\0')) {
              FUN_142f65f00(param_1,param_2,lVar1,5);
              FUN_142f66680(param_1,param_2,lVar1,5,0);
            }
          }
LAB_142f69f16:
          uVar7 = uVar7 + 1;
          plVar9 = plVar9 + 1;
        } while (uVar7 != uVar10);
      }
    }
    plVar2 = local_58;
    FUN_142f66120(param_1,param_2,param_3,3);
    FUN_142f668e0(param_1,param_2,param_3,3);
    uVar7 = 0;
    uVar10 = (ulonglong)((longlong)(local_48 + lVar4) + (7 - (longlong)local_48)) >> 3;
    if (local_48 + lVar4 < local_48) {
      uVar10 = uVar7;
    }
    plVar9 = local_48;
    if (uVar10 != 0) {
      do {
        lVar4 = *plVar9;
        if (lVar4 != 0) {
          for (plVar6 = plVar2; plVar6 != plVar2 + (int)local_50; plVar6 = plVar6 + 1) {
            if (*plVar6 == lVar4) goto LAB_142f69fe5;
          }
          FUN_142f65f00(param_1,param_2,lVar4,4);
          FUN_142f66680(param_1,param_2,lVar4,4,0);
        }
LAB_142f69fe5:
        uVar7 = uVar7 + 1;
        plVar9 = plVar9 + 1;
      } while (uVar7 != uVar10);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f6a060 FUN_142f6a060 body=160 status=ok
// SIG undefined FUN_142f6a060(void)

void FUN_142f6a060(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)((longlong)param_2 * 0x40 + 0x3c + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)((longlong)param_2 * 0x40 + 0x38 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x38 + (longlong)iVar1 * 0x40);
      iVar1 = *piVar5;
    }
  }
  *(undefined ***)((longlong)param_2 * 0x40 + *param_1 + 8) = &PTR_FUN_1441d26b8;
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 142f6a100 FUN_142f6a100 body=348 status=ok
// SIG undefined FUN_142f6a100(void)

void FUN_142f6a100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res8;
  
  iVar9 = *(int *)(param_1 + 0x560) + -1;
  if (-1 < iVar9) {
    plVar1 = (longlong *)(param_1 + 0x558);
    lVar10 = (longlong)iVar9 * 0x18;
    lVar11 = (longlong)*(int *)(param_1 + 0x560) * 0x18;
    local_res8 = lVar10;
    do {
      lVar2 = *plVar1;
      if (*(longlong *)(lVar2 + lVar10) != 0) {
        lVar4 = FUN_142f71d80();
        lVar8 = *(longlong *)(lVar2 + lVar10);
        for (lVar7 = lVar8; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
          if (lVar7 == lVar4) goto LAB_142f6a190;
        }
      }
      lVar8 = 0;
LAB_142f6a190:
      if (param_2 != 0) {
        lVar4 = FUN_142f71d80();
        lVar7 = param_2;
        do {
          lVar5 = param_2;
          if (lVar7 == lVar4) goto LAB_142f6a1b4;
          lVar7 = *(longlong *)(lVar7 + 0x30);
        } while (lVar7 != 0);
      }
      lVar5 = 0;
LAB_142f6a1b4:
      if (lVar8 == lVar5) {
        if (*(longlong *)(lVar2 + 8 + lVar10) == *(longlong *)(param_1 + 0x568)) {
          *(undefined8 *)(param_1 + 0x568) = 0;
          FUN_142f662a0(param_1);
          *(undefined1 *)(param_1 + 0x671) = 1;
        }
        iVar6 = *(int *)(param_1 + 0x560);
        iVar3 = (iVar6 - iVar9) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + local_res8),(void *)(*plVar1 + lVar11),
                     (longlong)iVar3 * 0x18);
          iVar6 = *(int *)(param_1 + 0x560);
        }
        *(int *)(param_1 + 0x560) = iVar6 + -1;
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      local_res8 = local_res8 + -0x18;
      lVar11 = lVar11 + -0x18;
      lVar10 = lVar10 + -0x18;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  return;
}



// FUNCTION 142f6a260 FUN_142f6a260 body=649 status=ok
// SIG undefined FUN_142f6a260(void)

void FUN_142f6a260(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *local_res10 [2];
  char local_res20;
  undefined8 *local_48;
  undefined8 local_40;
  
  plVar10 = (longlong *)param_3[6];
  plVar1 = plVar10 + (int)param_3[7];
  if (plVar10 != plVar1) {
    while ((longlong *)*plVar10 != param_2) {
      plVar10 = plVar10 + 1;
      if (plVar10 == plVar1) {
        return;
      }
    }
    local_res10[0] = param_2;
    local_res20 = param_4;
    TArray<FName,FDefaultAllocator>::Remove(param_3 + 6,local_res10);
    plVar1 = local_res10[0];
    uVar9 = 0;
    if (*(char *)((longlong)local_res10[0] + 0xb6) != '\0') {
      plVar10 = *(longlong **)(*param_3 + 0x210);
      for (plVar6 = plVar10; plVar6 != plVar10 + *(int *)(*param_3 + 0x218); plVar6 = plVar6 + 1) {
        if ((longlong *)*plVar6 == local_res10[0]) {
          iVar5 = (int)((longlong)plVar6 - (longlong)plVar10 >> 3);
          if ((-1 < iVar5) && (iVar5 < (int)param_3[4])) {
            *(undefined4 *)(param_3[3] + (longlong)iVar5 * 4) = 0;
          }
          break;
        }
      }
    }
    if (*(char *)(param_1 + 0x128) == '\x03') {
      lVar8 = param_3[1];
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_142f5e530(param_1,&local_48);
      cVar2 = local_res20;
      uVar12 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
      if (local_48 + (int)local_40 < local_48) {
        uVar12 = uVar9;
      }
      puVar11 = local_48;
      if (uVar12 != 0) {
        do {
          FUN_142f7b2d0(*puVar11,lVar8,plVar1,cVar2);
          uVar9 = uVar9 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar9 != uVar12);
      }
      if (local_48 != (undefined8 *)0x0) {
        FMemory::Free(local_48);
      }
      if (local_res20 != '\0') {
        FUN_142f6b400(*param_3,plVar1,4,0);
      }
      FUN_142f6b5e0(*param_3,param_3[5],4);
      if (param_3[1] != 0) {
        lVar3 = FUN_142f71d80();
        lVar8 = param_3[1];
        for (lVar7 = lVar8; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
          if (lVar7 == lVar3) goto LAB_142f6a42b;
        }
      }
      lVar8 = 0;
LAB_142f6a42b:
      lVar7 = 0;
      if (*(longlong *)(param_1 + 0x468) != 0) {
        lVar4 = FUN_142f71d80();
        for (lVar3 = *(longlong *)(param_1 + 0x468);
            (lVar7 = 0, lVar3 != 0 && (lVar7 = *(longlong *)(param_1 + 0x468), lVar3 != lVar4));
            lVar3 = *(longlong *)(lVar3 + 0x30)) {
        }
      }
      if (lVar8 == lVar7) {
        FUN_142f6e310(param_1);
      }
    }
    if (local_res20 != '\0') {
      FUN_142f65f00(param_1,param_3[1],plVar1,4);
      FUN_142f66680(param_1,param_3[1],plVar1,4,0);
    }
    FUN_142f66120(param_1,param_3[1],param_3[5],4);
    FUN_142f668e0(param_1,param_3[1],param_3[5],4);
  }
  return;
}



// FUNCTION 142f6a4f0 FUN_142f6a4f0 body=516 status=ok
// SIG undefined FUN_142f6a4f0(void)

void FUN_142f6a4f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  
  uVar8 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_142f59e30(param_2,param_3,&local_58);
  uVar7 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
  if (local_58 + (int)local_50 < local_58) {
    uVar7 = uVar8;
  }
  plVar6 = local_58;
  if (uVar7 != 0) {
    do {
      iVar9 = 0;
      local_60 = *plVar6;
      if ((local_60 != 0) &&
         ((*(char *)(local_60 + 0xb2) != '\0' || (*(char *)(local_60 + 0xb3) != '\0')))) {
        local_48 = *(undefined8 *)(param_2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x4f8);
        local_40 = local_60;
        if (iVar1 != 0) {
          cVar3 = FUN_142f4fe90(*(undefined8 *)(param_1 + 0x4f0),&local_48);
          bVar10 = cVar3 == '\0';
          iVar5 = iVar9;
          do {
            iVar2 = iVar5;
            do {
              iVar2 = iVar2 + 1;
              if (iVar1 <= iVar2) break;
              cVar3 = FUN_142f4fe90((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x4f0),
                                    &local_48);
            } while (bVar10 == (cVar3 == '\0'));
            if (bVar10 != false) {
              if (iVar9 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x4f0)),
                           (void *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x4f0)),
                           (longlong)(iVar2 - iVar5) << 4);
              }
              iVar9 = iVar9 + (iVar2 - iVar5);
            }
            bVar10 = (bool)(bVar10 ^ 1);
            iVar5 = iVar2;
          } while (iVar2 < iVar1);
          *(int *)(param_1 + 0x4f8) = iVar9;
        }
        lVar4 = FUN_142f5c680(param_1,*(undefined8 *)(param_2 + 0x10));
        if (lVar4 != 0) {
          TArray<FName,FDefaultAllocator>::Remove(lVar4 + 0x30,&local_60);
        }
      }
      uVar8 = uVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar8 != uVar7);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f6a700 FUN_142f6a700 body=765 status=ok
// SIG undefined FUN_142f6a700(void)

void FUN_142f6a700(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  uVar11 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_142f59e30(param_2,param_3,&local_78);
  uVar12 = (ulonglong)((longlong)(local_78 + (int)local_70) + (7 - (longlong)local_78)) >> 3;
  if (local_78 + (int)local_70 < local_78) {
    uVar12 = uVar11;
  }
  plVar10 = local_78;
  if (uVar12 != 0) {
    do {
      lVar4 = *plVar10;
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
        local_68 = &DAT_1441d2800;
        local_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0xffffffff;
        local_44 = 0;
        local_40 = 0;
        FMemFileOut::seekp(&local_68,*(undefined8 *)(param_2 + 0x10));
        FWeakObjectPtr::operator=(&local_48,lVar4);
        local_58 = *(undefined8 *)(lVar4 + 200);
        uStack_50 = *(undefined8 *)(lVar4 + 0xd0);
        local_60 = *(undefined8 *)(lVar4 + 0x18);
        plVar1 = (longlong *)(param_1 + 0x610);
        uVar2 = *(ulonglong *)(lVar4 + 0x30);
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(plVar1,*(int *)(param_1 + 0x618) - *(int *)(param_1 + 0x644),0);
        if (*(int *)(param_1 + 0x658) != 0) {
          iVar8 = (int)(uVar2 >> 4);
          uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
          uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
          uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
          uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
          uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
          uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
          uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
          lVar4 = *(longlong *)(param_1 + 0x650);
          if (*(longlong *)(param_1 + 0x650) == 0) {
            lVar4 = param_1 + 0x648;
          }
          iVar8 = *(int *)(lVar4 + (((longlong)(int)((uVar5 - uVar7) - uVar9) ^
                                    (ulonglong)(uVar7 >> 0xf)) &
                                   (longlong)*(int *)(param_1 + 0x658) - 1U) * 4);
          iVar6 = iVar8;
          if (iVar8 != -1) {
            do {
              iVar8 = *(int *)((longlong)iVar6 * 0x40 + 0x38 + *plVar1);
              if (*(ulonglong *)((longlong)iVar6 * 0x40 + *plVar1) == uVar2) break;
              iVar6 = iVar8;
            } while (iVar8 != -1);
          }
joined_r0x000142f6a91f:
          if (iVar6 != -1) {
            cVar3 = FUN_142f4ff30(*plVar1 + (longlong)iVar6 * 0x40 + 8,&local_68);
            if (cVar3 != '\0') {
              FUN_142f6a060(plVar1,iVar6);
            }
            if (iVar8 == -1) goto LAB_142f6a9a2;
            iVar6 = iVar8;
            do {
              iVar8 = *(int *)((longlong)iVar6 * 0x40 + 0x38 + *plVar1);
              if (*(ulonglong *)((longlong)iVar6 * 0x40 + *plVar1) == uVar2) break;
              iVar6 = iVar8;
            } while (iVar8 != -1);
            goto joined_r0x000142f6a91f;
          }
        }
      }
LAB_142f6a9a2:
      uVar11 = uVar11 + 1;
      plVar10 = plVar10 + 1;
    } while (uVar11 != uVar12);
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f6aa00 FUN_142f6aa00 body=516 status=ok
// SIG undefined FUN_142f6aa00(void)

void FUN_142f6aa00(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  
  uVar8 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_142f59e30(param_2,param_3,&local_58);
  uVar7 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
  if (local_58 + (int)local_50 < local_58) {
    uVar7 = uVar8;
  }
  plVar6 = local_58;
  if (uVar7 != 0) {
    do {
      iVar9 = 0;
      local_60 = *plVar6;
      if ((local_60 != 0) &&
         ((*(char *)(local_60 + 0xb4) != '\0' || (*(char *)(local_60 + 0xb5) != '\0')))) {
        local_48 = *(undefined8 *)(param_2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x508);
        local_40 = local_60;
        if (iVar1 != 0) {
          cVar3 = FUN_142f4fe90(*(undefined8 *)(param_1 + 0x500),&local_48);
          bVar10 = cVar3 == '\0';
          iVar5 = iVar9;
          do {
            iVar2 = iVar5;
            do {
              iVar2 = iVar2 + 1;
              if (iVar1 <= iVar2) break;
              cVar3 = FUN_142f4fe90((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x500),
                                    &local_48);
            } while (bVar10 == (cVar3 == '\0'));
            if (bVar10 != false) {
              if (iVar9 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x500)),
                           (void *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x500)),
                           (longlong)(iVar2 - iVar5) << 4);
              }
              iVar9 = iVar9 + (iVar2 - iVar5);
            }
            bVar10 = (bool)(bVar10 ^ 1);
            iVar5 = iVar2;
          } while (iVar2 < iVar1);
          *(int *)(param_1 + 0x508) = iVar9;
        }
        lVar4 = FUN_142f5c680(param_1,*(undefined8 *)(param_2 + 0x10));
        if (lVar4 != 0) {
          TArray<FName,FDefaultAllocator>::Remove(lVar4 + 0x30,&local_60);
        }
      }
      uVar8 = uVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar8 != uVar7);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f6ac10 FUN_142f6ac10 body=516 status=ok
// SIG undefined FUN_142f6ac10(void)

void FUN_142f6ac10(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  
  uVar8 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_142f59e30(param_2,param_3,&local_58);
  uVar7 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
  if (local_58 + (int)local_50 < local_58) {
    uVar7 = uVar8;
  }
  plVar6 = local_58;
  if (uVar7 != 0) {
    do {
      iVar9 = 0;
      local_60 = *plVar6;
      if ((local_60 != 0) &&
         ((*(char *)(local_60 + 0xb0) != '\0' || (*(char *)(local_60 + 0xb1) != '\0')))) {
        local_48 = *(undefined8 *)(param_2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x4e8);
        local_40 = local_60;
        if (iVar1 != 0) {
          cVar3 = FUN_142f4fe90(*(undefined8 *)(param_1 + 0x4e0),&local_48);
          bVar10 = cVar3 == '\0';
          iVar5 = iVar9;
          do {
            iVar2 = iVar5;
            do {
              iVar2 = iVar2 + 1;
              if (iVar1 <= iVar2) break;
              cVar3 = FUN_142f4fe90((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x4e0),
                                    &local_48);
            } while (bVar10 == (cVar3 == '\0'));
            if (bVar10 != false) {
              if (iVar9 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x4e0)),
                           (void *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x4e0)),
                           (longlong)(iVar2 - iVar5) << 4);
              }
              iVar9 = iVar9 + (iVar2 - iVar5);
            }
            bVar10 = (bool)(bVar10 ^ 1);
            iVar5 = iVar2;
          } while (iVar2 < iVar1);
          *(int *)(param_1 + 0x4e8) = iVar9;
        }
        lVar4 = FUN_142f5c680(param_1,*(undefined8 *)(param_2 + 0x10));
        if (lVar4 != 0) {
          TArray<FName,FDefaultAllocator>::Remove(lVar4 + 0x30,&local_60);
        }
      }
      uVar8 = uVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar8 != uVar7);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f6ae20 FUN_142f6ae20 body=748 status=ok
// SIG undefined FUN_142f6ae20(void)

void FUN_142f6ae20(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong local_68;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_142f59e30(param_2,param_3,&local_58);
  local_68 = 0;
  uVar9 = (ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >> 3;
  if (local_58 + (int)local_50 < local_58) {
    uVar9 = 0;
  }
  plVar10 = local_58;
  if (uVar9 != 0) {
    do {
      iVar12 = 0;
      lVar1 = *plVar10;
      if ((lVar1 != 0) &&
         (((*(char *)(lVar1 + 0xad) != '\0' || (*(char *)(lVar1 + 0xae) != '\0')) ||
          (*(char *)(lVar1 + 0xaf) != '\0')))) {
        local_48 = *(undefined8 *)(param_2 + 0x10);
        iVar8 = *(int *)(param_1 + 0x4d8);
        local_40 = lVar1;
        if (iVar8 != 0) {
          cVar3 = FUN_142f4fe90(*(undefined8 *)(param_1 + 0x4d0),&local_48);
          bVar15 = cVar3 == '\0';
          iVar13 = iVar12;
          do {
            iVar2 = iVar13;
            do {
              iVar2 = iVar2 + 1;
              if (iVar8 <= iVar2) break;
              cVar3 = FUN_142f4fe90((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x4d0),
                                    &local_48);
            } while (bVar15 == (cVar3 == '\0'));
            if (bVar15 != false) {
              if (iVar12 != iVar13) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0x4d0)),
                           (void *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x4d0)),
                           (longlong)(iVar2 - iVar13) << 4);
              }
              iVar12 = iVar12 + (iVar2 - iVar13);
            }
            bVar15 = (bool)(bVar15 ^ 1);
            iVar13 = iVar2;
          } while (iVar2 < iVar8);
          *(int *)(param_1 + 0x4d8) = iVar12;
        }
        lVar4 = FUN_142f5c680(param_1,*(undefined8 *)(param_2 + 0x10));
        uVar7 = 0;
        if ((lVar4 != 0) && (lVar6 = (longlong)*(int *)(lVar4 + 0x38), *(int *)(lVar4 + 0x38) != 0))
        {
          bVar15 = **(longlong **)(lVar4 + 0x30) != lVar1;
          uVar11 = uVar7;
          uVar14 = uVar7;
          do {
            iVar12 = (int)uVar11;
            uVar7 = uVar7 + 1;
            uVar11 = (ulonglong)(iVar12 + 1);
            if ((longlong)uVar7 < lVar6) {
              plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x30) + uVar7 * 8);
              do {
                if (bVar15 != (*plVar5 != lVar1)) break;
                uVar11 = (ulonglong)((int)uVar11 + 1);
                uVar7 = uVar7 + 1;
                plVar5 = plVar5 + 1;
              } while ((longlong)uVar7 < lVar6);
            }
            iVar8 = (int)uVar11 - iVar12;
            if (bVar15 != false) {
              iVar13 = (int)uVar14;
              if (iVar13 != iVar12) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar13 * 8),
                           (void *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar12 * 8),
                           (longlong)iVar8 << 3);
              }
              uVar14 = (ulonglong)(uint)(iVar13 + iVar8);
            }
            bVar15 = (bool)(bVar15 ^ 1);
          } while ((longlong)uVar7 < lVar6);
          *(int *)(lVar4 + 0x38) = (int)uVar14;
        }
      }
      local_68 = local_68 + 1;
      plVar10 = plVar10 + 1;
    } while (local_68 != uVar9);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f6b110 FUN_142f6b110 body=465 status=ok
// SIG undefined FUN_142f6b110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f6b110(longlong param_1,longlong *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  void *local_d0;
  ulonglong local_c8;
  undefined1 local_b8 [32];
  longlong local_98;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*param_2 != 0) {
    local_d8 = *(undefined8 *)(param_1 + 0x468);
    plVar6 = (longlong *)0x0;
    local_e8 = 0;
    local_e0 = 0;
    local_d0 = (void *)0x0;
    local_c8 = 0;
    if (&local_d0 != (void **)(param_1 + 0x548)) {
      uVar4 = *(uint *)(param_1 + 0x550);
      _Src = *(void **)(param_1 + 0x548);
      local_c8 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_d0,uVar4,0);
        _guard_xfg_dispatch_icall_nop(local_d0,_Src,(longlong)(int)uVar4 * 0x18);
      }
    }
    plVar5 = plVar6;
    plVar7 = plVar6;
    if (0 < *(int *)(param_1 + 0x460)) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x458) + (longlong)plVar7;
        if (*(char *)(lVar3 + 0x10) != '\0') {
          FUN_142f4ed90(local_b8,lVar3,plVar5);
          uVar1 = local_e0;
          lVar3 = (longlong)(int)local_e0;
          iVar2 = (int)local_e0 + 1;
          local_e0 = CONCAT44(local_e0._4_4_,iVar2);
          if (local_e0._4_4_ < iVar2) {
            TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
                      (&local_e8,uVar1 & 0xffffffff);
          }
          FUN_142f4ebd0(lVar3 * 0x78 + local_e8,local_b8);
          if (local_58 != 0) {
            FMemory::Free();
          }
          if (local_68 != 0) {
            FMemory::Free();
          }
          if (local_78 != 0) {
            FMemory::Free();
          }
          if (local_88 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
        }
        uVar4 = (int)plVar5 + 1;
        plVar5 = (longlong *)(ulonglong)uVar4;
        plVar7 = plVar7 + 0x10;
      } while ((int)uVar4 < *(int *)(param_1 + 0x460));
    }
    if (*param_2 != 0) {
      plVar6 = (longlong *)param_2[1];
    }
    (**(code **)(*plVar6 + 0x68))(plVar6,&local_e8);
    if (local_d0 != (void *)0x0) {
      FMemory::Free();
    }
    FUN_14146cd50(&local_e8);
  }
  return;
}



// FUNCTION 142f6b2f0 FUN_142f6b2f0 body=271 status=ok
// SIG undefined FUN_142f6b2f0(void)

longlong * FUN_142f6b2f0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_140c498b0(param_2);
  lVar2 = FWeakObjectPtr::Get(param_2);
  lVar6 = 0;
  lVar5 = lVar6;
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_2 + 8)) || (*(longlong *)(param_2 + 0x10) == 0))
    goto LAB_142f6b3d6;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_2,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_2);
    if (lVar2 == 0) goto LAB_142f6b3d6;
  }
  lVar3 = FUN_14171bfe0();
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
    lVar4 = FUN_142f71d80();
    lVar3 = lVar2;
    do {
      lVar5 = lVar2;
      if (lVar3 == lVar4) break;
      lVar3 = *(longlong *)(lVar3 + 0x30);
      lVar5 = lVar6;
    } while (lVar3 != 0);
  }
LAB_142f6b3d6:
  lVar2 = *(longlong *)(param_2 + 0x18);
  *param_1 = lVar5;
  if (lVar2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142f6b400 FUN_142f6b400 body=470 status=ok
// SIG undefined FUN_142f6b400(void)

void FUN_142f6b400(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  ulonglong local_res10;
  undefined1 local_res18;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 local_40;
  
  pwVar6 = (wchar_t *)0x0;
  local_48 = 0;
  local_40 = 0xb;
  local_res18 = param_3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"_Objective",0x16);
  local_res10 = *(ulonglong *)(param_2 + 0x18);
  FName::ToString(&local_res10,&local_58);
  cVar1 = FString::EndsWith(&local_58,&local_48,1);
  if (cVar1 != '\0') {
    iVar7 = 0;
    iVar2 = (int)local_40 + -1;
    if ((int)local_40 == 0) {
      iVar2 = iVar7;
    }
    if (local_50 == 0) {
      pwVar8 = L"";
      iVar5 = iVar7;
    }
    else {
      pwVar8 = local_58;
      iVar5 = local_50 + -1;
    }
    iVar2 = iVar5 - iVar2;
    if ((-1 < iVar2) && (iVar7 = iVar5, iVar2 < iVar5)) {
      iVar7 = iVar2;
    }
    local_68 = (wchar_t *)0x0;
    local_5c = 0;
    iVar2 = iVar7 + 1;
    if (iVar7 == 0) {
      iVar2 = 0;
    }
    local_60 = iVar2;
    if ((0 < iVar2) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0), iVar2 = local_60,
       pwVar6 = local_68, 0 < local_60)) {
      wcsncpy(local_68,pwVar8,(longlong)iVar7);
      pwVar6[iVar7] = L'\0';
    }
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar8 = L"";
    if (iVar2 != 0) {
      pwVar8 = pwVar6;
    }
    local_4c = local_5c;
    local_58 = pwVar6;
    local_50 = iVar2;
    puVar3 = (undefined8 *)FName::FName(&local_68,pwVar8,1);
    lVar4 = UObject::FindFunction(param_1,*puVar3);
    if ((lVar4 != 0) && (cVar1 = FUN_142f679d0(lVar4), cVar1 != '\0')) {
      local_res10 = (ulonglong)
                    CONCAT41((int)(CONCAT14(param_4,(undefined4)local_res10) >> 8),local_res18);
      (**(code **)(*param_1 + 0x208))(param_1,lVar4,&local_res10);
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f6b5e0 FUN_142f6b5e0 body=685 status=ok
// SIG undefined FUN_142f6b5e0(void)

void FUN_142f6b5e0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  wchar_t *pwVar12;
  undefined8 local_res10 [2];
  undefined1 local_res20 [8];
  wchar_t *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  wchar_t *local_60;
  uint local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  
  pwVar7 = (wchar_t *)0x0;
  uVar11 = 0;
  local_50 = 0;
  local_48 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
  FGenericPlatformString::Memcpy(local_50,L"_ObjectiveSet",0x1c);
  local_res10[0] = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(local_res10,&local_60);
  cVar4 = FString::EndsWith(&local_60,&local_50,1);
  if (cVar4 != '\0') {
    iVar10 = 0;
    iVar5 = (int)local_48 + -1;
    if ((int)local_48 == 0) {
      iVar5 = iVar10;
    }
    if (local_58 == 0) {
      pwVar12 = L"";
      iVar9 = iVar10;
    }
    else {
      pwVar12 = local_60;
      iVar9 = local_58 - 1;
    }
    local_78 = (wchar_t *)0x0;
    iVar5 = iVar9 - iVar5;
    if (-1 < iVar5) {
      iVar10 = iVar9;
      if (iVar5 < iVar9) {
        iVar10 = iVar5;
      }
      if (iVar10 != 0) {
        uVar11 = iVar10 + 1;
      }
    }
    local_70 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      pwVar7 = local_78;
      uVar11 = (uint)local_70;
      if (0 < (int)(uint)local_70) {
        wcsncpy(local_78,pwVar12,(longlong)iVar10);
        pwVar7[iVar10] = L'\0';
      }
    }
    if (local_60 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar12 = L"";
    if (uVar11 != 0) {
      pwVar12 = pwVar7;
    }
    local_54 = local_70._4_4_;
    local_60 = pwVar7;
    local_58 = uVar11;
    puVar6 = (undefined8 *)FName::FName(local_res20,pwVar12,1);
    pwVar7 = (wchar_t *)UObject::FindFunction(param_1,*puVar6);
    if ((pwVar7 != (wchar_t *)0x0) && ((char)pwVar7[0x46] == '\x01')) {
      local_70 = *(ulonglong *)(pwVar7 + 0x1c);
      local_68 = 0xffffffff;
      local_64 = 0x101;
      local_62 = 0;
      local_78 = pwVar7;
      FUN_140472e10(&local_78);
      uVar3 = local_70;
      if (local_70 != 0) {
        lVar8 = UEnumProperty::GetPrivateStaticClass();
        lVar1 = *(longlong *)(uVar3 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146b42bd0) && (_Init_thread_header(&DAT_146b42bd0), DAT_146b42bd0 == -1)) {
            FName::FName(&DAT_146b42bc8,L"ObjectiveSetEvent",1);
            _Init_thread_footer(&DAT_146b42bd0);
          }
          if (*(longlong *)(uVar3 + 0x18) == DAT_146b42bc8) {
            local_res10[0] = CONCAT71(local_res10[0]._1_7_,param_3);
            (**(code **)(*param_1 + 0x208))(param_1,pwVar7,local_res10);
          }
        }
      }
    }
  }
  if (local_60 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f6b890 FUN_142f6b890 body=178 status=ok
// SIG undefined FUN_142f6b890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f6b890(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_20 = 1;
  param_1[0x5f] = 0;
  local_28 = param_1;
  uVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = FUN_142f6c9f0(uVar2);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x498), lVar3 != 0)) {
    if (*(longlong *)(lVar3 + 0x18) == *param_2) {
LAB_142f6b919:
      param_1[0x5f] = lVar3;
    }
    else {
      plVar4 = *(longlong **)(lVar3 + 0x68);
      plVar1 = plVar4 + *(int *)(lVar3 + 0x70);
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        lVar3 = *plVar4;
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) == *param_2)) goto LAB_142f6b919;
      }
    }
  }
  FUN_142f4f9f0(&local_28);
  return;
}



// FUNCTION 142f6b950 FUN_142f6b950 body=372 status=ok
// SIG undefined FUN_142f6b950(void)

void FUN_142f6b950(longlong *param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_res8;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((param_1 != (longlong *)0x0) && (lVar4 = *param_2, lVar4 != 0)) {
    lVar2 = FUN_142f71d80();
    while (lVar4 != lVar2) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = FUN_142f6c9f0(uVar3);
    if (((lVar4 != 0) &&
        (plVar5 = (longlong *)FUN_142f5c820(lVar4,*param_2), plVar5 != (longlong *)0x0)) &&
       (lVar4 = UObject::FindFunction(plVar5,param_2[1]), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x8c) == '\0') {
        (**(code **)(*plVar5 + 0x208))(plVar5,lVar4,0);
      }
      else if (*(char *)(lVar4 + 0x8c) == '\x01') {
        local_30 = *(longlong *)(lVar4 + 0x38);
        local_28 = 0xffffffff;
        local_24 = 0x101;
        local_22 = 0;
        local_38 = lVar4;
        FUN_140472e10(&local_38);
        lVar2 = local_30;
        if (local_30 != 0) {
          lVar6 = UObject::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            local_res8 = param_1;
            if (param_3 != (longlong *)0x0) {
              local_res8 = param_3;
            }
            (**(code **)(*plVar5 + 0x208))(plVar5,lVar4,&local_res8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142f6bad0 FUN_142f6bad0 body=396 status=ok
// SIG undefined FUN_142f6bad0(void)

void FUN_142f6bad0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_res8;
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_2 != (longlong *)0x0) {
    lVar6 = *param_1;
    lStack_30 = param_1[1];
    if (lVar6 != 0) {
      local_38 = lVar6;
      lVar2 = FUN_142f71d80();
      lVar4 = lVar6;
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
      lVar4 = FUN_142f6c9f0(uVar3);
      if (((lVar4 != 0) &&
          (plVar5 = (longlong *)FUN_142f5c820(lVar4,lVar6), plVar5 != (longlong *)0x0)) &&
         (lVar6 = UObject::FindFunction(plVar5,lStack_30), lVar6 != 0)) {
        if (*(char *)(lVar6 + 0x8c) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142f6bba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x208))(plVar5,lVar6,0);
          return;
        }
        if (*(char *)(lVar6 + 0x8c) == '\x01') {
          lStack_30 = *(longlong *)(lVar6 + 0x38);
          local_28 = 0xffffffff;
          local_24 = 0x101;
          local_22 = 0;
          local_38 = lVar6;
          FUN_140472e10(&local_38);
          lVar4 = lStack_30;
          if (lStack_30 != 0) {
            lVar2 = UObject::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              local_res8 = param_2;
              if (param_3 != (longlong *)0x0) {
                local_res8 = param_3;
              }
              (**(code **)(*plVar5 + 0x208))(plVar5,lVar6,&local_res8);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142f6bc60 FUN_142f6bc60 body=174 status=ok
// SIG undefined FUN_142f6bc60(void)

undefined8 FUN_142f6bc60(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if ((*param_2 == 10) && (lVar1 = FUN_142f79a30(), param_2[3] == *(longlong *)(lVar1 + 0x18))) {
    local_30 = 0;
    local_38 = &DAT_1441d2800;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0xffffffff;
    local_14 = 0;
    local_10 = 0;
    uVar2 = FUN_142f79a30();
    FUN_141725e50(uVar2,param_3,&local_38,0);
    (**(code **)(*param_1 + 8))(param_1,&local_38);
    return 1;
  }
  return 0;
}



// FUNCTION 142f6bd10 FUN_142f6bd10 body=89 status=ok
// SIG undefined FUN_142f6bd10(void)

void FUN_142f6bd10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f6c3d0(*(longlong *)(param_1 + 0x198),param_2);
  }
  return;
}



// FUNCTION 142f6bd70 FUN_142f6bd70 body=79 status=ok
// SIG undefined FUN_142f6bd70(void)

void FUN_142f6bd70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f6da70();
    return;
  }
  return;
}



// FUNCTION 142f6bdc0 FUN_142f6bdc0 body=79 status=ok
// SIG undefined FUN_142f6bdc0(void)

void FUN_142f6bdc0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x198) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    uVar2 = FUN_142f6c9f0(lVar1);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142f6db20();
    return;
  }
  return;
}



// FUNCTION 142f6be10 FUN_142f6be10 body=428 status=ok
// SIG undefined FUN_142f6be10(void)

void FUN_142f6be10(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  float fVar8;
  longlong *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  uVar5 = FUN_142f5c680(param_1,*(undefined8 *)(param_1 + 0x468));
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_142f59550(uVar5,&local_48,1);
  plVar3 = local_48;
  puVar7 = *(undefined8 **)(param_1 + 0x558);
  puVar1 = puVar7 + (longlong)*(int *)(param_1 + 0x560) * 3;
  if (puVar7 != puVar1) {
    do {
      if (local_48 != local_48 + (int)local_40) {
        lVar2 = puVar7[1];
        plVar6 = local_48;
        do {
          if (*plVar6 == lVar2) {
            if ((*(longlong *)(param_1 + 0x568) != lVar2) && (puVar7[2] != 0)) {
              local_38 = &DAT_1441d2800;
              local_30 = 0;
              local_28 = 0;
              uStack_20 = 0;
              local_18 = 0xffffffff;
              local_14 = 0;
              local_10 = 0;
              FMemFileOut::seekp(&local_38,*puVar7);
              FWeakObjectPtr::operator=(&local_18,lVar2);
              if (lVar2 == 0) {
                (**(code **)(local_38 + 0x10))(&local_38);
              }
              else {
                local_28 = *(undefined8 *)(lVar2 + 200);
                uStack_20 = *(undefined8 *)(lVar2 + 0xd0);
                local_30 = *(undefined8 *)(lVar2 + 0x18);
              }
              cVar4 = FUN_142f63720(param_1,&local_38,param_1);
              if (cVar4 == '\0') {
                *(undefined8 *)(param_1 + 0x568) = puVar7[1];
                fVar8 = (float)FUN_142d199e0(puVar7[2]);
                *(int *)(param_1 + 0x570) = (int)ROUND((fVar8 * 100.0 + fVar8 * 100.0) - 0.5) >> 1;
                FUN_142f662a0(param_1);
                *(undefined1 *)(param_1 + 0x671) = 1;
              }
            }
            goto LAB_142f6bf8f;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != local_48 + (int)local_40);
      }
      puVar7 = puVar7 + 3;
    } while (puVar7 != puVar1);
  }
LAB_142f6bf8f:
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 142f6bfc0 FUN_142f6bfc0 body=58 status=ok
// SIG undefined FUN_142f6bfc0(void)

void FUN_142f6bfc0(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
    if (*(int *)((longlong)param_1 + 0x79c) == 1) {
      *(undefined4 *)((longlong)param_1 + 0x79c) = 0;
                    /* WARNING: Could not recover jumptable at 0x000142f6bff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x8f0))();
      return;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x79c) != 1) {
    *(undefined4 *)((longlong)param_1 + 0x79c) = 1;
    FUN_142f56470(param_1,0);
    return;
  }
  return;
}



// FUNCTION 142f6c000 FUN_142f6c000 body=294 status=ok
// SIG undefined FUN_142f6c000(void)

undefined8 FUN_142f6c000(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    lVar2 = UUserObjectListEntry::GetPrivateStaticClass();
    if (lVar2 != 0) {
      cVar1 = UClass::ImplementsInterface(*(undefined8 *)(param_2 + 0x10),lVar2);
      if (cVar1 != '\0') {
        lVar2 = param_1[0x24];
        if (lVar2 == 0) {
          lVar2 = FUN_1423407b0(param_1);
        }
        lVar2 = FUN_142f6c9f0(lVar2);
        if (lVar2 == 0) {
          param_1[0xe2] = param_2;
          (**(code **)(*param_1 + 0x8f8))(param_1);
        }
        else {
          if (param_1[0xe2] != 0) {
            local_18 = param_1;
            uVar3 = FUN_142f768a0();
            local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
            FUN_142f6e000(lVar2,&local_18);
          }
          param_1[0xe2] = param_2;
          cVar1 = FUN_142f56410(param_1);
          if (cVar1 == '\0') {
            (**(code **)(*param_1 + 0x8f8))(param_1);
            local_18 = param_1;
            uVar3 = FUN_142f768a0();
            local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
            FUN_142f690f0(lVar2,&local_18,0);
            return 1;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142f6c130 FUN_142f6c130 body=43 status=ok
// SIG undefined FUN_142f6c130(void)

void FUN_142f6c130(longlong *param_1,int param_2)

{
  *(int *)((longlong)param_1 + 0x79c) = param_2;
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f6c153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8f0))();
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      FUN_142f56470();
      return;
    }
    return;
  }
  FUN_142f56470(param_1,0);
  return;
}



// FUNCTION 142f6c160 FUN_142f6c160 body=188 status=ok
// SIG undefined FUN_142f6c160(void)

void FUN_142f6c160(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar3 = param_2;
    do {
      lVar4 = param_2;
      if (lVar3 == lVar1) goto LAB_142f6c192;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  lVar4 = 0;
LAB_142f6c192:
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    lVar2 = FUN_142f71d80();
    lVar3 = *(longlong *)(param_1 + 0x4c8);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_142f6c1c0;
    }
  }
  lVar3 = 0;
LAB_142f6c1c0:
  if (lVar4 != lVar3) {
    if (*(longlong *)(param_1 + 0x4c8) != 0) {
      lVar1 = FUN_142f71d80();
      for (lVar3 = *(longlong *)(param_1 + 0x4c8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30))
      {
        if (lVar3 == lVar1) {
          if (*(longlong *)(param_1 + 0x4c8) != 0) {
            FUN_142f56570(param_1);
          }
          break;
        }
      }
    }
    *(longlong *)(param_1 + 0x4c8) = param_2;
  }
  return;
}



// FUNCTION 142f6c220 FUN_142f6c220 body=203 status=ok
// SIG undefined FUN_142f6c220(void)

void FUN_142f6c220(longlong param_1,longlong param_2)

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
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if ((*(int *)(param_1 + 0x4c) < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
    }
    if (*(undefined2 **)(param_1 + 0x40) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_28,lVar4);
    FSoftObjectPath::operator=(param_1 + 0x38,uVar2);
    FWeakObjectPtr::operator=(param_1 + 0x28,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x30) = DAT_1464b56f4;
  }
  return;
}



// FUNCTION 142f6c2f0 FUN_142f6c2f0 body=219 status=ok
// SIG undefined FUN_142f6c2f0(void)

void FUN_142f6c2f0(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar6 = *(longlong **)(param_1 + 0x548);
    plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0x550) * 3;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 3) {
      if (*plVar6 != 0) {
        lVar2 = FUN_142f71d80();
        lVar5 = *plVar6;
        for (lVar4 = lVar5; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar2) goto LAB_142f6c366;
        }
      }
      lVar5 = 0;
LAB_142f6c366:
      if (param_2 != 0) {
        lVar2 = FUN_142f71d80();
        lVar4 = param_2;
        do {
          lVar3 = param_2;
          if (lVar4 == lVar2) goto LAB_142f6c383;
          lVar4 = *(longlong *)(lVar4 + 0x30);
        } while (lVar4 != 0);
      }
      lVar3 = 0;
LAB_142f6c383:
      if (lVar5 == lVar3) {
        FUN_142f52130(param_1,param_2,param_3 - *(float *)(plVar6 + 1));
        return;
      }
    }
  }
  return;
}



// FUNCTION 142f6c3d0 FUN_142f6c3d0 body=737 status=ok
// SIG undefined FUN_142f6c3d0(void)

void FUN_142f6c3d0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *local_28;
  undefined8 local_20;
  
  if ((char)param_1[0x25] == '\x03') {
    if (param_2 != 0) {
      uVar3 = FUN_142f71d80();
      uVar13 = param_2;
      do {
        if (uVar13 == uVar3) {
          cVar2 = (**(code **)(*param_1 + 0x720))(param_1,param_2);
          if (cVar2 != '\0') {
            return;
          }
          break;
        }
        uVar13 = *(ulonglong *)(uVar13 + 0x30);
      } while (uVar13 != 0);
    }
    uVar13 = 0;
    if (param_1[0x8d] != 0) {
      lVar4 = FUN_142f71d80();
      lVar6 = param_1[0x8d];
      lVar9 = lVar6;
      if (lVar6 != 0) {
LAB_142f6c447:
        if (lVar9 != lVar4) goto code_r0x000142f6c44c;
        if (lVar6 == 0) goto LAB_142f6c4aa;
        uVar5 = FUN_142f71d80();
        for (uVar3 = param_1[0x8d];
            (uVar7 = uVar13, uVar3 != 0 && (uVar7 = param_1[0x8d], uVar3 != uVar5));
            uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
        }
        uVar3 = uVar13;
        if (param_2 != 0) {
          uVar8 = FUN_142f71d80();
          uVar5 = param_2;
          do {
            uVar3 = param_2;
            if (uVar5 == uVar8) break;
            uVar5 = *(ulonglong *)(uVar5 + 0x30);
            uVar3 = uVar13;
          } while (uVar5 != 0);
        }
        if (uVar7 == uVar3) {
          return;
        }
      }
    }
LAB_142f6c4aa:
    if (param_2 != 0) {
      uVar5 = FUN_142f71d80();
      uVar3 = param_2;
      do {
        if (uVar3 == uVar5) {
          uVar12 = 4;
          lVar6 = FUN_142f5c680(param_1,param_2);
          if (lVar6 != 0) {
            uVar12 = (uint)*(byte *)(lVar6 + 0x10);
          }
          if ((uVar12 - 1 & 0xfffffffd) == 0) goto LAB_142f6c54f;
          break;
        }
        uVar3 = *(ulonglong *)(uVar3 + 0x30);
      } while (uVar3 != 0);
      if (param_2 != 0) {
        uVar3 = FUN_142f71d80();
        do {
          if (param_2 == uVar3) break;
          param_2 = *(ulonglong *)(param_2 + 0x30);
        } while (param_2 != 0);
      }
    }
    plVar10 = (longlong *)param_1[0x8b];
    plVar11 = plVar10 + (longlong)(int)param_1[0x8c] * 0x10;
    param_2 = uVar13;
    for (; (plVar10 != plVar11 &&
           (((char)plVar10[2] != '\x01' ||
            (param_2 = plVar10[1], *(char *)(*plVar10 + 0x177) == '\0')))); plVar10 = plVar10 + 0x10
        ) {
    }
LAB_142f6c54f:
    uVar3 = uVar13;
    if (param_1[0x8d] != 0) {
      uVar7 = FUN_142f71d80();
      for (uVar5 = param_1[0x8d];
          (uVar3 = uVar13, uVar5 != 0 && (uVar3 = param_1[0x8d], uVar5 != uVar7));
          uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
      }
    }
    uVar5 = uVar13;
    if (param_2 != 0) {
      uVar8 = FUN_142f71d80();
      uVar7 = param_2;
      do {
        uVar5 = param_2;
        if (uVar7 == uVar8) break;
        uVar7 = *(ulonglong *)(uVar7 + 0x30);
        uVar5 = uVar13;
      } while (uVar7 != 0);
    }
    if (uVar3 != uVar5) {
      lVar6 = param_1[0x8d];
      param_1[0x8d] = param_2;
      local_28 = (undefined8 *)0x0;
      local_20 = 0;
      FUN_142f5e530(param_1,&local_28);
      puVar1 = local_28;
      uVar3 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
      if (local_28 + (int)local_20 < local_28) {
        uVar3 = uVar13;
      }
      puVar14 = local_28;
      if (uVar3 != 0) {
        do {
          FUN_142f7b520(*puVar14,param_2);
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 1;
        } while (uVar13 != uVar3);
      }
      if (puVar1 != (undefined8 *)0x0) {
        FMemory::Free(puVar1);
      }
      FUN_142f66a90(param_1,param_1[0x8d],lVar6);
      plVar10 = (longlong *)param_1[0xc0];
      plVar11 = plVar10 + (longlong)(int)param_1[0xc1] * 2;
      for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
        if (*plVar10 != 0) {
          (**(code **)(*(longlong *)plVar10[1] + 0x10))((longlong *)plVar10[1],param_1 + 0xcc);
        }
      }
      FUN_142f6be10(param_1);
    }
  }
  return;
code_r0x000142f6c44c:
  lVar9 = *(longlong *)(lVar9 + 0x30);
  if (lVar9 == 0) goto LAB_142f6c4aa;
  goto LAB_142f6c447;
}



// FUNCTION 142f6c6c0 FUN_142f6c6c0 body=170 status=ok
// SIG undefined FUN_142f6c6c0(void)

void FUN_142f6c6c0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined4 *)(param_1 + 0x328) = 0;
    if ((*(int *)(param_1 + 0x32c) < 0) && (*(int *)(param_1 + 0x32c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 800,0);
    }
    if (*(undefined2 **)(param_1 + 800) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 800) = 0;
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
    return;
  }
  uVar1 = FSoftObjectPath::FSoftObjectPath(local_28);
  FSoftObjectPath::operator=(param_1 + 0x318,uVar1);
  FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x308),param_2);
  LOCK();
  if (DAT_1464b56f4 == 0) {
    DAT_1464b56f4 = 0;
  }
  UNLOCK();
  *(int *)(param_1 + 0x310) = DAT_1464b56f4;
  return;
}



// FUNCTION 142f6c770 FUN_142f6c770 body=191 status=ok
// SIG undefined FUN_142f6c770(void)

void FUN_142f6c770(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(int *)(param_1 + 0x718) != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    *(int *)(param_1 + 0x718) = param_2;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    lVar1 = FUN_142f6c9f0(lVar1);
    if (lVar1 != 0) {
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      lVar3 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      plVar5 = *(longlong **)(lVar1 + 0x660);
      plVar6 = plVar5 + (longlong)*(int *)(lVar1 + 0x668) * 0xe;
      if (plVar5 != plVar6) {
        while( true ) {
          if (*plVar5 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = plVar5[1];
          }
          if ((lVar4 == lVar3) && (*plVar5 == param_1)) break;
          plVar5 = plVar5 + 0xe;
          if (plVar5 == plVar6) {
            return;
          }
        }
        if (*(int *)((longlong)plVar5 + 0x34) != *(int *)(param_1 + 0x718)) {
          *(int *)((longlong)plVar5 + 0x34) = *(int *)(param_1 + 0x718);
          *(undefined1 *)(lVar1 + 0x670) = 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 142f6c830 FUN_142f6c830 body=382 status=ok
// SIG undefined FUN_142f6c830(void)

void FUN_142f6c830(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *local_28;
  undefined8 local_20;
  
  puVar8 = *(ulonglong **)(param_1 + 0x548);
  puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x550) * 3;
  if (puVar8 != puVar1) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      if (*puVar8 != 0) {
        uVar3 = FUN_142f71d80();
        for (uVar5 = *puVar8; (uVar6 = uVar7, uVar5 != 0 && (uVar6 = *puVar8, uVar5 != uVar3));
            uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
        }
      }
      uVar5 = uVar7;
      if (param_2 != 0) {
        uVar4 = FUN_142f71d80();
        uVar3 = param_2;
        do {
          uVar5 = param_2;
          if (uVar3 == uVar4) break;
          uVar3 = *(ulonglong *)(uVar3 + 0x30);
          uVar5 = uVar7;
        } while (uVar3 != 0);
      }
      if (uVar6 == uVar5) {
        if ((char)puVar8[2] != '\0') {
          return;
        }
        *(undefined1 *)(puVar8 + 2) = 1;
        if (*(char *)(param_1 + 0x128) == '\x03') {
          local_28 = (undefined8 *)0x0;
          local_20 = 0;
          FUN_142f5e530(param_1,&local_28);
          puVar2 = local_28;
          uVar6 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
          if (local_28 + (int)local_20 < local_28) {
            uVar6 = uVar7;
          }
          puVar9 = local_28;
          if (uVar6 != 0) {
            do {
              FUN_142f7b3b0(*puVar9,param_2);
              uVar7 = uVar7 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar7 != uVar6);
          }
          if (puVar2 != (undefined8 *)0x0) {
            FMemory::Free(puVar2);
          }
        }
        FUN_142f65da0(param_1,param_2,0,(int)puVar8[1],*(undefined4 *)((longlong)puVar8 + 0xc));
        FUN_142f664f0(param_1,param_2,0,(int)puVar8[1],*(undefined4 *)((longlong)puVar8 + 0xc));
        return;
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar1);
  }
  return;
}



// FUNCTION 142f6c9b0 FUN_142f6c9b0 body=55 status=ok
// SIG undefined FUN_142f6c9b0(void)

void FUN_142f6c9b0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f6c830(lVar1,*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 142f6c9f0 FUN_142f6c9f0 body=252 status=ok
// SIG undefined FUN_142f6c9f0(void)

longlong FUN_142f6c9f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = UWorld::GetGameState<APVPGameState>();
  if (lVar2 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b42c50) &&
       (_Init_thread_header(&DAT_146b42c50), DAT_146b42c50 == -1)) {
      FName::FName(&DAT_146b42c48,L"MissionTracker",1);
      _Init_thread_footer(&DAT_146b42c50);
    }
    plVar3 = (longlong *)FUN_140c2d5e0(*(undefined8 *)(lVar2 + 0x10),DAT_146b42c48);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(*plVar3 + 0x378))(plVar3,*(int *)((longlong)plVar3 + 0x44) + lVar2);
    if (lVar2 != 0) {
      lVar4 = FUN_142f79140();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar2;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142f6caf0 FUN_142f6caf0 body=252 status=ok
// SIG undefined FUN_142f6caf0(void)

longlong FUN_142f6caf0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = UWorld::GetGameState<APVPGameState>();
  if (lVar2 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b42c60) &&
       (_Init_thread_header(&DAT_146b42c60), DAT_146b42c60 == -1)) {
      FName::FName(&DAT_146b42c58,L"MissionTracker",1);
      _Init_thread_footer(&DAT_146b42c60);
    }
    plVar3 = (longlong *)FUN_140c2d5e0(*(undefined8 *)(lVar2 + 0x10),DAT_146b42c58);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    lVar2 = (**(code **)(*plVar3 + 0x378))(plVar3,*(int *)((longlong)plVar3 + 0x44) + lVar2);
    if (lVar2 != 0) {
      lVar4 = FUN_142f76500();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar2;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142f6cbf0 FUN_142f6cbf0 body=382 status=ok
// SIG undefined FUN_142f6cbf0(void)

void FUN_142f6cbf0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *local_28;
  undefined8 local_20;
  
  puVar8 = *(ulonglong **)(param_1 + 0x548);
  puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x550) * 3;
  if (puVar8 != puVar1) {
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      if (*puVar8 != 0) {
        uVar3 = FUN_142f71d80();
        for (uVar5 = *puVar8; (uVar6 = uVar7, uVar5 != 0 && (uVar6 = *puVar8, uVar5 != uVar3));
            uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
        }
      }
      uVar5 = uVar7;
      if (param_2 != 0) {
        uVar4 = FUN_142f71d80();
        uVar3 = param_2;
        do {
          uVar5 = param_2;
          if (uVar3 == uVar4) break;
          uVar3 = *(ulonglong *)(uVar3 + 0x30);
          uVar5 = uVar7;
        } while (uVar3 != 0);
      }
      if (uVar6 == uVar5) {
        if ((char)puVar8[2] == '\0') {
          return;
        }
        *(undefined1 *)(puVar8 + 2) = 0;
        if (*(char *)(param_1 + 0x128) == '\x03') {
          local_28 = (undefined8 *)0x0;
          local_20 = 0;
          FUN_142f5e530(param_1,&local_28);
          puVar2 = local_28;
          uVar6 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
          if (local_28 + (int)local_20 < local_28) {
            uVar6 = uVar7;
          }
          puVar9 = local_28;
          if (uVar6 != 0) {
            do {
              FUN_142f7b3f0(*puVar9,param_2);
              uVar7 = uVar7 + 1;
              puVar9 = puVar9 + 1;
            } while (uVar7 != uVar6);
          }
          if (puVar2 != (undefined8 *)0x0) {
            FMemory::Free(puVar2);
          }
        }
        FUN_142f65da0(param_1,param_2,1,(int)puVar8[1],*(undefined4 *)((longlong)puVar8 + 0xc));
        FUN_142f664f0(param_1,param_2,1,(int)puVar8[1],*(undefined4 *)((longlong)puVar8 + 0xc));
        return;
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar1);
  }
  return;
}



// FUNCTION 142f6cd70 FUN_142f6cd70 body=55 status=ok
// SIG undefined FUN_142f6cd70(void)

void FUN_142f6cd70(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f6cbf0(lVar1,*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 142f6cdb0 FUN_142f6cdb0 body=300 status=ok
// SIG undefined FUN_142f6cdb0(void)

void FUN_142f6cdb0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(longlong *)(param_1 + 0x738) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x730);
    if (*(char *)(param_1 + 0x798) != '\0') {
      if (lVar2 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar1 = AGFreezeCharacterCue::GetPrivateStaticClass();
        uVar3 = 0;
        uVar1 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
        *(undefined8 *)(param_1 + 0x730) = uVar1;
        FUN_14260f940(uVar1,*(undefined8 *)(param_1 + 0x738));
        FUN_142382f60(*(undefined8 *)(param_1 + 0x730),param_1,&DAT_146532184,0);
        FUN_142398770(*(undefined8 *)(param_1 + 0x730),param_1 + 0x740,0,0,uVar3 & 0xffffff00);
        FUN_14234b150(*(undefined8 *)(param_1 + 0x730));
        lVar2 = *(longlong *)(param_1 + 0x730);
      }
      FUN_1425fcab0(lVar2,0);
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x730),1);
      return;
    }
    if (lVar2 != 0) {
      FUN_142600fa0();
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x730),0,1);
      return;
    }
  }
  return;
}



// FUNCTION 142f6cee0 FUN_142f6cee0 body=479 status=ok
// SIG undefined FUN_142f6cee0(void)

void FUN_142f6cee0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *local_38;
  undefined8 local_30;
  
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    return;
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(lVar4 + 0x128) != '\x03') {
    return;
  }
  puVar5 = (undefined8 *)FUN_142f5c680(lVar4,uVar1);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_142f59550(puVar5,&local_38,1);
  plVar2 = local_38;
  if ((puVar5 != (undefined8 *)0x0) && (puVar5[5] != 0)) {
    for (plVar6 = local_38; plVar6 != local_38 + (int)local_30; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_2) {
        if ((((param_4 != '\0') || (*(longlong *)(puVar5[5] + 0x70) == param_3)) && (param_2 != 0))
           && (param_3 != 0)) {
          local_38 = (longlong *)0x0;
          local_30 = 0;
          FUN_142f59e30(*puVar5,param_3,&local_38);
          plVar3 = local_38;
          plVar6 = local_38;
          goto joined_r0x000142f6d00a;
        }
        break;
      }
    }
  }
  goto LAB_142f6d090;
joined_r0x000142f6d00a:
  if (plVar6 == local_38 + (int)local_30) goto LAB_142f6d01e;
  if (*plVar6 == param_2) goto LAB_142f6d083;
  plVar6 = plVar6 + 1;
  goto joined_r0x000142f6d00a;
LAB_142f6d01e:
  FUN_142f6b400(*puVar5,param_2,9,0);
  FUN_142f65f00(lVar4,puVar5[1],param_2,9);
  uVar7 = 0;
  FUN_142f66680(lVar4,puVar5[1],param_2,9,0);
  if (param_4 == '\0') {
    FUN_142f526d0(lVar4,uVar1,param_3,0,uVar7 & 0xffffff00);
  }
  else {
    FUN_142f64640();
  }
LAB_142f6d083:
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
LAB_142f6d090:
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 142f6d0c0 FUN_142f6d0c0 body=2269 status=ok
// SIG undefined FUN_142f6d0c0(void)

void FUN_142f6d0c0(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  bool bVar23;
  float fVar24;
  int local_res18;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  int iStack_88;
  uint uStack_84;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_1422406d0();
  lVar16 = param_1[0xcc];
  lVar14 = (longlong)(int)param_1[0xcd] * 0x70 + lVar16;
  if (lVar16 != lVar14) {
    lVar12 = lVar16 + 0x20;
    do {
      cVar5 = FWeakObjectPtr::IsValid();
      if (cVar5 != '\0') {
        lVar6 = FWeakObjectPtr::Get();
        local_108 = *(longlong **)(lVar6 + 0x220);
        fVar24 = *(float *)(lVar6 + 0x228);
        local_100 = CONCAT44(local_100._4_4_,fVar24);
        if (((10.0 < ABS(*(float *)(lVar12 + 8) - *(float *)(lVar6 + 0x220))) ||
            (10.0 < ABS(*(float *)(lVar12 + 0xc) - *(float *)(lVar6 + 0x224)))) ||
           (10.0 < ABS(*(float *)(lVar12 + 0x10) - fVar24))) {
          *(longlong **)(lVar12 + 8) = local_108;
          *(float *)(lVar12 + 0x10) = fVar24;
          *(undefined1 *)(param_1 + 0xce) = 1;
        }
      }
      lVar16 = lVar16 + 0x70;
      lVar12 = lVar12 + 0x70;
    } while (lVar16 != lVar14);
  }
  if ((char)param_1[0xce] != '\0') {
    lVar16 = (longlong)(int)param_1[0xc1];
    iVar22 = 0;
    if ((int)param_1[0xc1] != 0) {
      iVar22 = 0;
      bVar23 = *(longlong *)param_1[0xc0] != 0;
      lVar14 = 0;
      iVar20 = 0;
      do {
        lVar14 = lVar14 + 1;
        iVar15 = iVar20 + 1;
        if (lVar14 < lVar16) {
          plVar10 = (longlong *)(lVar14 * 0x10 + param_1[0xc0]);
          do {
            if (bVar23 != (*plVar10 != 0)) break;
            iVar15 = iVar15 + 1;
            lVar14 = lVar14 + 1;
            plVar10 = plVar10 + 2;
          } while (lVar14 < lVar16);
        }
        if (bVar23 != false) {
          if (iVar22 != iVar20) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar22 * 0x10 + param_1[0xc0]),
                       (void *)((longlong)iVar20 * 0x10 + param_1[0xc0]),
                       (longlong)(iVar15 - iVar20) << 4);
          }
          iVar22 = iVar22 + (iVar15 - iVar20);
        }
        bVar23 = (bool)(bVar23 ^ 1);
        iVar20 = iVar15;
      } while (lVar14 < lVar16);
      *(int *)(param_1 + 0xc1) = iVar22;
    }
    plVar10 = (longlong *)param_1[0xc0];
    plVar11 = plVar10 + (longlong)iVar22 * 2;
    for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
      if (*plVar10 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)plVar10[1];
      }
      (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 0xcc);
    }
    (**(code **)(*param_1 + 0x600))();
    *(undefined1 *)(param_1 + 0xce) = 0;
  }
  if ((char)param_1[0xbf] != '\0') {
    *(undefined1 *)(param_1 + 0xbf) = 0;
    local_108 = param_1 + 0xb3;
    local_f0 = 0;
    uVar2 = *(uint *)(param_1 + 0xb8);
    puVar21 = (uint *)(param_1 + 0xb5);
    uStack_ec = 1;
    uStack_dc = 0;
    iStack_d8 = 0;
    if (uVar2 != 0) {
      puVar19 = (uint *)param_1[0xb7];
      if ((uint *)param_1[0xb7] == (uint *)0x0) {
        puVar19 = puVar21;
      }
      uVar3 = *puVar19;
      iStack_d8 = 0;
      local_f0 = 0;
      while (uVar3 == 0) {
        lVar16 = (longlong)local_f0;
        iStack_d8 = iStack_d8 + 0x20;
        iVar22 = local_f0 + 1;
        bVar23 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f0;
        local_f0 = iVar22;
        if (bVar23) goto LAB_142f6d3c1;
        uVar3 = puVar19[lVar16 + 1];
      }
      uStack_ec = -uVar3 & uVar3;
      iVar22 = 0x1f;
      if (uStack_ec != 0) {
        for (; uStack_ec >> iVar22 == 0; iVar22 = iVar22 + -1) {
        }
      }
      if (uStack_ec == 0) {
        iVar22 = 0x20;
      }
      else {
        iVar22 = 0x1f - iVar22;
      }
      uStack_dc = (iStack_d8 - iVar22) + 0x1f;
      if ((int)uVar2 < (int)uStack_dc) {
LAB_142f6d3c1:
        uStack_dc = uVar2;
      }
    }
    local_e0 = 0xffffffff;
    uVar3 = *(uint *)(param_1 + 0xb8);
    uStack_c8 = CONCAT44(uStack_ec,local_f0);
    uStack_b8 = CONCAT44(uStack_dc,0xffffffff);
    uStack_b0 = CONCAT44(uStack_d4,iStack_d8);
    uVar13 = -1 << ((byte)uVar3 & 0x1f);
    uVar18 = uVar3 & 0xffffffe0;
    uStack_c0 = CONCAT44(uVar3,uVar13);
    iStack_88 = local_f0;
    uStack_84 = uStack_ec;
    if (uVar3 != uVar2) {
      puVar19 = (uint *)param_1[0xb7];
      if ((uint *)param_1[0xb7] == (uint *)0x0) {
        puVar19 = puVar21;
      }
      uVar13 = puVar19[(int)uVar3 >> 5] & uVar13;
      iVar22 = (int)uVar3 >> 5;
      while (uVar13 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar22)
        goto LAB_142f6d494;
        uVar13 = puVar19[(longlong)iVar22 + 1];
        uStack_c0 = 0xffffffff;
        iVar22 = iVar22 + 1;
      }
      uVar13 = -uVar13 & uVar13;
      iVar22 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar22 == 0; iVar22 = iVar22 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar22 = 0x20;
      }
      else {
        iVar22 = 0x1f - iVar22;
      }
      iVar22 = (uVar18 - iVar22) + 0x1f;
      uStack_c0 = CONCAT44(iVar22,(undefined4)uStack_c0);
      if ((int)uVar2 < iVar22) {
LAB_142f6d494:
        uStack_c0 = CONCAT44(uVar2,(undefined4)uStack_c0);
      }
    }
    local_a8 = uStack_c0 >> 0x20;
    puStack_e8 = puVar21;
    local_d0 = local_108;
    local_80 = puVar21;
    uStack_78 = uStack_b8;
    local_70 = uStack_b0;
    local_90 = local_108;
    while( true ) {
      if (((uStack_78._4_4_ == (int)local_a8) && (local_80 == puVar21)) && (local_90 == local_108))
      break;
      local_f8 = *local_90;
      lVar14 = (longlong)uStack_78._4_4_ * 0x20;
      iVar22 = *(int *)(lVar14 + 0x10 + local_f8);
      lVar16 = (longlong)iVar22;
      if (iVar22 != 0) {
        puVar4 = *(undefined4 **)(lVar14 + 8 + local_f8);
        iVar20 = 0;
        local_res18 = 0;
        lVar6 = 0;
        local_a0 = *puVar4;
        local_9c = puVar4[1];
        local_98 = *(undefined8 *)(puVar4 + 2);
        lVar12 = FWeakObjectPtr::Get(&local_a0);
        bVar23 = lVar12 != 0;
        iVar22 = 0;
        do {
          lVar6 = lVar6 + 1;
          iVar15 = iVar22 + 1;
          if (lVar6 < lVar16) {
            lVar12 = lVar6 * 0x10;
            do {
              lVar7 = *(longlong *)(lVar14 + 8 + local_f8);
              local_d0 = (longlong *)
                         CONCAT44(*(undefined4 *)(lVar12 + 4 + lVar7),
                                  *(undefined4 *)(lVar12 + lVar7));
              uStack_c8 = *(undefined8 *)(lVar12 + 8 + lVar7);
              lVar7 = FWeakObjectPtr::Get(&local_d0);
              iVar20 = local_res18;
              if (bVar23 != (lVar7 != 0)) break;
              iVar15 = iVar15 + 1;
              lVar6 = lVar6 + 1;
              lVar12 = lVar12 + 0x10;
            } while (lVar6 < lVar16);
          }
          if (bVar23 != false) {
            if (iVar20 != iVar22) {
              lVar12 = *(longlong *)(lVar14 + 8 + local_f8);
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar20 * 0x10 + lVar12),
                         (void *)((longlong)iVar22 * 0x10 + lVar12),(longlong)(iVar15 - iVar22) << 4
                        );
            }
            local_res18 = iVar20 + (iVar15 - iVar22);
            iVar20 = local_res18;
          }
          bVar23 = (bool)(bVar23 ^ 1);
          iVar22 = iVar15;
        } while (lVar6 < lVar16);
        *(int *)(lVar14 + 0x10 + local_f8) = iVar20;
        puVar21 = puStack_e8;
      }
      uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_84);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
    }
    lVar16 = (longlong)(int)param_1[0xbe];
    if ((int)param_1[0xbe] != 0) {
      iVar20 = 0;
      bVar23 = *(longlong *)param_1[0xbd] != 0;
      lVar14 = 0;
      iVar22 = 0;
      do {
        lVar14 = lVar14 + 1;
        iVar15 = iVar22 + 1;
        if (lVar14 < lVar16) {
          plVar10 = (longlong *)(lVar14 * 0x10 + param_1[0xbd]);
          do {
            if (bVar23 != (*plVar10 != 0)) break;
            iVar15 = iVar15 + 1;
            lVar14 = lVar14 + 1;
            plVar10 = plVar10 + 2;
          } while (lVar14 < lVar16);
        }
        if (bVar23 != false) {
          if (iVar20 != iVar22) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar20 * 0x10 + param_1[0xbd]),
                       (void *)((longlong)iVar22 * 0x10 + param_1[0xbd]),
                       (longlong)(iVar15 - iVar22) << 4);
          }
          iVar20 = iVar20 + (iVar15 - iVar22);
        }
        bVar23 = (bool)(bVar23 ^ 1);
        iVar22 = iVar15;
      } while (lVar14 < lVar16);
      *(int *)(param_1 + 0xbe) = iVar20;
    }
  }
  param_1[0x95] = 0;
  plVar11 = (longlong *)param_1[0xa9];
  plVar10 = plVar11 + (longlong)(int)param_1[0xaa] * 3;
  do {
    if (plVar11 == plVar10) {
LAB_142f6d827:
      puVar17 = (undefined8 *)param_1[0xab];
      puVar1 = puVar17 + (longlong)(int)param_1[0xac] * 3;
      do {
        if (puVar17 == puVar1) {
LAB_142f6d94b:
          if (*(char *)((longlong)param_1 + 0x671) != '\0') {
            (**(code **)(*param_1 + 0x600))(param_1);
            *(undefined1 *)((longlong)param_1 + 0x671) = 0;
          }
          return;
        }
        if ((puVar17[2] == 0) || ((*(uint *)(puVar17[2] + 0x840) >> 3 & 1) != 0)) {
          uVar9 = FUN_142f5c680(param_1,*puVar17);
          local_108 = (longlong *)0x0;
          local_100 = 0;
          FUN_142f59550(uVar9,&local_108,1);
          plVar10 = local_108;
          if (local_108 != local_108 + (int)local_100) {
            plVar11 = local_108;
            do {
              if (*plVar11 == puVar17[1]) {
                FUN_142f583f0(param_1,*puVar17);
                *(undefined1 *)((longlong)param_1 + 0x671) = 1;
                if (plVar10 != (longlong *)0x0) {
                  FMemory::Free(plVar10);
                }
                goto LAB_142f6d94b;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != local_108 + (int)local_100);
          }
          if (local_108 != (longlong *)0x0) {
            FMemory::Free(local_108);
          }
        }
        else if (puVar17[1] == param_1[0xad]) {
          lVar16 = param_1[0xae];
          fVar24 = (float)FUN_142d199e0();
          iVar22 = (int)ROUND((fVar24 * 100.0 + fVar24 * 100.0) - 0.5) >> 1;
          *(int *)(param_1 + 0xae) = iVar22;
          if ((int)lVar16 != iVar22) {
            *(undefined1 *)((longlong)param_1 + 0x671) = 1;
          }
        }
        puVar17 = puVar17 + 3;
      } while( true );
    }
    if ((((char)plVar11[2] != '\0') && (*(char *)((longlong)plVar11 + 0x12) == '\0')) &&
       (fVar24 = *(float *)(plVar11 + 1), *(float *)(plVar11 + 1) = fVar24 - param_2,
       fVar24 - param_2 <= 0.0)) {
      if ((char)param_1[0x25] == '\x03') {
        if (*(char *)((longlong)plVar11 + 0x11) != '\0') {
          FUN_142f583f0(param_1,*plVar11);
          goto LAB_142f6d827;
        }
        *(undefined4 *)(plVar11 + 1) = 0;
        lVar16 = *plVar11;
        *(undefined1 *)((longlong)plVar11 + 0x12) = 1;
        if (lVar16 != 0) {
          lVar12 = FUN_142f71d80();
          lVar14 = lVar16;
          do {
            if (lVar14 == lVar12) {
              plVar8 = (longlong *)FUN_142f5c680(param_1,lVar16);
              if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
                FUN_142f720d0();
              }
              break;
            }
            lVar14 = *(longlong *)(lVar14 + 0x30);
          } while (lVar14 != 0);
        }
        FUN_142f65da0(param_1,*plVar11,3,0,*(undefined4 *)((longlong)plVar11 + 0xc));
        FUN_142f664f0(param_1,*plVar11,3,0,*(undefined4 *)((longlong)plVar11 + 0xc));
      }
      else {
        *(undefined4 *)(plVar11 + 1) = 0;
        *(undefined1 *)((longlong)plVar11 + 0x12) = 1;
        if (*(char *)((longlong)plVar11 + 0x11) == '\0') {
          FUN_142f65da0(param_1,*plVar11,3,0,*(undefined4 *)((longlong)plVar11 + 0xc));
          FUN_142f664f0(param_1,*plVar11,3,0,*(undefined4 *)((longlong)plVar11 + 0xc));
        }
      }
    }
    plVar11 = plVar11 + 3;
  } while( true );
}



// FUNCTION 142f6d9a0 FUN_142f6d9a0 body=200 status=ok
// SIG undefined FUN_142f6d9a0(void)

void FUN_142f6d9a0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (((lVar2 != 0) && (lVar3 = FUN_142f5c680(lVar2,param_2), lVar3 != 0)) &&
       (*(char *)(lVar3 + 0x10) == '\x01')) {
      lVar6 = 0;
      lVar3 = *(longlong *)(lVar2 + 0x468);
      lVar7 = lVar6;
      if (lVar3 != 0) {
        lVar4 = FUN_142f71d80();
        lVar5 = lVar3;
        do {
          lVar7 = lVar3;
          if (lVar5 == lVar4) break;
          lVar5 = *(longlong *)(lVar5 + 0x30);
          lVar7 = lVar6;
        } while (lVar5 != 0);
      }
      lVar3 = lVar6;
      if (param_2 != 0) {
        lVar4 = FUN_142f71d80();
        lVar5 = param_2;
        do {
          lVar3 = param_2;
          if (lVar5 == lVar4) break;
          lVar5 = *(longlong *)(lVar5 + 0x30);
          lVar3 = lVar6;
        } while (lVar5 != 0);
      }
      if (lVar7 != lVar3) {
        FUN_142f6c3d0(lVar2,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142f6da70 FUN_142f6da70 body=124 status=ok
// SIG undefined FUN_142f6da70(void)

void FUN_142f6da70(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_142f5c750(param_1,*(undefined8 *)(param_1 + 0x468));
  iVar2 = FUN_142f58e80(param_1,1,iVar1 + 1);
  if ((iVar2 != -1) && (iVar2 != iVar1)) {
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x460))) {
      FUN_142f6c3d0(param_1,*(undefined8 *)
                             ((longlong)iVar2 * 0x80 + 8 + *(longlong *)(param_1 + 0x458)));
      return;
    }
    FUN_142f6c3d0(param_1,0);
  }
  return;
}



// FUNCTION 142f6daf0 FUN_142f6daf0 body=48 status=ok
// SIG undefined FUN_142f6daf0(void)

void FUN_142f6daf0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      FUN_142f6da70(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142f6db20 FUN_142f6db20 body=125 status=ok
// SIG undefined FUN_142f6db20(void)

void FUN_142f6db20(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_142f5c750(param_1,*(undefined8 *)(param_1 + 0x468));
  iVar2 = FUN_142f58e80(param_1,1,iVar1 + -1,1);
  if ((iVar2 != -1) && (iVar2 != iVar1)) {
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x460))) {
      FUN_142f6c3d0(param_1,*(undefined8 *)
                             ((longlong)iVar2 * 0x80 + 8 + *(longlong *)(param_1 + 0x458)));
      return;
    }
    FUN_142f6c3d0(param_1,0);
  }
  return;
}



// FUNCTION 142f6dba0 FUN_142f6dba0 body=48 status=ok
// SIG undefined FUN_142f6dba0(void)

void FUN_142f6dba0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      FUN_142f6db20(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142f6dbd0 FUN_142f6dbd0 body=30 status=ok
// SIG undefined FUN_142f6dbd0(void)

uint FUN_142f6dbd0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xa0) == '\0') {
    uVar1 = param_2 & 0xff;
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      do {
        uVar1 = uVar1 + 1;
        param_2 = param_2 & param_2 - 1;
      } while (param_2 != 0);
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 142f6dbf0 FUN_142f6dbf0 body=605 status=ok
// SIG undefined FUN_142f6dbf0(void)

void FUN_142f6dbf0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong local_res18;
  longlong *local_res20;
  undefined8 *local_48;
  undefined8 local_40;
  
  if (param_3 == 0) {
    return;
  }
  local_res18 = param_3;
  cVar4 = (**(code **)(*param_1 + 0x700))();
  if (cVar4 == '\0') {
    return;
  }
  plVar7 = (longlong *)FUN_142f5c680(param_1,param_2);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  plVar8 = (longlong *)plVar7[8];
  plVar2 = plVar8 + (int)plVar7[9];
  while( true ) {
    if (plVar8 == plVar2) {
      return;
    }
    if (*plVar8 == param_3) break;
    plVar8 = plVar8 + 1;
  }
  lVar1 = *plVar7;
  local_res20 = plVar7;
  iVar5 = FUN_142f5ced0(lVar1,param_3);
  lVar12 = 0;
  if ((-1 < iVar5) && (iVar5 < *(int *)(lVar1 + 0x228))) {
    plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 0x220));
    plVar2 = (longlong *)*plVar8;
    iVar5 = (int)plVar8[1];
    for (plVar8 = plVar2; plVar8 != plVar2 + iVar5; plVar8 = plVar8 + 1) {
      if (*plVar8 == param_3) {
        iVar6 = (int)((longlong)plVar8 - (longlong)plVar2 >> 3);
        goto LAB_142f6dcda;
      }
    }
    iVar6 = -1;
LAB_142f6dcda:
    lVar12 = 0;
    if ((-1 < iVar6 + 1) && (iVar6 + 1 < iVar5)) {
      lVar12 = plVar2[(longlong)iVar6 + 1];
    }
  }
  uVar11 = 0;
  TArray<FName,FDefaultAllocator>::Remove(plVar7 + 8,&local_res18);
  lVar1 = local_res18;
  if ((char)param_1[0x25] == '\x03') {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_142f5e530(param_1,&local_48);
    puVar3 = local_48;
    uVar9 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
    if (local_48 + (int)local_40 < local_48) {
      uVar9 = uVar11;
    }
    puVar10 = local_48;
    if (uVar9 != 0) {
      do {
        FUN_142f7b430(*puVar10,param_2,lVar1);
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar11 != uVar9);
    }
    plVar7 = local_res20;
    if (puVar3 != (undefined8 *)0x0) {
      FMemory::Free(puVar3);
      plVar7 = local_res20;
    }
  }
  if (lVar12 != 0) {
    FUN_142f66120(param_1,param_2,plVar7[5],4);
    FUN_142f65f00(param_1,param_2,lVar1,5);
    FUN_142f65f00(param_1,param_2,lVar12,4);
    FUN_142f6b400(*plVar7,lVar12,4,0);
    FUN_142f668e0(param_1,param_2,plVar7[5],4);
    FUN_142f66680(param_1,param_2,lVar1,5,0);
    FUN_142f66680(param_1,param_2,lVar12,4,0);
  }
  return;
}



// FUNCTION 142f6de50 FUN_142f6de50 body=65 status=ok
// SIG undefined FUN_142f6de50(void)

void FUN_142f6de50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))();
    if (lVar1 != 0) {
      FUN_142f6dbf0(lVar1,*(undefined8 *)(param_1 + 0x10),param_2);
    }
  }
  return;
}



// FUNCTION 142f6dea0 FUN_142f6dea0 body=340 status=ok
// SIG undefined FUN_142f6dea0(void)

void FUN_142f6dea0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  lVar9 = (longlong)*(int *)(param_1 + 0x608);
  if (*(int *)(param_1 + 0x608) != 0) {
    lVar5 = **(longlong **)(param_1 + 0x600);
    iVar10 = 0;
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (*(longlong **)(param_1 + 0x600))[1];
    }
    if (*param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2[1];
    }
    if ((lVar4 == lVar1) && (lVar5 == *param_2)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    lVar5 = 0;
    iVar7 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar8 = iVar7 + 1;
      if (lVar5 < lVar9) {
        plVar2 = (longlong *)(lVar5 * 0x10 + *(longlong *)(param_1 + 0x600));
        do {
          if (*plVar2 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = plVar2[1];
          }
          if (*param_2 == 0) {
            lVar1 = 0;
          }
          else {
            lVar1 = param_2[1];
          }
          if ((lVar4 == lVar1) && (*plVar2 == *param_2)) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar6 != bVar3) break;
          iVar8 = iVar8 + 1;
          lVar5 = lVar5 + 1;
          plVar2 = plVar2 + 2;
        } while (lVar5 < lVar9);
      }
      if (bVar6 != 0) {
        if (iVar10 != iVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x600)),
                     (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x600)),
                     (longlong)(iVar8 - iVar7) << 4);
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar6 = bVar6 ^ 1;
      iVar7 = iVar8;
    } while (lVar5 < lVar9);
    *(int *)(param_1 + 0x608) = iVar10;
  }
  return;
}



// FUNCTION 142f6e000 FUN_142f6e000 body=783 status=ok
// SIG undefined FUN_142f6e000(void)

void FUN_142f6e000(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
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
  
  uStack_94 = 1;
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0x5c0);
  puVar1 = (uint *)(param_1 + 0x5a8);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x5b8);
    if (*(uint **)(param_1 + 0x5b8) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar13 = local_98 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar13;
      if (bVar5) goto LAB_142f6e0de;
      uVar3 = puVar7[lVar10 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar13 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (iStack_80 - iVar13) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142f6e0de:
      uStack_84 = uVar2;
    }
  }
  local_50 = (longlong *)(param_1 + 0x598);
  uVar3 = *(uint *)(param_1 + 0x5c0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  uVar14 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  puStack_90 = puVar1;
  uStack_84 = uVar3;
  local_68 = puVar1;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  local_78 = local_50;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar7 = *(uint **)(param_1 + 0x5b8);
    if (*(uint **)(param_1 + 0x5b8) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = puVar7[(int)uVar3 >> 5] & local_88;
    iVar13 = (int)uVar3 >> 5;
    while (uVar11 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_142f6e1b2;
      uVar11 = puVar7[(longlong)iVar13 + 1];
      local_88 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar13 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (uVar14 - iVar13) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_142f6e1b2:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  do {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       (local_78 == (longlong *)(param_1 + 0x598))) {
      iVar13 = TArray<TScriptInterface<ITTLArsenalHUDMakerInterface>,FDefaultAllocator>::Find
                         (param_1 + 0x5e8,param_2);
      if (iVar13 != -1) {
        *(undefined1 *)(param_1 + 0x5f8) = 1;
        puVar9 = (undefined8 *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x5e8));
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      return;
    }
    lVar10 = (longlong)(int)uStack_5c * 0x20 + *local_78;
    local_98 = -1;
    uStack_94 = 0;
    FWeakObjectPtr::operator=(&local_98,*param_2);
    if (*param_2 == 0) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = (uint *)param_2[1];
    }
    lVar4 = *(longlong *)(lVar10 + 8);
    iVar13 = *(int *)(lVar10 + 0x10);
    puStack_90 = puVar7;
    for (lVar12 = lVar4; lVar12 != (longlong)iVar13 * 0x10 + lVar4; lVar12 = lVar12 + 0x10) {
      if (*(uint **)(lVar12 + 8) == puVar7) {
        cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar12,&local_98);
        puVar7 = puStack_90;
        if (cVar6 != '\0') {
          iVar13 = (int)(lVar12 - lVar4 >> 4);
          if (iVar13 != -1) {
            *(undefined1 *)(param_1 + 0x5f8) = 1;
            puVar8 = (undefined4 *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar10 + 8));
            *puVar8 = 0xffffffff;
            puVar8[1] = 0;
          }
          break;
        }
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 142f6e310 FUN_142f6e310 body=601 status=ok
// SIG undefined FUN_142f6e310(void)

void FUN_142f6e310(longlong param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int *piVar14;
  longlong *local_res8;
  void *local_38;
  ulonglong local_30;
  
  plVar10 = *(longlong **)(param_1 + 0x660);
  plVar12 = plVar10 + (longlong)*(int *)(param_1 + 0x668) * 0xe;
  if (plVar10 != plVar12) {
    plVar13 = (longlong *)0x0;
    piVar14 = (int *)((longlong)plVar10 + 0x54);
    do {
      if ((*plVar10 != 0) && (plVar7 = *(longlong **)(piVar14 + -0x13), plVar7 != (longlong *)0x0))
      {
        (**(code **)(*plVar7 + 0x48))(plVar7,&local_res8);
        plVar7 = plVar13;
        if (*(longlong *)(piVar14 + -5) != 0) {
          plVar3 = (longlong *)FUN_142f71d80();
          for (plVar6 = *(longlong **)(piVar14 + -5);
              (plVar7 = plVar13, plVar6 != (longlong *)0x0 &&
              (plVar7 = *(longlong **)(piVar14 + -5), plVar6 != plVar3));
              plVar6 = (longlong *)plVar6[6]) {
          }
        }
        plVar6 = plVar13;
        if (local_res8 != (longlong *)0x0) {
          plVar4 = (longlong *)FUN_142f71d80();
          for (plVar3 = local_res8;
              (plVar6 = plVar13, plVar3 != (longlong *)0x0 &&
              (plVar6 = local_res8, plVar3 != plVar4)); plVar3 = (longlong *)plVar3[6]) {
          }
        }
        if (plVar7 != plVar6) {
          *(longlong **)(piVar14 + -5) = local_res8;
          *(undefined1 *)(param_1 + 0x670) = 1;
        }
        local_38 = (void *)0x0;
        local_30 = 0;
        plVar7 = plVar13;
        if (*plVar10 != 0) {
          plVar7 = *(longlong **)(piVar14 + -0x13);
        }
        (**(code **)(*plVar7 + 0x50))(plVar7,&local_38);
        plVar7 = plVar13;
        plVar6 = plVar13;
        if (0 < (int)local_30) {
          do {
            plVar3 = local_res8;
            if (((*(longlong *)((longlong)plVar6 + (longlong)local_38) != 0) &&
                (*(char *)(*(longlong *)((longlong)plVar6 + (longlong)local_38) + 0xa5) != '\0')) &&
               (local_res8 != (longlong *)0x0)) {
              plVar5 = (longlong *)FUN_142f71d80();
              plVar4 = plVar3;
              do {
                if (plVar4 == plVar5) {
                  lVar9 = FUN_142f5c680(param_1,plVar3);
                  if (((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x28), lVar9 != 0)) &&
                     ((lVar8 = *(longlong *)(lVar9 + 0x68), lVar8 != 0 ||
                      (lVar8 = *(longlong *)(lVar9 + 0x60), lVar8 != 0)))) {
                    *(longlong *)((longlong)plVar6 + (longlong)local_38) = lVar8;
                  }
                  break;
                }
                plVar4 = (longlong *)plVar4[6];
              } while (plVar4 != (longlong *)0x0);
            }
            uVar11 = (int)plVar7 + 1;
            plVar7 = (longlong *)(ulonglong)uVar11;
            plVar6 = plVar6 + 1;
          } while ((int)uVar11 < (int)local_30);
        }
        if ((piVar14[-1] != (int)local_30) ||
           (iVar2 = _guard_xfg_dispatch_icall_nop
                              (*(void **)(piVar14 + -3),local_38,(longlong)piVar14[-1] << 3),
           iVar2 != 0)) {
          _Src = local_38;
          ppvVar1 = (void **)(piVar14 + -3);
          if (ppvVar1 != &local_38) {
            lVar9 = (longlong)(int)local_30;
            piVar14[-1] = (int)local_30;
            if (((int)local_30 == 0) && (*piVar14 == 0)) {
              *piVar14 = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (ppvVar1,local_30 & 0xffffffff);
              _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,lVar9 << 3);
            }
          }
          *(undefined1 *)(param_1 + 0x670) = 1;
        }
        if (local_38 != (void *)0x0) {
          FMemory::Free();
        }
      }
      plVar10 = plVar10 + 0xe;
      piVar14 = piVar14 + 0x1c;
    } while (plVar10 != plVar12);
  }
  return;
}



// FUNCTION 142f6e570 FUN_142f6e570 body=243 status=ok
// SIG undefined FUN_142f6e570(void)

void FUN_142f6e570(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((*param_2 != 0) && (plVar1 = (longlong *)param_2[1], plVar1 != (longlong *)0x0)) {
    plVar7 = *(longlong **)(param_1 + 0x660);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x668) * 0xe;
    if (plVar7 != plVar8) {
      while( true ) {
        if (*plVar7 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)plVar7[1];
        }
        if ((plVar6 == plVar1) && (*plVar7 == *param_2)) break;
        plVar7 = plVar7 + 0xe;
        if (plVar7 == plVar8) {
          return;
        }
      }
      lVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if ((lVar5 != 0) && (cVar4 = FUN_1405dc8f0(plVar7 + 4,lVar5), cVar4 != '\0')) {
        FWeakObjectPtr::operator=(plVar7 + 4,lVar5);
        uVar2 = *(undefined4 *)(lVar5 + 0x224);
        uVar3 = *(undefined4 *)(lVar5 + 0x228);
        *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(lVar5 + 0x220);
        *(undefined4 *)((longlong)plVar7 + 0x2c) = uVar2;
        *(undefined4 *)(plVar7 + 6) = uVar3;
        *(undefined1 *)(param_1 + 0x670) = 1;
      }
    }
  }
  return;
}



// FUNCTION 142f6e670 FUN_142f6e670 body=107 status=ok
// SIG undefined FUN_142f6e670(void)

void FUN_142f6e670(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      FUN_142f6e6e0(lVar2,param_2,0,1,param_1);
    }
    *param_2 = &PTR_FUN_1441d26b8;
    return;
  }
  *param_2 = &PTR_FUN_1441d26b8;
  return;
}



// FUNCTION 142f6e6e0 FUN_142f6e6e0 body=310 status=ok
// SIG undefined FUN_142f6e6e0(void)

void FUN_142f6e6e0(longlong param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res8;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    (**(code **)(*param_2 + 0x18))(param_2,&local_res8);
    plVar1 = param_2 + 4;
    cVar2 = FWeakObjectPtr::IsValid(plVar1);
    if (cVar2 == '\0') {
      if (local_res8 != 0) {
        lVar3 = FUN_142f71d80();
        for (lVar4 = local_res8; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar3) {
            lVar4 = FUN_142f5c820(param_1);
            if (lVar4 == 0) {
              return;
            }
            lVar4 = FUN_142f5bca0(lVar4,param_2 + 2);
            if (lVar4 == 0) {
              return;
            }
            cVar2 = FWeakObjectPtr::IsValid(plVar1);
            if ((cVar2 == '\0') &&
               (((*(int *)(lVar4 + 0xd4) == *(int *)((longlong)param_2 + 0x1c) &&
                 *(int *)(lVar4 + 0xd0) == (int)param_2[3]) &&
                *(int *)(lVar4 + 0xcc) == *(int *)((longlong)param_2 + 0x14)) &&
                *(int *)(lVar4 + 200) == (int)param_2[2])) {
              FWeakObjectPtr::operator=(plVar1,lVar4);
            }
            goto LAB_142f6e7d3;
          }
        }
      }
    }
    else {
LAB_142f6e7d3:
      uVar5 = FWeakObjectPtr::Get(plVar1);
      FUN_142f6e820(param_1,local_res8,uVar5,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 142f6e820 FUN_142f6e820 body=2375 status=ok
// SIG undefined FUN_142f6e820(void)

void FUN_142f6e820(longlong *param_1,longlong param_2,longlong param_3,uint param_4,char param_5,
                  undefined8 param_6)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  uint local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  cVar5 = (**(code **)(*param_1 + 0x700))();
  if (cVar5 == '\0') {
    return;
  }
  plVar9 = (longlong *)FUN_142f5c680(param_1,param_2);
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  local_68 = plVar9;
  cVar5 = FUN_142f63460(param_3,plVar9);
  if (cVar5 == '\0') {
    if (*(char *)(param_3 + 0xa5) == '\0') {
      return;
    }
    FUN_142f530a0(param_1,param_2,param_3,param_6);
    cVar5 = FUN_142f63460(param_3,plVar9);
    if (cVar5 == '\0') {
      return;
    }
  }
  local_58 = plVar9 + 1;
  local_60 = 0;
  local_70 = 0;
  local_80 = (longlong *)0x0;
  local_78 = 0;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  bVar4 = false;
  local_94 = 0;
  iVar6 = FUN_142f5d020(local_58,param_3);
  lVar22 = (longlong)iVar6;
  if (iVar6 < 0) {
    return;
  }
  if ((int)plVar9[4] <= iVar6) {
    return;
  }
  FUN_142f59550(plVar9,&local_80,1);
  bVar2 = *(byte *)(param_3 + 0x28);
  if (*(char *)(param_3 + 0xa0) == '\0') {
    bVar17 = param_5 + *(char *)(plVar9[3] + lVar22 * 4);
    bVar3 = bVar2;
    if (bVar17 <= bVar2) {
      bVar3 = bVar17;
    }
    local_94 = (uint)bVar3;
    *(uint *)(plVar9[3] + lVar22 * 4) = local_94;
  }
  else if (param_4 != 0) {
    lVar24 = plVar9[3];
    puVar1 = (uint *)(lVar24 + lVar22 * 4);
    *puVar1 = *puVar1 | param_4;
    local_94 = *(uint *)(lVar24 + lVar22 * 4);
    if (*(char *)(param_3 + 0xa0) != '\0') {
      uVar18 = local_94;
      local_94 = 0;
      for (; uVar18 != 0; uVar18 = uVar18 & uVar18 - 1) {
        local_94 = local_94 + 1;
      }
    }
    local_94 = local_94 & 0xff;
  }
  uVar23 = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_142f5e530(param_1,&local_50);
  uVar19 = (ulonglong)((longlong)(local_50 + (int)local_48) + (7 - (longlong)local_50)) >> 3;
  if (local_50 + (int)local_48 < local_50) {
    uVar19 = uVar23;
  }
  puVar20 = local_50;
  if (uVar19 != 0) {
    do {
      FUN_142f7b4d0(*puVar20,param_2,param_3,param_4,param_5);
      uVar23 = uVar23 + 1;
      puVar20 = puVar20 + 1;
    } while (uVar23 != uVar19);
  }
  if (local_50 != (undefined8 *)0x0) {
    FMemory::Free(local_50);
  }
  iVar6 = (int)local_78;
  lVar22 = (longlong)(int)local_78;
  plVar9 = local_68;
  if (local_94 != bVar2) goto LAB_142f6ec40;
  local_60 = param_3;
  FUN_142f513f0(param_1);
  plVar9 = local_68;
  if (*(char *)(param_3 + 0xb8) != '\0') {
    lVar24 = *local_68;
    iVar7 = FUN_142f5ced0(lVar24,param_3);
    if ((-1 < iVar7) && (iVar7 < *(int *)(lVar24 + 0x228))) {
      plVar10 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar24 + 0x220));
      iVar7 = (int)plVar10[1];
      if ((iVar7 < 1) || (*(longlong *)(*plVar10 + -8 + (longlong)iVar7 * 8) != param_3)) {
        iVar7 = (int)plVar9[9];
        *(int *)(plVar9 + 9) = iVar7 + 1;
        if (*(int *)((longlong)plVar9 + 0x4c) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9 + 8,iVar7);
        }
        *(longlong *)(plVar9[8] + (longlong)iVar7 * 8) = param_3;
      }
    }
  }
  FUN_142f59550(plVar9,&local_90,1);
  plVar10 = local_90;
  lVar24 = (longlong)(int)local_88;
  if (iVar6 == (int)local_88) {
    iVar6 = _guard_xfg_dispatch_icall_nop(local_80,local_90,lVar22 << 3);
    bVar4 = false;
    if (iVar6 != 0) goto LAB_142f6eb33;
  }
  else {
LAB_142f6eb33:
    bVar4 = true;
  }
  plVar11 = local_58;
  plVar15 = plVar10 + lVar24;
  for (; plVar10 != plVar15; plVar10 = plVar10 + 1) {
    lVar22 = *plVar10;
    if ((((lVar22 != param_3) && (*(char *)(lVar22 + 0xa5) == '\0')) &&
        (iVar6 = FUN_142f5d020(plVar11,lVar22), -1 < iVar6)) && (iVar6 < (int)plVar9[4])) {
      uVar18 = *(uint *)(plVar9[3] + (longlong)iVar6 * 4);
      if (*(char *)(lVar22 + 0xa0) != '\0') {
        uVar14 = uVar18;
        uVar18 = 0;
        for (; uVar14 != 0; uVar14 = uVar14 & uVar14 - 1) {
          uVar18 = uVar18 + 1;
        }
      }
      if ((char)uVar18 != *(char *)(lVar22 + 0x28)) goto LAB_142f6ec3b;
    }
  }
  plVar15 = (longlong *)plVar9[8];
  plVar10 = plVar15 + (int)plVar9[9];
  if (plVar15 != plVar10) {
    lVar22 = *plVar9;
    do {
      lVar24 = *plVar15;
      iVar6 = FUN_142f5ced0(lVar22,lVar24);
      if ((-1 < iVar6) && (iVar6 < *(int *)(lVar22 + 0x228))) {
        plVar11 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar22 + 0x220));
        iVar6 = (int)plVar11[1];
        if (iVar6 < 1) goto LAB_142f6ec3b;
        if (*(longlong *)(*plVar11 + -8 + (longlong)iVar6 * 8) != lVar24) {
          iVar6 = (int)local_78;
          goto LAB_142f6ec40;
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar10);
  }
  local_70 = plVar9[5];
LAB_142f6ec3b:
  iVar6 = (int)local_78;
LAB_142f6ec40:
  lVar22 = local_70;
  FUN_142f65f00(param_1,param_2,param_3,8);
  lVar24 = local_60;
  if (local_60 != 0) {
    FUN_142f65f00(param_1,param_2,local_60,10);
    if (lVar22 == 0) {
      if (bVar4) {
        FUN_142f66120(param_1,param_2,plVar9[5],4);
        plVar9 = local_68;
        uVar23 = 0;
        local_58 = local_80 + iVar6;
        uVar19 = (ulonglong)((longlong)local_58 + (7 - (longlong)local_80)) >> 3;
        if (local_58 < local_80) {
          uVar19 = uVar23;
        }
        if (uVar19 != 0) {
          plVar10 = local_90 + (int)local_88;
          plVar15 = local_90;
          plVar11 = local_80;
          do {
            lVar22 = *plVar11;
            for (plVar25 = plVar15; plVar25 != plVar10; plVar25 = plVar25 + 1) {
              if (*plVar25 == lVar22) goto LAB_142f6ed33;
            }
            cVar5 = FUN_142f636b0(lVar22,plVar9);
            plVar15 = local_90;
            if (cVar5 == '\0') {
              FUN_142f65f00(param_1,param_2,lVar22,5);
              plVar15 = local_90;
            }
LAB_142f6ed33:
            plVar11 = plVar11 + 1;
            uVar23 = uVar23 + 1;
          } while (uVar23 != uVar19);
        }
        plVar9 = local_58;
        uVar23 = 0;
        uVar19 = (ulonglong)((longlong)(local_90 + (int)local_88) + (7 - (longlong)local_90)) >> 3;
        if (local_90 + (int)local_88 < local_90) {
          uVar19 = uVar23;
        }
        lVar24 = local_60;
        plVar10 = local_90;
        plVar15 = local_80;
        if (uVar19 != 0) {
          do {
            for (plVar11 = plVar15; plVar11 != plVar9; plVar11 = plVar11 + 1) {
              if (*plVar11 == *plVar10) goto LAB_142f6edb1;
            }
            FUN_142f65f00(param_1,param_2,*plVar10,4);
            plVar15 = local_80;
LAB_142f6edb1:
            uVar23 = uVar23 + 1;
            lVar24 = local_60;
            plVar10 = plVar10 + 1;
          } while (uVar23 != uVar19);
        }
      }
    }
    else {
      FUN_142f66120(param_1,param_2,lVar22,5);
    }
  }
  plVar9 = local_68;
  FUN_142f6b400(*local_68,param_3,8,local_94);
  FUN_142f66680(param_1,param_2,param_3,8,param_4);
  if (lVar24 != 0) {
    iVar6 = (int)param_1[0xac] + -1;
    if (-1 < iVar6) {
      lVar22 = (longlong)iVar6;
      plVar10 = param_1 + 0xab;
      plVar15 = (longlong *)(*plVar10 + (lVar22 * 3 + 1) * 8);
      do {
        if (*plVar15 == lVar24) {
          if (param_1[0xad] == lVar24) {
            param_1[0xad] = 0;
            FUN_142f662a0(param_1);
            *(undefined1 *)((longlong)param_1 + 0x671) = 1;
          }
          iVar7 = (int)param_1[0xac];
          iVar8 = (iVar7 - iVar6) + -1;
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar10 + (longlong)iVar6 * 0x18),
                       (void *)(*plVar10 + (longlong)(iVar6 + 1) * 0x18),(longlong)iVar8 * 0x18);
            iVar7 = (int)param_1[0xac];
          }
          *(int *)(param_1 + 0xac) = iVar7 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar10);
          break;
        }
        iVar6 = iVar6 + -1;
        plVar15 = plVar15 + -3;
        lVar22 = lVar22 + -1;
      } while (-1 < lVar22);
    }
    FUN_142f6b400(*plVar9,lVar24,10,local_94);
    uVar18 = 0;
    FUN_142f66680(param_1,param_2,lVar24,10,0);
    lVar22 = local_70;
    if (local_70 == 0) {
      if (bVar4) {
        FUN_142f668e0(param_1,param_2,plVar9[5]);
        uVar23 = 0;
        plVar10 = local_80 + (int)local_78;
        uVar19 = (ulonglong)((longlong)plVar10 + (7 - (longlong)local_80)) >> 3;
        if (plVar10 < local_80) {
          uVar19 = uVar23;
        }
        if (uVar19 != 0) {
          plVar15 = local_90 + (int)local_88;
          plVar11 = local_90;
          plVar25 = local_80;
          do {
            for (plVar9 = plVar11; plVar9 != plVar15; plVar9 = plVar9 + 1) {
              if (*plVar9 == *plVar25) goto LAB_142f6efc6;
            }
            FUN_142f66680(param_1,param_2,*plVar25,5,0);
            plVar11 = local_90;
LAB_142f6efc6:
            plVar25 = plVar25 + 1;
            uVar23 = uVar23 + 1;
            plVar9 = local_68;
          } while (uVar23 != uVar19);
        }
        uVar23 = 0;
        uVar19 = (ulonglong)((longlong)(local_90 + (int)local_88) + (7 - (longlong)local_90)) >> 3;
        if (local_90 + (int)local_88 < local_90) {
          uVar19 = uVar23;
        }
        lVar24 = local_60;
        plVar15 = local_80;
        plVar11 = local_90;
        if (uVar19 != 0) {
          do {
            lVar22 = *plVar11;
            for (plVar25 = plVar15; plVar25 != plVar10; plVar25 = plVar25 + 1) {
              if (*plVar25 == lVar22) goto LAB_142f6f05e;
            }
            FUN_142f66680(param_1,param_2,lVar22,4,0);
            FUN_142f6b400(*plVar9,lVar22,4);
            plVar15 = local_80;
LAB_142f6f05e:
            plVar11 = plVar11 + 1;
            uVar23 = uVar23 + 1;
            lVar24 = local_60;
          } while (uVar23 != uVar19);
        }
      }
    }
    else {
      FUN_142f6b5e0(*plVar9,local_70,5);
      FUN_142f668e0(param_1,param_2,lVar22,5);
      if (*(char *)(lVar22 + 0x79) != '\0') {
        FUN_142f526d0(param_1,param_2,*(undefined8 *)(lVar22 + 0x70),0,uVar18 & 0xffffff00);
      }
    }
    lVar21 = 0;
    lVar22 = lVar21;
    if (param_2 != 0) {
      lVar12 = FUN_142f71d80();
      lVar16 = param_2;
      do {
        lVar22 = param_2;
        if (lVar16 == lVar12) break;
        lVar16 = *(longlong *)(lVar16 + 0x30);
        lVar22 = lVar21;
      } while (lVar16 != 0);
    }
    lVar16 = lVar21;
    if (param_1[0x8d] != 0) {
      lVar13 = FUN_142f71d80();
      for (lVar12 = param_1[0x8d];
          (lVar16 = lVar21, lVar12 != 0 && (lVar16 = param_1[0x8d], lVar12 != lVar13));
          lVar12 = *(longlong *)(lVar12 + 0x30)) {
      }
    }
    if (lVar22 == lVar16) {
      FUN_142f6e310(param_1);
    }
    if ((*(char *)(lVar24 + 0xb8) != '\0') && (*(char *)(lVar24 + 0xa9) == '\0')) {
      plVar10 = (longlong *)plVar9[8];
      plVar9 = plVar10 + (int)plVar9[9];
      for (; plVar10 != plVar9; plVar10 = plVar10 + 1) {
        if (*plVar10 == lVar24) {
          FUN_142f6dbf0(param_1,param_2,lVar24);
          break;
        }
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_80 != (longlong *)0x0) {
    FMemory::Free(local_80);
  }
  return;
}



// FUNCTION 142f6f170 FUN_142f6f170 body=134 status=ok
// SIG undefined FUN_142f6f170(void)

void FUN_142f6f170(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) &&
     (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x6e8))(), lVar3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_142f5cdc0(param_2,param_3);
    FUN_142f6e820(lVar3,uVar1,param_2,uVar2,param_4,param_3);
  }
  return;
}



// FUNCTION 142f6f200 FUN_142f6f200 body=144 status=ok
// SIG undefined FUN_142f6f200(void)

void FUN_142f6f200(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  lVar4 = (longlong)*(int *)(param_1 + 0x1f0) * 0x38 + lVar3;
  do {
    if (lVar3 == lVar4) {
      return;
    }
    if ((*(longlong *)(lVar3 + 0x10) != 0) &&
       (cVar1 = FUN_142c48f90(*(longlong *)(lVar3 + 0x10),param_1,0), cVar1 != *(char *)(lVar3 + 8))
       ) {
      if (cVar1 == '\0') {
        if (0 < *(int *)(lVar3 + 0x30)) {
          lVar2 = lVar3 + 0x28;
          goto LAB_142f6f267;
        }
      }
      else if (0 < *(int *)(lVar3 + 0x20)) {
        lVar2 = lVar3 + 0x18;
LAB_142f6f267:
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2,0);
      }
      *(char *)(lVar3 + 8) = cVar1;
    }
    lVar3 = lVar3 + 0x38;
  } while( true );
}



// FUNCTION 142f6f290 FUN_142f6f290 body=212 status=ok
// SIG undefined FUN_142f6f290(void)

undefined1 FUN_142f6f290(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_res18 [2];
  
  FUN_142f5af50(param_2,local_res18);
  if (local_res18[0] != 0) {
    lVar1 = FUN_142f71d80();
    lVar4 = local_res18[0];
    do {
      if (lVar4 == lVar1) {
        lVar1 = FUN_142f71d80();
        lVar4 = local_res18[0];
        while (lVar4 != lVar1) {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          if (lVar4 == 0) {
            return 0;
          }
        }
        plVar3 = (longlong *)FUN_142f5c680(param_1,local_res18[0]);
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        lVar4 = *plVar3;
        if (lVar4 == 0) {
          return 0;
        }
        cVar2 = FWeakObjectPtr::IsValid(param_2 + 0x40);
        if (cVar2 == '\0') {
          lVar4 = FUN_142f5c080(lVar4,param_2 + 0x30);
          if (lVar4 == 0) {
            return 0;
          }
          FWeakObjectPtr::operator=(param_2 + 0x40,lVar4);
        }
        return 1;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 142f6f370 FUN_142f6f370 body=53 status=ok
// SIG undefined FUN_142f6f370(void)

void FUN_142f6f370(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1459f35b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f6f3d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTarget2D::GetPrivateStaticClass(void)

{
  if (DAT_146b43280 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionEnableConditionBreadcrumbLinkedObjective",
                  &DAT_146b43280,FUN_140447710,0xf0,0x10000000,0,L"Engine",FUN_142f70f70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f70d00,&LAB_140447700,0);
  }
  return DAT_146b43280;
}



// FUNCTION 142f6f490 FUN_142f6f490 body=162 status=ok
// SIG undefined FUN_142f6f490(void)

longlong FUN_142f6f490(void)

{
  if (DAT_146b43290 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionEnableConditionKickoff",&DAT_146b43290,
                  FUN_140447710,200,0x10000000,0,L"Engine",FUN_142f70fe0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f70d00,&LAB_140447700,0);
  }
  return DAT_146b43290;
}



// FUNCTION 142f6f550 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDialogueSoundWaveProxy::GetPrivateStaticClass(void)

{
  if (DAT_146b432a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionEnableConditionMission",&DAT_146b432a0,
                  FUN_140447710,0xd0,0x10000000,0,L"Engine",FUN_142f710b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f70d00,&LAB_140447700,0);
  }
  return DAT_146b432a0;
}



// FUNCTION 142f6f610 FUN_142f6f610 body=162 status=ok
// SIG undefined FUN_142f6f610(void)

longlong FUN_142f6f610(void)

{
  if (DAT_146b432b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionEnableConditionMissionAvailable",&DAT_146b432b0,
                  FUN_140447710,200,0x10000000,0,L"Engine",FUN_142f71180,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f70d00,&LAB_140447700,0);
  }
  return DAT_146b432b0;
}



// FUNCTION 142f6f6d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneLevelVisibilitySection::GetPrivateStaticClass(void)

{
  if (DAT_146b432c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionEnableConditionObjective",&DAT_146b432c0,
                  FUN_140447710,0xf8,0x10000000,0,L"Engine",FUN_142f71250,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f70d00,&LAB_140447700,0);
  }
  return DAT_146b432c0;
}



// FUNCTION 142f6f790 FUN_142f6f790 body=162 status=ok
// SIG undefined FUN_142f6f790(void)

longlong FUN_142f6f790(void)

{
  if (DAT_146b432d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionEnableConditionObjectiveCount",&DAT_146b432d8,
                  FUN_140447710,0x100,0x10000000,0,L"Engine",FUN_142f712c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f70d00,&LAB_140447700,0);
  }
  return DAT_146b432d8;
}



// FUNCTION 142f6f850 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTarget2D::GetPrivateStaticClass(void)

{
  if (DAT_146b432f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionEnableConditionObjectiveSet",&DAT_146b432f0,
                  FUN_140447710,0xf0,0x10000000,0,L"Engine",FUN_142f71330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f70d00,&LAB_140447700,0);
  }
  return DAT_146b432f0;
}



// FUNCTION 142f6f900 FUN_142f6f900 body=162 status=ok
// SIG undefined FUN_142f6f900(void)

longlong FUN_142f6f900(void)

{
  if (DAT_146b43178 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionCondition_List",&DAT_146b43178,FUN_140447710,0xb8,
                  0x10000000,0,L"Engine",FUN_142f70e50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUGJournalKey::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b43178;
}



// FUNCTION 142f6f9b0 Z_Construct_UPackage__Script_Engine body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_Engine(void)

longlong Z_Construct_UPackage__Script_Engine(void)

{
  if (DAT_146b43058 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
  }
  return DAT_146b43058;
}



// FUNCTION 142f6fa00 FUN_142f6fa00 body=53 status=ok
// SIG undefined FUN_142f6fa00(void)

void FUN_142f6fa00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1459f4b30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f6fa40 FUN_142f6fa40 body=162 status=ok
// SIG undefined FUN_142f6fa40(void)

longlong FUN_142f6fa40(void)

{
  if (DAT_146b43450 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionFunctionLibrary",&DAT_146b43450,
                  UWidget::StaticRegisterNativesUWidget,0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b43450;
}



// FUNCTION 142f6fb00 FUN_142f6fb00 body=162 status=ok
// SIG undefined FUN_142f6fb00(void)

longlong FUN_142f6fb00(void)

{
  if (DAT_146b431e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionDebugMenu",&DAT_146b431e0,FUN_142f72190,0x318,
                  0x10000000,0,L"Engine",FUN_142f70eb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c60,&LAB_140447700,0);
  }
  return DAT_146b431e0;
}



// FUNCTION 142f6fbb0 FUN_142f6fbb0 body=47 status=ok
// SIG undefined FUN_142f6fbb0(void)

longlong FUN_142f6fbb0(void)

{
  if (DAT_146b43148 == 0) {
    FUN_141786440(&DAT_146b43148,&PTR_thunk_FUN_142f71d80_1459efe50);
  }
  return DAT_146b43148;
}



// FUNCTION 142f6fbe0 FUN_142f6fbe0 body=47 status=ok
// SIG undefined FUN_142f6fbe0(void)

longlong FUN_142f6fbe0(void)

{
  if (DAT_146b43070 == 0) {
    FUN_141786a30(&DAT_146b43070,&PTR_FUN_146761d80);
  }
  return DAT_146b43070;
}



// FUNCTION 142f6fc10 FUN_142f6fc10 body=47 status=ok
// SIG undefined FUN_142f6fc10(void)

longlong FUN_142f6fc10(void)

{
  if (DAT_146b43078 == 0) {
    FUN_141786a30(&DAT_146b43078,&PTR_FUN_146761dc0);
  }
  return DAT_146b43078;
}



// FUNCTION 142f6fc40 FUN_142f6fc40 body=47 status=ok
// SIG undefined FUN_142f6fc40(void)

longlong FUN_142f6fc40(void)

{
  if (DAT_146b43080 == 0) {
    FUN_141786a30(&DAT_146b43080,&PTR_FUN_146761e40);
  }
  return DAT_146b43080;
}



// FUNCTION 142f6fc70 FUN_142f6fc70 body=47 status=ok
// SIG undefined FUN_142f6fc70(void)

longlong FUN_142f6fc70(void)

{
  if (DAT_146b43088 == 0) {
    FUN_141786a30(&DAT_146b43088,&PTR_FUN_146761ec0);
  }
  return DAT_146b43088;
}



// FUNCTION 142f6fca0 FUN_142f6fca0 body=47 status=ok
// SIG undefined FUN_142f6fca0(void)

longlong FUN_142f6fca0(void)

{
  if (DAT_146b43090 == 0) {
    FUN_141786a30(&DAT_146b43090,&PTR_FUN_146761f00);
  }
  return DAT_146b43090;
}



// FUNCTION 142f6fcd0 FUN_142f6fcd0 body=47 status=ok
// SIG undefined FUN_142f6fcd0(void)

longlong FUN_142f6fcd0(void)

{
  if (DAT_146b43098 == 0) {
    FUN_141786a30(&DAT_146b43098,&PTR_FUN_146761f40);
  }
  return DAT_146b43098;
}



// FUNCTION 142f6fd00 FUN_142f6fd00 body=47 status=ok
// SIG undefined FUN_142f6fd00(void)

longlong FUN_142f6fd00(void)

{
  if (DAT_146b430a0 == 0) {
    FUN_141786a30(&DAT_146b430a0,&PTR_FUN_146761f80);
  }
  return DAT_146b430a0;
}



// FUNCTION 142f6fd30 FUN_142f6fd30 body=47 status=ok
// SIG undefined FUN_142f6fd30(void)

longlong FUN_142f6fd30(void)

{
  if (DAT_146b430a8 == 0) {
    FUN_141786a30(&DAT_146b430a8,&PTR_FUN_146761fc0);
  }
  return DAT_146b430a8;
}



// FUNCTION 142f6fd60 FUN_142f6fd60 body=47 status=ok
// SIG undefined FUN_142f6fd60(void)

longlong FUN_142f6fd60(void)

{
  if (DAT_146b430b0 == 0) {
    FUN_141786a30(&DAT_146b430b0,&PTR_FUN_1467620b0);
  }
  return DAT_146b430b0;
}



// FUNCTION 142f6fd90 FUN_142f6fd90 body=47 status=ok
// SIG undefined FUN_142f6fd90(void)

longlong FUN_142f6fd90(void)

{
  if (DAT_146b430b8 == 0) {
    FUN_141786a30(&DAT_146b430b8,&PTR_FUN_146762130);
  }
  return DAT_146b430b8;
}



// FUNCTION 142f6fdc0 FUN_142f6fdc0 body=47 status=ok
// SIG undefined FUN_142f6fdc0(void)

longlong FUN_142f6fdc0(void)

{
  if (DAT_146b430c0 == 0) {
    FUN_141786a30(&DAT_146b430c0,&PTR_FUN_146762220);
  }
  return DAT_146b430c0;
}



// FUNCTION 142f6fdf0 FUN_142f6fdf0 body=47 status=ok
// SIG undefined FUN_142f6fdf0(void)

longlong FUN_142f6fdf0(void)

{
  if (DAT_146b430c8 == 0) {
    FUN_141786a30(&DAT_146b430c8,&PTR_FUN_146762320);
  }
  return DAT_146b430c8;
}



// FUNCTION 142f6fe20 FUN_142f6fe20 body=47 status=ok
// SIG undefined FUN_142f6fe20(void)

longlong FUN_142f6fe20(void)

{
  if (DAT_146b430d0 == 0) {
    FUN_141786a30(&DAT_146b430d0,&PTR_FUN_146762360);
  }
  return DAT_146b430d0;
}



// FUNCTION 142f6fe50 FUN_142f6fe50 body=47 status=ok
// SIG undefined FUN_142f6fe50(void)

longlong FUN_142f6fe50(void)

{
  if (DAT_146b430d8 == 0) {
    FUN_141786a30(&DAT_146b430d8,&PTR_FUN_1467623a0);
  }
  return DAT_146b430d8;
}



// FUNCTION 142f6fe80 FUN_142f6fe80 body=47 status=ok
// SIG undefined FUN_142f6fe80(void)

longlong FUN_142f6fe80(void)

{
  if (DAT_146b430e0 == 0) {
    FUN_141786a30(&DAT_146b430e0,&PTR_FUN_1467623e0);
  }
  return DAT_146b430e0;
}



// FUNCTION 142f6feb0 FUN_142f6feb0 body=47 status=ok
// SIG undefined FUN_142f6feb0(void)

longlong FUN_142f6feb0(void)

{
  if (DAT_146b430e8 == 0) {
    FUN_141786a30(&DAT_146b430e8,&PTR_FUN_146762420);
  }
  return DAT_146b430e8;
}



// FUNCTION 142f6fee0 FUN_142f6fee0 body=47 status=ok
// SIG undefined FUN_142f6fee0(void)

longlong FUN_142f6fee0(void)

{
  if (DAT_146b430f0 == 0) {
    FUN_141786a30(&DAT_146b430f0,&PTR_FUN_146762460);
  }
  return DAT_146b430f0;
}



// FUNCTION 142f6ff10 FUN_142f6ff10 body=47 status=ok
// SIG undefined FUN_142f6ff10(void)

longlong FUN_142f6ff10(void)

{
  if (DAT_146b430f8 == 0) {
    FUN_141786a30(&DAT_146b430f8,&PTR_FUN_146762520);
  }
  return DAT_146b430f8;
}



// FUNCTION 142f6ff40 FUN_142f6ff40 body=47 status=ok
// SIG undefined FUN_142f6ff40(void)

longlong FUN_142f6ff40(void)

{
  if (DAT_146b43100 == 0) {
    FUN_141786a30(&DAT_146b43100,&PTR_FUN_146762560);
  }
  return DAT_146b43100;
}



// FUNCTION 142f6ff70 FUN_142f6ff70 body=47 status=ok
// SIG undefined FUN_142f6ff70(void)

longlong FUN_142f6ff70(void)

{
  if (DAT_146b43108 == 0) {
    FUN_141786a30(&DAT_146b43108,&PTR_FUN_1467625a0);
  }
  return DAT_146b43108;
}



// FUNCTION 142f6ffa0 FUN_142f6ffa0 body=47 status=ok
// SIG undefined FUN_142f6ffa0(void)

longlong FUN_142f6ffa0(void)

{
  if (DAT_146b43110 == 0) {
    FUN_141786a30(&DAT_146b43110,&PTR_FUN_146762660);
  }
  return DAT_146b43110;
}



// FUNCTION 142f6ffd0 FUN_142f6ffd0 body=47 status=ok
// SIG undefined FUN_142f6ffd0(void)

longlong FUN_142f6ffd0(void)

{
  if (DAT_146b43118 == 0) {
    FUN_141786a30(&DAT_146b43118,&PTR_FUN_1467626a0);
  }
  return DAT_146b43118;
}



// FUNCTION 142f70000 FUN_142f70000 body=47 status=ok
// SIG undefined FUN_142f70000(void)

longlong FUN_142f70000(void)

{
  if (DAT_146b43120 == 0) {
    FUN_141786a30(&DAT_146b43120,&PTR_FUN_1467626e0);
  }
  return DAT_146b43120;
}



// FUNCTION 142f70030 FUN_142f70030 body=47 status=ok
// SIG undefined FUN_142f70030(void)

longlong FUN_142f70030(void)

{
  if (DAT_146b43128 == 0) {
    FUN_141786a30(&DAT_146b43128,&PTR_FUN_146762720);
  }
  return DAT_146b43128;
}



// FUNCTION 142f70060 FUN_142f70060 body=47 status=ok
// SIG undefined FUN_142f70060(void)

longlong FUN_142f70060(void)

{
  if (DAT_146b43130 == 0) {
    FUN_141786a30(&DAT_146b43130,&PTR_FUN_146762860);
  }
  return DAT_146b43130;
}



// FUNCTION 142f70090 FUN_142f70090 body=47 status=ok
// SIG undefined FUN_142f70090(void)

longlong FUN_142f70090(void)

{
  if (DAT_146b43138 == 0) {
    FUN_141786a30(&DAT_146b43138,&PTR_FUN_1467628e0);
  }
  return DAT_146b43138;
}



// FUNCTION 142f700c0 FUN_142f700c0 body=47 status=ok
// SIG undefined FUN_142f700c0(void)

longlong FUN_142f700c0(void)

{
  if (DAT_146b43140 == 0) {
    FUN_141786a30(&DAT_146b43140,&PTR_FUN_1467629e0);
  }
  return DAT_146b43140;
}



// FUNCTION 142f700f0 FUN_142f700f0 body=47 status=ok
// SIG undefined FUN_142f700f0(void)

longlong FUN_142f700f0(void)

{
  if (DAT_146b43448 == 0) {
    FUN_141786440(&DAT_146b43448,&PTR_FUN_1459f1720);
  }
  return DAT_146b43448;
}



// FUNCTION 142f70120 FUN_142f70120 body=47 status=ok
// SIG undefined FUN_142f70120(void)

longlong FUN_142f70120(void)

{
  if (DAT_146b43308 == 0) {
    FUN_141786a30(&DAT_146b43308,&PTR_FUN_146764cf0);
  }
  return DAT_146b43308;
}



// FUNCTION 142f70150 FUN_142f70150 body=47 status=ok
// SIG undefined FUN_142f70150(void)

longlong FUN_142f70150(void)

{
  if (DAT_146b43310 == 0) {
    FUN_141786a30(&DAT_146b43310,&PTR_FUN_146764db0);
  }
  return DAT_146b43310;
}



// FUNCTION 142f70180 FUN_142f70180 body=47 status=ok
// SIG undefined FUN_142f70180(void)

longlong FUN_142f70180(void)

{
  if (DAT_146b43318 == 0) {
    FUN_141786a30(&DAT_146b43318,&PTR_FUN_146764e70);
  }
  return DAT_146b43318;
}



// FUNCTION 142f701b0 FUN_142f701b0 body=47 status=ok
// SIG undefined FUN_142f701b0(void)

longlong FUN_142f701b0(void)

{
  if (DAT_146b43320 == 0) {
    FUN_141786a30(&DAT_146b43320,&PTR_FUN_146764f30);
  }
  return DAT_146b43320;
}



// FUNCTION 142f701e0 FUN_142f701e0 body=47 status=ok
// SIG undefined FUN_142f701e0(void)

longlong FUN_142f701e0(void)

{
  if (DAT_146b43328 == 0) {
    FUN_141786a30(&DAT_146b43328,&PTR_FUN_146765030);
  }
  return DAT_146b43328;
}



// FUNCTION 142f70210 FUN_142f70210 body=47 status=ok
// SIG undefined FUN_142f70210(void)

longlong FUN_142f70210(void)

{
  if (DAT_146b43330 == 0) {
    FUN_141786a30(&DAT_146b43330,&PTR_FUN_146765170);
  }
  return DAT_146b43330;
}



// FUNCTION 142f70240 FUN_142f70240 body=47 status=ok
// SIG undefined FUN_142f70240(void)

longlong FUN_142f70240(void)

{
  if (DAT_146b43338 == 0) {
    FUN_141786a30(&DAT_146b43338,&PTR_FUN_1467652b0);
  }
  return DAT_146b43338;
}



// FUNCTION 142f70270 FUN_142f70270 body=47 status=ok
// SIG undefined FUN_142f70270(void)

longlong FUN_142f70270(void)

{
  if (DAT_146b43340 == 0) {
    FUN_141786a30(&DAT_146b43340,&PTR_FUN_1467653f0);
  }
  return DAT_146b43340;
}



// FUNCTION 142f702a0 FUN_142f702a0 body=47 status=ok
// SIG undefined FUN_142f702a0(void)

longlong FUN_142f702a0(void)

{
  if (DAT_146b43348 == 0) {
    FUN_141786a30(&DAT_146b43348,&PTR_FUN_146765530);
  }
  return DAT_146b43348;
}



// FUNCTION 142f702d0 FUN_142f702d0 body=47 status=ok
// SIG undefined FUN_142f702d0(void)

longlong FUN_142f702d0(void)

{
  if (DAT_146b43350 == 0) {
    FUN_141786a30(&DAT_146b43350,&PTR_FUN_146765630);
  }
  return DAT_146b43350;
}



// FUNCTION 142f70300 FUN_142f70300 body=47 status=ok
// SIG undefined FUN_142f70300(void)

longlong FUN_142f70300(void)

{
  if (DAT_146b43358 == 0) {
    FUN_141786a30(&DAT_146b43358,&PTR_FUN_146765730);
  }
  return DAT_146b43358;
}



// FUNCTION 142f70330 FUN_142f70330 body=47 status=ok
// SIG undefined FUN_142f70330(void)

longlong FUN_142f70330(void)

{
  if (DAT_146b43360 == 0) {
    FUN_141786a30(&DAT_146b43360,&PTR_FUN_146765830);
  }
  return DAT_146b43360;
}



// FUNCTION 142f70360 FUN_142f70360 body=47 status=ok
// SIG undefined FUN_142f70360(void)

longlong FUN_142f70360(void)

{
  if (DAT_146b43368 == 0) {
    FUN_141786a30(&DAT_146b43368,&PTR_FUN_146765930);
  }
  return DAT_146b43368;
}



// FUNCTION 142f70390 FUN_142f70390 body=47 status=ok
// SIG undefined FUN_142f70390(void)

longlong FUN_142f70390(void)

{
  if (DAT_146b43370 == 0) {
    FUN_141786a30(&DAT_146b43370,&PTR_FUN_1467659f0);
  }
  return DAT_146b43370;
}



// FUNCTION 142f703c0 FUN_142f703c0 body=47 status=ok
// SIG undefined FUN_142f703c0(void)

longlong FUN_142f703c0(void)

{
  if (DAT_146b43378 == 0) {
    FUN_141786a30(&DAT_146b43378,&PTR_FUN_146765af0);
  }
  return DAT_146b43378;
}



// FUNCTION 142f703f0 FUN_142f703f0 body=47 status=ok
// SIG undefined FUN_142f703f0(void)

longlong FUN_142f703f0(void)

{
  if (DAT_146b43380 == 0) {
    FUN_141786a30(&DAT_146b43380,&PTR_FUN_146765bf0);
  }
  return DAT_146b43380;
}



// FUNCTION 142f70420 FUN_142f70420 body=47 status=ok
// SIG undefined FUN_142f70420(void)

longlong FUN_142f70420(void)

{
  if (DAT_146b43388 == 0) {
    FUN_141786a30(&DAT_146b43388,&PTR_FUN_146765cb0);
  }
  return DAT_146b43388;
}



// FUNCTION 142f70450 FUN_142f70450 body=47 status=ok
// SIG undefined FUN_142f70450(void)

longlong FUN_142f70450(void)

{
  if (DAT_146b43390 == 0) {
    FUN_141786a30(&DAT_146b43390,&PTR_FUN_146765df0);
  }
  return DAT_146b43390;
}



// FUNCTION 142f70480 FUN_142f70480 body=47 status=ok
// SIG undefined FUN_142f70480(void)

longlong FUN_142f70480(void)

{
  if (DAT_146b43398 == 0) {
    FUN_141786a30(&DAT_146b43398,&PTR_FUN_146765ef0);
  }
  return DAT_146b43398;
}



// FUNCTION 142f704b0 FUN_142f704b0 body=47 status=ok
// SIG undefined FUN_142f704b0(void)

longlong FUN_142f704b0(void)

{
  if (DAT_146b433a0 == 0) {
    FUN_141786a30(&DAT_146b433a0,&PTR_FUN_146765ff0);
  }
  return DAT_146b433a0;
}



// FUNCTION 142f704e0 FUN_142f704e0 body=47 status=ok
// SIG undefined FUN_142f704e0(void)

longlong FUN_142f704e0(void)

{
  if (DAT_146b433a8 == 0) {
    FUN_141786a30(&DAT_146b433a8,&PTR_FUN_146766070);
  }
  return DAT_146b433a8;
}



// FUNCTION 142f70510 FUN_142f70510 body=47 status=ok
// SIG undefined FUN_142f70510(void)

longlong FUN_142f70510(void)

{
  if (DAT_146b433b0 == 0) {
    FUN_141786a30(&DAT_146b433b0,&PTR_FUN_146766130);
  }
  return DAT_146b433b0;
}



// FUNCTION 142f70540 FUN_142f70540 body=47 status=ok
// SIG undefined FUN_142f70540(void)

longlong FUN_142f70540(void)

{
  if (DAT_146b433b8 == 0) {
    FUN_141786a30(&DAT_146b433b8,&PTR_FUN_146766230);
  }
  return DAT_146b433b8;
}



// FUNCTION 142f70570 FUN_142f70570 body=47 status=ok
// SIG undefined FUN_142f70570(void)

longlong FUN_142f70570(void)

{
  if (DAT_146b433c0 == 0) {
    FUN_141786a30(&DAT_146b433c0,&PTR_FUN_146766370);
  }
  return DAT_146b433c0;
}



// FUNCTION 142f705a0 FUN_142f705a0 body=47 status=ok
// SIG undefined FUN_142f705a0(void)

longlong FUN_142f705a0(void)

{
  if (DAT_146b433c8 == 0) {
    FUN_141786a30(&DAT_146b433c8,&PTR_FUN_1467664b0);
  }
  return DAT_146b433c8;
}



// FUNCTION 142f705d0 FUN_142f705d0 body=47 status=ok
// SIG undefined FUN_142f705d0(void)

longlong FUN_142f705d0(void)

{
  if (DAT_146b433d0 == 0) {
    FUN_141786a30(&DAT_146b433d0,&PTR_FUN_146766570);
  }
  return DAT_146b433d0;
}



// FUNCTION 142f70600 FUN_142f70600 body=47 status=ok
// SIG undefined FUN_142f70600(void)

longlong FUN_142f70600(void)

{
  if (DAT_146b433d8 == 0) {
    FUN_141786a30(&DAT_146b433d8,&PTR_FUN_1467665f0);
  }
  return DAT_146b433d8;
}



// FUNCTION 142f70630 FUN_142f70630 body=47 status=ok
// SIG undefined FUN_142f70630(void)

longlong FUN_142f70630(void)

{
  if (DAT_146b433e0 == 0) {
    FUN_141786a30(&DAT_146b433e0,&PTR_FUN_1467666f0);
  }
  return DAT_146b433e0;
}



// FUNCTION 142f70660 FUN_142f70660 body=47 status=ok
// SIG undefined FUN_142f70660(void)

longlong FUN_142f70660(void)

{
  if (DAT_146b433e8 == 0) {
    FUN_141786a30(&DAT_146b433e8,&PTR_FUN_1467667a0);
  }
  return DAT_146b433e8;
}



// FUNCTION 142f70690 FUN_142f70690 body=47 status=ok
// SIG undefined FUN_142f70690(void)

longlong FUN_142f70690(void)

{
  if (DAT_146b433f0 == 0) {
    FUN_141786a30(&DAT_146b433f0,&PTR_FUN_146766820);
  }
  return DAT_146b433f0;
}



// FUNCTION 142f706c0 FUN_142f706c0 body=47 status=ok
// SIG undefined FUN_142f706c0(void)

longlong FUN_142f706c0(void)

{
  if (DAT_146b433f8 == 0) {
    FUN_141786a30(&DAT_146b433f8,&PTR_FUN_1467668a0);
  }
  return DAT_146b433f8;
}



// FUNCTION 142f706f0 FUN_142f706f0 body=47 status=ok
// SIG undefined FUN_142f706f0(void)

longlong FUN_142f706f0(void)

{
  if (DAT_146b43400 == 0) {
    FUN_141786a30(&DAT_146b43400,&PTR_FUN_146766960);
  }
  return DAT_146b43400;
}



// FUNCTION 142f70720 FUN_142f70720 body=47 status=ok
// SIG undefined FUN_142f70720(void)

longlong FUN_142f70720(void)

{
  if (DAT_146b43408 == 0) {
    FUN_141786a30(&DAT_146b43408,&PTR_FUN_146766a70);
  }
  return DAT_146b43408;
}



// FUNCTION 142f70750 FUN_142f70750 body=47 status=ok
// SIG undefined FUN_142f70750(void)

longlong FUN_142f70750(void)

{
  if (DAT_146b43410 == 0) {
    FUN_141786a30(&DAT_146b43410,&PTR_FUN_146766b40);
  }
  return DAT_146b43410;
}



// FUNCTION 142f70780 FUN_142f70780 body=47 status=ok
// SIG undefined FUN_142f70780(void)

longlong FUN_142f70780(void)

{
  if (DAT_146b43418 == 0) {
    FUN_141786a30(&DAT_146b43418,&PTR_FUN_146766c40);
  }
  return DAT_146b43418;
}



// FUNCTION 142f707b0 FUN_142f707b0 body=47 status=ok
// SIG undefined FUN_142f707b0(void)

longlong FUN_142f707b0(void)

{
  if (DAT_146b43420 == 0) {
    FUN_141786a30(&DAT_146b43420,&PTR_FUN_146766d40);
  }
  return DAT_146b43420;
}



// FUNCTION 142f707e0 FUN_142f707e0 body=47 status=ok
// SIG undefined FUN_142f707e0(void)

longlong FUN_142f707e0(void)

{
  if (DAT_146b43428 == 0) {
    FUN_141786a30(&DAT_146b43428,&PTR_FUN_146766e10);
  }
  return DAT_146b43428;
}



// FUNCTION 142f70810 FUN_142f70810 body=47 status=ok
// SIG undefined FUN_142f70810(void)

longlong FUN_142f70810(void)

{
  if (DAT_146b43430 == 0) {
    FUN_141786a30(&DAT_146b43430,&PTR_FUN_146766e90);
  }
  return DAT_146b43430;
}



// FUNCTION 142f70840 FUN_142f70840 body=47 status=ok
// SIG undefined FUN_142f70840(void)

longlong FUN_142f70840(void)

{
  if (DAT_146b43438 == 0) {
    FUN_141786a30(&DAT_146b43438,&PTR_FUN_146766f10);
  }
  return DAT_146b43438;
}



// FUNCTION 142f70870 FUN_142f70870 body=47 status=ok
// SIG undefined FUN_142f70870(void)

longlong FUN_142f70870(void)

{
  if (DAT_146b43440 == 0) {
    FUN_141786a30(&DAT_146b43440,&PTR_FUN_146766fd0);
  }
  return DAT_146b43440;
}



// FUNCTION 142f708a0 FUN_142f708a0 body=47 status=ok
// SIG undefined FUN_142f708a0(void)

longlong FUN_142f708a0(void)

{
  if (DAT_146b431d8 == 0) {
    FUN_141786440(&DAT_146b431d8,&PTR_FUN_1459ef630);
  }
  return DAT_146b431d8;
}



// FUNCTION 142f708d0 FUN_142f708d0 body=47 status=ok
// SIG undefined FUN_142f708d0(void)

longlong FUN_142f708d0(void)

{
  if (DAT_146b43188 == 0) {
    FUN_141786a30(&DAT_146b43188,&PTR_FUN_1467638c0);
  }
  return DAT_146b43188;
}



// FUNCTION 142f70900 FUN_142f70900 body=47 status=ok
// SIG undefined FUN_142f70900(void)

longlong FUN_142f70900(void)

{
  if (DAT_146b43190 == 0) {
    FUN_141786a30(&DAT_146b43190,&PTR_FUN_146763900);
  }
  return DAT_146b43190;
}



// FUNCTION 142f70930 FUN_142f70930 body=47 status=ok
// SIG undefined FUN_142f70930(void)

longlong FUN_142f70930(void)

{
  if (DAT_146b43198 == 0) {
    FUN_141786a30(&DAT_146b43198,&PTR_FUN_146763940);
  }
  return DAT_146b43198;
}



// FUNCTION 142f70960 FUN_142f70960 body=47 status=ok
// SIG undefined FUN_142f70960(void)

longlong FUN_142f70960(void)

{
  if (DAT_146b431a0 == 0) {
    FUN_141786a30(&DAT_146b431a0,&PTR_FUN_1467639c0);
  }
  return DAT_146b431a0;
}



// FUNCTION 142f70990 FUN_142f70990 body=47 status=ok
// SIG undefined FUN_142f70990(void)

longlong FUN_142f70990(void)

{
  if (DAT_146b431a8 == 0) {
    FUN_141786a30(&DAT_146b431a8,&PTR_FUN_146763a80);
  }
  return DAT_146b431a8;
}



// FUNCTION 142f709c0 FUN_142f709c0 body=47 status=ok
// SIG undefined FUN_142f709c0(void)

longlong FUN_142f709c0(void)

{
  if (DAT_146b431b0 == 0) {
    FUN_141786a30(&DAT_146b431b0,&PTR_FUN_146763b00);
  }
  return DAT_146b431b0;
}



// FUNCTION 142f709f0 FUN_142f709f0 body=47 status=ok
// SIG undefined FUN_142f709f0(void)

longlong FUN_142f709f0(void)

{
  if (DAT_146b431b8 == 0) {
    FUN_141786a30(&DAT_146b431b8,&PTR_FUN_146763b80);
  }
  return DAT_146b431b8;
}



// FUNCTION 142f70a20 FUN_142f70a20 body=47 status=ok
// SIG undefined FUN_142f70a20(void)

longlong FUN_142f70a20(void)

{
  if (DAT_146b431c0 == 0) {
    FUN_141786a30(&DAT_146b431c0,&PTR_FUN_146763c70);
  }
  return DAT_146b431c0;
}



// FUNCTION 142f70a50 FUN_142f70a50 body=47 status=ok
// SIG undefined FUN_142f70a50(void)

longlong FUN_142f70a50(void)

{
  if (DAT_146b431c8 == 0) {
    FUN_141786a30(&DAT_146b431c8,&PTR_FUN_146763cb0);
  }
  return DAT_146b431c8;
}



// FUNCTION 142f70a80 FUN_142f70a80 body=47 status=ok
// SIG undefined FUN_142f70a80(void)

longlong FUN_142f70a80(void)

{
  if (DAT_146b431d0 == 0) {
    FUN_141786a30(&DAT_146b431d0,&PTR_FUN_146763d60);
  }
  return DAT_146b431d0;
}



// FUNCTION 142f70ad0 FUN_142f70ad0 body=162 status=ok
// SIG undefined FUN_142f70ad0(void)

longlong FUN_142f70ad0(void)

{
  if (DAT_146b43168 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionAttributeValueResolver",&DAT_146b43168,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",FUN_142f70e20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDungeonEventListener::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b43168;
}



// FUNCTION 142f70b90 FUN_142f70b90 body=47 status=ok
// SIG undefined FUN_142f70b90(void)

longlong FUN_142f70b90(void)

{
  if (DAT_146b43240 == 0) {
    FUN_141786440(&DAT_146b43240,&PTR_thunk_FUN_142f71e20_1459f1e80);
  }
  return DAT_146b43240;
}



// FUNCTION 142f70bc0 FUN_142f70bc0 body=47 status=ok
// SIG undefined FUN_142f70bc0(void)

longlong FUN_142f70bc0(void)

{
  if (DAT_146b43210 == 0) {
    FUN_141786a30(&DAT_146b43210,&PTR_FUN_146763f50);
  }
  return DAT_146b43210;
}



// FUNCTION 142f70bf0 FUN_142f70bf0 body=47 status=ok
// SIG undefined FUN_142f70bf0(void)

longlong FUN_142f70bf0(void)

{
  if (DAT_146b43218 == 0) {
    FUN_141786a30(&DAT_146b43218,&PTR_FUN_146764010);
  }
  return DAT_146b43218;
}



// FUNCTION 142f70c20 FUN_142f70c20 body=47 status=ok
// SIG undefined FUN_142f70c20(void)

longlong FUN_142f70c20(void)

{
  if (DAT_146b43220 == 0) {
    FUN_141786a30(&DAT_146b43220,&PTR_FUN_146764050);
  }
  return DAT_146b43220;
}



// FUNCTION 142f70c50 FUN_142f70c50 body=47 status=ok
// SIG undefined FUN_142f70c50(void)

longlong FUN_142f70c50(void)

{
  if (DAT_146b43228 == 0) {
    FUN_141786a30(&DAT_146b43228,&PTR_FUN_146764110);
  }
  return DAT_146b43228;
}



// FUNCTION 142f70c80 FUN_142f70c80 body=47 status=ok
// SIG undefined FUN_142f70c80(void)

longlong FUN_142f70c80(void)

{
  if (DAT_146b43230 == 0) {
    FUN_141786a30(&DAT_146b43230,&PTR_FUN_146764190);
  }
  return DAT_146b43230;
}



// FUNCTION 142f70cb0 FUN_142f70cb0 body=47 status=ok
// SIG undefined FUN_142f70cb0(void)

longlong FUN_142f70cb0(void)

{
  if (DAT_146b43238 == 0) {
    FUN_141786a30(&DAT_146b43238,&PTR_FUN_146764210);
  }
  return DAT_146b43238;
}



// FUNCTION 142f70d00 FUN_142f70d00 body=162 status=ok
// SIG undefined FUN_142f70d00(void)

longlong FUN_142f70d00(void)

{
  if (DAT_146b43270 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionEnableCondition",&DAT_146b43270,FUN_140447710,0xa0,
                  0x10000001,0,L"Engine",&LAB_142f70f50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_146b43270;
}



// FUNCTION 142f70db0 FUN_142f70db0 body=47 status=ok
// SIG undefined FUN_142f70db0(void)

longlong FUN_142f70db0(void)

{
  if (DAT_146b43268 == 0) {
    FUN_141786440(&DAT_146b43268,&PTR_FUN_1459ec260);
  }
  return DAT_146b43268;
}



// FUNCTION 142f70e20 FUN_142f70e20 body=41 status=ok
// SIG undefined FUN_142f70e20(void)

void FUN_142f70e20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8d050(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459f24c0;
  }
  return;
}



// FUNCTION 142f70e50 FUN_142f70e50 body=83 status=ok
// SIG undefined FUN_142f70e50(void)

void FUN_142f70e50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142cde580(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459f27b0;
    puVar1[0x14] = &PTR_FUN_1459f2a48;
    puVar1[0x15] = &PTR_FUN_1459f2a68;
    puVar1[0x16] = &PTR_FUN_1459f2a80;
  }
  return;
}



// FUNCTION 142f70eb0 FUN_142f70eb0 body=129 status=ok
// SIG undefined FUN_142f70eb0(void)

void FUN_142f70eb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *puVar1 = &PTR_FUN_1459f2a98;
    puVar1[0x20] = &PTR_LAB_1459f2f38;
    puVar1[0x41] = &PTR_LAB_1459f2f60;
    puVar1[0x57] = &PTR_LAB_1459f2fb0;
    puVar1[0x5f] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
  }
  return;
}



// FUNCTION 142f70f70 FUN_142f70f70 body=100 status=ok
// SIG undefined FUN_142f70f70(void)

void FUN_142f70f70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f713a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459f36c8;
    puVar1[0x11] = &PTR_FUN_1459f3958;
    puVar1[0x12] = &PTR_FUN_1459f3978;
    puVar1[0x13] = &PTR_FUN_1459f3990;
    FUN_140aecb80(puVar1 + 0x14);
    return;
  }
  return;
}



// FUNCTION 142f70fe0 FUN_142f70fe0 body=203 status=ok
// SIG undefined FUN_142f70fe0(void)

void FUN_142f70fe0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f713a0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1459f39a8;
    puVar1[0x11] = &PTR_FUN_1459f3c38;
    puVar1[0x12] = &PTR_FUN_1459f3c58;
    puVar1[0x13] = &PTR_FUN_1459f3c70;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0xc4)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x17,0);
    }
    if ((undefined2 *)puVar1[0x17] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x17] = 0;
    }
    *(undefined4 *)(puVar1 + 0x15) = 0;
  }
  return;
}



// FUNCTION 142f710b0 FUN_142f710b0 body=203 status=ok
// SIG undefined FUN_142f710b0(void)

void FUN_142f710b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f713a0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1459f3c88;
    puVar1[0x11] = &PTR_FUN_1459f3f18;
    puVar1[0x12] = &PTR_FUN_1459f3f38;
    puVar1[0x13] = &PTR_FUN_1459f3f50;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0xc4)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x17,0);
    }
    if ((undefined2 *)puVar1[0x17] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x17] = 0;
    }
    *(undefined4 *)(puVar1 + 0x15) = 0;
  }
  return;
}



// FUNCTION 142f71180 FUN_142f71180 body=203 status=ok
// SIG undefined FUN_142f71180(void)

void FUN_142f71180(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f713a0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1459f3f68;
    puVar1[0x11] = &PTR_FUN_1459f3c38;
    puVar1[0x12] = &PTR_FUN_1459f3c58;
    puVar1[0x13] = &PTR_FUN_1459f3c70;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0xc4)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x17,0);
    }
    if ((undefined2 *)puVar1[0x17] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x17] = 0;
    }
    *(undefined4 *)(puVar1 + 0x15) = 0;
  }
  return;
}



// FUNCTION 142f71250 FUN_142f71250 body=102 status=ok
// SIG undefined FUN_142f71250(void)

void FUN_142f71250(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f713a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459f41f8;
    puVar1[0x11] = &PTR_FUN_1459f4488;
    puVar1[0x12] = &PTR_FUN_1459f44a8;
    puVar1[0x13] = &PTR_FUN_1459f44c0;
    FUN_140aecb80(puVar1 + 0x14);
    *(undefined1 *)(puVar1 + 0x1e) = 1;
  }
  return;
}



// FUNCTION 142f712c0 FUN_142f712c0 body=102 status=ok
// SIG undefined FUN_142f712c0(void)

void FUN_142f712c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f713a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459f44d8;
    puVar1[0x11] = &PTR_FUN_1459f4768;
    puVar1[0x12] = &PTR_FUN_1459f4788;
    puVar1[0x13] = &PTR_FUN_1459f47a0;
    FUN_140aecb80(puVar1 + 0x14);
    *(undefined1 *)(puVar1 + 0x1f) = 1;
  }
  return;
}



// FUNCTION 142f71330 FUN_142f71330 body=104 status=ok
// SIG undefined FUN_142f71330(void)

void FUN_142f71330(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f713a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459f4820;
    puVar1[0x11] = &PTR_FUN_1459f4ab0;
    puVar1[0x12] = &PTR_FUN_1459f4ad0;
    puVar1[0x13] = &PTR_LAB_1459f4ae8;
    FUN_140c631a0(puVar1 + 0x14);
    *(undefined2 *)(puVar1 + 0x1d) = 1;
  }
  return;
}



// FUNCTION 142f713a0 FUN_142f713a0 body=124 status=ok
// SIG undefined FUN_142f713a0(void)

undefined8 * FUN_142f713a0(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_1459f32d0;
  param_1[0x11] = &PTR_FUN_1459f3560;
  param_1[0x12] = &PTR_FUN_1459f3580;
  param_1[0x13] = &PTR_FUN_1459f3598;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  return param_1;
}



// FUNCTION 142f71420 FUN_142f71420 body=103 status=ok
// SIG undefined FUN_142f71420(void)

void FUN_142f71420(longlong param_1)

{
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_144a93390;
  *(undefined ***)(param_1 + 0x90) = &PTR_FUN_144a93390;
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_144a92d00;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142f715d0 FUN_142f715d0 body=155 status=ok
// SIG undefined FUN_142f715d0(void)

longlong FUN_142f715d0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xb0) = &PTR_FUN_144a93390;
  *(undefined ***)(param_1 + 0xa8) = &PTR_FUN_144a93390;
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_144a92d00;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142f71670 FUN_142f71670 body=101 status=ok
// SIG undefined FUN_142f71670(void)

longlong FUN_142f71670(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x318);
  }
  return param_1;
}



// FUNCTION 142f716e0 FUN_142f716e0 body=52 status=ok
// SIG undefined FUN_142f716e0(void)

undefined8 FUN_142f716e0(undefined8 param_1,ulonglong param_2)

{
  FUN_142f71420();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142f71720 FUN_142f71720 body=101 status=ok
// SIG undefined FUN_142f71720(void)

longlong FUN_142f71720(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_144278ac0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_1441d26b8;
  FUN_142f71420(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142f71790 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FDuplicateDataWriter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FUN_142f71420(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142f717e0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FCPFUOWriter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FUN_142f71420(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142f71830 FUN_142f71830 body=101 status=ok
// SIG undefined FUN_142f71830(void)

longlong FUN_142f71830(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_144278ac0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_1441d26b8;
  FUN_142f71420(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 142f718a0 FUN_142f718a0 body=101 status=ok
// SIG undefined FUN_142f718a0(void)

longlong FUN_142f718a0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_144278ac0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_1441d26b8;
  FUN_142f71420(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142f71910 FUN_142f71910 body=73 status=ok
// SIG undefined FUN_142f71910(void)

longlong FUN_142f71910(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FUN_142f71420(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142f71980 FUN_142f71980 body=219 status=ok
// SIG undefined FUN_142f71980(void)

undefined8 FUN_142f71980(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_4 != 0) {
    plVar7 = (longlong *)(param_3 + 0x10);
    do {
      *param_2 = plVar7[-2];
      plVar1 = param_2 + 2;
      param_2[1] = plVar7[-1];
      if (plVar1 != plVar7) {
        iVar6 = (int)plVar7[1];
        lVar2 = *plVar7;
        *(int *)(param_2 + 3) = iVar6;
        if ((iVar6 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          if (iVar6 != 0) {
            puVar4 = (undefined8 *)(lVar2 + 8);
            puVar5 = (undefined4 *)*plVar1;
            do {
              *puVar5 = *(undefined4 *)(puVar4 + -1);
              puVar5[1] = *(undefined4 *)((longlong)puVar4 + -4);
              uVar3 = *puVar4;
              puVar4 = puVar4 + 2;
              *(undefined8 *)(puVar5 + 2) = uVar3;
              iVar6 = iVar6 + -1;
              puVar5 = puVar5 + 4;
            } while (iVar6 != 0);
          }
        }
      }
      plVar7 = plVar7 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f71a60 FUN_142f71a60 body=85 status=ok
// SIG undefined FUN_142f71a60(void)

void FUN_142f71a60(void)

{
  if (DAT_146b42c88 == 0) {
    if (DAT_146b43058 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
    }
    DAT_146b42c88 = GetStaticEnum(FUN_142f725c0,DAT_146b43058,L"EMissionActiveResult");
  }
  return;
}



// FUNCTION 142f71ac0 FUN_142f71ac0 body=85 status=ok
// SIG undefined FUN_142f71ac0(void)

void FUN_142f71ac0(void)

{
  if (DAT_146b42c90 == 0) {
    if (DAT_146b43058 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
    }
    DAT_146b42c90 = GetStaticEnum(FUN_142f725f0,DAT_146b43058,L"EMissionAvailableResult");
  }
  return;
}



// FUNCTION 142f71b20 FUN_142f71b20 body=85 status=ok
// SIG undefined FUN_142f71b20(void)

void FUN_142f71b20(void)

{
  if (DAT_146b42c78 == 0) {
    if (DAT_146b43058 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
    }
    DAT_146b42c78 = GetStaticEnum(FUN_142f72620,DAT_146b43058,L"EMissionDebugStatus");
  }
  return;
}



// FUNCTION 142f71b80 FUN_142f71b80 body=85 status=ok
// SIG undefined FUN_142f71b80(void)

void FUN_142f71b80(void)

{
  if (DAT_146b42c70 == 0) {
    if (DAT_146b43058 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
    }
    DAT_146b42c70 =
         GetStaticEnum(FUN_142f72650,DAT_146b43058,
                       L"EMissionEnableConditionObjectiveSetObjectiveStatus");
  }
  return;
}



// FUNCTION 142f71be0 FUN_142f71be0 body=85 status=ok
// SIG undefined FUN_142f71be0(void)

void FUN_142f71be0(void)

{
  if (DAT_146b42c80 == 0) {
    if (DAT_146b43058 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
    }
    DAT_146b42c80 = GetStaticEnum(FUN_142f72680,DAT_146b43058,L"EMissionValueType");
  }
  return;
}



// FUNCTION 142f71c40 FUN_142f71c40 body=85 status=ok
// SIG undefined FUN_142f71c40(void)

void FUN_142f71c40(void)

{
  if (DAT_146b42c68 == 0) {
    if (DAT_146b43058 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b43058,&PTR_s__Script_GbxMission_1459f2338);
    }
    DAT_146b42c68 =
         GetStaticEnum(FUN_142f726b0,DAT_146b43058,L"EObjectiveCountComparisonOperatorType");
  }
  return;
}



// FUNCTION 142f71ca0 FUN_142f71ca0 body=48 status=ok
// SIG undefined FUN_142f71ca0(void)

void FUN_142f71ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_142f57d00(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 142f71cd0 FUN_142f71cd0 body=162 status=ok
// SIG undefined FUN_142f71cd0(void)

longlong FUN_142f71cd0(void)

{
  if (DAT_146b43068 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"GlobalMissionGraph",&DAT_146b43068,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",&LAB_142f70de0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f791f0,&LAB_140447700,0);
  }
  return DAT_146b43068;
}



// FUNCTION 142f71d80 FUN_142f71d80 body=151 status=ok
// SIG undefined FUN_142f71d80(void)

longlong FUN_142f71d80(void)

{
  if (DAT_146b43150 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"Mission",&DAT_146b43150,
                  UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary,0x408,0x10000000,0,
                  L"Engine",&LAB_142f70e00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b43150;
}



// FUNCTION 142f71e20 FUN_142f71e20 body=162 status=ok
// SIG undefined FUN_142f71e20(void)

longlong FUN_142f71e20(void)

{
  if (DAT_146b43248 == 0) {
    FUN_14171ccd0(L"/Script/GbxMission",L"MissionDirectorComponent",&DAT_146b43248,FUN_142f721c0,
                  0x3b0,0x10000000,0,L"Engine",&LAB_142f70f40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b43248;
}



// FUNCTION 142f71ed0 FUN_142f71ed0 body=6 status=ok
// SIG undefined FUN_142f71ed0(void)

undefined8 FUN_142f71ed0(void)

{
  return 0x6b9ab8fd;
}



// FUNCTION 142f71ee0 FUN_142f71ee0 body=6 status=ok
// SIG undefined FUN_142f71ee0(void)

undefined8 FUN_142f71ee0(void)

{
  return 0x91c765f9;
}



// FUNCTION 142f71f10 FUN_142f71f10 body=57 status=ok
// SIG undefined FUN_142f71f10(void)

void FUN_142f71f10(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b42ca8);
                    /* WARNING: Could not recover jumptable at 0x000142f71f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142f71f50 FUN_142f71f50 body=57 status=ok
// SIG undefined FUN_142f71f50(void)

void FUN_142f71f50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b42cb0);
                    /* WARNING: Could not recover jumptable at 0x000142f71f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}


