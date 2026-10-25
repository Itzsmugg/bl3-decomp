// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142aab540 FUN_142aab540 body=65 status=ok
// SIG undefined FUN_142aab540(void)

void FUN_142aab540(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    puVar4 = (undefined4 *)FGuid::NewGuid(local_18);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 *)(param_1 + 0x130) = *puVar4;
    *(undefined4 *)(param_1 + 0x134) = uVar1;
    *(undefined4 *)(param_1 + 0x138) = uVar2;
    *(undefined4 *)(param_1 + 0x13c) = uVar3;
    FMediaPlayerFacade::SetGuid(*(undefined8 *)(param_1 + 0x120));
    return;
  }
  return;
}



// FUNCTION 142aab590 FUN_142aab590 body=653 status=ok
// SIG undefined FUN_142aab590(void)

void FUN_142aab590(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    puVar9 = (undefined8 *)FName::FName(local_res18,"Media",1);
    uVar4 = *puVar9;
    uVar11 = FUN_14168dc80();
    FUN_141690010(uVar11,uVar4);
    return;
  }
  FMediaPlayerFacade::SetGuid(*(undefined8 *)(param_1 + 0x120),param_1 + 0x130);
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar7 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
    puVar9 = (undefined8 *)FName::FName(local_res8,"Media",1);
    plVar10 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar9);
  }
  else {
    puVar9 = (undefined8 *)FName::FName(local_res10,"Media",1);
    uVar4 = *puVar9;
    uVar11 = FUN_14168dc80();
    plVar10 = (longlong *)FUN_141690010(uVar11,uVar4);
  }
  if (plVar10 != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x128);
    local_38 = *(undefined8 *)(param_1 + 0x120);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_30 = plVar5;
    plVar12 = (longlong *)(**(code **)(*plVar10 + 0x78))(plVar10);
    (**(code **)(*plVar12 + 0x10))(plVar12,&local_38);
    plVar12 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar5 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
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
    plVar5 = *(longlong **)(param_1 + 0x128);
    local_48 = *(longlong *)(param_1 + 0x120);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (local_48 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = local_48 + 8;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_40 = plVar5;
    puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x80))(plVar10);
    (**(code **)*puVar9)(puVar9,&local_48);
    plVar10 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_40 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar5 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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



// FUNCTION 142aab820 FUN_142aab820 body=286 status=ok
// SIG undefined FUN_142aab820(void)

void FUN_142aab820(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong local_38 [2];
  longlong local_28;
  longlong local_20 [3];
  
  FUN_142349c40();
  if (DAT_146b2a740 == 0) {
    plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
    local_28 = *(longlong *)(lVar4 + 0x50);
    FString::FString(local_20,lVar4 + 0x58);
    if (local_28 != 0) {
      puVar2 = (undefined8 *)FSoftObjectPath::ToString(&local_28,local_38);
      if (*(int *)(puVar2 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar2;
      }
      uVar3 = USoundClass::GetPrivateStaticClass();
      DAT_146b2a740 = FUN_141799c90(uVar3,0,puVar5,0,0,0,1);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_20[0] != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(param_1 + 0x590) == DAT_146b15e60) || (*(longlong *)(param_1 + 0x590) == 0)) {
    *(longlong *)(param_1 + 0x590) = DAT_146b2a740;
  }
  return;
}



// FUNCTION 142aab940 FUN_142aab940 body=105 status=ok
// SIG undefined FUN_142aab940(void)

void FUN_142aab940(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  UObject::PostLoad();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FMediaPlayerFacade::SetGuid(*(undefined8 *)(param_1 + 0x120),param_1 + 0x130);
    if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x18))();
      FUN_142aa5710(uVar1,local_res8,param_1,&LAB_142aaa3e0);
    }
  }
  return;
}



// FUNCTION 142aab9b0 FUN_142aab9b0 body=38 status=ok
// SIG undefined FUN_142aab9b0(void)

void FUN_142aab9b0(longlong param_1)

{
  FUN_142349c80();
  FWeakObjectPtr::operator=(param_1 + 0x6b0,*(undefined8 *)(param_1 + 0x670));
  return;
}



// FUNCTION 142aab9e0 PostLoad body=38 status=ok
// SIG undefined PostLoad(void)

void UMediaTexture::PostLoad(longlong param_1)

{
  FUN_142858190();
  FWeakObjectPtr::operator=(param_1 + 0xf8,*(undefined8 *)(param_1 + 0xd0));
  return;
}



// FUNCTION 142aaba10 FUN_142aaba10 body=334 status=ok
// SIG undefined FUN_142aaba10(void)

undefined8 FUN_142aaba10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  longlong local_38 [2];
  
  bVar11 = false;
  iVar12 = *(int *)(*(longlong *)(param_1 + 200) + 0x30);
  if (iVar12 != 0) {
    bVar6 = FMediaPlayerFacade::IsPlaying(*(undefined8 *)(param_1 + 0x120));
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | bVar6;
    iVar12 = iVar12 + -1;
    if (-1 < iVar12) {
      piVar1 = (int *)(param_1 + 0xd0);
      do {
        lVar3 = *(longlong *)(param_1 + 200);
        if ((*(byte *)(param_1 + 0xc4) & 1) == 0) {
          iVar8 = *(int *)(lVar3 + 0x30);
          if (iVar8 < 1) {
            *piVar1 = -1;
            plVar9 = (longlong *)0x0;
          }
          else {
            iVar2 = *piVar1;
            if (iVar2 < 0) {
              iVar8 = 0;
            }
            else if (iVar2 < iVar8) {
              iVar8 = iVar2;
            }
            *piVar1 = iVar8 + -1;
            iVar8 = *(int *)(lVar3 + 0x30) + iVar8 + -1;
            *piVar1 = iVar8;
            iVar8 = iVar8 % *(int *)(lVar3 + 0x30);
            *piVar1 = iVar8;
            plVar9 = *(longlong **)(*(longlong *)(lVar3 + 0x28) + (longlong)iVar8 * 8);
          }
        }
        else {
          plVar9 = (longlong *)UMediaPlaylist::GetRandom(lVar3,piVar1);
        }
        if ((plVar9 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar9 + 0x280))(plVar9), cVar7 == '\0')) {
LAB_142aabb19:
          bVar5 = false;
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + 0x120);
          bVar11 = true;
          uVar10 = (**(code **)(*plVar9 + 0x278))(plVar9,local_38);
          cVar7 = FUN_142a5c140(uVar4,uVar10,plVar9 + 5);
          if (cVar7 == '\0') goto LAB_142aabb19;
          bVar5 = true;
        }
        if ((bVar11) && (bVar11 = false, local_38[0] != 0)) {
          FMemory::Free();
        }
        if (bVar5) {
          return 1;
        }
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
  }
  return 0;
}



// FUNCTION 142aabb60 ReleaseDynamicRHI body=79 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void FMediaTextureResource::ReleaseDynamicRHI(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x90,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x98,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + -8,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,0);
  UpdateTextureReference(param_1 + -0x10,0);
  return;
}



// FUNCTION 142aabbb0 Remove body=253 status=ok
// SIG undefined Remove(void)

bool UMediaPlaylist::Remove(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar4 = 0;
  iVar7 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  lVar2 = (longlong)iVar1;
  if (iVar1 != 0) {
    bVar10 = **(longlong **)(param_1 + 0x28) != param_2;
    uVar6 = uVar4;
    uVar9 = uVar4;
    do {
      iVar7 = (int)uVar6;
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)(iVar7 + 1);
      if ((longlong)uVar4 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 8);
        do {
          if (bVar10 != (*plVar3 != param_2)) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar4 = uVar4 + 1;
          plVar3 = plVar3 + 1;
        } while ((longlong)uVar4 < lVar2);
      }
      iVar5 = (int)uVar6 - iVar7;
      if (bVar10 != false) {
        iVar8 = (int)uVar9;
        if (iVar8 != iVar7) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 8),
                     (void *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 8),
                     (longlong)iVar5 << 3);
        }
        uVar9 = (ulonglong)(uint)(iVar8 + iVar5);
      }
      bVar10 = (bool)(bVar10 ^ 1);
    } while ((longlong)uVar4 < lVar2);
    iVar7 = iVar1 - (int)uVar9;
    *(int *)(param_1 + 0x30) = (int)uVar9;
  }
  return 0 < iVar7;
}



// FUNCTION 142aabcb0 RemoveAt body=105 status=ok
// SIG undefined RemoveAt(void)

undefined8 UMediaPlaylist::RemoveAt(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x30))) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar2 = (iVar3 - param_2) + -1;
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + (longlong)param_2 * 8),
                 (void *)(lVar1 + (longlong)(param_2 + 1) * 8),(longlong)iVar2 << 3);
      iVar3 = *(int *)(param_1 + 0x30);
    }
    *(int *)(param_1 + 0x30) = iVar3 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x28));
    return 1;
  }
  return 0;
}



// FUNCTION 142aabd20 FUN_142aabd20 body=959 status=ok
// SIG undefined FUN_142aabd20(void)

void FUN_142aabd20(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  bool bVar13;
  longlong local_res18;
  longlong local_res20;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  plVar12 = *(longlong **)(param_2 + 0x40);
  local_98 = 0x3f800000;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  local_a8 = 0;
  uStack_a0 = 0;
  plVar7 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    LOCK();
    iVar5 = (int)plVar12[1];
    bVar13 = iVar5 == 0;
    if (bVar13) {
      *(int *)(plVar12 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar13) {
      LOCK();
      bVar13 = iVar5 == (int)plVar12[1];
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar7 = plVar12;
        if ((plVar12 != (longlong *)0x0) &&
           (plVar1 = *(longlong **)(param_2 + 0x38), plVar1 != (longlong *)0x0)) {
          local_b8 = (longlong *)0x0;
          plStack_b0 = (longlong *)0x0;
          cVar4 = '\0';
          cVar3 = (**(code **)(*plVar1 + 8))(plVar1,&local_b8);
          if (cVar3 == '\0') goto LAB_142aac095;
          goto LAB_142aabf42;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar12[1];
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(plVar12 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar12 = plVar7;
  if ((*param_2 != '\0') &&
     ((((*(char *)(param_1 + 0x78) == '\0' ||
        (*(float *)(param_1 + 0x7c) != *(float *)(param_2 + 4))) ||
       (*(float *)(param_1 + 0x80) != *(float *)(param_2 + 8))) ||
      ((*(float *)(param_1 + 0x84) != *(float *)(param_2 + 0xc) ||
       (*(float *)(param_1 + 0x88) != *(float *)(param_2 + 0x10))))))) {
    FUN_142aa6e40(param_1,param_2 + 4,param_2[0x48]);
  }
  goto LAB_142aabdef;
LAB_142aabf42:
  do {
    if (local_b8 == (longlong *)0x0) break;
    (**(code **)(*local_b8 + 0x38))(local_b8,&local_res20);
    plVar7 = (longlong *)(**(code **)(*local_b8 + 0x10))(local_b8,local_88);
    if (*(float *)(param_2 + 0x34) < 0.0) {
LAB_142aabf82:
      if (*plVar7 + local_res20 <= *(longlong *)(param_2 + 0x50)) break;
    }
    else {
      if (*(longlong *)(param_2 + 0x50) < local_res20) break;
      if (*(float *)(param_2 + 0x34) <= 0.0) goto LAB_142aabf82;
    }
    cVar4 = (**(code **)*plVar1)(plVar1,&local_b8);
    cVar3 = (**(code **)(*plVar1 + 8))(plVar1,&local_b8);
  } while (cVar3 != '\0');
  if (cVar4 != '\0') {
    piVar8 = (int *)(**(code **)(*local_b8 + 0x20))(local_b8,local_80);
    cVar3 = param_2[0x48];
    iVar5 = piVar8[1];
    if (*piVar8 <= piVar8[1]) {
      iVar5 = *piVar8;
    }
    if (iVar5 < 1) {
      FUN_142aa6e40(param_1,&DAT_1464aa6f0,cVar3);
    }
    else {
      cVar4 = (**(code **)(*local_b8 + 0x48))();
      plVar7 = local_b8;
      if (cVar4 == cVar3) {
        piVar8 = (int *)(**(code **)(*local_b8 + 0x20))(local_b8,local_78);
        piVar9 = (int *)(**(code **)(*plVar7 + 8))(plVar7,local_70);
        if (((*piVar9 != *piVar8) || (piVar9[1] != piVar8[1])) ||
           ((iVar5 = (**(code **)(*local_b8 + 0x18))(), iVar5 != 2 && (1 < iVar5 - 9U))))
        goto LAB_142aac049;
        bVar13 = false;
      }
      else {
LAB_142aac049:
        bVar13 = true;
      }
      if (bVar13) {
        FUN_142aa7340();
      }
      else {
        FUN_142aa8540(param_1,&local_b8,param_2 + 4,param_2[0x48]);
      }
    }
    puVar10 = (undefined4 *)(**(code **)(*local_b8 + 0x50))(local_b8,local_68);
    local_98 = *puVar10;
    uStack_94 = puVar10[1];
    uStack_90 = puVar10[2];
    uStack_8c = puVar10[3];
    puVar11 = (undefined8 *)(**(code **)(*local_b8 + 0x58))(local_b8,local_58);
    local_a8 = *puVar11;
    uStack_a0 = puVar11[1];
  }
LAB_142aac095:
  plVar7 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar8 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
LAB_142aabdef:
  if (DAT_146ab62eb == '\0') {
    if (((*(int *)(param_2 + 0x20) != 0 || *(int *)(param_2 + 0x1c) != 0) ||
        *(int *)(param_2 + 0x18) != 0) || *(int *)(param_2 + 0x14) != 0) {
      local_res18 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x98);
      if (local_res18 != 0) {
        LOCK();
        *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
        UNLOCK();
      }
      uVar6 = FExternalTextureRegistry::Get();
      FExternalTextureRegistry::RegisterExternalTexture
                (uVar6,param_2 + 0x14,&local_res18,param_1 + 0x48,&local_98,&local_a8);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res18);
    }
    if ((((*(int *)(param_2 + 0x24) != 0 || *(int *)(param_2 + 0x28) != 0) ||
         *(int *)(param_2 + 0x2c) != 0) || *(int *)(param_2 + 0x30) != 0) &&
       (((*(int *)(param_2 + 0x18) != *(int *)(param_2 + 0x28) ||
         *(int *)(param_2 + 0x1c) != *(int *)(param_2 + 0x2c)) ||
        *(int *)(param_2 + 0x20) != *(int *)(param_2 + 0x30)) ||
        *(int *)(param_2 + 0x24) != *(int *)(param_2 + 0x14))) {
      uVar6 = FExternalTextureRegistry::Get();
      FExternalTextureRegistry::UnregisterExternalTexture(uVar6,param_2 + 0x24);
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar12 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar8 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return;
}



// FUNCTION 142aac0e0 Reopen body=19 status=ok
// SIG undefined Reopen(void)

void UMediaPlayer::Reopen(longlong param_1)

{
  FUN_142aab300(param_1,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  return;
}



// FUNCTION 142aac100 Replace body=26 status=ok
// SIG undefined Replace(void)

ulonglong UMediaPlaylist::Replace(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x30))) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + (longlong)param_2 * 8) = param_3;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142aac120 FUN_142aac120 body=35 status=ok
// SIG undefined FUN_142aac120(void)

void FUN_142aac120(longlong param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  FMediaPlayerFacade::Seek(*(undefined8 *)(param_1 + 0x120),local_res8);
  return;
}



// FUNCTION 142aac150 FUN_142aac150 body=12 status=ok
// SIG undefined FUN_142aac150(void)

void FUN_142aac150(longlong param_1)

{
  FMediaPlayerFacade::Seek(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac160 FUN_142aac160 body=15 status=ok
// SIG undefined FUN_142aac160(void)

void FUN_142aac160(longlong param_1,undefined1 param_2)

{
  FMediaPlayerFacade::SelectTrack(*(undefined8 *)(param_1 + 0x120),param_2);
  return;
}



// FUNCTION 142aac170 FUN_142aac170 body=137 status=ok
// SIG undefined FUN_142aac170(void)

void FUN_142aac170(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong local_18 [2];
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00f8);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b00f8);
  if (((*(byte *)(param_2 + 5) & 1) == 0) || (0 < iVar1)) {
    (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x30);
  }
  else {
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_14158ce90(param_2,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 142aac200 FUN_142aac200 body=137 status=ok
// SIG undefined FUN_142aac200(void)

void FUN_142aac200(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong local_18 [2];
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00f8);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b00f8);
  if (((*(byte *)(param_2 + 5) & 1) == 0) || (0 < iVar1)) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x30);
  }
  else {
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_14158ce90(param_2,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 142aac290 FUN_142aac290 body=263 status=ok
// SIG undefined FUN_142aac290(void)

void FUN_142aac290(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x18))();
    FUN_140483870(uVar4,param_1);
  }
  if ((*param_2 != 0) && ((longlong *)param_2[1] != (longlong *)0x0)) {
    uVar4 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
    FUN_142aa5710(uVar4,local_res8,param_1,&LAB_142aaa3e0);
    if (*param_2 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)param_2[1];
    }
    uVar4 = *(undefined8 *)(param_1 + 0x120);
    uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,local_18);
    FMediaPlayerFacade::AddAudioSampleSink(uVar4,uVar5);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  *(longlong *)(param_1 + 0xf8) = *param_2;
  *(longlong *)(param_1 + 0x100) = param_2[1];
  return;
}



