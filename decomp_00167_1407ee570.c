// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407ee570 FUN_1407ee570 body=281 status=ok
// SIG undefined FUN_1407ee570(void)

void FUN_1407ee570(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  float fStackX_c;
  longlong local_28;
  undefined1 local_20 [24];
  
  if (((char)param_1[0x25] == '\x03') && (param_1[0xb3] != 0)) {
    local_28 = param_1[0x97];
    FString::FString(local_20,param_1 + 0x98);
    FSoftObjectPath::operator=(param_1 + 0xb6,&local_28);
    uVar1 = (**(code **)(*(longlong *)(param_1[0xb3] + 0x28) + 0x30))();
    *(undefined1 *)(param_1 + 0xb9) = uVar1;
    *(byte *)((longlong)param_1 + 0x5c9) = *(byte *)(param_1[0xb3] + 0x3cc) & 1;
    puVar2 = (undefined8 *)FUN_141f520f0(param_1[0xb3],&local_28);
    iVar3 = (int)((ulonglong)puVar2[1] >> 0x20);
    fStackX_c = (float)((ulonglong)*puVar2 >> 0x20);
    *(float *)((longlong)param_1 + 0x5cc) =
         ((float)((longlong)iVar3 * (longlong)(int)*puVar2) + (float)iVar3 * fStackX_c) /
         (float)(int)puVar2[1];
    uVar4 = FUN_141f533d0(param_1[0xb3]);
    *(undefined4 *)(param_1 + 0xba) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x5d4) = *(undefined4 *)(param_1[0xb3] + 0x400);
                    /* WARNING: Could not recover jumptable at 0x0001407ee67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  return;
}



// FUNCTION 1407ee690 FUN_1407ee690 body=263 status=ok
// SIG undefined FUN_1407ee690(void)

undefined8 FUN_1407ee690(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x188) == *(int *)(param_1 + 0x1ac)) {
    return 0;
  }
  uVar5 = (longlong)*(int *)(param_1 + 0x1d8) - 1;
  lVar4 = *(longlong *)(param_1 + 0x1d0);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    lVar4 = param_1 + 0x1b0;
  }
  iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar5) *
                           4);
  if (iVar2 != -1) {
    lVar7 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar7 = param_1;
    }
    do {
      lVar6 = (longlong)iVar2;
      if (*(longlong *)(lVar7 + lVar6 * 0x18) == param_2) {
        uVar5 = (longlong)*(int *)(lVar7 + 0x14 + lVar6 * 0x18) & uVar5;
        puVar1 = (undefined4 *)(lVar4 + uVar5 * 4);
        iVar3 = *(int *)(lVar4 + uVar5 * 4);
        goto joined_r0x0001407ee746;
      }
      iVar2 = *(int *)(lVar7 + 0x10 + lVar6 * 0x18);
    } while (iVar2 != -1);
  }
  return 0;
joined_r0x0001407ee746:
  if (iVar3 == -1) {
LAB_1407ee76b:
    FUN_1407ee970(param_1,iVar2,1);
    return 1;
  }
  if (iVar3 == iVar2) {
    *puVar1 = *(undefined4 *)(lVar7 + lVar6 * 0x18 + 0x10);
    goto LAB_1407ee76b;
  }
  lVar4 = (longlong)iVar3 * 3 + 2;
  iVar3 = *(int *)(lVar7 + lVar4 * 8);
  puVar1 = (undefined4 *)(lVar7 + lVar4 * 8);
  goto joined_r0x0001407ee746;
}



// FUNCTION 1407ee7a0 FUN_1407ee7a0 body=464 status=ok
// SIG undefined FUN_1407ee7a0(void)

void FUN_1407ee7a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int local_res18 [2];
  undefined1 local_res20 [8];
  longlong local_38 [2];
  
  if ((DAT_146263bc8 != 0) && (param_2 != 0)) {
    FWeakObjectPtr::operator=(local_res20);
    iVar5 = 0;
    if ((*(longlong *)(param_2 + 0x4b0) == 0) ||
       (cVar2 = UMovieSceneSequencePlayer::IsPlaying(), iVar8 = 1, cVar2 == '\0')) {
      iVar8 = 0;
    }
    if (0 < *(int *)(param_1 + 0x9f0)) {
      lVar1 = param_1 + 0x1e8;
      do {
        lVar7 = *(longlong *)(param_1 + 0x9e8);
        if (*(longlong *)(param_1 + 0x9e8) == 0) {
          lVar7 = lVar1;
        }
        lVar7 = lVar7 + (longlong)iVar5 * 0x10;
        cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,local_res20);
        if (cVar2 != '\0') {
          lVar6 = param_1 + 8;
          FUN_1406e9740(lVar6,local_res18,*(undefined8 *)(lVar7 + 8));
          if (local_res18[0] != -1) {
            lVar4 = *(longlong *)(param_1 + 0x188);
            if (*(longlong *)(param_1 + 0x188) == 0) {
              lVar4 = lVar6;
            }
            lVar4 = lVar4 + (longlong)local_res18[0] * 0x18;
            if (lVar4 != 0) goto LAB_1407ee8dd;
          }
          local_38[0] = lVar7 + 8;
          FUN_1407e9f00(lVar6,local_res18,local_38,0);
          lVar4 = *(longlong *)(param_1 + 0x188);
          if (*(longlong *)(param_1 + 0x188) == 0) {
            lVar4 = lVar6;
          }
          lVar4 = lVar4 + (longlong)local_res18[0] * 0x18;
LAB_1407ee8dd:
          if (*(int *)(lVar4 + 8) == 0) {
            iVar8 = 0;
          }
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) - iVar8;
          iVar8 = *(int *)(param_1 + 0x9f0);
          iVar3 = (iVar8 - iVar5) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            lVar7 = *(longlong *)(param_1 + 0x9e8);
            if (*(longlong *)(param_1 + 0x9e8) == 0) {
              lVar7 = lVar1;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar5 * 0x10 + lVar7),
                       (void *)((longlong)(iVar8 - iVar3) * 0x10 + lVar7),(longlong)iVar3 << 4);
            iVar8 = *(int *)(param_1 + 0x9f0);
          }
          *(int *)(param_1 + 0x9f0) = iVar8 + -1;
          FUN_1407eecd0(lVar1);
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x9f0));
    }
  }
  return;
}



// FUNCTION 1407ee970 FUN_1407ee970 body=234 status=ok
// SIG undefined FUN_1407ee970(void)

void FUN_1407ee970(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar9 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar2 = (byte)param_2 & 0x1f;
    uVar10 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    lVar7 = uVar9 * 0x18;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)(param_1 + 0x1ac) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar6 = param_1;
        }
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x1a8) * 0x18) = iVar8;
      }
      lVar6 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar6 = param_1;
      }
      *(undefined4 *)(lVar6 + lVar7) = 0xffffffff;
      if (*(int *)(param_1 + 0x1ac) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x1a8);
      }
      *(undefined4 *)(lVar6 + 4 + lVar7) = uVar3;
      *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
      *(int *)(param_1 + 0x1a8) = iVar8;
      lVar6 = *(longlong *)(param_1 + 0x198);
      if (*(longlong *)(param_1 + 0x198) == 0) {
        lVar6 = param_1 + 400;
      }
      iVar4 = iVar8;
      if (iVar8 < 0) {
        iVar4 = iVar8 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      lVar7 = lVar7 + 0x18;
      puVar1 = (uint *)(lVar6 + (longlong)(iVar4 >> 5) * 4);
      uVar5 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407eea60 FUN_1407eea60 body=149 status=ok
// SIG undefined FUN_1407eea60(void)

void FUN_1407eea60(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 3);
    pvVar1 = *(void **)((longlong)param_1 + 8);
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
        *(void **)((longlong)param_1 + 8) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 3);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  return;
}



// FUNCTION 1407eeb00 FUN_1407eeb00 body=164 status=ok
// SIG undefined FUN_1407eeb00(void)

void FUN_1407eeb00(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x800);
  if (param_3 < 0x81) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x800);
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
        *(void **)((longlong)param_1 + 0x800) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x800) = uVar2;
  return;
}



// FUNCTION 1407eebb0 FUN_1407eebb0 body=132 status=ok
// SIG undefined FUN_1407eebb0(void)

void FUN_1407eebb0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 2) {
    iVar2 = 1;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x14) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
    iVar2 = (int)(uVar3 >> 3);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  FUN_1407eea60(param_1,param_2,iVar2,8);
  return;
}



// FUNCTION 1407eec40 FUN_1407eec40 body=132 status=ok
// SIG undefined FUN_1407eec40(void)

void FUN_1407eec40(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  iVar2 = 0x80;
  if (0x80 < uVar1) {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x80c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x80c) = iVar2;
  FUN_1407eeb00(param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 1407eecd0 FUN_1407eecd0 body=155 status=ok
// SIG undefined FUN_1407eecd0(void)

void FUN_1407eecd0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  uVar4 = *(uint *)(param_1 + 0x80c);
  uVar2 = 0x80;
  if ((((0x80 < uVar1) &&
       ((uVar2 = uVar4, 0x3fff < (ulonglong)((longlong)(int)(uVar4 - uVar1) << 4) ||
        ((int)(uVar1 * 3) < (int)(uVar4 * 2))))) && ((0x40 < uVar4 - uVar1 || (uVar1 == 0)))) &&
     (uVar2 = uVar1, 0 < (int)uVar1)) {
    uVar3 = FMemory::QuantizeSize((longlong)(int)uVar1 << 4,0);
    uVar4 = *(uint *)(param_1 + 0x80c);
    uVar2 = (uint)(uVar3 >> 4);
  }
  if (uVar2 == uVar4) {
    return;
  }
  *(uint *)(param_1 + 0x80c) = uVar2;
  FUN_1407eeb00(param_1,*(undefined4 *)(param_1 + 0x808),uVar2,0x10);
  return;
}



// FUNCTION 1407eed70 FUN_1407eed70 body=101 status=ok
// SIG undefined FUN_1407eed70(void)

void FUN_1407eed70(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      iVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar1;
    FUN_1407eea60(param_1,*(undefined4 *)(param_1 + 0x10),iVar1,8);
  }
  return;
}



// FUNCTION 1407eede0 FUN_1407eede0 body=113 status=ok
// SIG undefined FUN_1407eede0(void)

void FUN_1407eede0(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x80c)) {
    *(int *)(param_1 + 0x80c) = iVar1;
    FUN_1407eeb00(param_1,*(undefined4 *)(param_1 + 0x808),iVar1,0x10);
  }
  return;
}



// FUNCTION 1407eee60 FUN_1407eee60 body=160 status=ok
// SIG undefined FUN_1407eee60(void)

void FUN_1407eee60(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
  if (((param_2[3] != 0 || param_2[2] != 0) || param_2[1] != 0) || *param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x5d8);
    piVar6 = (int *)FUN_1407ea140(plVar1);
    if (piVar6 == (int *)0x0) {
      lVar7 = (longlong)*(int *)(param_1 + 0x5e0);
      iVar5 = *(int *)(param_1 + 0x5e0) + 1;
      *(int *)(param_1 + 0x5e0) = iVar5;
      if (*(int *)(param_1 + 0x5e4) < iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1);
      }
      lVar2 = *plVar1;
      *(undefined8 *)(lVar2 + lVar7 * 0x18) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar7 * 0x18) = 0;
      *(undefined4 *)(lVar2 + 0x10 + lVar7 * 0x18) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x14 + lVar7 * 0x18) = 0;
      iVar5 = param_2[1];
      iVar3 = param_2[2];
      iVar4 = param_2[3];
      piVar6 = (int *)(*plVar1 + lVar7 * 0x18);
      *piVar6 = *param_2;
      piVar6[1] = iVar5;
      piVar6[2] = iVar3;
      piVar6[3] = iVar4;
    }
    FWeakObjectPtr::operator=(piVar6 + 4,param_3);
  }
  return;
}



// FUNCTION 1407eef00 FUN_1407eef00 body=7 status=ok
// SIG undefined FUN_1407eef00(void)

void FUN_1407eef00(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x348) = param_2;
  return;
}



// FUNCTION 1407eef10 SetIsFocusable body=7 status=ok
// SIG undefined SetIsFocusable(void)

void SVirtualWindow::SetIsFocusable(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5e8) = param_2;
  return;
}



// FUNCTION 1407eef20 FUN_1407eef20 body=400 status=ok
// SIG undefined FUN_1407eef20(void)

void FUN_1407eef20(longlong *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong local_28;
  int local_20;
  
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))();
    *(char *)((longlong)param_1 + 0x5fc) = param_2;
  }
  else {
    param_2 = *(char *)((longlong)param_1 + 0x5fc);
  }
  if (param_2 == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      if (param_1[0xbe] != 0) {
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        FUN_142880530(uVar4,param_1 + 0xbe);
        param_1[0xbe] = 0;
      }
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar4,&local_28);
      while( true ) {
        if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        plVar5 = (longlong *)FWeakObjectPtr::Get();
        if (plVar5 != (longlong *)0x0) {
          lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (cVar2 = (**(code **)(*plVar5 + 0x768))(), cVar2 != '\0')) {
            FUN_142ddb980(plVar5,0,0,0,0,0);
          }
        }
        local_20 = local_20 + 1;
      }
    }
    return;
  }
  FUN_1407ecf90();
  return;
}



// FUNCTION 1407ef0b0 FUN_1407ef0b0 body=63 status=ok
// SIG undefined FUN_1407ef0b0(void)

void FUN_1407ef0b0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x4b0) != 0) &&
     ((*(char *)(param_1 + 0x128) == '\x03' || (*(char *)(param_1 + 0x5e8) != '\0')))) {
    FUN_141f65d20();
    FUN_1407ee570(param_1);
    return;
  }
  return;
}



// FUNCTION 1407ef100 FUN_1407ef100 body=162 status=ok
// SIG undefined FUN_1407ef100(void)

bool FUN_1407ef100(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 local_res8;
  
  uVar5 = 0;
  local_res8 = 0;
  if (param_1 != 0) {
    lVar1 = FUN_1407eb580();
    if (DAT_146263bc8 != 0) {
      FUN_1406e9740(lVar1 + 8,&local_res8,param_1);
      puVar3 = (uint *)0x0;
      if ((int)local_res8 != -1) {
        lVar4 = *(longlong *)(lVar1 + 0x188);
        if (*(longlong *)(lVar1 + 0x188) == 0) {
          lVar4 = lVar1 + 8;
        }
        puVar3 = (uint *)(lVar4 + (longlong)(int)local_res8 * 0x18);
      }
      puVar2 = puVar3 + 2;
      if (puVar3 == (uint *)0x0) {
        puVar2 = (uint *)0x0;
      }
      if (puVar2 != (uint *)0x0) {
        uVar5 = *puVar2;
      }
    }
    return DAT_146263bcc <= uVar5;
  }
  return false;
}



// FUNCTION 1407ef1b0 FUN_1407ef1b0 body=39 status=ok
// SIG undefined FUN_1407ef1b0(void)

void FUN_1407ef1b0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x4b0) != 0) &&
     ((*(char *)(param_1 + 0x128) == '\x03' || (*(char *)(param_1 + 0x5e8) != '\0')))) {
    FUN_141f66f00(*(longlong *)(param_1 + 0x4b0));
    return;
  }
  return;
}



// FUNCTION 1407ef1e0 FUN_1407ef1e0 body=27 status=ok
// SIG undefined FUN_1407ef1e0(void)

void FUN_1407ef1e0(undefined8 param_1)

{
  FUN_1421f7770();
  FUN_1407ee570(param_1);
  return;
}



// FUNCTION 1407ef200 FUN_1407ef200 body=519 status=ok
// SIG undefined FUN_1407ef200(void)

void FUN_1407ef200(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res18;
  int local_res20 [2];
  
  if (DAT_146263bc8 == 0) {
    FUN_1407ead90(param_1,0);
    return;
  }
  lVar1 = param_1 + 8;
  FUN_1407eb420(lVar1,0x10);
  iVar8 = *(int *)(param_1 + 0x9f0) + -1;
  if (-1 < iVar8) {
    lVar7 = param_1 + 0x1e8;
    lVar9 = (longlong)iVar8 << 4;
    lVar10 = lVar9;
    do {
      lVar5 = *(longlong *)(param_1 + 0x9e8);
      if (*(longlong *)(param_1 + 0x9e8) == 0) {
        lVar5 = lVar7;
      }
      cVar2 = FWeakObjectPtr::IsStale(lVar5 + lVar10,0,0);
      if (cVar2 == '\0') {
        FUN_1406e9740(lVar1);
        if (local_res18 == -1) {
LAB_1407ef35e:
          FUN_1407e9f00(lVar1,local_res20);
          lVar6 = *(longlong *)(param_1 + 0x188);
          if (*(longlong *)(param_1 + 0x188) == 0) {
            lVar6 = lVar1;
          }
          lVar6 = lVar6 + (longlong)local_res20[0] * 0x18;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 0x188);
          if (*(longlong *)(param_1 + 0x188) == 0) {
            lVar6 = lVar1;
          }
          lVar6 = lVar6 + (longlong)local_res18 * 0x18;
          if (lVar6 == 0) goto LAB_1407ef35e;
        }
        lVar5 = FWeakObjectPtr::Get(lVar5 + lVar10);
        if ((*(longlong *)(lVar5 + 0x4b0) == 0) ||
           (cVar2 = UMovieSceneSequencePlayer::IsPlaying(), cVar2 == '\0')) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
        }
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + iVar4;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x9f0);
        iVar3 = (iVar4 - iVar8) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x9e8);
          if (*(longlong *)(param_1 + 0x9e8) == 0) {
            lVar5 = lVar7;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + lVar9),(void *)((longlong)(iVar4 - iVar3) * 0x10 + lVar5),
                     (longlong)iVar3 << 4);
          iVar4 = *(int *)(param_1 + 0x9f0);
        }
        *(int *)(param_1 + 0x9f0) = iVar4 + -1;
        FUN_1407eecd0(lVar7);
      }
      lVar9 = lVar9 + -0x10;
      lVar10 = lVar10 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 1407ef410 FUN_1407ef410 body=191 status=ok
// SIG undefined FUN_1407ef410(void)

void FUN_1407ef410(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_1407ef4d0();
  if (param_2 != 0) {
    lVar2 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = *(undefined8 *)(param_2 + 0x488);
    }
    else {
      lVar2 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      uVar3 = *(undefined8 *)(param_2 + 0x490);
    }
    FUN_1407ef4d0(param_1,uVar3,param_3);
  }
  return;
}



// FUNCTION 1407ef4d0 FUN_1407ef4d0 body=410 status=ok
// SIG undefined FUN_1407ef4d0(void)

void FUN_1407ef4d0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    uVar6 = UDamageableInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,param_1,param_3);
      plVar7 = (longlong *)(param_1 + 0x890);
      lVar9 = *plVar7;
      lVar1 = lVar9 + (longlong)*(int *)(param_1 + 0x898) * 8;
      for (; lVar9 != lVar1; lVar9 = lVar9 + 8) {
        cVar5 = FUN_14058c1e0(lVar9,param_2);
        if (cVar5 != '\0') {
          cVar5 = '\x01';
          goto LAB_1407ef55a;
        }
      }
      cVar5 = '\0';
LAB_1407ef55a:
      if (param_3 != cVar5) {
        FWeakObjectPtr::operator=(&local_res10,param_2);
        if (param_3 == '\0') {
          iVar3 = *(int *)(param_1 + 0x898);
          if (iVar3 != 0) {
            iVar10 = 0;
            cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(*plVar7,&local_res10);
            bVar11 = cVar5 == '\0';
            iVar8 = 0;
            do {
              iVar4 = iVar8;
              do {
                iVar4 = iVar4 + 1;
                if (iVar3 <= iVar4) break;
                cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                  (*plVar7 + (longlong)iVar4 * 8,&local_res10);
              } while (bVar11 == (cVar5 == '\0'));
              if (bVar11 != false) {
                if (iVar10 != iVar8) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar7 + (longlong)iVar10 * 8),
                             (void *)(*plVar7 + (longlong)iVar8 * 8),(longlong)(iVar4 - iVar8) << 3)
                  ;
                }
                iVar10 = iVar10 + (iVar4 - iVar8);
              }
              bVar11 = (bool)(bVar11 ^ 1);
              iVar8 = iVar4;
            } while (iVar4 < iVar3);
            *(int *)(param_1 + 0x898) = iVar10;
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0x898);
          *(int *)(param_1 + 0x898) = iVar3 + 1;
          if (*(int *)(param_1 + 0x89c) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar3);
          }
          puVar2 = (undefined4 *)(*plVar7 + (longlong)iVar3 * 8);
          *puVar2 = local_res10;
          puVar2[1] = local_res14;
        }
      }
    }
  }
  return;
}



// FUNCTION 1407ef670 FUN_1407ef670 body=810 status=ok
// SIG undefined FUN_1407ef670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407ef670(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  float fVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (lVar2 == 0) {
    return 0;
  }
  lVar14 = 0;
  fVar20 = 3.4028235e+38;
  fVar19 = 3.4028235e+38;
  lVar13 = *(longlong *)(param_2 + 0x168);
  if (lVar13 == 0) {
    local_78 = _DAT_1468b5d90;
    uStack_70 = DAT_1468b5d98;
  }
  else {
    local_78 = *(undefined8 *)(lVar13 + 0x220);
    uStack_70 = *(undefined4 *)(lVar13 + 0x228);
  }
  lVar13 = *(longlong *)(param_1 + 0x5a0);
  fVar16 = (float)((ulonglong)local_78 >> 0x20);
  fVar7 = (float)local_78;
  lVar15 = (longlong)*(int *)(param_1 + 0x5a8) * 0x50 + lVar13;
  if (lVar13 == lVar15) {
LAB_1407ef801:
    if (param_4 != '\0') {
      lVar13 = *(longlong *)(param_1 + 0x5a0);
      lVar15 = (longlong)*(int *)(param_1 + 0x5a8) * 0x50 + lVar13;
      if (lVar13 != lVar15) {
        do {
          lVar10 = lVar2;
          if (*(longlong *)(lVar13 + 0x20) != 0) {
            lVar9 = FUN_1428dfc70();
            lVar12 = *(longlong *)(lVar13 + 0x20);
            for (lVar3 = lVar12; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
              if (lVar3 == lVar9) goto LAB_1407ef860;
            }
          }
          lVar12 = 0;
LAB_1407ef860:
          do {
            if (lVar10 == lVar12) {
              fVar19 = *(float *)(lVar13 + 0x30) - fVar7;
              fVar18 = *(float *)(lVar13 + 0x34) - fVar16;
              fVar19 = fVar18 * fVar18 + fVar19 * fVar19;
              if (fVar19 < fVar20) {
                lVar14 = lVar13;
                fVar20 = fVar19;
              }
              break;
            }
            plVar1 = (longlong *)(lVar10 + 0x30);
            lVar10 = *plVar1;
          } while (*plVar1 != 0);
          lVar13 = lVar13 + 0x50;
        } while (lVar13 != lVar15);
        if (lVar14 != 0) goto LAB_1407ef8ad;
      }
    }
    uVar11 = 0;
  }
  else {
    do {
      cVar8 = FUN_14044aea0(lVar13 + 0x28);
      if (cVar8 != '\0') {
        lVar10 = lVar2;
        if (*(longlong *)(lVar13 + 0x20) != 0) {
          lVar9 = FUN_1428dfc70();
          lVar12 = *(longlong *)(lVar13 + 0x20);
          for (lVar3 = lVar12; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
            if (lVar3 == lVar9) goto LAB_1407ef7b0;
          }
        }
        lVar12 = 0;
LAB_1407ef7b0:
        do {
          if (lVar10 == lVar12) {
            fVar18 = *(float *)(lVar13 + 0x30) - fVar7;
            fVar17 = *(float *)(lVar13 + 0x34) - fVar16;
            fVar18 = fVar17 * fVar17 + fVar18 * fVar18;
            if (fVar18 < fVar19) {
              lVar14 = lVar13;
              fVar19 = fVar18;
            }
            break;
          }
          plVar1 = (longlong *)(lVar10 + 0x30);
          lVar10 = *plVar1;
        } while (*plVar1 != 0);
      }
      lVar13 = lVar13 + 0x50;
    } while (lVar13 != lVar15);
    if (lVar14 == 0) goto LAB_1407ef801;
LAB_1407ef8ad:
    FWeakObjectPtr::operator=(lVar14 + 0x28,param_2);
    FRotator::Quaternion(lVar14 + 0x3c,&local_78);
    auVar6 = *(undefined1 (*) [12])(lVar14 + 0x30);
    auVar4._4_4_ = DAT_1464aa788._4_4_;
    auVar4._0_4_ = (undefined4)DAT_1464aa788;
    auVar4._8_4_ = DAT_1464aa790;
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(param_3 + 4) = auVar4;
    *param_3 = local_78;
    param_3[1] = CONCAT44(uStack_6c,uStack_70);
    auVar5._12_4_ = 0;
    auVar5._0_12_ = auVar6;
    *(undefined1 (*) [16])(param_3 + 2) = auVar5;
    FUN_1407eee60(param_1,lVar14,param_2);
    uVar11 = 1;
  }
  return uVar11;
}



// FUNCTION 1407ef9a0 FUN_1407ef9a0 body=35 status=ok
// SIG undefined FUN_1407ef9a0(void)

void FUN_1407ef9a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_1407eb580();
    FUN_1407ee7a0(uVar1,param_1);
  }
  return;
}



// FUNCTION 1407ef9d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPhysicsConstraintComponent::GetPrivateStaticClass(void)

{
  if (DAT_14685da88 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelSequence",L"GbxLevelSequence",&DAT_14685da88,FUN_140447710,0x490
                  ,0x10000004,0,L"Engine",FUN_1407f0350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685da88;
}



// FUNCTION 1407efa80 FUN_1407efa80 body=47 status=ok
// SIG undefined FUN_1407efa80(void)

longlong FUN_1407efa80(void)

{
  if (DAT_14685da90 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_14685da90,&PTR_s__Script_GbxLevelSequence_1440f0a10);
  }
  return DAT_14685da90;
}



// FUNCTION 1407efad0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UScrollBar::GetPrivateStaticClass(void)

{
  if (DAT_14685db40 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelSequence",L"GbxLevelSequenceActor",&DAT_14685db40,FUN_1407f17e0,
                  0x600,0x10000000,0,L"Engine",&LAB_1407f0330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407f17a0,&LAB_140447700,0);
  }
  return DAT_14685db40;
}



// FUNCTION 1407efb80 FUN_1407efb80 body=47 status=ok
// SIG undefined FUN_1407efb80(void)

longlong FUN_1407efb80(void)

{
  if (DAT_14685db38 == 0) {
    FUN_141786440(&DAT_14685db38,&PTR_GetPrivateStaticClass_1440efac0);
  }
  return DAT_14685db38;
}



// FUNCTION 1407efbb0 FUN_1407efbb0 body=47 status=ok
// SIG undefined FUN_1407efbb0(void)

longlong FUN_1407efbb0(void)

{
  if (DAT_14685dab8 == 0) {
    FUN_141786a30(&DAT_14685dab8,&PTR_FUN_146263f60);
  }
  return DAT_14685dab8;
}



// FUNCTION 1407efbe0 FUN_1407efbe0 body=47 status=ok
// SIG undefined FUN_1407efbe0(void)

longlong FUN_1407efbe0(void)

{
  if (DAT_14685dac0 == 0) {
    FUN_141786a30(&DAT_14685dac0,&PTR_FUN_146263fa0);
  }
  return DAT_14685dac0;
}



// FUNCTION 1407efc10 FUN_1407efc10 body=47 status=ok
// SIG undefined FUN_1407efc10(void)

longlong FUN_1407efc10(void)

{
  if (DAT_14685dac8 == 0) {
    FUN_141786a30(&DAT_14685dac8,&PTR_FUN_146264030);
  }
  return DAT_14685dac8;
}



// FUNCTION 1407efc40 FUN_1407efc40 body=47 status=ok
// SIG undefined FUN_1407efc40(void)

longlong FUN_1407efc40(void)

{
  if (DAT_14685dad0 == 0) {
    FUN_141786a30(&DAT_14685dad0,&PTR_FUN_1462640c0);
  }
  return DAT_14685dad0;
}



// FUNCTION 1407efc70 FUN_1407efc70 body=47 status=ok
// SIG undefined FUN_1407efc70(void)

longlong FUN_1407efc70(void)

{
  if (DAT_14685dad8 == 0) {
    FUN_141786a30(&DAT_14685dad8,&PTR_FUN_146264150);
  }
  return DAT_14685dad8;
}



// FUNCTION 1407efca0 FUN_1407efca0 body=47 status=ok
// SIG undefined FUN_1407efca0(void)

longlong FUN_1407efca0(void)

{
  if (DAT_14685dae0 == 0) {
    FUN_141786a30(&DAT_14685dae0,&PTR_FUN_146264190);
  }
  return DAT_14685dae0;
}



// FUNCTION 1407efcd0 FUN_1407efcd0 body=47 status=ok
// SIG undefined FUN_1407efcd0(void)

longlong FUN_1407efcd0(void)

{
  if (DAT_14685dae8 == 0) {
    FUN_141786a30(&DAT_14685dae8,&PTR_FUN_1462641d0);
  }
  return DAT_14685dae8;
}



// FUNCTION 1407efd00 FUN_1407efd00 body=47 status=ok
// SIG undefined FUN_1407efd00(void)

longlong FUN_1407efd00(void)

{
  if (DAT_14685daf0 == 0) {
    FUN_141786a30(&DAT_14685daf0,&PTR_FUN_146264210);
  }
  return DAT_14685daf0;
}



// FUNCTION 1407efd30 FUN_1407efd30 body=47 status=ok
// SIG undefined FUN_1407efd30(void)

longlong FUN_1407efd30(void)

{
  if (DAT_14685daf8 == 0) {
    FUN_141786a30(&DAT_14685daf8,&PTR_FUN_146264250);
  }
  return DAT_14685daf8;
}



// FUNCTION 1407efd60 FUN_1407efd60 body=47 status=ok
// SIG undefined FUN_1407efd60(void)

longlong FUN_1407efd60(void)

{
  if (DAT_14685db00 == 0) {
    FUN_141786a30(&DAT_14685db00,&PTR_FUN_146264290);
  }
  return DAT_14685db00;
}



// FUNCTION 1407efd90 FUN_1407efd90 body=47 status=ok
// SIG undefined FUN_1407efd90(void)

longlong FUN_1407efd90(void)

{
  if (DAT_14685db08 == 0) {
    FUN_141786a30(&DAT_14685db08,&PTR_FUN_1462642d0);
  }
  return DAT_14685db08;
}



// FUNCTION 1407efdc0 FUN_1407efdc0 body=47 status=ok
// SIG undefined FUN_1407efdc0(void)

longlong FUN_1407efdc0(void)

{
  if (DAT_14685db10 == 0) {
    FUN_141786a30(&DAT_14685db10,&PTR_FUN_146264310);
  }
  return DAT_14685db10;
}



// FUNCTION 1407efdf0 FUN_1407efdf0 body=47 status=ok
// SIG undefined FUN_1407efdf0(void)

longlong FUN_1407efdf0(void)

{
  if (DAT_14685db18 == 0) {
    FUN_141786a30(&DAT_14685db18,&PTR_FUN_146264350);
  }
  return DAT_14685db18;
}



// FUNCTION 1407efe20 FUN_1407efe20 body=47 status=ok
// SIG undefined FUN_1407efe20(void)

longlong FUN_1407efe20(void)

{
  if (DAT_14685db20 == 0) {
    FUN_141786a30(&DAT_14685db20,&PTR_FUN_1462643d0);
  }
  return DAT_14685db20;
}



// FUNCTION 1407efe50 FUN_1407efe50 body=47 status=ok
// SIG undefined FUN_1407efe50(void)

longlong FUN_1407efe50(void)

{
  if (DAT_14685db28 == 0) {
    FUN_141786a30(&DAT_14685db28,&PTR_FUN_146264450);
  }
  return DAT_14685db28;
}



// FUNCTION 1407efe80 FUN_1407efe80 body=47 status=ok
// SIG undefined FUN_1407efe80(void)

longlong FUN_1407efe80(void)

{
  if (DAT_14685db30 == 0) {
    FUN_141786a30(&DAT_14685db30,&PTR_FUN_146264490);
  }
  return DAT_14685db30;
}



// FUNCTION 1407efeb0 FUN_1407efeb0 body=53 status=ok
// SIG undefined FUN_1407efeb0(void)

void FUN_1407efeb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440f0a58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407efef0 FUN_1407efef0 body=53 status=ok
// SIG undefined FUN_1407efef0(void)

void FUN_1407efef0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1440f0b70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407eff40 FUN_1407eff40 body=162 status=ok
// SIG undefined FUN_1407eff40(void)

longlong FUN_1407eff40(void)

{
  if (DAT_14685db68 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelSequence",L"GbxLevelSequencePlayer",&DAT_14685db68,FUN_1407f1810
                  ,0x8a8,0x10000000,0,L"Engine",&LAB_1407f0380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407f17c0,&LAB_140447700,0);
  }
  return DAT_14685db68;
}



// FUNCTION 1407efff0 FUN_1407efff0 body=47 status=ok
// SIG undefined FUN_1407efff0(void)

longlong FUN_1407efff0(void)

{
  if (DAT_14685db60 == 0) {
    FUN_141786440(&DAT_14685db60,&PTR_FUN_1440efff0);
  }
  return DAT_14685db60;
}



// FUNCTION 1407f0020 FUN_1407f0020 body=47 status=ok
// SIG undefined FUN_1407f0020(void)

longlong FUN_1407f0020(void)

{
  if (DAT_14685db48 == 0) {
    FUN_141786a30(&DAT_14685db48,&PTR_FUN_146264b70);
  }
  return DAT_14685db48;
}



// FUNCTION 1407f0050 FUN_1407f0050 body=47 status=ok
// SIG undefined FUN_1407f0050(void)

longlong FUN_1407f0050(void)

{
  if (DAT_14685db50 == 0) {
    FUN_141786a30(&DAT_14685db50,&PTR_FUN_146264c00);
  }
  return DAT_14685db50;
}



// FUNCTION 1407f0080 FUN_1407f0080 body=47 status=ok
// SIG undefined FUN_1407f0080(void)

longlong FUN_1407f0080(void)

{
  if (DAT_14685db58 == 0) {
    FUN_141786a30(&DAT_14685db58,&PTR_FUN_146264c40);
  }
  return DAT_14685db58;
}



// FUNCTION 1407f00c0 FUN_1407f00c0 body=162 status=ok
// SIG undefined FUN_1407f00c0(void)

longlong FUN_1407f00c0(void)

{
  if (DAT_14685db98 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelSequence",L"GbxLevelSequenceThrottleLibrary",&DAT_14685db98,
                  FUN_1407f1840,0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_14685db98;
}



// FUNCTION 1407f0170 FUN_1407f0170 body=47 status=ok
// SIG undefined FUN_1407f0170(void)

longlong FUN_1407f0170(void)

{
  if (DAT_14685db90 == 0) {
    FUN_141786440(&DAT_14685db90,&PTR_FUN_1440f02e0);
  }
  return DAT_14685db90;
}



// FUNCTION 1407f01a0 FUN_1407f01a0 body=47 status=ok
// SIG undefined FUN_1407f01a0(void)

longlong FUN_1407f01a0(void)

{
  if (DAT_14685db70 == 0) {
    FUN_141786a30(&DAT_14685db70,&PTR_FUN_146264d20);
  }
  return DAT_14685db70;
}



// FUNCTION 1407f01d0 FUN_1407f01d0 body=47 status=ok
// SIG undefined FUN_1407f01d0(void)

longlong FUN_1407f01d0(void)

{
  if (DAT_14685db78 == 0) {
    FUN_141786a30(&DAT_14685db78,&PTR_FUN_146264de0);
  }
  return DAT_14685db78;
}



// FUNCTION 1407f0200 FUN_1407f0200 body=47 status=ok
// SIG undefined FUN_1407f0200(void)

longlong FUN_1407f0200(void)

{
  if (DAT_14685db80 == 0) {
    FUN_141786a30(&DAT_14685db80,&PTR_FUN_146264ea0);
  }
  return DAT_14685db80;
}



// FUNCTION 1407f0230 FUN_1407f0230 body=47 status=ok
// SIG undefined FUN_1407f0230(void)

longlong FUN_1407f0230(void)

{
  if (DAT_14685db88 == 0) {
    FUN_141786a30(&DAT_14685db88,&PTR_FUN_146264f20);
  }
  return DAT_14685db88;
}



// FUNCTION 1407f0270 FUN_1407f0270 body=162 status=ok
// SIG undefined FUN_1407f0270(void)

longlong FUN_1407f0270(void)

{
  if (DAT_14685dba8 == 0) {
    FUN_14171ccd0(L"/Script/GbxLevelSequence",L"GbxMovieSceneBindingOverrides",&DAT_14685dba8,
                  FUN_140447710,0x98,0x10000000,0,L"Engine",FUN_1407f03a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407f17d0,&LAB_140447700,0);
  }
  return DAT_14685dba8;
}



// FUNCTION 1407f0350 FUN_1407f0350 body=41 status=ok
// SIG undefined FUN_1407f0350(void)

void FUN_1407f0350(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    ULevelSequence::ULevelSequence(puVar1,param_1);
    *puVar1 = &PTR_FUN_1440f06e0;
  }
  return;
}



// FUNCTION 1407f03a0 FUN_1407f03a0 body=52 status=ok
// SIG undefined FUN_1407f03a0(void)

void FUN_1407f03a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UMovieSceneBindingOverrides::UMovieSceneBindingOverrides(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1440f0e00;
    puVar1[5] = &PTR_LAB_1440f1078;
  }
  return;
}



// FUNCTION 1407f03e0 TIterator body=236 status=ok
// SIG undefined TIterator(void)

longlong *
TSparseArray<TSetElement<int>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>::
TIterator::TIterator(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int local_28;
  uint uStack_24;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_2 + 0x28);
  local_28 = 0;
  uStack_24 = 1;
  iStack_14 = 0;
  iStack_10 = 0;
  if (iVar1 != 0) {
    puVar6 = *(uint **)(param_2 + 0x20);
    if (*(uint **)(param_2 + 0x20) == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 0x10);
    }
    uVar2 = *puVar6;
    iStack_10 = 0;
    local_28 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_28;
      iStack_10 = iStack_10 + 0x20;
      iVar5 = local_28 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_28;
      local_28 = iVar5;
      if (bVar3) goto LAB_1407f04a4;
      uVar2 = puVar6[lVar4 + 1];
    }
    uStack_24 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_24 != 0) {
      for (; uStack_24 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_24 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_14 = (iStack_10 - iVar5) + 0x1f;
    if (iVar1 < iStack_14) {
LAB_1407f04a4:
      iStack_14 = iVar1;
    }
  }
  *param_1 = param_2;
  param_1[1] = CONCAT44(uStack_24,local_28);
  param_1[2] = param_2 + 0x10;
  param_1[3] = CONCAT44(iStack_14,0xffffffff);
  param_1[4] = CONCAT44(uStack_c,iStack_10);
  return param_1;
}



// FUNCTION 1407f04d0 ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407f0540 ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=397 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1407f0601;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    if (iVar2 < iStack_44) {
LAB_1407f0601:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)((longlong)iStack_1c * 0x38 + *param_1 + 0x20) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407f06d0 FUN_1407f06d0 body=100 status=ok
// SIG undefined FUN_1407f06d0(void)

void FUN_1407f06d0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407f0740 ~TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=199 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<TSetElement<int>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::TIterator::TIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack
                ((longlong)local_1c * 0x108 + 8 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<264,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407f0810 ~FMovieSceneEvaluationTemplate body=622 status=ok
// SIG undefined ~FMovieSceneEvaluationTemplate(void)

void FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  FUN_1407f06d0(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 400);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty((longlong *)(param_1 + 0xd0),0);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 200);
  plVar2 = *(longlong **)(param_1 + 0xc0);
  if (iVar3 != 0) {
    plVar1 = plVar2 + 0xc;
    do {
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FObjectReplicator_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar1 + -8);
      if (plVar1[-10] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
      plVar1 = plVar1 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0xc0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  iVar3 = *(int *)(param_1 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (iVar3 != 0) {
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0xb0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 1407f0a80 ~FMovieSceneEvaluationTrack body=322 status=ok
// SIG undefined ~FMovieSceneEvaluationTrack(void)

void FMovieSceneEvaluationTrack::~FMovieSceneEvaluationTrack(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 0xe0);
  if ((bVar1 & 1) != 0) {
    if ((bVar1 & 2) == 0) {
      puVar2 = *(undefined8 **)(param_1 + 0xb0);
    }
    else {
      puVar2 = (undefined8 *)(param_1 + 0xb0);
    }
    *(byte *)(param_1 + 0xe0) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 0xe0) & 2) == 0) {
      FMemory::Free(*(undefined8 *)(param_1 + 0xb0));
    }
  }
  iVar6 = *(int *)(param_1 + 0xa8);
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  if (iVar6 != 0) {
    do {
      bVar1 = *(byte *)(puVar2 + 6);
      if ((bVar1 & 1) != 0) {
        puVar3 = puVar2;
        if ((bVar1 & 2) == 0) {
          puVar3 = (undefined8 *)*puVar2;
        }
        *(byte *)(puVar2 + 6) = bVar1 & 0xfe;
        (**(code **)*puVar3)(puVar3,0);
        if ((*(byte *)(puVar2 + 6) & 2) == 0) {
          FMemory::Free(*puVar2);
        }
      }
      puVar2 = puVar2 + 7;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0xa0);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free(puVar2);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 0x48);
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 0xb;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407f0bd0 FUN_1407f0bd0 body=270 status=ok
// SIG undefined FUN_1407f0bd0(void)

void FUN_1407f0bd0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FLevelSequenceObject>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x440,0);
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  FUN_1407f0f80((longlong *)(param_1 + 0x3a0),0);
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x350);
  FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(param_1 + 0x50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1407f0cf0 FUN_1407f0cf0 body=43 status=ok
// SIG undefined FUN_1407f0cf0(void)

undefined8 * FUN_1407f0cf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440f0a38;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1407f0d20 FUN_1407f0d20 body=52 status=ok
// SIG undefined FUN_1407f0d20(void)

undefined8 FUN_1407f0d20(undefined8 param_1,ulonglong param_2)

{
  FUN_1407f0bd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1407f0d60 `scalar_deleting_destructor' body=127 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneBindingOverrides::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_1440f0a38;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1407f0e20 FUN_1407f0e20 body=257 status=ok
// SIG undefined FUN_1407f0e20(void)

undefined8 FUN_1407f0e20(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x10);
    do {
      uVar3 = *(undefined4 *)((longlong)puVar6 + -0xc);
      uVar4 = *(undefined4 *)(puVar6 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar6 + -4);
      puVar1 = (undefined8 *)(param_2 + 4);
      *param_2 = *(undefined4 *)(puVar6 + -2);
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      if (puVar1 != puVar6) {
        iVar2 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        param_2[6] = iVar2;
        if ((iVar2 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      *(undefined8 *)(param_2 + 8) = puVar6[2];
      param_2[10] = *(undefined4 *)(puVar6 + 3);
      param_2[0xb] = *(undefined4 *)((longlong)puVar6 + 0x1c);
      *(undefined8 *)(param_2 + 0xc) = puVar6[4];
      param_2[0xe] = *(undefined4 *)(puVar6 + 5);
      *(undefined8 *)(param_2 + 0xf) = *(undefined8 *)((longlong)puVar6 + 0x2c);
      param_2[0x11] = *(undefined4 *)((longlong)puVar6 + 0x34);
      puVar1 = puVar6 + 7;
      puVar6 = puVar6 + 10;
      *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x14;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407f0f80 FUN_1407f0f80 body=548 status=ok
// SIG undefined FUN_1407f0f80(void)

void FUN_1407f0f80(longlong *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar6 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar6 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar2) goto LAB_1407f1051;
      uVar3 = puVar8[lVar4 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_64 = (iStack_60 - iVar7) + 0x1f;
    if (iVar6 < iStack_64) {
LAB_1407f1051:
      iStack_64 = iVar6;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar6) {
    do {
      iVar6 = *(int *)(*param_1 + 0x18 + (longlong)iStack_3c * 0x28);
      lVar4 = *param_1 + (longlong)iStack_3c * 0x28;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (iVar6 != 0) {
        do {
          if (plVar5[5] != 0) {
            FMemory::Free();
          }
          if (plVar5[3] != 0) {
            FMemory::Free();
          }
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 7;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        plVar5 = *(longlong **)(lVar4 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar3 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1407f11b0 Empty body=505 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint *puVar9;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar5 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar4) goto LAB_1407f1281;
      uVar5 = puVar9[lVar6 + 1];
    }
    uStack_64 = -uVar5 & uVar5;
    iVar8 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_54 = (iStack_50 - iVar8) + 0x1f;
    if (iVar3 < iStack_54) {
LAB_1407f1281:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      lVar6 = (longlong)iStack_2c * 0xb8 + *param_1;
      bVar2 = *(byte *)(lVar6 + 0x80);
      if ((bVar2 & 1) != 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x70);
        if ((bVar2 & 2) == 0) {
          puVar7 = *(undefined8 **)(lVar6 + 0x70);
        }
        *(byte *)(lVar6 + 0x80) = bVar2 & 0xfe;
        (**(code **)*puVar7)(puVar7,0);
        if ((*(byte *)(lVar6 + 0x80) & 2) == 0) {
          FMemory::Free(*(undefined8 *)(lVar6 + 0x70));
        }
      }
      if (*(longlong *)(lVar6 + 0x10) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1407f13b0 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FLevelSequenceObject>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_1407f1481;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1407f1481:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      plVar6 = (longlong *)((longlong)iStack_2c * 0x50 + *param_1);
      if (plVar6[6] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1407f1580 FUN_1407f1580 body=6 status=ok
// SIG undefined FUN_1407f1580(void)

undefined8 FUN_1407f1580(void)

{
  return 0xd7186618;
}



// FUNCTION 1407f1590 FUN_1407f1590 body=6 status=ok
// SIG undefined FUN_1407f1590(void)

undefined8 FUN_1407f1590(void)

{
  return 0x3634f7dd;
}



// FUNCTION 1407f15a0 Serialize body=7 status=ok
// SIG undefined Serialize(void)

void FOutputDevice::Serialize(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001407f15a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 1407f15f0 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<264,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x108,0);
    iVar3 = (int)(uVar1 / 0x108);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x108,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1407f1670 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
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



// FUNCTION 1407f16f0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xb8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xb8,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 1407f17b0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UPhysicsConstraintComponent::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407f17e0 FUN_1407f17e0 body=34 status=ok
// SIG undefined FUN_1407f17e0(void)

void FUN_1407f17e0(void)

{
  undefined8 uVar1;
  
  uVar1 = UScrollBar::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPlayRate_1440f0c90,0x10);
  return;
}



// FUNCTION 1407f1810 FUN_1407f1810 body=34 status=ok
// SIG undefined FUN_1407f1810(void)

void FUN_1407f1810(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407eff40();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CreateGbxLevelSequencePlayer_1440f0d90,3)
  ;
  return;
}



// FUNCTION 1407f1840 FUN_1407f1840 body=34 status=ok
// SIG undefined FUN_1407f1840(void)

void FUN_1407f1840(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407f00c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearLimitGroup_1440f0dc0,4);
  return;
}



// FUNCTION 1407f1870 FUN_1407f1870 body=113 status=ok
// SIG undefined FUN_1407f1870(void)

void FUN_1407f1870(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685daa8 == 0) {
    if (DAT_14685da90 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_14685da90,&PTR_s__Script_GbxLevelSequence_1440f0a10);
    }
    lVar1 = DAT_14685da90;
    uVar2 = FUN_1407f1580();
    DAT_14685daa8 = GetStaticStruct(FUN_1407f19d0,lVar1,L"GbxLevelSequenceBindingSlot",0x50,uVar2);
  }
  return;
}



// FUNCTION 1407f18f0 FUN_1407f18f0 body=113 status=ok
// SIG undefined FUN_1407f18f0(void)

void FUN_1407f18f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685da98 == 0) {
    if (DAT_14685da90 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_14685da90,&PTR_s__Script_GbxLevelSequence_1440f0a10);
    }
    lVar1 = DAT_14685da90;
    uVar2 = FUN_1407f1590();
    DAT_14685da98 =
         GetStaticStruct(FUN_1407f1a00,lVar1,L"GbxLevelSequenceBoundActorSlot",0x18,uVar2);
  }
  return;
}



// FUNCTION 1407f1970 FUN_1407f1970 body=47 status=ok
// SIG undefined FUN_1407f1970(void)

longlong FUN_1407f1970(void)

{
  if (DAT_14685da80 == 0) {
    FUN_141786440(&DAT_14685da80,&PTR_GetPrivateStaticClass_1440ef260);
  }
  return DAT_14685da80;
}



// FUNCTION 1407f19a0 FUN_1407f19a0 body=47 status=ok
// SIG undefined FUN_1407f19a0(void)

longlong FUN_1407f19a0(void)

{
  if (DAT_14685dba0 == 0) {
    FUN_141786440(&DAT_14685dba0,&PTR_FUN_1440f0540);
  }
  return DAT_14685dba0;
}



// FUNCTION 1407f19d0 FUN_1407f19d0 body=47 status=ok
// SIG undefined FUN_1407f19d0(void)

longlong FUN_1407f19d0(void)

{
  if (DAT_14685dab0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dab0,&PTR_FUN_146263ee0);
  }
  return DAT_14685dab0;
}



// FUNCTION 1407f1a00 FUN_1407f1a00 body=47 status=ok
// SIG undefined FUN_1407f1a00(void)

longlong FUN_1407f1a00(void)

{
  if (DAT_14685daa0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685daa0,&PTR_FUN_146263c90);
  }
  return DAT_14685daa0;
}



// FUNCTION 1407f1a30 FUN_1407f1a30 body=112 status=ok
// SIG undefined FUN_1407f1a30(void)

void FUN_1407f1a30(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_1407eaec0(local_res10[0]);
  return;
}



// FUNCTION 1407f1aa0 FUN_1407f1aa0 body=643 status=ok
// SIG undefined FUN_1407f1aa0(void)

void FUN_1407f1aa0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38;
  
  local_d8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
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
  bVar8 = local_res10[0] != 0;
  local_c4 = 0x3f800000;
  local_bc = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b2 = 0;
  local_b0 = 0;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_res18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_74 = local_c4;
  puVar7 = &local_res18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  local_6c = local_bc;
  local_78 = local_c8;
  local_70 = local_c0;
  local_68 = (undefined1)local_b8;
  local_67 = local_b8._1_1_;
  local_66 = local_b8._2_1_;
  local_65 = local_b8._3_1_;
  local_64 = (undefined1)local_b4;
  local_63 = local_b4._1_1_;
  local_62 = local_b2;
  local_60 = local_b0;
  local_58 = local_a8;
  local_50 = 0;
  if (local_a8 != 0) {
    local_50 = uStack_a0;
  }
  local_48 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_40 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  local_38 = local_88;
  uVar6 = FUN_1407eaf80(local_d8[0],local_res20,bVar8,&local_78,puVar7);
  plVar5 = plStack_90;
  *param_3 = uVar6;
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1407f1d30 FUN_1407f1d30 body=45 status=ok
// SIG undefined FUN_1407f1d30(void)

void FUN_1407f1d30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407ebd70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407f1d80 FUN_1407f1d80 body=43 status=ok
// SIG undefined FUN_1407f1d80(void)

void FUN_1407f1d80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407ec0d0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407f1db0 FUN_1407f1db0 body=43 status=ok
// SIG undefined FUN_1407f1db0(void)

void FUN_1407f1db0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407ec100();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407f1de0 FUN_1407f1de0 body=43 status=ok
// SIG undefined FUN_1407f1de0(void)

void FUN_1407f1de0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407ec1f0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407f1e10 FUN_1407f1e10 body=43 status=ok
// SIG undefined FUN_1407f1e10(void)

void FUN_1407f1e10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1407ec220();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407f1e40 FUN_1407f1e40 body=175 status=ok
// SIG undefined FUN_1407f1e40(void)

void FUN_1407f1e40(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
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
  FUN_1407ec250(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407f2010 FUN_1407f2010 body=126 status=ok
// SIG undefined FUN_1407f2010(void)

void FUN_1407f2010(undefined8 param_1,longlong param_2)

{
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
  FUN_1407ed950(param_1,local_res10[0]);
  return;
}



// FUNCTION 1407f2090 FUN_1407f2090 body=123 status=ok
// SIG undefined FUN_1407f2090(void)

void FUN_1407f2090(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  FUN_1407ef0b0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1407f2110 FUN_1407f2110 body=127 status=ok
// SIG undefined FUN_1407f2110(void)

void FUN_1407f2110(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1407ef100(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407f21b0 FUN_1407f21b0 body=112 status=ok
// SIG undefined FUN_1407f21b0(void)

void FUN_1407f21b0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_1407ef9a0(local_res10[0]);
  return;
}



// FUNCTION 1407f2220 FUN_1407f2220 body=1027 status=ok
// SIG undefined FUN_1407f2220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407f2220(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  puVar7 = (undefined8 *)0x0;
  puVar4 = puVar7;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__1440f3428;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 2));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 2),4000);
    puVar4 = puVar3;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  puVar3 = (undefined8 *)operator_new(0x60);
  puVar4 = puVar7;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_1440f33c0;
    uVar8 = uRam000000014685dbcc;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    *(uint *)((longlong)puVar3 + 0x2c) = uVar8;
    puVar3[6] = 0;
    puVar3[7] = 0;
    uVar8 = uRam000000014685dbc4 & uRam000000014685dbd4;
    uVar9 = uRam000000014685dbc8 & uRam000000014685dbd8;
    uVar10 = uRam000000014685dbcc & uRam000000014685dbdc;
    *(uint *)(puVar3 + 8) = _DAT_14685dbc0 & _DAT_14685dbd0;
    *(uint *)((longlong)puVar3 + 0x44) = uVar8;
    *(uint *)(puVar3 + 9) = uVar9;
    *(uint *)((longlong)puVar3 + 0x4c) = uVar10;
    *(undefined4 *)(puVar3 + 10) = 0;
    puVar4 = puVar3;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  puVar4 = (undefined8 *)operator_new(8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1440f3418;
    puVar7 = puVar4;
  }
  local_48 = (undefined4)*(undefined8 *)(param_1 + 0x18);
  uStack_44 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  uStack_40 = SUB84(puVar7,0);
  uStack_3c = (undefined4)((ulonglong)puVar7 >> 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  local_58 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = 0;
  uStack_2c = 0;
  cVar2 = FUN_1438f1890(&local_38);
  *(char *)(param_1 + 8) = cVar2;
  if (cVar2 == '\0') {
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)&LAB_1407f8100;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535730,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar1 = DAT_146535738;
    lVar6 = (longlong)DAT_146535738;
    DAT_146535738 = DAT_146535738 + 1;
    if (DAT_14653573c < DAT_146535738) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535730,iVar1);
    }
    puVar7 = (undefined8 *)(lVar6 * 0x10 + _DAT_146535730);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)&LAB_1407fab50;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar1 = DAT_1465357b0;
    lVar6 = (longlong)DAT_1465357b0;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
    }
    puVar7 = (undefined8 *)(lVar6 * 0x10 + DAT_1465357a8);
    *puVar7 = plVar5;
    *(undefined4 *)(puVar7 + 1) = 3;
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar5 == (longlong *)0x0) {
    if ((DAT_1468537d8 != 0) && (DAT_1468537d0 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468537d0 + 0x28))(DAT_1468537d0,0);
      if (DAT_1468537d0 != (longlong *)0x0) {
        DAT_1468537d0 = (longlong *)FMemory::Realloc(DAT_1468537d0,0,0);
      }
      DAT_1468537d8 = 0;
    }
  }
  else {
    *plVar5 = (longlong)&PTR_GetPoolName_1440f3458;
    plVar5[1] = (longlong)FUN_1407f64f0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[3] = lVar6;
    (**(code **)(*plVar5 + 0x30))(plVar5,&DAT_1468537d0);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar6 = FMemory::Realloc(plVar5,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar5 == (longlong *)0x0) {
    if ((DAT_1468537e8 != 0) && (DAT_1468537e0 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468537e0 + 0x28))(DAT_1468537e0,0);
      if (DAT_1468537e0 != (longlong *)0x0) {
        DAT_1468537e0 = (longlong *)FMemory::Realloc(DAT_1468537e0,0,0);
      }
      DAT_1468537e8 = 0;
    }
  }
  else {
    *plVar5 = (longlong)&PTR_GetPoolName_1440f3498;
    plVar5[1] = (longlong)FUN_1407fa970;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[3] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_1440f34e0;
    FUN_1407f5e70(plVar5,&DAT_1468537e0);
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar6 = FMemory::Realloc(plVar5,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  return;
}



// FUNCTION 1407f2630 FUN_1407f2630 body=278 status=ok
// SIG undefined FUN_1407f2630(void)

void FUN_1407f2630(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_140483870(&DAT_146535760,param_1);
  FUN_140483870(&DAT_1465357a8,param_1);
  if ((DAT_1468537d8 != 0) && (DAT_1468537d0 != (longlong *)0x0)) {
    (**(code **)(*DAT_1468537d0 + 0x28))(DAT_1468537d0,0);
    if (DAT_1468537d0 != (longlong *)0x0) {
      DAT_1468537d0 = (longlong *)FMemory::Realloc(DAT_1468537d0,0,0);
    }
    DAT_1468537d8 = 0;
  }
  if ((DAT_1468537e8 != 0) && (DAT_1468537e0 != (longlong *)0x0)) {
    (**(code **)(*DAT_1468537e0 + 0x28))(DAT_1468537e0,0);
    if (DAT_1468537e0 != (longlong *)0x0) {
      DAT_1468537e0 = (longlong *)FMemory::Realloc(DAT_1468537e0,0,0);
    }
    DAT_1468537e8 = 0;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
    ::Reset(&DAT_146264fe0);
    thunk_FUN_1438f15c0();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1407f2750 FUN_1407f2750 body=43 status=ok
// SIG undefined FUN_1407f2750(void)

undefined8 * FUN_1407f2750(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1407f2780 FUN_1407f2780 body=127 status=ok
// SIG undefined FUN_1407f2780(void)

undefined8 * FUN_1407f2780(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x48,param_1 + 2);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1440f3578;
    puVar2[8] = 0;
    puVar1 = *(undefined8 **)(param_2 + 0x38);
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = (**(code **)*puVar1)(puVar1,puVar2 + 1);
      puVar2[8] = uVar3;
    }
  }
  *param_1 = UE4Function_Private::
             TFunctionRefCaller<<lambda_1569b590b2c419e431e15d7b8a068bc3>,void___cdecl(void)>::Call;
  return param_1;
}



// FUNCTION 1407f2800 FUN_1407f2800 body=263 status=ok
// SIG undefined FUN_1407f2800(void)

void FUN_1407f2800(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar6 = (undefined4 *)(param_2 + 0xc);
    puVar5 = (undefined4 *)((longlong)param_1 + 0x3c);
    do {
      *param_1 = *(undefined8 *)(puVar6 + -3);
      *(undefined4 *)(param_1 + 1) = puVar6[-1];
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar5[-0xc] = *puVar6;
      puVar5[-0xb] = uVar2;
      puVar5[-10] = uVar3;
      puVar5[-9] = uVar4;
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar6 + 4);
      puVar5[-6] = puVar6[6];
      puVar5[-5] = puVar6[7];
      *(undefined8 *)(puVar5 + -3) = 0;
      iVar1 = puVar6[0xb];
      _Src = *(void **)(puVar6 + 9);
      puVar5[-1] = iVar1;
      if (iVar1 == 0) {
        *puVar5 = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar5 + -3,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + -3),_Src,(longlong)iVar1 << 2);
      }
      param_1 = param_1 + 8;
      puVar5 = puVar5 + 0x10;
      puVar6 = puVar6 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407f2910 FUN_1407f2910 body=246 status=ok
// SIG undefined FUN_1407f2910(void)

void FUN_1407f2910(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar3 = *param_1;
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_2 + 0x10);
    do {
      FString::FString(lVar3,puVar4 + -2);
      *(undefined8 *)(lVar3 + 0x10) = *puVar4;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      iVar2 = *(int *)(puVar4 + 2);
      _Src = (void *)puVar4[1];
      *(int *)(lVar3 + 0x20) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(lVar3 + 0x24) = 0;
      }
      else {
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(lVar3 + 0x18,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar3 + 0x18),_Src,(longlong)iVar2 * 0xc);
      }
      puVar1 = puVar4 + 3;
      puVar4 = puVar4 + 6;
      *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)puVar1;
      lVar3 = lVar3 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407f2a10 FUN_1407f2a10 body=759 status=ok
// SIG undefined FUN_1407f2a10(void)

int * FUN_1407f2a10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x50);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x50) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  *param_2 = iVar10;
  bVar13 = false;
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar10 * 0x50 + *param_1);
  lVar2 = *(longlong *)*param_3;
  *plVar11 = lVar2;
  plVar11[1] = 0;
  *(undefined4 *)((longlong)plVar11 + 0x14) = 0x3f800000;
  *(undefined4 *)(plVar11 + 3) = 0;
  *(undefined4 *)((longlong)plVar11 + 0x1c) = 0;
  *(undefined4 *)(plVar11 + 4) = 0;
  *(undefined4 *)(plVar11 + 2) = 0;
  *(undefined8 *)((longlong)plVar11 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar11 + 0x2c) = 1;
  plVar11[7] = 0;
  plVar11[8] = 0;
  *(undefined4 *)(plVar11 + 9) = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar10 != 1) {
    iVar9 = iVar12;
    if (iVar10 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar9 = iVar5;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x50) == lVar2) break;
          iVar5 = *(int *)(*param_1 + 0x48 + (longlong)iVar5 * 0x50);
          iVar9 = iVar12;
        } while (iVar5 != -1);
      }
    }
    bVar13 = iVar9 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar9 * 0x50 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x48);
      iVar10 = *param_2;
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x50) = iVar10;
      }
      puVar7 = (undefined4 *)((longlong)iVar10 * 0x50 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar7[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1407f2ce4;
    }
  }
  cVar4 = FUN_1407f59d0(param_1,iVar10,0);
  if (cVar4 == '\0') {
    uVar8 = (int)((ulonglong)*plVar11 >> 0x20) * 0x17 + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x4c) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 9) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1407f2ce4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1407f2d10 FUN_1407f2d10 body=655 status=ok
// SIG undefined FUN_1407f2d10(void)

int * FUN_1407f2d10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined4 local_40;
  
  iVar13 = -1;
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
    iVar9 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  *(uint *)((longlong)plVar12 + lVar4) =
       *(uint *)((longlong)plVar12 + lVar4) | 1 << ((byte)iVar10 & 0x1f);
  bVar14 = false;
  lVar6 = (longlong)iVar10 * 0x20;
  plVar12 = (longlong *)(*param_1 + lVar6);
  lVar1 = *(longlong *)*param_3;
  plVar12[1] = lVar4;
  *(undefined4 *)(plVar12 + 2) = local_40;
  *plVar12 = lVar1;
  *(undefined4 *)(plVar12 + 3) = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    iVar9 = iVar13;
    if (iVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)((longlong)iVar8 * 0x20 + *param_1) == lVar1) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar13;
        } while (iVar8 != -1);
      }
    }
    bVar14 = iVar9 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x20 + *param_1),plVar12,0x18);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar6 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar6 + 4 + lVar1) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      *(uint *)((longlong)plVar12 + lVar4) =
           *(uint *)((longlong)plVar12 + lVar4) & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1407f2f75;
    }
  }
  cVar3 = FUN_1407f5a80(param_1,iVar11,0);
  if (cVar3 == '\0') {
    uVar7 = (int)((ulonglong)*plVar12 >> 0x20) * 0x17 + (int)*plVar12 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar12 + 0x1c) = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1407f2f75:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 1407f2fa0 FUN_1407f2fa0 body=715 status=ok
// SIG undefined FUN_1407f2fa0(void)

int * FUN_1407f2fa0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *_Src;
  int iVar13;
  void *_Dst;
  bool local_res8;
  
  iVar9 = 1;
  iVar13 = -1;
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
    iVar7 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_res8 = false;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar10 & 0x1f);
  plVar6 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar10 * 0x20 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar6;
  _Src[2] = plVar6[1];
  plVar6[1] = 0;
  *plVar6 = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    lVar4 = *_Src;
    iVar8 = iVar13;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *param_1) == lVar4) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar13;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
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
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_1407f3242;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar13 = 0x20;
    if (uVar5 != 0) {
      iVar13 = 0x1f - iVar9;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*_Src >> 0x20) * 0x17 + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_1407f8e20(param_1);
  }
LAB_1407f3242:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1407f3270 FUN_1407f3270 body=200 status=ok
// SIG undefined FUN_1407f3270(void)

float * FUN_1407f3270(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float fStack_24;
  
  pfVar3 = (float *)*param_1;
  pfVar1 = pfVar3 + (longlong)*(int *)(param_1 + 1) * 3;
  if (pfVar3 != pfVar1) {
    uVar2 = *(undefined8 *)(*(longlong *)*param_2 + 0x2e0);
    fStack_24 = (float)((ulonglong)uVar2 >> 0x20);
    fVar5 = *(float *)(param_2[1] + 0x458) * *(float *)param_2[2];
    local_28 = (float)uVar2;
    do {
      fVar4 = pfVar3[2] - *(float *)(*(longlong *)*param_2 + 0x2e8);
      if ((pfVar3[1] - fStack_24) * (pfVar3[1] - fStack_24) +
          (*pfVar3 - local_28) * (*pfVar3 - local_28) + fVar4 * fVar4 < fVar5 * fVar5) {
        return pfVar3;
      }
      pfVar3 = pfVar3 + 3;
    } while (pfVar3 != pfVar1);
  }
  return (float *)0x0;
}



// FUNCTION 1407f3340 FUN_1407f3340 body=527 status=ok
// SIG undefined FUN_1407f3340(void)

int FUN_1407f3340(longlong *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar7 = 0;
  bVar10 = *(int *)*param_1 != *param_2;
  lVar6 = 0;
  iVar8 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar9 = iVar8 + 1;
    if (lVar6 < lVar3) {
      piVar2 = (int *)(lVar6 * 0x290 + *param_1);
      do {
        if (bVar10 != (*piVar2 != *param_2)) break;
        iVar9 = iVar9 + 1;
        lVar6 = lVar6 + 1;
        piVar2 = piVar2 + 0xa4;
      } while (lVar6 < lVar3);
    }
    iVar5 = iVar9 - iVar8;
    if (bVar10 == false) {
      if (iVar5 != 0) {
        plVar4 = (longlong *)((longlong)iVar8 * 0x290 + 0x278 + *param_1);
        do {
          *(undefined4 *)(plVar4 + 1) = 0;
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          FUN_1407f6050(plVar4 + -8,0);
          if (plVar4[-4] != 0) {
            FMemory::Free();
          }
          if (plVar4[-8] != 0) {
            FMemory::Free();
          }
          if (plVar4[-0xb] != 0) {
            FMemory::Free();
          }
          *(undefined4 *)(plVar4 + -0xc) = 0;
          if (plVar4[-0xd] != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (plVar4 + -0x15);
          if (plVar4[-0x36] != 0) {
            FMemory::Free();
          }
          FUN_1407f4240(plVar4 + -0x3e);
          if (plVar4[-0x40] != 0) {
            FMemory::Free();
          }
          if (plVar4[-0x42] != 0) {
            FMemory::Free();
          }
          TArray<FMorphTargetLODModel,FDefaultAllocator>::
          ~TArray<FMorphTargetLODModel,FDefaultAllocator>(plVar4 + -0x4e);
          plVar4 = plVar4 + 0x52;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      if (iVar7 != iVar8) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x290 + *param_1),
                   (void *)((longlong)iVar8 * 0x290 + *param_1),(longlong)iVar5 * 0x290);
      }
      iVar7 = iVar7 + iVar5;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar8 = iVar9;
    if (lVar3 <= lVar6) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar1 - iVar7;
    }
  } while( true );
}



// FUNCTION 1407f3550 FUN_1407f3550 body=80 status=ok
// SIG undefined FUN_1407f3550(void)

undefined8 * FUN_1407f3550(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(undefined4 *)(param_1 + 0x8b) = 0x43160000;
  *param_1 = &PTR__scalar_deleting_destructor__1440f2340;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  AActor::SetActorTickEnabled(param_1,1);
  return param_1;
}



// FUNCTION 1407f35a0 FUN_1407f35a0 body=160 status=ok
// SIG undefined FUN_1407f35a0(void)

undefined8 * FUN_1407f35a0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1428c1a80();
  *(undefined4 *)(param_1 + 0x92) = 0x43480000;
  *param_1 = &PTR_FUN_1440f2a28;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x93) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x94) = 0x443b8000;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 5;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  plVar1 = (longlong *)param_1[0x8e];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x638))(plVar1,0);
    FUN_1423974f0(param_1[0x8e],0);
    *(byte *)(param_1[0x8e] + 200) = *(byte *)(param_1[0x8e] + 200) | 4;
  }
  return param_1;
}



// FUNCTION 1407f3640 FUN_1407f3640 body=84 status=ok
// SIG undefined FUN_1407f3640(void)

undefined8 * FUN_1407f3640(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1428c1a80();
  plVar1 = (longlong *)param_1[0x8e];
  *param_1 = &PTR_FUN_1440f1c20;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x638))(plVar1,0);
    FUN_1423974f0(param_1[0x8e],0);
    *(byte *)(param_1[0x8e] + 200) = *(byte *)(param_1[0x8e] + 200) | 4;
  }
  return param_1;
}



// FUNCTION 1407f36a0 FUN_1407f36a0 body=130 status=ok
// SIG undefined FUN_1407f36a0(void)

undefined8 * FUN_1407f36a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TritonDataComponent0",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1407fb020();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  return param_1;
}



// FUNCTION 1407f3730 FUN_1407f3730 body=1041 status=ok
// SIG undefined FUN_1407f3730(void)

undefined4 * FUN_1407f3730(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  param_1[0x10] = param_2[0x10];
  uVar4 = *(undefined8 *)(param_2 + 0x13);
  *(undefined8 *)(param_1 + 0x11) = *(undefined8 *)(param_2 + 0x11);
  *(undefined8 *)(param_1 + 0x13) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x17);
  *(undefined8 *)(param_1 + 0x15) = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)(param_1 + 0x17) = uVar4;
  param_1[0x19] = param_2[0x19];
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_2 + 0x1e) = 0;
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  param_1[0x28] = param_2[0x28];
  uVar4 = *(undefined8 *)(param_2 + 0x2b);
  *(undefined8 *)(param_1 + 0x29) = *(undefined8 *)(param_2 + 0x29);
  *(undefined8 *)(param_1 + 0x2b) = uVar4;
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_2 + 0x32) = 0;
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  *(undefined8 *)(param_2 + 0x34) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  uVar4 = *(undefined8 *)(param_2 + 0x3f);
  *(undefined8 *)(param_1 + 0x3d) = *(undefined8 *)(param_2 + 0x3d);
  *(undefined8 *)(param_1 + 0x3f) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x43);
  *(undefined8 *)(param_1 + 0x41) = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)(param_1 + 0x43) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x47);
  *(undefined8 *)(param_1 + 0x45) = *(undefined8 *)(param_2 + 0x45);
  *(undefined8 *)(param_1 + 0x47) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x4b);
  *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)(param_1 + 0x4b) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x4f);
  *(undefined8 *)(param_1 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
  *(undefined8 *)(param_1 + 0x4f) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x53);
  *(undefined8 *)(param_1 + 0x51) = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(param_1 + 0x53) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x57);
  *(undefined8 *)(param_1 + 0x55) = *(undefined8 *)(param_2 + 0x55);
  *(undefined8 *)(param_1 + 0x57) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x5b);
  *(undefined8 *)(param_1 + 0x59) = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)(param_1 + 0x5b) = uVar4;
  param_1[0x5d] = param_2[0x5d];
  param_1[0x5e] = param_2[0x5e];
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = param_2[0x61];
  uVar4 = *(undefined8 *)(param_2 + 0x66);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x66) = uVar4;
  uVar1 = param_2[0x69];
  uVar2 = param_2[0x6a];
  uVar3 = param_2[0x6b];
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = uVar1;
  param_1[0x6a] = uVar2;
  param_1[0x6b] = uVar3;
  uVar1 = param_2[0x6d];
  uVar2 = param_2[0x6e];
  uVar3 = param_2[0x6f];
  param_1[0x6c] = param_2[0x6c];
  param_1[0x6d] = uVar1;
  param_1[0x6e] = uVar2;
  param_1[0x6f] = uVar3;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  param_1[0x80] = 0xffffffff;
  param_1[0x81] = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 0x74,param_2 + 0x74);
  if (*(longlong *)(param_2 + 0x84) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x82,param_2 + 0x82,4);
  }
  if (*(longlong *)(param_1 + 0x84) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_2 + 0x84) = 0;
  param_1[0x86] = param_2[0x86];
  param_2[0x86] = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  *(undefined8 *)(param_2 + 0x8a) = 0;
  param_1[0x8c] = param_2[0x8c];
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x96) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0xffffffff;
  param_1[0x9b] = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = 0;
  FUN_1407f4600(param_1 + 0x8e,param_2 + 0x8e);
  if (*(longlong *)(param_2 + 0x9e) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x9c,param_2 + 0x9c,4);
  }
  if (*(longlong *)(param_1 + 0x9e) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x9e) = *(undefined8 *)(param_2 + 0x9e);
  *(undefined8 *)(param_2 + 0x9e) = 0;
  param_1[0xa0] = param_2[0xa0];
  param_2[0xa0] = 0;
  param_1[0xa2] = param_2[0xa2];
  return param_1;
}



// FUNCTION 1407f3b50 FUN_1407f3b50 body=150 status=ok
// SIG undefined FUN_1407f3b50(void)

undefined8 * FUN_1407f3b50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  _Src = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[6],_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1407f3bf0 FUN_1407f3bf0 body=378 status=ok
// SIG undefined FUN_1407f3bf0(void)

undefined8 * FUN_1407f3bf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  FUN_1407f2910(param_1,*param_2,*(undefined4 *)(param_2 + 1),0,0);
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  param_1[4] = param_2[4];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  FString::FString(param_1 + 0xc,param_2 + 0xc);
  FString::FString(param_1 + 0xe,param_2 + 0xe);
  param_1[0x10] = 0;
  FUN_1407f2800(param_1 + 0x10,param_2[0x10],*(undefined4 *)(param_2 + 0x11),0,0);
  FUN_1407f3b50(param_1 + 0x12,param_2 + 0x12);
  uVar4 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar4;
  param_1[0x1c] = param_2[0x1c];
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)((longlong)param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar4;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x104);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar4;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x114);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined8 *)((longlong)param_1 + 0x114) = uVar4;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x124);
  *(undefined8 *)((longlong)param_1 + 0x11c) = *(undefined8 *)((longlong)param_2 + 0x11c);
  *(undefined8 *)((longlong)param_1 + 0x124) = uVar4;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x134);
  *(undefined8 *)((longlong)param_1 + 300) = *(undefined8 *)((longlong)param_2 + 300);
  *(undefined8 *)((longlong)param_1 + 0x134) = uVar4;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x144) = uVar4;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x154);
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  *(undefined8 *)((longlong)param_1 + 0x154) = uVar4;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x164);
  *(undefined8 *)((longlong)param_1 + 0x15c) = *(undefined8 *)((longlong)param_2 + 0x15c);
  *(undefined8 *)((longlong)param_1 + 0x164) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  return param_1;
}



// FUNCTION 1407f3d70 FUN_1407f3d70 body=247 status=ok
// SIG undefined FUN_1407f3d70(void)

undefined8 * FUN_1407f3d70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237f6c0(param_1,uVar1);
  *param_1 = &PTR_FUN_1440f16a8;
  param_1[5] = &PTR_LAB_1440f1bf0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x43aa0000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 3;
  *(undefined4 *)((longlong)param_1 + 0x36d) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0x371) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x375) = 0x101;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  return param_1;
}



// FUNCTION 1407f3e70 FUN_1407f3e70 body=233 status=ok
// SIG undefined FUN_1407f3e70(void)

undefined8 * FUN_1407f3e70(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  void *local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  FUN_141781840();
  *param_1 = &PTR_FUN_1440f3148;
  ppvVar1 = (void **)(param_1 + 5);
  *ppvVar1 = (void *)0x0;
  param_1[6] = 0;
  puVar2 = (undefined8 *)FPaths::ProjectContentDir(local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(&local_28,L"%sAudio/TritonData",puVar4);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  _Src = local_28;
  if (ppvVar1 != &local_28) {
    iVar3 = (int)local_20;
    *(int *)(param_1 + 6) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0x34) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_20 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,(longlong)iVar3 * 2);
    }
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return param_1;
}



// FUNCTION 1407f3f60 FUN_1407f3f60 body=300 status=ok
// SIG undefined FUN_1407f3f60(void)

void FUN_1407f3f60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x278);
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_1407f6050(plVar2 + -8,0);
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0xb] != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(plVar2 + -0xc) = 0;
      if (plVar2[-0xd] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar2 + -0x15);
      if (plVar2[-0x36] != 0) {
        FMemory::Free();
      }
      FUN_1407f4240(plVar2 + -0x3e);
      if (plVar2[-0x40] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0x42] != 0) {
        FMemory::Free();
      }
      TArray<FMorphTargetLODModel,FDefaultAllocator>::
      ~TArray<FMorphTargetLODModel,FDefaultAllocator>(plVar2 + -0x4e);
      plVar2 = plVar2 + 0x52;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1407f4090 FUN_1407f4090 body=420 status=ok
// SIG undefined FUN_1407f4090(void)

void FUN_1407f4090(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    piVar3 = (int *)(puVar5 + 0x11);
    do {
      iVar4 = piVar3[4];
      plVar1 = *(longlong **)(piVar3 + 2);
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = *(longlong **)(piVar3 + 2);
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = *piVar3;
      plVar1 = *(longlong **)(piVar3 + -2);
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = *(longlong **)(piVar3 + -2);
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (*(longlong *)(piVar3 + -6) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar3 + -10) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(piVar3 + -0xe) != 0) {
        FMemory::Free();
      }
      iVar4 = piVar3[-0x10];
      plVar1 = *(longlong **)(piVar3 + -0x12);
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = *(longlong **)(piVar3 + -0x12);
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(piVar3 + -0x16);
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(piVar3 + -0x1a);
      if (*(longlong *)(piVar3 + -0x1e) != 0) {
        FMemory::Free();
      }
      iVar4 = piVar3[-0x20];
      plVar1 = (longlong *)*puVar5;
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)*puVar5;
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      puVar5 = puVar5 + 0x15;
      piVar3 = piVar3 + 0x2a;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar5 = (undefined8 *)*param_1;
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar5);
  return;
}



// FUNCTION 1407f4240 FUN_1407f4240 body=95 status=ok
// SIG undefined FUN_1407f4240(void)

void FUN_1407f4240(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1407f42a0 FUN_1407f42a0 body=141 status=ok
// SIG undefined FUN_1407f42a0(void)

void FUN_1407f42a0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      if (*(longlong *)(lVar1 + 0xc0) != 0) {
        FMemory::Free();
      }
      FUN_1407f4240(lVar1 + 0x80);
      if (*(longlong *)(lVar1 + 0x70) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FMemory::Free();
      }
      TArray<FMorphTargetLODModel,FDefaultAllocator>::
      ~TArray<FMorphTargetLODModel,FDefaultAllocator>(lVar1);
      lVar1 = lVar1 + 0x178;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 1407f4330 ~TArray<FMorphTargetLODModel,FDefaultAllocator> body=100 status=ok
// SIG undefined ~TArray<FMorphTargetLODModel,FDefaultAllocator>(void)

void TArray<FMorphTargetLODModel,FDefaultAllocator>::~TArray<FMorphTargetLODModel,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[3] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1407f43a0 ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=248 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar4 = *(longlong **)((longlong)local_1c * 0x20 + *local_38 + 0x10);
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
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407f44a0 FUN_1407f44a0 body=220 status=ok
// SIG undefined FUN_1407f44a0(void)

void FUN_1407f44a0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x280) = 0;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  FUN_1407f6050(param_1 + 0x238,0);
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1d0);
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  FUN_1407f4240(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TArray<FMorphTargetLODModel,FDefaultAllocator>::~TArray<FMorphTargetLODModel,FDefaultAllocator>
            (param_1 + 8);
  return;
}



// FUNCTION 1407f4580 FUN_1407f4580 body=120 status=ok
// SIG undefined FUN_1407f4580(void)

void FUN_1407f4580(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0x290 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x290) {
    if (*(longlong *)(lVar1 + 0x1c8) != 0) {
      FUN_1438f16c0();
    }
  }
  FUN_1407f91a0(param_1,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  FUN_1407f3f60(param_1);
  return;
}



// FUNCTION 1407f4600 FUN_1407f4600 body=678 status=ok
// SIG undefined FUN_1407f4600(void)

longlong * FUN_1407f4600(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1407f46dd;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1407f46dd:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1407f4793;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1407f4793:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      if (*(longlong *)(*param_1 + 0x38 + (longlong)(int)uStack_3c * 0x50) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1407f48c0 FUN_1407f48c0 body=101 status=ok
// SIG undefined FUN_1407f48c0(void)

undefined8 * FUN_1407f48c0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[8];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 1);
    param_1[8] = 0;
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1407f4930 FUN_1407f4930 body=33 status=ok
// SIG undefined FUN_1407f4930(void)

undefined8 FUN_1407f4930(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1407f4960 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong AMurnatanPlayerTargetVote::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 1407f49b0 FUN_1407f49b0 body=90 status=ok
// SIG undefined FUN_1407f49b0(void)

longlong FUN_1407f49b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b8);
  }
  return param_1;
}



// FUNCTION 1407f4a10 FUN_1407f4a10 body=73 status=ok
// SIG undefined FUN_1407f4a10(void)

longlong FUN_1407f4a10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1407f4a60 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMediaTextureClockSink::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1440f3428;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  *param_1 = TritonRuntime::ITritonMemHook::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1407f4ab0 FUN_1407f4ab0 body=97 status=ok
// SIG undefined FUN_1407f4ab0(void)

undefined8 * FUN_1407f4ab0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1440f3408;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1407f4b20 FUN_1407f4b20 body=164 status=ok
// SIG undefined FUN_1407f4b20(void)

undefined8 * FUN_1407f4b20(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_1440f33d0;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
    }
    if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[5] = 0;
    }
    param_1[2] = 0;
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = TritonRuntime::ITritonIOHook::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1407f4bd0 FUN_1407f4bd0 body=43 status=ok
// SIG undefined FUN_1407f4bd0(void)

undefined8 * FUN_1407f4bd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1407f4c00 FUN_1407f4c00 body=43 status=ok
// SIG undefined FUN_1407f4c00(void)

undefined8 * FUN_1407f4c00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = TritonRuntime::ITritonIOHook::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1407f4c30 FUN_1407f4c30 body=43 status=ok
// SIG undefined FUN_1407f4c30(void)

undefined8 * FUN_1407f4c30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = TritonRuntime::ITritonMemHook::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1407f4c60 FUN_1407f4c60 body=228 status=ok
// SIG undefined FUN_1407f4c60(void)

longlong FUN_1407f4c60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  FUN_1407f4090(param_1 + 0x348);
  FUN_1407f4090(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x330) = 0;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x2e8,0);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FMemory::Free();
  }
  FUN_1407f42a0(param_1 + 0x2d0);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x410);
  }
  return param_1;
}



// FUNCTION 1407f4d50 FUN_1407f4d50 body=27 status=ok
// SIG undefined FUN_1407f4d50(void)

void FUN_1407f4d50(undefined8 param_1)

{
  FUN_1407fa7c0();
  FUN_1423850d0(param_1);
  return;
}



// FUNCTION 1407f4d70 FUN_1407f4d70 body=74 status=ok
// SIG undefined FUN_1407f4d70(void)

void FUN_1407f4d70(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + 8);
  LOCK();
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    *puVar1 = 0;
    uVar2 = 0;
  }
  UNLOCK();
  while ((uVar2 >> 0x1a & 1) == 0) {
    FUN_1416b1760(0);
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
      uVar2 = 0;
    }
    UNLOCK();
  }
  return;
}



// FUNCTION 1407f4dc0 FUN_1407f4dc0 body=1148 status=ok
// SIG undefined FUN_1407f4dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407f4dc0(undefined8 param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 *_Src;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 *local_180;
  undefined1 local_178;
  char local_168;
  int local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158 [2];
  int local_150 [2];
  undefined8 local_148;
  undefined4 local_140;
  longlong local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 *local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_168 = param_3;
  FUN_1407f6c50(&local_108,param_1);
  if (local_108 != (longlong *)0x0) {
    lVar12 = *local_108;
    lVar11 = (longlong)(int)local_108[1] * 0x290 + lVar12;
    for (; lVar12 != lVar11; lVar12 = lVar12 + 0x290) {
      iVar13 = 0;
      if (*(longlong *)(lVar12 + 0x1c8) != 0) {
        local_150[0] = 0;
        local_164 = 0;
        FUN_1438f17a0(*(longlong *)(lVar12 + 0x1c8),local_150,&local_164);
        if (param_3 == '\0') {
          local_164 = local_150[0];
          local_150[0] = 0;
        }
        iVar4 = local_164;
        iVar9 = (int)param_2[1];
        if (iVar9 != 0) {
          plVar8 = (longlong *)(*param_2 + 0x30);
          do {
            if (*plVar8 != 0) {
              FMemory::Free();
            }
            plVar8 = plVar8 + 8;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) != iVar4) {
          TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_2,iVar4);
        }
        param_3 = local_168;
        if (0 < local_164) {
          do {
            local_198 = (undefined8 *)local_158;
            local_160 = DAT_1468b5d90;
            local_158[0] = DAT_1468b5d98;
            uStack_15c = DAT_1468b5d94;
            FUN_1438f1840(*(undefined8 *)(lVar12 + 0x1c8),local_150[0] + iVar13,&local_160,
                          &uStack_15c);
            local_180 = &local_f8;
            local_178 = 1;
            local_188 = local_158[0];
            local_190 = uStack_15c;
            local_198 = (undefined8 *)CONCAT44(local_198._4_4_,local_160);
            local_f8 = 0;
            uStack_f0 = 0;
            local_e8 = 0;
            cVar5 = FUN_1438f1b50(*(undefined8 *)(lVar12 + 0x1c8));
            if (cVar5 != '\0') {
              local_148 = CONCAT44(uStack_15c,local_160);
              local_140 = local_158[0];
              local_198 = &local_d8;
              uStack_134 = CONCAT44(uStack_f0._4_4_,(float)uStack_f0 + local_f8._4_4_);
              local_124 = 1;
              local_118 = (undefined8 *)0x0;
              local_110 = 0;
              local_13c = (ulonglong)(uint)local_f8._4_4_ << 0x20;
              local_12c = 0;
              cVar5 = FUN_1438f16f0(*(undefined8 *)(lVar12 + 0x1c8),local_160,uStack_15c,
                                    local_158[0]);
              if (cVar5 != '\0') {
                uVar6 = local_110._4_4_;
                bVar14 = local_110._4_4_ != 0;
                iVar9 = 0;
                if (((longlong)local_110 < 0) &&
                   (local_110 = (ulonglong)local_110._4_4_ << 0x20, bVar14)) {
                  TArray<float,FDefaultAllocator>::ResizeTo(&local_118);
                  uVar6 = local_110._4_4_;
                  iVar9 = (int)local_110;
                }
                local_110 = CONCAT44(local_110._4_4_,iVar9 + 0x20);
                if ((int)uVar6 < iVar9 + 0x20) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_118);
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)local_118 + (longlong)iVar9 * 4),0,0x80);
                *local_118 = local_d8;
                local_118[1] = uStack_d0;
                local_118[2] = local_c8;
                local_118[3] = uStack_c0;
                local_118[4] = local_b8;
                local_118[5] = uStack_b0;
                local_118[6] = local_a8;
                local_118[7] = uStack_a0;
                local_118[8] = local_98;
                local_118[9] = uStack_90;
                local_118[10] = local_88;
                local_118[0xb] = uStack_80;
                *(undefined4 *)(local_118 + 0xc) = local_78;
                *(undefined4 *)((longlong)local_118 + 100) = uStack_74;
                *(undefined4 *)(local_118 + 0xd) = uStack_70;
                *(undefined4 *)((longlong)local_118 + 0x6c) = uStack_6c;
                local_118[0xe] = local_68;
                local_118[0xf] = uStack_60;
              }
              local_198 = (undefined8 *)((longlong)&local_124 + 4);
              FUN_1438f17c0(*(undefined8 *)(lVar12 + 0x1c8),local_160,uStack_15c,local_158[0]);
              iVar9 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar9 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
                ResizeGrow(param_2,iVar9);
              }
              _Src = local_118;
              puVar7 = (undefined8 *)((longlong)iVar9 * 0x40 + *param_2);
              *puVar7 = local_148;
              puVar1 = puVar7 + 6;
              *(undefined4 *)(puVar7 + 1) = local_140;
              *(longlong *)((longlong)puVar7 + 0xc) = local_13c;
              *(undefined8 *)((longlong)puVar7 + 0x14) = uStack_134;
              *(undefined8 *)((longlong)puVar7 + 0x1c) = local_12c;
              *(undefined4 *)((longlong)puVar7 + 0x24) = (undefined4)local_124;
              *(undefined4 *)(puVar7 + 5) = local_124._4_4_;
              *puVar1 = 0;
              lVar10 = (longlong)(int)local_110;
              *(int *)(puVar7 + 7) = (int)local_110;
              if ((int)local_110 == 0) {
                *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
              }
              else {
                TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,local_110 & 0xffffffff,0);
                _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,lVar10 << 2);
              }
              if (local_118 != (undefined8 *)0x0) {
                FMemory::Free();
              }
            }
            iVar13 = iVar13 + 1;
            param_3 = local_168;
          } while (iVar13 < local_164);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_108 + 4));
  }
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_100 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar13 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return;
}



// FUNCTION 1407f5240 FUN_1407f5240 body=1771 status=ok
// SIG undefined FUN_1407f5240(void)

void FUN_1407f5240(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined8 *local_res18;
  ulonglong in_stack_fffffffffffffdb8;
  void *local_238;
  int local_230;
  undefined4 local_22c;
  void *local_228;
  int local_220;
  undefined8 local_218 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  int local_1e0;
  ulonglong local_1dc;
  undefined8 uStack_1d4;
  int local_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int local_1bc;
  longlong local_1b8 [2];
  longlong local_1a8;
  int local_1a0;
  undefined8 local_198 [2];
  undefined1 local_188 [48];
  longlong local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int local_a8;
  undefined8 local_98;
  longlong local_68 [6];
  
  FUN_1407fa7c0();
  puVar9 = *(undefined8 **)(param_1 + 0x2d0);
  local_res18 = puVar9 + (longlong)*(int *)(param_1 + 0x2d8) * 0x2f;
  if (puVar9 != local_res18) {
    piVar6 = (int *)((longlong)puVar9 + 0xcc);
    do {
      FUN_1407f7720(&local_228,puVar9);
      local_218[0] = 0;
      in_stack_fffffffffffffdb8 = in_stack_fffffffffffffdb8 & 0xffffffff00000000;
      FUN_1407f2910(local_218,*puVar9,piVar6[-0x31],0,in_stack_fffffffffffffdb8);
      local_208 = *(undefined8 *)(piVar6 + -0x2f);
      uStack_200 = *(undefined8 *)(piVar6 + -0x2d);
      local_1e0 = piVar6[-0x25];
      local_1f8 = *(undefined8 *)(piVar6 + -0x2b);
      local_1f0 = *(undefined8 *)(piVar6 + -0x29);
      uStack_1e8 = *(undefined8 *)(piVar6 + -0x27);
      local_1bc = piVar6[-0x1c];
      local_1dc = *(ulonglong *)(piVar6 + -0x24);
      uStack_1d4 = *(undefined8 *)(piVar6 + -0x22);
      local_1cc = piVar6[-0x20];
      iStack_1c8 = piVar6[-0x1f];
      iStack_1c4 = piVar6[-0x1e];
      iStack_1c0 = piVar6[-0x1d];
      FString::FString(local_1b8,piVar6 + -0x1b);
      FString::FString(&local_1a8,piVar6 + -0x17);
      local_198[0] = 0;
      FUN_1407f2800(local_198,*(undefined8 *)(piVar6 + -0x13),piVar6[-0x11],0,
                    in_stack_fffffffffffffdb8 & 0xffffffff00000000);
      FUN_1407f3b50(local_188,piVar6 + -0xf);
      local_148 = *(undefined8 *)(piVar6 + 1);
      uStack_140 = *(undefined8 *)(piVar6 + 3);
      local_130 = (undefined1)piVar6[7];
      local_138 = *(undefined8 *)(piVar6 + 5);
      local_ac = piVar6[0x28];
      local_a8 = piVar6[0x29];
      iStack_1c0 = CONCAT31(iStack_1c0._1_3_,1);
      local_1dc = local_1dc & 0xffffffffffffff00;
      local_12c = *(undefined8 *)(piVar6 + 8);
      uStack_124 = *(undefined8 *)(piVar6 + 10);
      local_11c = *(undefined8 *)(piVar6 + 0xc);
      uStack_114 = *(undefined8 *)(piVar6 + 0xe);
      local_10c = *(undefined8 *)(piVar6 + 0x10);
      uStack_104 = *(undefined8 *)(piVar6 + 0x12);
      local_fc = *(undefined8 *)(piVar6 + 0x14);
      uStack_f4 = *(undefined8 *)(piVar6 + 0x16);
      local_ec = *(undefined8 *)(piVar6 + 0x18);
      uStack_e4 = *(undefined8 *)(piVar6 + 0x1a);
      local_dc = *(undefined8 *)(piVar6 + 0x1c);
      uStack_d4 = *(undefined8 *)(piVar6 + 0x1e);
      local_cc = *(undefined8 *)(piVar6 + 0x20);
      uStack_c4 = *(undefined8 *)(piVar6 + 0x22);
      local_bc = piVar6[0x24];
      iStack_b8 = piVar6[0x25];
      iStack_b4 = piVar6[0x26];
      iStack_b0 = piVar6[0x27];
      if (local_1a0 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_1a0 + -1;
      }
      lVar4 = (longlong)local_220;
      if ((local_220 != 0) || (iVar2 = 2, iVar5 == -1)) {
        iVar2 = 1;
      }
      local_238 = (void *)0x0;
      local_res10 = local_228;
      local_230 = local_220;
      if ((local_220 == 0) && (iVar2 + iVar5 == 0)) {
        local_22c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_238,local_220 + iVar2 + iVar5,0);
        _guard_xfg_dispatch_icall_nop(local_238,local_res10,lVar4 * 2);
      }
      FString::PathAppend(&local_238,local_1a8,iVar5);
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      in_stack_fffffffffffffdb8 = param_1 + 0x210;
      puVar3 = (undefined4 *)
               FUN_1407f7ac0(local_res8,lVar4,&local_238,local_218,in_stack_fffffffffffffdb8);
      local_ac = *puVar3;
      if (local_238 != (void *)0x0) {
        FMemory::Free();
      }
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      FUN_1407f4dc0(lVar4,piVar6 + -0x13,1);
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      FUN_1407fa860(lVar4);
      plVar1 = (longlong *)(piVar6 + -3);
      iVar5 = 0;
      local_98 = 0;
      piVar6[-0xf] = 0;
      piVar6[-0xe] = 0;
      piVar6[-0xd] = 0;
      piVar6[-0xc] = 0x3f800000;
      piVar6[-0xb] = 0;
      piVar6[-10] = 0;
      piVar6[-9] = 0;
      piVar6[-8] = 0;
      piVar6[-7] = 0;
      piVar6[-6] = 1;
      piVar6[-5] = 0;
      if (plVar1 != local_68) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = 0;
        piVar6[-1] = 0;
        piVar6[0] = 0;
      }
      piVar6[-0xc] = 0;
      if (0 < piVar6[-0x11]) {
        piVar6[-1] = 0;
        if ((*piVar6 < 0) && (*piVar6 != 0)) {
          TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
          iVar5 = piVar6[-1];
        }
        piVar6[-1] = iVar5 + 0x20;
        if (*piVar6 < iVar5 + 0x20) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar5 * 4),0,0x80);
        lVar4 = *(longlong *)(piVar6 + -0x13);
        lVar8 = (longlong)piVar6[-0x11] * 0x40 + lVar4;
        fVar10 = 1.0 / (float)piVar6[-0x11];
        for (; lVar4 != lVar8; lVar4 = lVar4 + 0x40) {
          piVar6[-5] = (int)(fVar10 * *(float *)(lVar4 + 0x28) + (float)piVar6[-5]);
          if ((piVar6[-1] == 0x20) && (*(int *)(lVar4 + 0x38) == 0x20)) {
            lVar7 = 8;
            do {
              *(float *)(lVar7 + -8 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + -8 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + -8 + *plVar1);
              *(float *)(lVar7 + -4 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + -4 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + -4 + *plVar1);
              *(float *)(lVar7 + *plVar1) =
                   fVar10 * *(float *)(*(longlong *)(lVar4 + 0x30) + lVar7) +
                   *(float *)(lVar7 + *plVar1);
              *(float *)(lVar7 + 4 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 4 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 4 + *plVar1);
              *(float *)(lVar7 + 8 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 8 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 8 + *plVar1);
              *(float *)(lVar7 + 0xc + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0xc + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0xc + *plVar1);
              *(float *)(lVar7 + 0x10 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x10 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x10 + *plVar1);
              *(float *)(lVar7 + 0x14 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x14 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x14 + *plVar1);
              *(float *)(lVar7 + 0x18 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x18 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x18 + *plVar1);
              *(float *)(lVar7 + 0x1c + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x1c + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x1c + *plVar1);
              *(float *)(lVar7 + 0x20 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x20 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x20 + *plVar1);
              *(float *)(lVar7 + 0x24 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x24 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x24 + *plVar1);
              *(float *)(lVar7 + 0x28 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x28 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x28 + *plVar1);
              *(float *)(lVar7 + 0x2c + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x2c + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x2c + *plVar1);
              *(float *)(lVar7 + 0x30 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x30 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x30 + *plVar1);
              *(float *)(lVar7 + 0x34 + *plVar1) =
                   fVar10 * *(float *)(lVar7 + 0x34 + *(longlong *)(lVar4 + 0x30)) +
                   *(float *)(lVar7 + 0x34 + *plVar1);
              lVar7 = lVar7 + 0x40;
            } while (lVar7 < 0x88);
          }
          piVar6[-0xb] = (int)(fVar10 * *(float *)(lVar4 + 0x10) + (float)piVar6[-0xb]);
          piVar6[-10] = (int)(fVar10 * *(float *)(lVar4 + 0x14) + (float)piVar6[-10]);
          piVar6[-9] = (int)(fVar10 * *(float *)(lVar4 + 0x18) + (float)piVar6[-9]);
        }
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
      FUN_1407f4240(local_198);
      if (local_1a8 != 0) {
        FMemory::Free();
      }
      if (local_1b8[0] != 0) {
        FMemory::Free();
      }
      TArray<FMorphTargetLODModel,FDefaultAllocator>::
      ~TArray<FMorphTargetLODModel,FDefaultAllocator>(local_218);
      if (local_res10 != (void *)0x0) {
        FMemory::Free(local_res10);
      }
      puVar9 = puVar9 + 0x2f;
      piVar6 = piVar6 + 0x5e;
    } while (puVar9 != local_res18);
  }
  FUN_1407f7950(param_1);
  return;
}



// FUNCTION 1407f5930 Call body=29 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_1569b590b2c419e431e15d7b8a068bc3>,void___cdecl(void)>::Call
               (longlong param_1)

{
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407f5944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop();
}



// FUNCTION 1407f5960 FUN_1407f5960 body=106 status=ok
// SIG undefined FUN_1407f5960(void)

undefined8 FUN_1407f5960(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    return 1;
  }
  (**(code **)*puVar1)(puVar1,1);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x34)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  if (*(undefined2 **)(param_1 + 0x28) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return 0;
}



// FUNCTION 1407f59d0 FUN_1407f59d0 body=161 status=ok
// SIG undefined FUN_1407f59d0(void)

undefined8 FUN_1407f59d0(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_1407f8c00(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407f5a80 FUN_1407f5a80 body=161 status=ok
// SIG undefined FUN_1407f5a80(void)

undefined8 FUN_1407f5a80(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_1407f8e20(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407f5b30 FUN_1407f5b30 body=107 status=ok
// SIG undefined FUN_1407f5b30(void)

undefined8 * FUN_1407f5b30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1440f3578;
    puVar2[8] = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = (**(code **)*puVar1)(puVar1,puVar2 + 1);
      puVar2[8] = uVar3;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1407f5ba0 FUN_1407f5ba0 body=711 status=ok
// SIG undefined FUN_1407f5ba0(void)

undefined8 *
FUN_1407f5ba0(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  
  local_100 = param_3;
  puVar8 = (undefined8 *)operator_new(0x20);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    *puVar8 = &PTR_FUN_1440f3558;
    puVar8[3] = 0;
    puVar8[2] = &PTR_FUN_1440f3408;
    puVar8[3] = 0;
  }
  lVar4 = *param_4;
  if (lVar4 == 0) {
    lVar11 = FUN_1407f2780(local_88,param_3);
    plVar12 = (longlong *)FUN_140596960(local_f8,0,0xff);
    lVar4 = *plVar12;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar4 + 0x10,lVar11);
    *(undefined4 *)(lVar4 + 0x60) = 0x10ff;
    lVar4 = *plVar12;
    lVar7 = plVar12[2];
    lVar5 = plVar12[1];
    lVar6 = *(longlong *)(lVar4 + 0x78);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
      UNLOCK();
    }
    local_110 = lVar6;
    FUN_1405ab110(lVar4,lVar5,(int)lVar7,1);
    if (*(int *)(lVar11 + 0x40) != 0) {
      plVar12 = *(longlong **)(lVar11 + 0x30);
      if (*(longlong **)(lVar11 + 0x30) == (longlong *)0x0) {
        plVar12 = (longlong *)(lVar11 + 0x10);
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    if (*(longlong *)(lVar11 + 0x30) != 0) {
      FMemory::Free();
    }
    plVar12 = puVar8 + 3;
    if (plVar12 == &local_110) {
      if (lVar6 == 0) goto LAB_1407f5dde;
      LOCK();
      piVar1 = (int *)(lVar6 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar4 = local_110;
    }
    else {
      lVar4 = *plVar12;
      *plVar12 = lVar6;
      if (lVar4 == 0) goto LAB_1407f5dde;
      LOCK();
      piVar1 = (int *)(lVar4 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    if (iVar3 == 1) {
      FGraphEvent::Recycle(lVar4);
    }
  }
  else {
    plVar12 = (longlong *)0x0;
    if (param_4[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_4[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      plVar12 = (longlong *)param_4[1];
    }
    uVar9 = FUN_1407f2780(local_d8,param_3);
    plVar10 = (longlong *)FUN_1406a5f30(&local_108,uVar9,local_118,lVar4 + 8,0x10ff);
    plVar2 = puVar8 + 3;
    if (plVar2 != plVar10) {
      lVar4 = *plVar2;
      *plVar2 = *plVar10;
      *plVar10 = 0;
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    if (local_108 != 0) {
      LOCK();
      piVar1 = (int *)(local_108 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
    }
  }
LAB_1407f5dde:
  plVar2 = local_100;
  *param_2 = puVar8 + 2;
  param_2[1] = puVar8;
  plVar12 = (longlong *)local_100[7];
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12,plVar12 != local_100);
    plVar2[7] = 0;
  }
  plVar12 = (longlong *)param_4[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  return param_2;
}



// FUNCTION 1407f5e70 FUN_1407f5e70 body=66 status=ok
// SIG undefined FUN_1407f5e70(void)

void FUN_1407f5e70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440f3498;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1440f34e0;
  }
  return;
}



// FUNCTION 1407f5ec0 FUN_1407f5ec0 body=56 status=ok
// SIG undefined FUN_1407f5ec0(void)

void FUN_1407f5ec0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440f3458;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 1407f5f00 FUN_1407f5f00 body=9 status=ok
// SIG undefined FUN_1407f5f00(void)

void FUN_1407f5f00(longlong param_1)

{
  FUN_1407f4580(param_1 + 0x10);
  return;
}



// FUNCTION 1407f5f10 FUN_1407f5f10 body=117 status=ok
// SIG undefined FUN_1407f5f10(void)

void FUN_1407f5f10(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_1407f6050();
  cVar1 = FUN_1407f59d0(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1407f5f90 FUN_1407f5f90 body=181 status=ok
// SIG undefined FUN_1407f5f90(void)

void FUN_1407f5f90(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_1407f5a80(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1407f6050 FUN_1407f6050 body=409 status=ok
// SIG undefined FUN_1407f6050(void)

void FUN_1407f6050(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_1407f6121;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
    if (iVar2 < iStack_44) {
LAB_1407f6121:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)((longlong)iStack_1c * 0x50 + *param_1 + 0x38) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1407f61f0 FUN_1407f61f0 body=405 status=ok
// SIG undefined FUN_1407f61f0(void)

undefined1 FUN_1407f61f0(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_2 - *param_3;
  fVar6 = param_2[1] - param_3[1];
  fVar3 = fVar6 * fVar6 + fVar4 * fVar4 + (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]);
  fVar5 = fVar4;
  fVar1 = fVar6;
  if ((fVar3 != 1.0) && (fVar5 = DAT_1468b5d90, fVar1 = DAT_1468b5d94, 1e-08 <= fVar3)) {
    auVar2 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar1 = auVar2._0_4_;
    fVar1 = fVar1 + fVar1 * (0.5 - fVar3 * 0.5 * fVar1 * fVar1);
    fVar1 = fVar1 + fVar1 * (0.5 - fVar3 * 0.5 * fVar1 * fVar1);
    fVar5 = fVar4 * fVar1;
    fVar1 = fVar6 * fVar1;
  }
  if (*(float *)(param_1 + 8) <= 0.0001) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = SQRT(fVar3) / *(float *)(param_1 + 8);
  }
  if (*(float *)(param_1 + 0x14) <= 0.0001) {
    fVar3 = 1.0;
  }
  else {
    fVar6 = SQRT(fVar3) / *(float *)(param_1 + 0x14);
    fVar3 = 0.0;
    if ((0.0 <= fVar6) && (fVar3 = fVar6, 1.0 <= fVar6)) {
      fVar3 = 1.0;
    }
  }
  *param_4 = fVar3 * *param_4;
  param_4[1] = fVar4 * *(float *)(param_1 + 0xc) + param_4[1] + *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 0x10);
  param_4[4] = -fVar5;
  param_4[5] = -fVar1;
  param_4[2] = fVar4 * fVar6 + fVar3 + param_4[2];
  return 1;
}



// FUNCTION 1407f6390 Execute body=36 status=ok
// SIG undefined Execute(void)

void TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FRHICommandListImmediate_&,FScene_*,FSceneView_const_*,TArray<FPrimitiveUniformShaderParameters,TSizedDefaultAllocator<32>_>_&)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001407f63b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1407f63c0 FUN_1407f63c0 body=100 status=ok
// SIG undefined FUN_1407f63c0(void)

void FUN_1407f63c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_4 + 1);
  local_18 = *param_4;
  (**(code **)(param_1 + 8))(param_2,param_3,&local_18,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 1407f6430 ExecuteIfSafe body=43 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseStaticDelegateInstance<void___cdecl(FRHICommandListImmediate_&,FScene_*,FSceneView_const_*,TArray<FPrimitiveUniformShaderParameters,TSizedDefaultAllocator<32>_>_&)>
::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5);
  return 1;
}



// FUNCTION 1407f6460 FUN_1407f6460 body=144 status=ok
// SIG undefined FUN_1407f6460(void)

ulonglong FUN_1407f6460(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x220);
  plVar3 = (longlong *)*plVar1;
  uVar2 = *(uint *)(param_1 + 0x228);
  plVar4 = plVar3;
  do {
    if (plVar4 == plVar3 + (int)uVar2) {
LAB_1407f64bc:
      *(uint *)(param_1 + 0x228) = uVar2 + 1;
      if (*(int *)(param_1 + 0x22c) < (int)(uVar2 + 1)) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,uVar2);
      }
      *(longlong *)((longlong)(int)uVar2 * 8 + *plVar1) = param_2;
      return (ulonglong)uVar2;
    }
    if (*plVar4 == param_2) {
      uVar5 = (longlong)plVar4 - (longlong)plVar3 >> 3;
      if ((int)uVar5 != -1) {
        return uVar5;
      }
      goto LAB_1407f64bc;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 1407f64f0 FUN_1407f64f0 body=497 status=ok
// SIG undefined FUN_1407f64f0(void)

undefined8
FUN_1407f64f0(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             undefined8 *param_5,longlong param_6,undefined1 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  
  uVar3 = param_7;
  lVar2 = param_6;
  local_58 = 0;
  local_50 = 0;
  iVar1 = *(int *)(param_6 + 0x10);
  local_68 = 0x3f800000;
  uStack_60 = 0;
  if ((param_1 != 0) && (uVar8 = 0, *(int *)(param_4 + 0x18) != 0)) {
    do {
      lVar6 = (longlong)(int)uVar8;
      lVar5 = *(longlong *)(param_4 + 0x10);
      if (*(longlong *)(param_4 + 0x10) == 0) {
        lVar5 = param_4;
      }
      param_6._0_4_ = 0;
      local_a8 = *(undefined8 *)(lVar5 + lVar6 * 0xc);
      local_a0 = *(undefined4 *)(lVar5 + 8 + lVar6 * 0xc);
      local_78 = 0;
      local_70 = 1;
      local_88 = 0x3f800000;
      uStack_80 = 0;
      if (iVar1 == 0) {
        puVar7 = &param_6;
      }
      else {
        lVar5 = *(longlong *)(lVar2 + 8);
        if (lVar5 == 0) {
          lVar5 = lVar2;
        }
        puVar7 = (undefined8 *)(lVar5 + lVar6 * 4);
      }
      local_90 = *(undefined4 *)(param_3 + 1);
      local_98 = *param_3;
      cVar4 = FUN_1407f8120(param_1,param_2,&local_98,&local_a8,&local_88,puVar7,uVar3);
      if (cVar4 != '\0') {
        fVar9 = _guard_xfg_dispatch_icall_nop(10.0,(float)local_88 * 0.05);
        local_88 = CONCAT44(local_88._4_4_,fVar9);
        fVar9 = _guard_xfg_dispatch_icall_nop(10.0,local_88._4_4_ * 0.05);
        local_88 = CONCAT44(fVar9,(float)local_88);
        fVar9 = _guard_xfg_dispatch_icall_nop(10.0,(float)uStack_80 * 0.05);
        uStack_80 = CONCAT44(uStack_80._4_4_,fVar9);
        FUN_140591b10(&local_68,&local_88);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulonglong)(longlong)*(int *)(param_4 + 0x18));
    if (local_50 != 0) {
      *param_5 = local_68;
      param_5[1] = uStack_60;
      param_5[2] = local_58;
      *(int *)(param_5 + 3) = local_50;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407f66f0 FUN_1407f66f0 body=1373 status=ok
// SIG undefined FUN_1407f66f0(void)

undefined8 FUN_1407f66f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  FUN_1407f6c50(&local_158,param_1);
  if (local_158 != (longlong *)0x0) {
    lVar10 = *local_158;
    lVar14 = (longlong)(int)local_158[1] * 0x290 + lVar10;
    if (lVar10 != lVar14) {
      piVar9 = (int *)(lVar10 + 0x26c);
      plVar8 = (longlong *)0x0;
      do {
        if (*(longlong *)(piVar9 + -0x29) != 0) {
          if ((1 < piVar9[-0x11]) || (DAT_14685dbb4 != '\0')) {
            if (piVar9[-0xb] != *piVar9) {
              piVar6 = *(int **)(piVar9 + 3);
              if (*(int **)(piVar9 + 3) == (int *)0x0) {
                piVar6 = piVar9 + 1;
              }
              iVar2 = piVar6[(longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                             (longlong)piVar9[5] - 1U];
              if (iVar2 != -1) {
                do {
                  plVar7 = (longlong *)((longlong)iVar2 * 0x50 + *(longlong *)(piVar9 + -0xd));
                  if (*plVar7 == param_2) {
                    if (iVar2 != -1) goto LAB_1407f67e6;
                    break;
                  }
                  iVar2 = (int)plVar7[9];
                } while (iVar2 != -1);
              }
            }
            plVar7 = plVar8;
LAB_1407f67e6:
            plVar13 = plVar7 + 1;
            if (plVar7 == (longlong *)0x0) {
              plVar13 = plVar8;
            }
            if ((plVar13 != (longlong *)0x0) && ((int)plVar13[7] == 0x20)) {
              lVar10 = 4;
              do {
                plVar7 = plVar8 + 4;
                *(undefined4 *)((longlong)plVar8 + param_3) =
                     *(undefined4 *)((longlong)plVar8 + plVar13[6]);
                *(undefined4 *)((longlong)plVar8 + param_3 + 4) =
                     *(undefined4 *)(plVar13[6] + -0x1c + (longlong)plVar7);
                *(undefined4 *)((longlong)plVar8 + param_3 + 8) =
                     *(undefined4 *)(plVar13[6] + -0x18 + (longlong)plVar7);
                *(undefined4 *)((longlong)plVar8 + param_3 + 0xc) =
                     *(undefined4 *)(plVar13[6] + -0x14 + (longlong)plVar7);
                *(undefined8 *)((longlong)plVar8 + param_3 + 0x10) = 0;
                *(undefined8 *)((longlong)plVar8 + param_3 + 0x18) = 0;
                lVar10 = lVar10 + -1;
                plVar8 = plVar7;
              } while (lVar10 != 0);
              uVar11 = 1;
              goto LAB_1407f683f;
            }
          }
          uVar3 = FUN_1407f6460(lVar10,param_2);
          cVar1 = FUN_1438f1750(*(undefined8 *)(piVar9 + -0x29),uVar3,param_3);
          if (cVar1 != '\0') {
            fVar18 = *(float *)(lVar10 + 0x230);
            if (0.0 <= fVar18) {
              if (1.0 <= fVar18) {
                fVar18 = 1.0;
              }
              if (1.0 <= fVar18) goto LAB_1407f6c2b;
            }
            else {
              fVar18 = 0.0;
            }
            lVar14 = 4;
            if (*(char *)(lVar10 + 0xf0) == '\0') {
              iVar2 = *(int *)(lVar10 + 0xd8);
              _guard_xfg_dispatch_icall_nop(&local_148,0,0x80);
              pfVar5 = (float *)((longlong)&local_148 + 4);
              lVar15 = 4;
              do {
                fVar17 = 0.0;
                lVar12 = 4;
                do {
                  iVar4 = rand();
                  fVar17 = fVar17 + ((float)iVar4 * 1.2207406e-08 + 0.00080000004) * (float)iVar2;
                  fVar16 = 1.0 - fVar17 * 4.5;
                  fVar16 = fVar16 * fVar16;
                  if ((fVar17 <= 0.0) || (0.2 <= fVar17)) {
                    pfVar5[-1] = 0.0;
                    fVar16 = 0.0;
                  }
                  else {
                    pfVar5[-1] = fVar17;
                  }
                  *pfVar5 = fVar16;
                  pfVar5 = pfVar5 + 2;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              *(undefined1 *)(lVar10 + 0xf0) = 1;
              *(undefined8 *)(lVar10 + 0xf4) = local_148;
              *(undefined8 *)(lVar10 + 0xfc) = uStack_140;
              *(undefined8 *)(lVar10 + 0x104) = local_138;
              *(undefined8 *)(lVar10 + 0x10c) = uStack_130;
              *(undefined8 *)(lVar10 + 0x114) = local_128;
              *(undefined8 *)(lVar10 + 0x11c) = uStack_120;
              *(undefined8 *)(lVar10 + 0x124) = local_118;
              *(undefined8 *)(lVar10 + 300) = uStack_110;
              *(undefined8 *)(lVar10 + 0x134) = local_108;
              *(undefined8 *)(lVar10 + 0x13c) = uStack_100;
              *(undefined8 *)(lVar10 + 0x144) = local_f8;
              *(undefined8 *)(lVar10 + 0x14c) = uStack_f0;
              *(undefined8 *)(lVar10 + 0x154) = local_e8;
              *(undefined8 *)(lVar10 + 0x15c) = uStack_e0;
              *(undefined8 *)(lVar10 + 0x164) = local_d8;
              *(undefined8 *)(lVar10 + 0x16c) = uStack_d0;
            }
            fVar17 = 1.0 - fVar18;
            lVar10 = (lVar10 + 0xf4) - param_3;
            pfVar5 = (float *)(param_3 + 0xc);
            do {
              pfVar5[-3] = fVar17 * *(float *)((longlong)pfVar5 + lVar10 + -0xc) +
                           fVar18 * pfVar5[-3];
              pfVar5[-2] = fVar17 * *(float *)(lVar10 + -8 + (longlong)pfVar5) + fVar18 * pfVar5[-2]
              ;
              pfVar5[-1] = fVar17 * *(float *)(lVar10 + -4 + (longlong)pfVar5) + fVar18 * pfVar5[-1]
              ;
              *pfVar5 = fVar17 * *(float *)(lVar10 + (longlong)pfVar5) + fVar18 * *pfVar5;
              pfVar5[1] = fVar17 * *(float *)(lVar10 + 4 + (longlong)pfVar5) + fVar18 * pfVar5[1];
              pfVar5[2] = fVar17 * *(float *)(lVar10 + 8 + (longlong)pfVar5) + fVar18 * pfVar5[2];
              pfVar5[3] = fVar17 * *(float *)((longlong)pfVar5 + lVar10 + 0xc) + fVar18 * pfVar5[3];
              pfVar5[4] = fVar17 * *(float *)(lVar10 + 0x10 + (longlong)pfVar5) + fVar18 * pfVar5[4]
              ;
              pfVar5 = pfVar5 + 8;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
LAB_1407f6c2b:
            uVar11 = 1;
            goto LAB_1407f683f;
          }
        }
        lVar10 = lVar10 + 0x290;
        piVar9 = piVar9 + 0xa4;
      } while (lVar10 != lVar14);
    }
  }
  uVar11 = 0;
LAB_1407f683f:
  if (local_158 != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_158 + 4));
  }
  plVar8 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_150 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar9 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  return uVar11;
}



// FUNCTION 1407f6c50 FUN_1407f6c50 body=337 status=ok
// SIG undefined FUN_1407f6c50(void)

longlong * FUN_1407f6c50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  longlong lVar4;
  BOOL BVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  if (DAT_146264fe8 != DAT_146265014) {
    puVar6 = DAT_146265020;
    if (DAT_146265020 == (undefined *)0x0) {
      puVar6 = &DAT_146265018;
    }
    iVar3 = *(int *)(puVar6 + ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                              (longlong)DAT_146265028 - 1U) * 4);
    while (iVar3 != -1) {
      lVar7 = (longlong)iVar3 * 0x20;
      if (*(longlong *)(lVar7 + DAT_146264fe0) == param_2) {
        if ((iVar3 != -1) && (lVar7 = (longlong)iVar3 * 0x20 + DAT_146264fe0, lVar7 != 0)) {
          lVar4 = *(longlong *)(lVar7 + 8);
          plVar8 = *(longlong **)(lVar7 + 0x10);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          if (lVar4 != 0) {
            *param_1 = lVar4;
            param_1[1] = (longlong)plVar8;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            if (*param_1 != 0) {
              lpCriticalSection = (LPCRITICAL_SECTION)(*param_1 + 0x20);
              BVar5 = TryEnterCriticalSection(lpCriticalSection);
              if (BVar5 == 0) {
                EnterCriticalSection(lpCriticalSection);
              }
            }
            goto LAB_1407f6cf3;
          }
        }
        break;
      }
      iVar3 = *(int *)(lVar7 + 0x18 + DAT_146264fe0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1407f6cf3:
  if (plVar8 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 1407f6db0 FUN_1407f6db0 body=552 status=ok
// SIG undefined FUN_1407f6db0(void)

undefined8 FUN_1407f6db0(undefined8 param_1,longlong param_2,float *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  longlong *local_38;
  longlong *local_30;
  
  FUN_1407f6c50(&local_38,param_1);
  if (local_38 != (longlong *)0x0) {
    lVar9 = *local_38;
    lVar11 = (longlong)(int)local_38[1] * 0x290 + lVar9;
    if (lVar9 != lVar11) {
      piVar8 = (int *)(lVar9 + 0x26c);
      do {
        if (*(longlong *)(piVar8 + -0x29) != 0) {
          if ((piVar8[-0x11] < 2) && (DAT_14685dbb4 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          uVar3 = FUN_1407f6460(lVar9,param_2);
          if (piVar8[-0xb] != *piVar8) {
            piVar6 = *(int **)(piVar8 + 3);
            if (*(int **)(piVar8 + 3) == (int *)0x0) {
              piVar6 = piVar8 + 1;
            }
            iVar4 = piVar6[(longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                           (longlong)piVar8[5] - 1U];
            if (iVar4 != -1) {
              do {
                plVar7 = (longlong *)((longlong)iVar4 * 0x50 + *(longlong *)(piVar8 + -0xd));
                if (*plVar7 == param_2) {
                  if (iVar4 != -1) goto LAB_1407f6ec5;
                  break;
                }
                iVar4 = (int)plVar7[9];
              } while (iVar4 != -1);
            }
          }
          plVar7 = (longlong *)0x0;
LAB_1407f6ec5:
          plVar5 = plVar7 + 1;
          if (plVar7 == (longlong *)0x0) {
            plVar5 = (longlong *)0x0;
          }
          if ((plVar5 != (longlong *)0x0) && (bVar1)) {
            uVar10 = 1;
            *param_3 = *(float *)(plVar5 + 5);
            goto LAB_1407f6f12;
          }
          cVar2 = FUN_1438f1820(*(undefined8 *)(piVar8 + -0x29),uVar3,param_3);
          if (cVar2 != '\0') {
            fVar12 = *(float *)(lVar9 + 0x230);
            fVar13 = 0.0;
            if (fVar12 < 0.0) {
LAB_1407f6fb6:
              *param_3 = (1.0 - fVar13) * *(float *)(lVar9 + 0xc0) + fVar13 * *param_3;
            }
            else {
              if (1.0 <= fVar12) {
                fVar12 = 1.0;
              }
              fVar13 = fVar12;
              if (fVar12 < 1.0) goto LAB_1407f6fb6;
            }
            uVar10 = 1;
            goto LAB_1407f6f12;
          }
        }
        lVar9 = lVar9 + 0x290;
        piVar8 = piVar8 + 0xa4;
      } while (lVar9 != lVar11);
    }
  }
  uVar10 = 0;
LAB_1407f6f12:
  if (local_38 != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_38 + 4));
  }
  plVar7 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar8 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 1407f6fe0 FUN_1407f6fe0 body=1850 status=ok
// SIG undefined FUN_1407f6fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1407f6fe0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  undefined1 *local_1b0;
  undefined *local_1a8;
  float local_198;
  float local_194;
  float local_190;
  undefined1 local_188 [4];
  uint local_184;
  longlong local_180;
  uint local_178;
  float *local_170;
  byte local_168 [12];
  undefined4 local_15c;
  undefined1 local_d8 [24];
  undefined4 local_c0;
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  uVar11 = *(uint *)(param_1 + 0x50);
  if (uVar11 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      uVar12 = 1;
      local_184 = 1;
      local_180 = param_1;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14685dca8) &&
         (_Init_thread_header(&DAT_14685dca8), DAT_14685dca8 == -1)) {
        FName::FName(&DAT_14685dca0,"TritonGeometrySearch",1);
        _Init_thread_footer(&DAT_14685dca8);
      }
      local_1b8 = 0;
      FUN_1422ffb20(local_d8,DAT_14685dca0,local_188,1);
      lVar9 = local_180;
      local_170 = (float *)&DAT_146265038;
      uVar11 = 0;
      local_178 = 0;
      puVar17 = &DAT_14685dc68;
      pfVar14 = (float *)&DAT_146265038;
      local_c0 = 1;
      uVar15 = 0;
      do {
        fVar4 = *(float *)(lVar9 + 0x20);
        fVar5 = *(float *)(lVar9 + 0x24);
        fVar6 = *(float *)(lVar9 + 0x28);
        fVar7 = *(float *)(lVar9 + 0x2c);
        fVar1 = *pfVar14;
        fVar2 = pfVar14[-1];
        fVar3 = pfVar14[-2];
        fVar19 = fVar1 * fVar5 - fVar2 * fVar6;
        fVar20 = fVar3 * fVar6 - fVar1 * fVar4;
        fVar21 = fVar2 * fVar4 - fVar3 * fVar5;
        fVar19 = fVar19 + fVar19;
        fVar20 = fVar20 + fVar20;
        fVar21 = fVar21 + fVar21;
        local_190 = ((fVar20 * fVar4 - fVar19 * fVar5) + fVar7 * fVar21 + fVar1) * 100.0 +
                    *(float *)(lVar9 + 0x18);
        local_198 = ((fVar21 * fVar5 - fVar20 * fVar6) + fVar7 * fVar19 + fVar3) * 100.0 +
                    *(float *)(lVar9 + 0x10);
        local_194 = ((fVar19 * fVar6 - fVar21 * fVar4) + fVar7 * fVar20 + fVar2) * 100.0 +
                    *(float *)(lVar9 + 0x14);
        _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
        local_1a8 = &DAT_146aefe68;
        local_1b8 = local_1b8 & 0xffffffff00000000;
        local_15c = 0x3f800000;
        local_1b0 = local_d8;
        cVar10 = UWorld::LineTraceSingleByChannel
                           (*(undefined8 *)(lVar9 + 8),local_168,&local_198,lVar9 + 0x10);
        if ((cVar10 != '\0') && ((local_168[0] & 2) == 0)) {
          uVar11 = uVar11 | 1 << (uVar15 & 0x1f);
          *puVar17 = local_15c;
        }
        uVar15 = uVar15 + 1;
        pfVar14 = pfVar14 + 3;
        puVar17 = puVar17 + 1;
      } while ((int)uVar15 < 6);
      uVar16 = 0;
      pfVar14 = local_170;
      uVar15 = local_178;
      do {
        lVar9 = local_180;
        if ((uVar11 == 0) || ((uVar11 & uVar12) != 0)) {
          fVar1 = *pfVar14;
          fVar2 = pfVar14[-1];
          fVar3 = pfVar14[-2];
          fVar4 = *(float *)(local_180 + 0x20);
          fVar5 = *(float *)(local_180 + 0x24);
          fVar6 = *(float *)(local_180 + 0x28);
          fVar7 = *(float *)(local_180 + 0x2c);
          fVar19 = fVar1 * fVar5 - fVar2 * fVar6;
          fVar20 = fVar3 * fVar6 - fVar1 * fVar4;
          fVar21 = fVar2 * fVar4 - fVar3 * fVar5;
          fVar19 = fVar19 + fVar19;
          fVar20 = fVar20 + fVar20;
          fVar21 = fVar21 + fVar21;
          local_190 = ((fVar20 * fVar4 - fVar19 * fVar5) + fVar7 * fVar21 + fVar1) * 100.0 +
                      *(float *)(local_180 + 0x18);
          local_198 = ((fVar21 * fVar5 - fVar20 * fVar6) + fVar7 * fVar19 + fVar3) * 100.0 +
                      *(float *)(local_180 + 0x10);
          local_194 = ((fVar19 * fVar6 - fVar21 * fVar4) + fVar7 * fVar20 + fVar2) * 100.0 +
                      *(float *)(local_180 + 0x14);
          _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
          local_1a8 = &DAT_146aefe68;
          local_15c = 0x3f800000;
          local_1b8 = local_1b8 & 0xffffffff00000000;
          local_1b0 = local_d8;
          cVar10 = UWorld::LineTraceSingleByChannel
                             (*(undefined8 *)(lVar9 + 8),local_168,lVar9 + 0x10,&local_198);
          if ((cVar10 != '\0') && ((local_168[0] & 2) == 0)) {
            uVar11 = uVar11 & ~(1 << (uVar16 & 0x1f));
            uVar15 = uVar15 | 1 << (uVar16 & 0x1f);
          }
        }
        lVar9 = local_180;
        uVar16 = uVar16 + 1;
        uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
        pfVar14 = pfVar14 + 3;
      } while ((int)uVar16 < 6);
      local_170 = (float *)&DAT_146265080;
      uVar12 = 6;
      local_184 = 6;
      puVar13 = &DAT_1440f3528;
      lVar18 = 0;
      pfVar14 = (float *)&DAT_146265080;
      do {
        uVar16 = uVar15;
        if (uVar11 != 0) {
          uVar16 = uVar11;
        }
        if ((uVar16 & *(uint *)((longlong)&DAT_1440f3528 + lVar18)) !=
            *(uint *)((longlong)&DAT_1440f3528 + lVar18)) {
          fVar4 = *(float *)(lVar9 + 0x20);
          fVar5 = *(float *)(lVar9 + 0x24);
          fVar6 = *(float *)(lVar9 + 0x28);
          fVar7 = *(float *)(lVar9 + 0x2c);
          fVar1 = *pfVar14;
          fVar2 = pfVar14[-1];
          fVar3 = pfVar14[-2];
          fVar19 = fVar1 * fVar5 - fVar2 * fVar6;
          fVar20 = fVar3 * fVar6 - fVar1 * fVar4;
          fVar21 = fVar2 * fVar4 - fVar3 * fVar5;
          fVar19 = fVar19 + fVar19;
          fVar20 = fVar20 + fVar20;
          fVar21 = fVar21 + fVar21;
          local_190 = ((fVar20 * fVar4 - fVar19 * fVar5) + fVar7 * fVar21 + fVar1) * 57.735 +
                      *(float *)(lVar9 + 0x18);
          local_198 = ((fVar21 * fVar5 - fVar20 * fVar6) + fVar7 * fVar19 + fVar3) * 57.735 +
                      *(float *)(lVar9 + 0x10);
          local_194 = ((fVar19 * fVar6 - fVar21 * fVar4) + fVar7 * fVar20 + fVar2) * 57.735 +
                      *(float *)(lVar9 + 0x14);
          _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
          local_1a8 = &DAT_146aefe68;
          local_15c = 0x3f800000;
          local_1b8 = local_1b8 & 0xffffffff00000000;
          local_1b0 = local_d8;
          cVar10 = UWorld::LineTraceSingleByChannel
                             (*(undefined8 *)(lVar9 + 8),local_168,&local_198,lVar9 + 0x10);
          if ((cVar10 != '\0') && ((local_168[0] & 2) == 0)) {
            *(undefined4 *)((longlong)&DAT_14685dc80 + lVar18) = local_15c;
            uVar11 = uVar11 | 1 << (uVar12 & 0x1f);
          }
        }
        uVar12 = uVar12 + 1;
        pfVar14 = pfVar14 + 3;
        lVar18 = lVar18 + 4;
      } while (uVar12 < 0xe);
      uVar16 = 0x40;
      pfVar14 = local_170;
      uVar12 = local_184;
      do {
        lVar9 = local_180;
        uVar8 = uVar15;
        if (((uVar11 == 0) || (uVar8 = uVar11, (uVar11 & uVar16) != 0)) &&
           ((*puVar13 & uVar8) != *puVar13)) {
          fVar1 = *pfVar14;
          fVar2 = pfVar14[-1];
          fVar3 = pfVar14[-2];
          fVar4 = *(float *)(local_180 + 0x20);
          fVar5 = *(float *)(local_180 + 0x24);
          fVar6 = *(float *)(local_180 + 0x28);
          fVar7 = *(float *)(local_180 + 0x2c);
          fVar19 = fVar1 * fVar5 - fVar2 * fVar6;
          fVar20 = fVar3 * fVar6 - fVar1 * fVar4;
          fVar21 = fVar2 * fVar4 - fVar3 * fVar5;
          fVar19 = fVar19 + fVar19;
          fVar20 = fVar20 + fVar20;
          fVar21 = fVar21 + fVar21;
          local_190 = ((fVar20 * fVar4 - fVar19 * fVar5) + fVar7 * fVar21 + fVar1) * 57.735 +
                      *(float *)(local_180 + 0x18);
          local_198 = ((fVar21 * fVar5 - fVar20 * fVar6) + fVar7 * fVar19 + fVar3) * 57.735 +
                      *(float *)(local_180 + 0x10);
          local_194 = ((fVar19 * fVar6 - fVar21 * fVar4) + fVar7 * fVar20 + fVar2) * 57.735 +
                      *(float *)(local_180 + 0x14);
          _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
          local_1a8 = &DAT_146aefe68;
          local_15c = 0x3f800000;
          local_1b8 = local_1b8 & 0xffffffff00000000;
          local_1b0 = local_d8;
          cVar10 = UWorld::LineTraceSingleByChannel
                             (*(undefined8 *)(lVar9 + 8),local_168,lVar9 + 0x10,&local_198);
          if ((cVar10 != '\0') && ((local_168[0] & 2) == 0)) {
            uVar11 = uVar11 & ~(1 << (uVar12 & 0x1f));
            goto LAB_1407f762a;
          }
        }
        else {
LAB_1407f762a:
          uVar15 = uVar15 | 1 << (uVar12 & 0x1f);
        }
        uVar12 = uVar12 + 1;
        uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
        puVar13 = puVar13 + 1;
        pfVar14 = pfVar14 + 3;
      } while (uVar12 < 0xe);
      if (uVar11 == 0) {
        uVar11 = ~uVar15;
      }
      *(uint *)(lVar9 + 0x50) = uVar11;
      if (uVar11 == 0) {
        uVar11 = 0xffffffff;
        *(undefined4 *)(lVar9 + 0x50) = 0xffffffff;
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
  }
  return uVar11;
}



// FUNCTION 1407f7720 FUN_1407f7720 body=506 status=ok
// SIG undefined FUN_1407f7720(void)

void ** FUN_1407f7720(void **param_1,longlong param_2)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  void *_Src_00;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *local_28;
  int local_20;
  undefined4 uStack_1c;
  
  _Src_00 = (void *)0x0;
  uVar3 = 0;
  *param_1 = (void *)0x0;
  param_1[1] = (void *)0x0;
  if ((*(int *)(param_2 + 0x68) == 0) || (*(int *)(param_2 + 0x68) == 1)) {
    local_28 = (void *)0x0;
    uStack_1c = 0;
    plVar2 = (longlong *)USequenceRenderSettings::GetPrivateStaticClass();
    lVar6 = plVar2[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar6 = plVar2[0x1f];
    }
    iVar4 = 0;
    if ((lVar6 != 0) && (iVar4 = 0, &local_28 != (void **)(lVar6 + 0x28))) {
      local_20 = *(int *)(lVar6 + 0x30);
      lVar5 = (longlong)local_20;
      _Src = *(void **)(lVar6 + 0x28);
      if (local_20 == 0) {
        _Src_00 = (void *)0x0;
        iVar4 = local_20;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
        _Src_00 = local_28;
        _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 * 2);
        iVar4 = local_20;
        uVar3 = uStack_1c;
      }
    }
    if (param_1 != &local_28) {
      if (*param_1 != (void *)0x0) {
        FMemory::Free();
      }
      *param_1 = _Src_00;
      *(int *)(param_1 + 1) = iVar4;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      return param_1;
    }
  }
  else {
    local_28 = (void *)0x0;
    local_20 = 9;
    uStack_1c = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    _Src_00 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"../../..",0x12);
    lVar6 = (longlong)local_20;
    iVar4 = *(int *)(param_2 + 0x68) + -1;
    if (*(int *)(param_2 + 0x68) == 0) {
      iVar4 = 0;
    }
    if ((local_20 != 0) || (iVar1 = 2, iVar4 == -1)) {
      iVar1 = 1;
    }
    local_28 = (void *)0x0;
    if ((local_20 == 0) && (iVar4 + iVar1 == 0)) {
      local_20 = 0;
      uStack_1c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20 + iVar4 + iVar1,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src_00,lVar6 * 2);
    }
    FString::PathAppend(&local_28,*(undefined8 *)(param_2 + 0x60),iVar4);
    if (param_1 == &local_28) {
      if (local_28 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FMemory::Free();
      }
      *param_1 = local_28;
      *(int *)(param_1 + 1) = local_20;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
    }
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return param_1;
}



// FUNCTION 1407f7920 FUN_1407f7920 body=43 status=ok
// SIG undefined FUN_1407f7920(void)

void FUN_1407f7920(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_1440f1660;
    return;
  }
  return;
}



// FUNCTION 1407f7950 FUN_1407f7950 body=357 status=ok
// SIG undefined FUN_1407f7950(void)

void FUN_1407f7950(longlong param_1)

{
  void *_Src;
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  lVar6 = (longlong)*(int *)(param_1 + 0x2d8) * 0x178 + lVar3;
  for (; lVar3 != lVar6; lVar3 = lVar3 + 0x178) {
    if (*(int *)(lVar3 + 0x16c) == -1) {
      FUN_1407f7720(&local_38,lVar3);
      _Src = local_38;
      lVar4 = (longlong)local_30;
      iVar5 = *(int *)(lVar3 + 0x78) + -1;
      if (*(int *)(lVar3 + 0x78) == 0) {
        iVar5 = 0;
      }
      if ((local_30 != 0) || (iVar1 = 2, iVar5 == -1)) {
        iVar1 = 1;
      }
      local_48 = (void *)0x0;
      local_40 = local_30;
      if ((local_30 == 0) && (iVar5 + iVar1 == 0)) {
        local_3c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar5 + iVar1 + local_30,0);
        _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar4 * 2);
      }
      FString::PathAppend(&local_48,*(undefined8 *)(lVar3 + 0x70),iVar5);
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      puVar2 = (undefined4 *)FUN_1407f7ac0(local_res8,lVar4,&local_48,lVar3,param_1 + 0x210);
      *(undefined4 *)(lVar3 + 0x16c) = *puVar2;
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  return;
}



// FUNCTION 1407f7ac0 FUN_1407f7ac0 body=1032 status=ok
// SIG undefined FUN_1407f7ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1407f7ac0(int *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                   undefined8 *param_5)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_398 [32];
  longlong *local_378;
  longlong *local_370;
  undefined8 *local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  int iStack_354;
  int local_350;
  int iStack_34c;
  undefined4 local_348;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  int iStack_32c;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_308 [16];
  int local_2f8 [2];
  undefined1 local_2f0 [376];
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  local_368 = param_5;
  FUN_1407f6c50(&local_378);
  if (local_378 != (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x38);
    plVar9 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = 0;
      *plVar5 = (longlong)&PTR_FUN_1440f33d0;
      plVar5[2] = 0;
      plVar5[3] = 0;
      *(undefined4 *)(plVar5 + 4) = 0;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar9 = plVar5;
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    cVar4 = (**(code **)(*plVar9 + 8))(plVar9,puVar8);
    if (cVar4 == '\0') {
      (**(code **)*plVar9)(plVar9,1);
      *param_1 = -1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_378 + 4));
LAB_1407f7e7d:
      plVar9 = local_370;
      if (local_370 == (longlong *)0x0) {
        return param_1;
      }
      LOCK();
      plVar5 = local_370 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return param_1;
      }
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return param_1;
      }
      (**(code **)(*local_370 + 8))(local_370,1);
      return param_1;
    }
    lVar6 = FUN_1438f1640();
    if (lVar6 != 0) {
      local_348 = *(undefined4 *)(param_4 + 0x5c);
      local_360 = CONCAT31(local_360._1_3_,*(undefined1 *)(param_4 + 0x58));
      local_350 = *(int *)(param_4 + 0x50) << 10;
      iStack_354 = *(int *)(param_4 + 0x4c) << 10;
      iStack_34c = *(int *)(param_4 + 0x54) << 10;
      local_328 = CONCAT44(iStack_34c,local_350);
      uStack_35c = 0xa4;
      uStack_358 = 0x640;
      local_68 = 0x1010101;
      local_338 = local_360;
      uStack_334 = 0xa4;
      uStack_330 = 0x640;
      local_64 = 0x101;
      iStack_32c = iStack_354;
      local_320 = local_348;
      cVar4 = FUN_1438f18c0(lVar6,plVar9,&local_68,&local_338);
      if (cVar4 != '\0') {
        if (*(char *)(param_4 + 0x3c) == '\0') {
          FUN_1438f19e0(lVar6,1);
        }
        iVar10 = DAT_14685dc64 + 1;
        local_318 = *(undefined4 *)local_368;
        uStack_314 = *(undefined4 *)((longlong)local_368 + 4);
        uStack_310 = *(undefined4 *)(local_368 + 1);
        uStack_30c = *(undefined4 *)((longlong)local_368 + 0xc);
        DAT_14685dc64 = iVar10;
        lVar7 = FQuat::Rotator(&local_318,local_308);
        fVar2 = *(float *)(lVar7 + 4);
        local_2f8[0] = iVar10;
        FUN_1407f3bf0(local_2f0);
        local_178 = __libm_sse2_sincosf_(fVar2 * -0.017453292);
        local_168 = *local_368;
        uStack_160 = local_368[1];
        local_158 = local_368[2];
        uStack_150 = local_368[3];
        local_148 = local_368[4];
        uStack_140 = local_368[5];
        local_70 = 0;
        local_138 = plVar9;
        local_130 = lVar6;
        _guard_xfg_dispatch_icall_nop(&local_128,0,0x50);
        local_128 = 0;
        local_120 = 0;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0xffffffff;
        local_f4 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = 0;
        _guard_xfg_dispatch_icall_nop(local_c8,0,0x58);
        iVar3 = (int)local_378[1];
        local_c0 = 0;
        local_b8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0xffffffff;
        local_8c = 0;
        local_80 = 0;
        local_78 = 0;
        *(int *)(local_378 + 1) = iVar3 + 1;
        if (*(int *)((longlong)local_378 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<656,16>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(local_378,iVar3);
        }
        FUN_1407f3730((longlong)iVar3 * 0x290 + *local_378,local_2f8);
        FUN_1407f44a0(local_2f8);
        *param_1 = iVar10;
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_378 + 4));
        goto LAB_1407f7e7d;
      }
      FUN_1438f16c0(lVar6);
    }
  }
  *param_1 = -1;
  if (local_378 != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_378 + 4));
  }
  plVar9 = local_370;
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_370 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_370 + 8))(local_370,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1407f7ef0 FUN_1407f7ef0 body=51 status=ok
// SIG undefined FUN_1407f7ef0(void)

void FUN_1407f7ef0(longlong param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xb8);
  FUN_142393b20();
  if ((~bVar1 & 1) != 0) {
    FUN_1407f7950(param_1);
  }
  return;
}



// FUNCTION 1407f7f30 FUN_1407f7f30 body=27 status=ok
// SIG undefined FUN_1407f7f30(void)

void FUN_1407f7f30(undefined8 param_1)

{
  FUN_1407fa7c0();
  FUN_142394230(param_1);
  return;
}



// FUNCTION 1407f7f50 FUN_1407f7f50 body=426 status=ok
// SIG undefined FUN_1407f7f50(void)

undefined8 FUN_1407f7f50(longlong param_1,short *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  if ((*(longlong *)(param_1 + 8) == 0) && (param_2 != (short *)0x0)) {
    uVar2 = FPlatformFileManager::Get();
    plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
    cVar1 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
    if (cVar1 != '\0') {
      uVar2 = FPlatformFileManager::Get();
      plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
      lVar4 = (**(code **)(*plVar3 + 0x100))(plVar3,param_2);
      *(longlong *)(param_1 + 8) = lVar4;
      if (lVar4 != 0) {
        lVar4 = -1;
        iVar7 = 0;
        if (*(short **)(param_1 + 0x28) != param_2) {
          iVar5 = iVar7;
          if (*param_2 != 0) {
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while (param_2[lVar6] != 0);
            iVar5 = (int)lVar6 + 1;
          }
          *(undefined4 *)(param_1 + 0x30) = 0;
          if (*(int *)(param_1 + 0x34) != iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,iVar5);
            iVar7 = *(int *)(param_1 + 0x30);
          }
          *(int *)(param_1 + 0x30) = iVar7 + iVar5;
          if (*(int *)(param_1 + 0x34) < iVar7 + iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x28);
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x28),param_2,(longlong)iVar5 * 2);
          }
        }
        plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0);
        cVar1 = *(char *)((longlong)plVar3 + 0x71);
        while( true ) {
          if (cVar1 == '\0') {
            (**(code **)(*plVar3 + 8))(plVar3,0x3c87fcb9);
          }
          LOCK();
          bVar8 = *(int *)(param_1 + 0x20) == 0;
          if (bVar8) {
            *(int *)(param_1 + 0x20) = 0;
          }
          UNLOCK();
          if (!bVar8) {
            if (*(char *)((longlong)plVar3 + 0x73) == '\0') {
              *(undefined1 *)((longlong)plVar3 + 0x73) = 1;
              *(undefined1 *)(plVar3 + 0xe) = 1;
              if (*(char *)((longlong)plVar3 + 0x71) == '\0') {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
            goto LAB_1407f80b9;
          }
          if (*(char *)((longlong)plVar3 + 0x71) != '\0') break;
          cVar1 = '\0';
        }
        if (*(char *)((longlong)plVar3 + 0x73) == '\0') {
          lVar4 = plVar3[2];
        }
        *(longlong *)(param_1 + 0x18) = lVar4;
LAB_1407f80b9:
        (**(code **)*plVar3)(plVar3,1);
      }
      if ((*(longlong *)(param_1 + 8) != 0) && (0 < *(longlong *)(param_1 + 0x18))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1407f8120 FUN_1407f8120 body=1899 status=ok
// SIG undefined FUN_1407f8120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1407f8120(undefined8 param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
             uint *param_6,undefined1 param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1e8 [32];
  float local_1c8;
  undefined8 *local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  char local_1a8;
  char local_198;
  undefined8 local_188;
  float local_180;
  float *local_178;
  float local_170;
  uint local_168;
  uint *local_158;
  float local_150;
  longlong local_148;
  float local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_158 = param_6;
  local_178 = param_3;
  FUN_1407f6c50(&local_118,param_1);
  if ((local_118 == (longlong *)0x0) || ((int)local_118[1] < 1)) {
    uVar18 = 0;
  }
  else {
    local_188 = *(undefined8 *)param_4;
    fVar23 = *param_4;
    fVar22 = param_4[1];
    fVar21 = param_3[1];
    fVar20 = *param_3;
    fVar4 = param_4[2];
    lVar19 = *local_118;
    fVar2 = param_4[2];
    fVar3 = param_3[2];
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[3] = 0.0;
    param_5[4] = 0.0;
    param_5[5] = 0.0;
    local_168 = CONCAT31((uint3)(*param_6 >> 0x1c),~(byte)(*param_6 >> 0x14)) & 0xffffff01;
    fVar24 = 0.0;
    fVar23 = SQRT((fVar22 - fVar21) * (fVar22 - fVar21) + (fVar23 - fVar20) * (fVar23 - fVar20) +
                  (fVar2 - fVar3) * (fVar2 - fVar3)) * 0.01;
    if ((1 < *(int *)(lVar19 + 0x228)) || (local_198 = '\0', DAT_14685dbb4 != '\0')) {
      local_198 = '\x01';
    }
    fVar22 = 1.0;
    lVar16 = (longlong)(int)local_118[1] * 0x290 + lVar19;
    local_180 = fVar4;
    local_148 = lVar16;
    if (lVar19 != lVar16) {
      puVar17 = (undefined8 *)(lVar19 + 0x1b0);
      do {
        if (puVar17[3] != 0) {
          uVar12 = FUN_1407f6460(lVar19,param_2);
          fVar21 = *(float *)((longlong)puVar17 + -0x174) - *(float *)(puVar17 + -0x30);
          if (1e-08 < ABS(fVar21)) {
            fVar21 = (fVar23 - *(float *)(puVar17 + -0x30)) / fVar21;
          }
          else if (fVar23 < *(float *)((longlong)puVar17 + -0x174)) {
            fVar21 = 0.0;
          }
          else {
            fVar21 = 1.0;
          }
          fVar20 = *(float *)(puVar17 + -0x2f);
          if (fVar20 <= fVar21) {
            if (1e-08 < ABS(1.0 - fVar20)) {
              fVar21 = (fVar21 - fVar20) / (1.0 - fVar20);
            }
            else if (fVar21 < 1.0) {
              fVar21 = 0.0;
            }
            else {
              fVar21 = 1.0;
            }
            fVar21 = (*(float *)(puVar17 + -0x2e) - 1.0) * fVar21 + 1.0;
          }
          else {
            if (1e-08 < ABS(fVar20)) {
              fVar21 = fVar21 / fVar20;
            }
            else {
              fVar21 = 0.0;
            }
            fVar21 = (1.0 - *(float *)((longlong)puVar17 + -0x17c)) * fVar21 +
                     *(float *)((longlong)puVar17 + -0x17c);
          }
          if (0.0 < fVar21) {
            lVar6 = local_118[3];
            uVar18 = *(undefined8 *)param_4;
            uVar5 = *local_158;
            *(longlong *)(lVar6 + 8) = local_118[2];
            fVar20 = param_4[2];
            *(undefined8 *)(lVar6 + 0x10) = uVar18;
            *(float *)(lVar6 + 0x18) = fVar20;
            uVar18 = puVar17[-3];
            *(undefined8 *)(lVar6 + 0x20) = puVar17[-4];
            *(undefined8 *)(lVar6 + 0x28) = uVar18;
            uVar7 = *(undefined4 *)((longlong)puVar17 + -0xc);
            uVar8 = *(undefined4 *)(puVar17 + -1);
            uVar9 = *(undefined4 *)((longlong)puVar17 + -4);
            local_1a8 = local_198;
            local_1b0 = (undefined1)local_168;
            *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(puVar17 + -2);
            *(undefined4 *)(lVar6 + 0x34) = uVar7;
            *(undefined4 *)(lVar6 + 0x38) = uVar8;
            *(undefined4 *)(lVar6 + 0x3c) = uVar9;
            uVar18 = puVar17[1];
            *(undefined8 *)(lVar6 + 0x40) = *puVar17;
            *(undefined8 *)(lVar6 + 0x48) = uVar18;
            local_1b8 = param_7;
            local_1c0 = &local_108;
            *(uint *)(lVar6 + 0x50) = uVar5;
            local_108 = 0;
            uStack_100 = 0;
            local_f8 = 0;
            local_1c8 = fVar4;
            cVar11 = FUN_1438f1c20(puVar17[3],uVar12,(undefined4)local_188,local_188._4_4_);
            if (cVar11 != '\0') {
              fVar24 = fVar24 + fVar21;
              fVar20 = local_108._4_4_ * fVar21 + param_5[1];
              param_5[1] = fVar20;
              *param_5 = (float)local_108 * fVar21 + *param_5;
              param_5[2] = fVar20 + (float)uStack_100 + param_5[2];
              param_5[3] = uStack_100._4_4_ * fVar21 + param_5[3];
              param_5[4] = local_f8._4_4_ * 0.02 * *(float *)(puVar17 + -6) +
                           (float)local_f8 * 0.02 * *(float *)((longlong)puVar17 + -0x2c) +
                           param_5[4];
              param_5[5] = (local_f8._4_4_ * 0.02 * *(float *)((longlong)puVar17 + -0x2c) -
                           (float)local_f8 * 0.02 * *(float *)(puVar17 + -6)) + param_5[5];
              *local_158 = *(uint *)(lVar6 + 0x50) | 0x100000;
            }
            fVar21 = *(float *)(puVar17 + 0x10);
            if (fVar22 <= *(float *)(puVar17 + 0x10)) {
              fVar21 = fVar22;
            }
            lVar16 = local_148;
            if (0.0 <= fVar21) {
              if (1.0 <= fVar21) {
                fVar21 = 1.0;
              }
              *(undefined8 *)(lVar6 + 8) = 0;
              fVar22 = fVar21;
            }
            else {
              *(undefined8 *)(lVar6 + 8) = 0;
              fVar22 = 0.0;
            }
          }
        }
        pfVar10 = local_178;
        lVar19 = lVar19 + 0x290;
        puVar17 = puVar17 + 0x52;
      } while (lVar19 != lVar16);
      if (0.0 < fVar24) {
        lVar19 = *local_118;
        fVar24 = 1.0 / fVar24;
        *param_5 = fVar24 * *param_5;
        param_5[1] = fVar24 * param_5[1];
        param_5[3] = fVar24 * param_5[3];
        param_5[4] = fVar24 * param_5[4];
        param_5[5] = fVar24 * param_5[5];
        if (*(int *)(lVar19 + 0x240) != *(int *)(lVar19 + 0x26c)) {
          lVar16 = *(longlong *)(lVar19 + 0x278);
          if (*(longlong *)(lVar19 + 0x278) == 0) {
            lVar16 = lVar19 + 0x270;
          }
          iVar13 = *(int *)(lVar16 + ((longlong)
                                      ((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                                     (longlong)*(int *)(lVar19 + 0x280) - 1U) * 4);
          if (iVar13 != -1) {
            do {
              plVar14 = (longlong *)((longlong)iVar13 * 0x50 + *(longlong *)(lVar19 + 0x238));
              if (*plVar14 == param_2) {
                if (iVar13 != -1) goto LAB_1407f8645;
                break;
              }
              iVar13 = (int)plVar14[9];
            } while (iVar13 != -1);
          }
        }
        plVar14 = (longlong *)0x0;
LAB_1407f8645:
        plVar15 = plVar14 + 1;
        if (plVar14 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
        }
        if ((plVar15 != (longlong *)0x0) && (local_198 != '\0')) {
          local_188 = *(undefined8 *)param_4;
          param_5[1] = *(float *)(plVar15 + 2);
          param_5[3] = *(float *)(plVar15 + 3);
          param_5[2] = *(float *)((longlong)plVar15 + 0x14);
          local_180 = param_4[2];
          local_148 = *(longlong *)local_178;
          local_140 = local_178[2];
          FUN_1407f61f0(lVar19 + 0xd8,&local_148,&local_188,param_5);
          fVar22 = *(float *)(lVar19 + 0x288);
        }
        if (fVar22 < 1.0) {
          local_138 = *(undefined8 *)(lVar19 + 0xa4);
          uStack_130 = *(undefined8 *)(lVar19 + 0xac);
          local_120 = *(undefined4 *)(lVar19 + 0xbc);
          local_128 = *(undefined8 *)(lVar19 + 0xb4);
          local_158 = *(uint **)param_4;
          local_150 = param_4[2];
          fVar23 = 1.0 - fVar22;
          local_178 = *(float **)pfVar10;
          local_170 = pfVar10[2];
          cVar11 = FUN_1407f61f0(lVar19 + 0xd8,&local_178,&local_158,&local_138);
          if (cVar11 != '\0') {
            *param_5 = fVar22 * *param_5 + (float)local_138 * fVar23;
            param_5[1] = fVar22 * param_5[1] + local_138._4_4_ * fVar23;
            param_5[3] = uStack_130._4_4_ * fVar23 + fVar22 * param_5[3];
            param_5[4] = (float)local_128 * fVar23 + fVar22 * param_5[4];
            param_5[5] = fVar22 * param_5[5] + local_128._4_4_ * fVar23;
            param_5[2] = fVar22 * param_5[2] + (float)uStack_130 * fVar23;
          }
        }
        uVar18 = 1;
        goto LAB_1407f880b;
      }
    }
    uVar18 = 0;
  }
LAB_1407f880b:
  if (local_118 != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_118 + 4));
  }
  plVar14 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_110 + 1;
    lVar19 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  return uVar18;
}



// FUNCTION 1407f8890 FUN_1407f8890 body=333 status=ok
// SIG undefined FUN_1407f8890(void)

ulonglong FUN_1407f8890(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (0 < *(longlong *)(param_1 + 0x18))) {
    uVar6 = 0;
    LOCK();
    bVar7 = *(int *)(param_1 + 0x20) == 0;
    if (bVar7) {
      *(int *)(param_1 + 0x20) = 0;
    }
    UNLOCK();
    if (bVar7) {
      uVar3 = param_3 * param_4;
      uVar5 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10);
      if (uVar3 - uVar5 == 0 || (longlong)uVar3 < (longlong)uVar5) {
        uVar5 = uVar3;
      }
      if (0 < (longlong)uVar5) {
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                           (*(longlong **)(param_1 + 8),*(longlong *)(param_1 + 0x10),uVar5,3,0,
                            param_2);
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        cVar2 = *(char *)((longlong)plVar4 + 0x71);
        while( true ) {
          if (cVar2 == '\0') {
            (**(code **)(*plVar4 + 8))(plVar4,0x3c87fcb9);
          }
          LOCK();
          bVar7 = *(int *)(param_1 + 0x20) == 0;
          if (bVar7) {
            *(int *)(param_1 + 0x20) = 0;
          }
          UNLOCK();
          if (!bVar7) break;
          if (*(char *)((longlong)plVar4 + 0x71) != '\0') {
            lVar1 = plVar4[2];
            uVar6 = 0;
            if (((*(char *)((longlong)plVar4 + 0x73) == '\0') || (lVar1 == 0)) &&
               (plVar4[2] = 0, lVar1 != 0)) {
              *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar5;
              uVar6 = uVar5 / param_3;
            }
LAB_1407f89a4:
            if (plVar4 == (longlong *)0x0) {
              return uVar6;
            }
            (**(code **)*plVar4)(plVar4,1);
            return uVar6;
          }
          cVar2 = '\0';
        }
        if (*(char *)((longlong)plVar4 + 0x73) == '\0') {
          *(undefined1 *)((longlong)plVar4 + 0x73) = 1;
          *(undefined1 *)(plVar4 + 0xe) = 1;
          if (*(char *)((longlong)plVar4 + 0x71) == '\0') {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        goto LAB_1407f89a4;
      }
    }
  }
  return 0;
}



// FUNCTION 1407f89e0 FUN_1407f89e0 body=48 status=ok
// SIG undefined FUN_1407f89e0(void)

void FUN_1407f89e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FMemory::GetAllocSize(param_2);
  FMemory::Realloc(param_2,param_3,0);
  return;
}



// FUNCTION 1407f8a10 FUN_1407f8a10 body=487 status=ok
// SIG undefined FUN_1407f8a10(void)

void FUN_1407f8a10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined1 local_res8 [8];
  longlong local_res18;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong **local_20;
  longlong *local_18;
  longlong *plStack_10;
  
  if (param_1 != 0) {
    if (DAT_146264fe8 != DAT_146265014) {
      puVar6 = DAT_146265020;
      if (DAT_146265020 == (undefined *)0x0) {
        puVar6 = &DAT_146265018;
      }
      for (iVar3 = *(int *)(puVar6 + ((longlong)
                                      ((int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) &
                                     (longlong)DAT_146265028 - 1U) * 4); iVar3 != -1;
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + DAT_146264fe0)) {
        if (*(longlong *)((longlong)iVar3 * 0x20 + DAT_146264fe0) == param_1) {
          if (iVar3 != -1) {
            FUN_1407f9040(&DAT_146264fe0,param_1);
          }
          break;
        }
      }
    }
    plStack_30 = (longlong *)operator_new(0x58);
    if (plStack_30 == (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plStack_30 + 1) = 1;
      *(undefined4 *)((longlong)plStack_30 + 0xc) = 1;
      *plStack_30 = (longlong)&PTR_FUN_1440f3548;
      plStack_30[2] = 0;
      plStack_30[3] = 0;
      plStack_30[4] = param_1;
      plStack_30[5] = param_2;
      InitializeCriticalSection((LPCRITICAL_SECTION)(plStack_30 + 6));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plStack_30 + 6),4000);
    }
    local_38 = plStack_30 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
    local_18 = local_38;
    plStack_10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    local_28 = &local_res18;
    local_20 = &local_18;
    local_res18 = param_1;
    FUN_1407f2fa0(&DAT_146264fe0,local_res8,&local_28,0);
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
    plVar5 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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



// FUNCTION 1407f8c00 FUN_1407f8c00 body=537 status=ok
// SIG undefined FUN_1407f8c00(void)

void FUN_1407f8c00(longlong *param_1)

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
        if (bVar4) goto LAB_1407f8d3f;
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
LAB_1407f8d3f:
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
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x50 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0x4c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 9) =
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



// FUNCTION 1407f8e20 FUN_1407f8e20 body=533 status=ok
// SIG undefined FUN_1407f8e20(void)

void FUN_1407f8e20(longlong *param_1)

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
        if (bVar4) goto LAB_1407f8f5f;
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
LAB_1407f8f5f:
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
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0x1c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 3) =
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



// FUNCTION 1407f9040 FUN_1407f9040 body=339 status=ok
// SIG undefined FUN_1407f9040(void)

undefined8 FUN_1407f9040(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
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
  iVar6 = *(int *)((longlong)plVar7 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) & uVar8) * 4)
  ;
  if (iVar6 == -1) {
    return 0;
  }
  lVar3 = *param_1;
  while( true ) {
    lVar4 = (longlong)iVar6 * 0x20;
    if (*(longlong *)(lVar4 + lVar3) == param_2) break;
    iVar6 = *(int *)(lVar4 + 0x18 + lVar3);
    if (iVar6 == -1) {
      return 0;
    }
  }
  lVar4 = (longlong)iVar6 * 0x20;
  uVar8 = (longlong)*(int *)(lVar4 + 0x1c + lVar3) & uVar8;
  piVar5 = (int *)((longlong)plVar7 + uVar8 * 4);
  iVar2 = *(int *)((longlong)plVar7 + uVar8 * 4);
  do {
    if (iVar2 == -1) {
LAB_1407f9110:
      plVar7 = *(longlong **)(lVar4 + 0x10 + *param_1);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar5 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      return 1;
    }
    if (iVar2 == iVar6) {
      *piVar5 = *(int *)(lVar4 + lVar3 + 0x18);
      goto LAB_1407f9110;
    }
    piVar5 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
    iVar2 = *piVar5;
  } while( true );
}



// FUNCTION 1407f91a0 FUN_1407f91a0 body=515 status=ok
// SIG undefined FUN_1407f91a0(void)

void FUN_1407f91a0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x278);
      do {
        *(undefined4 *)(plVar2 + 1) = 0;
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FUN_1407f6050(plVar2 + -8,0);
        if (plVar2[-4] != 0) {
          FMemory::Free();
        }
        if (plVar2[-8] != 0) {
          FMemory::Free();
        }
        if (plVar2[-0xb] != 0) {
          FMemory::Free();
        }
        *(undefined4 *)(plVar2 + -0xc) = 0;
        if (plVar2[-0xd] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar2 + -0x15);
        if (plVar2[-0x36] != 0) {
          FMemory::Free();
        }
        FUN_1407f4240(plVar2 + -0x3e);
        if (plVar2[-0x40] != 0) {
          FMemory::Free();
        }
        if (plVar2[-0x42] != 0) {
          FMemory::Free();
        }
        TArray<FMorphTargetLODModel,FDefaultAllocator>::
        ~TArray<FMorphTargetLODModel,FDefaultAllocator>(plVar2 + -0x4e);
        plVar2 = plVar2 + 0x52;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      FUN_1407f9600(param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x278);
      do {
        *(undefined4 *)(plVar2 + 1) = 0;
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FUN_1407f6050(plVar2 + -8,0);
        if (plVar2[-4] != 0) {
          FMemory::Free();
        }
        if (plVar2[-8] != 0) {
          FMemory::Free();
        }
        if (plVar2[-0xb] != 0) {
          FMemory::Free();
        }
        *(undefined4 *)(plVar2 + -0xc) = 0;
        if (plVar2[-0xd] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (plVar2 + -0x15);
        if (plVar2[-0x36] != 0) {
          FMemory::Free();
        }
        FUN_1407f4240(plVar2 + -0x3e);
        if (plVar2[-0x40] != 0) {
          FMemory::Free();
        }
        if (plVar2[-0x42] != 0) {
          FMemory::Free();
        }
        TArray<FMorphTargetLODModel,FDefaultAllocator>::
        ~TArray<FMorphTargetLODModel,FDefaultAllocator>(plVar2 + -0x4e);
        plVar2 = plVar2 + 0x52;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1407f93b0 Reset body=326 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      plVar3 = *(longlong **)((longlong)local_1c * 0x20 + *local_38 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar7 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar4 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar6 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar7;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(lVar5 + uVar6 * 4) = 0xffffffff;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 1407f9500 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<656,16>_>,TSizedDefaultAllocator<32>_>::
     ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x290,0);
  iVar4 = (int)(uVar3 / 0x290);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x290,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1407f9590 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar1;
    TInlineAllocator<8,FDefaultAllocator>::ForElementType<USkeletalMeshComponent_*>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,8);
  }
  return;
}



// FUNCTION 1407f9600 FUN_1407f9600 body=118 status=ok
// SIG undefined FUN_1407f9600(void)

void FUN_1407f9600(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x290,0);
    iVar3 = (int)(uVar1 / 0x290);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x290,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1407f96c0 thunk_FUN_14234e7d0 body=5 status=ok
// SIG undefined thunk_FUN_14234e7d0(void)

void thunk_FUN_14234e7d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_141763960();
  if (*(char *)(param_1 + 0x14c) != '\0') {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      return;
    }
    *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xef;
    *(undefined1 *)(param_1 + 0xca) = 0;
  }
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) &&
     ((((*(ulonglong *)(param_2 + 0x30) >> 0x16 & 1) != 0 ||
       ((*(ulonglong *)(param_2 + 0x30) >> 0xc & 1) == 0)) &&
      (cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar1 == '\0')))) {
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 8;
  }
  return;
}



// FUNCTION 1407f96d0 FUN_1407f96d0 body=3489 status=ok
// SIG undefined FUN_1407f96d0(void)

char FUN_1407f96d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  void **ppvVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 uVar5;
  void *_Src;
  int iVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  float *pfVar13;
  longlong *plVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float *pfVar19;
  longlong *plVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  char local_res18;
  char local_res20;
  float local_168 [2];
  longlong local_160;
  int local_158;
  int local_154;
  int local_150 [2];
  longlong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 uStack_138;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 local_124;
  void *local_118;
  ulonglong local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [22];
  
  FUN_1407f6c50(&local_108,param_1);
  if (local_108 == (longlong *)0x0) {
    cVar7 = '\0';
  }
  else {
    lVar17 = *local_108;
    local_res18 = '\x01';
    lVar11 = (longlong)(int)local_108[1] * 0x290 + lVar17;
    cVar7 = '\x01';
    local_160 = lVar11;
    if (lVar17 != lVar11) {
      do {
        if (*(longlong *)(lVar17 + 0x1c8) != 0) {
          fVar27 = *(float *)(param_2 + 7);
          uVar25 = (ulonglong)(int)fVar27;
          if ((1 < (int)fVar27) || (local_res20 = '\0', DAT_14685dbb4 != '\0')) {
            local_res20 = '\x01';
          }
          if (*(char *)(lVar17 + 0x44) != '\0') {
            bVar26 = false;
            fVar29 = 0.0;
            plVar22 = (longlong *)param_2[6];
            if ((longlong *)param_2[6] == (longlong *)0x0) {
              plVar22 = param_2;
            }
            plVar3 = plVar22 + uVar25 * 3;
            if (plVar22 != plVar3) {
              pfVar19 = (float *)((longlong)plVar22 + 0xc);
              fVar29 = 0.0;
              bVar26 = false;
              do {
                if (*(int *)(lVar17 + 0x1d8) != *(int *)(lVar17 + 0x204)) {
                  lVar11 = *plVar22;
                  lVar10 = *(longlong *)(lVar17 + 0x210);
                  if (*(longlong *)(lVar17 + 0x210) == 0) {
                    lVar10 = lVar17 + 0x208;
                  }
                  fVar28 = *(float *)(lVar10 + ((longlong)
                                                ((int)((ulonglong)lVar11 >> 0x20) * 0x17 +
                                                (int)lVar11) &
                                               (longlong)*(int *)(lVar17 + 0x218) - 1U) * 4);
                  if (fVar28 != -NAN) {
                    do {
                      pfVar13 = (float *)((longlong)(int)fVar28 * 0x20 +
                                         *(longlong *)(lVar17 + 0x1d0));
                      if (*(longlong *)pfVar13 == lVar11) {
                        if (fVar28 != -NAN) goto LAB_1407f98d1;
                        break;
                      }
                      fVar28 = pfVar13[6];
                    } while (fVar28 != -NAN);
                  }
                }
                pfVar13 = (float *)0x0;
LAB_1407f98d1:
                pfVar9 = pfVar13 + 2;
                if (pfVar13 == (float *)0x0) {
                  pfVar9 = (float *)0x0;
                }
                if (pfVar9 == (float *)0x0) {
                  bVar26 = true;
                }
                else {
                  fVar29 = (float)((int)fVar29 + 1);
                  fVar28 = *(float *)(lVar17 + 0x48) * *(float *)(lVar17 + 0x50);
                  if (fVar28 * fVar28 <=
                      (*pfVar9 - pfVar19[-1]) * (*pfVar9 - pfVar19[-1]) +
                      (pfVar9[1] - *pfVar19) * (pfVar9[1] - *pfVar19) +
                      (pfVar9[2] - pfVar19[1]) * (pfVar9[2] - pfVar19[1])) {
                    bVar26 = true;
                  }
                }
                plVar22 = plVar22 + 3;
                pfVar19 = pfVar19 + 6;
              } while (plVar22 != plVar3);
              uVar25 = (ulonglong)(uint)fVar27;
            }
            local_168[0] = fVar27;
            if ((fVar29 != (float)(*(int *)(lVar17 + 0x1d8) - *(int *)(lVar17 + 0x204))) ||
               (fVar27 = (float)uVar25, fVar29 != (float)uVar25)) {
              FUN_1407f5f90(lVar17 + 0x1d0,uVar25 & 0xffffffff);
              lVar11 = param_2[7];
              *(undefined4 *)(lVar17 + 0x228) = 0;
              if (*(int *)(lVar17 + 0x22c) != (int)lVar11) {
                TArray<void_*,FDefaultAllocator>::ResizeTo();
              }
              FUN_1407f5f10(lVar17 + 0x238,(int)param_2[7]);
              bVar26 = true;
              fVar27 = *(float *)(param_2 + 7);
            }
            if (bVar26) {
              plVar22 = (longlong *)param_2[6];
              if ((longlong *)param_2[6] == (longlong *)0x0) {
                plVar22 = param_2;
              }
              plVar3 = plVar22 + (longlong)(int)fVar27 * 3;
              if (plVar22 != plVar3) {
                plVar12 = (longlong *)(lVar17 + 0x1d0);
                plVar20 = plVar22 + 1;
                do {
                  cVar7 = FUN_1438f1a00(*(undefined8 *)(lVar17 + 0x1c8),(int)*plVar20,
                                        *(undefined4 *)((longlong)plVar20 + 4),(int)plVar20[1],
                                        *(undefined4 *)(lVar17 + 0x48),
                                        *(undefined4 *)(lVar17 + 0x4c),local_res20);
                  if ((cVar7 == '\0') ||
                     (bVar26 = local_res18 == '\0', local_res18 = '\x01', bVar26)) {
                    local_res18 = '\0';
                  }
                  if (*(int *)(lVar17 + 0x1d8) != *(int *)(lVar17 + 0x204)) {
                    lVar11 = *plVar22;
                    lVar10 = *(longlong *)(lVar17 + 0x210);
                    if (*(longlong *)(lVar17 + 0x210) == 0) {
                      lVar10 = lVar17 + 0x208;
                    }
                    iVar21 = *(int *)(lVar10 + ((longlong)
                                                ((int)((ulonglong)lVar11 >> 0x20) * 0x17 +
                                                (int)lVar11) &
                                               (longlong)*(int *)(lVar17 + 0x218) - 1U) * 4);
                    if (iVar21 != -1) {
                      do {
                        plVar14 = (longlong *)((longlong)iVar21 * 0x20 + *plVar12);
                        if (*plVar14 == lVar11) {
                          if ((iVar21 != -1) && (plVar14 != (longlong *)0x0)) goto LAB_1407f9ac8;
                          break;
                        }
                        iVar21 = (int)plVar14[3];
                      } while (iVar21 != -1);
                    }
                  }
                  local_f8 = plVar22;
                  FUN_1407f2d10(plVar12,&local_158,&local_f8,0);
                  plVar14 = (longlong *)((longlong)local_158 * 0x20 + *plVar12);
LAB_1407f9ac8:
                  plVar22 = plVar22 + 3;
                  plVar14[1] = *plVar20;
                  plVar1 = plVar20 + 1;
                  plVar20 = plVar20 + 3;
                  *(int *)(plVar14 + 2) = (int)*plVar1;
                } while (plVar22 != plVar3);
                fVar27 = *(float *)(param_2 + 7);
              }
            }
          }
          local_168[0] = 0.0;
          plVar22 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar22 = param_2;
          }
          plVar3 = plVar22 + (longlong)(int)fVar27 * 3;
          if (plVar22 != plVar3) {
            plVar20 = (longlong *)(lVar17 + 0x220);
            do {
              plVar12 = (longlong *)*plVar20;
              iVar21 = *(int *)(lVar17 + 0x228);
              lVar11 = *plVar22;
              for (plVar14 = plVar12; plVar14 != plVar12 + iVar21; plVar14 = plVar14 + 1) {
                if (*plVar14 == lVar11) {
                  iVar8 = (int)((longlong)plVar14 - (longlong)plVar12 >> 3);
                  if (iVar8 != -1) goto LAB_1407f9b85;
                  break;
                }
              }
              *(int *)(lVar17 + 0x228) = iVar21 + 1;
              if (*(int *)(lVar17 + 0x22c) < iVar21 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar20,iVar21);
              }
              *(longlong *)(*plVar20 + (longlong)iVar21 * 8) = lVar11;
              iVar8 = iVar21;
LAB_1407f9b85:
              cVar7 = FUN_1438f1e40(*(undefined8 *)(lVar17 + 0x1c8),iVar8,(int)plVar22[1],
                                    *(undefined4 *)((longlong)plVar22 + 0xc),(int)plVar22[2],
                                    local_168,local_res20);
              if ((cVar7 == '\0') || (bVar26 = local_res18 == '\0', local_res18 = '\x01', bVar26)) {
                local_res18 = '\0';
              }
              fVar27 = SQRT(local_168[0]);
              if (0.0 <= fVar27) {
                if (0.25 <= fVar27) {
                  fVar27 = 0.25;
                }
              }
              else {
                fVar27 = 0.0;
              }
              plVar22 = plVar22 + 3;
              *(float *)(lVar17 + 0x230) = fVar27 * 4.0;
            } while (plVar22 != plVar3);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_14685dc60) && (_Init_thread_header(&DAT_14685dc60), DAT_14685dc60 == -1)) {
            atexit((_func_5014 *)&LAB_143e42220);
            _Init_thread_footer(&DAT_14685dc60);
          }
          lVar11 = local_160;
          if (local_res20 != '\0') {
            plVar22 = (longlong *)param_2[6];
            if ((longlong *)param_2[6] == (longlong *)0x0) {
              plVar22 = param_2;
            }
            plVar3 = plVar22 + (longlong)(int)param_2[7] * 3;
            if (plVar22 != plVar3) {
              pfVar19 = (float *)(plVar22 + 2);
              do {
                iVar21 = 0;
                DAT_14685dc58 = 0;
                if ((DAT_14685dc5c < 0) && (DAT_14685dc5c != 0)) {
                  TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
                            (&DAT_14685dc10);
                }
                fVar29 = 0.0;
                fVar27 = *(float *)(lVar17 + 0x1c);
                local_154 = 0;
                iVar8 = DAT_14685dc5c;
                iVar6 = local_154;
                iVar18 = DAT_14685dc58;
                if (0 < *(int *)(lVar17 + 0x90)) {
                  do {
                    pfVar13 = (float *)((longlong)iVar21 * 0x40 + *(longlong *)(lVar17 + 0x88));
                    fVar28 = (pfVar13[1] - pfVar19[-1]) * (pfVar13[1] - pfVar19[-1]) +
                             (*pfVar13 - pfVar19[-2]) * (*pfVar13 - pfVar19[-2]) +
                             (pfVar13[2] - *pfVar19) * (pfVar13[2] - *pfVar19);
                    if (fVar28 < fVar27 * fVar27 * 10000.0) {
                      piVar15 = DAT_14685dc50;
                      if (DAT_14685dc50 == (int *)0x0) {
                        piVar15 = (int *)&DAT_14685dc10;
                      }
                      piVar4 = piVar15 + (longlong)iVar18 * 2;
                      fVar28 = fVar27 * 100.0 - SQRT(fVar28);
                      for (; piVar15 != piVar4; piVar15 = piVar15 + 2) {
                        if (*piVar15 == iVar21) {
                          if (piVar15 != (int *)0x0) goto LAB_1407f9de6;
                          break;
                        }
                      }
                      DAT_14685dc58 = iVar18 + 1;
                      if (iVar8 < DAT_14685dc58) {
                        TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::
                        ResizeGrow(&DAT_14685dc10,iVar18);
                      }
                      lVar11 = (longlong)iVar18;
                      piVar15 = DAT_14685dc50;
                      if (DAT_14685dc50 == (int *)0x0) {
                        piVar15 = (int *)&DAT_14685dc10;
                      }
                      piVar15[lVar11 * 2] = iVar21;
                      piVar15[lVar11 * 2 + 1] = 0;
                      piVar15 = DAT_14685dc50;
                      if (DAT_14685dc50 == (int *)0x0) {
                        piVar15 = (int *)&DAT_14685dc10;
                      }
                      piVar15 = piVar15 + lVar11 * 2;
LAB_1407f9de6:
                      piVar15[1] = (int)fVar28;
                      fVar29 = fVar29 + fVar28;
                      iVar8 = DAT_14685dc5c;
                      iVar18 = DAT_14685dc58;
                    }
                    iVar21 = iVar21 + 1;
                    iVar6 = iVar21;
                  } while (iVar21 < *(int *)(lVar17 + 0x90));
                }
                local_154 = iVar6;
                fVar27 = fVar29 / (fVar27 * 100.0 + 0.0001);
                if (0.0 <= fVar27) {
                  if (1.0 <= fVar27) {
                    fVar27 = 1.0;
                  }
                }
                else {
                  fVar27 = 0.0;
                }
                local_13c = 0x3f800000;
                uStack_128 = 0;
                local_124 = 1;
                local_118 = (void *)0x0;
                local_110 = 0;
                *(float *)(lVar17 + 0x288) = fVar27;
                uStack_138 = 0;
                fStack_130 = 0.0;
                uStack_12c = 0;
                if (0.0 < fVar29) {
                  local_110 = 0x20;
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_118);
                  _Src = local_118;
                  _guard_xfg_dispatch_icall_nop(local_118,0,0x80);
                  piVar15 = DAT_14685dc50;
                  if (DAT_14685dc50 == (int *)0x0) {
                    piVar15 = (int *)&DAT_14685dc10;
                  }
                  piVar4 = piVar15 + (longlong)DAT_14685dc58 * 2;
                  fVar27 = local_124._4_4_;
                  if (piVar15 != piVar4) {
                    fVar29 = 1.0 / fVar29;
                    lVar11 = -(longlong)_Src;
                    do {
                      uVar5 = *(undefined8 *)piVar15;
                      lVar10 = *(longlong *)(lVar17 + 0x88);
                      iVar21 = (int)uVar5;
                      local_f0._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
                      lVar16 = (longlong)iVar21 * 0x40;
                      lVar23 = 2;
                      lVar24 = (longlong)iVar21 * 0x40;
                      fStack_130 = fStack_130 +
                                   local_f0._4_4_ * *(float *)(lVar16 + 0x18 + lVar10) * fVar29;
                      uStack_138._0_4_ =
                           (float)uStack_138 +
                           local_f0._4_4_ * *(float *)((longlong)iVar21 * 0x40 + 0x10 + lVar10) *
                           fVar29;
                      uStack_138._4_4_ =
                           uStack_138._4_4_ +
                           local_f0._4_4_ * *(float *)(lVar16 + 0x14 + lVar10) * fVar29;
                      pfVar13 = (float *)((longlong)_Src + 8);
                      fVar27 = fVar27 + local_f0._4_4_ * *(float *)(lVar16 + 0x28 + lVar10) * fVar29
                      ;
                      do {
                        pfVar13[-2] = local_f0._4_4_ *
                                      *(float *)((longlong)pfVar13 +
                                                lVar11 + *(longlong *)
                                                          (*(longlong *)(lVar17 + 0x88) + 0x30 +
                                                          lVar24) + -8) * fVar29 + pfVar13[-2];
                        pfVar13[-1] = local_f0._4_4_ *
                                      *(float *)((longlong)pfVar13 +
                                                lVar11 + *(longlong *)
                                                          (*(longlong *)(lVar17 + 0x88) + 0x30 +
                                                          lVar24) + -4) * fVar29 + pfVar13[-1];
                        *pfVar13 = local_f0._4_4_ *
                                   *(float *)((longlong)pfVar13 +
                                             lVar11 + *(longlong *)
                                                       (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24
                                                       )) * fVar29 + *pfVar13;
                        pfVar13[1] = local_f0._4_4_ *
                                     *(float *)((longlong)pfVar13 +
                                               lVar11 + *(longlong *)
                                                         (*(longlong *)(lVar17 + 0x88) + 0x30 +
                                                         lVar24) + 4) * fVar29 + pfVar13[1];
                        pfVar13[2] = local_f0._4_4_ *
                                     *(float *)((longlong)pfVar13 +
                                               lVar11 + *(longlong *)
                                                         (*(longlong *)(lVar17 + 0x88) + 0x30 +
                                                         lVar24) + 8) * fVar29 + pfVar13[2];
                        pfVar13[3] = local_f0._4_4_ *
                                     *(float *)(*(longlong *)
                                                 (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                lVar11 + 0xc + (longlong)pfVar13) * fVar29 +
                                     pfVar13[3];
                        pfVar13[4] = local_f0._4_4_ *
                                     *(float *)(*(longlong *)
                                                 (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                lVar11 + 0x10 + (longlong)pfVar13) * fVar29 +
                                     pfVar13[4];
                        pfVar13[5] = local_f0._4_4_ *
                                     *(float *)(*(longlong *)
                                                 (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                lVar11 + 0x14 + (longlong)pfVar13) * fVar29 +
                                     pfVar13[5];
                        pfVar13[6] = local_f0._4_4_ *
                                     *(float *)(*(longlong *)
                                                 (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                lVar11 + 0x18 + (longlong)pfVar13) * fVar29 +
                                     pfVar13[6];
                        pfVar13[7] = local_f0._4_4_ *
                                     *(float *)(*(longlong *)
                                                 (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                lVar11 + 0x1c + (longlong)pfVar13) * fVar29 +
                                     pfVar13[7];
                        pfVar13[8] = local_f0._4_4_ *
                                     *(float *)(*(longlong *)
                                                 (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                lVar11 + 0x20 + (longlong)pfVar13) * fVar29 +
                                     pfVar13[8];
                        pfVar13[9] = local_f0._4_4_ *
                                     *(float *)(*(longlong *)
                                                 (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                lVar11 + 0x24 + (longlong)pfVar13) * fVar29 +
                                     pfVar13[9];
                        pfVar13[10] = local_f0._4_4_ *
                                      *(float *)(*(longlong *)
                                                  (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                 lVar11 + 0x28 + (longlong)pfVar13) * fVar29 +
                                      pfVar13[10];
                        pfVar13[0xb] = local_f0._4_4_ *
                                       *(float *)(*(longlong *)
                                                   (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                  lVar11 + 0x2c + (longlong)pfVar13) * fVar29 +
                                       pfVar13[0xb];
                        pfVar13[0xc] = local_f0._4_4_ *
                                       *(float *)(*(longlong *)
                                                   (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                  lVar11 + 0x30 + (longlong)pfVar13) * fVar29 +
                                       pfVar13[0xc];
                        pfVar13[0xd] = local_f0._4_4_ *
                                       *(float *)(*(longlong *)
                                                   (*(longlong *)(lVar17 + 0x88) + 0x30 + lVar24) +
                                                  lVar11 + 0x34 + (longlong)pfVar13) * fVar29 +
                                       pfVar13[0xd];
                        pfVar13 = pfVar13 + 0x10;
                        lVar23 = lVar23 + -1;
                      } while (lVar23 != 0);
                      piVar15 = piVar15 + 2;
                    } while (piVar15 != piVar4);
                    local_124 = CONCAT44(fVar27,(undefined4)local_124);
                    local_f0 = uVar5;
                  }
                  plVar20 = (longlong *)(lVar17 + 0x238);
                  if (*(int *)(lVar17 + 0x240) != *(int *)(lVar17 + 0x26c)) {
                    lVar11 = *plVar22;
                    lVar10 = *(longlong *)(lVar17 + 0x278);
                    if (*(longlong *)(lVar17 + 0x278) == 0) {
                      lVar10 = lVar17 + 0x270;
                    }
                    iVar21 = *(int *)(lVar10 + ((longlong)
                                                ((int)((ulonglong)lVar11 >> 0x20) * 0x17 +
                                                (int)lVar11) &
                                               (longlong)*(int *)(lVar17 + 0x280) - 1U) * 4);
                    if (iVar21 != -1) {
                      do {
                        plVar12 = (longlong *)((longlong)iVar21 * 0x50 + *plVar20);
                        if (*plVar12 == lVar11) {
                          if ((iVar21 != -1) && (plVar12 != (longlong *)0x0)) goto LAB_1407fa2b2;
                          break;
                        }
                        iVar21 = (int)plVar12[9];
                      } while (iVar21 != -1);
                    }
                  }
                  local_e8[0] = plVar22;
                  FUN_1407f2a10(plVar20,local_150,local_e8);
                  plVar12 = (longlong *)((longlong)local_150[0] * 0x50 + *plVar20);
LAB_1407fa2b2:
                  ppvVar2 = (void **)(plVar12 + 7);
                  plVar12[1] = local_148;
                  *(undefined4 *)(plVar12 + 2) = local_140;
                  *(undefined4 *)((longlong)plVar12 + 0x14) = local_13c;
                  *(float *)(plVar12 + 3) = (float)uStack_138;
                  *(float *)((longlong)plVar12 + 0x1c) = uStack_138._4_4_;
                  *(float *)(plVar12 + 4) = fStack_130;
                  *(ulonglong *)((longlong)plVar12 + 0x24) = CONCAT44(uStack_128,uStack_12c);
                  *(undefined4 *)((longlong)plVar12 + 0x2c) = (undefined4)local_124;
                  *(float *)(plVar12 + 6) = fVar27;
                  if (ppvVar2 != &local_118) {
                    lVar11 = (longlong)(int)local_110;
                    *(int *)(plVar12 + 8) = (int)local_110;
                    if (((int)local_110 == 0) && (*(int *)((longlong)plVar12 + 0x44) == 0)) {
                      *(undefined4 *)((longlong)plVar12 + 0x44) = 0;
                    }
                    else {
                      TArray<int,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_110 & 0xffffffff);
                      _guard_xfg_dispatch_icall_nop(*ppvVar2,_Src,lVar11 << 2);
                    }
                  }
                  if (_Src != (void *)0x0) {
                    FMemory::Free(_Src);
                  }
                }
                plVar22 = plVar22 + 3;
                pfVar19 = pfVar19 + 6;
                lVar11 = local_160;
              } while (plVar22 != plVar3);
            }
          }
        }
        lVar17 = lVar17 + 0x290;
        cVar7 = local_res18;
      } while (lVar17 != lVar11);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_108 + 4));
  }
  plVar22 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar17 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar15 = (int *)((longlong)plVar22 + 0xc);
      iVar21 = *piVar15;
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return cVar7;
}



// FUNCTION 1407fa480 FUN_1407fa480 body=817 status=ok
// SIG undefined FUN_1407fa480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407fa480(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  undefined1 *local_1c0;
  undefined *local_1b8;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  float local_198;
  float local_190 [2];
  longlong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  float *local_170;
  undefined8 local_168;
  float fStack_160;
  undefined4 uStack_15c;
  float *local_158;
  undefined1 local_148 [12];
  float local_13c;
  undefined1 local_b8 [16];
  undefined1 local_a8;
  undefined2 local_a5;
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FUN_1422409a0();
  if (*(char *)((longlong)param_1 + 0x45c) != '\0') {
    local_1a0 = 0;
    local_198 = 0.0;
    if ((DAT_1468536c6 != '\0') || (uVar5 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
      uVar5 = 0;
    }
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    local_188 = FUN_14059b380(uVar5,uVar4,&local_1a0,0);
    if (local_188 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14685dc08) &&
         (_Init_thread_header(&DAT_14685dc08), DAT_14685dc08 == -1)) {
        FName::FName(&DAT_14685dc00,L"SphereTraceSingle",1);
        _Init_thread_footer(&DAT_14685dc08);
      }
      local_1d8 = param_1;
      FUN_1422ffb20(local_b8,DAT_14685dc00,local_1a8,0);
      local_a5 = 0;
      local_a8 = 1;
      local_1a0 = *(undefined8 *)(local_188 + 0x2e0);
      local_198 = *(float *)(local_188 + 0x2e8);
      _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
      local_168._0_4_ = (float)local_1a0 + 1000.0;
      local_168._4_4_ = local_1a0._4_4_ + 1000.0;
      local_13c = 1.0;
      fStack_160 = local_198 + 1000.0;
      local_180 = (longlong *)CONCAT44((int)param_1[0x8b],2);
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      local_1b8 = &DAT_146aefe68;
      local_1c0 = local_b8;
      local_1c8 = &local_180;
      local_1d0 = 0;
      local_1d8 = (longlong *)&DAT_1464aa810;
      cVar3 = UWorld::SweepSingleByChannel(uVar5,local_148,&local_1a0,&local_168);
      fVar8 = local_13c;
      if (cVar3 == '\0') {
        fVar8 = 1.0;
      }
      local_180 = &local_188;
      plVar1 = param_1 + 0x8c;
      local_170 = local_190;
      local_190[0] = fVar8 * 3.0 + 1.0;
      uStack_178._0_4_ = SUB84(param_1,0);
      uStack_178._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
      fStack_160 = (float)(undefined4)uStack_178;
      uStack_15c = uStack_178._4_4_;
      uStack_178 = param_1;
      local_158 = local_170;
      local_168 = local_180;
      lVar6 = FUN_1407f3270(plVar1,&local_168);
      if (lVar6 == 0) {
        iVar2 = (int)param_1[0x8d];
        *(int *)(param_1 + 0x8d) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0x46c) < iVar2 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        lVar6 = *plVar1;
        *(undefined8 *)(lVar6 + (longlong)iVar2 * 0xc) = local_1a0;
        *(float *)(lVar6 + 8 + (longlong)iVar2 * 0xc) = local_198;
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
    }
    lVar7 = param_1[0x8c];
    lVar6 = lVar7 + (longlong)(int)param_1[0x8d] * 0xc;
    for (; lVar7 != lVar6; lVar7 = lVar7 + 0xc) {
      (**(code **)(*param_1 + 0x148))(param_1);
    }
  }
  return;
}



// FUNCTION 1407fa7c0 FUN_1407fa7c0 body=145 status=ok
// SIG undefined FUN_1407fa7c0(void)

void FUN_1407fa7c0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x2d0);
  lVar3 = (longlong)*(int *)(param_1 + 0x2d8) * 0x178 + lVar4;
  if (lVar4 != lVar3) {
    piVar2 = (int *)(lVar4 + 0x16c);
    do {
      if (*piVar2 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x120);
        if (lVar1 == 0) {
          lVar1 = FUN_1423407b0(param_1);
        }
        FUN_1407fa860(lVar1,*piVar2);
        *piVar2 = -1;
      }
      lVar4 = lVar4 + 0x178;
      piVar2 = piVar2 + 0x5e;
    } while (lVar4 != lVar3);
  }
  return;
}



// FUNCTION 1407fa860 FUN_1407fa860 body=272 status=ok
// SIG undefined FUN_1407fa860(void)

void FUN_1407fa860(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  int *piVar7;
  int local_res18 [4];
  undefined8 *local_28;
  longlong *local_20;
  
  FUN_1407f6c50(&local_28,param_1);
  if (local_28 != (undefined8 *)0x0) {
    piVar7 = (int *)*local_28;
    piVar6 = piVar7 + (longlong)*(int *)(local_28 + 1) * 0xa4;
    for (; piVar7 != piVar6; piVar7 = piVar7 + 0xa4) {
      if ((*piVar7 == param_2) && (*(longlong *)(piVar7 + 0x72) != 0)) {
        FUN_1438f16c0();
        if (*(longlong **)(piVar7 + 0x70) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(piVar7 + 0x70) + 0x28))();
          puVar3 = *(undefined8 **)(piVar7 + 0x70);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          piVar7[0x70] = 0;
          piVar7[0x71] = 0;
        }
      }
    }
    local_res18[0] = param_2;
    FUN_1407f3340(local_28,local_res18);
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 4));
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
      piVar7 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 1407fa970 FUN_1407fa970 body=467 status=ok
// SIG undefined FUN_1407fa970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407fa970(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  if (param_1 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
    FUN_1407f96d0();
    iVar3 = *(int *)(param_2 + 7);
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_3);
    }
    iVar3 = *(int *)(param_2 + 7);
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
                (param_4);
    }
    puVar6 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar6 = param_2;
    }
    puVar1 = puVar6 + (longlong)*(int *)(param_2 + 7) * 3;
    for (; puVar6 != puVar1; puVar6 = puVar6 + 3) {
      local_d8[0] = 0;
      cVar5 = FUN_1407f6db0(param_1,*puVar6,local_d8);
      if (cVar5 != '\0') {
        iVar3 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = local_d8[0];
      }
      cVar5 = FUN_1407f66f0(param_1,*puVar6,&local_c8);
      if (cVar5 != '\0') {
        iVar3 = (int)param_4[1];
        *(int *)(param_4 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar3 + 1) {
          TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(param_4);
        }
        lVar7 = (longlong)iVar3 * 0x80;
        _guard_xfg_dispatch_icall_nop((void *)(*param_4 + lVar7),0,0x80);
        if (iVar3 != -1) {
          lVar4 = *param_4;
          *(undefined8 *)(lVar7 + lVar4) = local_c8;
          ((undefined8 *)(lVar7 + lVar4))[1] = uStack_c0;
          puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar4);
          *puVar2 = local_b8;
          puVar2[1] = uStack_b0;
          puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar4);
          *puVar2 = local_a8;
          puVar2[1] = uStack_a0;
          puVar2 = (undefined8 *)(lVar7 + 0x30 + lVar4);
          *puVar2 = local_98;
          puVar2[1] = uStack_90;
          puVar2 = (undefined8 *)(lVar7 + 0x40 + lVar4);
          *puVar2 = local_88;
          puVar2[1] = uStack_80;
          puVar2 = (undefined8 *)(lVar7 + 0x50 + lVar4);
          *puVar2 = local_78;
          puVar2[1] = uStack_70;
          puVar2 = (undefined8 *)(lVar7 + 0x60 + lVar4);
          *puVar2 = local_68;
          puVar2[1] = uStack_60;
          puVar2 = (undefined8 *)(lVar7 + 0x70 + lVar4);
          *puVar2 = local_58;
          puVar2[1] = uStack_50;
        }
      }
    }
  }
  return;
}



// FUNCTION 1407fab70 FUN_1407fab70 body=18 status=ok
// SIG undefined FUN_1407fab70(void)

void FUN_1407fab70(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407fab7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1407fab90 FUN_1407fab90 body=13 status=ok
// SIG undefined FUN_1407fab90(void)

void FUN_1407fab90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001407fab9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10,0);
  return;
}



// FUNCTION 1407faba0 FUN_1407faba0 body=47 status=ok
// SIG undefined FUN_1407faba0(void)

longlong FUN_1407faba0(void)

{
  if (DAT_14685ddf0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
  }
  return DAT_14685ddf0;
}



// FUNCTION 1407fabd0 FUN_1407fabd0 body=47 status=ok
// SIG undefined FUN_1407fabd0(void)

longlong FUN_1407fabd0(void)

{
  if (DAT_14685dd98 == 0) {
    FUN_141786440(&DAT_14685dd98,&PTR_FUN_1440f4390);
  }
  return DAT_14685dd98;
}



// FUNCTION 1407fac00 FUN_1407fac00 body=47 status=ok
// SIG undefined FUN_1407fac00(void)

longlong FUN_1407fac00(void)

{
  if (DAT_14685dd70 == 0) {
    FUN_141786a30(&DAT_14685dd70,&PTR_FUN_146266110);
  }
  return DAT_14685dd70;
}



// FUNCTION 1407fac30 FUN_1407fac30 body=47 status=ok
// SIG undefined FUN_1407fac30(void)

longlong FUN_1407fac30(void)

{
  if (DAT_14685dd78 == 0) {
    FUN_141786a30(&DAT_14685dd78,&PTR_FUN_146266150);
  }
  return DAT_14685dd78;
}



// FUNCTION 1407fac60 FUN_1407fac60 body=47 status=ok
// SIG undefined FUN_1407fac60(void)

longlong FUN_1407fac60(void)

{
  if (DAT_14685dd80 == 0) {
    FUN_141786a30(&DAT_14685dd80,&PTR_FUN_146266190);
  }
  return DAT_14685dd80;
}



// FUNCTION 1407fac90 FUN_1407fac90 body=47 status=ok
// SIG undefined FUN_1407fac90(void)

longlong FUN_1407fac90(void)

{
  if (DAT_14685dd88 == 0) {
    FUN_141786a30(&DAT_14685dd88,&PTR_FUN_1462661d0);
  }
  return DAT_14685dd88;
}



// FUNCTION 1407facc0 FUN_1407facc0 body=47 status=ok
// SIG undefined FUN_1407facc0(void)

longlong FUN_1407facc0(void)

{
  if (DAT_14685dd90 == 0) {
    FUN_141786a30(&DAT_14685dd90,&PTR_FUN_146266210);
  }
  return DAT_14685dd90;
}



// FUNCTION 1407facf0 FUN_1407facf0 body=47 status=ok
// SIG undefined FUN_1407facf0(void)

longlong FUN_1407facf0(void)

{
  if (DAT_14685dde0 == 0) {
    FUN_141786440(&DAT_14685dde0,&PTR_FUN_1440f4ca0);
  }
  return DAT_14685dde0;
}



// FUNCTION 1407fad20 FUN_1407fad20 body=47 status=ok
// SIG undefined FUN_1407fad20(void)

longlong FUN_1407fad20(void)

{
  if (DAT_14685ddd8 == 0) {
    FUN_141786a30(&DAT_14685ddd8,&PTR_FUN_146266b20);
  }
  return DAT_14685ddd8;
}



// FUNCTION 1407fad50 FUN_1407fad50 body=53 status=ok
// SIG undefined FUN_1407fad50(void)

void FUN_1407fad50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 10;
    *puVar1 = &PTR_FUN_1440f5218;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1407fad90 FUN_1407fad90 body=53 status=ok
// SIG undefined FUN_1407fad90(void)

void FUN_1407fad90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x178;
    *puVar1 = &PTR_FUN_1440f5330;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407fadd0 FUN_1407fadd0 body=53 status=ok
// SIG undefined FUN_1407fadd0(void)

void FUN_1407fadd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1440f5448;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407fae10 FUN_1407fae10 body=53 status=ok
// SIG undefined FUN_1407fae10(void)

void FUN_1407fae10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1440f5560;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407fae50 FUN_1407fae50 body=53 status=ok
// SIG undefined FUN_1407fae50(void)

void FUN_1407fae50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &PTR_FUN_1440f5678;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407fae90 FUN_1407fae90 body=53 status=ok
// SIG undefined FUN_1407fae90(void)

void FUN_1407fae90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440f5790;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407faed0 FUN_1407faed0 body=53 status=ok
// SIG undefined FUN_1407faed0(void)

void FUN_1407faed0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_1440f58a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407faf70 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USequenceRenderSettings::GetPrivateStaticClass(void)

{
  if (DAT_14685de00 == 0) {
    FUN_14171ccd0(L"/Script/TritonRuntime",L"TritonSettings",&DAT_14685de00,FUN_140447710,0x38,
                  0x10000006,0,L"Game",&LAB_1407fb430,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14685de00;
}



// FUNCTION 1407fb020 FUN_1407fb020 body=162 status=ok
// SIG undefined FUN_1407fb020(void)

longlong FUN_1407fb020(void)

{
  if (DAT_14685dda0 == 0) {
    FUN_14171ccd0(L"/Script/TritonRuntime",L"TritonAcousticDataComponent",&DAT_14685dda0,
                  FUN_1407fbfe0,0x410,0x10000000,0,L"Engine",&LAB_1407fb410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_14685dda0;
}



// FUNCTION 1407fb0d0 FUN_1407fb0d0 body=162 status=ok
// SIG undefined FUN_1407fb0d0(void)

longlong FUN_1407fb0d0(void)

{
  if (DAT_14685ddb0 == 0) {
    FUN_14171ccd0(L"/Script/TritonRuntime",L"TritonZone",&DAT_14685ddb0,FUN_140447710,0x460,
                  0x10000000,0,L"Engine",&LAB_1407fb3f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14685ddb0;
}



// FUNCTION 1407fb180 FUN_1407fb180 body=162 status=ok
// SIG undefined FUN_1407fb180(void)

longlong FUN_1407fb180(void)

{
  if (DAT_14685ddc0 == 0) {
    FUN_14171ccd0(L"/Script/TritonRuntime",L"TritonVoxelOverrideVolume",&DAT_14685ddc0,FUN_140447710
                  ,0x490,0x10000000,0,L"Engine",&LAB_1407fb3d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_14685ddc0;
}



// FUNCTION 1407fb230 FUN_1407fb230 body=162 status=ok
// SIG undefined FUN_1407fb230(void)

longlong FUN_1407fb230(void)

{
  if (DAT_14685ddd0 == 0) {
    FUN_14171ccd0(L"/Script/TritonRuntime",L"TritonProbeHelper",&DAT_14685ddd0,FUN_140447710,0x470,
                  0x10000000,0,L"Engine",&LAB_1407fb390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14685ddd0;
}



// FUNCTION 1407fb2e0 FUN_1407fb2e0 body=162 status=ok
// SIG undefined FUN_1407fb2e0(void)

longlong FUN_1407fb2e0(void)

{
  if (DAT_14685dde8 == 0) {
    FUN_14171ccd0(L"/Script/TritonRuntime",L"TritonProbeLocationProvider",&DAT_14685dde8,
                  FUN_1407fbfb0,0x4b8,0x10000000,0,L"Engine",&LAB_1407fb3b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_14685dde8;
}



// FUNCTION 1407fb450 FUN_1407fb450 body=283 status=ok
// SIG undefined FUN_1407fb450(void)

undefined8 * FUN_1407fb450(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 2) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x41f00000;
  *(undefined4 *)(param_1 + 3) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x41a00000;
  *(undefined4 *)(param_1 + 4) = 0x3f000000;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x49742400;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 8) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 100;
  *(undefined4 *)(param_1 + 9) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 10;
  *(undefined4 *)(param_1 + 10) = 10;
  *(undefined4 *)((longlong)param_1 + 0x54) = 10;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x41f00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xb4;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xc0400000;
  *(undefined4 *)(param_1 + 0x1b) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x1c) = 0xc0000000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0xffffffff;
  return param_1;
}



// FUNCTION 1407fb570 FUN_1407fb570 body=393 status=ok
// SIG undefined FUN_1407fb570(void)

longlong * FUN_1407fb570(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if (param_1 != param_2) {
    plVar4 = (longlong *)*param_1;
    for (iVar6 = (int)param_1[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (plVar4[3] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 6;
    }
    iVar6 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      puVar8 = (undefined8 *)*param_1;
      if (iVar6 != 0) {
        piVar7 = (int *)(lVar2 + 8);
        puVar5 = (undefined4 *)((longlong)puVar8 + 0x24);
        do {
          *puVar8 = 0;
          iVar1 = *piVar7;
          pvVar3 = *(void **)(piVar7 + -2);
          puVar5[-7] = iVar1;
          if (iVar1 == 0) {
            puVar5[-6] = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar8,iVar1,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar3,(longlong)iVar1 * 2);
          }
          *(undefined8 *)(puVar5 + -5) = *(undefined8 *)(piVar7 + 2);
          *(undefined8 *)(puVar5 + -3) = 0;
          iVar1 = piVar7[6];
          pvVar3 = *(void **)(piVar7 + 4);
          puVar5[-1] = iVar1;
          if (iVar1 == 0) {
            *puVar5 = 0;
          }
          else {
            TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar5 + -3,iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + -3),pvVar3,(longlong)iVar1 * 0xc);
          }
          puVar8 = puVar8 + 6;
          *(char *)(puVar5 + 1) = (char)piVar7[8];
          piVar7 = piVar7 + 0xc;
          puVar5 = puVar5 + 0xc;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1407fb700 FUN_1407fb700 body=160 status=ok
// SIG undefined FUN_1407fb700(void)

undefined8 * FUN_1407fb700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = param_1 + 6;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  if (puVar1 != param_2 + 6) {
    _Src = (void *)param_2[6];
    iVar2 = *(int *)(param_2 + 7);
    *(int *)(param_1 + 7) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x3c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 2);
    }
  }
  return param_1;
}



// FUNCTION 1407fb7a0 FUN_1407fb7a0 body=664 status=ok
// SIG undefined FUN_1407fb7a0(void)

longlong FUN_1407fb7a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  FUN_1407fb570();
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  FString::operator=(param_1 + 0x60,param_2 + 0x60);
  FString::operator=(param_1 + 0x70,param_2 + 0x70);
  plVar1 = (longlong *)(param_1 + 0x80);
  if (plVar1 != (longlong *)(param_2 + 0x80)) {
    iVar11 = *(int *)(param_1 + 0x88);
    if (iVar11 != 0) {
      plVar8 = (longlong *)(*plVar1 + 0x30);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 8;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = *(int *)(param_2 + 0x88);
    lVar3 = *(longlong *)(param_2 + 0x80);
    *(int *)(param_1 + 0x88) = iVar11;
    if ((iVar11 == 0) && (*(int *)(param_1 + 0x8c) == 0)) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    else {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(plVar1,iVar11);
      puVar10 = (undefined8 *)*plVar1;
      if (iVar11 != 0) {
        puVar12 = (undefined4 *)(lVar3 + 0xc);
        puVar9 = (undefined4 *)((longlong)puVar10 + 0x3c);
        do {
          *puVar10 = *(undefined8 *)(puVar12 + -3);
          *(undefined4 *)(puVar10 + 1) = puVar12[-1];
          uVar4 = puVar12[1];
          uVar5 = puVar12[2];
          uVar6 = puVar12[3];
          puVar9[-0xc] = *puVar12;
          puVar9[-0xb] = uVar4;
          puVar9[-10] = uVar5;
          puVar9[-9] = uVar6;
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar12 + 4);
          puVar9[-6] = puVar12[6];
          puVar9[-5] = puVar12[7];
          *(undefined8 *)(puVar9 + -3) = 0;
          iVar2 = puVar12[0xb];
          _Src = *(void **)(puVar12 + 9);
          puVar9[-1] = iVar2;
          if (iVar2 == 0) {
            *puVar9 = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(puVar9 + -3,iVar2,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar9 + -3),_Src,(longlong)iVar2 << 2);
          }
          puVar10 = puVar10 + 8;
          puVar9 = puVar9 + 0x10;
          puVar12 = puVar12 + 0x10;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  FUN_1407fb700(param_1 + 0x90,param_2 + 0x90);
  uVar7 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar7;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  uVar7 = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xf4) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0x104) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x114) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x11c);
  *(undefined8 *)(param_1 + 0x124) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x134);
  *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_2 + 300);
  *(undefined8 *)(param_1 + 0x134) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x144);
  *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_2 + 0x13c);
  *(undefined8 *)(param_1 + 0x144) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x154);
  *(undefined8 *)(param_1 + 0x14c) = *(undefined8 *)(param_2 + 0x14c);
  *(undefined8 *)(param_1 + 0x154) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x164);
  *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(param_2 + 0x15c);
  *(undefined8 *)(param_1 + 0x164) = uVar7;
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  return param_1;
}



// FUNCTION 1407fbaf0 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FCachedGameState>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x178);
  FUN_1407fb450(param_2);
  return;
}



// FUNCTION 1407fbb90 FUN_1407fbb90 body=233 status=ok
// SIG undefined FUN_1407fbb90(void)

undefined8 FUN_1407fbb90(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined4 *)(param_3 + 0xc);
    do {
      *param_2 = *(undefined8 *)(puVar6 + -3);
      puVar1 = param_2 + 6;
      *(undefined4 *)(param_2 + 1) = puVar6[-1];
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      *(undefined4 *)((longlong)param_2 + 0xc) = *puVar6;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
      *(undefined4 *)(param_2 + 3) = uVar5;
      *(undefined8 *)((longlong)param_2 + 0x1c) = *(undefined8 *)(puVar6 + 4);
      *(undefined4 *)((longlong)param_2 + 0x24) = puVar6[6];
      *(undefined4 *)(param_2 + 5) = puVar6[7];
      if (puVar1 != (undefined8 *)(puVar6 + 9)) {
        iVar2 = puVar6[0xb];
        _Src = *(void **)(puVar6 + 9);
        *(int *)(param_2 + 7) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x3c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 2);
        }
      }
      puVar6 = puVar6 + 0x10;
      param_4 = param_4 + -1;
      param_2 = param_2 + 8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407fbc80 FUN_1407fbc80 body=74 status=ok
// SIG undefined FUN_1407fbc80(void)

undefined1 FUN_1407fbc80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1407fb7a0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x178;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407fbcd0 FUN_1407fbcd0 body=226 status=ok
// SIG undefined FUN_1407fbcd0(void)

undefined8 FUN_1407fbcd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x18);
    do {
      FString::operator=(param_2,puVar3 + -3);
      puVar1 = (undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
        }
      }
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 6;
      *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x30;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407fbe10 FUN_1407fbe10 body=79 status=ok
// SIG undefined FUN_1407fbe10(void)

void FUN_1407fbe10(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    FMemory::Free();
  }
  FUN_1407f4240(param_2 + 0x80);
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FMemory::Free();
  }
  TArray<FMorphTargetLODModel,FDefaultAllocator>::~TArray<FMorphTargetLODModel,FDefaultAllocator>
            (param_2);
  return;
}



// FUNCTION 1407fbe60 FUN_1407fbe60 body=47 status=ok
// SIG undefined FUN_1407fbe60(void)

void FUN_1407fbe60(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1407fbe90 FUN_1407fbe90 body=6 status=ok
// SIG undefined FUN_1407fbe90(void)

undefined8 FUN_1407fbe90(void)

{
  return 0x8933b220;
}



// FUNCTION 1407fbea0 FUN_1407fbea0 body=6 status=ok
// SIG undefined FUN_1407fbea0(void)

undefined8 FUN_1407fbea0(void)

{
  return 0xf0e95a1a;
}



// FUNCTION 1407fbeb0 FUN_1407fbeb0 body=6 status=ok
// SIG undefined FUN_1407fbeb0(void)

undefined8 FUN_1407fbeb0(void)

{
  return 0x17d2d10;
}



// FUNCTION 1407fbec0 FUN_1407fbec0 body=6 status=ok
// SIG undefined FUN_1407fbec0(void)

undefined8 FUN_1407fbec0(void)

{
  return 0x2ab688a1;
}



// FUNCTION 1407fbed0 FUN_1407fbed0 body=6 status=ok
// SIG undefined FUN_1407fbed0(void)

undefined8 FUN_1407fbed0(void)

{
  return 0x1028d801;
}



// FUNCTION 1407fbee0 FUN_1407fbee0 body=6 status=ok
// SIG undefined FUN_1407fbee0(void)

undefined8 FUN_1407fbee0(void)

{
  return 0xc832e633;
}



// FUNCTION 1407fbef0 FUN_1407fbef0 body=6 status=ok
// SIG undefined FUN_1407fbef0(void)

undefined8 FUN_1407fbef0(void)

{
  return 0xbcf41b23;
}



// FUNCTION 1407fbf00 FUN_1407fbf00 body=6 status=ok
// SIG undefined FUN_1407fbf00(void)

undefined8 FUN_1407fbf00(void)

{
  return 0x6cf5a60d;
}



// FUNCTION 1407fbf30 Serialize body=112 status=ok
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
  thunk_FUN_14234e7d0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1407fbfb0 FUN_1407fbfb0 body=34 status=ok
// SIG undefined FUN_1407fbfb0(void)

void FUN_1407fbfb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407fb2e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_FindProbeLocations_1440f5a10,1);
  return;
}



// FUNCTION 1407fbfe0 FUN_1407fbfe0 body=34 status=ok
// SIG undefined FUN_1407fbfe0(void)

void FUN_1407fbfe0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407fb020();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AuditProbeLocations_1440f59c0,5);
  return;
}



// FUNCTION 1407fc010 FUN_1407fc010 body=113 status=ok
// SIG undefined FUN_1407fc010(void)

void FUN_1407fc010(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685dcf0 == 0) {
    if (DAT_14685ddf0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
    }
    lVar1 = DAT_14685ddf0;
    uVar2 = FUN_1407fbe90();
    DAT_14685dcf0 = GetStaticStruct(FUN_1407fc4d0,lVar1,L"CachedPerProbeAcousticData",0xc,uVar2);
  }
  return;
}



// FUNCTION 1407fc090 FUN_1407fc090 body=113 status=ok
// SIG undefined FUN_1407fc090(void)

void FUN_1407fc090(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685dd20 == 0) {
    if (DAT_14685ddf0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
    }
    lVar1 = DAT_14685ddf0;
    uVar2 = FUN_1407fbea0();
    DAT_14685dd20 = GetStaticStruct(FUN_1407fc500,lVar1,L"FallbackAcousticData",0x40,uVar2);
  }
  return;
}



// FUNCTION 1407fc110 FUN_1407fc110 body=113 status=ok
// SIG undefined FUN_1407fc110(void)

void FUN_1407fc110(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685dd40 == 0) {
    if (DAT_14685ddf0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
    }
    lVar1 = DAT_14685ddf0;
    uVar2 = FUN_1407fbeb0();
    DAT_14685dd40 = GetStaticStruct(FUN_1407fc530,lVar1,L"TritonAdvancedParams",0x24,uVar2);
  }
  return;
}



// FUNCTION 1407fc190 FUN_1407fc190 body=113 status=ok
// SIG undefined FUN_1407fc190(void)

void FUN_1407fc190(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685dd60 == 0) {
    if (DAT_14685ddf0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
    }
    lVar1 = DAT_14685ddf0;
    uVar2 = FUN_1407fbec0();
    DAT_14685dd60 = GetStaticStruct(FUN_1407fc560,lVar1,L"TritonLayerFadeParams",0x14,uVar2);
  }
  return;
}



// FUNCTION 1407fc210 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_ControlRig_ExternalSource::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685dd10 == 0) {
    if (DAT_14685ddf0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
    }
    lVar1 = DAT_14685ddf0;
    uVar2 = FUN_1407fbed0();
    DAT_14685dd10 = GetStaticStruct(FUN_1407fc590,lVar1,L"TritonProbeLayer",0x178,uVar2);
  }
  return;
}



// FUNCTION 1407fc290 FUN_1407fc290 body=113 status=ok
// SIG undefined FUN_1407fc290(void)

void FUN_1407fc290(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685dd30 == 0) {
    if (DAT_14685ddf0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
    }
    lVar1 = DAT_14685ddf0;
    uVar2 = FUN_1407fbee0();
    DAT_14685dd30 = GetStaticStruct(FUN_1407fc5c0,lVar1,L"TritonProbeSet",0x30,uVar2);
  }
  return;
}



// FUNCTION 1407fc310 FUN_1407fc310 body=113 status=ok
// SIG undefined FUN_1407fc310(void)

void FUN_1407fc310(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685dd50 == 0) {
    if (DAT_14685ddf0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
    }
    lVar1 = DAT_14685ddf0;
    uVar2 = FUN_1407fbef0();
    DAT_14685dd50 = GetStaticStruct(FUN_1407fc5f0,lVar1,L"TritonSimulationParams",0x18,uVar2);
  }
  return;
}



// FUNCTION 1407fc390 FUN_1407fc390 body=113 status=ok
// SIG undefined FUN_1407fc390(void)

void FUN_1407fc390(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_14685dd00 == 0) {
    if (DAT_14685ddf0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_14685ddf0,&PTR_s__Script_TritonRuntime_1440f5a20);
    }
    lVar1 = DAT_14685ddf0;
    uVar2 = FUN_1407fbf00();
    DAT_14685dd00 = GetStaticStruct(FUN_1407fc620,lVar1,L"TritonUpdateDesc",10,uVar2);
  }
  return;
}



// FUNCTION 1407fc410 FUN_1407fc410 body=47 status=ok
// SIG undefined FUN_1407fc410(void)

longlong FUN_1407fc410(void)

{
  if (DAT_14685ddc8 == 0) {
    FUN_141786440(&DAT_14685ddc8,&PTR_FUN_1440f4a40);
  }
  return DAT_14685ddc8;
}



// FUNCTION 1407fc440 FUN_1407fc440 body=47 status=ok
// SIG undefined FUN_1407fc440(void)

longlong FUN_1407fc440(void)

{
  if (DAT_14685ddb8 == 0) {
    FUN_141786440(&DAT_14685ddb8,&PTR_FUN_1440f4900);
  }
  return DAT_14685ddb8;
}