// FUNCTION 142aac3a0 FUN_142aac3a0 body=12 status=ok
// SIG undefined FUN_142aac3a0(void)

void FUN_142aac3a0(longlong param_1)

{
  FUN_142a5d460(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac3b0 FUN_142aac3b0 body=12 status=ok
// SIG undefined FUN_142aac3b0(void)

void FUN_142aac3b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x18) = param_2;
  return;
}



// FUNCTION 142aac3c0 FUN_142aac3c0 body=700 status=ok
// SIG undefined FUN_142aac3c0(void)

void FUN_142aac3c0(longlong param_1,longlong param_2)

{
  void *_Dst;
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  void **ppvVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  int iVar11;
  void *pvVar12;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  
  if (1 < *(int *)(param_2 + 8)) {
    cVar2 = FString::StartsWith(param_2,&DAT_1454ddc70,1);
    if (cVar2 == '\0') {
      FPaths::ConvertRelativePathToFull(&local_68,param_2);
      uVar3 = FPaths::ProjectContentDir(&local_48);
      FPaths::ConvertRelativePathToFull(&local_38,uVar3);
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      cVar2 = FString::StartsWith(&local_68,&local_38,1);
      pvVar10 = (void *)0x0;
      if (cVar2 != '\0') {
        iVar5 = 0;
        puVar4 = &DAT_143f3eda8;
        if (local_30 != 0) {
          puVar4 = local_38;
        }
        FUN_141677bd0(&local_68,puVar4);
        local_48 = (void *)0x0;
        local_40 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        pvVar12 = local_48;
        FGenericPlatformString::Memcpy(local_48,&DAT_1454ddc78,6);
        pvVar1 = local_68;
        if ((int)local_40 < 2) {
          local_48 = (void *)0x0;
          local_40 = CONCAT44(local_40._4_4_,local_60);
          pvVar10 = pvVar12;
          if (local_60 == 0) {
            pvVar12 = (void *)0x0;
            iVar11 = 0;
            iVar7 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_60,0);
            pvVar12 = local_48;
            _guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)local_60 * 2);
            iVar11 = local_40._4_4_;
            iVar7 = (int)local_40;
          }
        }
        else {
          if (local_60 != 0) {
            iVar5 = local_60 + -1;
          }
          if (((int)local_40 != 0) || (iVar8 = 1, iVar5 == 0)) {
            iVar8 = 0;
          }
          local_58 = pvVar12;
          local_50 = (int)local_40;
          local_4c = local_40._4_4_;
          if (local_40._4_4_ < iVar8 + (int)local_40 + iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
          }
          iVar8 = local_50;
          pvVar1 = local_68;
          pvVar12 = local_58;
          iVar11 = local_4c;
          iVar7 = local_50;
          if (iVar5 != 0) {
            lVar9 = (longlong)local_50;
            local_50 = local_50 + (uint)(local_50 == 0) + iVar5;
            if (local_4c < local_50) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar8);
            }
            iVar11 = local_4c;
            iVar7 = local_50;
            pvVar12 = local_58;
            _Dst = (void *)((longlong)local_58 + (lVar9 - (ulonglong)(iVar8 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar5 * 2);
            *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
          }
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        local_68 = pvVar12;
        local_60 = iVar7;
        local_5c = iVar11;
        if (pvVar10 != (void *)0x0) {
          FMemory::Free(pvVar10);
        }
      }
      iVar5 = local_60;
      pvVar10 = local_68;
      ppvVar6 = (void **)(param_1 + 0x38);
      if (ppvVar6 != &local_68) {
        *(int *)(param_1 + 0x40) = local_60;
        if ((local_60 == 0) && (*(int *)(param_1 + 0x44) == 0)) {
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar6,local_60);
          _guard_xfg_dispatch_icall_nop(*ppvVar6,pvVar10,(longlong)iVar5 * 2);
        }
      }
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_68 == (void *)0x0) {
        return;
      }
      FMemory::Free();
      return;
    }
  }
  FString::operator=(param_1 + 0x38,param_2);
  return;
}



// FUNCTION 142aac680 FUN_142aac680 body=30 status=ok
// SIG undefined FUN_142aac680(void)

void FUN_142aac680(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffd;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | (uint)param_2 * 2;
  FMediaPlayerFacade::SetLooping(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac6a0 CanPlay body=12 status=ok
// SIG undefined CanPlay(void)

void ULevelSequencePlayer::CanPlay(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x6b0);
  return;
}



// FUNCTION 142aac6b0 SetMediaPlayer body=34 status=ok
// SIG undefined SetMediaPlayer(void)

void UMediaTexture::SetMediaPlayer(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0xf8);
  FUN_142aad240(param_1);
  return;
}



// FUNCTION 142aac6e0 FUN_142aac6e0 body=12 status=ok
// SIG undefined FUN_142aac6e0(void)

void FUN_142aac6e0(longlong param_1)

{
  FUN_142a5ddd0(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac6f0 FUN_142aac6f0 body=12 status=ok
// SIG undefined FUN_142aac6f0(void)

void FUN_142aac6f0(longlong param_1)

{
  FMediaPlayerFacade::SetRate(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac700 FUN_142aac700 body=12 status=ok
// SIG undefined FUN_142aac700(void)

void FUN_142aac700(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x20) = param_2;
  return;
}



// FUNCTION 142aac710 FUN_142aac710 body=15 status=ok
// SIG undefined FUN_142aac710(void)

void FUN_142aac710(longlong param_1,undefined1 param_2)

{
  FMediaPlayerFacade::SetTrackFormat(*(undefined8 *)(param_1 + 0x120),param_2);
  return;
}



// FUNCTION 142aac720 FUN_142aac720 body=12 status=ok
// SIG undefined FUN_142aac720(void)

void FUN_142aac720(longlong param_1)

{
  FMediaPlayerFacade::SetVideoTrackFrameRate(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac730 FUN_142aac730 body=12 status=ok
// SIG undefined FUN_142aac730(void)

void FUN_142aac730(longlong param_1)

{
  FMediaPlayerFacade::SetViewField(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac740 FUN_142aac740 body=73 status=ok
// SIG undefined FUN_142aac740(void)

void FUN_142aac740(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  puVar1 = (undefined4 *)FRotator::Quaternion(param_2,local_18);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  FMediaPlayerFacade::SetViewOrientation(*(undefined8 *)(param_1 + 0x120),&local_28,param_3);
  return;
}



// FUNCTION 142aac790 FUN_142aac790 body=12 status=ok
// SIG undefined FUN_142aac790(void)

void FUN_142aac790(longlong param_1)

{
  FMediaPlayerFacade::SupportsRate(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac7a0 FUN_142aac7a0 body=12 status=ok
// SIG undefined FUN_142aac7a0(void)

void FUN_142aac7a0(longlong param_1)

{
  FMediaPlayerFacade::CanScrub(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac7b0 FUN_142aac7b0 body=12 status=ok
// SIG undefined FUN_142aac7b0(void)

void FUN_142aac7b0(longlong param_1)

{
  FMediaPlayerFacade::CanSeek(*(undefined8 *)(param_1 + 0x120));
  return;
}



// FUNCTION 142aac7c0 FUN_142aac7c0 body=27 status=ok
// SIG undefined FUN_142aac7c0(void)

void FUN_142aac7c0(undefined8 param_1)

{
  FUN_142357eb0();
  FUN_142aace80(param_1);
  return;
}



// FUNCTION 142aac7e0 TickRender body=59 status=ok
// SIG undefined TickRender(void)

void FMediaTextureClockSink::TickRender(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_142aac820(uVar1,param_3);
  }
  return;
}



// FUNCTION 142aac820 FUN_142aac820 body=1632 status=ok
// SIG undefined FUN_142aac820(void)

void FUN_142aac820(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  DWORD DVar13;
  longlong lVar14;
  longlong lVar15;
  DWORD *pDVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  byte bVar23;
  undefined4 uVar24;
  longlong local_res20;
  undefined8 local_168;
  longlong *plStack_160;
  undefined1 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  int local_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 local_124;
  longlong *local_120;
  longlong *local_118;
  byte local_110;
  longlong local_108;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  longlong *local_e8;
  undefined1 local_e0 [4];
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  byte local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  lVar15 = param_1 + 0xf8;
  iVar3 = *(int *)(param_1 + 0xe8);
  iVar5 = *(int *)(param_1 + 0xec);
  iVar6 = *(int *)(param_1 + 0xf0);
  iVar7 = *(int *)(param_1 + 0xf4);
  cVar12 = FWeakObjectPtr::IsValid(lVar15);
  plVar17 = (longlong *)0x0;
  if (cVar12 == '\0') {
    if (((*(int *)(param_1 + 0xf4) == *(int *)(param_1 + 0x10c) &&
         *(int *)(param_1 + 0xf0) == *(int *)(param_1 + 0x108)) &&
        *(int *)(param_1 + 0xec) == *(int *)(param_1 + 0x104)) &&
        *(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0x100)) {
      if ((((*(float *)(param_1 + 0xbc) == *(float *)(param_1 + 0x118)) &&
           (*(float *)(param_1 + 0xc0) == *(float *)(param_1 + 0x11c))) &&
          (*(float *)(param_1 + 0xc4) == *(float *)(param_1 + 0x120))) &&
         ((*(float *)(param_1 + 200) == *(float *)(param_1 + 0x124) &&
          (*(byte *)(param_1 + 0x128) == (*(byte *)(param_1 + 0x4b) & 1))))) {
        return;
      }
    }
    else {
      local_168 = 0;
      plStack_160 = (longlong *)0x0;
      if ((undefined8 *)(param_1 + 0x130) != &local_168) {
        *(undefined8 *)(param_1 + 0x130) = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&plStack_160);
        plVar22 = plStack_160;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar21 = plStack_160 + 1;
          lVar14 = *plVar21;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plStack_160 + 8))(plStack_160,1);
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x108);
    }
  }
  else {
    FUN_142aad240(param_1);
  }
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0xbc);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0xc4);
  *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x4b) & 1;
  local_120 = (longlong *)0x0;
  local_118 = (longlong *)0x0;
  cVar12 = FWeakObjectPtr::IsValid(lVar15);
  plVar21 = plVar17;
  plVar22 = plVar17;
  if (cVar12 == '\0') {
    uVar24 = local_124;
    if ((*(char *)(param_1 + 0xba) == '\0') &&
       (((*(int *)(param_1 + 0xec) == iVar5 && *(int *)(param_1 + 0xf0) == iVar6) &&
        *(int *)(param_1 + 0xf4) == iVar7) && *(int *)(param_1 + 0xe8) == iVar3)) {
      return;
    }
    goto LAB_142aacb11;
  }
  lVar14 = FWeakObjectPtr::Get(lVar15);
  cVar12 = FMediaPlayerFacade::IsPaused(*(undefined8 *)(lVar14 + 0x120));
  if (cVar12 == '\0') {
    lVar14 = FWeakObjectPtr::Get(lVar15);
    cVar12 = FMediaPlayerFacade::IsPlaying(*(undefined8 *)(lVar14 + 0x120));
    if (cVar12 != '\0') goto LAB_142aaca34;
    lVar14 = FWeakObjectPtr::Get(lVar15);
    cVar12 = FMediaPlayerFacade::IsPreparing(*(undefined8 *)(lVar14 + 0x120));
    if (cVar12 != '\0') goto LAB_142aaca34;
    if (*(char *)(param_1 + 0xba) == '\0') {
      return;
    }
  }
  else {
LAB_142aaca34:
    if (*(longlong *)(param_1 + 0x130) != 0) {
      plVar22 = (longlong *)(*(longlong *)(param_1 + 0x130) + 8);
      local_120 = plVar22;
    }
    plVar18 = *(longlong **)(param_1 + 0x138);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
      plVar21 = plVar18;
      plVar22 = local_120;
      local_118 = plVar18;
    }
  }
  lVar14 = FWeakObjectPtr::Get(lVar15);
  uVar24 = FMediaPlayerFacade::GetRate(*(undefined8 *)(lVar14 + 0x120));
  local_124 = uVar24;
  lVar15 = FWeakObjectPtr::Get(lVar15);
  FMediaPlayerFacade::GetTime(*(undefined8 *)(lVar15 + 0x120),&local_res20);
  local_108 = local_res20;
LAB_142aacb11:
  uVar4 = *(undefined1 *)(param_1 + 0xba);
  bVar23 = *(byte *)(param_1 + 0x4b) & 1;
  uVar8 = *(undefined8 *)(param_1 + 0xbc);
  uVar9 = *(undefined8 *)(param_1 + 0xc4);
  uVar10 = *(undefined8 *)(param_1 + 0xe8);
  uVar11 = *(undefined8 *)(param_1 + 0xf0);
  local_158 = uVar4;
  local_154 = uVar8;
  uStack_14c = uVar9;
  local_144 = uVar10;
  uStack_13c = uVar11;
  local_134 = iVar3;
  iStack_130 = iVar5;
  iStack_12c = iVar6;
  iStack_128 = iVar7;
  local_110 = bVar23;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar12 = FUN_1415ad720(&DAT_1468e2448), cVar12 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar13 = GetCurrentThreadId(), DVar13 == DAT_1468c21c0)))) {
    local_e8 = (longlong *)(*(longlong *)(param_1 + 0x60) + -0x10);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      local_e8 = plVar17;
    }
    plVar17 = plVar21;
    local_98 = bVar23;
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar21 + 0xc) = *(int *)((longlong)plVar21 + 0xc) + 1;
      UNLOCK();
      plVar17 = local_118;
      local_98 = local_110;
    }
    local_90 = local_108;
    local_e0[0] = uVar4;
    local_dc = uVar8;
    uStack_d4 = uVar9;
    local_cc = uVar10;
    uStack_c4 = uVar11;
    local_bc = iVar3;
    iStack_b8 = iVar5;
    iStack_b4 = iVar6;
    iStack_b0 = iVar7;
    local_ac = uVar24;
    local_a8 = plVar22;
    local_a0 = plVar21;
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_f0);
    FUN_142aabd20(local_e8,local_e0);
    QueryPerformanceCounter(&local_f8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_f8.s.LowPart - local_f0._0_4_);
    plVar21 = plVar17;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar21 = local_118;
      if ((iVar3 == 1) && (local_a0 != (longlong *)0x0)) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
        plVar21 = local_118;
      }
    }
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x60) + -0x10;
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar15 = 0;
    }
    pDVar16 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar17 = TlsGetValue(*pDVar16);
    if (plVar17 == (longlong *)0x0) {
      plVar17 = (longlong *)operator_new(0x18);
      if (plVar17 != (longlong *)0x0) {
        *plVar17 = 0;
        plVar17[1] = 0;
        *(undefined4 *)(plVar17 + 2) = 0;
      }
      TlsSetValue(*pDVar16,plVar17);
    }
    plVar18 = (longlong *)plVar17[1];
    if (plVar18 == (longlong *)0x0) {
      plVar18 = (longlong *)*plVar17;
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar16 + 2);
        plVar17[1] = (longlong)plVar18;
        if (plVar18 == (longlong *)0x0) {
          puVar19 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar17[1] = (longlong)puVar19;
          lVar14 = 0x1f;
          do {
            puVar2 = puVar19 + 0x20;
            *puVar19 = puVar2;
            lVar14 = lVar14 + -1;
            puVar19 = puVar2;
          } while (lVar14 != 0);
          *puVar2 = 0;
          plVar18 = (longlong *)plVar17[1];
        }
        iVar20 = 0x20;
        *(undefined4 *)(plVar17 + 2) = 0x20;
      }
      else {
        plVar17[1] = (longlong)plVar18;
        iVar20 = 0x20;
        *plVar17 = 0;
        *(undefined4 *)(plVar17 + 2) = 0x20;
      }
    }
    else {
      iVar20 = (int)plVar17[2];
    }
    plVar17[1] = *plVar18;
    *(int *)(plVar17 + 2) = iVar20 + -1;
    *(undefined4 *)(plVar18 + 1) = 0xff;
    *plVar18 = (longlong)&PTR_FUN_143f3edd8;
    local_88 = 0;
    local_80 = 0;
    *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
    *plVar18 = (longlong)&PTR_FUN_1454e0868;
    *(undefined1 *)(plVar18 + 0xe) = 0;
    plVar18[0xf] = 0;
    plVar18[2] = lVar15;
    *(undefined4 *)((longlong)plVar18 + 0x4c) = uVar24;
    *(undefined1 *)(plVar18 + 3) = uVar4;
    *(undefined8 *)((longlong)plVar18 + 0x1c) = uVar8;
    *(undefined8 *)((longlong)plVar18 + 0x24) = uVar9;
    *(undefined8 *)((longlong)plVar18 + 0x2c) = uVar10;
    *(undefined8 *)((longlong)plVar18 + 0x34) = uVar11;
    *(int *)((longlong)plVar18 + 0x3c) = iVar3;
    *(int *)(plVar18 + 8) = iVar5;
    *(int *)((longlong)plVar18 + 0x44) = iVar6;
    *(int *)(plVar18 + 9) = iVar7;
    plVar18[10] = (longlong)plVar22;
    plVar18[0xb] = (longlong)plVar21;
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar21 + 0xc) = *(int *)((longlong)plVar21 + 0xc) + 1;
      UNLOCK();
      plVar21 = local_118;
      bVar23 = local_110;
    }
    plVar18[0xd] = local_108;
    *(byte *)(plVar18 + 0xc) = bVar23;
    lVar15 = plVar18[0xf];
    piVar1 = (int *)(lVar15 + 0x48);
    if (lVar15 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      plVar21 = local_118;
    }
    FUN_141c2c3c0(plVar18,0,0xff,1);
    if (lVar15 != 0) {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar21 = local_118;
      if (iVar3 == 1) {
        FGraphEvent::Recycle(lVar15);
        plVar21 = local_118;
      }
    }
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar21 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_118 + 8))(local_118,1);
    }
  }
  return;
}



// FUNCTION 142aace80 FUN_142aace80 body=946 status=ok
// SIG undefined FUN_142aace80(void)

ulonglong FUN_142aace80(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  ulonglong extraout_RAX;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 local_res10 [8];
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x6b0);
  if (cVar6 == '\0') {
    LOCK();
    *(undefined4 *)(param_1 + 0x678) = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(param_1 + 0x680) = 0;
    UNLOCK();
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
    }
    local_60 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x6d8) != &local_68) {
      *(undefined8 *)(param_1 + 0x6d8) = 0;
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6e0,&local_60);
      plVar4 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_60 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000142aacf55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
    return extraout_RAX;
  }
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x6b0);
  plVar4 = *(longlong **)(lVar9 + 0x128);
  plVar5 = *(longlong **)(lVar9 + 0x120);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar12 = *(longlong **)(param_1 + 0x6c0);
  plVar13 = plVar12;
  plVar14 = (longlong *)0x0;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar12[1];
    bVar15 = iVar8 == 0;
    if (bVar15) {
      *(int *)(plVar12 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar13 = (longlong *)0x0, plVar14 = (longlong *)0x0, !bVar15) {
      LOCK();
      bVar15 = iVar8 == (int)plVar12[1];
      if (bVar15) {
        *(int *)(plVar12 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar15) {
        plVar13 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          plVar14 = *(longlong **)(param_1 + 0x6b8);
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar12[1];
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(plVar12 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar5 != plVar14) {
    plStack_50 = (longlong *)FUN_1408f79a0();
    local_58 = plStack_50 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
    local_48 = local_58;
    plStack_40 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    FMediaPlayerFacade::AddAudioSampleSink(plVar5,&local_48);
    plVar12 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_40 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_40)(plStack_40);
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
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
    }
    local_78 = local_58;
    plStack_70 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    if ((longlong **)(param_1 + 0x6d8) != &local_78) {
      *(longlong **)(param_1 + 0x6d8) = local_58;
      local_78 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6e0,&plStack_70);
    }
    plVar12 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_70 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x688));
    *(longlong **)(param_1 + 0x6b8) = plVar5;
    plVar12 = *(longlong **)(param_1 + 0x6c0);
    if (plVar4 != plVar12) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar12 = *(longlong **)(param_1 + 0x6c0);
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
      *(longlong **)(param_1 + 0x6c0) = plVar4;
    }
    plVar12 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_50 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_50)(plStack_50);
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
  uVar16 = FMediaPlayerFacade::GetRate(plVar5);
  LOCK();
  *(undefined4 *)(param_1 + 0x678) = uVar16;
  UNLOCK();
  puVar10 = (ulonglong *)FMediaPlayerFacade::GetTime(plVar5,local_res10);
  LOCK();
  uVar11 = *(ulonglong *)(param_1 + 0x680);
  *(ulonglong *)(param_1 + 0x680) = *puVar10;
  UNLOCK();
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    puVar2 = (uint *)(plVar4 + 1);
    uVar3 = *puVar2;
    uVar11 = (ulonglong)uVar3;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar11 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        uVar11 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return uVar11;
}



// FUNCTION 142aad240 FUN_142aad240 body=774 status=ok
// SIG undefined FUN_142aad240(void)

void FUN_142aad240(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  cVar9 = FWeakObjectPtr::IsValid(param_1 + 0xf8);
  if (cVar9 == '\0') {
    local_40 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x130) != &local_48) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      local_48 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&local_40);
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_40 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  else {
    lVar10 = FWeakObjectPtr::Get(param_1 + 0xf8);
    auVar5 = *(undefined1 (*) [16])(lVar10 + 0x130);
    if (((auVar5._12_4_ != *(int *)(param_1 + 0xf4) || auVar5._4_4_ != *(int *)(param_1 + 0xec)) ||
        *(int *)(param_1 + 0xf0) != auVar5._8_4_) || *(int *)(param_1 + 0xe8) != auVar5._0_4_) {
      plStack_50 = (longlong *)FUN_1408f79a0();
      local_58 = plStack_50 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
      local_68 = local_58;
      plStack_60 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
      }
      pplVar3 = (longlong **)(param_1 + 0x130);
      if (pplVar3 != &local_68) {
        *pplVar3 = local_58;
        local_68 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x138,&plStack_60);
      }
      plVar6 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_60 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      plVar6 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_50 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_50)(plStack_50);
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
      local_38 = *pplVar3;
      plVar6 = *(longlong **)(param_1 + 0x138);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      local_30 = plVar6;
      lVar10 = FWeakObjectPtr::Get(param_1 + 0xf8);
      plVar7 = *(longlong **)(lVar10 + 0x128);
      uVar8 = *(undefined8 *)(lVar10 + 0x120);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      FMediaPlayerFacade::AddVideoSampleSink(uVar8,&local_38);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar7)(plVar7);
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
      plVar7 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_30)(local_30);
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
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      *(undefined1 (*) [16])(param_1 + 0xe8) = auVar5;
    }
  }
  return;
}



// FUNCTION 142aad550 UpdateResourceSize body=106 status=ok
// SIG undefined UpdateResourceSize(void)

void FMediaTextureResource::UpdateResourceSize(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = CalcTextureSize(*(undefined4 *)(lVar2 + 0x60),*(undefined4 *)(lVar2 + 100),
                            *(undefined4 *)(lVar2 + 0x3c),1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    lVar2 = CalcTextureSize(*(undefined4 *)(lVar2 + 0x60),*(undefined4 *)(lVar2 + 100),
                            *(undefined4 *)(lVar2 + 0x3c),1);
    lVar1 = lVar1 + lVar2;
  }
  **(longlong **)(param_1 + 0xc0) = lVar1;
  return;
}



// FUNCTION 142aad5c0 UpdateTextureReference body=154 status=ok
// SIG undefined UpdateTextureReference(void)

void FMediaTextureResource::UpdateTextureReference(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x40);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,param_2);
  FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x98),param_2);
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 100);
    puVar3 = *(undefined4 **)(param_1 + 0xb8);
    *puVar3 = *(undefined4 *)(lVar2 + 0x60);
    puVar3[1] = uVar1;
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0xb8);
  *puVar3 = DAT_1468b5ca0;
  puVar3[1] = DAT_1468b5ca4;
  return;
}



// FUNCTION 142aad660 FUN_142aad660 body=159 status=ok
// SIG undefined FUN_142aad660(void)

undefined1 FUN_142aad660(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong local_28 [4];
  
  FUN_142aa9710(param_1,local_28 + 2);
  cVar1 = FUN_1415c92e0(local_28 + 2,local_28 + 2);
  if (cVar1 != '\0') {
    local_28[1] = 5;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"\\\\?\\",10);
    FString::RemoveFromStart(local_28 + 2,local_28,1);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  uVar2 = FPaths::FileExists(local_28 + 2);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142aad700 FUN_142aad700 body=70 status=ok
// SIG undefined FUN_142aad700(void)

longlong FUN_142aad700(longlong param_1)

{
  undefined8 in_RAX;
  uint7 uVar2;
  longlong lVar1;
  
  uVar2 = (uint7)((ulonglong)in_RAX >> 8);
  if (DAT_146b2a791 != '\0') {
    return (ulonglong)uVar2 << 8;
  }
  DAT_146b2a791 = 1;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x280))();
    DAT_146b2a791 = 0;
    return lVar1;
  }
  DAT_146b2a791 = 0;
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142aad750 Validate body=46 status=ok
// SIG undefined Validate(void)

bool UStreamMediaSource::Validate(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_141592950(param_1 + 0x38,&DAT_1454de7a8,1,0,0xffffffff);
  return iVar1 != -1;
}



// FUNCTION 142aad780 FUN_142aad780 body=47 status=ok
// SIG undefined FUN_142aad780(void)

longlong FUN_142aad780(void)

{
  if (DAT_146b2aac8 == 0) {
    FUN_141786440(&DAT_146b2aac8,&PTR_GetPrivateStaticClass_1454e33b0);
  }
  return DAT_146b2aac8;
}



// FUNCTION 142aad7b0 FUN_142aad7b0 body=47 status=ok
// SIG undefined FUN_142aad7b0(void)

longlong FUN_142aad7b0(void)

{
  if (DAT_146b2a8b0 == 0) {
    FUN_141786a30(&DAT_146b2a8b0,&PTR_FUN_146681640);
  }
  return DAT_146b2a8b0;
}



// FUNCTION 142aad7e0 FUN_142aad7e0 body=47 status=ok
// SIG undefined FUN_142aad7e0(void)

longlong FUN_142aad7e0(void)

{
  if (DAT_146b2a8b8 == 0) {
    FUN_141786a30(&DAT_146b2a8b8,&PTR_FUN_146681740);
  }
  return DAT_146b2a8b8;
}



// FUNCTION 142aad810 FUN_142aad810 body=47 status=ok
// SIG undefined FUN_142aad810(void)

longlong FUN_142aad810(void)

{
  if (DAT_146b2a8c0 == 0) {
    FUN_141786a30(&DAT_146b2a8c0,&PTR_FUN_146681800);
  }
  return DAT_146b2a8c0;
}



// FUNCTION 142aad840 FUN_142aad840 body=47 status=ok
// SIG undefined FUN_142aad840(void)

longlong FUN_142aad840(void)

{
  if (DAT_146b2a8c8 == 0) {
    FUN_141786a30(&DAT_146b2a8c8,&PTR_FUN_146681840);
  }
  return DAT_146b2a8c8;
}



// FUNCTION 142aad870 FUN_142aad870 body=47 status=ok
// SIG undefined FUN_142aad870(void)

longlong FUN_142aad870(void)

{
  if (DAT_146b2a8d0 == 0) {
    FUN_141786a30(&DAT_146b2a8d0,&PTR_FUN_146681880);
  }
  return DAT_146b2a8d0;
}



// FUNCTION 142aad8a0 FUN_142aad8a0 body=47 status=ok
// SIG undefined FUN_142aad8a0(void)

longlong FUN_142aad8a0(void)

{
  if (DAT_146b2a8d8 == 0) {
    FUN_141786a30(&DAT_146b2a8d8,&PTR_FUN_1466819a0);
  }
  return DAT_146b2a8d8;
}



// FUNCTION 142aad8d0 FUN_142aad8d0 body=47 status=ok
// SIG undefined FUN_142aad8d0(void)

longlong FUN_142aad8d0(void)

{
  if (DAT_146b2a8e0 == 0) {
    FUN_141786a30(&DAT_146b2a8e0,&PTR_FUN_146681a50);
  }
  return DAT_146b2a8e0;
}



// FUNCTION 142aad900 FUN_142aad900 body=47 status=ok
// SIG undefined FUN_142aad900(void)

longlong FUN_142aad900(void)

{
  if (DAT_146b2a8e8 == 0) {
    FUN_141786a30(&DAT_146b2a8e8,&PTR_FUN_146681b00);
  }
  return DAT_146b2a8e8;
}



// FUNCTION 142aad930 FUN_142aad930 body=47 status=ok
// SIG undefined FUN_142aad930(void)

longlong FUN_142aad930(void)

{
  if (DAT_146b2a8f0 == 0) {
    FUN_141786a30(&DAT_146b2a8f0,&PTR_FUN_146681b80);
  }
  return DAT_146b2a8f0;
}



// FUNCTION 142aad960 FUN_142aad960 body=47 status=ok
// SIG undefined FUN_142aad960(void)

longlong FUN_142aad960(void)

{
  if (DAT_146b2a8f8 == 0) {
    FUN_141786a30(&DAT_146b2a8f8,&PTR_FUN_146681bc0);
  }
  return DAT_146b2a8f8;
}



// FUNCTION 142aad990 FUN_142aad990 body=47 status=ok
// SIG undefined FUN_142aad990(void)

longlong FUN_142aad990(void)

{
  if (DAT_146b2a900 == 0) {
    FUN_141786a30(&DAT_146b2a900,&PTR_FUN_146681c70);
  }
  return DAT_146b2a900;
}



// FUNCTION 142aad9c0 FUN_142aad9c0 body=47 status=ok
// SIG undefined FUN_142aad9c0(void)

longlong FUN_142aad9c0(void)

{
  if (DAT_146b2a908 == 0) {
    FUN_141786a30(&DAT_146b2a908,&PTR_FUN_146681da0);
  }
  return DAT_146b2a908;
}



// FUNCTION 142aad9f0 FUN_142aad9f0 body=47 status=ok
// SIG undefined FUN_142aad9f0(void)

longlong FUN_142aad9f0(void)

{
  if (DAT_146b2a910 == 0) {
    FUN_141786a30(&DAT_146b2a910,&PTR_FUN_146681e60);
  }
  return DAT_146b2a910;
}



// FUNCTION 142aada20 FUN_142aada20 body=47 status=ok
// SIG undefined FUN_142aada20(void)

longlong FUN_142aada20(void)

{
  if (DAT_146b2a918 == 0) {
    FUN_141786a30(&DAT_146b2a918,&PTR_FUN_146681f10);
  }
  return DAT_146b2a918;
}



// FUNCTION 142aada50 FUN_142aada50 body=47 status=ok
// SIG undefined FUN_142aada50(void)

longlong FUN_142aada50(void)

{
  if (DAT_146b2a920 == 0) {
    FUN_141786a30(&DAT_146b2a920,&PTR_FUN_146681f90);
  }
  return DAT_146b2a920;
}



// FUNCTION 142aada80 FUN_142aada80 body=47 status=ok
// SIG undefined FUN_142aada80(void)

longlong FUN_142aada80(void)

{
  if (DAT_146b2a928 == 0) {
    FUN_141786a30(&DAT_146b2a928,&PTR_FUN_146681fd0);
  }
  return DAT_146b2a928;
}



// FUNCTION 142aadab0 FUN_142aadab0 body=47 status=ok
// SIG undefined FUN_142aadab0(void)

longlong FUN_142aadab0(void)

{
  if (DAT_146b2a930 == 0) {
    FUN_141786a30(&DAT_146b2a930,&PTR_FUN_146682080);
  }
  return DAT_146b2a930;
}



// FUNCTION 142aadae0 FUN_142aadae0 body=47 status=ok
// SIG undefined FUN_142aadae0(void)

longlong FUN_142aadae0(void)

{
  if (DAT_146b2a938 == 0) {
    FUN_141786a30(&DAT_146b2a938,&PTR_FUN_146682140);
  }
  return DAT_146b2a938;
}



// FUNCTION 142aadb10 FUN_142aadb10 body=47 status=ok
// SIG undefined FUN_142aadb10(void)

longlong FUN_142aadb10(void)

{
  if (DAT_146b2a940 == 0) {
    FUN_141786a30(&DAT_146b2a940,&PTR_FUN_146682240);
  }
  return DAT_146b2a940;
}



// FUNCTION 142aadb40 FUN_142aadb40 body=47 status=ok
// SIG undefined FUN_142aadb40(void)

longlong FUN_142aadb40(void)

{
  if (DAT_146b2a948 == 0) {
    FUN_141786a30(&DAT_146b2a948,&PTR_FUN_1466822c0);
  }
  return DAT_146b2a948;
}



// FUNCTION 142aadb70 FUN_142aadb70 body=47 status=ok
// SIG undefined FUN_142aadb70(void)

longlong FUN_142aadb70(void)

{
  if (DAT_146b2a950 == 0) {
    FUN_141786a30(&DAT_146b2a950,&PTR_FUN_146682340);
  }
  return DAT_146b2a950;
}



// FUNCTION 142aadba0 FUN_142aadba0 body=47 status=ok
// SIG undefined FUN_142aadba0(void)

longlong FUN_142aadba0(void)

{
  if (DAT_146b2a958 == 0) {
    FUN_141786a30(&DAT_146b2a958,&PTR_FUN_146682470);
  }
  return DAT_146b2a958;
}



// FUNCTION 142aadbd0 FUN_142aadbd0 body=47 status=ok
// SIG undefined FUN_142aadbd0(void)

longlong FUN_142aadbd0(void)

{
  if (DAT_146b2a960 == 0) {
    FUN_141786a30(&DAT_146b2a960,&PTR_FUN_1466825a0);
  }
  return DAT_146b2a960;
}



// FUNCTION 142aadc00 FUN_142aadc00 body=47 status=ok
// SIG undefined FUN_142aadc00(void)

longlong FUN_142aadc00(void)

{
  if (DAT_146b2a968 == 0) {
    FUN_141786a30(&DAT_146b2a968,&PTR_FUN_1466826d0);
  }
  return DAT_146b2a968;
}



// FUNCTION 142aadc30 FUN_142aadc30 body=47 status=ok
// SIG undefined FUN_142aadc30(void)

longlong FUN_142aadc30(void)

{
  if (DAT_146b2a970 == 0) {
    FUN_141786a30(&DAT_146b2a970,&PTR_FUN_146682780);
  }
  return DAT_146b2a970;
}



// FUNCTION 142aadc60 FUN_142aadc60 body=47 status=ok
// SIG undefined FUN_142aadc60(void)

longlong FUN_142aadc60(void)

{
  if (DAT_146b2a978 == 0) {
    FUN_141786a30(&DAT_146b2a978,&PTR_FUN_1466827c0);
  }
  return DAT_146b2a978;
}



// FUNCTION 142aadc90 FUN_142aadc90 body=47 status=ok
// SIG undefined FUN_142aadc90(void)

longlong FUN_142aadc90(void)

{
  if (DAT_146b2a980 == 0) {
    FUN_141786a30(&DAT_146b2a980,&PTR_FUN_1466828e0);
  }
  return DAT_146b2a980;
}



// FUNCTION 142aadcc0 FUN_142aadcc0 body=47 status=ok
// SIG undefined FUN_142aadcc0(void)

longlong FUN_142aadcc0(void)

{
  if (DAT_146b2a988 == 0) {
    FUN_141786a30(&DAT_146b2a988,&PTR_FUN_1466829d0);
  }
  return DAT_146b2a988;
}



// FUNCTION 142aadcf0 FUN_142aadcf0 body=47 status=ok
// SIG undefined FUN_142aadcf0(void)

longlong FUN_142aadcf0(void)

{
  if (DAT_146b2a990 == 0) {
    FUN_141786a30(&DAT_146b2a990,&PTR_FUN_146682a80);
  }
  return DAT_146b2a990;
}



// FUNCTION 142aadd20 FUN_142aadd20 body=47 status=ok
// SIG undefined FUN_142aadd20(void)

longlong FUN_142aadd20(void)

{
  if (DAT_146b2a998 == 0) {
    FUN_141786a30(&DAT_146b2a998,&PTR_FUN_146682b70);
  }
  return DAT_146b2a998;
}



// FUNCTION 142aadd50 FUN_142aadd50 body=47 status=ok
// SIG undefined FUN_142aadd50(void)

longlong FUN_142aadd50(void)

{
  if (DAT_146b2a9a0 == 0) {
    FUN_141786a30(&DAT_146b2a9a0,&PTR_FUN_146682c90);
  }
  return DAT_146b2a9a0;
}



// FUNCTION 142aadd80 FUN_142aadd80 body=47 status=ok
// SIG undefined FUN_142aadd80(void)

longlong FUN_142aadd80(void)

{
  if (DAT_146b2a9a8 == 0) {
    FUN_141786a30(&DAT_146b2a9a8,&PTR_FUN_146682d10);
  }
  return DAT_146b2a9a8;
}



// FUNCTION 142aaddb0 FUN_142aaddb0 body=47 status=ok
// SIG undefined FUN_142aaddb0(void)

longlong FUN_142aaddb0(void)

{
  if (DAT_146b2a9b0 == 0) {
    FUN_141786a30(&DAT_146b2a9b0,&PTR_FUN_146682dd0);
  }
  return DAT_146b2a9b0;
}



// FUNCTION 142aadde0 FUN_142aadde0 body=47 status=ok
// SIG undefined FUN_142aadde0(void)

longlong FUN_142aadde0(void)

{
  if (DAT_146b2a9b8 == 0) {
    FUN_141786a30(&DAT_146b2a9b8,&PTR_FUN_146682e90);
  }
  return DAT_146b2a9b8;
}



// FUNCTION 142aade10 FUN_142aade10 body=47 status=ok
// SIG undefined FUN_142aade10(void)

longlong FUN_142aade10(void)

{
  if (DAT_146b2a9c0 == 0) {
    FUN_141786a30(&DAT_146b2a9c0,&PTR_FUN_146682f50);
  }
  return DAT_146b2a9c0;
}



// FUNCTION 142aade40 FUN_142aade40 body=47 status=ok
// SIG undefined FUN_142aade40(void)

longlong FUN_142aade40(void)

{
  if (DAT_146b2a9c8 == 0) {
    FUN_141786a30(&DAT_146b2a9c8,&PTR_FUN_146683010);
  }
  return DAT_146b2a9c8;
}



// FUNCTION 142aade70 FUN_142aade70 body=47 status=ok
// SIG undefined FUN_142aade70(void)

longlong FUN_142aade70(void)

{
  if (DAT_146b2a9d0 == 0) {
    FUN_141786a30(&DAT_146b2a9d0,&PTR_FUN_1466830d0);
  }
  return DAT_146b2a9d0;
}



// FUNCTION 142aadea0 FUN_142aadea0 body=47 status=ok
// SIG undefined FUN_142aadea0(void)

longlong FUN_142aadea0(void)

{
  if (DAT_146b2a9d8 == 0) {
    FUN_141786a30(&DAT_146b2a9d8,&PTR_FUN_146683190);
  }
  return DAT_146b2a9d8;
}



// FUNCTION 142aaded0 FUN_142aaded0 body=47 status=ok
// SIG undefined FUN_142aaded0(void)

longlong FUN_142aaded0(void)

{
  if (DAT_146b2a9e0 == 0) {
    FUN_141786a30(&DAT_146b2a9e0,&PTR_FUN_146683250);
  }
  return DAT_146b2a9e0;
}



// FUNCTION 142aadf00 FUN_142aadf00 body=47 status=ok
// SIG undefined FUN_142aadf00(void)

longlong FUN_142aadf00(void)

{
  if (DAT_146b2a9e8 == 0) {
    FUN_141786a30(&DAT_146b2a9e8,&PTR_FUN_146683310);
  }
  return DAT_146b2a9e8;
}



// FUNCTION 142aadf30 FUN_142aadf30 body=47 status=ok
// SIG undefined FUN_142aadf30(void)

longlong FUN_142aadf30(void)

{
  if (DAT_146b2a9f0 == 0) {
    FUN_141786a30(&DAT_146b2a9f0,&PTR_FUN_1466833d0);
  }
  return DAT_146b2a9f0;
}



// FUNCTION 142aadf60 FUN_142aadf60 body=47 status=ok
// SIG undefined FUN_142aadf60(void)

longlong FUN_142aadf60(void)

{
  if (DAT_146b2a9f8 == 0) {
    FUN_141786a30(&DAT_146b2a9f8,&PTR_FUN_146683490);
  }
  return DAT_146b2a9f8;
}



// FUNCTION 142aadf90 FUN_142aadf90 body=47 status=ok
// SIG undefined FUN_142aadf90(void)

longlong FUN_142aadf90(void)

{
  if (DAT_146b2aa00 == 0) {
    FUN_141786a30(&DAT_146b2aa00,&PTR_FUN_146683590);
  }
  return DAT_146b2aa00;
}



// FUNCTION 142aadfc0 FUN_142aadfc0 body=47 status=ok
// SIG undefined FUN_142aadfc0(void)

longlong FUN_142aadfc0(void)

{
  if (DAT_146b2aa08 == 0) {
    FUN_141786a30(&DAT_146b2aa08,&PTR_FUN_146683690);
  }
  return DAT_146b2aa08;
}



// FUNCTION 142aadff0 FUN_142aadff0 body=47 status=ok
// SIG undefined FUN_142aadff0(void)

longlong FUN_142aadff0(void)

{
  if (DAT_146b2aa10 == 0) {
    FUN_141786a30(&DAT_146b2aa10,&PTR_FUN_146683790);
  }
  return DAT_146b2aa10;
}



// FUNCTION 142aae020 FUN_142aae020 body=47 status=ok
// SIG undefined FUN_142aae020(void)

longlong FUN_142aae020(void)

{
  if (DAT_146b2aa18 == 0) {
    FUN_141786a30(&DAT_146b2aa18,&PTR_FUN_146683850);
  }
  return DAT_146b2aa18;
}



// FUNCTION 142aae050 FUN_142aae050 body=47 status=ok
// SIG undefined FUN_142aae050(void)

longlong FUN_142aae050(void)

{
  if (DAT_146b2aa20 == 0) {
    FUN_141786a30(&DAT_146b2aa20,&PTR_FUN_146683910);
  }
  return DAT_146b2aa20;
}



// FUNCTION 142aae080 FUN_142aae080 body=47 status=ok
// SIG undefined FUN_142aae080(void)

longlong FUN_142aae080(void)

{
  if (DAT_146b2aa28 == 0) {
    FUN_141786a30(&DAT_146b2aa28,&PTR_FUN_1466839d0);
  }
  return DAT_146b2aa28;
}



// FUNCTION 142aae0b0 FUN_142aae0b0 body=47 status=ok
// SIG undefined FUN_142aae0b0(void)

longlong FUN_142aae0b0(void)

{
  if (DAT_146b2aa30 == 0) {
    FUN_141786a30(&DAT_146b2aa30,&PTR_FUN_146683a90);
  }
  return DAT_146b2aa30;
}



// FUNCTION 142aae0e0 FUN_142aae0e0 body=47 status=ok
// SIG undefined FUN_142aae0e0(void)

longlong FUN_142aae0e0(void)

{
  if (DAT_146b2aa38 == 0) {
    FUN_141786a30(&DAT_146b2aa38,&PTR_FUN_146683b40);
  }
  return DAT_146b2aa38;
}



// FUNCTION 142aae110 FUN_142aae110 body=47 status=ok
// SIG undefined FUN_142aae110(void)

longlong FUN_142aae110(void)

{
  if (DAT_146b2aa40 == 0) {
    FUN_141786a30(&DAT_146b2aa40,&PTR_FUN_146683c00);
  }
  return DAT_146b2aa40;
}



// FUNCTION 142aae140 FUN_142aae140 body=47 status=ok
// SIG undefined FUN_142aae140(void)

longlong FUN_142aae140(void)

{
  if (DAT_146b2aa48 == 0) {
    FUN_141786a30(&DAT_146b2aa48,&PTR_FUN_146683d00);
  }
  return DAT_146b2aa48;
}



// FUNCTION 142aae170 FUN_142aae170 body=47 status=ok
// SIG undefined FUN_142aae170(void)

longlong FUN_142aae170(void)

{
  if (DAT_146b2aa50 == 0) {
    FUN_141786a30(&DAT_146b2aa50,&PTR_FUN_146683e40);
  }
  return DAT_146b2aa50;
}



// FUNCTION 142aae1a0 FUN_142aae1a0 body=47 status=ok
// SIG undefined FUN_142aae1a0(void)

longlong FUN_142aae1a0(void)

{
  if (DAT_146b2aa58 == 0) {
    FUN_141786a30(&DAT_146b2aa58,&PTR_FUN_146683ec0);
  }
  return DAT_146b2aa58;
}



// FUNCTION 142aae1d0 FUN_142aae1d0 body=47 status=ok
// SIG undefined FUN_142aae1d0(void)

longlong FUN_142aae1d0(void)

{
  if (DAT_146b2aa60 == 0) {
    FUN_141786a30(&DAT_146b2aa60,&PTR_FUN_146683f40);
  }
  return DAT_146b2aa60;
}



// FUNCTION 142aae200 FUN_142aae200 body=47 status=ok
// SIG undefined FUN_142aae200(void)

longlong FUN_142aae200(void)

{
  if (DAT_146b2aa68 == 0) {
    FUN_141786a30(&DAT_146b2aa68,&PTR_FUN_146683f80);
  }
  return DAT_146b2aa68;
}



// FUNCTION 142aae230 FUN_142aae230 body=47 status=ok
// SIG undefined FUN_142aae230(void)

longlong FUN_142aae230(void)

{
  if (DAT_146b2aa70 == 0) {
    FUN_141786a30(&DAT_146b2aa70,&PTR_FUN_1466840c0);
  }
  return DAT_146b2aa70;
}



// FUNCTION 142aae260 FUN_142aae260 body=47 status=ok
// SIG undefined FUN_142aae260(void)

longlong FUN_142aae260(void)

{
  if (DAT_146b2aa78 == 0) {
    FUN_141786a30(&DAT_146b2aa78,&PTR_FUN_146684180);
  }
  return DAT_146b2aa78;
}



// FUNCTION 142aae290 FUN_142aae290 body=47 status=ok
// SIG undefined FUN_142aae290(void)

longlong FUN_142aae290(void)

{
  if (DAT_146b2aa80 == 0) {
    FUN_141786a30(&DAT_146b2aa80,&PTR_FUN_146684240);
  }
  return DAT_146b2aa80;
}



// FUNCTION 142aae2c0 FUN_142aae2c0 body=47 status=ok
// SIG undefined FUN_142aae2c0(void)

longlong FUN_142aae2c0(void)

{
  if (DAT_146b2aa88 == 0) {
    FUN_141786a30(&DAT_146b2aa88,&PTR_FUN_1466842c0);
  }
  return DAT_146b2aa88;
}



// FUNCTION 142aae2f0 FUN_142aae2f0 body=47 status=ok
// SIG undefined FUN_142aae2f0(void)

longlong FUN_142aae2f0(void)

{
  if (DAT_146b2aa90 == 0) {
    FUN_141786a30(&DAT_146b2aa90,&PTR_FUN_146684400);
  }
  return DAT_146b2aa90;
}



// FUNCTION 142aae320 FUN_142aae320 body=47 status=ok
// SIG undefined FUN_142aae320(void)

longlong FUN_142aae320(void)

{
  if (DAT_146b2aa98 == 0) {
    FUN_141786a30(&DAT_146b2aa98,&PTR_FUN_1466844c0);
  }
  return DAT_146b2aa98;
}



// FUNCTION 142aae350 FUN_142aae350 body=47 status=ok
// SIG undefined FUN_142aae350(void)

longlong FUN_142aae350(void)

{
  if (DAT_146b2aaa0 == 0) {
    FUN_141786a30(&DAT_146b2aaa0,&PTR_FUN_146684600);
  }
  return DAT_146b2aaa0;
}



// FUNCTION 142aae380 FUN_142aae380 body=47 status=ok
// SIG undefined FUN_142aae380(void)

longlong FUN_142aae380(void)

{
  if (DAT_146b2aaa8 == 0) {
    FUN_141786a30(&DAT_146b2aaa8,&PTR_FUN_146684770);
  }
  return DAT_146b2aaa8;
}



// FUNCTION 142aae3b0 FUN_142aae3b0 body=47 status=ok
// SIG undefined FUN_142aae3b0(void)

longlong FUN_142aae3b0(void)

{
  if (DAT_146b2aab0 == 0) {
    FUN_141786a30(&DAT_146b2aab0,&PTR_FUN_1466848a0);
  }
  return DAT_146b2aab0;
}



// FUNCTION 142aae3e0 FUN_142aae3e0 body=47 status=ok
// SIG undefined FUN_142aae3e0(void)

longlong FUN_142aae3e0(void)

{
  if (DAT_146b2aab8 == 0) {
    FUN_141786a30(&DAT_146b2aab8,&PTR_FUN_146684960);
  }
  return DAT_146b2aab8;
}



// FUNCTION 142aae410 FUN_142aae410 body=47 status=ok
// SIG undefined FUN_142aae410(void)

longlong FUN_142aae410(void)

{
  if (DAT_146b2aac0 == 0) {
    FUN_141786a30(&DAT_146b2aac0,&PTR_FUN_146684a10);
  }
  return DAT_146b2aac0;
}



// FUNCTION 142aae440 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMediaSource::GetPrivateStaticClass(void)

{
  if (DAT_146b2ab90 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"MediaSource",&DAT_146b2ab90,
                  StaticRegisterNativesUMediaSource,0x30,0x10000001,0,L"Engine",FUN_142aaf3e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2ab90;
}



// FUNCTION 142aae4e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGImpulseWindProjectile::GetPrivateStaticClass(void)

{
  if (DAT_146b2ab70 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"MediaSoundComponent",&DAT_146b2ab70,FUN_142aaf970,0x6f0,
                  0x10000000,0,L"Engine",&LAB_142aaf3c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1404e7f60,&LAB_140447700,0);
  }
  return DAT_146b2ab70;
}



// FUNCTION 142aae590 FUN_142aae590 body=47 status=ok
// SIG undefined FUN_142aae590(void)

longlong FUN_142aae590(void)

{
  if (DAT_146b2ab68 == 0) {
    FUN_141786440(&DAT_146b2ab68,&PTR_GetPrivateStaticClass_1454e20a0);
  }
  return DAT_146b2ab68;
}



// FUNCTION 142aae5c0 FUN_142aae5c0 body=47 status=ok
// SIG undefined FUN_142aae5c0(void)

longlong FUN_142aae5c0(void)

{
  if (DAT_146b2ab50 == 0) {
    FUN_141786a30(&DAT_146b2ab50,&PTR_FUN_146685880);
  }
  return DAT_146b2ab50;
}



// FUNCTION 142aae5f0 FUN_142aae5f0 body=47 status=ok
// SIG undefined FUN_142aae5f0(void)

longlong FUN_142aae5f0(void)

{
  if (DAT_146b2ab58 == 0) {
    FUN_141786a30(&DAT_146b2ab58,&PTR_FUN_146685900);
  }
  return DAT_146b2ab58;
}



// FUNCTION 142aae620 FUN_142aae620 body=47 status=ok
// SIG undefined FUN_142aae620(void)

longlong FUN_142aae620(void)

{
  if (DAT_146b2ab60 == 0) {
    FUN_141786a30(&DAT_146b2ab60,&PTR_FUN_146685980);
  }
  return DAT_146b2ab60;
}



// FUNCTION 142aae670 FUN_142aae670 body=47 status=ok
// SIG undefined FUN_142aae670(void)

longlong FUN_142aae670(void)

{
  if (DAT_146b2ab78 == 0) {
    FUN_141786a30(&DAT_146b2ab78,&PTR_FUN_146685ad0);
  }
  return DAT_146b2ab78;
}



// FUNCTION 142aae6a0 FUN_142aae6a0 body=47 status=ok
// SIG undefined FUN_142aae6a0(void)

longlong FUN_142aae6a0(void)

{
  if (DAT_146b2ab80 == 0) {
    FUN_141786a30(&DAT_146b2ab80,&PTR_FUN_146685b60);
  }
  return DAT_146b2ab80;
}



// FUNCTION 142aae6e0 FUN_142aae6e0 body=162 status=ok
// SIG undefined FUN_142aae6e0(void)

longlong FUN_142aae6e0(void)

{
  if (DAT_146b2abc8 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"MediaTexture",&DAT_146b2abc8,FUN_142aaf9d0,0x148,
                  0x10000000,0,L"Engine",&LAB_142aaf420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14294dce0,&LAB_140447700,0);
  }
  return DAT_146b2abc8;
}



// FUNCTION 142aae790 FUN_142aae790 body=47 status=ok
// SIG undefined FUN_142aae790(void)

longlong FUN_142aae790(void)

{
  if (DAT_146b2abc0 == 0) {
    FUN_141786440(&DAT_146b2abc0,&PTR_FUN_1454e2b00);
  }
  return DAT_146b2abc0;
}



// FUNCTION 142aae7c0 FUN_142aae7c0 body=47 status=ok
// SIG undefined FUN_142aae7c0(void)

longlong FUN_142aae7c0(void)

{
  if (DAT_146b2ab98 == 0) {
    FUN_141786a30(&DAT_146b2ab98,&PTR_FUN_146685ba0);
  }
  return DAT_146b2ab98;
}



// FUNCTION 142aae7f0 FUN_142aae7f0 body=47 status=ok
// SIG undefined FUN_142aae7f0(void)

longlong FUN_142aae7f0(void)

{
  if (DAT_146b2aba0 == 0) {
    FUN_141786a30(&DAT_146b2aba0,&PTR_FUN_146685be0);
  }
  return DAT_146b2aba0;
}



// FUNCTION 142aae820 FUN_142aae820 body=47 status=ok
// SIG undefined FUN_142aae820(void)

longlong FUN_142aae820(void)

{
  if (DAT_146b2aba8 == 0) {
    FUN_141786a30(&DAT_146b2aba8,&PTR_FUN_146685c60);
  }
  return DAT_146b2aba8;
}



// FUNCTION 142aae850 FUN_142aae850 body=47 status=ok
// SIG undefined FUN_142aae850(void)

longlong FUN_142aae850(void)

{
  if (DAT_146b2abb0 == 0) {
    FUN_141786a30(&DAT_146b2abb0,&PTR_FUN_146685ca0);
  }
  return DAT_146b2abb0;
}



// FUNCTION 142aae880 FUN_142aae880 body=47 status=ok
// SIG undefined FUN_142aae880(void)

longlong FUN_142aae880(void)

{
  if (DAT_146b2abb8 == 0) {
    FUN_141786a30(&DAT_146b2abb8,&PTR_FUN_146685d20);
  }
  return DAT_146b2abb8;
}



// FUNCTION 142aae8b0 FUN_142aae8b0 body=47 status=ok
// SIG undefined FUN_142aae8b0(void)

longlong FUN_142aae8b0(void)

{
  if (DAT_146b2a800 == 0) {
    FUN_141786440(&DAT_146b2a800,&PTR_GetPrivateStaticClass_1454e2800);
  }
  return DAT_146b2a800;
}



// FUNCTION 142aae8e0 FUN_142aae8e0 body=47 status=ok
// SIG undefined FUN_142aae8e0(void)

longlong FUN_142aae8e0(void)

{
  if (DAT_146b2ab88 == 0) {
    FUN_141786440(&DAT_146b2ab88,&PTR_GetPrivateStaticClass_1454e23a0);
  }
  return DAT_146b2ab88;
}



// FUNCTION 142aae910 FUN_142aae910 body=47 status=ok
// SIG undefined FUN_142aae910(void)

longlong FUN_142aae910(void)

{
  if (DAT_146b2a828 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a828,&PTR_s__Script_MediaAssets_1454e51c8);
  }
  return DAT_146b2a828;
}



// FUNCTION 142aae950 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAsyncTaskDownloadImage::GetPrivateStaticClass(void)

{
  if (DAT_146b2a820 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"FileMediaSource",&DAT_146b2a820,
                  StaticRegisterNativesUAsyncTaskDownloadImage,0x50,0x10000000,0,L"Engine",
                  InternalConstructor<UStreamMediaSource>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBaseMediaSource::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2a820;
}



// FUNCTION 142aaea00 FUN_142aaea00 body=47 status=ok
// SIG undefined FUN_142aaea00(void)

longlong FUN_142aaea00(void)

{
  if (DAT_146b2a818 == 0) {
    FUN_141786440(&DAT_146b2a818,&PTR_GetPrivateStaticClass_1454e2ce0);
  }
  return DAT_146b2a818;
}



// FUNCTION 142aaea30 FUN_142aaea30 body=47 status=ok
// SIG undefined FUN_142aaea30(void)

longlong FUN_142aaea30(void)

{
  if (DAT_146b2a810 == 0) {
    FUN_141786a30(&DAT_146b2a810,&PTR_FUN_146680fd0);
  }
  return DAT_146b2a810;
}



// FUNCTION 142aaea70 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPlatformMediaSource::StaticClass(void)

{
  if (DAT_146b2abd8 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"PlatformMediaSource",&DAT_146b2abd8,FUN_140447710,0x38,
                  0x10000000,0,L"Engine",FUN_142aaf440,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMediaSource::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2abd8;
}



// FUNCTION 142aaeb30 FUN_142aaeb30 body=162 status=ok
// SIG undefined FUN_142aaeb30(void)

longlong FUN_142aaeb30(void)

{
  if (DAT_146b2a838 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"MediaAudioSinkProviderInterface",&DAT_146b2a838,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b2a838;
}



// FUNCTION 142aaebf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UStreamMediaSource::GetPrivateStaticClass(void)

{
  if (DAT_146b2abe8 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"StreamMediaSource",&DAT_146b2abe8,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",InternalConstructor<UStreamMediaSource>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBaseMediaSource::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2abe8;
}



// FUNCTION 142aaecd0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UTimeSynchronizableMediaSource::StaticClass(void)

{
  if (DAT_146b2abf8 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"TimeSynchronizableMediaSource",&DAT_146b2abf8,
                  FUN_140447710,0x40,0x10000001,0,L"Engine",&LAB_142aaf4d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBaseMediaSource::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2abf8;
}



// FUNCTION 142aaed80 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMediaPlaylist::GetPrivateStaticClass(void)

{
  if (DAT_146b2ab40 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"MediaPlaylist",&DAT_146b2ab40,
                  StaticRegisterNativesUMediaPlaylist,0x38,0x10000000,0,L"Engine",FUN_1408e0a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2ab40;
}



// FUNCTION 142aaee30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMediaBlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b2a888 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"MediaBlueprintFunctionLibrary",&DAT_146b2a888,
                  StaticRegisterNativesUMediaBlueprintFunctionLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b2a888;
}



// FUNCTION 142aaeee0 FUN_142aaeee0 body=47 status=ok
// SIG undefined FUN_142aaeee0(void)

longlong FUN_142aaeee0(void)

{
  if (DAT_146b2ab38 == 0) {
    FUN_141786440(&DAT_146b2ab38,&PTR_GetPrivateStaticClass_1454e4be0);
  }
  return DAT_146b2ab38;
}



// FUNCTION 142aaef10 FUN_142aaef10 body=47 status=ok
// SIG undefined FUN_142aaef10(void)

longlong FUN_142aaef10(void)

{
  if (DAT_146b2aad8 == 0) {
    FUN_141786a30(&DAT_146b2aad8,&PTR_FUN_1466850f0);
  }
  return DAT_146b2aad8;
}



// FUNCTION 142aaef40 FUN_142aaef40 body=47 status=ok
// SIG undefined FUN_142aaef40(void)

longlong FUN_142aaef40(void)

{
  if (DAT_146b2aae0 == 0) {
    FUN_141786a30(&DAT_146b2aae0,&PTR_FUN_1466851b0);
  }
  return DAT_146b2aae0;
}



// FUNCTION 142aaef70 FUN_142aaef70 body=47 status=ok
// SIG undefined FUN_142aaef70(void)

longlong FUN_142aaef70(void)

{
  if (DAT_146b2aae8 == 0) {
    FUN_141786a30(&DAT_146b2aae8,&PTR_FUN_146685260);
  }
  return DAT_146b2aae8;
}



// FUNCTION 142aaefa0 FUN_142aaefa0 body=47 status=ok
// SIG undefined FUN_142aaefa0(void)

longlong FUN_142aaefa0(void)

{
  if (DAT_146b2aaf0 == 0) {
    FUN_141786a30(&DAT_146b2aaf0,&PTR_FUN_1466852e0);
  }
  return DAT_146b2aaf0;
}



// FUNCTION 142aaefd0 FUN_142aaefd0 body=47 status=ok
// SIG undefined FUN_142aaefd0(void)

longlong FUN_142aaefd0(void)

{
  if (DAT_146b2aaf8 == 0) {
    FUN_141786a30(&DAT_146b2aaf8,&PTR_FUN_146685360);
  }
  return DAT_146b2aaf8;
}



// FUNCTION 142aaf000 FUN_142aaf000 body=47 status=ok
// SIG undefined FUN_142aaf000(void)

longlong FUN_142aaf000(void)

{
  if (DAT_146b2ab00 == 0) {
    FUN_141786a30(&DAT_146b2ab00,&PTR_FUN_1466853e0);
  }
  return DAT_146b2ab00;
}



// FUNCTION 142aaf030 FUN_142aaf030 body=47 status=ok
// SIG undefined FUN_142aaf030(void)

longlong FUN_142aaf030(void)

{
  if (DAT_146b2ab08 == 0) {
    FUN_141786a30(&DAT_146b2ab08,&PTR_FUN_146685460);
  }
  return DAT_146b2ab08;
}



// FUNCTION 142aaf060 FUN_142aaf060 body=47 status=ok
// SIG undefined FUN_142aaf060(void)

longlong FUN_142aaf060(void)

{
  if (DAT_146b2ab10 == 0) {
    FUN_141786a30(&DAT_146b2ab10,&PTR_FUN_1466854e0);
  }
  return DAT_146b2ab10;
}



// FUNCTION 142aaf090 FUN_142aaf090 body=47 status=ok
// SIG undefined FUN_142aaf090(void)

longlong FUN_142aaf090(void)

{
  if (DAT_146b2ab18 == 0) {
    FUN_141786a30(&DAT_146b2ab18,&PTR_FUN_146685520);
  }
  return DAT_146b2ab18;
}



// FUNCTION 142aaf0c0 FUN_142aaf0c0 body=47 status=ok
// SIG undefined FUN_142aaf0c0(void)

longlong FUN_142aaf0c0(void)

{
  if (DAT_146b2ab20 == 0) {
    FUN_141786a30(&DAT_146b2ab20,&PTR_FUN_146685610);
  }
  return DAT_146b2ab20;
}



// FUNCTION 142aaf0f0 FUN_142aaf0f0 body=47 status=ok
// SIG undefined FUN_142aaf0f0(void)

longlong FUN_142aaf0f0(void)

{
  if (DAT_146b2ab28 == 0) {
    FUN_141786a30(&DAT_146b2ab28,&PTR_FUN_1466856a0);
  }
  return DAT_146b2ab28;
}



// FUNCTION 142aaf120 FUN_142aaf120 body=47 status=ok
// SIG undefined FUN_142aaf120(void)

longlong FUN_142aaf120(void)

{
  if (DAT_146b2ab30 == 0) {
    FUN_141786a30(&DAT_146b2ab30,&PTR_FUN_146685770);
  }
  return DAT_146b2ab30;
}



// FUNCTION 142aaf150 FUN_142aaf150 body=47 status=ok
// SIG undefined FUN_142aaf150(void)

longlong FUN_142aaf150(void)

{
  if (DAT_146b2a880 == 0) {
    FUN_141786440(&DAT_146b2a880,&PTR_GetPrivateStaticClass_1454e49d0);
  }
  return DAT_146b2a880;
}



// FUNCTION 142aaf180 FUN_142aaf180 body=47 status=ok
// SIG undefined FUN_142aaf180(void)

longlong FUN_142aaf180(void)

{
  if (DAT_146b2a868 == 0) {
    FUN_141786a30(&DAT_146b2a868,&PTR_FUN_146681210);
  }
  return DAT_146b2a868;
}



// FUNCTION 142aaf1b0 FUN_142aaf1b0 body=47 status=ok
// SIG undefined FUN_142aaf1b0(void)

longlong FUN_142aaf1b0(void)

{
  if (DAT_146b2a870 == 0) {
    FUN_141786a30(&DAT_146b2a870,&PTR_FUN_146681300);
  }
  return DAT_146b2a870;
}



// FUNCTION 142aaf1e0 FUN_142aaf1e0 body=47 status=ok
// SIG undefined FUN_142aaf1e0(void)

longlong FUN_142aaf1e0(void)

{
  if (DAT_146b2a878 == 0) {
    FUN_141786a30(&DAT_146b2a878,&PTR_FUN_1466813f0);
  }
  return DAT_146b2a878;
}



// FUNCTION 142aaf210 FUN_142aaf210 body=53 status=ok
// SIG undefined FUN_142aaf210(void)

void FUN_142aaf210(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1454e52b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142aaf270 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGCampaignMap::GetPrivateStaticClass(void)

{
  if (DAT_146b2aad0 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"MediaPlayer",&DAT_146b2aad0,
                  UMediaPlayer::StaticRegisterNativesUMediaPlayer,0x148,0x10000000,0,L"Engine",
                  &LAB_142aaf3a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b2aad0;
}



// FUNCTION 142aaf310 InternalConstructor<UBaseMediaSource> body=58 status=ok
// SIG undefined InternalConstructor<UBaseMediaSource>(void)

void InternalConstructor<UBaseMediaSource>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144146108;
    puVar1[5] = &PTR_FUN_144146390;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 142aaf350 InternalConstructor<UStreamMediaSource> body=66 status=ok
// SIG undefined InternalConstructor<UStreamMediaSource>(void)

void InternalConstructor<UStreamMediaSource>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[6] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__1454e4ee0;
    puVar1[5] = &PTR_FUN_1454e5168;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 142aaf3e0 FUN_142aaf3e0 body=52 status=ok
// SIG undefined FUN_142aaf3e0(void)

void FUN_142aaf3e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144145d98;
    puVar1[5] = &PTR_LAB_144146020;
  }
  return;
}



// FUNCTION 142aaf440 FUN_142aaf440 body=52 status=ok
// SIG undefined FUN_142aaf440(void)

void FUN_142aaf440(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1454e5a30;
    puVar1[5] = &PTR_LAB_1454e5cb8;
  }
  return;
}



// FUNCTION 142aaf480 InternalConstructor<UStreamMediaSource> body=66 status=ok
// SIG undefined InternalConstructor<UStreamMediaSource>(void)

void InternalConstructor<UStreamMediaSource>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[6] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__1454e5cf0;
    puVar1[5] = &PTR_FUN_1454e5f78;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 142aaf4e0 FUN_142aaf4e0 body=33 status=ok
// SIG undefined FUN_142aaf4e0(void)

void FUN_142aaf4e0(undefined8 param_1,longlong param_2)

{
  FText::FText(param_2);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 142aaf510 EMediaAudioCaptureDeviceFilter_StaticEnum body=85 status=ok
// SIG undefined EMediaAudioCaptureDeviceFilter_StaticEnum(void)

void EMediaAudioCaptureDeviceFilter_StaticEnum(void)

{
  if (DAT_146b2a7b8 == 0) {
    if (DAT_146b2a828 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a828,&PTR_s__Script_MediaAssets_1454e51c8);
    }
    DAT_146b2a7b8 = GetStaticEnum(FUN_142aafbd0,DAT_146b2a828,L"EMediaAudioCaptureDeviceFilter");
  }
  return;
}



// FUNCTION 142aaf570 EMediaPlayerTrack_StaticEnum body=85 status=ok
// SIG undefined EMediaPlayerTrack_StaticEnum(void)

void EMediaPlayerTrack_StaticEnum(void)

{
  if (DAT_146b2a798 == 0) {
    if (DAT_146b2a828 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a828,&PTR_s__Script_MediaAssets_1454e51c8);
    }
    DAT_146b2a798 = GetStaticEnum(FUN_142aafc00,DAT_146b2a828,L"EMediaPlayerTrack");
  }
  return;
}



// FUNCTION 142aaf5d0 EMediaSoundChannels_StaticEnum body=85 status=ok
// SIG undefined EMediaSoundChannels_StaticEnum(void)

void EMediaSoundChannels_StaticEnum(void)

{
  if (DAT_146b2a7a0 == 0) {
    if (DAT_146b2a828 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a828,&PTR_s__Script_MediaAssets_1454e51c8);
    }
    DAT_146b2a7a0 = GetStaticEnum(FUN_142aafc30,DAT_146b2a828,L"EMediaSoundChannels");
  }
  return;
}



// FUNCTION 142aaf630 EMediaVideoCaptureDeviceFilter_StaticEnum body=85 status=ok
// SIG undefined EMediaVideoCaptureDeviceFilter_StaticEnum(void)

void EMediaVideoCaptureDeviceFilter_StaticEnum(void)

{
  if (DAT_146b2a7b0 == 0) {
    if (DAT_146b2a828 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a828,&PTR_s__Script_MediaAssets_1454e51c8);
    }
    DAT_146b2a7b0 = GetStaticEnum(FUN_142aafc60,DAT_146b2a828,L"EMediaVideoCaptureDeviceFilter");
  }
  return;
}



// FUNCTION 142aaf690 EMediaWebcamCaptureDeviceFilter_StaticEnum body=85 status=ok
// SIG undefined EMediaWebcamCaptureDeviceFilter_StaticEnum(void)

void EMediaWebcamCaptureDeviceFilter_StaticEnum(void)

{
  if (DAT_146b2a7a8 == 0) {
    if (DAT_146b2a828 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a828,&PTR_s__Script_MediaAssets_1454e51c8);
    }
    DAT_146b2a7a8 = GetStaticEnum(FUN_142aafc90,DAT_146b2a828,L"EMediaWebcamCaptureDeviceFilter");
  }
  return;
}



// FUNCTION 142aaf6f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBaseMediaSource::GetPrivateStaticClass(void)

{
  if (DAT_146b2a808 == 0) {
    FUN_14171ccd0(L"/Script/MediaAssets",L"BaseMediaSource",&DAT_146b2a808,FUN_140447710,0x38,
                  0x10000001,0,L"Engine",InternalConstructor<UBaseMediaSource>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMediaSource::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b2a808;
}



// FUNCTION 142aaf7a0 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC(void)

{
  return 0xa94e860b;
}



// FUNCTION 142aaf7d0 Serialize body=112 status=ok
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
  FUN_142aac170(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142aaf840 Serialize body=112 status=ok
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
  FUN_142aac200(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142aaf8b0 StaticRegisterNativesUAsyncTaskDownloadImage body=34 status=ok
// SIG undefined StaticRegisterNativesUAsyncTaskDownloadImage(void)

void UAsyncTaskDownloadImage::StaticRegisterNativesUAsyncTaskDownloadImage(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetFilePath_1454e51a0,1);
  return;
}



// FUNCTION 142aaf8e0 StaticRegisterNativesUMediaBlueprintFunctionLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUMediaBlueprintFunctionLibrary(void)

void UMediaBlueprintFunctionLibrary::StaticRegisterNativesUMediaBlueprintFunctionLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnumerateAudioCaptureDevices_1454e53c8,3)
  ;
  return;
}



// FUNCTION 142aaf910 StaticRegisterNativesUMediaPlayer body=34 status=ok
// SIG undefined StaticRegisterNativesUMediaPlayer(void)

void UMediaPlayer::StaticRegisterNativesUMediaPlayer(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGCampaignMap::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CanPause_1454e5470,0x43);
  return;
}



// FUNCTION 142aaf940 StaticRegisterNativesUMediaPlaylist body=34 status=ok
// SIG undefined StaticRegisterNativesUMediaPlaylist(void)

void UMediaPlaylist::StaticRegisterNativesUMediaPlaylist(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_DAT_1454e58a0,0xc);
  return;
}



// FUNCTION 142aaf970 FUN_142aaf970 body=34 status=ok
// SIG undefined FUN_142aaf970(void)

void FUN_142aaf970(void)

{
  undefined8 uVar1;
  
  uVar1 = AGImpulseWindProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_BP_GetAttenuationSettingsToApply_1454e5990,3);
  return;
}



// FUNCTION 142aaf9a0 StaticRegisterNativesUMediaSource body=34 status=ok
// SIG undefined StaticRegisterNativesUMediaSource(void)

void UMediaSource::StaticRegisterNativesUMediaSource(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetUrl_1454e59c0,2);
  return;
}



// FUNCTION 142aaf9d0 FUN_142aaf9d0 body=34 status=ok
// SIG undefined FUN_142aaf9d0(void)

void FUN_142aaf9d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142aae6e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAspectRatio_1454e59e0,5);
  return;
}



// FUNCTION 142aafa00 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMediaCaptureDevice::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b2a858 == 0) {
    if (DAT_146b2a828 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b2a828,&PTR_s__Script_MediaAssets_1454e51c8);
    }
    lVar1 = DAT_146b2a828;
    uVar2 = Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC();
    DAT_146b2a858 = GetStaticStruct(FUN_142aafcc0,lVar1,L"MediaCaptureDevice",0x28,uVar2);
  }
  return;
}



// FUNCTION 142aafa80 FUN_142aafa80 body=47 status=ok
// SIG undefined FUN_142aafa80(void)

longlong FUN_142aafa80(void)

{
  if (DAT_146b2a830 == 0) {
    FUN_141786440(&DAT_146b2a830,&PTR_FUN_1454e3c20);
  }
  return DAT_146b2a830;
}



// FUNCTION 142aafab0 FUN_142aafab0 body=47 status=ok
// SIG undefined FUN_142aafab0(void)

longlong FUN_142aafab0(void)

{
  if (DAT_146b2abd0 == 0) {
    FUN_141786440(&DAT_146b2abd0,&PTR_StaticClass_1454e3630);
  }
  return DAT_146b2abd0;
}



// FUNCTION 142aafae0 FUN_142aafae0 body=47 status=ok
// SIG undefined FUN_142aafae0(void)

longlong FUN_142aafae0(void)

{
  if (DAT_146b2abe0 == 0) {
    FUN_141786440(&DAT_146b2abe0,&PTR_GetPrivateStaticClass_1454e3b80);
  }
  return DAT_146b2abe0;
}



// FUNCTION 142aafb10 FUN_142aafb10 body=47 status=ok
// SIG undefined FUN_142aafb10(void)

longlong FUN_142aafb10(void)

{
  if (DAT_146b2abf0 == 0) {
    FUN_141786440(&DAT_146b2abf0,&PTR_StaticClass_1454e3ec0);
  }
  return DAT_146b2abf0;
}



// FUNCTION 142aafb40 FUN_142aafb40 body=47 status=ok
// SIG undefined FUN_142aafb40(void)

longlong FUN_142aafb40(void)

{
  if (DAT_146b2a8a0 == 0) {
    FUN_141786a30(&DAT_146b2a8a0,&PTR_FUN_146681580);
  }
  return DAT_146b2a8a0;
}



// FUNCTION 142aafb70 FUN_142aafb70 body=47 status=ok
// SIG undefined FUN_142aafb70(void)

longlong FUN_142aafb70(void)

{
  if (DAT_146b2a890 == 0) {
    FUN_141786a30(&DAT_146b2a890,&PTR_FUN_146681490);
  }
  return DAT_146b2a890;
}



// FUNCTION 142aafba0 FUN_142aafba0 body=47 status=ok
// SIG undefined FUN_142aafba0(void)

longlong FUN_142aafba0(void)

{
  if (DAT_146b2a898 == 0) {
    FUN_141786a30(&DAT_146b2a898,&PTR_FUN_146681540);
  }
  return DAT_146b2a898;
}



// FUNCTION 142aafbd0 FUN_142aafbd0 body=47 status=ok
// SIG undefined FUN_142aafbd0(void)

longlong FUN_142aafbd0(void)

{
  if (DAT_146b2a850 == 0) {
    FUN_1417866a0(&DAT_146b2a850,&PTR_FUN_146685fe0);
  }
  return DAT_146b2a850;
}



// FUNCTION 142aafc00 FUN_142aafc00 body=47 status=ok
// SIG undefined FUN_142aafc00(void)

longlong FUN_142aafc00(void)

{
  if (DAT_146b2a8a8 == 0) {
    FUN_1417866a0(&DAT_146b2a8a8,&PTR_FUN_146686030);
  }
  return DAT_146b2a8a8;
}



// FUNCTION 142aafc30 FUN_142aafc30 body=47 status=ok
// SIG undefined FUN_142aafc30(void)

longlong FUN_142aafc30(void)

{
  if (DAT_146b2ab48 == 0) {
    FUN_1417866a0(&DAT_146b2ab48,&PTR_FUN_146686080);
  }
  return DAT_146b2ab48;
}



// FUNCTION 142aafc60 FUN_142aafc60 body=47 status=ok
// SIG undefined FUN_142aafc60(void)

longlong FUN_142aafc60(void)

{
  if (DAT_146b2a848 == 0) {
    FUN_1417866a0(&DAT_146b2a848,&PTR_FUN_146685f90);
  }
  return DAT_146b2a848;
}



// FUNCTION 142aafc90 FUN_142aafc90 body=47 status=ok
// SIG undefined FUN_142aafc90(void)

longlong FUN_142aafc90(void)

{
  if (DAT_146b2a840 == 0) {
    FUN_1417866a0(&DAT_146b2a840,&PTR_FUN_146685f40);
  }
  return DAT_146b2a840;
}



// FUNCTION 142aafcc0 FUN_142aafcc0 body=47 status=ok
// SIG undefined FUN_142aafcc0(void)

longlong FUN_142aafcc0(void)

{
  if (DAT_146b2a860 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b2a860,&PTR_FUN_146681150);
  }
  return DAT_146b2a860;
}



// FUNCTION 142aafcf0 execAdd body=143 status=ok
// SIG undefined execAdd(void)

void UMediaPlaylist::execAdd(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = Add(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142aafd80 execAddFile body=163 status=ok
// SIG undefined execAddFile(void)

void UMediaPlaylist::execAddFile(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = AddFile(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142aafe30 FUN_142aafe30 body=163 status=ok
// SIG undefined FUN_142aafe30(void)

void FUN_142aafe30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aa6610(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142aafee0 FUN_142aafee0 body=638 status=ok
// SIG undefined FUN_142aafee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142aafee0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_308 [32];
  undefined **local_2e8;
  undefined2 local_2e0;
  undefined4 local_2dc;
  float local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  float local_2c8;
  undefined1 local_2c0 [120];
  undefined1 local_248;
  byte local_247;
  undefined4 local_246;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 local_230 [120];
  undefined1 local_1b8 [120];
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [120];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_2dc = 0xc2700000;
  local_2c8 = 3600.0;
  local_2e8 = &PTR_FUN_143f48bb8;
  local_2e0 = 0;
  local_2d8 = 400.0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_2c0);
  local_247 = local_247 & 0xfc;
  local_23c = 0x43480000;
  local_240 = 0;
  local_238 = 0x453b8000;
  local_234 = 0x45bb8000;
  local_2e8 = &PTR_FUN_143f48bc8;
  local_248 = 0x83;
  local_246 = 0x30000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_230);
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_1b8);
  local_128 = 0x3f8000003f800000;
  uStack_120 = 0x3f8000003f800000;
  local_118 = 0x3f8000003f800000;
  uStack_110 = 0x3f8000003f800000;
  local_138 = 0;
  uStack_130 = 0x4270000041f00000;
  local_108 = 0x3f800000469c4000;
  uStack_100 = 0x3e99999a3dcccccd;
  local_f4 = local_2d8;
  local_f0 = local_2d8 + local_2c8;
  local_f8 = 0x3f733333;
  local_140 = 0x469c4000;
  local_13c = 0x469c4000;
  local_ec = 0x3e4ccccd;
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_e8);
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_2e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_2e8);
  }
  pppuVar2 = &local_2e8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar2 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aa66e0(param_1,pppuVar2);
  *param_3 = uVar1;
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(local_e8);
  FRichCurve::~FRichCurve(local_1b8);
  FRichCurve::~FRichCurve(local_230);
  local_2e8 = &PTR_FUN_143f48bb8;
  FRichCurve::~FRichCurve(local_2c0);
  return;
}



// FUNCTION 142ab0160 FUN_142ab0160 body=43 status=ok
// SIG undefined FUN_142ab0160(void)

void FUN_142ab0160(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aa6d20();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0190 FUN_142ab0190 body=143 status=ok
// SIG undefined FUN_142ab0190(void)

void FUN_142ab0190(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aa6d30(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0220 FUN_142ab0220 body=163 status=ok
// SIG undefined FUN_142ab0220(void)

void FUN_142ab0220(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aa6dc0(param_1,local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ab02f0 execEnumerateAudioCaptureDevices body=216 status=ok
// SIG undefined execEnumerateAudioCaptureDevices(void)

void UMediaBlueprintFunctionLibrary::execEnumerateAudioCaptureDevices
               (undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  EnumerateAudioCaptureDevices(puVar1,local_res10[0]);
  FUN_1414d5750(&local_18);
  return;
}



// FUNCTION 142ab03d0 execEnumerateVideoCaptureDevices body=216 status=ok
// SIG undefined execEnumerateVideoCaptureDevices(void)

void UMediaBlueprintFunctionLibrary::execEnumerateVideoCaptureDevices
               (undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  EnumerateVideoCaptureDevices(puVar1,local_res10[0]);
  FUN_1414d5750(&local_18);
  return;
}



// FUNCTION 142ab04b0 execEnumerateWebcamCaptureDevices body=216 status=ok
// SIG undefined execEnumerateWebcamCaptureDevices(void)

void UMediaBlueprintFunctionLibrary::execEnumerateWebcamCaptureDevices
               (undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  EnumerateWebcamCaptureDevices(puVar1,local_res10[0]);
  FUN_1414d5750(&local_18);
  return;
}



// FUNCTION 142ab0590 FUN_142ab0590 body=142 status=ok
// SIG undefined FUN_142ab0590(void)

void FUN_142ab0590(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = FUN_142aa9450(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0620 execGetAspectRatio body=45 status=ok
// SIG undefined execGetAspectRatio(void)

void UMediaTexture::execGetAspectRatio(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetAspectRatio();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0650 FUN_142ab0650 body=187 status=ok
// SIG undefined FUN_142ab0650(void)

void FUN_142ab0650(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_142aa95d0(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0710 FUN_142ab0710 body=187 status=ok
// SIG undefined FUN_142ab0710(void)

void FUN_142ab0710(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_142aa95e0(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab07d0 FUN_142ab07d0 body=254 status=ok
// SIG undefined FUN_142ab07d0(void)

void FUN_142ab07d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  longlong local_28 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  plVar1 = (longlong *)
           FD3D12DynamicRHI::RHICreateSamplerState(param_1,local_28,local_res18[0],local_res10[0]);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ab08d0 FUN_142ab08d0 body=52 status=ok
// SIG undefined FUN_142ab08d0(void)

void FUN_142ab08d0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142aa9690(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142ab0910 FUN_142ab0910 body=52 status=ok
// SIG undefined FUN_142ab0910(void)

void FUN_142ab0910(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FD3D12DynamicRHI::RHICreateSamplerState(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142ab0950 execGetHeight body=43 status=ok
// SIG undefined execGetHeight(void)

void UMediaTexture::execGetHeight(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetHeight();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0980 FUN_142ab0980 body=45 status=ok
// SIG undefined FUN_142ab0980(void)

void FUN_142ab0980(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aa9880();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab09b0 FUN_142ab09b0 body=127 status=ok
// SIG undefined FUN_142ab09b0(void)

void FUN_142ab09b0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = (**(code **)(*param_1 + 0x278))(param_1,local_28);
  FText::operator=(param_3,uVar5);
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



// FUNCTION 142ab0a30 FUN_142ab0a30 body=44 status=ok
// SIG undefined FUN_142ab0a30(void)

void FUN_142ab0a30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = ULevelSequencePlayer::CanPlay();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0a60 execGetMediaPlayer body=44 status=ok
// SIG undefined execGetMediaPlayer(void)

void UMediaTexture::execGetMediaPlayer(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UCanvasRenderTarget2D::GetWorld();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0a90 execGetNext body=158 status=ok
// SIG undefined execGetNext(void)

void UMediaPlaylist::execGetNext(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetNext(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0b30 FUN_142ab0b30 body=190 status=ok
// SIG undefined FUN_142ab0b30(void)

void FUN_142ab0b30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  uVar1 = FUN_142aa9b90(param_1,local_res10[0],local_res18[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0bf0 FUN_142ab0bf0 body=133 status=ok
// SIG undefined FUN_142ab0bf0(void)

void FUN_142ab0bf0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  
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
  uVar1 = FUN_142aa9ba0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0c80 FUN_142ab0c80 body=52 status=ok
// SIG undefined FUN_142ab0c80(void)

void FUN_142ab0c80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FD3D12DynamicRHI::RHICreateSamplerState(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142ab0d00 execGetPrevious body=158 status=ok
// SIG undefined execGetPrevious(void)

void UMediaPlaylist::execGetPrevious(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetPrevious(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0da0 execGetRandom body=158 status=ok
// SIG undefined execGetRandom(void)

void UMediaPlaylist::execGetRandom(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetRandom(param_1,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0e40 FUN_142ab0e40 body=45 status=ok
// SIG undefined FUN_142ab0e40(void)

void FUN_142ab0e40(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aa9d60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0e70 FUN_142ab0e70 body=133 status=ok
// SIG undefined FUN_142ab0e70(void)

void FUN_142ab0e70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  
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
  uVar1 = FUN_142aa9da0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab0f00 FUN_142ab0f00 body=242 status=ok
// SIG undefined FUN_142ab0f00(void)

void FUN_142ab0f00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int local_res10 [2];
  longlong local_18 [2];
  
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
  local_res10[0] = 0;
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  FUN_142aa9df0(param_1,plVar1,local_res10[0] != 0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ab1000 FUN_142ab1000 body=52 status=ok
// SIG undefined FUN_142ab1000(void)

void FUN_142ab1000(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FD3D12DynamicRHI::RHICreateSamplerState(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142ab1040 FUN_142ab1040 body=52 status=ok
// SIG undefined FUN_142ab1040(void)

void FUN_142ab1040(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142aa9ee0(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142ab1080 execGetTrackDisplayName body=261 status=ok
// SIG undefined execGetTrackDisplayName(void)

void UMediaPlayer::execGetTrackDisplayName(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FUN_142aa9f00(param_1,local_38,local_res10[0],local_res20[0]);
  FText::operator=(param_3,uVar5);
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
  return;
}



// FUNCTION 142ab1190 FUN_142ab1190 body=190 status=ok
// SIG undefined FUN_142ab1190(void)

void FUN_142ab1190(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  uVar1 = FUN_142aa9f30(param_1,local_res10[0],local_res18[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1250 execGetTrackLanguage body=257 status=ok
// SIG undefined execGetTrackLanguage(void)

void UMediaPlayer::execGetTrackLanguage(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  longlong local_28 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  plVar1 = (longlong *)FUN_142aa9f40(param_1,local_28,local_res10[0],local_res18[0]);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ab1360 FUN_142ab1360 body=51 status=ok
// SIG undefined FUN_142ab1360(void)

void FUN_142ab1360(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaa190();
  FString::operator=(param_3,uVar1);
  return;
}



// FUNCTION 142ab13a0 FUN_142ab13a0 body=45 status=ok
// SIG undefined FUN_142ab13a0(void)

void FUN_142ab13a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaa280();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab13d0 FUN_142ab13d0 body=189 status=ok
// SIG undefined FUN_142ab13d0(void)

void FUN_142ab13d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_142aaa2d0(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1490 execGetVideoTrackDimensions body=201 status=ok
// SIG undefined execGetVideoTrackDimensions(void)

void UMediaPlayer::execGetVideoTrackDimensions
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  puVar1 = (undefined4 *)
           FD3D12DynamicRHI::RHICreateSamplerState
                     (param_1,local_res20,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  return;
}



// FUNCTION 142ab1560 FUN_142ab1560 body=189 status=ok
// SIG undefined FUN_142ab1560(void)

void FUN_142ab1560(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_142aaa300(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1620 execGetVideoTrackFrameRates body=215 status=ok
// SIG undefined execGetVideoTrackFrameRates(void)

void UMediaPlayer::execGetVideoTrackFrameRates
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined1 local_28 [16];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  puVar1 = (undefined1 *)FUN_142aaa310(param_1,local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar1 + 4);
  param_3[8] = puVar1[8];
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(puVar1 + 0xc);
  return;
}



// FUNCTION 142ab1700 FUN_142ab1700 body=254 status=ok
// SIG undefined FUN_142ab1700(void)

void FUN_142ab1700(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  longlong local_28 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  plVar1 = (longlong *)
           FD3D12DynamicRHI::RHICreateSamplerState(param_1,local_28,local_res18[0],local_res10[0]);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ab1800 FUN_142ab1800 body=60 status=ok
// SIG undefined FUN_142ab1800(void)

void FUN_142ab1800(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142aaa370(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142ab1840 execGetChildrenCount body=43 status=ok
// SIG undefined execGetChildrenCount(void)

void UPanelWidget::execGetChildrenCount(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetChildrenCount();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1870 FUN_142ab1870 body=43 status=ok
// SIG undefined FUN_142ab1870(void)

void FUN_142ab1870(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaa830();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab18a0 execInsert body=190 status=ok
// SIG undefined execInsert(void)

void UMediaPlaylist::execInsert(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
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
  Insert(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 142ab1960 FUN_142ab1960 body=43 status=ok
// SIG undefined FUN_142ab1960(void)

void FUN_142ab1960(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaac10();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1990 FUN_142ab1990 body=43 status=ok
// SIG undefined FUN_142ab1990(void)

void FUN_142ab1990(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaac20();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab19c0 FUN_142ab19c0 body=43 status=ok
// SIG undefined FUN_142ab19c0(void)

void FUN_142ab19c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaac30();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab19f0 FUN_142ab19f0 body=43 status=ok
// SIG undefined FUN_142ab19f0(void)

void FUN_142ab19f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaac40();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1a20 FUN_142ab1a20 body=43 status=ok
// SIG undefined FUN_142ab1a20(void)

void FUN_142ab1a20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaac50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1a50 FUN_142ab1a50 body=43 status=ok
// SIG undefined FUN_142ab1a50(void)

void FUN_142ab1a50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaac60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1a80 FUN_142ab1a80 body=43 status=ok
// SIG undefined FUN_142ab1a80(void)

void FUN_142ab1a80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaac70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142ab1ab0 FUN_142ab1ab0 body=43 status=ok
// SIG undefined FUN_142ab1ab0(void)

void FUN_142ab1ab0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142aaac80();
  *param_3 = uVar1;
  return;
}


