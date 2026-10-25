// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e41b80 FUN_140e41b80 body=132 status=ok
// SIG undefined FUN_140e41b80(void)

longlong FUN_140e41b80(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 140e41c10 FUN_140e41c10 body=90 status=ok
// SIG undefined FUN_140e41c10(void)

longlong FUN_140e41c10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  FUN_140e40de0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5f0);
  }
  return param_1;
}



// FUNCTION 140e41c70 FUN_140e41c70 body=270 status=ok
// SIG undefined FUN_140e41c70(void)

longlong FUN_140e41c70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_140e40a70(param_1 + 0x80);
  iVar4 = *(int *)(param_1 + 0x78);
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (iVar4 != 0) {
    do {
      FUN_140e40d40(lVar5);
      lVar5 = lVar5 + 0x58;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar5 = *(longlong *)(param_1 + 0x70);
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 140e41d80 FUN_140e41d80 body=114 status=ok
// SIG undefined FUN_140e41d80(void)

longlong FUN_140e41d80(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  FUN_14099adc0(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 140e41e00 FUN_140e41e00 body=191 status=ok
// SIG undefined FUN_140e41e00(void)

longlong FUN_140e41e00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x1f8);
  thunk_FUN_142478640(param_1 + 0x1ec);
  thunk_FUN_142478640(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x238);
  }
  return param_1;
}



// FUNCTION 140e41ec0 FUN_140e41ec0 body=97 status=ok
// SIG undefined FUN_140e41ec0(void)

longlong FUN_140e41ec0(longlong param_1,ulonglong param_2)

{
  FUN_14099adc0(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 140e41f30 FUN_140e41f30 body=262 status=ok
// SIG undefined FUN_140e41f30(void)

longlong FUN_140e41f30(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 200);
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
  plVar4 = *(longlong **)(param_1 + 0xb0);
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
  plVar4 = *(longlong **)(param_1 + 0x98);
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
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_1409f6540(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 140e42040 FUN_140e42040 body=314 status=ok
// SIG undefined FUN_140e42040(void)

longlong FUN_140e42040(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x240);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 400);
  lVar2 = *(longlong *)(param_1 + 0x188);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 0x10;
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar2);
      lVar2 = lVar2 + 0x20;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x188);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 140e42180 FUN_140e42180 body=97 status=ok
// SIG undefined FUN_140e42180(void)

longlong FUN_140e42180(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 140e421f0 FUN_140e421f0 body=451 status=ok
// SIG undefined FUN_140e421f0(void)

void FUN_140e421f0(longlong *param_1,int param_2,undefined1 param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int local_28;
  undefined1 local_24;
  char local_23;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 200);
  if (((lVar2 != 0) && (iVar3 = FUN_14233f450(param_1), iVar3 == 3)) && (0 < param_2)) {
    iVar3 = FUN_140a33780(lVar2);
    fVar8 = 1.0;
    if (param_4 == '\x01') {
      fVar8 = *(float *)((longlong)param_1 + 0x1e4);
    }
    else if (param_4 == '\x02') {
      fVar8 = *(float *)(param_1 + 0x3e);
    }
    uVar4 = *(uint *)((longlong)param_1 + 0x1dc);
    iVar7 = (int)(fVar8 * *(float *)((longlong)param_1 + 0x1fc) * (float)param_2);
    uVar1 = uVar4 + iVar7;
    if ((uVar4 <= uVar1) && (uVar4 = 0xffffffff, uVar1 != 0xffffffff)) {
      uVar4 = uVar1;
    }
    *(uint *)((longlong)param_1 + 0x1dc) = uVar4;
    (**(code **)(*param_1 + 0x260))(param_1);
    iVar6 = (int)param_1[0x3b];
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    if (iVar3 - iVar7 < iVar6) {
      local_28 = iVar3 - iVar6;
    }
    else {
      iVar3 = iVar6 + iVar7;
      local_28 = iVar7;
    }
    *(int *)(param_1 + 0x3b) = iVar3;
    local_24 = param_3;
    local_23 = param_4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x43,&local_28);
    local_28 = iVar7;
    local_24 = param_3;
    local_23 = param_4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x45,&local_28);
    iVar3 = (**(code **)(*param_1 + 0x408))(param_1);
    iVar7 = FUN_140a2f2a0(lVar2,(int)param_1[0x3b]);
    if (iVar3 != iVar7) {
      FUN_142ccf590(param_1,iVar7);
      lVar2 = *param_1;
      uVar5 = (**(code **)(lVar2 + 0x408))(param_1);
      (**(code **)(lVar2 + 0x3f8))(param_1,uVar5);
      FUN_140e51830(param_1,iVar3,iVar7);
      FUN_140e48f20(param_1,L"LevelUp");
    }
  }
  return;
}



// FUNCTION 140e423c0 FUN_140e423c0 body=312 status=ok
// SIG undefined FUN_140e423c0(void)

void FUN_140e423c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (param_2 != (longlong *)0x0)) {
    uVar4 = FUN_14142bde0();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar5 != 0) {
      FUN_140b3fa60(lVar5,param_1[0x35]);
    }
    plVar1 = param_1 + 0x33;
    iVar2 = (int)param_1[0x34];
    *(int *)(param_1 + 0x34) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x1a4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + 8),(void *)*plVar1,(longlong)iVar2 << 3);
    *(longlong **)*plVar1 = param_2;
    iVar2 = (int)param_1[0x32];
    if (((iVar2 < (int)param_1[0x34]) && (-1 < iVar2)) && (iVar2 < (int)param_1[0x34])) {
      lVar5 = *(longlong *)(*plVar1 + (longlong)iVar2 * 8);
      if (lVar5 != 0) {
        FUN_142227350(lVar5,0,1);
        iVar2 = (int)param_1[0x32];
      }
      iVar6 = (int)param_1[0x34];
      iVar3 = (iVar6 - iVar2) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar2 * 8),
                   (void *)(*plVar1 + (longlong)(iVar2 + 1) * 8),(longlong)iVar3 << 3);
        iVar6 = (int)param_1[0x34];
      }
      *(int *)(param_1 + 0x34) = iVar6 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    (**(code **)(*param_1 + 0x260))(param_1);
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2f);
  }
  return;
}



// FUNCTION 140e42500 FUN_140e42500 body=1151 status=ok
// SIG undefined FUN_140e42500(void)

void FUN_140e42500(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  if (((longlong *)param_1[0x97] == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[0x97] + 0x20))(), cVar6 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((bVar5) && (lVar7 = (**(code **)(*param_1 + 0x148))(param_1), lVar7 != 0)) &&
     (lVar10 = *(longlong *)(lVar7 + 400), lVar10 != 0)) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_78 = param_1[0x97];
      local_70 = param_1[0x98];
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      cVar6 = FUN_140bca7d0(lVar10,&local_78);
      if ((cVar6 == '\0') && (lVar7 = FUN_140d3a420(lVar7), lVar7 != 0)) {
        plVar9 = (longlong *)UListView::OnItemSelectionChanged(lVar10);
        puVar13 = (undefined8 *)*plVar9;
        puVar2 = puVar13 + (int)plVar9[1];
        for (; puVar13 != puVar2; puVar13 = puVar13 + 1) {
          lVar10 = FUN_142547b50(*puVar13,local_68);
          plVar9 = *(longlong **)(lVar10 + 0x10);
          plVar4 = *(longlong **)(lVar10 + 8);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          local_68[0] = &PTR_FUN_143f740c8;
          if (local_50 != 0) {
            FMemory::Free();
          }
          plVar12 = local_58;
          local_68[0] = &PTR_FUN_143f73d18;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_58 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_58)(local_58);
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
          if (plVar4 != (longlong *)0x0) {
            plVar12 = (longlong *)param_1[0x98];
            local_b8 = (longlong *)param_1[0x97];
            local_b0 = plVar12;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              LOCK();
              plVar11 = plVar12 + 1;
              lVar10 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
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
            plVar12 = local_b8;
            local_88 = param_1[0xa7];
            local_80 = (longlong *)param_1[0xa8];
            if (local_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_80 + 1) = (int)local_80[1] + 1;
              UNLOCK();
            }
            plVar11 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,local_res10);
            plVar12 = (longlong *)(**(code **)(*plVar12 + 8))(plVar12,local_res18);
            if (*plVar12 != *plVar11) {
              local_a0 = (longlong *)0x0;
              local_b8 = (longlong *)0x0;
              local_a8 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&local_b0,&local_a0);
              plVar12 = local_a0;
              if (local_a0 != (longlong *)0x0) {
                LOCK();
                plVar11 = local_a0 + 1;
                lVar10 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_a0)(local_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar12 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_a0 + 8))(local_a0,1);
                  }
                }
              }
            }
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            local_98 = plVar4;
            local_90 = plVar9;
            lVar10 = FUN_140d3a750(lVar7,&local_98);
            if (lVar10 == 0) {
LAB_140e42822:
              lVar10 = 0;
            }
            else {
              lVar8 = ANavVolume::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_140e42822;
            }
            plVar4 = local_90;
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_90 + 1;
              lVar8 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_90)(local_90);
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
            if (lVar10 != 0) {
              FUN_140d27140(lVar10,&local_b8,&local_88);
            }
            plVar4 = local_80;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_80 + 1;
              lVar10 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_80)(local_80);
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
            plVar4 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_b0 + 1;
              lVar10 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_b0)(local_b0);
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
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar9 + 1;
            lVar10 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar9)(plVar9);
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
        }
      }
    }
  }
  return;
}



// FUNCTION 140e42980 FUN_140e42980 body=375 status=ok
// SIG undefined FUN_140e42980(void)

void FUN_140e42980(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (((*(longlong *)(param_1 + 0xc0) != 0) && (param_2 != 0)) &&
     (iVar2 = FUN_142235230(), iVar2 != 3)) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar4;
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x20) {
      lVar1 = *(longlong *)(lVar4 + 0x10);
      if (lVar1 == param_2) {
        if (lVar1 == 0) {
          return;
        }
        lVar3 = *(longlong *)(lVar1 + 0x30);
        if (lVar3 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(lVar3 + 0x38) - *(int *)(lVar3 + 100);
        }
        if (iVar2 <= *(int *)(lVar4 + 0x18)) {
          return;
        }
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        goto LAB_140e42a7d;
      }
    }
    local_28 = 0xffffffffffffffff;
    local_20 = 0xffffffff;
    local_10 = 1;
    local_18 = param_2;
    FUN_140e3de40(param_1 + 0xb0,&local_28);
    lVar4 = *(longlong *)(param_1 + 0xb0);
    lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar4;
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x20) {
      if (*(longlong *)(lVar4 + 0x10) == param_2) {
LAB_140e42a7d:
        if (lVar4 == 0) {
          return;
        }
        FUN_140e435e0(param_1,*(undefined8 *)(lVar4 + 0x10),0);
        local_28 = *(undefined8 *)(lVar4 + 0x10);
        local_20 = *(undefined4 *)(lVar4 + 0x18);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 200,&local_28);
        if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
          return;
        }
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x600))();
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x260))();
        FFastArraySerializer::MarkItemDirty(param_1,lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e42b20 FUN_140e42b20 body=631 status=ok
// SIG undefined FUN_140e42b20(void)

void FUN_140e42b20(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  
  fVar12 = *(float *)(param_3 + 0x18);
  FUN_142fc8e60();
  fVar11 = _guard_xfg_dispatch_icall_nop(fVar12 * 0.008726646);
  fVar12 = _guard_xfg_dispatch_icall_nop((fVar11 * *(float *)(param_3 + 0x18)) / fVar12);
  *(float *)(param_3 + 0x18) = fVar12 * 114.59155;
  if ((((0 < *(int *)(param_1 + 0x2ce8)) &&
       (lVar10 = *(longlong *)
                  (*(longlong *)(param_1 + 0x2ce0) + -8 + (longlong)*(int *)(param_1 + 0x2ce8) * 8),
       lVar10 != 0)) && (*(longlong *)(lVar10 + 0x468) != 0)) &&
     (lVar7 = *(longlong *)(param_1 + 0x458), lVar7 != 0)) {
    if (*(int *)(param_1 + 0x2cc0) == 0) {
      iVar6 = *(int *)(param_1 + 0x2cc0);
      *(int *)(param_1 + 0x2cc0) = iVar6 + 4;
      if (*(int *)(param_1 + 0x2cc4) < iVar6 + 4) {
        FUN_140e5a9b0(param_1 + 0x2cb8,iVar6);
      }
      iVar8 = 4;
      lVar7 = (longlong)iVar6 * 0x600 + *(longlong *)(param_1 + 0x2cb8);
      do {
        FUN_142741540(lVar7);
        lVar7 = lVar7 + 0x600;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      lVar7 = *(longlong *)(param_1 + 0x458);
    }
    uVar3 = 3;
    if (*(byte *)(lVar7 + 0x644) < 3) {
      uVar3 = (uint)*(byte *)(lVar7 + 0x644);
    }
    lVar9 = (ulonglong)uVar3 * 0x600;
    puVar1 = (uint *)(lVar9 + 4 + *(longlong *)(param_1 + 0x2cb8));
    *puVar1 = *puVar1 | 0x10000;
    *(uint *)(lVar9 + 0x30c + *(longlong *)(param_1 + 0x2cb8)) = (uVar3 != 0) + 1;
    puVar1 = (uint *)(lVar9 + 4 + *(longlong *)(param_1 + 0x2cb8));
    *puVar1 = *puVar1 | 0x8000;
    lVar7 = *(longlong *)(param_1 + 0x2cb8);
    uVar13 = FUN_1411e0f30(lVar10);
    *(undefined4 *)(lVar9 + 0x310 + lVar7) = uVar13;
    *(undefined8 *)(lVar9 + 0x318 + *(longlong *)(param_1 + 0x2cb8)) =
         *(undefined8 *)(lVar10 + 0x468);
    FUN_1426d7aa0(param_1,*(longlong *)(param_1 + 0x2cb8) + lVar9,0x3f800000);
  }
  lVar10 = *(longlong *)(param_1 + 0x458);
  if (lVar10 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((*(byte *)(lVar10 + 0x1845) & 1) != 0)) {
      *(uint *)(param_3 + 0x648) = *(uint *)(param_3 + 0x648) | 1;
    }
  }
  bVar4 = false;
  *(int *)(param_1 + 0x2cdc) = *(int *)(param_1 + 0x2cdc) + 1;
  iVar6 = *(int *)(param_1 + 0x2cdc);
  iVar8 = *(int *)(param_1 + 0x2cd0) + -1;
  lVar10 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar7 = lVar10 << 4;
    bVar4 = false;
    do {
      lVar9 = *(longlong *)(param_1 + 0x2cc8);
      if ((*(int *)(lVar7 + 8 + lVar9) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar9), plVar2 == (longlong *)0x0)) {
LAB_140e42d50:
        bVar4 = true;
      }
      else {
        cVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
        if (cVar5 == '\0') goto LAB_140e42d50;
      }
      lVar7 = lVar7 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
    iVar6 = *(int *)(param_1 + 0x2cdc);
  }
  *(int *)(param_1 + 0x2cdc) = iVar6 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x2cc8),0);
  }
  return;
}



// FUNCTION 140e42da0 FUN_140e42da0 body=337 status=ok
// SIG undefined FUN_140e42da0(void)

void FUN_140e42da0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_38;
  undefined4 local_30;
  
  lVar5 = *(longlong *)(param_1 + 0xb0);
  lVar4 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x20) {
    if ((((*(longlong *)(param_1 + 0xc0) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) != '\x03')) &&
        (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) && (*(char *)(lVar6 + 0x51) != '\0')) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      lVar7 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar2;
      if (lVar2 != lVar7) {
        do {
          if (((*(longlong *)(lVar2 + 0x10) != 0) && (iVar1 = *(int *)(lVar2 + 0x18), 0 < iVar1)) &&
             ((lVar6 == 0 || (*(longlong *)(lVar2 + 0x10) == lVar6)))) {
            iVar3 = *(int *)(lVar2 + 0x1c) + 1;
            if (iVar3 <= iVar1) {
              do {
                FUN_140e434c0(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(param_1 + 0xc0),
                              param_1 + 0xe8,iVar3);
                iVar1 = *(int *)(lVar2 + 0x18);
                iVar3 = iVar3 + 1;
              } while (iVar3 <= iVar1);
            }
            *(int *)(lVar2 + 0x1c) = iVar1;
          }
          lVar2 = lVar2 + 0x20;
        } while (lVar2 != lVar7);
        lVar6 = *(longlong *)(lVar5 + 0x10);
      }
      local_30 = *(undefined4 *)(lVar5 + 0x18);
      local_38 = lVar6;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 200,&local_38);
    }
  }
  return;
}



// FUNCTION 140e42f00 FUN_140e42f00 body=170 status=ok
// SIG undefined FUN_140e42f00(void)

void FUN_140e42f00(undefined8 param_1,int param_2,int param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar3 != 0) {
    plVar2 = *(longlong **)(lVar3 + 0x1118);
    plVar1 = plVar2 + *(int *)(lVar3 + 0x1120);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      lVar3 = *plVar2;
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 0xa0) == param_2)) && (-1 < param_3)) &&
         (param_3 < *(int *)(lVar3 + 0x78))) {
        lVar3 = (longlong)param_3 * 0x58 + *(longlong *)(lVar3 + 0x70);
        if (lVar3 == 0) {
          return;
        }
        FUN_140e5f140(lVar3,param_1,param_4,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e42fb0 FUN_140e42fb0 body=574 status=ok
// SIG undefined FUN_140e42fb0(void)

void FUN_140e42fb0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  
  iVar5 = *param_2;
  if (*param_2 < 0) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x17c) = iVar5;
  *param_2 = iVar5;
  *(int *)(param_1 + 0x178) = param_2[6];
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 8);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = *(longlong *)(DAT_146b33f38 + 200);
  if (lVar7 != 0) {
    lVar6 = FUN_140a329f0(lVar7,*(undefined4 *)(param_1 + 0x178));
    lVar7 = FUN_140a329f0(lVar7,*(int *)(param_1 + 0x178) + 1);
    if ((*(longlong *)(param_1 + 0x180) < lVar6) || (lVar7 <= *(longlong *)(param_1 + 0x180))) {
      *(longlong *)(param_1 + 0x180) = lVar6;
      *(longlong *)(param_2 + 8) = lVar6;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1f0);
  lVar7 = *plVar1;
  lVar6 = (longlong)*(int *)(param_1 + 0x1f8) * 0x10 + lVar7;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 0x10) {
    *(undefined4 *)(lVar7 + 8) = 0;
  }
  piVar13 = *(int **)(param_2 + 2);
  piVar12 = piVar13 + (longlong)param_2[4] * 0xc;
  do {
    if (piVar13 == piVar12) {
      return;
    }
    lVar7 = FUN_1405ec200(piVar13 + 2);
    if (lVar7 != 0) {
      lVar6 = FUN_1413b8910();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar10 = (longlong *)*plVar1;
        iVar5 = *(int *)(param_1 + 0x1f8);
        lVar6 = (longlong)iVar5 * 0x10;
        plVar11 = plVar10 + (longlong)iVar5 * 2;
        if (plVar10 != plVar11) {
          do {
            if (*plVar10 == *(longlong *)(lVar7 + 0x30)) goto LAB_140e43150;
            plVar10 = plVar10 + 2;
          } while (plVar10 != plVar11);
        }
        *(int *)(param_1 + 0x1f8) = iVar5 + 1;
        if (*(int *)(param_1 + 0x1fc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
        }
        lVar3 = *plVar1;
        *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar7 + 0x30);
        *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
        plVar10 = (longlong *)(*plVar1 + lVar6);
LAB_140e43150:
        plVar11 = (longlong *)(param_1 + 0x188);
        iVar5 = *(int *)(param_1 + 400);
        plVar9 = (longlong *)*plVar11;
        plVar8 = plVar9 + (longlong)iVar5 * 4;
        for (; plVar9 != plVar8; plVar9 = plVar9 + 4) {
          if (*plVar9 == lVar7) {
            *(int *)(plVar9 + 1) = *piVar13;
            goto LAB_140e431ae;
          }
        }
        *(int *)(param_1 + 400) = iVar5 + 1;
        if (*(int *)(param_1 + 0x194) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar11);
        }
        iVar2 = *piVar13;
        plVar11 = (longlong *)((longlong)iVar5 * 0x20 + *plVar11);
        *plVar11 = lVar7;
        *(int *)(plVar11 + 1) = iVar2;
        plVar11[2] = 0;
        plVar11[3] = 0;
LAB_140e431ae:
        if (plVar10 != (longlong *)0x0) {
          *(int *)(plVar10 + 1) = (int)plVar10[1] + *piVar13;
        }
      }
    }
    piVar13 = piVar13 + 0xc;
  } while( true );
}



// FUNCTION 140e431f0 FUN_140e431f0 body=393 status=ok
// SIG undefined FUN_140e431f0(void)

void FUN_140e431f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  *param_2 = *param_1;
  param_2[1] = param_1[6];
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 8);
  param_2[0xe] = param_1[10];
  puVar9 = *(undefined4 **)(param_1 + 2);
  puVar8 = puVar9 + (longlong)(int)param_1[4] * 0xc;
  do {
    if (puVar9 == puVar8) {
      return;
    }
    lVar3 = FUN_1405ec200(puVar9 + 2);
    if (lVar3 != 0) {
      lVar4 = FUN_1413b8910();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        puVar6 = *(undefined4 **)(param_2 + 6);
        puVar7 = puVar6 + (longlong)(int)param_2[8] * 0xc;
        for (; puVar6 != puVar7; puVar6 = puVar6 + 0xc) {
          lVar4 = FUN_1405ec200(puVar6 + 2);
          if (lVar4 == 0) {
LAB_140e432f6:
            lVar4 = 0;
          }
          else {
            lVar5 = FUN_1413b8910();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_140e432f6;
          }
          if (lVar4 == lVar3) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar9;
              goto LAB_140e4333c;
            }
            break;
          }
        }
        iVar1 = param_2[8];
        param_2[8] = iVar1 + 1;
        if ((int)param_2[9] < iVar1 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2 + 6,iVar1);
        }
        FUN_140e3ff50((longlong)iVar1 * 0x30 + *(longlong *)(param_2 + 6),lVar3,*puVar9,1);
      }
    }
LAB_140e4333c:
    puVar9 = puVar9 + 0xc;
  } while( true );
}



// FUNCTION 140e43380 FUN_140e43380 body=305 status=ok
// SIG undefined FUN_140e43380(void)

void FUN_140e43380(undefined8 param_1,int param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar6 != 0) {
    plVar2 = *(longlong **)(lVar6 + 0x1118);
    plVar3 = plVar2 + *(int *)(lVar6 + 0x1120);
    for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
      lVar6 = *plVar2;
      if (((((lVar6 != 0) && (*(int *)(lVar6 + 0xa0) == param_2)) && (-1 < param_3)) &&
          ((param_3 < *(int *)(lVar6 + 0x88) &&
           (plVar1 = (longlong *)((longlong)param_3 * 0x10 + *(longlong *)(lVar6 + 0x80)),
           -1 < param_4)))) && (param_4 < (int)plVar1[1])) {
        lVar6 = (longlong)param_4 * 0x70 + *plVar1;
        if (lVar6 == 0) {
          return;
        }
        if ((*(longlong *)(lVar6 + 0x58) != 0) || (*(longlong *)(lVar6 + 0x60) != 0)) {
          thunk_FUN_14145e8d0(param_1);
          return;
        }
        if (*(longlong *)(lVar6 + 0x68) != 0) {
          thunk_FUN_14145e7d0(param_1);
          return;
        }
        uVar5 = 0;
        plVar3 = *(longlong **)(lVar6 + 0x48);
        uVar4 = (longlong)*(int *)(lVar6 + 0x50) & 0x1fffffffffffffff;
        if (plVar3 + *(int *)(lVar6 + 0x50) < plVar3) {
          uVar4 = uVar5;
        }
        if (uVar4 == 0) {
          return;
        }
        do {
          if (*plVar3 != 0) {
            thunk_FUN_14145e850(param_1);
          }
          plVar3 = plVar3 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e434c0 FUN_140e434c0 body=280 status=ok
// SIG undefined FUN_140e434c0(void)

undefined8 FUN_140e434c0(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (0 < param_4)) {
    lVar4 = FUN_140e50b20(param_1,param_4);
    if (lVar4 != 0) {
      local_38 = (undefined4)param_2;
      uStack_34 = (undefined4)((ulonglong)param_2 >> 0x20);
      local_28 = local_38;
      uStack_24 = uStack_34;
      uStack_20 = 0;
      uStack_1c = 0;
      puVar5 = (undefined8 *)FUN_142c901e0(lVar4 + 0x18,local_18,param_2,&local_28,0,local_res8);
      iVar3 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar3);
      }
      puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_3);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar5[1] = 0;
      *puVar5 = 0;
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
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e435e0 FUN_140e435e0 body=253 status=ok
// SIG undefined FUN_140e435e0(void)

void FUN_140e435e0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    lVar5 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x20) {
      lVar2 = *(longlong *)(lVar4 + 0x10);
      iVar1 = *(int *)(lVar4 + 0x18);
      if (((lVar2 != 0) && (0 < iVar1)) && ((param_2 == 0 || (lVar2 == param_2)))) {
        if ((param_3 != '\0') && (iVar3 = 1, 1 < iVar1)) {
          do {
            FUN_140e434c0(lVar2,*(undefined8 *)(param_1 + 0xc0),param_1 + 0xe8,iVar3);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        FUN_140e434c0(lVar2,*(undefined8 *)(param_1 + 0xc0),param_1 + 0xe8,iVar1);
      }
    }
  }
  return;
}



// FUNCTION 140e436e0 FUN_140e436e0 body=203 status=ok
// SIG undefined FUN_140e436e0(void)

void FUN_140e436e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar4 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x20) {
      if (((*(longlong *)(lVar2 + 0x10) != 0) && (iVar1 = *(int *)(lVar2 + 0x18), 0 < iVar1)) &&
         ((param_2 == 0 || (*(longlong *)(lVar2 + 0x10) == param_2)))) {
        iVar3 = *(int *)(lVar2 + 0x1c) + 1;
        if (iVar3 <= iVar1) {
          do {
            FUN_140e434c0(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(param_1 + 0xc0),
                          param_1 + 0xe8,iVar3);
            iVar1 = *(int *)(lVar2 + 0x18);
            iVar3 = iVar3 + 1;
          } while (iVar3 <= iVar1);
        }
        *(int *)(lVar2 + 0x1c) = iVar1;
      }
    }
  }
  return;
}



// FUNCTION 140e437b0 FUN_140e437b0 body=195 status=ok
// SIG undefined FUN_140e437b0(void)

void FUN_140e437b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_2 + 0x2d8);
    lVar6 = (longlong)*(int *)(param_2 + 0x2e0) * 0x50 + lVar5;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x50) {
      uVar1 = FUN_140d3a6f0(lVar5);
      lVar2 = FUN_140d3bba0(lVar5);
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(param_1 + 600);
        lVar4 = (longlong)*(int *)(param_1 + 0x260) * 0x20 + lVar3;
        for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
          if (*(longlong *)(lVar3 + 0x10) == lVar2) goto LAB_140e43841;
        }
        lVar3 = 0;
LAB_140e43841:
        if (lVar3 != 0) {
          FUN_140e5d210(lVar3,param_1 + 0x1a0,uVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e43880 FUN_140e43880 body=924 status=ok
// SIG undefined FUN_140e43880(void)

void FUN_140e43880(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar13 = param_1 + 0xe8;
  local_80 = lVar13;
  FUN_142ca9970(lVar13,1);
  puVar8 = (undefined4 *)*param_2;
  puVar2 = puVar8 + (longlong)(int)param_2[1] * 6;
  for (; puVar8 != puVar2; puVar8 = puVar8 + 6) {
    lVar4 = FUN_140e50a50(puVar8);
    if (lVar4 != 0) {
      local_58 = *puVar8;
      local_70 = 0xffffffffffffffff;
      local_68 = 0xffffffff;
      local_54 = 0;
      local_60 = lVar4;
      FUN_140e3de40(param_1 + 0xb0,&local_70);
    }
  }
  iVar14 = *(int *)(param_1 + 0xb8) + -1;
  if (-1 < iVar14) {
    lVar16 = (longlong)iVar14 << 5;
    plVar1 = (longlong *)(param_1 + 0xb0);
    lVar9 = (longlong)*(int *)(param_1 + 0xb8) << 5;
    lVar4 = lVar16;
    do {
      lVar13 = *plVar1;
      lVar15 = *(longlong *)(lVar13 + 0x10 + lVar4);
      if ((lVar15 != 0) && (*(char *)(lVar15 + 0x50) == param_3)) {
        lVar11 = *param_2;
        lVar15 = lVar11 + (longlong)(int)param_2[1] * 0x18;
        if (lVar11 != lVar15) {
          do {
            lVar3 = *(longlong *)(lVar13 + lVar4 + 0x10);
            lVar5 = FUN_140e50a50(lVar11);
            if (lVar5 == lVar3) goto LAB_140e43a27;
            lVar11 = lVar11 + 0x18;
          } while (lVar11 != lVar15);
        }
        iVar7 = *(int *)(param_1 + 0xb8);
        iVar6 = (iVar7 - iVar14) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar16),(void *)(*plVar1 + lVar9),(longlong)iVar6 << 5);
          iVar7 = *(int *)(param_1 + 0xb8);
        }
        *(int *)(param_1 + 0xb8) = iVar7 + -1;
        TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
      }
LAB_140e43a27:
      lVar9 = lVar9 + -0x20;
      lVar16 = lVar16 + -0x20;
      lVar4 = lVar4 + -0x20;
      iVar14 = iVar14 + -1;
      lVar13 = local_80;
    } while (-1 < iVar14);
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  lVar9 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar4;
  for (; lVar4 != lVar9; lVar4 = lVar4 + 0x20) {
    lVar16 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar15 = *(longlong *)(param_1 + 0xb0);
      lVar11 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar15;
      if (lVar15 != lVar11) {
        do {
          lVar3 = *(longlong *)(lVar15 + 0x10);
          iVar14 = *(int *)(lVar15 + 0x18);
          if (((lVar3 != 0) && (0 < iVar14)) && ((lVar16 == 0 || (lVar3 == lVar16)))) {
            iVar7 = 1;
            if (1 < iVar14) {
              do {
                FUN_140e434c0(lVar3,*(undefined8 *)(param_1 + 0xc0),lVar13,iVar7);
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar14);
            }
            FUN_140e434c0(lVar3,*(undefined8 *)(param_1 + 0xc0),lVar13,iVar14);
          }
          lVar15 = lVar15 + 0x20;
        } while (lVar15 != lVar11);
        lVar16 = *(longlong *)(lVar4 + 0x10);
      }
    }
    local_78 = *(undefined4 *)(lVar4 + 0x18);
    local_80 = lVar16;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 200,&local_80);
  }
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x600))();
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x260))();
    piVar10 = *(int **)(param_1 + 0xb0);
    piVar12 = piVar10 + (longlong)*(int *)(param_1 + 0xb8) * 8;
    for (; piVar10 != piVar12; piVar10 = piVar10 + 8) {
      if (*piVar10 == -1) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        *piVar10 = *(int *)(param_1 + 0x50);
        iVar14 = *(int *)(param_1 + 0x50);
        if (iVar14 == -1) {
          iVar14 = 0;
        }
        *(int *)(param_1 + 0x50) = iVar14;
      }
      piVar10[1] = piVar10[1] + 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      if (*(int *)(param_1 + 0x54) == -1) {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
    }
  }
  return;
}



// FUNCTION 140e43c20 FUN_140e43c20 body=1743 status=ok
// SIG undefined FUN_140e43c20(void)

void FUN_140e43c20(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  char cVar13;
  longlong *plVar14;
  int *piVar15;
  int *piVar16;
  char *pcVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong local_res8;
  
  *(char *)(param_1 + 0x4b) = (char)param_2[4];
  iVar5 = FUN_14233f450();
  if (iVar5 == 3) {
    iVar5 = *param_2;
    if (*param_2 < 0) {
      iVar5 = 0;
    }
    *(int *)((longlong)param_1 + 0x17c) = iVar5;
    *(int *)(param_1 + 0x2f) = param_2[1];
    param_1[0x30] = *(longlong *)(param_2 + 2);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar8 = *(longlong *)(DAT_146b33f38 + 200);
    if (lVar8 != 0) {
      lVar7 = FUN_140a329f0(lVar8,(int)param_1[0x2f]);
      lVar8 = FUN_140a329f0(lVar8);
      if ((param_1[0x30] < lVar7) || (lVar8 <= param_1[0x30])) {
        param_1[0x30] = lVar7;
      }
    }
  }
  plVar1 = param_1 + 0x3e;
  lVar8 = *plVar1;
  lVar7 = (longlong)(int)param_1[0x3f] * 0x10 + lVar8;
  for (; lVar8 != lVar7; lVar8 = lVar8 + 0x10) {
    *(undefined4 *)(lVar8 + 8) = 0;
  }
  piVar16 = *(int **)(param_2 + 6);
  piVar15 = piVar16 + (longlong)param_2[8] * 0xc;
  for (; piVar16 != piVar15; piVar16 = piVar16 + 0xc) {
    lVar8 = FUN_1405ec200(piVar16 + 2);
    if (lVar8 != 0) {
      lVar7 = FUN_1413b8910();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar14 = (longlong *)*plVar1;
        iVar5 = (int)param_1[0x3f];
        lVar7 = (longlong)iVar5 * 0x10;
        plVar11 = plVar14 + (longlong)iVar5 * 2;
        if (plVar14 != plVar11) {
          do {
            if (*plVar14 == *(longlong *)(lVar8 + 0x30)) goto LAB_140e43de2;
            plVar14 = plVar14 + 2;
          } while (plVar14 != plVar11);
        }
        *(int *)(param_1 + 0x3f) = iVar5 + 1;
        if (*(int *)((longlong)param_1 + 0x1fc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
        }
        lVar2 = *plVar1;
        *(undefined8 *)(lVar2 + lVar7) = *(undefined8 *)(lVar8 + 0x30);
        *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
        plVar14 = (longlong *)(*plVar1 + lVar7);
LAB_140e43de2:
        iVar5 = FUN_14233f450(param_1);
        if (iVar5 == 3) {
          plVar11 = param_1 + 0x31;
          plVar18 = (longlong *)*plVar11;
          iVar5 = (int)param_1[0x32];
          for (plVar19 = plVar18; plVar19 != plVar18 + (longlong)iVar5 * 4; plVar19 = plVar19 + 4) {
            if (*plVar19 == lVar8) {
              iVar6 = (int)((longlong)plVar19 - (longlong)plVar18 >> 5);
              if ((iVar6 < 0) || ((int)param_1[0x32] <= iVar6)) goto LAB_140e43e29;
              bVar4 = true;
              goto LAB_140e43e2b;
            }
          }
          iVar6 = -1;
LAB_140e43e29:
          bVar4 = false;
LAB_140e43e2b:
          if (bVar4) {
            *(int *)(plVar18 + (longlong)iVar6 * 4 + 1) = *piVar16;
            FUN_1414b1f10(param_1,lVar8,(char)piVar16[1]);
          }
          else {
            *(int *)(param_1 + 0x32) = iVar5 + 1;
            if (*(int *)((longlong)param_1 + 0x194) < iVar5 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(plVar11);
            }
            iVar6 = *piVar16;
            plVar11 = (longlong *)(*plVar11 + (longlong)iVar5 * 0x20);
            *plVar11 = lVar8;
            *(int *)(plVar11 + 1) = iVar6;
            plVar11[2] = 0;
            plVar11[3] = 0;
            if ((iVar5 < 0) || ((int)param_1[0x32] <= iVar5)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              FUN_1414b1f10(param_1,lVar8,(char)piVar16[1]);
            }
          }
        }
        if (plVar14 != (longlong *)0x0) {
          *(int *)(plVar14 + 1) = (int)plVar14[1] + *piVar16;
        }
      }
    }
  }
  if (param_2[0xc] < 1) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar8 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar8 != 0) {
      plVar11 = *(longlong **)(lVar8 + 0x1108);
      local_res8 = 0;
      uVar12 = (longlong)*(int *)(lVar8 + 0x1110) & 0x1fffffffffffffff;
      if (plVar11 + *(int *)(lVar8 + 0x1110) < plVar11) {
        uVar12 = 0;
      }
      if (uVar12 != 0) {
        plVar14 = param_1 + 0x37;
        do {
          plVar18 = (longlong *)*plVar1;
          lVar8 = *plVar11;
          plVar10 = plVar18 + (longlong)(int)param_1[0x3f] * 2;
          plVar19 = (longlong *)0x0;
          if (plVar18 != plVar10) {
            do {
              plVar19 = plVar18;
              if (*plVar18 == *(longlong *)(lVar8 + 0x30)) break;
              plVar18 = plVar18 + 2;
              plVar19 = (longlong *)0x0;
            } while (plVar18 != plVar10);
          }
          plVar18 = (longlong *)*plVar14;
          iVar5 = (int)param_1[0x38];
          lVar7 = (longlong)iVar5 * 0x18;
          for (plVar10 = plVar18; plVar10 != plVar18 + (longlong)iVar5 * 3; plVar10 = plVar10 + 3) {
            if (*plVar10 == lVar8) {
              iVar6 = (int)(((longlong)plVar10 - (longlong)plVar18) / 0x18);
              goto LAB_140e441ca;
            }
          }
          iVar6 = -1;
LAB_140e441ca:
          if ((plVar19 == (longlong *)0x0) || ((int)plVar19[1] < *(int *)(lVar8 + 0xa0))) {
            cVar13 = '\0';
          }
          else {
            cVar13 = '\x01';
          }
          if ((iVar6 < 0) || ((int)param_1[0x38] <= iVar6)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            *(char *)(plVar18 + (longlong)iVar6 * 3 + 2) = cVar13;
          }
          else {
            *(int *)(param_1 + 0x38) = iVar5 + 1;
            if (*(int *)((longlong)param_1 + 0x1c4) < iVar5 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar14,iVar5);
            }
            lVar2 = *plVar14;
            *(longlong *)(lVar7 + lVar2) = lVar8;
            *(undefined8 *)(lVar7 + 8 + lVar2) = 0;
            *(char *)(lVar7 + 0x10 + lVar2) = cVar13;
            *(undefined1 *)(lVar7 + 0x11 + lVar2) = 0;
            iVar6 = iVar5;
          }
          lVar8 = *(longlong *)(*plVar14 + (longlong)iVar6 * 0x18);
          if ((lVar8 != 0) && (cVar13 != '\0')) {
            FUN_1414b1ec0(param_1,lVar8,1);
          }
          plVar11 = plVar11 + 1;
          local_res8 = local_res8 + 1;
        } while (local_res8 != uVar12);
      }
    }
  }
  else {
    pcVar17 = *(char **)(param_2 + 10);
    pcVar9 = pcVar17 + (longlong)param_2[0xc] * 0x30;
    for (; pcVar17 != pcVar9; pcVar17 = pcVar17 + 0x30) {
      lVar8 = FUN_1405ec200(pcVar17 + 8);
      if (lVar8 != 0) {
        lVar7 = FUN_1413b84c0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          plVar14 = (longlong *)*plVar1;
          iVar5 = (int)param_1[0x3f];
          lVar7 = (longlong)iVar5 * 0x10;
          plVar11 = plVar14 + (longlong)iVar5 * 2;
          if (plVar14 != plVar11) {
            do {
              if (*plVar14 == *(longlong *)(lVar8 + 0x30)) goto LAB_140e43fc6;
              plVar14 = plVar14 + 2;
            } while (plVar14 != plVar11);
          }
          *(int *)(param_1 + 0x3f) = iVar5 + 1;
          if (*(int *)((longlong)param_1 + 0x1fc) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar5);
          }
          lVar2 = *plVar1;
          *(undefined8 *)(lVar2 + lVar7) = *(undefined8 *)(lVar8 + 0x30);
          *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
          plVar14 = (longlong *)(*plVar1 + lVar7);
LAB_140e43fc6:
          plVar11 = param_1 + 0x37;
          plVar18 = (longlong *)*plVar11;
          iVar5 = (int)param_1[0x38];
          lVar7 = (longlong)iVar5;
          for (plVar19 = plVar18; plVar19 != plVar18 + lVar7 * 3; plVar19 = plVar19 + 3) {
            if (*plVar19 == lVar8) {
              iVar6 = (int)(((longlong)plVar19 - (longlong)plVar18) / 0x18);
              if ((-1 < iVar6) && (iVar6 < (int)param_1[0x38])) {
                bVar4 = true;
                goto LAB_140e43ff4;
              }
              break;
            }
          }
          bVar4 = false;
LAB_140e43ff4:
          if (bVar4) {
            iVar5 = FUN_14233f450(param_1);
            if (iVar5 == 3) {
              FUN_1414b1ec0(param_1,lVar8,*pcVar17 != '\0');
            }
          }
          else {
            lVar2 = plVar14[1];
            iVar6 = *(int *)(lVar8 + 0xa0);
            *(int *)(param_1 + 0x38) = iVar5 + 1;
            if (*(int *)((longlong)param_1 + 0x1c4) < iVar5 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar11,iVar5);
            }
            lVar3 = *plVar11;
            *(longlong *)(lVar3 + lVar7 * 0x18) = lVar8;
            *(undefined8 *)(lVar3 + 8 + lVar7 * 0x18) = 0;
            *(bool *)(lVar3 + 0x10 + lVar7 * 0x18) = iVar6 <= (int)lVar2;
            *(undefined1 *)(lVar3 + 0x11 + lVar7 * 0x18) = 0;
            iVar6 = FUN_14233f450(param_1);
            if (iVar6 == 3) {
              if ((iVar5 < 0) || ((int)param_1[0x38] <= iVar5)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                FUN_1414b1ec0(param_1,lVar8,*pcVar17 != '\0');
              }
            }
          }
        }
      }
    }
  }
  iVar5 = param_2[0xe];
  if (iVar5 == -1) {
    iVar5 = rand();
  }
  *(int *)(param_1 + 0x3d) = iVar5;
                    /* WARNING: Could not recover jumptable at 0x000140e442e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 140e442f0 FUN_140e442f0 body=657 status=ok
// SIG undefined FUN_140e442f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e442f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 local_120;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
    uVar6 = 0;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_140d000a0();
    }
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_140725150(param_2,local_118,0);
    plVar7 = local_118;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    uVar9 = (longlong)(int)local_50 & 0x1fffffffffffffff;
    if (plVar7 + (int)local_50 < plVar7) {
      uVar9 = uVar6;
    }
    if (uVar9 != 0) {
      do {
        lVar1 = *plVar7;
        if (lVar1 != 0) {
          FUN_142397b50(lVar1,2,1);
          *(uint *)(lVar1 + 0x398) =
               *(uint *)(lVar1 + 0x398) ^
               ((uint)*(byte *)(param_1 + 8) ^ *(uint *)(lVar1 + 0x398)) & 1;
          FUN_1423424e0(lVar1);
          if (*(char *)(param_1 + 9) != '\0') {
            FUN_142398e60(lVar1,*(uint *)(lVar1 + 0x6b8) | uVar4,0);
          }
        }
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar9);
    }
    AActor::SetTickableWhenPaused(param_2,*(undefined1 *)(param_1 + 10));
    local_128 = (longlong *)0x0;
    local_120 = 0;
    FUN_140e3e030(param_2,&local_128,0);
    plVar3 = local_128;
    plVar7 = local_128 + (int)local_120;
    for (plVar8 = local_128; plVar8 != plVar7; plVar8 = plVar8 + 1) {
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        UActorComponent::SetTickableWhenPaused(lVar1,*(undefined1 *)(param_1 + 10));
        lVar5 = FUN_142a07000();
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
          FUN_1423bbbb0(lVar1,*(undefined1 *)(param_1 + 10));
          FUN_1423ba690(lVar1,1);
          *(byte *)(lVar1 + 0x880) = *(byte *)(lVar1 + 0x880) & 0xdf;
          *(undefined1 *)(lVar1 + 0x878) = 0;
        }
        else {
          lVar5 = FUN_142a232e0();
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
            FUN_1423df820(lVar1,1);
          }
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e44590 FUN_140e44590 body=1087 status=ok
// SIG undefined FUN_140e44590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e44590(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  longlong *local_118;
  int local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
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
  lVar4 = FUN_140e4ba60(param_1,*param_2);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    return;
  }
  if (param_3 == '\0') {
    *(undefined1 *)(param_2 + 2) = 0;
    FUN_140e91300(lVar5,0,DAT_146870850);
    FUN_142c7bc00(*(undefined8 *)(param_2[1] + 0x458),local_e0,*(undefined8 *)(lVar4 + 0x60),2);
    goto LAB_140e44982;
  }
  if (param_3 != '\x01') {
    if (param_3 != '\x02') {
      return;
    }
    *(undefined1 *)(param_2 + 2) = 1;
    FUN_140e91300(lVar5,1,DAT_146870850);
    return;
  }
  FUN_140e91300(lVar5,1,DAT_146870850);
  if ((*(float *)(lVar4 + 0x7c) <= 0.0) ||
     ((*(longlong *)(param_1 + 0x120) == 0 && (lVar5 = FUN_1423407b0(param_1), lVar5 == 0)))) {
LAB_140e4491a:
    FUN_140e4b6e0(param_1,param_2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    if ((*(longlong *)(lVar5 + 400) == 0) || (*(longlong *)(*(longlong *)(lVar5 + 400) + 0xa0) == 0)
       ) goto LAB_140e4491a;
    plVar6 = (longlong *)*param_2;
    uVar7 = 0;
    if (plVar6 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = plVar6[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        lVar5 = plVar6[0x1f];
      }
    }
    FWeakObjectPtr::operator=(&local_108,lVar5);
    local_118 = (longlong *)0x0;
    local_110 = 0;
    local_100 = FUN_140e4b850;
    uStack_f8 = 0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_f0 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      if (((local_110 != 0) && (local_118 != (longlong *)0x0)) &&
         ((**(code **)(*local_118 + 0x28))(local_118,0), local_118 != (longlong *)0x0)) {
        local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
      }
    }
    else {
      *plVar6 = (longlong)&PTR_FUN_144230918;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_100;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_100._4_4_;
      *(undefined4 *)(plVar6 + 3) = uStack_f8;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_f4;
      *(undefined4 *)(plVar6 + 4) = local_108;
      *(undefined4 *)((longlong)plVar6 + 0x24) = local_104;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar5;
      *plVar6 = (longlong)&PTR_FUN_144230960;
      FUN_140a884e0(plVar6,&local_118);
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      local_f0 = (longlong *)FMemory::Realloc(plVar6,0,0);
      if (local_f0 != (longlong *)0x0) {
        FMemory::Free(local_f0);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar5 + 400) != 0) {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0xa0);
    }
    uVar2 = *(undefined4 *)(lVar4 + 0x7c);
    local_c8 = 0;
    local_c0 = 0;
    if ((local_110 != 0) && (local_118 != (longlong *)0x0)) {
      (**(code **)(*local_118 + 0x30))(local_118,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_120 = 0xbf800000;
    local_128 = 0;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar7,param_2 + 3,&local_c8,uVar2);
    if (local_68 != 0) {
      plVar6 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar6 = local_78;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (local_110 == 0) {
LAB_140e4490b:
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
      goto LAB_140e4490b;
    }
  }
  *(undefined1 *)(param_2 + 2) = 0;
  FUN_140e8b4b0(param_1,&local_100,*(undefined8 *)(lVar4 + 0x28),0);
  local_d8 = (longlong *)CONCAT44(uStack_f4,uStack_f8);
LAB_140e44982:
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_d8 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  return;
}



// FUNCTION 140e449d0 FUN_140e449d0 body=678 status=ok
// SIG undefined FUN_140e449d0(void)

void FUN_140e449d0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong local_res10;
  int local_98;
  int local_94;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  
  FUN_140c36110();
  if (*(longlong *)(param_1 + 0x2298) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter_StandIn::OnCustomizationApplied",L"::");
    pwVar9 = (wchar_t *)0x0;
    while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    lVar10 = *(longlong *)(param_1 + 0x2298);
    plVar12 = (longlong *)(lVar10 + 800);
    FWeakObjectPtr::operator=(&local_98,0);
    local_90 = 0;
    FWeakObjectPtr::operator=(&local_98);
    local_90 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_98), lVar7 != 0)) {
      UObject::FindFunction(lVar7);
    }
    piVar2 = (int *)*plVar12;
    iVar1 = *(int *)(lVar10 + 0x328);
    for (piVar11 = piVar2; piVar11 != piVar2 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
      if (((*piVar11 == local_98) && (piVar11[1] == local_94)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_98), cVar5 == '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(longlong *)(piVar11 + 2) == local_90)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)((longlong)piVar11 - (longlong)piVar2 >> 4) != -1) goto LAB_140e44b5c;
        break;
      }
    }
    iVar1 = *(int *)(lVar10 + 0x328);
    lVar7 = (longlong)iVar1;
    *(int *)(lVar10 + 0x328) = iVar1 + 1;
    if (*(int *)(lVar10 + 0x32c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
    }
    lVar10 = *plVar12;
    *(int *)(lVar10 + lVar7 * 0x10) = local_98;
    *(int *)(lVar10 + 4 + lVar7 * 0x10) = local_94;
    *(longlong *)(lVar10 + 8 + lVar7 * 0x10) = local_90;
LAB_140e44b5c:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
  }
  lVar10 = *(longlong *)(param_1 + 0x2308);
  if (lVar10 == 0) {
    return;
  }
  _guard_xfg_dispatch_icall_nop(&local_88,0,0x60);
  local_70 = 100;
  local_80 = lVar10;
  local_88 = FUN_14057ade0(lVar10);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x2308) + 200)) {
    local_78 = **(undefined8 **)(*(longlong *)(param_1 + 0x2308) + 0xc0);
  }
  uVar8 = FUN_1430b3b80();
  pwVar9 = (wchar_t *)FUN_140e5f680(param_1,&local_88,uVar8);
  if (pwVar9 != (wchar_t *)0x0) {
    lVar10 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140e44c21;
  }
  pwVar9 = (wchar_t *)0x0;
LAB_140e44c21:
  *(wchar_t **)(param_1 + 0x2370) = pwVar9;
  if (pwVar9 != (wchar_t *)0x0) {
    FUN_140c57820(param_1,pwVar9,0,1,1);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (local_68);
  return;
}



// FUNCTION 140e44c80 FUN_140e44c80 body=196 status=ok
// SIG undefined FUN_140e44c80(void)

void FUN_140e44c80(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142223710();
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar3 != 0) && (lVar3 = UWorld::GetWorldSettings(lVar3,0,1), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x658), lVar3 != 0)) {
    lVar4 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar1 = (int)param_1[0xe1];
      if ((iVar1 < 0) || (*(int *)(lVar3 + 0xc0) <= iVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(longlong *)(*(longlong *)(lVar3 + 0xb8) + (longlong)iVar1 * 8) == 0)) {
        *(longlong **)(*(longlong *)(lVar3 + 0xb8) + (longlong)iVar1 * 8) = param_1;
        *(byte *)(param_1 + 0xe7) = *(byte *)(param_1 + 0xe7) | 1;
      }
    }
  }
  return;
}



// FUNCTION 140e44d50 FUN_140e44d50 body=803 status=ok
// SIG undefined FUN_140e44d50(void)

void FUN_140e44d50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  
  FUN_142d12f00();
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 == 0) {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  lVar11 = lVar8 + 0xf18;
  lVar6 = FWeakObjectPtr::Get(lVar11);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar8 + 0xf20)) {
      return;
    }
    if (*(longlong *)(lVar8 + 0xf28) == 0) {
      return;
    }
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar11,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar8 + 0xf20) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar11);
    if (lVar6 == 0) {
      return;
    }
  }
  lVar7 = FUN_1413f1a80();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(lVar11);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar8 + 0xf20)) {
      return;
    }
    if (*(longlong *)(lVar8 + 0xf28) == 0) {
      return;
    }
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar11,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar8 + 0xf20) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar11);
    if (lVar6 == 0) {
      return;
    }
  }
  lVar8 = FUN_1413f1a80();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    puVar14 = *(ulonglong **)(lVar6 + 0x30);
    puVar13 = puVar14 + (longlong)*(int *)(lVar6 + 0x38) * 4;
    for (; puVar14 != puVar13; puVar14 = puVar14 + 4) {
      uVar9 = 0;
      bVar3 = false;
      plVar12 = (longlong *)*puVar14;
      uVar15 = (longlong)(int)puVar14[1] & 0x1fffffffffffffff;
      if (plVar12 + (int)puVar14[1] < plVar12) {
        uVar15 = 0;
      }
      if (uVar15 != 0) {
        do {
          lVar8 = *plVar12;
          lVar6 = 0;
          if (lVar8 != 0) {
            lVar7 = FUN_1413f82e0();
            lVar11 = lVar8;
            do {
              lVar6 = lVar8;
              if (lVar11 == lVar7) break;
              lVar11 = *(longlong *)(lVar11 + 0x30);
              lVar6 = 0;
            } while (lVar11 != 0);
          }
          for (lVar8 = *(longlong *)(lVar2 + 0x10); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30))
          {
            if (lVar8 == lVar6) {
              bVar4 = 1;
              goto LAB_140e44fb4;
            }
          }
          bVar4 = 0;
LAB_140e44fb4:
          bVar3 = (bool)(bVar3 | bVar4);
          plVar12 = plVar12 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar15);
        if (bVar3) {
          plVar12 = *(longlong **)(param_1 + 400);
          plVar10 = plVar12 + (longlong)*(int *)(param_1 + 0x198) * 6;
          for (; plVar12 != plVar10; plVar12 = plVar12 + 6) {
            iVar1 = (int)puVar14[3];
            if (iVar1 != 0) {
              iVar5 = (int)plVar12[1];
              if (*(int *)((longlong)plVar12 + 0xc) < iVar5 + iVar1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar12);
                iVar5 = (int)plVar12[1];
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar5 * 0x10 + *plVar12),(void *)puVar14[2],
                         (longlong)iVar1 << 4);
              *(int *)(plVar12 + 1) = (int)plVar12[1] + iVar1;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e45090 FUN_140e45090 body=344 status=ok
// SIG undefined FUN_140e45090(void)

void FUN_140e45090(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  *(longlong *)(param_1 + 0x250) = param_1;
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    uVar4 = 0;
    plVar5 = *(longlong **)(param_1 + 400);
    uVar6 = (longlong)*(int *)(param_1 + 0x198) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_1 + 0x198) < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        lVar1 = *plVar5;
        if (lVar1 != 0) {
          iVar2 = *(int *)(param_1 + 0x260);
          *(int *)(param_1 + 0x260) = iVar2 + 1;
          if (*(int *)(param_1 + 0x264) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 600,iVar2);
          }
          puVar3 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 600));
          *puVar3 = 0xffffffffffffffff;
          *(undefined4 *)(puVar3 + 1) = 0xffffffff;
          puVar3[2] = lVar1;
          puVar3[3] = 0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                    (param_1 + 0x1a0);
          *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
          if (*(int *)(param_1 + 500) == -1) {
            *(undefined4 *)(param_1 + 500) = 0;
          }
          *(undefined8 *)(param_1 + 0x248) = 0xffffffffffffffff;
          if (*(longlong **)(param_1 + 0x250) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x250) + 0x260))();
          }
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  FUN_142330a70(param_1);
  return;
}



// FUNCTION 140e451f0 FUN_140e451f0 body=1326 status=ok
// SIG undefined FUN_140e451f0(void)

void FUN_140e451f0(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong *plVar11;
  int *piVar12;
  longlong *plVar13;
  int *piVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  int local_58;
  int local_54;
  longlong local_50;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UPlayerGuardianRankComponent::NotifyPrimaryCharacterChanged",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res20,pwVar5 + 2,1);
      plVar19 = (longlong *)(lVar1 + 0x8c0);
      FWeakObjectPtr::operator=(&local_58,0);
      local_50 = 0;
      FWeakObjectPtr::operator=(&local_58,param_1);
      local_50 = local_res20;
      local_res18 = 0;
      if ((local_res20 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_58), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_50);
      }
      piVar12 = (int *)*plVar19;
      iVar7 = *(int *)(lVar1 + 0x8c8);
      for (piVar14 = piVar12; piVar14 != piVar12 + (longlong)iVar7 * 4; piVar14 = piVar14 + 4) {
        if (((*piVar14 == local_58) && (piVar14[1] == local_54)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_58), cVar6 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar14 + 2) == local_50)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar14 - (longlong)piVar12 >> 4) != -1) goto LAB_140e453aa;
          break;
        }
      }
      iVar7 = *(int *)(lVar1 + 0x8c8);
      *(int *)(lVar1 + 0x8c8) = iVar7 + 1;
      if (*(int *)(lVar1 + 0x8cc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar7);
      }
      piVar12 = (int *)((longlong)iVar7 * 0x10 + *plVar19);
      *piVar12 = local_58;
      piVar12[1] = local_54;
      *(longlong *)(piVar12 + 2) = local_50;
LAB_140e453aa:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar19);
    }
  }
  uVar20 = 0;
  FUN_142330a70(param_1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  local_res18 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (local_res18 != 0) {
    plVar19 = *(longlong **)(local_res18 + 0x510);
    uVar17 = (longlong)*(int *)(local_res18 + 0x518) & 0x1fffffffffffffff;
    if (plVar19 + *(int *)(local_res18 + 0x518) < plVar19) {
      uVar17 = uVar20;
    }
    if (uVar17 != 0) {
      plVar16 = (longlong *)(param_1 + 0x1f0);
      do {
        plVar11 = (longlong *)*plVar16;
        lVar8 = (longlong)*(int *)(param_1 + 0x1f8);
        lVar1 = *plVar19;
        plVar10 = plVar11 + lVar8 * 2;
        for (; plVar11 != plVar10; plVar11 = plVar11 + 2) {
          if (*plVar11 == lVar1) goto LAB_140e4547d;
        }
        iVar7 = *(int *)(param_1 + 0x1f8) + 1;
        *(int *)(param_1 + 0x1f8) = iVar7;
        if (*(int *)(param_1 + 0x1fc) < iVar7) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16);
        }
        lVar2 = *plVar16;
        *(longlong *)(lVar2 + lVar8 * 0x10) = lVar1;
        *(undefined4 *)(lVar2 + 8 + lVar8 * 0x10) = 0;
LAB_140e4547d:
        plVar19 = plVar19 + 1;
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar17);
    }
    uVar17 = 0;
    plVar19 = *(longlong **)(local_res18 + 0x10f8);
    uVar20 = (longlong)*(int *)(local_res18 + 0x1100) & 0x1fffffffffffffff;
    if (plVar19 + *(int *)(local_res18 + 0x1100) < plVar19) {
      uVar20 = uVar17;
    }
    if (uVar20 != 0) {
      do {
        lVar1 = *plVar19;
        if (lVar1 != 0) {
          plVar16 = (longlong *)(param_1 + 0x1f0);
          iVar7 = *(int *)(param_1 + 0x1f8);
          plVar10 = (longlong *)*plVar16;
          plVar11 = plVar10 + (longlong)iVar7 * 2;
          if (plVar10 != plVar11) {
            do {
              if (*plVar10 == *(longlong *)(lVar1 + 0x30)) goto LAB_140e45534;
              plVar10 = plVar10 + 2;
            } while (plVar10 != plVar11);
          }
          *(int *)(param_1 + 0x1f8) = iVar7 + 1;
          if (*(int *)(param_1 + 0x1fc) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16);
          }
          puVar15 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar16);
          *puVar15 = *(undefined8 *)(lVar1 + 0x30);
          *(undefined4 *)(puVar15 + 1) = 0;
LAB_140e45534:
          plVar16 = (longlong *)(param_1 + 0x188);
          iVar7 = *(int *)(param_1 + 400);
          plVar10 = (longlong *)*plVar16;
          plVar11 = plVar10 + (longlong)iVar7 * 4;
          for (; plVar10 != plVar11; plVar10 = plVar10 + 4) {
            if (*plVar10 == lVar1) goto LAB_140e45590;
          }
          *(int *)(param_1 + 400) = iVar7 + 1;
          if (*(int *)(param_1 + 0x194) < iVar7 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(plVar16);
          }
          plVar16 = (longlong *)((longlong)iVar7 * 0x20 + *plVar16);
          *plVar16 = lVar1;
          *(undefined4 *)(plVar16 + 1) = 0;
          plVar16[2] = 0;
          plVar16[3] = 0;
        }
LAB_140e45590:
        plVar19 = plVar19 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar20);
    }
    uVar17 = 0;
    plVar19 = *(longlong **)(local_res18 + 0x1108);
    uVar20 = (longlong)*(int *)(local_res18 + 0x1110) & 0x1fffffffffffffff;
    if (plVar19 + *(int *)(local_res18 + 0x1110) < plVar19) {
      uVar20 = uVar17;
    }
    if (uVar20 != 0) {
      do {
        lVar1 = *plVar19;
        if (lVar1 != 0) {
          plVar16 = (longlong *)(param_1 + 0x1f0);
          plVar11 = (longlong *)*plVar16;
          iVar7 = *(int *)(param_1 + 0x1f8);
          lVar8 = (longlong)iVar7 * 0x10;
          plVar10 = plVar11 + (longlong)iVar7 * 2;
          if (plVar11 != plVar10) {
            do {
              if (*plVar11 == *(longlong *)(lVar1 + 0x30)) goto LAB_140e4564c;
              plVar11 = plVar11 + 2;
            } while (plVar11 != plVar10);
          }
          *(int *)(param_1 + 0x1f8) = iVar7 + 1;
          if (*(int *)(param_1 + 0x1fc) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar7);
          }
          lVar2 = *plVar16;
          *(undefined8 *)(lVar2 + lVar8) = *(undefined8 *)(lVar1 + 0x30);
          *(undefined4 *)(lVar2 + 8 + lVar8) = 0;
          plVar11 = (longlong *)(*plVar16 + lVar8);
LAB_140e4564c:
          plVar16 = (longlong *)(param_1 + 0x1b8);
          iVar7 = *(int *)(param_1 + 0x1c0);
          lVar8 = (longlong)iVar7;
          plVar13 = (longlong *)*plVar16;
          plVar10 = plVar13 + lVar8 * 3;
          for (; plVar13 != plVar10; plVar13 = plVar13 + 3) {
            if (*plVar13 == lVar1) goto LAB_140e456cb;
          }
          if ((plVar11 == (longlong *)0x0) || ((int)plVar11[1] < *(int *)(lVar1 + 0xa0))) {
            uVar18 = 0;
          }
          else {
            uVar18 = 1;
          }
          *(int *)(param_1 + 0x1c0) = iVar7 + 1;
          if (*(int *)(param_1 + 0x1c4) < iVar7 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar16,iVar7);
          }
          lVar2 = *plVar16;
          *(longlong *)(lVar2 + lVar8 * 0x18) = lVar1;
          *(undefined8 *)(lVar2 + 8 + lVar8 * 0x18) = 0;
          *(undefined1 *)(lVar2 + 0x10 + lVar8 * 0x18) = uVar18;
          *(undefined1 *)(lVar2 + 0x11 + lVar8 * 0x18) = 0;
        }
LAB_140e456cb:
        plVar19 = plVar19 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar20);
    }
  }
  FUN_140e3ec30(*(undefined8 *)(param_1 + 0x1f0),(longlong)*(int *)(param_1 + 0x1f8),param_1 & 0xff,
                local_res10);
  return;
}



// FUNCTION 140e45720 FUN_140e45720 body=492 status=ok
// SIG undefined FUN_140e45720(void)

void FUN_140e45720(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

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
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if ((param_2 != -1) && (plVar4 = *(longlong **)(param_1 + 0x118), plVar4 != (longlong *)0x0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((bVar5) && (cVar6 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar6 != '\0')) &&
       ((*(longlong *)(param_1 + 0x120) != 0 || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)))) {
      lVar7 = *(longlong *)(param_1 + 0x120);
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_1);
      }
      lVar7 = *(longlong *)(lVar7 + 400);
      if (lVar7 != 0) {
        lVar8 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          FUN_142dcf3a0(plVar4,&local_28);
          if (local_28 != 0) {
            local_18 = local_28;
            plStack_10 = plStack_20;
            if (plStack_20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
              UNLOCK();
            }
            uVar9 = FUN_140bb7220(lVar7);
            FUN_140d6b4a0(uVar9,&local_18,param_3,param_4,param_5,param_6);
            plVar4 = plStack_10;
            if (plStack_10 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_10 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_10)(plStack_10);
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
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            plVar4 = plStack_20 + 1;
            lVar7 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plStack_20)(plStack_20);
              LOCK();
              piVar2 = (int *)((longlong)plStack_20 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_20 + 8))(plStack_20,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e45910 FUN_140e45910 body=499 status=ok
// SIG undefined FUN_140e45910(void)

void FUN_140e45910(longlong param_1,int param_2,int param_3)

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
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar8 = *(longlong *)(param_1 + 0x118);
  if (lVar8 != 0) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (plVar4 = *(longlong **)(lVar8 + 0x9c0), plVar4 != (longlong *)0x0)) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar8 = FUN_1422312c0(plVar4), lVar8 != 0)) {
        lVar7 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (cVar6 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar6 != '\0')) {
          FUN_142dcf3a0(plVar4,&local_28);
          if ((local_28 != 0) && ((param_2 != -1 && (1 < param_3)))) {
            local_18 = local_28;
            plStack_10 = plStack_20;
            if (plStack_20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
              UNLOCK();
            }
            uVar9 = FUN_140bb7220(lVar8);
            FUN_140d6bbf0(uVar9,&local_18,param_3);
            plVar4 = plStack_10;
            if (plStack_10 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_10 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plStack_10)(plStack_10);
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
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            plVar4 = plStack_20 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_20)(plStack_20);
              LOCK();
              piVar2 = (int *)((longlong)plStack_20 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plStack_20 + 8))(plStack_20,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e45b10 FUN_140e45b10 body=70 status=ok
// SIG undefined FUN_140e45b10(void)

void FUN_140e45b10(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  FUN_1409a0890(param_2,param_3,param_4,param_1 + 0x48,param_1 + 0x60,param_5);
  return;
}



// FUNCTION 140e45b60 FUN_140e45b60 body=31 status=ok
// SIG undefined FUN_140e45b60(void)

void FUN_140e45b60(void)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    FUN_140e66560(lVar1);
    return;
  }
  return;
}



// FUNCTION 140e45ba0 FUN_140e45ba0 body=220 status=ok
// SIG undefined FUN_140e45ba0(void)

bool FUN_140e45ba0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = 0;
  lVar7 = lVar5;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
  }
  lVar4 = FUN_140e50970(param_1);
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))();
  }
  if (((param_2 != 0) && (lVar5 != 0)) && (lVar7 != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar6 + *(int *)(param_1 + 0x1a0);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) && (*plVar6 == param_2)) {
        iVar2 = FUN_142ff7c90(lVar5,lVar7);
        iVar3 = FUN_140e4e4c0(param_1,param_2);
        return iVar3 <= iVar2;
      }
    }
  }
  return false;
}



// FUNCTION 140e45c80 FUN_140e45c80 body=168 status=ok
// SIG undefined FUN_140e45c80(void)

bool FUN_140e45c80(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = 0;
  lVar6 = lVar5;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c8);
  }
  lVar4 = FUN_140e50970(param_1);
  if (lVar4 != 0) {
    lVar5 = (**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))();
  }
  if (((param_2 == 0) || (lVar5 == 0)) || (lVar6 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_142d1beb0(param_2);
    iVar3 = FUN_142ff7c90(lVar5,lVar6);
    bVar1 = iVar2 <= iVar3;
  }
  return bVar1;
}



// FUNCTION 140e45d30 FUN_140e45d30 body=174 status=ok
// SIG undefined FUN_140e45d30(void)

bool FUN_140e45d30(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar4 = lVar6;
  if (param_3 != 0) {
    lVar4 = FUN_140b2c3e0(param_3);
  }
  lVar5 = FUN_140e50970(param_1);
  if (lVar5 != 0) {
    lVar6 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
  }
  if ((((param_2 == 0) || (lVar6 == 0)) || (param_3 == 0)) || (lVar4 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_140b2c830(param_3,param_2,*(undefined8 *)(param_1 + 0x1a8));
    iVar3 = FUN_142ff7c90(lVar6,lVar4);
    bVar1 = iVar2 <= iVar3;
  }
  return bVar1;
}



// FUNCTION 140e45de0 FUN_140e45de0 body=236 status=ok
// SIG undefined FUN_140e45de0(void)

undefined8 FUN_140e45de0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = 0;
  lVar8 = lVar6;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
  }
  lVar5 = FUN_140e50970(param_1);
  if (lVar5 != 0) {
    lVar6 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
  }
  if (((param_2 != 0) && (lVar6 != 0)) && (lVar8 != 0)) {
    plVar7 = *(longlong **)(param_1 + 0x198);
    plVar1 = plVar7 + *(int *)(param_1 + 0x1a0);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if ((*plVar7 != 0) && (*plVar7 == param_2)) {
        iVar3 = FUN_142ff7c90(lVar6,lVar8);
        iVar4 = FUN_140e4e4c0(param_1,param_2);
        if (iVar3 < iVar4) {
          return 0;
        }
        cVar2 = FUN_140e46220(param_1,param_2);
        if (cVar2 == '\0') {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e45ed0 FUN_140e45ed0 body=842 status=ok
// SIG undefined FUN_140e45ed0(void)

undefined8 FUN_140e45ed0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 local_28 [24];
  undefined8 local_10;
  
  if (param_2 == 0) {
    if ((param_4 != (longlong *)0x0) && ((wchar_t *)*param_4 != L"No slot provided.")) {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x12);
        iVar7 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar7 + 0x12;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      builtin_wcsncpy((wchar_t *)*param_4,L"No slot provided.",0x12);
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      return 1;
    }
    plVar6 = *(longlong **)(param_2 + 0x60);
    plVar1 = plVar6 + *(int *)(param_2 + 0x68);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_3) {
        lVar5 = param_1 + 0x270;
        cVar2 = FWeakObjectPtr::IsValid(lVar5);
        if ((cVar2 == '\0') && (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)
           ) {
          uVar3 = AGFireballProjectile::GetPrivateStaticClass();
          lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
          if (lVar4 != 0) {
            FWeakObjectPtr::operator=(lVar5,*(undefined8 *)(lVar4 + 0x3b0));
          }
        }
        lVar5 = FWeakObjectPtr::Get(lVar5);
        if (lVar5 == 0) {
          if (param_4 == (longlong *)0x0) {
            return 0;
          }
          if ((wchar_t *)*param_4 == L"No ability tree.") {
            return 0;
          }
          iVar7 = 0;
          *(undefined4 *)(param_4 + 1) = 0;
          if (*(int *)((longlong)param_4 + 0xc) != 0x11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x11);
            iVar7 = (int)param_4[1];
          }
          *(int *)(param_4 + 1) = iVar7 + 0x11;
          if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 0x11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
          }
          builtin_wcsncpy((wchar_t *)*param_4,L"No ability tree.",0x11);
          return 0;
        }
        iVar7 = 0;
        local_10 = 0;
        cVar2 = FUN_1409a7690(lVar5,param_3,local_28);
        if (cVar2 != '\0') {
          cVar2 = FUN_1409a1f80(local_28);
          if (cVar2 != '\0') {
            return 1;
          }
          if (param_4 == (longlong *)0x0) {
            return 0;
          }
          if ((wchar_t *)*param_4 == L"Unable to use item.") {
            return 0;
          }
          *(undefined4 *)(param_4 + 1) = 0;
          if (*(int *)((longlong)param_4 + 0xc) != 0x14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x14);
            iVar7 = (int)param_4[1];
          }
          *(int *)(param_4 + 1) = iVar7 + 0x14;
          if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 0x14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
          }
          builtin_wcsncpy((wchar_t *)*param_4,L"Unable to use item.",0x14);
          return 0;
        }
        if (param_4 == (longlong *)0x0) {
          return 0;
        }
        if ((wchar_t *)*param_4 == L"Failed to retrieve item info.") {
          return 0;
        }
        *(undefined4 *)(param_4 + 1) = 0;
        if (*(int *)((longlong)param_4 + 0xc) != 0x1e) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x1e);
          iVar7 = (int)param_4[1];
        }
        *(int *)(param_4 + 1) = iVar7 + 0x1e;
        if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 0x1e) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
        }
        builtin_wcsncpy((wchar_t *)*param_4,L"Failed to retrieve item info.",0x1e);
        return 0;
      }
    }
    if ((param_4 != (longlong *)0x0) && ((wchar_t *)*param_4 != L"Slot does not support augment."))
    {
      iVar7 = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0x1f) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0x1f);
        iVar7 = (int)param_4[1];
      }
      *(int *)(param_4 + 1) = iVar7 + 0x1f;
      if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 0x1f) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar7);
      }
      builtin_wcsncpy((wchar_t *)*param_4,L"Slot does not support augment.",0x1f);
    }
  }
  return 0;
}



// FUNCTION 140e46220 FUN_140e46220 body=225 status=ok
// SIG undefined FUN_140e46220(void)

undefined8 FUN_140e46220(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x208);
      goto LAB_140e4625a;
    }
  }
  lVar3 = 0;
LAB_140e4625a:
  if ((lVar3 != 0) &&
     ((*(char *)(lVar3 + 0x1e0) == '\0' || (*(longlong *)(lVar3 + 0x18) == DAT_1468708c0)))) {
    if ((*(longlong *)(lVar3 + 0x1d8) != 0) &&
       ((((*(char *)(*(longlong *)(lVar3 + 0x1d8) + 0x38) == '\0' &&
          (lVar3 = FUN_140e50970(param_1), lVar3 != 0)) &&
         (lVar3 = (**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x18))(), lVar3 != 0)) &&
        (cVar1 = FUN_143003580(lVar3), cVar1 != '\0')))) {
      return 0;
    }
    lVar3 = FUN_140e50970(param_1);
    if ((lVar3 != 0) &&
       (cVar1 = (**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x20))
                          ((longlong *)(lVar3 + 0xd80),param_2,1,0,0), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e46310 FUN_140e46310 body=190 status=ok
// SIG undefined FUN_140e46310(void)

undefined8 FUN_140e46310(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar4 = lVar6;
  if (param_3 != 0) {
    lVar4 = FUN_140b2c3e0(param_3);
  }
  lVar5 = FUN_140e50970(param_1);
  if (lVar5 != 0) {
    lVar6 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
  }
  if ((((param_2 != 0) && (lVar6 != 0)) && (param_3 != 0)) && (lVar4 != 0)) {
    iVar2 = FUN_140b2c830(param_3,param_2,*(undefined8 *)(param_1 + 0x1a8));
    iVar3 = FUN_142ff7c90(lVar6,lVar4);
    if ((iVar2 <= iVar3) && (cVar1 = FUN_140e46220(param_1,param_2), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e463d0 FUN_140e463d0 body=114 status=ok
// SIG undefined FUN_140e463d0(void)

undefined8 FUN_140e463d0(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined7 uVar5;
  
  uVar2 = FUN_142de5e60();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  lVar3 = FUN_142de95d0(param_1);
  uVar5 = 0;
  if (lVar3 != 0) {
    lVar4 = FUN_141488c70();
    uVar5 = (undefined7)((ulonglong)(lVar4 + 0x88) >> 8);
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
      return CONCAT71(uVar5,*(char *)(lVar3 + 0x3b0) == '\0');
    }
  }
  return CONCAT71(uVar5,1);
}



// FUNCTION 140e46450 FUN_140e46450 body=158 status=ok
// SIG undefined FUN_140e46450(void)

undefined8 FUN_140e46450(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_1414b4c90();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(char *)(lVar1 + 0x4a8) == '\x01')) && (*(longlong *)(param_1 + 0x920) != 0))
    {
      uVar5 = USafeZone::GetPrivateStaticClass();
      cVar3 = FUN_142c736c0(*(undefined8 *)(param_1 + 0x920),uVar5);
      if (cVar3 == '\0') {
        return 1;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x2388) != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e464f0 FUN_140e464f0 body=66 status=ok
// SIG undefined FUN_140e464f0(void)

undefined8 FUN_140e464f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x6f0) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x920), lVar1 != 0)) {
    uVar3 = UTextBlock::GetPrivateStaticClass();
    cVar2 = FUN_142c736c0(lVar1,uVar3);
    if (cVar2 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140e46540 FUN_140e46540 body=66 status=ok
// SIG undefined FUN_140e46540(void)

undefined1 FUN_140e46540(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x5a2) != '\0') && (0.0 < *(float *)(param_1 + 0x5c0))) {
    fVar1 = (float)FUN_142273d40(0,*(undefined4 *)(param_1 + 0xc8c),*(undefined4 *)(param_1 + 0xc90)
                                );
    if (fVar1 < 0.6) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e46590 FUN_140e46590 body=73 status=ok
// SIG undefined FUN_140e46590(void)

undefined1 FUN_140e46590(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x5a2) != '\0') && (0.0 < *(float *)(param_1 + 0x5c0))) {
    fVar1 = (float)FUN_142273d40(0,*(undefined4 *)(param_1 + 0xc98),*(undefined4 *)(param_1 + 0xc9c)
                                );
    if (fVar1 < *(float *)(param_1 + 0xbdc)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e465e0 FUN_140e465e0 body=62 status=ok
// SIG undefined FUN_140e465e0(void)

undefined1 FUN_140e465e0(longlong param_1)

{
  float fVar1;
  
  if (400.0 < *(float *)(param_1 + 0x5b8)) {
    fVar1 = (float)FUN_142273d40(0x43c80000,*(undefined4 *)(param_1 + 0xc98),
                                 *(undefined4 *)(param_1 + 0xc9c));
    if (fVar1 <= 0.4) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e46620 FUN_140e46620 body=47 status=ok
// SIG undefined FUN_140e46620(void)

undefined1 FUN_140e46620(longlong param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x960) != '\0') {
    fVar1 = (float)FUN_142268eb0(param_1,*(undefined4 *)(param_1 + 0xca8));
    if (fVar1 < 0.35) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e46650 FUN_140e46650 body=69 status=ok
// SIG undefined FUN_140e46650(void)

undefined1 FUN_140e46650(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142273d40(param_1,*(undefined4 *)(param_1 + 0xc98),
                               *(undefined4 *)(param_1 + 0xcb0));
  if ((fVar1 < 0.2) &&
     (*(float *)(param_1 + 0x5b8) <= 540.0 && *(float *)(param_1 + 0x5b8) != 540.0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e466a0 FUN_140e466a0 body=73 status=ok
// SIG undefined FUN_140e466a0(void)

undefined1 FUN_140e466a0(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x5a2) != '\0') && (0.0 < *(float *)(param_1 + 0x5c0))) {
    fVar1 = (float)FUN_142273d40(0,*(undefined4 *)(param_1 + 0xc98),*(undefined4 *)(param_1 + 0xcb0)
                                );
    if (fVar1 < *(float *)(param_1 + 0xbe0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e466f0 FUN_140e466f0 body=54 status=ok
// SIG undefined FUN_140e466f0(void)

undefined1 FUN_140e466f0(longlong param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0xc73) != '\0') {
    fVar1 = (float)FUN_142273d40(param_1,*(undefined4 *)(param_1 + 0xc98),
                                 *(undefined4 *)(param_1 + 0xcb0));
    if (fVar1 <= 0.4) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e46730 FUN_140e46730 body=37 status=ok
// SIG undefined FUN_140e46730(void)

undefined1 FUN_140e46730(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142268eb0(param_1,*(undefined4 *)(param_1 + 0xc74));
  if (fVar1 == 0.0) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e46760 FUN_140e46760 body=37 status=ok
// SIG undefined FUN_140e46760(void)

undefined1 FUN_140e46760(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142268eb0(param_1,*(undefined4 *)(param_1 + 0xc7c));
  if (fVar1 == 0.0) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e46790 FUN_140e46790 body=37 status=ok
// SIG undefined FUN_140e46790(void)

undefined1 FUN_140e46790(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142268eb0(param_1,*(undefined4 *)(param_1 + 0xc84));
  if (fVar1 == 0.0) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e467c0 FUN_140e467c0 body=73 status=ok
// SIG undefined FUN_140e467c0(void)

undefined1 FUN_140e467c0(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x5a2) != '\0') && (0.0 < *(float *)(param_1 + 0x5c0))) {
    fVar1 = (float)FUN_142273d40(0,*(undefined4 *)(param_1 + 0xce4),*(undefined4 *)(param_1 + 0xce8)
                                );
    if (fVar1 < *(float *)(param_1 + 0xbdc)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e46810 FUN_140e46810 body=66 status=ok
// SIG undefined FUN_140e46810(void)

undefined1 FUN_140e46810(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142268eb0(param_1,*(undefined4 *)(param_1 + 0xcc4));
  if ((1.4 < fVar1) &&
     ((*(float *)(param_1 + 0x5b8) <= 0.0 || (*(char *)(param_1 + 0x959) == '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e46860 FUN_140e46860 body=73 status=ok
// SIG undefined FUN_140e46860(void)

undefined1 FUN_140e46860(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142273d40(param_1,*(undefined4 *)(param_1 + 0xcc0),
                               *(undefined4 *)(param_1 + 0xccc));
  if ((fVar1 < 1.4) &&
     ((*(float *)(param_1 + 0x5b8) <= 0.0 || (*(char *)(param_1 + 0x959) == '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e468b0 FUN_140e468b0 body=37 status=ok
// SIG undefined FUN_140e468b0(void)

bool FUN_140e468b0(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142273d40(param_1,*(undefined4 *)(param_1 + 0xcc0),
                               *(undefined4 *)(param_1 + 0xcd4));
  return fVar1 < 0.1;
}



// FUNCTION 140e468e0 FUN_140e468e0 body=47 status=ok
// SIG undefined FUN_140e468e0(void)

undefined1 FUN_140e468e0(longlong param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x960) != '\0') {
    fVar1 = (float)FUN_142268eb0(param_1,*(undefined4 *)(param_1 + 0xcdc));
    if (fVar1 < 0.35) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e46910 FUN_140e46910 body=151 status=ok
// SIG undefined FUN_140e46910(void)

void FUN_140e46910(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_2 + 0x10) = 0;
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  if ((*(longlong *)(lVar1 + 400) != 0) && (*(longlong *)(*(longlong *)(lVar1 + 400) + 0xa0) != 0))
  {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    uVar2 = 0;
    if (*(longlong *)(lVar1 + 400) != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0xa0);
    }
    FUN_142880530(uVar2,param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 140e469b0 FUN_140e469b0 body=562 status=ok
// SIG undefined FUN_140e469b0(void)

void FUN_140e469b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x4b0) == 0) {
    return;
  }
  lVar2 = FUN_140e50900();
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x6f0);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if (lVar2 != 0) {
      lVar3 = FUN_141404840();
      lVar5 = lVar2;
      do {
        if (lVar5 == lVar3) goto LAB_140e46a10;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar2 = 0;
LAB_140e46a10:
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
  }
  FUN_140e47f60(param_1);
  if (*(char *)(param_1 + 0x738) < '\0') {
    FUN_140e65140(param_1);
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    if ((*(byte *)(param_1 + 0x739) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x739) & 2) != 0) {
        FUN_140e5ed30(param_1,param_1 + 0x678,param_1 + 0x6c0,*(undefined4 *)(param_1 + 0x6d0));
      }
    }
    else {
      FUN_140e48310(param_1);
      *(byte *)(param_1 + 0x739) = *(byte *)(param_1 + 0x739) & 0xfc;
      if (*(longlong *)(param_1 + 0x4b0) == 0) {
LAB_140e46aca:
        if (*(longlong *)(param_1 + 0x4e0) != 0) {
          FUN_140e91fc0(*(longlong *)(param_1 + 0x4e0),*(undefined8 *)(param_1 + 0x6f0));
          if ((*(longlong *)(param_1 + 0x4b0) != 0) &&
             (lVar2 = FUN_141796280(*(longlong *)(param_1 + 0x4b0) + 0x70), lVar2 != 0)) {
            lVar4 = FUN_1413f82e0();
LAB_140e46b08:
            if (lVar2 != lVar4) goto code_r0x000140e46b0d;
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4e0) + 0x140);
            lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x4e0) + 0x148) * 0x58 + lVar2;
            for (; lVar2 != lVar4; lVar2 = lVar2 + 0x58) {
              FUN_140e47b70(param_1,lVar2);
            }
          }
          FUN_140e5a2c0(param_1);
        }
      }
      else {
        lVar2 = FUN_141796280(*(longlong *)(param_1 + 0x4b0) + 0x70);
        if (lVar2 != 0) {
          lVar4 = FUN_1413f82e0();
          do {
            if (lVar2 == lVar4) goto LAB_140e46aca;
            lVar2 = *(longlong *)(lVar2 + 0x30);
          } while (lVar2 != 0);
        }
        *(byte *)(param_1 + 0x739) = *(byte *)(param_1 + 0x739) | 1;
      }
    }
  }
LAB_140e46b80:
  if ((*(int *)(param_1 + 0x6e0) == 0) && (*(longlong *)(param_1 + 0x6e8) != 0)) {
    lVar5 = USafeZone::GetPrivateStaticClass();
    lVar2 = *(longlong *)(param_1 + 0x6e8);
    lVar4 = lVar2;
    if (lVar2 != 0) {
      while (lVar4 != lVar5) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar2 != 0) {
        FUN_140e58690(param_1);
      }
    }
  }
  return;
code_r0x000140e46b0d:
  lVar2 = *(longlong *)(lVar2 + 0x30);
  if (lVar2 == 0) goto code_r0x000140e46b16;
  goto LAB_140e46b08;
code_r0x000140e46b16:
  FUN_140e5a2c0(param_1);
  goto LAB_140e46b80;
}



// FUNCTION 140e46bf0 FUN_140e46bf0 body=359 status=ok
// SIG undefined FUN_140e46bf0(void)

void FUN_140e46bf0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a0;
  undefined1 local_8c;
  undefined1 local_78;
  undefined1 local_64;
  undefined1 local_50;
  undefined1 local_3c;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  *(byte *)(param_1 + 0xe7) = *(byte *)(param_1 + 0xe7) & 0xb3;
  local_100 = 0;
  local_e8 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  local_108 = 0;
  FUN_140e53440(0,&local_108);
  local_d8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_28 = 0;
  lStack_20 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_8c = 0;
  local_78 = 0;
  local_64 = 0;
  local_50 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_18 = 0;
  FUN_140e64bc0(param_1,&local_d8);
  FUN_140e48310(param_1);
  FUN_140e46e00(param_1);
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    FUN_142880530(uVar6,param_1 + 0xea);
    param_1[0xea] = 0;
  }
  if (lStack_20 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  plVar4 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  return;
}



// FUNCTION 140e46d60 FUN_140e46d60 body=160 status=ok
// SIG undefined FUN_140e46d60(void)

void FUN_140e46d60(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    plVar3 = (longlong *)param_1[0x33];
    plVar1 = plVar3 + (int)param_1[0x34];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 != 0) {
        FUN_142227350(*plVar3,0,1);
      }
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)((longlong)param_1 + 0x1a4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x33,0);
    }
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 140e46e00 FUN_140e46e00 body=120 status=ok
// SIG undefined FUN_140e46e00(void)

void FUN_140e46e00(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0xe9);
    param_1[0xe9] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x73c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x73a) = 5;
  return;
}



// FUNCTION 140e46e80 FUN_140e46e80 body=416 status=ok
// SIG undefined FUN_140e46e80(void)

void FUN_140e46e80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x1f0);
  lVar6 = (longlong)*(int *)(param_1 + 0x1f8) * 0x10 + lVar3;
  for (; lVar3 != lVar6; lVar3 = lVar3 + 0x10) {
    *(undefined4 *)(lVar3 + 8) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x188);
  lVar6 = (longlong)*(int *)(param_1 + 400) * 0x20 + lVar3;
  for (; lVar3 != lVar6; lVar3 = lVar3 + 0x20) {
    *(undefined4 *)(lVar3 + 8) = 0;
    FUN_142ca9970(lVar3 + 0x10,1);
  }
  plVar7 = *(longlong **)(param_1 + 0x298);
  if (plVar7 != (longlong *)0x0) goto LAB_140e46f6f;
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 == 0) {
LAB_140e46f5f:
    plVar7 = *(longlong **)(param_1 + 0x298);
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e46f5f;
    plVar7 = *(longlong **)(lVar3 + 0x990);
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
LAB_140e46f6f:
  uVar4 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
  lVar3 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar4);
  plVar8 = *(longlong **)(param_1 + 0x1b8);
  plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x1c0) * 3;
  do {
    if (plVar8 == plVar7) {
      return;
    }
    if (((plVar8[1] != 0) && (lVar3 != 0)) && (lVar6 = *plVar8, *(longlong *)(lVar6 + 0x78) != 0)) {
      lVar5 = FUN_1430f1090();
      lVar6 = *(longlong *)(lVar6 + 0x78);
      for (lVar1 = lVar6; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar5) {
          if (lVar6 != 0) {
            FUN_1430ede10(lVar3,*(undefined8 *)(*plVar8 + 0x78));
            plVar8[1] = 0;
          }
          break;
        }
      }
    }
    *(undefined1 *)(plVar8 + 2) = 0;
    plVar8 = plVar8 + 3;
  } while( true );
}



// FUNCTION 140e47020 FUN_140e47020 body=162 status=ok
// SIG undefined FUN_140e47020(void)

void FUN_140e47020(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  if ((*(int *)(param_1 + 0x1c0) != 0) && (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x1c0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x1b8);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
    }
  }
  if ((*(int *)(param_1 + 0x1c0) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x1b8), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x1b8),0,0);
      *(undefined8 *)(param_1 + 0x1b8) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return;
}



// FUNCTION 140e470d0 FUN_140e470d0 body=605 status=ok
// SIG undefined FUN_140e470d0(void)

void FUN_140e470d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined **local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  UMovementComponent::K2_GetMaxSpeedModifier();
  if (param_2 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_140d04570(param_2);
      FUN_142dcf3a0(param_2,&local_68);
      if ((local_68 != 0) && (lVar6 = FUN_1422312c0(param_1), lVar6 != 0)) {
        lVar7 = FUN_14141f270();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_58 = local_68;
          plStack_50 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
            UNLOCK();
          }
          puVar8 = (undefined8 *)FUN_140bbc690(lVar6,local_48,&local_58);
          local_30 = *puVar8;
          local_28 = (longlong *)puVar8[1];
          if (local_28 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_28 + 1) = (int)local_28[1] + 1;
            UNLOCK();
          }
          local_38 = &PTR_FUN_143f740c8;
          local_20 = 0;
          local_18 = 0;
          FUN_140e5e440(param_1,&local_38);
          local_38 = &PTR_FUN_143f740c8;
          if (local_20 != 0) {
            FMemory::Free();
          }
          plVar3 = local_28;
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
          plVar3 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plStack_50)(plStack_50);
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
      }
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_60 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plStack_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
    }
  }
  FUN_140e42500(param_1);
  return;
}



// FUNCTION 140e47330 FUN_140e47330 body=364 status=ok
// SIG undefined FUN_140e47330(void)

void FUN_140e47330(longlong param_1,char param_2,ulonglong *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  uVar5 = uVar4;
  if (0 < (int)param_3[1]) {
    uVar5 = *(ulonglong *)*param_3;
  }
  lVar2 = FUN_140e4c8c0();
  if ((lVar2 != 0) && (uVar3 = FUN_140ad6100(lVar2,*(undefined8 *)(param_1 + 0x1a8)), uVar3 != 0)) {
    lVar2 = FUN_1414e47c0();
    if ((*(int *)(*(longlong *)(uVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e473c6;
  }
  uVar3 = uVar4;
LAB_140e473c6:
  if (uVar5 == 0) {
    return;
  }
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        FUN_140ce5610(*(longlong *)(param_1 + 0x1a8),uVar5);
      }
      if (uVar3 == 0) {
        return;
      }
      FUN_140b63820(uVar3,uVar5);
      return;
    }
    if (param_2 != '\x02') {
      if (param_2 != '\x03') {
        return;
      }
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        puVar6 = (undefined8 *)*param_3;
        uVar5 = (longlong)(int)param_3[1] & 0x1fffffffffffffff;
        if (puVar6 + (int)param_3[1] < puVar6) {
          uVar5 = uVar4;
        }
        if (uVar5 != 0) {
          do {
            FUN_140ce5610(*(undefined8 *)(param_1 + 0x1a8),*puVar6);
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar4 != uVar5);
        }
      }
      if (uVar3 == 0) {
        return;
      }
      FUN_140b63290(uVar3,param_3);
      return;
    }
  }
  if (uVar3 != 0) {
    FUN_140b63650(uVar3,uVar5);
  }
  return;
}



// FUNCTION 140e474a0 FUN_140e474a0 body=148 status=ok
// SIG undefined FUN_140e474a0(void)

void FUN_140e474a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x128) != '\x03') && (lVar2 = FUN_1422312c0(), lVar2 != 0)) {
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
      FUN_140bd5730(lVar2,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 140e47540 FUN_140e47540 body=151 status=ok
// SIG undefined FUN_140e47540(void)

void FUN_140e47540(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (lVar2 = FUN_140cfc7b0(), lVar2 != 0)) {
    lVar3 = FUN_1414b9a30();
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
      FUN_140b01200(lVar2,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 140e475e0 FUN_140e475e0 body=76 status=ok
// SIG undefined FUN_140e475e0(void)

void FUN_140e475e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = param_2;
  local_resc = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x208,&local_res8);
  FUN_140e45910(param_1,param_2,param_3);
  return;
}



// FUNCTION 140e47630 FUN_140e47630 body=67 status=ok
// SIG undefined FUN_140e47630(void)

void FUN_140e47630(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,L"GbxShiftOverlay",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x88))(plVar2,param_1);
  }
  return;
}



// FUNCTION 140e47680 FUN_140e47680 body=65 status=ok
// SIG undefined FUN_140e47680(void)

undefined8 FUN_140e47680(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
    uVar1 = FUN_140a32ac0(*(longlong *)(DAT_146b33f38 + 200),param_2 + 1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140e476d0 FUN_140e476d0 body=65 status=ok
// SIG undefined FUN_140e476d0(void)

undefined8 FUN_140e476d0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
    uVar1 = FUN_140a329f0(*(longlong *)(DAT_146b33f38 + 200),param_2 + 1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140e47720 FUN_140e47720 body=197 status=ok
// SIG undefined FUN_140e47720(void)

void FUN_140e47720(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (((*(byte *)(param_1 + 0x13fc) & 8) != 0) && (param_2 != 0)) {
    uVar4 = 0;
    plVar5 = *(longlong **)(param_2 + 0x1ad0);
    uVar6 = (longlong)*(int *)(param_2 + 0x1ad8) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_2 + 0x1ad8) < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        lVar1 = *plVar5;
        if ((lVar1 != 0) &&
           (lVar2 = FUN_140c44b40(param_1,*(undefined8 *)(lVar1 + 0x458)), lVar2 != 0)) {
          uVar3 = FUN_140b28410(lVar1);
          FUN_140b3d600(lVar2,uVar3,0);
        }
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  return;
}



// FUNCTION 140e477f0 FUN_140e477f0 body=215 status=ok
// SIG undefined FUN_140e477f0(void)

void FUN_140e477f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  
  FUN_142700620();
  if (param_2 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined8 *)(param_2 + 0x570) = *(undefined8 *)(param_1 + 0x570);
      FUN_1404c0940(param_2 + 0x530,param_1 + 0x530);
      uVar1 = *(undefined4 *)(param_1 + 0x5e8);
      uVar2 = *(undefined4 *)(param_1 + 0x5ec);
      uVar3 = *(undefined4 *)(param_1 + 0x5f0);
      *(undefined4 *)(param_2 + 0x5e4) = *(undefined4 *)(param_1 + 0x5e4);
      *(undefined4 *)(param_2 + 0x5e8) = uVar1;
      *(undefined4 *)(param_2 + 0x5ec) = uVar2;
      *(undefined4 *)(param_2 + 0x5f0) = uVar3;
      *(undefined1 *)(param_2 + 0x5d4) = *(undefined1 *)(param_1 + 0x5d4);
      *(undefined1 *)(param_2 + 0x5d5) = *(undefined1 *)(param_1 + 0x5d5);
      *(undefined1 *)(param_2 + 0x5d6) = *(undefined1 *)(param_1 + 0x5d6);
      *(undefined1 *)(param_2 + 0x5d7) = *(undefined1 *)(param_1 + 0x5d7);
      FUN_140e62940(param_2);
      *(undefined1 *)(param_2 + 0x5f4) = *(undefined1 *)(param_1 + 0x5f4);
    }
  }
  return;
}



// FUNCTION 140e478d0 FUN_140e478d0 body=143 status=ok
// SIG undefined FUN_140e478d0(void)

void FUN_140e478d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_140c6f270();
  if (param_2 != 0) {
    lVar2 = FUN_14145f4d0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e47922;
  }
  param_2 = 0;
LAB_140e47922:
  FUN_140e658d0(param_1);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xc3c) = *(undefined4 *)(param_2 + 0xc3c);
    *(undefined1 *)(param_1 + 0xc40) = *(undefined1 *)(param_2 + 0xc40);
    *(undefined4 *)(param_1 + 0xc1c) = *(undefined4 *)(param_2 + 0xc1c);
  }
  return;
}



// FUNCTION 140e47960 FUN_140e47960 body=326 status=ok
// SIG undefined FUN_140e47960(void)

void FUN_140e47960(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  FString::operator=(param_2 + 8,param_1 + 0xa0);
  uVar3 = 0;
  if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x278))();
  }
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  FString::operator=(param_2 + 0x20,param_1 + 0xb8);
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x278))();
  }
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x278))();
  }
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x278))();
  }
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x278))();
  }
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(undefined1 *)(param_2 + 0x40) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_2 + 0x4c) = uVar1;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    *(undefined1 *)(param_2 + 0x41) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)(param_2 + 0x54) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(param_2 + 0x5c) = uVar1;
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined1 *)(param_2 + 0x42) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_2 + 100) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_2 + 0x6c) = uVar1;
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    *(undefined1 *)(param_2 + 0x74) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x6c);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 100);
    *(undefined8 *)(param_2 + 0x80) = uVar1;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    *(undefined1 *)(param_2 + 0x75) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_2 + 0x90) = uVar1;
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    *(undefined1 *)(param_2 + 0x76) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x94);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x8c);
    *(undefined8 *)(param_2 + 0xa0) = uVar1;
  }
  return;
}



// FUNCTION 140e47ab0 FUN_140e47ab0 body=94 status=ok
// SIG undefined FUN_140e47ab0(void)

undefined8 * FUN_140e47ab0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1445b1a00;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140e47b10 FUN_140e47b10 body=84 status=ok
// SIG undefined FUN_140e47b10(void)

CVSToolsListBox * FUN_140e47b10(CMFCToolBarsToolsPropertyPage *param_1)

{
  CVSToolsListBox *this;
  
  this = (CVSToolsListBox *)operator_new(0x6e0);
  if (this != (CVSToolsListBox *)0x0) {
    CVSToolsListBox::CVSToolsListBox(this,param_1);
    *(CMFCToolBarsToolsPropertyPage **)(this + 0x6d0) = param_1;
    *(undefined ***)this = &PTR_FUN_1445b02f8;
    return this;
  }
  return (CVSToolsListBox *)0x0;
}



// FUNCTION 140e47b70 FUN_140e47b70 body=912 status=ok
// SIG undefined FUN_140e47b70(void)

longlong FUN_140e47b70(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  undefined1 local_20;
  ushort local_1e;
  undefined4 local_1c;
  
  if ((((*(byte *)(param_1 + 0xe7) & 2) == 0) && (param_1[0x9c] != 0)) &&
     (lVar6 = (**(code **)(*param_1 + 0x148))(), lVar6 != 0)) {
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar5 = UWorld::IsGameWorld(uVar7);
    if ((cVar5 != '\0') && (*param_2 != 0)) {
      lVar8 = FUN_1414ca080();
      for (lVar6 = *param_2; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar8) {
          if (*param_2 == 0) {
            return 0;
          }
          FActorSpawnParameters::FActorSpawnParameters(local_48);
          local_1e = local_1e | 2;
          lVar8 = 0;
          local_1c = 0x40;
          local_20 = 1;
          lVar6 = lVar8;
          local_38 = param_1;
          if (*param_2 != 0) {
            lVar9 = FUN_1414ca080();
            for (lVar11 = *param_2;
                (lVar6 = lVar8, lVar11 != 0 && (lVar6 = *param_2, lVar11 != lVar9));
                lVar11 = *(longlong *)(lVar11 + 0x30)) {
            }
          }
          uVar10 = FActorSpawnParameters::FActorSpawnParameters(&local_a8);
          uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar6 = UWorld::SpawnActor(uVar7,lVar6,0,0,uVar10);
          if (lVar6 == 0) {
            return 0;
          }
          if (((*(char *)((longlong)param_2 + 0x2c) == '\0') || (param_1[0xde] == 0)) ||
             (lVar11 = *(longlong *)(param_1[0xde] + 0xa18), lVar11 == 0)) {
            lVar11 = param_1[0x2d];
            lVar9 = lVar8;
          }
          else {
            lVar9 = param_2[6];
          }
          FUN_1422232e0(lVar6,lVar11,&DAT_146532188,lVar9);
          local_d8 = param_2[1];
          local_d0 = (undefined4)param_2[2];
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_14223cb00(lVar6,&local_d8,0,0,uVar10);
          local_d8 = *(longlong *)((longlong)param_2 + 0x14);
          local_d0 = *(undefined4 *)((longlong)param_2 + 0x1c);
          FUN_14223ccb0(lVar6,&local_d8,0,0,uVar10 & 0xffffffffffffff00);
          local_d0 = (undefined4)param_2[4];
          local_c0 = CONCAT44(local_c0._4_4_,local_d0);
          local_d8 = CONCAT44(local_d0,local_d0);
          FUN_14223cd40(lVar6,&local_d8);
          FUN_140e442f0(param_1 + 0x96,lVar6);
          plVar3 = (longlong *)param_1[0xde];
          if (plVar3 != (longlong *)0x0) {
            uVar7 = FUN_142e43690();
            lVar8 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
          }
          if (*(longlong *)(lVar6 + 0x460) != 0) {
            FUN_142d1fad0(*(longlong *)(lVar6 + 0x460),lVar8);
          }
          if ((((char)param_2[7] != '\0') && (param_1[0xde] != 0)) &&
             (lVar8 = FUN_140c46a10(param_1[0xde],0), lVar8 != 0)) {
            lVar11 = FUN_14149b100();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && (plVar3 = *(longlong **)(lVar8 + 0x908), plVar3 != (longlong *)0x0)) {
              local_c8 = 0;
              local_b4 = 0;
              local_c0 = 0;
              local_b8 = 0x1000000;
              (**(code **)(*plVar3 + 0x4e8))
                        (plVar3,lVar6,*(undefined8 *)(lVar6 + 0x468),0,&local_c8);
              if (local_c8 != 0) {
                FMemory::Free();
              }
              FUN_1414cd9f0(lVar6,*(undefined8 *)(lVar6 + 0x468));
            }
          }
          lStack_a0 = *param_2;
          lStack_98 = param_2[1];
          lStack_90 = param_2[2];
          lStack_88 = param_2[3];
          local_80 = param_2[4];
          lStack_78 = param_2[5];
          local_70 = param_2[6];
          lStack_68 = param_2[7];
          local_60 = (undefined4)param_2[8];
          uStack_5c = *(undefined4 *)((longlong)param_2 + 0x44);
          uStack_58 = (undefined4)param_2[9];
          uStack_54 = *(undefined4 *)((longlong)param_2 + 0x4c);
          local_50 = param_2[10];
          iVar2 = (int)param_1[0xe0];
          *(int *)(param_1 + 0xe0) = iVar2 + 1;
          local_a8 = lVar6;
          if (*(int *)((longlong)param_1 + 0x704) < iVar2 + 1) {
            TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0xdf,iVar2);
          }
          lVar8 = param_1[0xdf];
          lVar11 = (longlong)iVar2 * 0x60;
          *(longlong *)(lVar11 + lVar8) = local_a8;
          ((longlong *)(lVar11 + lVar8))[1] = lStack_a0;
          plVar3 = (longlong *)(lVar11 + 0x10 + lVar8);
          *plVar3 = lStack_98;
          plVar3[1] = lStack_90;
          plVar3 = (longlong *)(lVar11 + 0x20 + lVar8);
          *plVar3 = lStack_88;
          plVar3[1] = local_80;
          plVar3 = (longlong *)(lVar11 + 0x30 + lVar8);
          *plVar3 = lStack_78;
          plVar3[1] = local_70;
          plVar3 = (longlong *)(lVar11 + 0x40 + lVar8);
          *plVar3 = lStack_68;
          plVar3[1] = CONCAT44(uStack_5c,local_60);
          puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar8);
          *puVar1 = CONCAT44(uStack_54,uStack_58);
          puVar1[1] = local_50;
          return lVar6;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e47f00 FUN_140e47f00 body=83 status=ok
// SIG undefined FUN_140e47f00(void)

void FUN_140e47f00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445b1a18;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1445b1a60;
  }
  return;
}



// FUNCTION 140e47f60 FUN_140e47f60 body=793 status=ok
// SIG undefined FUN_140e47f60(void)

void FUN_140e47f60(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  longlong *local_58;
  longlong local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  undefined1 local_20;
  ushort local_1e;
  undefined4 local_1c;
  
  if (param_1[0x96] == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140e50900();
  }
  param_1[0x9c] = lVar2;
  if (lVar2 == 0) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1[0x9c] + 0x30);
  if (param_1[0xde] != 0) {
    FUN_142227350(param_1[0xde],0,1);
    param_1[0xde] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x8d,0);
  }
  FActorSpawnParameters::FActorSpawnParameters(local_48);
  local_1e = local_1e | 6;
  local_1c = 0x40;
  local_20 = 1;
  local_38 = param_1;
  if (lVar2 != 0) {
    lVar3 = FUN_141404840();
    lVar6 = lVar2;
    do {
      if (lVar6 == lVar3) goto LAB_140e48030;
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  lVar2 = 0;
LAB_140e48030:
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar5 = (longlong *)FUN_142550d00(uVar4,lVar2,&DAT_1468b5b70,local_48);
  param_1[0xde] = (longlong)plVar5;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xe7) & 0x20) != 0) {
    (**(code **)(*plVar5 + 0x310))(plVar5,1);
  }
  FUN_140e59f00(param_1);
  FUN_14222b9f0(param_1[0xde],&DAT_1468b5b70,0,0);
  FUN_142382f60(*(undefined8 *)(param_1[0xde] + 0x168),param_1[0x2d],&DAT_146532188,0);
  local_70 = *(float *)(*(longlong *)(param_1[0xde] + 0x4d0) + 0x710);
  FUN_140e529a0(param_1[0xde],param_1 + 0x96,(char)param_1[0x95]);
  lVar2 = param_1[0x9c];
  local_68 = (float)DAT_1468b5da0;
  fStack_64 = DAT_1468b5da0._4_4_;
  local_60 = DAT_1468b5da8;
  local_78 = (longlong *)0x0;
  if (lVar2 != 0) {
    if ((char)param_1[0x95] == '\x02') {
      uVar7 = *(undefined4 *)(lVar2 + 0xf8);
      uVar8 = *(undefined4 *)(lVar2 + 0xfc);
      fVar1 = *(float *)(lVar2 + 0x100);
      local_68 = *(float *)(lVar2 + 0x104);
      fStack_64 = *(float *)(lVar2 + 0x108);
      local_60 = *(float *)(lVar2 + 0x10c);
    }
    else {
      if ((char)param_1[0x95] != '\x03') goto LAB_140e481db;
      uVar7 = *(undefined4 *)(lVar2 + 0x110);
      uVar8 = *(undefined4 *)(lVar2 + 0x114);
      fVar1 = *(float *)(lVar2 + 0x118);
      local_68 = *(float *)(lVar2 + 0x11c);
      fStack_64 = *(float *)(lVar2 + 0x120);
      local_60 = *(float *)(lVar2 + 0x124);
    }
    local_70 = local_70 + fVar1;
    local_60 = DAT_1468b5da8 + local_60;
    fStack_64 = DAT_1468b5da0._4_4_ + fStack_64;
    local_68 = (float)DAT_1468b5da0 + local_68;
    local_78 = (longlong *)CONCAT44(uVar8,uVar7);
  }
LAB_140e481db:
  local_58 = local_78;
  local_50._0_4_ = local_70;
  FUN_14223cb00(param_1[0xde],&local_58,0,0,0);
  lVar2 = param_1[0xde];
  if (*(longlong *)(lVar2 + 0x4c0) != 0) {
    local_58 = (longlong *)CONCAT44(fStack_64,local_68);
    local_50 = CONCAT44(local_50._4_4_,local_60);
    FUN_142398470(*(longlong *)(lVar2 + 0x4c0),&local_58,0,0,0);
    lVar2 = param_1[0xde];
  }
  local_58 = param_1;
  local_50 = lVar2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x8b,&local_58);
  return;
}



// FUNCTION 140e48280 FUN_140e48280 body=129 status=ok
// SIG undefined FUN_140e48280(void)

void FUN_140e48280(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2[1] != 0) {
    FUN_140e8e810();
    param_2[1] = 0;
  }
  lVar2 = FUN_140e4ba60(param_1,*param_2);
  if (lVar2 != 0) {
    *param_2 = 0;
    FUN_140e46910(param_1,param_2);
    if ((*(longlong *)(param_1 + 0x218) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x920), lVar1 != 0)) {
      FUN_142c84570(lVar1,*(undefined8 *)(lVar2 + 0x28));
    }
  }
  return;
}



// FUNCTION 140e48310 FUN_140e48310 body=114 status=ok
// SIG undefined FUN_140e48310(void)

void FUN_140e48310(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x6f8);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x700) * 0xc;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 0xc) {
    if (*plVar1 != 0) {
      FUN_142227350(*plVar1,0,1);
    }
  }
  *(undefined4 *)(param_1 + 0x700) = 0;
  if (*(int *)(param_1 + 0x704) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo((longlong *)(param_1 + 0x6f8),0);
  }
  return;
}



// FUNCTION 140e48390 FUN_140e48390 body=121 status=ok
// SIG undefined FUN_140e48390(void)

void FUN_140e48390(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2370) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x2370),0,1);
    *(undefined8 *)(param_1 + 0x2370) = 0;
  }
  if (*(longlong *)(param_1 + 0x2380) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x2380),0,1);
    *(undefined8 *)(param_1 + 0x2380) = 0;
  }
  if (*(longlong *)(param_1 + 0x2378) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x2378),0,1);
    *(undefined8 *)(param_1 + 0x2378) = 0;
  }
  *(undefined1 *)(param_1 + 0x2360) = 0;
  return;
}



// FUNCTION 140e48410 FUN_140e48410 body=170 status=ok
// SIG undefined FUN_140e48410(void)

void FUN_140e48410(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  FUN_142701db0();
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar2,&local_18);
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
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140d09050();
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}



// FUNCTION 140e484c0 FUN_140e484c0 body=74 status=ok
// SIG undefined FUN_140e484c0(void)

void FUN_140e484c0(longlong param_1)

{
  FUN_142227880();
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x6f0),0,1);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x468,0);
  }
  FUN_140e48310(param_1);
  return;
}



// FUNCTION 140e48510 FUN_140e48510 body=571 status=ok
// SIG undefined FUN_140e48510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e48510(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_78 = *(longlong **)(param_1 + 0x5b8);
  uStack_70 = *(undefined8 *)(param_1 + 0x5c0);
  *(longlong **)(param_1 + 0x5b0) = local_78;
  if ((local_78 != (longlong *)0x0) &&
     (cVar6 = (**(code **)(*local_78 + 0x838))(local_78,*(undefined8 *)(param_1 + 0x1e0)),
     cVar6 == '\0')) {
    *(undefined8 *)(param_1 + 0x5b0) = 0;
  }
  if (((*(longlong *)(param_1 + 0x5b0) == 0) ||
      (plVar7 = (longlong *)FSlateApplication::GetAppIcon(), *(longlong *)(param_1 + 0x5b0) == 0))
     || (plVar7 == (longlong *)0x0)) {
    FUN_142de6140(param_1,param_2,param_1 + 0x4d8);
    return;
  }
  FUN_142de2fd0(&local_58);
  (**(code **)(*plVar7 + 0x420))(plVar7,*(undefined8 *)(param_1 + 0x1e0),0,&local_58);
  if (((*(byte *)(*(longlong *)(param_1 + 0x5b0) + 0x4a4) & 1) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x5b0) + 0x118) != *(longlong *)(param_1 + 0x1e0))) {
    uVar8 = FUN_1404b03b0();
    FText::operator=(local_50,uVar8);
  }
  fVar5 = (float)uStack_70;
  *(float *)((longlong)param_2 + 0x5c) = (float)uStack_70;
  *param_2 = plVar7;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x5b0) + 0x168);
  if (lVar4 == 0) {
    uStack_70 = CONCAT44(uStack_70._4_4_,DAT_1468b5d98);
    pplVar9 = &local_78;
    local_78 = _DAT_1468b5d90;
  }
  else {
    uStack_60 = *(undefined4 *)(lVar4 + 0x228);
    uStack_5c = *(undefined4 *)(lVar4 + 0x22c);
    pplVar9 = (longlong **)&local_88;
    local_88 = *(undefined4 *)(lVar4 + 0x220);
    local_68 = *(undefined4 *)(lVar4 + 0x220);
    uStack_64 = *(undefined4 *)(lVar4 + 0x224);
    local_80 = uStack_60;
    uStack_84 = *(undefined4 *)(lVar4 + 0x224);
  }
  uVar3 = *(undefined4 *)(pplVar9 + 1);
  param_2[10] = *pplVar9;
  *(undefined4 *)(param_2 + 0xb) = uVar3;
  *(undefined1 *)(param_2 + 2) = local_58;
  *(undefined1 *)((longlong)param_2 + 0x11) = local_57;
  *(undefined1 *)((longlong)param_2 + 0x12) = local_56;
  *(undefined1 *)((longlong)param_2 + 0x13) = local_55;
  *(undefined1 *)((longlong)param_2 + 0x14) = local_54;
  *(undefined1 *)((longlong)param_2 + 0x15) = local_53;
  *(undefined1 *)((longlong)param_2 + 0x16) = local_52;
  FText::operator=(param_2 + 3,local_50);
  param_2[6] = local_38;
  param_2[7] = local_30;
  param_2[8] = local_28;
  param_2[9] = local_20;
  *(bool *)((longlong)param_2 + 0x11) =
       fVar5 < *(float *)(param_1 + 0x5a0) || fVar5 == *(float *)(param_1 + 0x5a0);
  if (local_48 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar7 = local_48 + 1;
  lVar4 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)lVar4 != 1) {
    return;
  }
  (**(code **)*local_48)(local_48);
  LOCK();
  piVar1 = (int *)((longlong)local_48 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
  (**(code **)(*local_48 + 8))(local_48,1);
  return;
}



// FUNCTION 140e48750 FUN_140e48750 body=307 status=ok
// SIG undefined FUN_140e48750(void)

void FUN_140e48750(longlong *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_res18;
  undefined2 local_res1c;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    iVar2 = (**(code **)(*param_1 + 0x408))(param_1);
    iVar5 = (uint)param_2 + iVar2;
    uVar4 = FUN_142cc0880();
    iVar1 = FUN_142cc2730(uVar4);
    if (iVar5 < 1) {
      iVar1 = 1;
    }
    else if (iVar5 < iVar1) {
      iVar1 = iVar5;
    }
    if (iVar2 < iVar1) {
      (**(code **)(*param_1 + 0x260))(param_1);
      FUN_142ccf590(param_1,iVar1);
      (**(code **)(*param_1 + 0x3f8))(param_1,iVar1);
      iVar5 = (**(code **)(*param_1 + 0x408))(param_1);
      uVar3 = 0;
      iVar5 = iVar5 + -1;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        uVar3 = FUN_140a32ac0(*(longlong *)(DAT_146b33f38 + 200),iVar5 + 1);
      }
      *(undefined4 *)(param_1 + 0x3b) = uVar3;
      local_res18 = 0;
      local_res1c = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x43,&local_res18);
      FUN_140e51830(param_1,iVar2,iVar1);
      FUN_140e48f20(param_1,L"CheatLevelUp");
    }
  }
  return;
}



// FUNCTION 140e48890 FUN_140e48890 body=710 status=ok
// SIG undefined FUN_140e48890(void)

void FUN_140e48890(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  
  if ((*(byte *)(param_1 + 0x738) & 0x40) == 0) {
    bVar4 = false;
    if (*(longlong *)(param_1 + 0x718) != 0) {
      lVar6 = USafeZone::GetPrivateStaticClass();
      lVar8 = *(longlong *)(param_1 + 0x718);
      lVar10 = lVar8;
      if (lVar8 != 0) {
        while (lVar10 != lVar6) {
          lVar10 = *(longlong *)(lVar10 + 0x30);
          if (lVar10 == 0) {
            FUN_140e46bf0(param_1);
            return;
          }
        }
        if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x6f0) != 0)) {
          if (lVar8 != 0) {
            lVar6 = USafeZone::GetPrivateStaticClass();
            lVar8 = *(longlong *)(param_1 + 0x718);
            for (lVar10 = lVar8; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
              if (lVar10 == lVar6) goto LAB_140e48951;
            }
          }
          lVar8 = 0;
LAB_140e48951:
          FUN_142c7bc00(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x920),&local_48,lVar8,2);
          if (local_48 != 0) {
            *(byte *)(param_1 + 0x738) = *(byte *)(param_1 + 0x738) | 0x40;
            bVar4 = true;
            plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
            local_28 = plVar7;
            if (plVar7 != (longlong *)0x0) {
              *plVar7 = (longlong)&PTR_FUN_14419ca48;
              FWeakObjectPtr::operator=(plVar7 + 1,param_1);
              plVar7[2] = (longlong)&LAB_140e562f0;
              lVar8 = FDelegateHandle::GenerateNewID();
              plVar7[4] = lVar8;
              *plVar7 = (longlong)&PTR_FUN_14419ca90;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_48 + 0x58,1);
              (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
              iVar3 = *(int *)(local_48 + 0x60);
              *(int *)(local_48 + 0x60) = iVar3 + 1;
              if (*(int *)(local_48 + 100) < iVar3 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_48 + 0x58,iVar3);
              }
              puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(local_48 + 0x58));
              *puVar9 = plVar7;
              *(undefined4 *)(puVar9 + 1) = 3;
            }
            plVar7 = *(longlong **)(param_1 + 0x6f8);
            plVar11 = plVar7 + (longlong)*(int *)(param_1 + 0x700) * 0xc;
            for (; plVar7 != plVar11; plVar7 = plVar7 + 0xc) {
              if ((*plVar7 != 0) && (*(longlong *)(*plVar7 + 0x458) != 0)) {
                if (*(longlong *)(param_1 + 0x718) != 0) {
                  lVar6 = USafeZone::GetPrivateStaticClass();
                  lVar8 = *(longlong *)(param_1 + 0x718);
                  for (lVar10 = lVar8; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
                    if (lVar10 == lVar6) goto LAB_140e48a95;
                  }
                }
                lVar8 = 0;
LAB_140e48a95:
                FUN_142c7bc00(*(undefined8 *)(*plVar7 + 0x458),local_38,lVar8,2);
                plVar5 = local_30;
                if (local_30 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_30 + 1;
                  lVar8 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar8 == 1) {
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
            }
          }
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_40 + 1;
            lVar8 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar2 = (int *)((longlong)local_40 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_40 + 8))(local_40,1);
              }
            }
          }
          if (bVar4) {
            return;
          }
        }
      }
    }
    FUN_140e46bf0(param_1);
  }
  return;
}



// FUNCTION 140e48b60 FUN_140e48b60 body=32 status=ok
// SIG undefined FUN_140e48b60(void)

void FUN_140e48b60(longlong param_1,byte param_2)

{
  if ((*(char *)(param_1 + 600) != '\0') && (*(byte *)(param_1 + 0x259) != param_2)) {
    *(byte *)(param_1 + 0x259) = param_2;
    FUN_140e49040(param_1,param_2 ^ 1);
    return;
  }
  return;
}



// FUNCTION 140e48b80 FUN_140e48b80 body=392 status=ok
// SIG undefined FUN_140e48b80(void)

void FUN_140e48b80(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  if ((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    cVar3 = FUN_140e53810();
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x170) = 0;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x250) + 0xd88);
      (**(code **)(*plVar5 + 0x78))(plVar5,DAT_146870860,0);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x250) + 0xd88);
      (**(code **)(*plVar5 + 0x100))(plVar5,DAT_146870860,0xffffffff,1,0,0);
      lVar6 = *(longlong *)(param_1 + 0x250);
      lVar1 = *(longlong *)(lVar6 + 0x920);
      if (lVar1 != 0) {
        puVar4 = (undefined8 *)FName::FName(local_res8,L"UpperBody",1);
        FUN_142c848a0(lVar1,*puVar4);
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x250) + 0x920);
        puVar4 = (undefined8 *)FName::FName(local_res8,L"FullBody",1);
        FUN_142c848a0(uVar2,*puVar4);
        lVar6 = *(longlong *)(param_1 + 0x250);
      }
      if (*(longlong *)(lVar6 + 0xe68) != 0) {
        FUN_142dafbc0(*(longlong *)(lVar6 + 0xe68) + 0x2990,&DAT_146870860);
        lVar6 = *(longlong *)(param_1 + 0x250);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 2000))
                (*(longlong **)(param_1 + 0x28),lVar6,0,param_2);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x310))(*(longlong **)(param_1 + 0x28),0);
      FUN_140e30020(*(undefined8 *)(param_1 + 0x28));
      FUN_140e58fd0(param_1,DAT_146870118);
      FUN_140e4ff00(param_1,param_1 + 0x1e0,param_1 + 0x1e8);
    }
  }
  return;
}



// FUNCTION 140e48d10 FUN_140e48d10 body=317 status=ok
// SIG undefined FUN_140e48d10(void)

longlong FUN_140e48d10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong local_res10;
  longlong local_18 [2];
  
  local_res10 = param_2;
  lVar3 = FName::GetComparisonNameEntry(&local_res10);
  if (lVar3 == 0) {
    local_18[0] = 0;
    local_18[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"*INVALID*");
  }
  else {
    FNameEntry::GetPlainNameString(lVar3,local_18);
  }
  FUN_141784790(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  lVar3 = local_res10;
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0xa8);
  iVar6 = 0;
  if (0 < iVar2) {
    lVar5 = 0;
    plVar4 = *(longlong **)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0) {
      plVar4 = plVar1;
    }
    do {
      if (*plVar4 == local_res10) {
        if (iVar6 != -1) {
          return param_1;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      plVar4 = plVar4 + 2;
    } while (lVar5 < iVar2);
  }
  *(int *)(param_1 + 0xa8) = iVar2 + 1;
  if (*(int *)(param_1 + 0xac) < iVar2 + 1) {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeGrow(plVar1,iVar2);
  }
  plVar4 = *(longlong **)(param_1 + 0xa0);
  if (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0) {
    plVar4 = plVar1;
  }
  plVar4 = plVar4 + (longlong)iVar2 * 2;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = lVar3;
    plVar4[1] = 0;
  }
  return param_1;
}



// FUNCTION 140e48e50 FUN_140e48e50 body=201 status=ok
// SIG undefined FUN_140e48e50(void)

void FUN_140e48e50(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0))
  {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x7d8))();
    FUN_140e30ca0(*(undefined8 *)(param_1 + 0x28));
    FUN_140e58fd0(param_1,DAT_146870120);
    FUN_140e5e2f0(param_1,0,0);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      cVar1 = FUN_140e27710();
      FUN_140e36bd0(*(undefined8 *)(param_1 + 0x28),0);
      cVar2 = FUN_140e27710(*(undefined8 *)(param_1 + 0x28));
      if (cVar1 != cVar2) {
        FUN_140e60780(param_1,0);
      }
    }
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined1 *)(param_1 + 0x171) = 0;
    FUN_140e5dad0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140e48f20 FUN_140e48f20 body=181 status=ok
// SIG undefined FUN_140e48f20(void)

void FUN_140e48f20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x9c0), lVar1 != 0)) {
      lVar3 = FUN_14145f370();
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
        FUN_142dca8a0(lVar1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140e48fe0 FUN_140e48fe0 body=88 status=ok
// SIG undefined FUN_140e48fe0(void)

void FUN_140e48fe0(longlong param_1,char param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x259) == '\0') && (*(char *)(param_1 + 600) != param_2)) {
    iVar1 = FUN_14233f450();
    if (iVar1 != 3) {
      FUN_1414b1e80();
      return;
    }
    *(char *)(param_1 + 600) = param_2;
    FUN_140e49040(param_1,param_2);
  }
  return;
}



// FUNCTION 140e49040 FUN_140e49040 body=1000 status=ok
// SIG undefined FUN_140e49040(void)

void FUN_140e49040(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 local_res18 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar11 = 0;
  uVar15 = 1;
  uVar16 = uVar11;
  if (0 < (int)param_1[0x32]) {
    do {
      lVar6 = param_1[0x31];
      lVar10 = *(longlong *)(lVar6 + 0x10 + uVar16);
      lVar13 = (longlong)*(int *)(lVar6 + 0x18 + uVar16) * 0x10 + lVar10;
      if (lVar10 != lVar13) {
        do {
          FUN_142ca4fb0(lVar10);
          lVar10 = lVar10 + 0x10;
        } while (lVar10 != lVar13);
        lVar6 = param_1[0x31];
      }
      iVar12 = *(int *)(lVar6 + 0x18 + uVar16);
      lVar6 = lVar6 + uVar16;
      if (iVar12 != 0) {
        plVar14 = (longlong *)(*(longlong *)(lVar6 + 0x10) + 8);
        do {
          plVar2 = (longlong *)*plVar14;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar2 + 1;
            lVar10 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
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
          plVar14 = plVar14 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      *(undefined4 *)(lVar6 + 0x18) = 0;
      if (*(int *)(lVar6 + 0x1c) != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar6 + 0x10,0);
      }
      iVar12 = (int)uVar11;
      if (param_2 != '\0') {
        if ((iVar12 < 0) || ((int)param_1[0x32] <= iVar12)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (iVar12 < (int)param_1[0x36])) {
          plVar14 = (longlong *)param_1[0x35];
          if ((longlong *)param_1[0x35] == (longlong *)0x0) {
            plVar14 = param_1 + 0x33;
          }
          iVar4 = iVar12;
          if (iVar12 < 0) {
            iVar4 = iVar12 + 0x1f;
          }
          if ((((*(uint *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) & uVar15) != 0) &&
              (lVar6 = *(longlong *)(param_1[0x31] + uVar16), lVar6 != 0)) &&
             (0 < *(int *)(lVar6 + 0x40))) {
            uVar5 = FUN_140e505b0(param_1);
            local_58 = (undefined4)uVar5;
            uStack_54 = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_48 = local_58;
            uStack_44 = uStack_54;
            uStack_40 = 0;
            uStack_3c = 0;
            FUN_142c90ad0(lVar6 + 0x38,param_1[0x31] + (longlong)iVar12 * 0x20 + 0x10,param_1,
                          &local_48,1,local_res18);
          }
        }
      }
      uVar11 = (ulonglong)(iVar12 + 1U);
      uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      uVar16 = uVar16 + 0x20;
    } while ((int)(iVar12 + 1U) < (int)param_1[0x32]);
  }
  uVar15 = 1;
  plVar14 = (longlong *)param_1[0x53];
  if (plVar14 == (longlong *)0x0) {
    lVar6 = param_1[0x23];
    if (lVar6 == 0) {
LAB_140e49279:
      plVar14 = (longlong *)param_1[0x53];
    }
    else {
      lVar10 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140e49279;
      plVar14 = *(longlong **)(lVar6 + 0x990);
    }
    if (plVar14 == (longlong *)0x0) goto LAB_140e49404;
  }
  UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
  lVar6 = (**(code **)(*plVar14 + 0x628))(plVar14);
  if (lVar6 != 0) {
    iVar12 = (int)param_1[0x38];
    iVar4 = 0;
    if (0 < iVar12) {
      lVar10 = 0;
      do {
        plVar2 = *(longlong **)(param_1[0x37] + lVar10);
        if (plVar2 != (longlong *)0x0) {
          if (param_2 == '\0') {
            if (plVar2[0xf] != 0) {
              lVar8 = FUN_1430f1090();
              for (lVar13 = plVar2[0xf]; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
                if (lVar13 == lVar8) {
                  if ((plVar2[0xf] != 0) && (*(longlong *)(param_1[0x37] + 8 + lVar10) != 0)) {
                    FUN_1430ede10(lVar6);
                    *(undefined8 *)(param_1[0x37] + 8 + lVar10) = 0;
                  }
                  break;
                }
              }
            }
          }
          else {
            if ((iVar4 < 0) || (iVar12 <= iVar4)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (iVar4 < (int)param_1[0x3c])) {
              plVar9 = (longlong *)param_1[0x3b];
              if ((longlong *)param_1[0x3b] == (longlong *)0x0) {
                plVar9 = param_1 + 0x39;
              }
              iVar12 = iVar4;
              if (iVar4 < 0) {
                iVar12 = iVar4 + 0x1f;
              }
              if ((*(uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4) & uVar15) != 0) {
                if (plVar2 != (longlong *)0x0) {
                  plVar9 = (longlong *)param_1[0x3e];
                  plVar7 = plVar9 + (longlong)(int)param_1[0x3f] * 2;
                  if (plVar9 != plVar7) {
                    do {
                      if (*plVar9 == plVar2[6]) goto LAB_140e49360;
                      plVar9 = plVar9 + 2;
                    } while (plVar9 != plVar7);
                  }
                }
                plVar9 = (longlong *)0x0;
LAB_140e49360:
                if ((plVar9 != (longlong *)0x0) && ((int)plVar2[0x14] <= (int)plVar9[1])) {
                  (**(code **)(*plVar2 + 0x280))
                            (plVar2,plVar14,param_1[0x37] + (longlong)iVar4 * 0x18 + 8);
                }
              }
            }
          }
        }
        iVar12 = (int)param_1[0x38];
        iVar4 = iVar4 + 1;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
        lVar10 = lVar10 + 0x18;
      } while (iVar4 < iVar12);
    }
  }
LAB_140e49404:
                    /* WARNING: Could not recover jumptable at 0x000140e49421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 140e49430 FUN_140e49430 body=688 status=ok
// SIG undefined FUN_140e49430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e49430(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    if (param_3 == '\0') {
      uVar1 = DAT_146870138;
      if (param_2 != '\0') {
        uVar1 = DAT_146870130;
      }
      fVar4 = (float)FUN_140e58fd0(param_1,uVar1);
      if (fVar4 <= 0.01) {
        fVar4 = 0.01;
      }
      local_a8 = (longlong *)0x0;
      local_a0 = 0;
      plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar2 == (longlong *)0x0) {
        if (((local_a0 != 0) && (local_a8 != (longlong *)0x0)) &&
           ((**(code **)(*local_a8 + 0x28))(local_a8,0), local_a8 != (longlong *)0x0)) {
          local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
        }
      }
      else {
        plVar2[1] = param_1;
        *plVar2 = (longlong)&PTR_GetPoolName_143fcffe0;
        plVar2[2] = (longlong)FUN_140e56690;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar2[4] = lVar3;
        *plVar2 = (longlong)&PTR_GetPoolName_143fd0028;
        FUN_140596760(plVar2,&local_a8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar3 = FMemory::Realloc(plVar2,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
      uVar1 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x250));
      local_98 = 0;
      local_90 = 0;
      if ((local_a0 != 0) && (local_a8 != (longlong *)0x0)) {
        (**(code **)(*local_a8 + 0x30))(local_a8,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar1,param_1 + 0x1a0,&local_98,fVar4);
      if (local_38 != 0) {
        plVar2 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar2 = local_48;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
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
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free(local_a8);
      }
    }
    else {
      uVar1 = AActor::GetWorldTimerManager();
      FUN_142880530(uVar1,param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      if (*(longlong *)(param_1 + 0x250) != 0) {
        FUN_140e3c160(*(longlong *)(param_1 + 0x250),1,DAT_146870870);
        local_a8 = DAT_146870870;
        FUN_142dbb5d0(param_1 + 0xd0,&local_a8);
      }
    }
  }
  return;
}



// FUNCTION 140e496e0 FUN_140e496e0 body=27 status=ok
// SIG undefined FUN_140e496e0(void)

void FUN_140e496e0(undefined8 param_1)

{
  FUN_140c3f320();
  FUN_140e48390(param_1);
  return;
}



// FUNCTION 140e49700 FUN_140e49700 body=207 status=ok
// SIG undefined FUN_140e49700(void)

void FUN_140e49700(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((((*(byte *)(param_1 + 0xe7) & 1) != 0) &&
       (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
      (lVar3 = UWorld::GetWorldSettings(lVar3,0,1), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x658), lVar3 != 0)) {
    lVar4 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar1 = (int)param_1[0xe1];
      if ((iVar1 < 0) || (*(int *)(lVar3 + 0xc0) <= iVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined8 *)(*(longlong *)(lVar3 + 0xb8) + (longlong)iVar1 * 8) = 0;
      }
    }
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140e497d0 FUN_140e497d0 body=667 status=ok
// SIG undefined FUN_140e497d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e497d0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined8 local_res8;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 *local_50;
  undefined8 local_48;
  longlong local_40 [5];
  
  FUN_142cbea30();
  local_48 = 0xb;
  local_50 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
  FGenericPlatformString::Memcpy(local_50,L"Experience",0x16);
  iVar1 = (**(code **)(*param_1 + 0x408))(param_1);
  uVar2 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 200) != 0) {
    uVar2 = FUN_140a32ac0(*(longlong *)(DAT_146b33f38 + 200),iVar1 + 1);
  }
  FString::PrintfImpl(local_40,L"%d / %d",(int)param_1[0x3b],uVar2);
  FUN_140c334b0(param_2,&local_50,local_40);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar3 = param_1[0x24];
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  lVar3 = FUN_140e7e6f0(lVar3);
  if (lVar3 != 0) {
    uVar2 = 1;
    if (param_1[0x23] == 0) {
      puVar5 = &local_68;
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      lVar4 = *(longlong *)(param_1[0x23] + 0x168);
      if (lVar4 == 0) {
        local_68 = _DAT_1468b5d90;
        local_60 = DAT_1468b5d98;
      }
      else {
        local_68 = *(undefined8 *)(lVar4 + 0x220);
        local_60 = *(undefined4 *)(lVar4 + 0x228);
      }
      puVar5 = &local_5c;
      local_5c = local_68;
      local_54 = local_60;
    }
    lVar4 = FUN_140e80650(lVar3,puVar5,0);
    if (lVar4 != 0) {
      uVar2 = FUN_140e818f0(lVar3,lVar4,0,0);
    }
    local_40[0] = 0;
    local_40[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
    FGenericPlatformString::Memcpy(local_40[0],L"Nearest Region",0x1e);
    if (lVar4 == 0) {
      local_50 = (undefined2 *)0x0;
      local_48 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
      FGenericPlatformString::Memcpy(local_50,&DAT_143f3edc8,10);
    }
    else {
      local_res8 = *(undefined8 *)(lVar4 + 0x18);
      FName::ToString(&local_res8,&local_50);
    }
    puVar6 = &DAT_143f3eda8;
    if ((int)local_48 != 0) {
      puVar6 = local_50;
    }
    FString::PrintfImpl(local_40 + 2,L"%s (GameStage = %d)",puVar6,uVar2);
    FUN_140c334b0(param_2,local_40,local_40 + 2);
    if (local_40[2] != 0) {
      FMemory::Free();
    }
    if (local_50 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_40[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e49a70 FUN_140e49a70 body=133 status=ok
// SIG undefined FUN_140e49a70(void)

void FUN_140e49a70(longlong param_1,undefined1 param_2,undefined1 param_3,longlong param_4)

{
  char cVar1;
  longlong local_res20;
  
  if ((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    *(undefined1 *)(param_1 + 0x31) = param_3;
    if (param_4 == 0) {
      param_4 = DAT_146870860;
    }
    local_res20 = param_4;
    cVar1 = FUN_1407c3030(param_1 + 0x38);
    FUN_142dafbc0(param_1 + 0x38,&local_res20);
    if ((*(char *)(param_1 + 0x30) == '\0') || (cVar1 == '\0')) {
      FUN_140e48b80(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140e49b00 FUN_140e49b00 body=70 status=ok
// SIG undefined FUN_140e49b00(void)

void FUN_140e49b00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x168) = 0;
    lVar1 = *(longlong *)(param_1 + 8);
    if ((*(char *)(lVar1 + 0x171) != '\0') && (*(char *)(lVar1 + 0x30) != '\0')) {
      FUN_140e5dad0(lVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140e49b50 FUN_140e49b50 body=67 status=ok
// SIG undefined FUN_140e49b50(void)

undefined8 FUN_140e49b50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar2 != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x168) = 0;
    lVar1 = *(longlong *)(param_1 + 8);
    if ((*(char *)(lVar1 + 0x171) != '\0') && (*(char *)(lVar1 + 0x30) != '\0')) {
      FUN_140e5dad0(lVar1,1);
    }
  }
  return 1;
}



// FUNCTION 140e49ba0 FUN_140e49ba0 body=1173 status=ok
// SIG undefined FUN_140e49ba0(void)

void FUN_140e49ba0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  uint uVar16;
  void *pvVar17;
  void *pvVar18;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar3 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x1e8);
    puVar9 = puVar12 + (longlong)*(int *)(param_2 + 0x1f0) * 2;
    for (; puVar12 != puVar9; puVar12 = puVar12 + 2) {
      pvVar17 = (void *)0x0;
      iVar2 = *(int *)(puVar12 + 1);
      pvVar18 = (void *)*puVar12;
      local_98 = (void *)0x0;
      local_90._4_4_ = (undefined4)((ulonglong)local_90 >> 0x20);
      if (iVar2 == 0) {
        local_80 = iVar2;
        local_7c = 0;
      }
      else {
        local_90._0_4_ = iVar2;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar2,0);
        pvVar17 = local_98;
        _guard_xfg_dispatch_icall_nop(local_98,pvVar18,(longlong)iVar2 * 2);
        local_80 = (int)local_90;
        local_7c = local_90._4_4_;
      }
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_88 = pvVar17;
      FUN_1417978e0(&local_48,&local_88);
      lVar10 = FSoftObjectPath::TryLoad(&local_48);
      if (lVar10 == 0) {
LAB_140e49cf4:
        lVar10 = 0;
      }
      else {
        lVar11 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_140e49cf4;
      }
      if (local_40 != 0) {
        FMemory::Free();
      }
      if ((lVar10 != 0) && (cVar8 = FUN_140ab3ac0(lVar10,0), cVar8 == '\0')) {
        lVar11 = *(longlong *)(lVar10 + 0xf0);
        if (lVar11 == *(longlong *)(lVar3 + 0x5a8)) {
          *(longlong *)(param_1 + 8) = lVar10;
          lVar11 = *(longlong *)(lVar10 + 0xf0);
        }
        if (lVar11 == *(longlong *)(lVar3 + 0x5b0)) {
          *(longlong *)(param_1 + 0x10) = lVar10;
        }
        else if (lVar11 == *(longlong *)(lVar3 + 0x5b8)) {
          *(longlong *)(param_1 + 0x18) = lVar10;
        }
      }
    }
    uVar16 = 0;
    if (*(int *)(param_2 + 0x200) != 0) {
      do {
        pvVar18 = (void *)0x0;
        iVar2 = *(int *)(*(longlong *)(param_2 + 0x1f8) + (longlong)(int)uVar16 * 4);
        if ((iVar2 < 0) || (*(int *)(param_2 + 0x1f0) <= iVar2)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          local_98 = (void *)0x0;
          puVar12 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0x1e8));
          iVar2 = *(int *)(puVar12 + 1);
          pvVar17 = (void *)*puVar12;
          if (iVar2 == 0) {
            local_80 = iVar2;
            local_7c = 0;
          }
          else {
            local_90._0_4_ = iVar2;
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar2,0);
            pvVar18 = local_98;
            _guard_xfg_dispatch_icall_nop(local_98,pvVar17,(longlong)iVar2 * 2);
            local_80 = (int)local_90;
            local_7c = local_90._4_4_;
          }
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          local_98 = (void *)0x0;
          local_90 = 0;
          local_88 = pvVar18;
          FUN_1417978e0(&local_48,&local_88);
          lVar10 = FSoftObjectPath::TryLoad(&local_48);
          if (lVar10 == 0) {
LAB_140e49e77:
            lVar10 = 0;
          }
          else {
            lVar11 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_140e49e77;
          }
          if (local_40 != 0) {
            FMemory::Free();
          }
          if ((lVar10 != 0) && (cVar8 = FUN_140ab3ac0(lVar10,0), cVar8 == '\0')) {
            *(longlong *)(param_1 + 0x20) = lVar10;
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(uint *)(param_2 + 0x200));
    }
    plVar15 = *(longlong **)(param_2 + 0x208);
    plVar1 = plVar15 + (longlong)*(int *)(param_2 + 0x210) * 5;
    for (; plVar15 != plVar1; plVar15 = plVar15 + 5) {
      cVar8 = (char)plVar15[4];
      if ((cVar8 == '\0') || (*(char *)((longlong)plVar15 + 0x21) == '\0')) {
        lVar10 = *plVar15;
        if (lVar10 == *(longlong *)(lVar3 + 0x5c8)) {
          if (cVar8 == '\0') {
            puVar13 = (undefined4 *)FLinearColor::FLinearColor(&local_88,plVar15 + 1);
            if (puVar13 != (undefined4 *)(param_1 + 0x28)) {
              if (*(char *)(param_1 + 0x38) != '\0') {
                *(undefined1 *)(param_1 + 0x38) = 0;
              }
              uVar4 = puVar13[1];
              uVar5 = puVar13[2];
              uVar6 = puVar13[3];
              *(undefined4 *)(param_1 + 0x28) = *puVar13;
              *(undefined4 *)(param_1 + 0x2c) = uVar4;
              *(undefined4 *)(param_1 + 0x30) = uVar5;
              *(undefined4 *)(param_1 + 0x34) = uVar6;
              *(undefined1 *)(param_1 + 0x38) = 1;
            }
          }
          if (*(char *)((longlong)plVar15 + 0x21) == '\0') {
            puVar14 = (undefined4 *)FLinearColor::FLinearColor(&local_98,(longlong)plVar15 + 0x14);
            puVar13 = (undefined4 *)(param_1 + 100);
LAB_140e49ff1:
            if (puVar14 != puVar13) {
              if (*(char *)(puVar13 + 4) != '\0') {
                *(undefined1 *)(puVar13 + 4) = 0;
              }
              uVar4 = puVar14[1];
              uVar5 = puVar14[2];
              uVar6 = puVar14[3];
              *puVar13 = *puVar14;
              puVar13[1] = uVar4;
              puVar13[2] = uVar5;
              puVar13[3] = uVar6;
              *(undefined1 *)(puVar13 + 4) = 1;
            }
          }
        }
        else if (lVar10 == *(longlong *)(lVar3 + 0x5d0)) {
          if (cVar8 == '\0') {
            puVar13 = (undefined4 *)FLinearColor::FLinearColor(local_78,plVar15 + 1);
            if (puVar13 != (undefined4 *)(param_1 + 0x3c)) {
              if (*(char *)(param_1 + 0x4c) != '\0') {
                *(undefined1 *)(param_1 + 0x4c) = 0;
              }
              uVar4 = puVar13[1];
              uVar5 = puVar13[2];
              uVar6 = puVar13[3];
              *(undefined4 *)(param_1 + 0x3c) = *puVar13;
              *(undefined4 *)(param_1 + 0x40) = uVar4;
              *(undefined4 *)(param_1 + 0x44) = uVar5;
              *(undefined4 *)(param_1 + 0x48) = uVar6;
              *(undefined1 *)(param_1 + 0x4c) = 1;
            }
          }
          if (*(char *)((longlong)plVar15 + 0x21) == '\0') {
            puVar14 = (undefined4 *)FLinearColor::FLinearColor(local_68,(longlong)plVar15 + 0x14);
            puVar13 = (undefined4 *)(param_1 + 0x78);
            goto LAB_140e49ff1;
          }
        }
        else if (lVar10 == *(longlong *)(lVar3 + 0x5d8)) {
          if (cVar8 == '\0') {
            puVar13 = (undefined4 *)FLinearColor::FLinearColor(local_58,plVar15 + 1);
            if (puVar13 != (undefined4 *)(param_1 + 0x50)) {
              if (*(char *)(param_1 + 0x60) != '\0') {
                *(undefined1 *)(param_1 + 0x60) = 0;
              }
              uVar4 = puVar13[1];
              uVar5 = puVar13[2];
              uVar6 = puVar13[3];
              *(undefined4 *)(param_1 + 0x50) = *puVar13;
              *(undefined4 *)(param_1 + 0x54) = uVar4;
              *(undefined4 *)(param_1 + 0x58) = uVar5;
              *(undefined4 *)(param_1 + 0x5c) = uVar6;
              *(undefined1 *)(param_1 + 0x60) = 1;
            }
          }
          if (*(char *)((longlong)plVar15 + 0x21) == '\0') {
            puVar14 = (undefined4 *)FLinearColor::FLinearColor(&local_48,(longlong)plVar15 + 0x14);
            puVar13 = (undefined4 *)(param_1 + 0x8c);
            goto LAB_140e49ff1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e4a040 FUN_140e4a040 body=733 status=ok
// SIG undefined FUN_140e4a040(void)

void FUN_140e4a040(longlong param_1,longlong *param_2)

{
  void **ppvVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  longlong lVar10;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c0;
  undefined1 local_ac;
  undefined1 local_98;
  undefined1 local_84;
  undefined1 local_70;
  undefined1 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  pvVar9 = (void *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_ac = 0;
  local_98 = 0;
  local_84 = 0;
  local_70 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  FUN_140e41060(0,&local_f8);
  if (lStack_40 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  lVar5 = *param_2;
  if (lVar5 == 0) {
    return;
  }
  pvVar4 = *(void **)(lVar5 + 0x98);
  local_100 = *(int *)(lVar5 + 0xa0);
  lVar10 = (longlong)local_100;
  local_108 = (void *)0x0;
  uVar8 = 0;
  pvVar6 = pvVar9;
  uVar7 = uVar8;
  if (local_100 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
    pvVar6 = local_108;
    _guard_xfg_dispatch_icall_nop(local_108,pvVar4,lVar10 * 2);
    uVar7 = local_fc;
  }
  iVar3 = local_100;
  ppvVar1 = (void **)(param_1 + 0xa0);
  if (ppvVar1 == &local_108) {
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar6;
    *(int *)(param_1 + 0xa8) = iVar3;
    *(undefined4 *)(param_1 + 0xac) = uVar7;
  }
  local_100 = *(int *)(lVar5 + 0x100);
  lVar10 = (longlong)local_100;
  pvVar4 = *(void **)(lVar5 + 0xf8);
  local_108 = (void *)0x0;
  pvVar6 = pvVar9;
  if (local_100 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
    pvVar6 = local_108;
    _guard_xfg_dispatch_icall_nop(local_108,pvVar4,lVar10 * 2);
    uVar8 = local_fc;
  }
  iVar3 = local_100;
  ppvVar1 = (void **)(param_1 + 0xb8);
  if (ppvVar1 == &local_108) {
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar6;
    *(int *)(param_1 + 0xc0) = iVar3;
    *(undefined4 *)(param_1 + 0xc4) = uVar8;
  }
  pvVar4 = (void *)FUN_142d19be0(*(undefined4 *)(lVar5 + 0x118));
  if (pvVar4 == (void *)0x0) {
LAB_140e4a268:
    pvVar4 = pvVar9;
  }
  else {
    lVar10 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e4a268;
  }
  *(void **)(param_1 + 8) = pvVar4;
  pvVar4 = (void *)FUN_142d19be0(*(undefined4 *)(lVar5 + 0x11c));
  if (pvVar4 == (void *)0x0) {
LAB_140e4a2b4:
    pvVar4 = pvVar9;
  }
  else {
    lVar10 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e4a2b4;
  }
  *(void **)(param_1 + 0x10) = pvVar4;
  pvVar4 = (void *)FUN_142d19be0(*(undefined4 *)(lVar5 + 0x120));
  if (pvVar4 != (void *)0x0) {
    lVar5 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e4a30b;
  }
  pvVar4 = pvVar9;
LAB_140e4a30b:
  *(void **)(param_1 + 0x18) = pvVar4;
  return;
}



// FUNCTION 140e4a320 FUN_140e4a320 body=818 status=ok
// SIG undefined FUN_140e4a320(void)

void FUN_140e4a320(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a0;
  undefined1 local_8c;
  undefined1 local_78;
  undefined1 local_64;
  undefined1 local_50;
  undefined1 local_3c;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  lVar5 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_8c = 0;
  local_78 = 0;
  local_64 = 0;
  local_50 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  FUN_140e41060(0,&local_d8);
  if (lStack_20 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  FString::operator=(param_1 + 0xa0,param_2 + 8);
  lVar3 = FUN_142d19be0(*(undefined4 *)(param_2 + 0x18));
  if (lVar3 == 0) {
LAB_140e4a408:
    lVar3 = lVar5;
  }
  else {
    lVar4 = FUN_1414eba50();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e4a408;
  }
  *(longlong *)(param_1 + 0xb0) = lVar3;
  FString::operator=(param_1 + 0xb8,param_2 + 0x20);
  lVar3 = FUN_142d19be0(*(undefined4 *)(param_2 + 0x30));
  if (lVar3 == 0) {
LAB_140e4a464:
    lVar3 = lVar5;
  }
  else {
    lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e4a464;
  }
  *(longlong *)(param_1 + 8) = lVar3;
  lVar3 = FUN_142d19be0(*(undefined4 *)(param_2 + 0x34));
  if (lVar3 == 0) {
LAB_140e4a4ad:
    lVar3 = lVar5;
  }
  else {
    lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e4a4ad;
  }
  *(longlong *)(param_1 + 0x10) = lVar3;
  lVar3 = FUN_142d19be0(*(undefined4 *)(param_2 + 0x38));
  if (lVar3 == 0) {
LAB_140e4a4f6:
    lVar3 = lVar5;
  }
  else {
    lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e4a4f6;
  }
  *(longlong *)(param_1 + 0x18) = lVar3;
  lVar3 = FUN_142d19be0(*(undefined4 *)(param_2 + 0x3c));
  if (lVar3 != 0) {
    lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e4a542;
  }
  lVar3 = lVar5;
LAB_140e4a542:
  *(longlong *)(param_1 + 0x20) = lVar3;
  if (*(char *)(param_2 + 0x40) != '\0') {
    if ((undefined8 *)(param_2 + 0x44) != (undefined8 *)(param_1 + 0x28)) {
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x4c);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x44);
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  if (*(char *)(param_2 + 0x41) != '\0') {
    if ((undefined8 *)(param_2 + 0x54) != (undefined8 *)(param_1 + 0x3c)) {
      if (*(char *)(param_1 + 0x4c) != '\0') {
        *(undefined1 *)(param_1 + 0x4c) = 0;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x5c);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x54);
      *(undefined8 *)(param_1 + 0x44) = uVar1;
      *(undefined1 *)(param_1 + 0x4c) = 1;
    }
  }
  if (*(char *)(param_2 + 0x42) != '\0') {
    if ((undefined8 *)(param_2 + 100) != (undefined8 *)(param_1 + 0x50)) {
      if (*(char *)(param_1 + 0x60) != '\0') {
        *(undefined1 *)(param_1 + 0x60) = 0;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x6c);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 100);
      *(undefined8 *)(param_1 + 0x58) = uVar1;
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
  }
  if (*(char *)(param_2 + 0x74) != '\0') {
    if ((undefined8 *)(param_2 + 0x78) != (undefined8 *)(param_1 + 100)) {
      if (*(char *)(param_1 + 0x74) != '\0') {
        *(undefined1 *)(param_1 + 0x74) = 0;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 0x78);
      *(undefined8 *)(param_1 + 0x6c) = uVar1;
      *(undefined1 *)(param_1 + 0x74) = 1;
    }
  }
  if (*(char *)(param_2 + 0x75) != '\0') {
    if ((undefined8 *)(param_2 + 0x88) != (undefined8 *)(param_1 + 0x78)) {
      if (*(char *)(param_1 + 0x88) != '\0') {
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      uVar1 = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(param_1 + 0x80) = uVar1;
      *(undefined1 *)(param_1 + 0x88) = 1;
    }
  }
  if (*(char *)(param_2 + 0x76) != '\0') {
    if ((undefined8 *)(param_2 + 0x98) != (undefined8 *)(param_1 + 0x8c)) {
      if (*(char *)(param_1 + 0x9c) != '\0') {
        *(undefined1 *)(param_1 + 0x9c) = 0;
      }
      uVar1 = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)(param_1 + 0x94) = uVar1;
      *(undefined1 *)(param_1 + 0x9c) = 1;
    }
  }
  return;
}



// FUNCTION 140e4a660 FUN_140e4a660 body=193 status=ok
// SIG undefined FUN_140e4a660(void)

void FUN_140e4a660(undefined4 *param_1,longlong param_2)

{
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a0;
  undefined1 local_8c;
  undefined1 local_78;
  undefined1 local_64;
  undefined1 local_50;
  undefined1 local_3c;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_8c = 0;
  local_78 = 0;
  local_64 = 0;
  local_50 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 0;
  FUN_140e41060(0,&local_d8);
  if (lStack_20 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (param_2 != 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x28);
    param_1[1] = *(undefined4 *)(param_2 + 0xa0);
    FUN_140e49ba0(param_1,param_2);
    FUN_140e4a940(param_1,param_2);
  }
  return;
}



// FUNCTION 140e4a730 FUN_140e4a730 body=519 status=ok
// SIG undefined FUN_140e4a730(void)

ulonglong FUN_140e4a730(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong in_RAX;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  
  if ((((*(longlong *)(param_1 + 0x160) != 0) && (*(longlong *)(param_1 + 0x158) != 0)) &&
      (in_RAX = *(ulonglong *)(param_1 + 0x138), in_RAX != 0)) &&
     (*(longlong *)(in_RAX + 0x30) != 0)) {
    _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
    plVar1 = (longlong *)(param_2 + 8);
    *param_2 = local_88[0];
    *(undefined8 *)(param_2 + 2) = local_80;
    *(undefined8 *)(param_2 + 4) = local_78;
    *(undefined8 *)(param_2 + 6) = local_70;
    if (plVar1 != &local_68) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_68;
      param_2[10] = local_60;
      param_2[0xb] = local_5c;
    }
    plVar1 = (longlong *)(param_2 + 0xc);
    if (plVar1 != &local_58) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_58;
      param_2[0xe] = local_50;
      param_2[0xf] = local_4c;
    }
    plVar1 = (longlong *)(param_2 + 0x10);
    if (plVar1 != &local_48) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_48;
      param_2[0x12] = local_40;
      param_2[0x13] = local_3c;
    }
    plVar1 = (longlong *)(param_2 + 0x14);
    if (plVar1 != &local_38) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_38;
      param_2[0x16] = local_30;
      param_2[0x17] = local_2c;
    }
    *(undefined1 *)(param_2 + 0x18) = local_28;
    *(undefined1 *)((longlong)param_2 + 0x61) = local_27;
    if (local_38 != 0) {
      FMemory::Free(local_38);
    }
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    if (local_58 != 0) {
      FMemory::Free(local_58);
    }
    if (local_68 != 0) {
      FMemory::Free(local_68);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x158);
    lVar2 = *(longlong *)(param_1 + 0x138);
    *(undefined8 *)(param_2 + 6) = *(undefined8 *)(lVar2 + 0x30);
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140e4a940 FUN_140e4a940 body=883 status=ok
// SIG undefined FUN_140e4a940(void)

void FUN_140e4a940(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  int iVar14;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong local_50;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = DAT_146b33f38;
  lVar11 = DAT_146b33f38 + 0xa0;
  lVar4 = FWeakObjectPtr::Get(lVar11);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar5 + 0xa8)) {
      return;
    }
    if (*(longlong *)(lVar5 + 0xb0) == 0) {
      return;
    }
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar11,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar5 + 0xa8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar11);
    if (lVar4 == 0) {
      return;
    }
  }
  lVar5 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_88 = (longlong *)0x0;
    local_80 = 1;
    lVar5 = ULevel::GetWorld(lVar4);
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,0);
    plVar13 = local_88;
    *local_88 = lVar5;
    lVar5 = FDuplicateDataWriter::GetSerializeContext(lVar4);
    lVar11 = (longlong)(int)local_80;
    iVar10 = (int)local_80 + 1;
    if (local_80._4_4_ < iVar10) {
      uVar9 = local_80 & 0xffffffff;
      local_80._0_4_ = iVar10;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,uVar9);
      plVar13 = local_88;
      iVar10 = (int)local_80;
    }
    local_80._0_4_ = iVar10;
    iVar14 = local_80._4_4_;
    iVar10 = (int)local_80;
    plVar13[lVar11] = lVar5;
    lVar5 = UMovieSceneSection::GetChannelProxy(lVar4);
    local_80._0_4_ = iVar10 + 1;
    if (iVar14 < (int)local_80) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,iVar10);
      plVar13 = local_88;
      iVar14 = local_80._4_4_;
    }
    iVar2 = (int)local_80;
    plVar13[iVar10] = lVar5;
    lVar5 = FUN_140585ca0(lVar4);
    local_80 = CONCAT44(local_80._4_4_,iVar2 + 1);
    if (iVar14 < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,iVar2);
      plVar13 = local_88;
    }
    plVar13[iVar2] = lVar5;
    piVar12 = *(int **)(param_2 + 0xd8);
    piVar6 = piVar12 + (longlong)*(int *)(param_2 + 0xe0) * 0x16;
    for (; piVar12 != piVar6; piVar12 = piVar12 + 0x16) {
      lVar5 = FUN_140d3bae0();
      if (lVar5 != 0) {
        iVar10 = *piVar12;
        if ((iVar10 < 0) || (*(int *)(param_2 + 0xd0) <= iVar10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_142fde6b0(local_58,*(longlong *)(param_2 + 200) + (longlong)iVar10 * 0xb0,1);
          FUN_140abaf50(local_58,0);
          cVar3 = FUN_1430036a0(local_58);
          if (cVar3 != '\0') {
            FUN_142ff1ff0(local_58);
            lVar11 = FUN_1412bf1c0(lVar4);
            if (lVar5 == lVar11) {
              if (*(int *)(param_1 + 0xc0) < 2) {
                uVar7 = FUN_14301bb40(local_58,local_78);
                FString::operator=(param_1 + 0xb8,uVar7);
                if (local_78[0] != 0) {
                  FMemory::Free();
                }
              }
            }
            else {
              for (plVar8 = plVar13; plVar8 != plVar13 + (int)local_80; plVar8 = plVar8 + 1) {
                if (*plVar8 == lVar5) {
                  if (*(int *)(param_1 + 0xa8) < 2) {
                    uVar7 = FUN_14301bb40(local_58,local_68);
                    FString::operator=(param_1 + 0xa0,uVar7);
                    if (local_68[0] != 0) {
                      FMemory::Free();
                    }
                    uVar7 = FUN_140b2dd20(*(longlong *)(param_2 + 200) + (longlong)iVar10 * 0xb0);
                    cVar3 = FUN_140ab3ac0(uVar7,0);
                    if (cVar3 != '\0') {
                      uVar7 = 0;
                    }
                    *(undefined8 *)(param_1 + 0xb0) = uVar7;
                  }
                  break;
                }
              }
            }
          }
          if (local_50 != 0) {
            FMemory::Free();
          }
        }
      }
    }
    if (plVar13 != (longlong *)0x0) {
      FMemory::Free(plVar13);
    }
  }
  return;
}



// FUNCTION 140e4acc0 FUN_140e4acc0 body=1572 status=ok
// SIG undefined FUN_140e4acc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140e4acc0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             float *param_5,ulonglong *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 extraout_EAX;
  longlong lVar5;
  undefined4 extraout_var;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  longlong *local_230;
  ulonglong local_228;
  float *local_220;
  ulonglong *local_218;
  longlong local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  float local_1f8 [2];
  longlong *local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  char local_1c4 [4];
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  ulonglong local_198;
  undefined4 local_190;
  float local_188;
  float local_184;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [21];
  undefined1 local_143;
  longlong local_110;
  longlong local_f0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  fVar20 = -1.0;
  local_220 = param_5;
  local_218 = param_6;
  local_1d8 = (longlong *)0x0;
  local_1f0 = (longlong *)0x0;
  local_170 = param_4;
  FUN_140e3fc20(local_158,param_1 + 0x518);
  local_210 = 0;
  local_208 = 0;
  lVar5 = *(longlong *)(param_1 + 0x120);
  local_143 = 1;
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  FRotator::Vector(param_1 + 0x50c,&local_188);
  local_230 = &local_210;
  local_238._0_4_ = extraout_EAX;
  local_238._4_4_ = extraout_var;
  FUN_142df1b50(param_1,lVar5,local_158,param_1 + 0x500);
  lVar5 = (longlong)(int)local_208 * 0x90 + local_210;
  plVar6 = local_1f0;
  if (local_210 != lVar5) {
    lVar12 = local_210 + 0x74;
    do {
      plVar6 = (longlong *)FWeakObjectPtr::Get(lVar12 + -8);
      if (plVar6 != (longlong *)0x0) {
        lVar7 = AGExplodingRockProjectile::GetPrivateStaticClass();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((((bVar1) && (cVar4 = (**(code **)(*plVar6 + 0x838))(plVar6), cVar4 != '\0')) &&
            (cVar4 = (**(code **)(*plVar6 + 0x740))(plVar6), cVar4 != '\x02')) &&
           ((lVar7 = FUN_142ffcb50(plVar6), param_6 = local_218, param_5 = local_220, lVar7 == 0 ||
            (lVar8 = FWeakObjectPtr::Get(lVar12), param_6 = local_218, param_5 = local_220,
            lVar7 == lVar8)))) break;
      }
      lVar7 = lVar12 + 0x1c;
      param_6 = local_218;
      param_5 = local_220;
      lVar12 = lVar12 + 0x90;
      plVar6 = local_1f0;
    } while (lVar7 != lVar5);
  }
  local_1f0 = plVar6;
  uVar13 = 0;
  puVar11 = (undefined8 *)*param_2;
  local_1d0 = 0;
  local_1c8 = 0.0;
  local_1c4[0] = '\0';
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  uVar10 = (longlong)*(int *)(param_2 + 1) & 0x1fffffffffffffff;
  if (puVar11 + *(int *)(param_2 + 1) < puVar11) {
    uVar10 = uVar13;
  }
  local_228 = uVar10;
  if (uVar10 != 0) {
    do {
      plVar6 = (longlong *)*puVar11;
      if (((plVar6 != (longlong *)0x0) &&
          (cVar4 = (**(code **)(*plVar6 + 0x838))(plVar6,local_170), uVar10 = local_228,
          cVar4 != '\0')) &&
         (cVar4 = (**(code **)(*plVar6 + 0x740))(plVar6), uVar10 = local_228, cVar4 != '\x02')) {
        lVar5 = plVar6[0x2d];
        if (lVar5 == 0) {
          local_160 = DAT_1468b5d98;
          puVar9 = &local_168;
          local_168 = _DAT_1468b5d90;
        }
        else {
          puVar9 = (undefined8 *)&local_1b0;
          local_1b0 = *(undefined4 *)(lVar5 + 0x220);
          local_1a8 = *(undefined4 *)(lVar5 + 0x228);
          uStack_1ac = *(undefined4 *)(lVar5 + 0x224);
        }
        local_1e8 = *puVar9;
        local_1e0 = *(float *)(puVar9 + 1);
        fVar19 = (float)local_1e8 - *param_5;
        fVar16 = (float)((ulonglong)local_1e8 >> 0x20) - param_5[1];
        fVar18 = fVar19 * fVar19 + fVar16 * fVar16;
        fVar17 = (local_1e0 - param_5[2]) * (local_1e0 - param_5[2]) + fVar18;
        if ((local_1d8 == (longlong *)0x0) || (fVar17 < fVar20)) {
          fVar20 = fVar17;
          local_1d8 = plVar6;
        }
        local_190 = (undefined4)param_6[1];
        local_198 = *param_6 & 0xffffffff00000000;
        FRotator::Vector(&local_198,&local_188);
        if (1e-08 < fVar18) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          fVar14 = auVar15._0_4_;
          fVar14 = fVar14 + fVar14 * (0.5 - fVar18 * 0.5 * fVar14 * fVar14);
          fVar14 = fVar14 + fVar14 * (0.5 - fVar18 * 0.5 * fVar14 * fVar14);
          fVar19 = fVar19 * fVar14;
          fVar16 = fVar14 * fVar16;
        }
        uVar10 = local_228;
        if (1e-08 < (local_188 * fVar19 + local_184 * fVar16) - *(float *)(param_3 + 0x28)) {
          local_230 = (longlong *)&local_200;
          local_238 = local_1f8;
          FUN_140e5aa40(param_1,plVar6,param_3,&local_1fc);
          fVar16 = local_1f8[0];
          uVar3 = local_1fc;
          uVar2 = local_200;
          local_230 = (longlong *)CONCAT44(local_230._4_4_,local_200);
          local_238._0_4_ = local_1fc;
          fVar18 = (float)FUN_140e66d50(&local_1e8,param_5,param_6,local_1f8[0]);
          uVar10 = local_228;
          if (0.0 < fVar18) {
            if (plVar6 == *(longlong **)(param_1 + 0x5b0)) {
              fVar18 = fVar18 + *(float *)(param_3 + 0x24);
            }
            if ((plVar6[0x2d] == 0) || (*(longlong *)(plVar6[0x2d] + 400) == 0)) {
              cVar4 = '\0';
            }
            else {
              cVar4 = '\x01';
              if (local_1f0 == plVar6) {
                fVar18 = fVar18 + *(float *)(param_3 + 0x20);
              }
            }
            lVar5 = 0;
            fVar18 = fVar18 / SQRT(fVar17);
            if (cVar4 != '\0') {
              fVar17 = *(float *)(param_3 + 0x1c);
              if (fVar16 <= *(float *)(param_3 + 0x1c)) {
                fVar17 = fVar16;
              }
              local_230 = (longlong *)CONCAT44(local_230._4_4_,uVar2);
              local_238._0_4_ = uVar3;
              fVar16 = (float)FUN_140e66d50(&local_1e8,local_220,local_218,fVar17);
              if (fVar16 <= 0.0) {
                lVar5 = 1;
              }
            }
            uVar10 = local_228;
            if (*(float *)(local_1c4 + lVar5 * 0x10 + -4) <= fVar18 &&
                fVar18 != *(float *)(local_1c4 + lVar5 * 0x10 + -4)) {
              *(float *)(local_1c4 + lVar5 * 0x10 + -4) = fVar18;
              (&local_1d0)[lVar5 * 2] = plVar6;
              local_1c4[lVar5 * 0x10] = cVar4;
            }
          }
        }
      }
      puVar11 = puVar11 + 1;
      uVar13 = uVar13 + 1;
      param_6 = local_218;
      param_5 = local_220;
    } while (uVar13 != uVar10);
  }
  puVar11 = &local_1d0;
  do {
    plVar6 = (longlong *)*puVar11;
    if ((longlong *)*puVar11 != (longlong *)0x0) break;
    puVar11 = puVar11 + 2;
    plVar6 = local_1f0;
  } while (puVar11 != (undefined8 *)&local_1b0);
  if (local_210 != 0) {
    FMemory::Free();
  }
  if (local_f0 != 0) {
    FMemory::Free();
  }
  if (local_110 != 0) {
    FMemory::Free();
  }
  return plVar6;
}



// FUNCTION 140e4b2f0 FUN_140e4b2f0 body=1005 status=ok
// SIG undefined FUN_140e4b2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e4b2f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  undefined4 *local_140;
  undefined8 *local_138;
  char local_128;
  longlong local_120;
  undefined4 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  float local_dc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar7 = FUN_14233f450();
  if (((iVar7 == 3) && (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0)) &&
     (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x688))(), lVar8 != 0)) {
    lVar9 = *(longlong *)(lVar8 + 0x168);
    if (lVar9 == 0) {
      local_120 = _DAT_1468b5d90;
      local_118 = DAT_1468b5d98;
    }
    else {
      local_120 = *(undefined8 *)(lVar9 + 0x220);
      local_118 = *(undefined4 *)(lVar9 + 0x228);
    }
    local_f0 = local_120;
    local_e8 = local_118;
    cVar6 = FUN_142dee960(param_1);
    local_dc = *(float *)(param_1 + 0x5a4);
    local_128 = cVar6;
    if (cVar6 == '\0') {
      lVar9 = *(longlong *)(lVar8 + 0x168);
      if (lVar9 != 0) {
        lVar10 = FUN_142912e90();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_dc = local_dc + *(float *)(lVar9 + 0x714);
        }
      }
    }
    else {
      local_dc = *(float *)(param_1 + 0x5a8);
    }
    iVar7 = 0;
    local_c8 = 0;
    lVar9 = *(longlong *)(param_1 + 0x120);
    local_a8 = 0;
    local_c0 = 0;
    local_80 = 0;
    local_78 = 0;
    local_60 = 0;
    local_58 = 0;
    local_b8 = 0x10000;
    local_b0 = 0;
    local_110 = 0;
    local_b4 = 0;
    local_a4 = 0x101;
    local_ac = 0;
    local_b2 = 0;
    local_f4 = 0;
    local_f8 = 0x100000;
    local_e0 = 2;
    local_108 = 0;
    local_100 = 0;
    if (lVar9 == 0) {
      lVar9 = FUN_1423407b0(param_1);
    }
    local_138 = &local_c8;
    local_140 = &local_e0;
    local_148 = &local_f8;
    UWorld::OverlapMultiByObjectType(lVar9,&local_108,&local_f0,&DAT_1464aa810);
    plVar14 = (longlong *)(param_1 + 0x5c8);
    plVar2 = (longlong *)*plVar14;
    *plVar14 = 0;
    iVar1 = *(int *)(param_1 + 0x5d0);
    local_110 = CONCAT44(local_110._4_4_,iVar1);
    iVar4 = 0x10;
    if (0xf < iVar1) {
      iVar4 = iVar1;
    }
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    if (0 < iVar4) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14);
    }
    local_120 = local_108 + (longlong)(int)local_100 * 0x18;
    lVar9 = local_108;
    if (local_108 != local_120) {
      do {
        lVar10 = FWeakObjectPtr::Get(lVar9);
        if (lVar10 != 0) {
          lVar11 = AGExplodingRockProjectile::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && ((*(byte *)(lVar10 + 0x5a8) & 0x20) != 0)) {
            if (cVar6 == '\0') {
              bVar3 = *(byte *)(lVar10 + 0x6b9) & 1;
            }
            else {
              bVar3 = *(byte *)(lVar10 + 0x6b9) & 2;
            }
            if (bVar3 != 0) {
              plVar12 = (longlong *)*plVar14;
              plVar13 = plVar12 + *(int *)(param_1 + 0x5d0);
              for (; plVar12 != plVar13; plVar12 = plVar12 + 1) {
                if (*plVar12 == lVar10) goto LAB_140e4b648;
              }
              for (plVar13 = plVar2; plVar13 != plVar2 + (int)local_110; plVar13 = plVar13 + 1) {
                if (*plVar13 == lVar10) goto LAB_140e4b620;
              }
              if ((DAT_14629c550 == 0) || (iVar7 < DAT_14629c550)) {
                cVar6 = FUN_14300bb60(lVar10,lVar8);
                if (cVar6 != '\0') {
                  iVar7 = iVar7 + 1;
                }
LAB_140e4b620:
                iVar1 = *(int *)(param_1 + 0x5d0);
                *(int *)(param_1 + 0x5d0) = iVar1 + 1;
                if (*(int *)(param_1 + 0x5d4) < iVar1 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar14,iVar1);
                }
                *(longlong *)(*plVar14 + (longlong)iVar1 * 8) = lVar10;
                cVar6 = local_128;
              }
            }
          }
        }
LAB_140e4b648:
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != local_120);
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
    if (local_108 != 0) {
      FMemory::Free(local_108);
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e4b6e0 FUN_140e4b6e0 body=353 status=ok
// SIG undefined FUN_140e4b6e0(void)

void FUN_140e4b6e0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_2 != (undefined8 *)0x0) {
    param_2[3] = 0;
    lVar4 = FUN_140e4ba60(param_1,*param_2);
    if ((param_2[1] != 0) && (lVar4 != 0)) {
      lVar5 = FUN_140e822b0(param_1);
      local_res10[0] = FUN_142dcfc60(*(undefined8 *)(lVar5 + 0x40));
      FUN_1411f1980(local_28,param_2[1],1,local_res10,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if ((*(longlong *)(param_2[1] + 0x458) != 0) &&
         (FUN_142c7bc00(*(longlong *)(param_2[1] + 0x458),local_18,*(undefined8 *)(lVar4 + 0x58),2),
         local_10 != (longlong *)0x0)) {
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
      lVar4 = param_2[1];
      if (*(longlong *)(lVar4 + 0x468) != 0) {
        FUN_1423be6d0(*(longlong *)(lVar4 + 0x468),0,0);
        (**(code **)(**(longlong **)(param_2[1] + 0x468) + 0x960))
                  (*(longlong **)(param_2[1] + 0x468),0);
        lVar4 = param_2[1];
      }
      FUN_140e91300(lVar4,0,DAT_146870850);
    }
  }
  return;
}



// FUNCTION 140e4b850 FUN_140e4b850 body=255 status=ok
// SIG undefined FUN_140e4b850(void)

void FUN_140e4b850(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = FWeakObjectPtr::Get(param_2);
  if (lVar3 != 0) {
    plVar6 = (longlong *)(param_1 + 0x2c0);
    if (*plVar6 != 0) {
      plVar4 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
      plVar1 = (longlong *)*plVar6;
      for (plVar2 = plVar1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
        if (plVar2 == plVar4) {
          if (plVar1 != (longlong *)0x0) {
            lVar5 = plVar1[0x1f];
            if (lVar5 == 0) {
              (**(code **)(*plVar1 + 0x368))(plVar1);
              lVar5 = plVar1[0x1f];
            }
            if (lVar5 == lVar3) goto LAB_140e4b92f;
          }
          break;
        }
      }
    }
    plVar6 = (longlong *)(param_1 + 0x2e0);
    if (*plVar6 != 0) {
      plVar4 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
      plVar1 = (longlong *)*plVar6;
      for (plVar2 = plVar1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
        if (plVar2 == plVar4) {
          if (plVar1 != (longlong *)0x0) {
            lVar5 = plVar1[0x1f];
            if (lVar5 == 0) {
              (**(code **)(*plVar1 + 0x368))(plVar1);
              lVar5 = plVar1[0x1f];
            }
            if (lVar5 == lVar3) goto LAB_140e4b92f;
          }
          break;
        }
      }
    }
    plVar6 = (longlong *)0x0;
LAB_140e4b92f:
    FUN_140e4b6e0(param_1,plVar6);
  }
  return;
}



// FUNCTION 140e4b950 FUN_140e4b950 body=230 status=ok
// SIG undefined FUN_140e4b950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e4b950(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48 [4];
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
    uVar2 = 0;
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_140e3e400(param_1,local_48,0);
    puVar3 = local_48;
    if (local_28 != (undefined8 *)0x0) {
      puVar3 = local_28;
    }
    uVar4 = (longlong)(int)local_20 & 0x1fffffffffffffff;
    if (puVar3 + (int)local_20 < puVar3) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      do {
        plVar1 = (longlong *)*puVar3;
        FUN_1423be6d0(plVar1,0,0);
        (**(code **)(*plVar1 + 0x960))(plVar1,0);
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != uVar4);
    }
    if (local_28 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e4ba40 FUN_140e4ba40 body=31 status=ok
// SIG undefined FUN_140e4ba40(void)

void FUN_140e4ba40(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c12480();
  if (lVar1 != 0) {
    FUN_14048b700(lVar1);
    return;
  }
  return;
}



// FUNCTION 140e4ba60 FUN_140e4ba60 body=339 status=ok
// SIG undefined FUN_140e4ba60(void)

longlong FUN_140e4ba60(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 600);
  lVar5 = (longlong)*(int *)(param_1 + 0x260) * 0x80 + lVar6;
  if (lVar6 != lVar5) {
    lVar8 = 0;
    do {
      lVar2 = FWeakObjectPtr::Get(lVar6);
      lVar7 = lVar8;
      if (lVar2 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar6 + 8)) && (*(longlong *)(lVar6 + 0x10) != 0)) {
          lVar2 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar6,lVar2);
          if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar6 + 8) = DAT_1464b56f4;
          }
          lVar2 = FWeakObjectPtr::Get(lVar6);
          if (lVar2 != 0) goto LAB_140e4bb0c;
        }
      }
      else {
LAB_140e4bb0c:
        lVar3 = FUN_14171bfe0();
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
          lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
          lVar3 = lVar2;
          do {
            lVar7 = lVar2;
            if (lVar3 == lVar4) break;
            lVar3 = *(longlong *)(lVar3 + 0x30);
            lVar7 = lVar8;
          } while (lVar3 != 0);
        }
      }
      lVar2 = lVar8;
      if (param_2 != 0) {
        lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
        lVar3 = param_2;
        do {
          lVar2 = param_2;
          if (lVar3 == lVar4) break;
          lVar3 = *(longlong *)(lVar3 + 0x30);
          lVar2 = lVar8;
        } while (lVar3 != 0);
      }
      if (lVar7 == lVar2) {
        return lVar6;
      }
      lVar6 = lVar6 + 0x80;
    } while (lVar6 != lVar5);
  }
  return 0;
}



// FUNCTION 140e4bbc0 FUN_140e4bbc0 body=552 status=ok
// SIG undefined FUN_140e4bbc0(void)

void FUN_140e4bbc0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  lVar8 = *(longlong *)(param_1 + 0x118);
  lVar10 = 0;
  if (lVar8 != 0) {
    lVar6 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar10 = *(longlong *)(lVar8 + 0x2c70);
    }
  }
  if (lVar10 != 0) {
    local_28 = 0;
    local_20 = 0;
    local_18 = -1;
    uVar7 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    FUN_1417a5560(uVar7,&local_28,1,0x10,0);
    uVar9 = local_20 & 0xffffffff;
    do {
      local_18 = local_18 + 1;
      lVar8 = local_28;
      if ((int)local_20 <= local_18) break;
    } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
LAB_140e4bc98:
    if ((local_18 < 0) || ((int)uVar9 <= local_18)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar2 = *(longlong **)(lVar8 + (longlong)local_18 * 8);
      if (plVar2 != (longlong *)0x0) {
        lVar8 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && ((plVar2[0x26] == 0 || (plVar2[0x26] == *(longlong *)(lVar10 + 0xa58))))) {
          cVar4 = FUN_140d01880(lVar10,plVar2);
          cVar5 = (**(code **)(*plVar2 + 0x2a8))(plVar2,lVar10);
          if ((cVar4 == '\0') || (cVar5 != '\0')) {
            iVar1 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
            }
            lVar8 = *param_3;
          }
          else {
            iVar1 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
            }
            lVar8 = *param_2;
          }
          *(longlong **)(lVar8 + (longlong)iVar1 * 8) = plVar2;
        }
        uVar9 = local_20 & 0xffffffff;
        lVar8 = local_28;
      }
      do {
        local_18 = local_18 + 1;
        if ((int)uVar9 <= local_18) break;
      } while (*(longlong *)(lVar8 + (longlong)local_18 * 8) == 0);
      goto LAB_140e4bc98;
    }
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return;
}



// FUNCTION 140e4bdf0 FUN_140e4bdf0 body=122 status=ok
// SIG undefined FUN_140e4bdf0(void)

undefined8 * FUN_140e4bdf0(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_140e53a00(param_1 + -0x528,param_4);
  if ((((cVar3 != '\0') && (-1 < param_3)) && (param_3 < *(int *)(param_1 + 0x38))) &&
     (lVar1 = *(longlong *)((longlong)param_3 * 0x78 + *(longlong *)(param_1 + 0x30)), lVar1 != 0))
  {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *param_2 = *(undefined8 *)(lVar1 + 0x30);
    param_2[1] = uVar2;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 140e4be70 FUN_140e4be70 body=110 status=ok
// SIG undefined FUN_140e4be70(void)

undefined8 FUN_140e4be70(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x38))) {
    cVar1 = FUN_142d52a00(*(longlong *)(param_1 + 0x30) + 0x60 + (longlong)param_2 * 0x78);
    if (cVar1 != '\0') {
      uVar2 = FUN_142d52a20(*(longlong *)(param_1 + 0x30) + 0x60 + (longlong)param_2 * 0x78);
      uVar2 = FArchive::operator<<(uVar2);
      uVar2 = FUN_142d5fea0(uVar2);
      return uVar2;
    }
  }
  return 0xbf800000;
}



// FUNCTION 140e4bee0 FUN_140e4bee0 body=150 status=ok
// SIG undefined FUN_140e4bee0(void)

longlong FUN_140e4bee0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar5 = 0;
  lVar3 = FUN_140e4bf80();
  lVar7 = *(longlong *)(param_1 + 0x2a0);
  lVar1 = lVar7 + (longlong)*(int *)(param_1 + 0x2a8) * 0x28;
  for (; lVar7 != lVar1; lVar7 = lVar7 + 0x28) {
    lVar2 = *(longlong *)(lVar7 + 0x10);
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x108) == '\0')) && (*(char *)(lVar2 + 0x109) == '\0'))
    {
      plVar4 = *(longlong **)(lVar2 + 0xf8);
      plVar6 = plVar4 + (longlong)*(int *)(lVar2 + 0x100) * 8;
      for (; plVar4 != plVar6; plVar4 = plVar4 + 8) {
        if ((*plVar4 != 0) && (*plVar4 == lVar3)) {
          lVar5 = lVar2;
        }
      }
    }
  }
  return lVar5;
}



// FUNCTION 140e4bf80 FUN_140e4bf80 body=461 status=ok
// SIG undefined FUN_140e4bf80(void)

longlong FUN_140e4bf80(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = lVar4 + 0xec8;
  lVar2 = FWeakObjectPtr::Get(lVar5);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 0xed0)) {
      return 0;
    }
    if (*(longlong *)(lVar4 + 0xed8) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0xed0) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar5);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = UClothingSimulationInteractorNv::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  lVar2 = FWeakObjectPtr::Get(lVar5);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 0xed0)) {
      return 0;
    }
    if (*(longlong *)(lVar4 + 0xed8) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0xed0) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar5);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar4 = UClothingSimulationInteractorNv::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 140e4c150 FUN_140e4c150 body=30 status=ok
// SIG undefined FUN_140e4c150(void)

undefined8 FUN_140e4c150(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1a0))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x198) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 140e4c170 FUN_140e4c170 body=105 status=ok
// SIG undefined FUN_140e4c170(void)

undefined8 * FUN_140e4c170(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FName::ToString(*(longlong *)(param_1 + 0x48) + 0x88);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_2,7,"NoIcon",7,0x3f);
  return param_2;
}



// FUNCTION 140e4c1e0 FUN_140e4c1e0 body=710 status=ok
// SIG undefined FUN_140e4c1e0(void)

void FUN_140e4c1e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
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
  
  FUN_140e4c4b0(*(undefined8 *)(param_1 + 0x168));
  uStack_94 = 1;
  plVar1 = (longlong *)(param_1 + 0x2b0);
  local_98 = 0;
  uVar4 = *(uint *)(param_1 + 0x2d8);
  puVar3 = (uint *)(param_1 + 0x2c0);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar4 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar5 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar11 = local_98 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar11;
      if (bVar6) goto LAB_140e4c2cb;
      uVar5 = puVar13[lVar10 + 1];
    }
    uStack_94 = uVar5 - 1 & uVar5 ^ uVar5;
    iVar11 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (iStack_80 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_140e4c2cb:
      uStack_84 = uVar4;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x2d8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar5 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar3;
  local_50 = plVar1;
  puStack_40 = puVar3;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar5;
  if (uVar5 != uVar4) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar9 = puVar13[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
    iVar11 = (int)uVar5 >> 5;
    while (uVar9 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_140e4c3a5;
      uVar9 = puVar13[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
    iVar11 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_84 = (uVar12 - iVar11) + 0x1f;
    if ((int)uVar4 < (int)uStack_84) {
LAB_140e4c3a5:
      uStack_84 = uVar4;
    }
  }
  do {
    if ((uStack_5c == uStack_84) && (local_68 == puVar3)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      return;
    }
    lVar10 = *(longlong *)(*plVar1 + (longlong)(int)uStack_5c * 0x10);
    if (lVar10 != 0) {
      lVar7 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && ((*(byte *)(lVar10 + 0xb8) & 1) != 0)) &&
         ((*(longlong *)(lVar10 + 400) == 0 ||
          (*(longlong *)(*(longlong *)(lVar10 + 400) + 0x118) != param_1)))) {
        plVar8 = (longlong *)*param_2;
        plVar2 = plVar8 + (int)param_2[1];
        for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar10) goto LAB_140e4c46f;
        }
        FUN_140e4c4b0(lVar10,param_2);
      }
    }
LAB_140e4c46f:
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 140e4c4b0 FUN_140e4c4b0 body=226 status=ok
// SIG undefined FUN_140e4c4b0(void)

void FUN_140e4c4b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_1 != 0) {
    lVar3 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((*(byte *)(param_1 + 0x6b8) & 1) == 0)) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x1a0);
  uVar5 = 0;
  uVar6 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x1a8) < plVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar4 != 0) {
        FUN_140e4c4b0(*plVar4,param_2);
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 140e4c5a0 FUN_140e4c5a0 body=584 status=ok
// SIG undefined FUN_140e4c5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140e4c5a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  float fVar10;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  float local_60;
  longlong local_58;
  int local_50;
  
  uVar9 = 0;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  uVar6 = uVar9;
  if ((lVar7 != 0) && (uVar6 = 0, param_2 != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
      fVar10 = 5000.0;
    }
    else {
      fVar10 = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0xc1c);
    }
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar1 + 0x220);
      local_60 = *(float *)(lVar1 + 0x228);
    }
    fVar4 = local_60;
    uVar3 = local_68;
    UWorld::GetPlayerControllerIterator(lVar7,&local_58);
    fStack_74 = (float)((ulonglong)uVar3 >> 0x20);
    local_78 = (float)uVar3;
    while( true ) {
      if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar6 = uVar9;
      if (!bVar2) break;
      plVar8 = (longlong *)FWeakObjectPtr::Get();
      if (plVar8 != (longlong *)0x0) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((((bVar2) && (plVar8[0xa5] != 0)) &&
            (cVar5 = (**(code **)(*plVar8 + 0x768))(), cVar5 != '\0')) &&
           ((cVar5 = FUN_140d1b480(), cVar5 != '\0' &&
            (cVar5 = FUN_140d14f20(plVar8,param_2), cVar5 == '\0')))) {
          FUN_1426e1ca0(plVar8[0xa5],&local_68);
          if ((local_68._4_4_ - fStack_74) * (local_68._4_4_ - fStack_74) +
              ((float)local_68 - local_78) * ((float)local_68 - local_78) +
              (local_60 - fVar4) * (local_60 - fVar4) < fVar10 * fVar10) {
            uVar6 = FUN_140cfd7e0();
            uVar9 = uVar9 | uVar6;
          }
        }
      }
      local_50 = local_50 + 1;
    }
  }
  return uVar6;
}



// FUNCTION 140e4c7f0 FUN_140e4c7f0 body=31 status=ok
// SIG undefined FUN_140e4c7f0(void)

undefined8 FUN_140e4c7f0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140e4c8c0();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x6a8);
  }
  return 0;
}



// FUNCTION 140e4c810 FUN_140e4c810 body=8 status=ok
// SIG undefined FUN_140e4c810(void)

longlong FUN_140e4c810(longlong param_1)

{
  return param_1 + 400;
}



// FUNCTION 140e4c820 FUN_140e4c820 body=152 status=ok
// SIG undefined FUN_140e4c820(void)

longlong FUN_140e4c820(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (0 < *(int *)(param_1 + 0x208)) {
    return param_1 + 0x200;
  }
  srand(*(uint *)(param_1 + 0x1e8));
  plVar1 = *(longlong **)(param_1 + 0x1f0);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (*plVar1 != 0) {
      FUN_140e24b30(*plVar1,*(undefined8 *)(param_1 + 0x118),param_1,2,param_1 + 0x200);
    }
  }
  return param_1 + 0x200;
}



// FUNCTION 140e4c8c0 FUN_140e4c8c0 body=101 status=ok
// SIG undefined FUN_140e4c8c0(void)

longlong FUN_140e4c8c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x1850), lVar1 != 0)) {
    lVar3 = UFocusButtonWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140e4c930 FUN_140e4c930 body=109 status=ok
// SIG undefined FUN_140e4c930(void)

longlong FUN_140e4c930(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140e4c8c0();
  if (lVar2 != 0) {
    lVar2 = FUN_140ad6100(lVar2,*(undefined8 *)(param_1 + 0x1a8));
    if (lVar2 != 0) {
      lVar3 = FUN_1414e47c0();
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
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140e4c9a0 FUN_140e4c9a0 body=90 status=ok
// SIG undefined FUN_140e4c9a0(void)

longlong FUN_140e4c9a0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140e4ca00 FUN_140e4ca00 body=16 status=ok
// SIG undefined FUN_140e4ca00(void)

undefined8 * FUN_140e4ca00(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x1c8);
  return param_2;
}



// FUNCTION 140e4ca10 FUN_140e4ca10 body=211 status=ok
// SIG undefined FUN_140e4ca10(void)

longlong FUN_140e4ca10(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x22e0;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x22e8)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x22f0) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar3,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x22e8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 140e4caf0 FUN_140e4caf0 body=202 status=ok
// SIG undefined FUN_140e4caf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_140e4caf0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1560];
  longlong local_70;
  longlong local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  lVar2 = (**(code **)(*param_1 + 0x720))(param_1,local_688);
  fVar3 = *(float *)(lVar2 + 0x1c);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  cVar1 = FUN_142fd3580(param_1);
  if (((cVar1 != '\0') && (lVar2 = UUGMenuManager::GetFadeHUD(param_1[0x594]), lVar2 != 0)) &&
     (0.0 < *(float *)(lVar2 + 0xac))) {
    fVar3 = *(float *)(lVar2 + 0xac);
  }
  if (fVar3 <= 0.0) {
    fVar3 = 80.0;
  }
  return fVar3;
}



// FUNCTION 140e4cbc0 FUN_140e4cbc0 body=211 status=ok
// SIG undefined FUN_140e4cbc0(void)

longlong FUN_140e4cbc0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x22b8;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x22c0)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x22c8) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar3,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x22c0) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 140e4cca0 FUN_140e4cca0 body=42 status=ok
// SIG undefined FUN_140e4cca0(void)

undefined1 FUN_140e4cca0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  if (param_3 != 0) {
    cVar1 = FUN_140e53a00(param_1 + -0x528,param_3);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 3;
}



// FUNCTION 140e4ccd0 FUN_140e4ccd0 body=113 status=ok
// SIG undefined FUN_140e4ccd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e4ccd0(longlong param_1,undefined8 *param_2)

{
  float local_res8;
  float local_resc;
  
  if ((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    local_res8 = *(float *)(param_1 + 0x1e0) - *(float *)(param_1 + 0x18);
    local_resc = *(float *)(param_1 + 0x1e4) - *(float *)(param_1 + 0x1c);
    FUN_140e4fb40(local_res8,local_resc,&local_res8);
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 140e4cd70 FUN_140e4cd70 body=3483 status=ok
// SIG undefined FUN_140e4cd70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e4cd70(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 auVar5 [12];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [12];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar23 [16];
  float fVar31;
  float fVar34;
  undefined1 auVar24 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if ((*(longlong *)(param_1 + 0x250) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      FUN_140e24b00(*(undefined8 *)(param_1 + 0x28));
      return param_2;
    }
    plVar12 = (longlong *)FUN_140e21bd0();
    plVar13 = (longlong *)(**(code **)(*plVar12 + 0x900))(plVar12,0,0);
    plVar12 = (longlong *)0x0;
    if (plVar13 == (longlong *)0x0) {
LAB_140e4ce31:
      plVar13 = plVar12;
    }
    else {
      lVar14 = FUN_142a07000();
      if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
          lVar14 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140e4ce31;
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x250) + 0x2c70);
    if (lVar14 != 0) {
      plVar12 = *(longlong **)(lVar14 + 0x528);
    }
    if ((plVar13 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) {
      pauVar15 = (undefined1 (*) [12])FUN_1426e1ca0(plVar12,local_158);
      uVar16 = FUN_1426e1d20(plVar12,&local_148);
      FRotator::Quaternion(uVar16,local_128);
      fVar34 = DAT_1464aa790;
      fVar31 = DAT_1464aa788._4_4_;
      fVar36 = (float)DAT_1464aa788;
      fVar54 = *(float *)(*pauVar15 + 8);
      fVar25 = *(float *)(*pauVar15 + 4);
      fVar28 = *(float *)*pauVar15;
      lVar14 = *(longlong *)(param_1 + 0x28);
      uVar7 = local_128._0_4_;
      uVar8 = local_128._4_4_;
      fVar35 = fStack_120;
      fVar39 = fStack_11c;
      fStack_11c = 0.0;
      _local_128 = *pauVar15;
      FRotator::Quaternion(lVar14 + 0x9d4,local_168);
      fVar29 = DAT_1464aa790;
      fVar30 = DAT_1464aa788._4_4_;
      fVar26 = (float)DAT_1464aa788;
      pauVar15 = (undefined1 (*) [12])(lVar14 + 0x9c8);
      auVar5 = *pauVar15;
      uVar11 = local_168._0_4_;
      uVar6 = local_168._4_4_;
      fVar33 = fStack_160;
      fVar38 = fStack_15c;
      fStack_15c = 0.0;
      _local_168 = *pauVar15;
      if ((*(longlong *)(param_1 + 0x250) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_138 = *(float *)(param_1 + 0x1e0) - *(float *)(param_1 + 0x18);
        fStack_134 = *(float *)(param_1 + 0x1e4) - *(float *)(param_1 + 0x1c);
        FUN_140e4fb40(param_1,&local_148,&local_138);
      }
      else {
        local_148 = _DAT_1468b5d90;
        local_140 = DAT_1468b5d98;
      }
      _local_158 = *(undefined1 (*) [12])(param_1 + 0x1e8);
      uVar9 = FRotator::Quaternion(local_158,&local_138);
      fVar61 = fRam0000000146870428;
      fVar63 = fRam0000000146870424;
      fVar47 = _DAT_146870420;
      fVar62 = fRam000000014687041c;
      fVar32 = fRam0000000146870418;
      fVar27 = fRam0000000146870414;
      fVar22 = _DAT_146870410;
      auVar17._4_4_ = DAT_1464aa788._4_4_;
      auVar17._0_4_ = (float)DAT_1464aa788;
      auVar17._8_4_ = DAT_1464aa790;
      auVar17._12_4_ = 0;
      local_158._4_4_ = DAT_1464aa788._4_4_;
      local_158._0_4_ = (float)DAT_1464aa788;
      fStack_150 = DAT_1464aa790;
      fStack_14c = 0.0;
      auVar18._4_4_ = fVar30;
      auVar18._0_4_ = fVar26;
      auVar18._8_4_ = fVar29;
      auVar18._12_4_ = 0;
      auVar18 = minps(auVar17,auVar18);
      auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146870484);
      auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146870480);
      auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146870488);
      auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam000000014687048c);
      iVar10 = movmskps(uVar9,auVar19);
      if (iVar10 == 0) {
        fVar63 = (float)local_148 * fVar26;
        fVar48 = local_148._4_4_ * fVar30;
        fVar50 = local_140 * fVar29;
        fVar26 = (float)DAT_1464aa788 * fVar26;
        fVar30 = DAT_1464aa788._4_4_ * fVar30;
        fVar29 = DAT_1464aa790 * fVar29;
        fVar47 = 0.0;
        fVar41 = (float)uVar11 * fStack_12c * _DAT_146870460 + fVar38 * local_138 +
                 (float)uVar6 * fStack_130 * _DAT_146870450 + fVar33 * fStack_134 * _DAT_146870440;
        fVar42 = (float)uVar11 * fStack_130 * fRam0000000146870464 + fVar38 * fStack_134 +
                 (float)uVar6 * fStack_12c * fRam0000000146870454 +
                 fVar33 * local_138 * fRam0000000146870444;
        fVar44 = (float)uVar11 * fStack_134 * fRam0000000146870468 + fVar38 * fStack_130 +
                 (float)uVar6 * local_138 * fRam0000000146870458 +
                 fVar33 * fStack_12c * fRam0000000146870448;
        fVar45 = (float)uVar11 * local_138 * fRam000000014687046c + fVar38 * fStack_12c +
                 (float)uVar6 * fStack_134 * fRam000000014687045c +
                 fVar33 * fStack_130 * fRam000000014687044c;
        fVar61 = fVar50 * (float)uVar6 - fVar48 * fVar33;
        fVar37 = fVar63 * fVar33 - fVar50 * (float)uVar11;
        fVar40 = fVar48 * (float)uVar11 - fVar63 * (float)uVar6;
        fVar61 = fVar61 + fVar61;
        fVar37 = fVar37 + fVar37;
        fVar40 = fVar40 + fVar40;
        fVar63 = (fVar40 * (float)uVar6 - fVar37 * fVar33) + fVar61 * fVar38 + fVar63 +
                 (float)local_168._0_4_;
        fVar33 = (fVar61 * fVar33 - fVar40 * (float)uVar11) + fVar37 * fVar38 + fVar48 +
                 (float)local_168._4_4_;
        fVar38 = (fVar37 * (float)uVar11 - fVar61 * (float)uVar6) + fVar40 * fVar38 + fVar50 +
                 fStack_160;
        uVar11 = 0;
      }
      else {
        fVar25 = (float)uVar6 + (float)uVar6;
        fVar28 = fVar33 + fVar33;
        local_158._0_4_ = (float)DAT_1464aa788 * fVar26;
        local_158._4_4_ = DAT_1464aa788._4_4_ * fVar30;
        fStack_150 = DAT_1464aa790 * fVar29;
        fStack_14c = 0.0;
        fVar37 = (float)uVar11 * ((float)uVar11 + (float)uVar11);
        fVar54 = fVar38 * ((float)uVar11 + (float)uVar11);
        fVar55 = (fVar38 * fVar28 + (float)uVar11 * fVar25) * fVar26;
        fVar57 = (fVar54 + (float)uVar6 * fVar28) * fVar30;
        fVar59 = (fVar38 * fVar25 + (float)uVar11 * fVar28) * fVar29;
        fVar40 = fVar30 * ((float)uVar11 * fVar25 - fVar38 * fVar28);
        fVar41 = fVar29 * ((float)uVar6 * fVar28 - fVar54);
        fVar44 = fVar26 * ((float)uVar11 * fVar28 - fVar38 * fVar25);
        fVar54 = (float)((uint)((_DAT_146870420 - (fVar33 * fVar28 + (float)uVar6 * fVar25)) *
                               fVar26) & _DAT_146870430);
        fVar28 = (float)((uint)((fRam0000000146870424 - (fVar33 * fVar28 + fVar37)) * fVar30) &
                        uRam0000000146870434);
        fVar29 = (float)((uint)((fRam0000000146870428 - ((float)uVar6 * fVar25 + fVar37)) * fVar29)
                        & uRam0000000146870438);
        fVar33 = (float)((uint)((fRam000000014687042c - (fVar37 + fVar37)) * 0.0) &
                        uRam000000014687043c);
        fVar26 = fStack_134 + fStack_134;
        fVar30 = fStack_130 + fStack_130;
        fStack_15c = fRam000000014687042c;
        _local_168 = auVar5;
        auVar18 = _local_168;
        fVar38 = local_138 * (local_138 + local_138);
        fVar25 = fStack_12c * (local_138 + local_138);
        fVar48 = (fStack_12c * fVar30 + local_138 * fVar26) * (float)DAT_1464aa788;
        fVar50 = (fVar25 + fStack_134 * fVar30) * DAT_1464aa788._4_4_;
        fVar52 = (fStack_12c * fVar26 + local_138 * fVar30) * DAT_1464aa790;
        fVar37 = DAT_1464aa788._4_4_ * (local_138 * fVar26 - fStack_12c * fVar30);
        fVar42 = DAT_1464aa790 * (fStack_134 * fVar30 - fVar25);
        fVar45 = (float)DAT_1464aa788 * (local_138 * fVar30 - fStack_12c * fVar26);
        fVar25 = (float)((uint)((_DAT_146870420 - (fStack_130 * fVar30 + fStack_134 * fVar26)) *
                               (float)DAT_1464aa788) & _DAT_146870430);
        fVar30 = (float)((uint)((fRam0000000146870424 - (fStack_130 * fVar30 + fVar38)) *
                               DAT_1464aa788._4_4_) & uRam0000000146870434);
        fVar26 = (float)((uint)((fRam0000000146870428 - (fStack_134 * fVar26 + fVar38)) *
                               DAT_1464aa790) & uRam0000000146870438);
        fVar38 = (float)((uint)((fRam000000014687042c - (fVar38 + fVar38)) * 0.0) &
                        uRam000000014687043c);
        local_168._0_4_ = auVar5._0_4_;
        local_168._4_4_ = auVar5._4_4_;
        fStack_160 = auVar5._8_4_;
        local_118 = fVar48 * fVar40 + fVar25 * fVar54 + fVar45 * fVar59 +
                    fVar38 * (float)local_168._0_4_;
        fStack_114 = fVar48 * fVar28 + fVar25 * fVar55 + fVar45 * fVar41 +
                     fVar38 * (float)local_168._4_4_;
        fStack_110 = fVar48 * fVar57 + fVar25 * fVar44 + fVar45 * fVar29 + fVar38 * fStack_160;
        fStack_10c = fVar48 * fVar33 + fVar25 * fVar33 + fVar45 * fVar33 +
                     fVar38 * fRam000000014687042c;
        local_108 = fVar30 * fVar40 + fVar37 * fVar54 + fVar50 * fVar59 +
                    fVar38 * (float)local_168._0_4_;
        fStack_104 = fVar30 * fVar28 + fVar37 * fVar55 + fVar50 * fVar41 +
                     fVar38 * (float)local_168._4_4_;
        fStack_100 = fVar30 * fVar57 + fVar37 * fVar44 + fVar50 * fVar29 + fVar38 * fStack_160;
        fStack_fc = fVar30 * fVar33 + fVar37 * fVar33 + fVar50 * fVar33 +
                    fVar38 * fRam000000014687042c;
        local_f8 = fVar42 * fVar40 + fVar52 * fVar54 + fVar26 * fVar59 +
                   fVar38 * (float)local_168._0_4_;
        fStack_f4 = fVar42 * fVar28 + fVar52 * fVar55 + fVar26 * fVar41 +
                    fVar38 * (float)local_168._4_4_;
        fStack_f0 = fVar42 * fVar57 + fVar52 * fVar44 + fVar26 * fVar29 + fVar38 * fStack_160;
        fStack_ec = fVar42 * fVar33 + fVar52 * fVar33 + fVar26 * fVar33 +
                    fVar38 * fRam000000014687042c;
        local_e8 = local_148._4_4_ * fVar40 + (float)local_148 * fVar54 + local_140 * fVar59 +
                   fRam000000014687042c * (float)local_168._0_4_;
        fStack_e4 = local_148._4_4_ * fVar28 + (float)local_148 * fVar55 + local_140 * fVar41 +
                    fRam000000014687042c * (float)local_168._4_4_;
        fStack_e0 = local_148._4_4_ * fVar57 + (float)local_148 * fVar44 + local_140 * fVar29 +
                    fRam000000014687042c * fStack_160;
        fStack_dc = local_148._4_4_ * fVar33 + (float)local_148 * fVar33 + local_140 * fVar33 +
                    fRam000000014687042c * fRam000000014687042c;
        _local_168 = auVar18;
        FMatrix::RemoveScaling(&local_118);
        fVar54 = (float)(-(uint)(_DAT_146870480 <= (float)local_158._0_4_) &
                         (_DAT_146870470 ^ (uint)fVar47) ^ _DAT_146870470);
        fVar25 = (float)(-(uint)(fRam0000000146870484 <= (float)local_158._4_4_) &
                         (uRam0000000146870474 ^ (uint)fVar63) ^ uRam0000000146870474);
        fVar28 = (float)(-(uint)(fRam0000000146870488 <= fStack_150) &
                         (uRam0000000146870478 ^ (uint)fVar61) ^ uRam0000000146870478);
        local_118 = local_118 * fVar54;
        fStack_114 = fStack_114 * fVar54;
        fStack_110 = fStack_110 * fVar54;
        fStack_100 = fStack_100 * fVar25;
        fStack_104 = fStack_104 * fVar25;
        local_108 = local_108 * fVar25;
        fStack_f0 = fStack_f0 * fVar28;
        local_f8 = local_f8 * fVar28;
        fStack_f4 = fStack_f4 * fVar28;
        uVar11 = FQuat::FQuat(local_168,&local_118);
        local_138 = 1e-08;
        auVar23._0_4_ = (float)local_168._0_4_ * (float)local_168._0_4_ + fStack_160 * fStack_160;
        auVar23._4_4_ = (float)local_168._4_4_ * (float)local_168._4_4_ + fStack_15c * fStack_15c;
        auVar23._8_4_ = fStack_160 * fStack_160 + (float)local_168._0_4_ * (float)local_168._0_4_;
        auVar23._12_4_ = fStack_15c * fStack_15c + (float)local_168._4_4_ * (float)local_168._4_4_;
        fVar30 = auVar23._4_4_ + auVar23._0_4_;
        fVar29 = auVar23._8_4_ + auVar23._4_4_;
        fVar33 = auVar23._12_4_ + auVar23._8_4_;
        fVar38 = auVar23._0_4_ + auVar23._12_4_;
        auVar1._4_4_ = fVar29;
        auVar1._0_4_ = fVar30;
        auVar1._8_4_ = fVar33;
        auVar1._12_4_ = fVar38;
        auVar18 = rsqrtps(auVar23,auVar1);
        fVar54 = auVar18._0_4_;
        fVar25 = auVar18._4_4_;
        fVar28 = auVar18._8_4_;
        fVar26 = auVar18._12_4_;
        fVar54 = (fVar22 - fVar54 * fVar54 * fVar30 * fVar22) * fVar54 + fVar54;
        fVar25 = (fVar27 - fVar25 * fVar25 * fVar29 * fVar27) * fVar25 + fVar25;
        fVar28 = (fVar32 - fVar28 * fVar28 * fVar33 * fVar32) * fVar28 + fVar28;
        fVar26 = (fVar62 - fVar26 * fVar26 * fVar38 * fVar62) * fVar26 + fVar26;
        fVar41 = (float)(((uint)(((fVar22 - fVar54 * fVar54 * fVar30 * fVar22) * fVar54 + fVar54) *
                                (float)local_168._0_4_) ^ _DAT_146870400) & -(uint)(1e-08 <= fVar30)
                        ^ _DAT_146870400);
        fVar42 = (float)(((uint)(((fVar27 - fVar25 * fVar25 * fVar29 * fVar27) * fVar25 + fVar25) *
                                (float)local_168._4_4_) ^ uRam0000000146870404) &
                         -(uint)(1e-08 <= fVar29) ^ uRam0000000146870404);
        fVar44 = (float)(((uint)(((fVar32 - fVar28 * fVar28 * fVar33 * fVar32) * fVar28 + fVar28) *
                                fStack_160) ^ uRam0000000146870408) & -(uint)(1e-08 <= fVar33) ^
                        uRam0000000146870408);
        fVar45 = (float)(((uint)(((fVar62 - fVar26 * fVar26 * fVar38 * fVar62) * fVar26 + fVar26) *
                                fStack_15c) ^ uRam000000014687040c) & -(uint)(1e-08 <= fVar38) ^
                        uRam000000014687040c);
        fVar26 = (float)local_158._0_4_;
        fVar30 = (float)local_158._4_4_;
        fVar29 = fStack_150;
        fVar47 = fStack_14c;
        fVar28 = (float)local_128._0_4_;
        fVar25 = (float)local_128._4_4_;
        fVar54 = fStack_120;
        fVar63 = local_e8;
        fVar33 = fStack_e4;
        fVar38 = fStack_e0;
      }
      fVar52 = fRam0000000146870488;
      fVar50 = fRam0000000146870484;
      fVar48 = _DAT_146870480;
      fVar40 = fRam0000000146870428;
      fVar37 = fRam0000000146870424;
      fVar61 = _DAT_146870420;
      auVar20._4_4_ = fVar30;
      auVar20._0_4_ = fVar26;
      auVar20._8_4_ = fVar29;
      auVar20._12_4_ = fVar47;
      auVar3._4_4_ = fVar31;
      auVar3._0_4_ = fVar36;
      auVar3._8_4_ = fVar34;
      auVar3._12_4_ = 0;
      auVar18 = minps(auVar20,auVar3);
      auVar21._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146870484);
      auVar21._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146870480);
      auVar21._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146870488);
      auVar21._12_4_ = -(uint)(auVar18._12_4_ < fRam000000014687048c);
      iVar10 = movmskps(uVar11,auVar21);
      if (iVar10 == 0) {
        fVar63 = fVar63 * fVar36;
        fVar33 = fVar33 * fVar31;
        fVar38 = fVar38 * fVar34;
        fVar61 = (float)uVar7 * fVar45 * _DAT_146870460 + fVar39 * fVar41 +
                 (float)uVar8 * fVar44 * _DAT_146870450 + fVar35 * fVar42 * _DAT_146870440;
        fVar37 = (float)uVar7 * fVar44 * fRam0000000146870464 + fVar39 * fVar42 +
                 (float)uVar8 * fVar45 * fRam0000000146870454 +
                 fVar35 * fVar41 * fRam0000000146870444;
        fVar40 = (float)uVar7 * fVar42 * fRam0000000146870468 + fVar39 * fVar44 +
                 (float)uVar8 * fVar41 * fRam0000000146870458 +
                 fVar35 * fVar45 * fRam0000000146870448;
        fVar62 = (float)uVar7 * fVar41 * fRam000000014687046c + fVar39 * fVar45 +
                 (float)uVar8 * fVar42 * fRam000000014687045c +
                 fVar35 * fVar44 * fRam000000014687044c;
        fVar22 = fVar38 * (float)uVar8 - fVar33 * fVar35;
        fVar27 = fVar63 * fVar35 - fVar38 * (float)uVar7;
        fVar32 = fVar33 * (float)uVar7 - fVar63 * (float)uVar8;
        fVar22 = fVar22 + fVar22;
        fVar27 = fVar27 + fVar27;
        fVar32 = fVar32 + fVar32;
        fVar26 = fVar26 * fVar36;
        fVar30 = fVar30 * fVar31;
        fVar29 = fVar29 * fVar34;
        local_168._4_4_ = fVar30;
        local_168._0_4_ = fVar26;
        fStack_160 = fVar29;
        fStack_15c = fVar47 * 0.0;
        fVar28 = (fVar32 * (float)uVar8 - fVar27 * fVar35) + fVar39 * fVar22 + fVar63 + fVar28;
        fVar25 = (fVar22 * fVar35 - fVar32 * (float)uVar7) + fVar39 * fVar27 + fVar33 + fVar25;
        fVar54 = (fVar27 * (float)uVar7 - fVar22 * (float)uVar8) + fVar39 * fVar32 + fVar38 + fVar54
        ;
      }
      else {
        fVar25 = (float)uVar8 + (float)uVar8;
        fVar28 = fVar35 + fVar35;
        fVar55 = (float)uVar7 * ((float)uVar7 + (float)uVar7);
        local_168._4_4_ = fVar30 * fVar31;
        local_168._0_4_ = fVar26 * fVar36;
        fStack_160 = fVar29 * fVar34;
        fStack_15c = fVar47 * 0.0;
        fVar54 = fVar39 * ((float)uVar7 + (float)uVar7);
        fVar56 = (fVar39 * fVar28 + (float)uVar7 * fVar25) * fVar36;
        fVar58 = (fVar54 + (float)uVar8 * fVar28) * fVar31;
        fVar60 = (fVar39 * fVar25 + (float)uVar7 * fVar28) * fVar34;
        fVar57 = fVar31 * ((float)uVar7 * fVar25 - fVar39 * fVar28);
        fVar59 = fVar34 * ((float)uVar8 * fVar28 - fVar54);
        fVar46 = fVar36 * ((float)uVar7 * fVar28 - fVar39 * fVar25);
        fVar54 = (float)((uint)((_DAT_146870420 - (fVar35 * fVar28 + (float)uVar8 * fVar25)) *
                               fVar36) & _DAT_146870430);
        fVar28 = (float)((uint)((fRam0000000146870424 - (fVar35 * fVar28 + fVar55)) * fVar31) &
                        uRam0000000146870434);
        fVar31 = (float)((uint)((fRam0000000146870428 - ((float)uVar8 * fVar25 + fVar55)) * fVar34)
                        & uRam0000000146870438);
        fVar34 = (float)((uint)((fRam000000014687042c - (fVar55 + fVar55)) * 0.0) &
                        uRam000000014687043c);
        fVar35 = fVar42 + fVar42;
        fVar36 = fVar44 + fVar44;
        fVar39 = fVar41 * (fVar41 + fVar41);
        fVar25 = (fVar41 + fVar41) * fVar45;
        fVar49 = (fVar36 * fVar45 + fVar35 * fVar41) * fVar26;
        fVar51 = (fVar25 + fVar36 * fVar42) * fVar30;
        fVar53 = (fVar35 * fVar45 + fVar36 * fVar41) * fVar29;
        fVar55 = fVar30 * (fVar35 * fVar41 - fVar36 * fVar45);
        fVar43 = fVar29 * (fVar36 * fVar42 - fVar25);
        fVar41 = fVar26 * (fVar36 * fVar41 - fVar35 * fVar45);
        fVar25 = (float)((uint)((_DAT_146870420 - (fVar44 * fVar36 + fVar42 * fVar35)) * fVar26) &
                        _DAT_146870430);
        fVar36 = (float)((uint)((fRam0000000146870424 - (fVar44 * fVar36 + fVar39)) * fVar30) &
                        uRam0000000146870434);
        fVar26 = (float)((uint)((fRam0000000146870428 - (fVar42 * fVar35 + fVar39)) * fVar29) &
                        uRam0000000146870438);
        fVar30 = (float)((uint)((fRam000000014687042c - (fVar39 + fVar39)) * fVar47) &
                        uRam000000014687043c);
        local_118 = fVar49 * fVar57 + fVar25 * fVar54 + fVar41 * fVar60 +
                    fVar30 * (float)local_128._0_4_;
        fStack_114 = fVar49 * fVar28 + fVar25 * fVar56 + fVar41 * fVar59 +
                     fVar30 * (float)local_128._4_4_;
        fStack_110 = fVar49 * fVar58 + fVar25 * fVar46 + fVar41 * fVar31 + fVar30 * fStack_120;
        fStack_10c = fVar49 * fVar34 + fVar25 * fVar34 + fVar41 * fVar34 +
                     fVar30 * fRam000000014687042c;
        local_108 = fVar36 * fVar57 + fVar55 * fVar54 + fVar51 * fVar60 +
                    fVar30 * (float)local_128._0_4_;
        fStack_104 = fVar36 * fVar28 + fVar55 * fVar56 + fVar51 * fVar59 +
                     fVar30 * (float)local_128._4_4_;
        fStack_100 = fVar36 * fVar58 + fVar55 * fVar46 + fVar51 * fVar31 + fVar30 * fStack_120;
        fStack_fc = fVar36 * fVar34 + fVar55 * fVar34 + fVar51 * fVar34 +
                    fVar30 * fRam000000014687042c;
        local_f8 = fVar43 * fVar57 + fVar53 * fVar54 + fVar26 * fVar60 +
                   fVar30 * (float)local_128._0_4_;
        fStack_f4 = fVar43 * fVar28 + fVar53 * fVar56 + fVar26 * fVar59 +
                    fVar30 * (float)local_128._4_4_;
        fStack_f0 = fVar43 * fVar58 + fVar53 * fVar46 + fVar26 * fVar31 + fVar30 * fStack_120;
        fStack_ec = fVar43 * fVar34 + fVar53 * fVar34 + fVar26 * fVar34 +
                    fVar30 * fRam000000014687042c;
        local_e8 = fVar33 * fVar57 + fVar63 * fVar54 + fVar38 * fVar60 +
                   fRam000000014687042c * (float)local_128._0_4_;
        fStack_e4 = fVar33 * fVar28 + fVar63 * fVar56 + fVar38 * fVar59 +
                    fRam000000014687042c * (float)local_128._4_4_;
        fStack_e0 = fVar33 * fVar58 + fVar63 * fVar46 + fVar38 * fVar31 +
                    fRam000000014687042c * fStack_120;
        fStack_dc = fVar33 * fVar34 + fVar63 * fVar34 + fVar38 * fVar34 +
                    fRam000000014687042c * fRam000000014687042c;
        FMatrix::RemoveScaling(&local_118);
        fVar26 = (float)local_168._0_4_;
        fVar30 = (float)local_168._4_4_;
        fVar29 = fStack_160;
        fVar54 = (float)(-(uint)(fVar48 <= (float)local_168._0_4_) & (_DAT_146870470 ^ (uint)fVar61)
                        ^ _DAT_146870470);
        fVar25 = (float)(-(uint)(fVar50 <= (float)local_168._4_4_) &
                         (uRam0000000146870474 ^ (uint)fVar37) ^ uRam0000000146870474);
        fVar28 = (float)(-(uint)(fVar52 <= fStack_160) & (uRam0000000146870478 ^ (uint)fVar40) ^
                        uRam0000000146870478);
        local_118 = local_118 * fVar54;
        fStack_114 = fStack_114 * fVar54;
        fStack_110 = fStack_110 * fVar54;
        fStack_104 = fStack_104 * fVar25;
        fStack_100 = fStack_100 * fVar25;
        local_108 = local_108 * fVar25;
        fStack_f4 = fStack_f4 * fVar28;
        fStack_f0 = fStack_f0 * fVar28;
        local_f8 = local_f8 * fVar28;
        FQuat::FQuat(local_128,&local_118);
        local_138 = 1e-08;
        auVar24._0_4_ = (float)local_128._0_4_ * (float)local_128._0_4_ + fStack_120 * fStack_120;
        auVar24._4_4_ = (float)local_128._4_4_ * (float)local_128._4_4_ + fStack_11c * fStack_11c;
        auVar24._8_4_ = fStack_120 * fStack_120 + (float)local_128._0_4_ * (float)local_128._0_4_;
        auVar24._12_4_ = fStack_11c * fStack_11c + (float)local_128._4_4_ * (float)local_128._4_4_;
        fVar31 = auVar24._4_4_ + auVar24._0_4_;
        fVar34 = auVar24._8_4_ + auVar24._4_4_;
        fVar33 = auVar24._12_4_ + auVar24._8_4_;
        fVar38 = auVar24._0_4_ + auVar24._12_4_;
        auVar2._4_4_ = fVar34;
        auVar2._0_4_ = fVar31;
        auVar2._8_4_ = fVar33;
        auVar2._12_4_ = fVar38;
        auVar18 = rsqrtps(auVar24,auVar2);
        fVar54 = auVar18._0_4_;
        fVar25 = auVar18._4_4_;
        fVar28 = auVar18._8_4_;
        fVar36 = auVar18._12_4_;
        fVar54 = (fVar22 - fVar54 * fVar54 * fVar31 * fVar22) * fVar54 + fVar54;
        fVar25 = (fVar27 - fVar25 * fVar25 * fVar34 * fVar27) * fVar25 + fVar25;
        fVar28 = (fVar32 - fVar28 * fVar28 * fVar33 * fVar32) * fVar28 + fVar28;
        fVar36 = (fVar62 - fVar36 * fVar36 * fVar38 * fVar62) * fVar36 + fVar36;
        fVar61 = (float)(((uint)(((fVar22 - fVar54 * fVar54 * fVar31 * fVar22) * fVar54 + fVar54) *
                                (float)local_128._0_4_) ^ _DAT_146870400) & -(uint)(1e-08 <= fVar31)
                        ^ _DAT_146870400);
        fVar37 = (float)(((uint)(((fVar27 - fVar25 * fVar25 * fVar34 * fVar27) * fVar25 + fVar25) *
                                (float)local_128._4_4_) ^ uRam0000000146870404) &
                         -(uint)(1e-08 <= fVar34) ^ uRam0000000146870404);
        fVar40 = (float)(((uint)(((fVar32 - fVar28 * fVar28 * fVar33 * fVar32) * fVar28 + fVar28) *
                                fStack_120) ^ uRam0000000146870408) & -(uint)(1e-08 <= fVar33) ^
                        uRam0000000146870408);
        fVar62 = (float)(((uint)(((fVar62 - fVar36 * fVar36 * fVar38 * fVar62) * fVar36 + fVar36) *
                                fStack_11c) ^ uRam000000014687040c) & -(uint)(1e-08 <= fVar38) ^
                        uRam000000014687040c);
        fVar28 = local_e8;
        fVar25 = fStack_e4;
        fVar54 = fStack_e0;
      }
      lVar14 = (**(code **)(*plVar13 + 0x420))
                         (plVar13,&local_118,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xa60),
                          2);
      fVar26 = *(float *)(lVar14 + 0x10) * fVar26;
      fVar30 = *(float *)(lVar14 + 0x14) * fVar30;
      fVar29 = *(float *)(lVar14 + 0x18) * fVar29;
      fVar36 = fVar29 * fVar37 - fVar30 * fVar40;
      fVar31 = fVar26 * fVar40 - fVar29 * fVar61;
      fVar34 = fVar30 * fVar61 - fVar26 * fVar37;
      fVar36 = fVar36 + fVar36;
      fVar31 = fVar31 + fVar31;
      fVar34 = fVar34 + fVar34;
      *param_2 = CONCAT44((fVar36 * fVar40 - fVar34 * fVar61) + fVar62 * fVar31 + fVar30 + fVar25,
                          (fVar34 * fVar37 - fVar31 * fVar40) + fVar62 * fVar36 + fVar26 + fVar28);
      fVar54 = (fVar31 * fVar61 - fVar36 * fVar37) + fVar62 * fVar34 + fVar29 + fVar54;
      goto LAB_140e4dade;
    }
  }
  *param_2 = _DAT_1468b5d90;
  fVar54 = DAT_1468b5d98;
LAB_140e4dade:
  *(float *)(param_2 + 1) = fVar54;
  return param_2;
}



// FUNCTION 140e4db10 FUN_140e4db10 body=614 status=ok
// SIG undefined FUN_140e4db10(void)

longlong FUN_140e4db10(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 == 0) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_2 + 0xf0);
  if (*(longlong *)(lVar3 + 0x5a8) == lVar2) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = lVar4 + 0x2bc8;
      goto LAB_140e4dbb5;
    }
    lVar2 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = FUN_140e4cbc0(lVar4);
      return lVar4;
    }
    lVar2 = *(longlong *)(param_2 + 0xf0);
  }
  if (*(longlong *)(lVar3 + 0x5b0) != lVar2) {
    return 0;
  }
  lVar3 = FUN_1413ffe00();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar3 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = FUN_140e4ca10(lVar4);
      return lVar4;
    }
    return 0;
  }
  lVar4 = lVar4 + 0x2bf0;
LAB_140e4dbb5:
  lVar3 = FWeakObjectPtr::Get(lVar4);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 8)) {
      return 0;
    }
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      return 0;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar4);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar3;
}



// FUNCTION 140e4dd80 FUN_140e4dd80 body=114 status=ok
// SIG undefined FUN_140e4dd80(void)

void FUN_140e4dd80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (fVar4 = (float)FUN_140cff8a0(lVar1), 0.0 < fVar4)) {
      return;
    }
  }
  FUN_1426e23a0(param_1);
  return;
}



// FUNCTION 140e4de20 FUN_140e4de20 body=7 status=ok
// SIG undefined FUN_140e4de20(void)

undefined4 FUN_140e4de20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x180);
}



// FUNCTION 140e4de30 FUN_140e4de30 body=467 status=ok
// SIG undefined FUN_140e4de30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140e4de30(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_5e8 [32];
  undefined8 local_5c8;
  undefined1 local_5c0 [16];
  undefined8 local_5b0;
  undefined1 local_5a8;
  undefined1 local_5a0 [608];
  undefined8 local_340;
  undefined8 local_338;
  undefined1 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_5e8;
  local_5b0 = FUN_140e505b0();
  local_5a8 = 1;
  local_340 = 0;
  local_338 = 0;
  local_330 = 1;
  local_328 = 0;
  local_320 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0xffffffff;
  local_2f4 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((*param_2 != 0) && (lVar1 = *(longlong *)(*param_2 + 0x78), lVar1 != 0)) {
    FUN_142de5080(&local_5b0,lVar1,0);
  }
  UCheatManagerGunfire::GetAllCheats(local_5c0);
  FUN_142de7fc0(&local_5b0,local_5c0);
  local_5c8 = 0;
  plVar4 = (longlong *)FUN_142dec810(local_5c0,&local_5c8);
  bVar3 = 0 < (int)plVar4[1];
  if (bVar3) {
    puVar2 = (undefined8 *)*plVar4;
    *param_3 = *puVar2;
    FText::operator=(param_3 + 1,puVar2 + 1);
    FText::operator=(param_3 + 4,puVar2 + 4);
    *(undefined4 *)(param_3 + 7) = *(undefined4 *)(puVar2 + 7);
    *(undefined1 *)((longlong)param_3 + 0x3c) = *(undefined1 *)((longlong)puVar2 + 0x3c);
  }
  FUN_140e40c10(local_5c0);
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if (local_1d0 != 0) {
    FMemory::Free();
  }
  local_2e0 = 0;
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_328);
  FUN_14099aac0(local_5a0);
  return bVar3;
}



// FUNCTION 140e4e010 FUN_140e4e010 body=1113 status=ok
// SIG undefined FUN_140e4e010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e4e010(longlong param_1,undefined8 param_2)

{
  size_t _Size;
  void *pvVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  void *pvVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_628 [32];
  longlong local_608;
  undefined8 local_600;
  void *local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined1 local_5e0 [16];
  undefined8 local_5d0;
  undefined1 local_5c8;
  undefined1 local_5c0 [608];
  undefined8 local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  longlong local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_628;
  local_608 = 0;
  local_600 = 0;
  local_5e8 = param_2;
  local_5d0 = FUN_140e505b0();
  plVar5 = *(longlong **)(param_1 + 0x188);
  plVar8 = plVar5 + (longlong)*(int *)(param_1 + 400) * 4;
  local_5c8 = 1;
  local_360 = 0;
  local_358 = 0;
  local_350 = 1;
  local_348 = 0;
  local_340 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0xffffffff;
  local_314 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_50 = 0;
  local_48 = 0;
  for (; plVar5 != plVar8; plVar5 = plVar5 + 4) {
    if ((*plVar5 != 0) && (lVar13 = *(longlong *)(*plVar5 + 0x78), lVar13 != 0)) {
      FUN_142de5080(&local_5d0,lVar13,0);
    }
  }
  UCheatManagerGunfire::GetAllCheats(local_5e0);
  FUN_142de7fc0(&local_5d0,local_5e0);
  local_5f8 = (void *)0x0;
  plVar5 = (longlong *)FUN_142dec810(local_5e0,&local_5f8);
  lVar13 = *plVar5;
  lVar12 = (longlong)(int)plVar5[1] * 0x40 + lVar13;
  if (lVar13 != lVar12) {
    lVar14 = lVar13 + 8;
    do {
      uVar2 = local_600;
      iVar10 = (int)local_600;
      lVar9 = (longlong)(int)local_600;
      if (1 < (int)local_600) {
        iVar7 = (2 - (uint)((int)local_600 != 0)) + (int)local_600;
        local_600 = CONCAT44(local_600._4_4_,iVar7);
        if (local_600._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_608,uVar2 & 0xffffffff);
        }
        lVar9 = lVar9 - (ulonglong)(iVar10 != 0);
        *(undefined2 *)(local_608 + lVar9 * 2) = 10;
        *(undefined2 *)(local_608 + 2 + lVar9 * 2) = 0;
      }
      cVar3 = FText::IsEmptyOrWhitespace(lVar14);
      if (cVar3 == '\0') {
        puVar6 = (undefined8 *)FText::ToString(lVar14);
        local_5f8 = (void *)0x0;
        iVar10 = *(int *)(puVar6 + 1);
        pvVar1 = (void *)*puVar6;
        local_5f0._0_4_ = iVar10;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_5f8,(3 - (uint)(iVar10 != 0)) + iVar10,0);
        pvVar11 = local_5f8;
        _guard_xfg_dispatch_icall_nop(local_5f8,pvVar1,(longlong)iVar10 * 2);
        iVar10 = (int)local_5f0;
        lVar9 = (longlong)(int)local_5f0;
        iVar7 = (3 - (uint)((int)local_5f0 != 0)) + (int)local_5f0;
        local_5f0 = CONCAT44(local_5f0._4_4_,iVar7);
        if (local_5f0._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5f8);
          pvVar11 = local_5f8;
          iVar7 = (int)local_5f0;
        }
        uVar2 = local_600;
        local_5f8 = (void *)0x0;
        local_5f0 = 0;
        lVar9 = lVar9 - (ulonglong)(iVar10 != 0);
        *(undefined4 *)((longlong)pvVar11 + lVar9 * 2) = 0x20003a;
        *(undefined2 *)((longlong)pvVar11 + lVar9 * 2 + 4) = 0;
        if ((iVar7 != 0) && (iVar7 + -1 != 0)) {
          iVar10 = (int)local_600;
          lVar9 = (longlong)(int)local_600;
          iVar4 = (uint)((int)local_600 == 0) + iVar7 + -1 + (int)local_600;
          local_600 = CONCAT44(local_600._4_4_,iVar4);
          if (local_600._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_608,uVar2 & 0xffffffff);
          }
          pvVar1 = (void *)(local_608 + (lVar9 - (ulonglong)(iVar10 != 0)) * 2);
          _Size = (longlong)iVar7 * 2 - 2;
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar11,_Size);
          *(undefined2 *)((longlong)pvVar1 + _Size) = 0;
        }
        if (pvVar11 != (void *)0x0) {
          FMemory::Free(pvVar11);
        }
      }
      puVar6 = (undefined8 *)FText::ToString(lVar14 + 0x18);
      uVar2 = local_600;
      pvVar1 = (void *)*puVar6;
      iVar10 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar10 = 0;
      }
      if (iVar10 != 0) {
        iVar7 = (int)local_600;
        lVar9 = (longlong)(int)local_600;
        iVar4 = (uint)((int)local_600 == 0) + iVar10 + (int)local_600;
        local_600 = CONCAT44(local_600._4_4_,iVar4);
        if (local_600._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_608,uVar2 & 0xffffffff);
        }
        pvVar11 = (void *)(local_608 + (lVar9 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar11,pvVar1,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)pvVar11 + (longlong)iVar10 * 2) = 0;
      }
      lVar13 = lVar13 + 0x40;
      lVar14 = lVar14 + 0x40;
      param_2 = local_5e8;
    } while (lVar13 != lVar12);
  }
  FText::FromString(param_2,&local_608);
  FUN_140e40c10(local_5e0);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  if (local_1f0 != 0) {
    FMemory::Free();
  }
  local_300 = 0;
  if (local_308 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_348);
  FUN_14099aac0(local_5c0);
  if (local_608 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140e4e470 FUN_140e4e470 body=8 status=ok
// SIG undefined FUN_140e4e470(void)

longlong FUN_140e4e470(longlong param_1)

{
  return param_1 + 0x4b0;
}



// FUNCTION 140e4e480 FUN_140e4e480 body=61 status=ok
// SIG undefined FUN_140e4e480(void)

undefined8 FUN_140e4e480(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14301f8f0();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x208);
    }
  }
  return 0;
}



// FUNCTION 140e4e4c0 FUN_140e4e4c0 body=63 status=ok
// SIG undefined FUN_140e4e4c0(void)

undefined4 FUN_140e4e4c0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14301f8f0();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      return *(undefined4 *)(lVar2 + 0x1fc);
    }
  }
  return 1;
}



// FUNCTION 140e4e510 FUN_140e4e510 body=3051 status=ok
// SIG undefined FUN_140e4e510(void)

void FUN_140e4e510(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14270b1a0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146870988) && (_Init_thread_header(&DAT_146870988), DAT_146870988 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HealthInformation",1);
    DAT_146870980 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870988);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870980 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870980 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870980 + 0x30));
  }
  if ((*piVar5 < DAT_146870998) && (_Init_thread_header(&DAT_146870998), DAT_146870998 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HealthState",1);
    DAT_146870990 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870998);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870990 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870990 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870990 + 0x30));
  }
  if ((*piVar5 < DAT_1468709a8) && (_Init_thread_header(&DAT_1468709a8), DAT_1468709a8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Level",1);
    DAT_1468709a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468709a8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468709a0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468709a0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468709a0 + 0x30));
  }
  if ((*piVar5 < DAT_1468709b8) && (_Init_thread_header(&DAT_1468709b8), DAT_1468709b8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerLocation",1);
    DAT_1468709b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468709b8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468709b0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468709b0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468709b0 + 0x30));
  }
  if ((*piVar5 < DAT_1468709c8) && (_Init_thread_header(&DAT_1468709c8), DAT_1468709c8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerRotation",1);
    DAT_1468709c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468709c8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468709c0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468709c0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468709c0 + 0x30));
  }
  if ((*piVar5 < DAT_1468709d8) && (_Init_thread_header(&DAT_1468709d8), DAT_1468709d8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerClass",1);
    DAT_1468709d0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468709d8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468709d0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468709d0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468709d0 + 0x30));
  }
  if ((*piVar5 < DAT_1468709e8) && (_Init_thread_header(&DAT_1468709e8), DAT_1468709e8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ShiftUniqueId",1);
    DAT_1468709e0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468709e8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468709e0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468709e0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468709e0 + 0x30));
  }
  if ((*piVar5 < DAT_1468709f8) && (_Init_thread_header(&DAT_1468709f8), DAT_1468709f8 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MusicThreatLevel",1);
    DAT_1468709f0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468709f8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468709f0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468709f0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468709f0 + 0x30));
  }
  if ((*piVar5 < DAT_146870a08) && (_Init_thread_header(&DAT_146870a08), DAT_146870a08 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bDuelingEnabled",1);
    DAT_146870a00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a08);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a00 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a00 + 0x30));
  }
  if ((*piVar5 < DAT_146870a18) && (_Init_thread_header(&DAT_146870a18), DAT_146870a18 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TradeRequestReceptionType",1);
    DAT_146870a10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a18);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a10 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a10 + 0x30));
  }
  if ((*piVar5 < DAT_146870a28) && (_Init_thread_header(&DAT_146870a28), DAT_146870a28 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bHasPossessionOfPawn",1);
    DAT_146870a20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a28);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a20 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a20 + 0x30));
  }
  if ((*piVar5 < DAT_146870a38) && (_Init_thread_header(&DAT_146870a38), DAT_146870a38 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bHasFullControlOfPawn_ForSonyRTMP",1);
    DAT_146870a30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a30 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a30 + 0x30));
  }
  if ((*piVar5 < DAT_146870a48) && (_Init_thread_header(&DAT_146870a48), DAT_146870a48 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bHasShieldEquipped",1);
    DAT_146870a40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a48);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a40 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a40 + 0x30));
  }
  if ((*piVar5 < DAT_146870a58) && (_Init_thread_header(&DAT_146870a58), DAT_146870a58 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bPhotoModeActive",1);
    DAT_146870a50 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a58);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a50 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a50 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a50 + 0x30));
  }
  if ((*piVar5 < DAT_146870a68) && (_Init_thread_header(&DAT_146870a68), DAT_146870a68 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerCharacterGuid",1);
    DAT_146870a60 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a68);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a60 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a60 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a60 + 0x30));
  }
  if ((*piVar5 < DAT_146870a78) && (_Init_thread_header(&DAT_146870a78), DAT_146870a78 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsRaidSpectating",1);
    DAT_146870a70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a78);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a70 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a70 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a70 + 0x30));
  }
  if ((*piVar5 < DAT_146870a88) && (_Init_thread_header(&DAT_146870a88), DAT_146870a88 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsHeadsetPresent",1);
    DAT_146870a80 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a88);
  }
  if (0 < *(int *)(DAT_146870a80 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870a80 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146870a80 + 0x30));
  }
  return;
}



// FUNCTION 140e4f100 FUN_140e4f100 body=433 status=ok
// SIG undefined FUN_140e4f100(void)

void FUN_140e4f100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142cc2130();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146870a98) && (_Init_thread_header(&DAT_146870a98), DAT_146870a98 == -1)) {
    uVar1 = FUN_1414aa4c0();
    FUN_1414aa4c0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Experience",1);
    DAT_146870a90 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870a98);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870a90 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146870a90 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870a90 + 0x30));
  }
  if ((*piVar5 < DAT_146870aa8) && (_Init_thread_header(&DAT_146870aa8), DAT_146870aa8 == -1)) {
    uVar1 = FUN_1414aa4c0();
    FUN_1414aa4c0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"UncappedExperience",1);
    DAT_146870aa0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870aa8);
  }
  if (0 < *(int *)(DAT_146870aa0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146870aa0 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146870aa0 + 0x30));
  }
  return;
}



// FUNCTION 140e4f2c0 FUN_140e4f2c0 body=251 status=ok
// SIG undefined FUN_140e4f2c0(void)

void FUN_140e4f2c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146870ab8) {
    _Init_thread_header(&DAT_146870ab8);
    if (DAT_146870ab8 == -1) {
      uVar1 = FUN_1414add30();
      FUN_1414add30();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"SlotItemList",1);
      DAT_146870ab0 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146870ab8);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146870ab0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146870ab0 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870ab0 + 0x30));
  }
  FUN_14233e8d0(param_1,param_2);
  return;
}



// FUNCTION 140e4f3c0 FUN_140e4f3c0 body=1651 status=ok
// SIG undefined FUN_140e4f3c0(void)

void FUN_140e4f3c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146870ac8) && (_Init_thread_header(&DAT_146870ac8), DAT_146870ac8 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GuardianRank",1);
    DAT_146870ac0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870ac8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870ac0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870ac0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870ac0 + 0x30));
  }
  if ((*piVar5 < DAT_146870ad8) && (_Init_thread_header(&DAT_146870ad8), DAT_146870ad8 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AvailableTokens",1);
    DAT_146870ad0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870ad8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870ad0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870ad0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870ad0 + 0x30));
  }
  if ((*piVar5 < DAT_146870ae8) && (_Init_thread_header(&DAT_146870ae8), DAT_146870ae8 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RankRewards",1);
    DAT_146870ae0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870ae8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870ae0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870ae0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870ae0 + 0x30));
  }
  if ((*piVar5 < DAT_146870af8) && (_Init_thread_header(&DAT_146870af8), DAT_146870af8 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GuardianExperience",1);
    DAT_146870af0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870af8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870af0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870af0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870af0 + 0x30));
  }
  if ((*piVar5 < DAT_146870b08) && (_Init_thread_header(&DAT_146870b08), DAT_146870b08 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RankRewardsEnabledBits",1);
    DAT_146870b00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870b08);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870b00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870b00 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870b00 + 0x30));
  }
  if ((*piVar5 < DAT_146870b18) && (_Init_thread_header(&DAT_146870b18), DAT_146870b18 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RankPerksEnabledBits",1);
    DAT_146870b10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870b18);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870b10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870b10 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870b10 + 0x30));
  }
  if ((*piVar5 < DAT_146870b28) && (_Init_thread_header(&DAT_146870b28), DAT_146870b28 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RankRewardRandomSeed",1);
    DAT_146870b20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870b28);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870b20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870b20 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870b20 + 0x30));
  }
  if ((*piVar5 < DAT_146870b38) && (_Init_thread_header(&DAT_146870b38), DAT_146870b38 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bGuardianRankSystemEnabled",1);
    DAT_146870b30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870b38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870b30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870b30 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870b30 + 0x30));
  }
  if ((*piVar5 < DAT_146870b48) && (_Init_thread_header(&DAT_146870b48), DAT_146870b48 == -1)) {
    uVar1 = FUN_1414b0d60();
    FUN_1414b0d60();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bDisabledForGameMode",1);
    DAT_146870b40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870b48);
  }
  if (0 < *(int *)(DAT_146870b40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870b40 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146870b40 + 0x30));
  }
  return;
}



// FUNCTION 140e4fa40 FUN_140e4fa40 body=236 status=ok
// SIG undefined FUN_140e4fa40(void)

void FUN_140e4fa40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146870b58) && (_Init_thread_header(&DAT_146870b58), DAT_146870b58 == -1))
  {
    uVar1 = FUN_1414b02f0();
    FUN_1414b02f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BuyBackList",1);
    DAT_146870b50 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870b58);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146870b50 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146870b50 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870b50 + 0x30));
  }
  return;
}



// FUNCTION 140e4fb30 FUN_140e4fb30 body=8 status=ok
// SIG undefined FUN_140e4fb30(void)

longlong FUN_140e4fb30(longlong param_1)

{
  return param_1 + 0x4e8;
}



// FUNCTION 140e4fb40 FUN_140e4fb40 body=901 status=ok
// SIG undefined FUN_140e4fb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e4fb40(longlong param_1,undefined8 *param_2,float *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_7a8 [32];
  int local_788;
  int local_784 [3];
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  undefined8 uStack_764;
  float fStack_75c;
  float fStack_758;
  float fStack_754;
  undefined4 uStack_750;
  float fStack_74c;
  float local_748;
  float fStack_744;
  float fStack_73c;
  float local_738;
  float fStack_734;
  undefined4 uStack_730;
  float fStack_72c;
  float local_718 [6];
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined1 local_6d8 [1560];
  longlong local_c0;
  longlong local_b0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_7a8;
  if ((((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x250) + 0x2c70), lVar2 != 0)) &&
     (plVar3 = *(longlong **)(lVar2 + 0x1430), plVar3 != (longlong *)0x0)) {
    fStack_770 = 1.0;
    fStack_76c = 1.0;
    local_778 = (*param_3 + *param_3) - 1.0;
    fStack_774 = 1.0 - (param_3[1] + param_3[1]);
    FUN_142dcfa90(lVar2,&local_788,local_784);
    if ((local_788 != 0) && (local_784[0] != 0)) {
      iVar5 = FUN_142708650(lVar2);
      (**(code **)(*plVar3 + 0x720))(plVar3,local_6d8);
      if (local_b0 != 0) {
        FMemory::Free();
      }
      if (local_c0 != 0) {
        FMemory::Free();
      }
      cVar4 = FUN_142fd3580(plVar3);
      if (cVar4 != '\0') {
        UUGMenuManager::GetFadeHUD(plVar3[0x594]);
      }
      fVar6 = (float)FUN_14271a5d0(lVar2);
      if (fVar6 <= 0.001) {
        fVar6 = 0.001;
      }
      if (((local_784[0] < local_788) && (iVar5 == 2)) || (iVar5 == 1)) {
        fVar7 = 1.0;
        fVar8 = (float)local_788 / (float)local_784[0];
      }
      else {
        fVar8 = 1.0;
        fVar7 = (float)local_784[0] / (float)local_788;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 * 0.008726646);
      local_6f8 = 0;
      uStack_6f4 = 0;
      uStack_6f0 = 0;
      uStack_6ec = 0x3f800000;
      local_768 = (1.0 / fVar6) * fVar7;
      fStack_754 = (1.0 / fVar6) * fVar8;
      uStack_764 = 0;
      local_718[1] = 0.0;
      local_718[2] = 0.0;
      local_718[3] = 0.0;
      local_738 = 0.0;
      fStack_734 = 0.0;
      fStack_72c = 0.0;
      local_6e8 = 0;
      uStack_6e4 = 0;
      uStack_6dc = 0;
      fStack_75c = 0.0;
      fStack_758 = 0.0;
      uStack_750 = 0;
      fStack_74c = 0.0;
      local_718[4] = 0.0;
      uStack_700 = 0;
      uStack_6fc = 0;
      uStack_730 = uVar1;
      local_718[0] = local_768;
      local_718[5] = fStack_754;
      uStack_6e0 = uVar1;
      FMatrix::InverseFast(local_718,&local_768);
      fVar7 = fStack_76c * local_738 + fStack_770 * local_748 +
              fStack_774 * fStack_758 + local_778 * local_768;
      fVar6 = fStack_76c * fStack_734 + fStack_770 * fStack_744 +
              fStack_774 * fStack_754 + local_778 * (float)uStack_764;
      fVar8 = fStack_76c * fStack_72c + fStack_770 * fStack_73c +
              fStack_774 * fStack_74c + local_778 * fStack_75c;
      if (fVar8 != 0.0) {
        fVar8 = 1.0 / fVar8;
        fVar7 = fVar7 * fVar8;
        fVar6 = fVar6 * fVar8;
      }
      *(float *)((longlong)param_2 + 4) = fVar7;
      *(float *)(param_2 + 1) = fVar6;
      *(undefined4 *)param_2 = 0;
      return param_2;
    }
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 140e4fed0 FUN_140e4fed0 body=8 status=ok
// SIG undefined FUN_140e4fed0(void)

longlong FUN_140e4fed0(longlong param_1)

{
  return param_1 + 0xd0;
}



// FUNCTION 140e4fee0 FUN_140e4fee0 body=19 status=ok
// SIG undefined FUN_140e4fee0(void)

int FUN_140e4fee0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x38) - *(int *)(lVar1 + 100);
  }
  return 0;
}



// FUNCTION 140e4ff00 FUN_140e4ff00 body=448 status=ok
// SIG undefined FUN_140e4ff00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e4ff00(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_38 [16];
  
  *param_2 = _DAT_14629ccb8;
  *param_3 = DAT_1468b5da0;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5da8;
  lVar4 = FUN_140e500c0();
  if (lVar4 == 0) {
    return;
  }
  plVar10 = (longlong *)0x0;
  plVar9 = plVar10;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x2c70);
  }
  bVar1 = false;
  cVar2 = FUN_142dafb10(param_1 + 0x38,&DAT_146870870);
  if ((cVar2 == '\0') || (*(longlong *)(param_1 + 0x28) == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x1d8);
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x9f8);
  }
  if (lVar5 == DAT_146870878) {
    if (plVar9 != (longlong *)0x0) {
      uVar6 = FUN_1414b0d60();
      plVar7 = (longlong *)(**(code **)(*plVar9 + 0x628))(plVar9,uVar6);
      if (plVar7 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar7 + 0x468))(plVar7);
        bVar1 = false;
        if (0 < iVar3) {
          bVar1 = true;
        }
      }
      goto LAB_140e4ffe8;
    }
  }
  else {
LAB_140e4ffe8:
    if (plVar9 != (longlong *)0x0) {
      cVar2 = '\0';
      if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
        cVar2 = *(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80);
      }
      local_res10[0] = 0;
      if (cVar2 != '\0') {
        FUN_142710360(plVar9,local_res10);
        plVar10 = (longlong *)(ulonglong)local_res10[0];
      }
      puVar8 = (undefined8 *)FUN_140e25270(lVar4,local_res18,cVar2,plVar10);
      *param_2 = *puVar8;
      puVar8 = (undefined8 *)FUN_140e25170(lVar4,local_38,cVar2,local_res10[0]);
      *param_3 = *puVar8;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar8 + 1);
      if (!bVar1) {
        return;
      }
      if (cVar2 != '\0') {
        return;
      }
      goto LAB_140e5009e;
    }
  }
  *param_2 = *(undefined8 *)(lVar4 + 0xc);
  *param_3 = *(undefined8 *)(lVar4 + 0x2c);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar4 + 0x34);
  if (!bVar1) {
    return;
  }
LAB_140e5009e:
  *(undefined4 *)param_2 = 0x3ef5c28f;
  return;
}



// FUNCTION 140e500c0 FUN_140e500c0 body=354 status=ok
// SIG undefined FUN_140e500c0(void)

longlong FUN_140e500c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  cVar1 = FUN_142dafb10(param_1 + 0x38,&DAT_146870870);
  lVar3 = *(longlong *)(param_1 + 0x28);
  if ((cVar1 == '\0') || (lVar3 == 0)) {
    lVar8 = *(longlong *)(param_1 + 0x1d8);
  }
  else {
    lVar8 = *(longlong *)(lVar3 + 0x9f8);
  }
  if (lVar3 == 0) {
    return 0;
  }
  if (lVar8 == 0) {
    return 0;
  }
  lVar3 = AUGCharacter::GetSwingActor();
  if (lVar3 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar3 + 0x28);
  lVar4 = FMovieSceneEventRepeaterTemplate::StaticStruct();
  if (lVar5 != lVar4) {
    return 0;
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar4 = FMovieSceneEventRepeaterTemplate::StaticStruct();
  lVar5 = *(longlong *)(lVar3 + 0x28);
  while( true ) {
    if (lVar5 == 0) {
      return 0;
    }
    if (lVar5 == lVar4) break;
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  if (lVar8 == 0) {
    return 0;
  }
  if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
    lVar5 = *(longlong *)(lVar3 + 0x70);
    if (*(longlong *)(lVar3 + 0x70) == 0) {
      lVar5 = lVar3 + 0x68;
    }
    iVar2 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                             (longlong)*(int *)(lVar3 + 0x78) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 0x18) == lVar8) {
          if (iVar2 != -1) goto LAB_140e501f3;
          break;
        }
        iVar2 = (int)plVar7[2];
      } while (iVar2 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_140e501f3:
  plVar6 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if ((plVar6 != (longlong *)0x0) && (*plVar6 != 0)) {
    return *plVar6;
  }
  return 0;
}



// FUNCTION 140e50230 FUN_140e50230 body=773 status=ok
// SIG undefined FUN_140e50230(void)

undefined8 FUN_140e50230(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  ulonglong local_res8;
  undefined1 local_res18 [16];
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined **local_88 [2];
  longlong *local_78;
  longlong local_70;
  undefined **local_60 [2];
  longlong *local_50;
  longlong local_48;
  
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    lVar7 = FUN_142547b50(param_1,local_88);
    if ((*(longlong **)(lVar7 + 8) == (longlong *)0x0) ||
       (cVar6 = (**(code **)(**(longlong **)(lVar7 + 8) + 0x20))(), cVar6 == '\0')) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    local_88[0] = &PTR_FUN_143f740c8;
    if (local_70 != 0) {
      FMemory::Free();
    }
    local_88[0] = &PTR_FUN_143f73d18;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_78 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if (bVar11) {
      puVar8 = (ulonglong *)FName::FName(local_res18,L"SPARK",1);
      local_res8 = *puVar8;
      plVar9 = (longlong *)FUN_1404b0000(&local_res8);
      bVar11 = plVar9 != (longlong *)0x0;
      if (bVar11) {
        puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x50))(plVar9,local_98);
        plVar9 = (longlong *)*puVar10;
      }
      else {
        puVar10 = &local_b8;
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        plVar9 = (longlong *)0x0;
      }
      plVar5 = (longlong *)puVar10[1];
      puVar10[1] = 0;
      *puVar10 = 0;
      if ((bVar11) && (local_90 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_90 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      plVar2 = plStack_b0;
      if ((!bVar11) && (plStack_b0 != (longlong *)0x0)) {
        LOCK();
        plVar3 = plStack_b0 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        lVar7 = FUN_142547b50(param_1,local_60);
        local_a8 = *(undefined8 *)(lVar7 + 8);
        local_a0 = *(longlong **)(lVar7 + 0x10);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,param_2,&local_a8);
        plVar9 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_a0 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        local_60[0] = &PTR_FUN_143f740c8;
        if (local_48 != 0) {
          FMemory::Free();
        }
        local_60[0] = &PTR_FUN_143f73d18;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_50 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        if (plVar5 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar9 = plVar5 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return param_2;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return param_2;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar5 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar5)(plVar5);
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
    }
  }
  FUN_142547940(param_1,param_2);
  return param_2;
}



// FUNCTION 140e50540 FUN_140e50540 body=53 status=ok
// SIG undefined FUN_140e50540(void)

undefined4 FUN_140e50540(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x1f0);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
      if (*plVar1 == param_2) {
        return (int)plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 140e50580 FUN_140e50580 body=34 status=ok
// SIG undefined FUN_140e50580(void)

undefined8 * FUN_140e50580(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x4c8);
  lVar1 = *(longlong *)(param_1 + 0x4d0);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140e505b0 FUN_140e505b0 body=127 status=ok
// SIG undefined FUN_140e505b0(void)

longlong FUN_140e505b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x298);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (lVar3 != 0) {
      lVar2 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return *(longlong *)(lVar3 + 0x990);
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x298);
  }
  return lVar3;
}



// FUNCTION 140e50630 FUN_140e50630 body=115 status=ok
// SIG undefined FUN_140e50630(void)

longlong FUN_140e50630(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x268) != 0) {
    return *(longlong *)(param_1 + 0x268);
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e5068e;
  }
  lVar3 = 0;
LAB_140e5068e:
  *(longlong *)(param_1 + 0x268) = lVar3;
  return lVar3;
}



// FUNCTION 140e506b0 FUN_140e506b0 body=8 status=ok
// SIG undefined FUN_140e506b0(void)

undefined8 FUN_140e506b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 9000);
}



// FUNCTION 140e506d0 FUN_140e506d0 body=553 status=ok
// SIG undefined FUN_140e506d0(void)

longlong * FUN_140e506d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if ((((lVar7 != 0) && (lVar7 = FUN_140aea640(lVar7), lVar7 != 0)) &&
      ((longlong *)param_1[0x97] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0x97] + 0x20))(), cVar6 != '\0')) {
    puVar8 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[0x97] + 8))((longlong *)param_1[0x97],local_res8);
    cVar6 = FUN_140bcac80(lVar7,*puVar8);
    if (cVar6 != '\0') {
      local_48 = param_1[0x97];
      local_40 = (longlong *)param_1[0x98];
      local_68 = 0;
      local_60 = 0;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      cVar6 = FUN_140d79f00(*(undefined8 *)(lVar7 + 0x478),&local_48,1,0,&local_68);
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
      if (cVar6 != '\0') {
        *param_2 = local_68;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_60;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
        return param_2;
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    cVar6 = FUN_140e53e10(param_1);
    if (cVar6 != '\0') {
      local_38 = param_1[0xa7];
      local_30 = (longlong *)param_1[0xa8];
      local_58 = 0;
      local_50 = 0;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      cVar6 = FUN_140d79f00(*(undefined8 *)(lVar7 + 0x478),&local_38,1,0,&local_58);
      plVar5 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (cVar6 != '\0') {
        *param_2 = local_58;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_50;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
        return param_2;
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140e50900 FUN_140e50900 body=103 status=ok
// SIG undefined FUN_140e50900(void)

undefined8 FUN_140e50900(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)FUN_141796280(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_1413f82e0();
    plVar4 = plVar1;
    do {
      if (plVar4 == plVar2) {
        lVar3 = plVar1[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
          lVar3 = plVar1[0x1f];
          if (lVar3 == 0) {
            return 0;
          }
        }
        return *(undefined8 *)(lVar3 + 0x1118);
      }
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  return 0;
}



// FUNCTION 140e50970 FUN_140e50970 body=159 status=ok
// SIG undefined FUN_140e50970(void)

longlong FUN_140e50970(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x848), lVar1 != 0)) {
      lVar3 = FUN_1413f82e0();
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
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e50a20 FUN_140e50a20 body=41 status=ok
// SIG undefined FUN_140e50a20(void)

longlong FUN_140e50a20(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(int *)(param_1 + 0x50) < 1) || (lVar1 = **(longlong **)(param_1 + 0x48), lVar1 == 0)) &&
      (lVar1 = *(longlong *)(param_1 + 0x58), lVar1 == 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x60), lVar1 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x68);
  }
  return lVar1;
}



// FUNCTION 140e50a50 FUN_140e50a50 body=205 status=ok
// SIG undefined FUN_140e50a50(void)

longlong FUN_140e50a50(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  plVar2 = (longlong *)FString::FString(local_38,param_1 + 8);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = *plVar2;
  *plVar2 = 0;
  local_40 = (undefined4)plVar2[1];
  local_3c = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  FUN_1417978e0(&local_28,&local_48);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  lVar3 = FSoftObjectPath::TryLoad(&local_28);
  if (lVar3 != 0) {
    lVar4 = FUN_1414764f0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e50b00;
  }
  lVar3 = 0;
LAB_140e50b00:
  if (local_20 != 0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 140e50b20 FUN_140e50b20 body=379 status=ok
// SIG undefined FUN_140e50b20(void)

undefined8 * FUN_140e50b20(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_28;
  int local_20;
  longlong local_18 [2];
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (0 < param_2)) {
    UDataTable::GetRowNames(*(longlong *)(param_1 + 0x30),&local_28);
    if ((-1 < param_2 + -1) && (param_2 + -1 < local_20)) {
      local_res18 = *(undefined8 *)(param_1 + 0x18);
      FName::ToString(&local_res18,local_18);
      lVar1 = *(longlong *)(param_1 + 0x30);
      local_res20 = *(longlong *)(local_28 + -8 + (longlong)param_2 * 8);
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        lVar3 = FUN_14147e540();
        for (lVar4 = *(longlong *)(lVar1 + 0x28); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar3) {
            puVar7 = (undefined8 *)0x0;
            if (local_res20 == 0) goto LAB_140e50bb7;
            if (*(int *)(lVar1 + 0x38) == *(int *)(lVar1 + 100)) goto LAB_140e50c60;
            lVar4 = *(longlong *)(lVar1 + 0x70);
            if (*(longlong *)(lVar1 + 0x70) == 0) {
              lVar4 = lVar1 + 0x68;
            }
            iVar2 = *(int *)(lVar4 + ((longlong)
                                      ((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20) &
                                     (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
            if (iVar2 == -1) goto LAB_140e50c60;
            goto LAB_140e50c40;
          }
        }
      }
      puVar7 = (undefined8 *)0x0;
      goto LAB_140e50bb7;
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return (undefined8 *)0x0;
  while (iVar2 = *(int *)(puVar6 + 2), iVar2 != -1) {
LAB_140e50c40:
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar2 * 0x18);
    if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar2 * 0x18) == local_res20) {
      if (iVar2 != -1) goto LAB_140e50c63;
      break;
    }
  }
LAB_140e50c60:
  puVar6 = puVar7;
LAB_140e50c63:
  puVar5 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = puVar7;
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar5;
  }
LAB_140e50bb7:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return puVar7;
}



// FUNCTION 140e50ca0 FUN_140e50ca0 body=54 status=ok
// SIG undefined FUN_140e50ca0(void)

undefined4 FUN_140e50ca0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x20 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x10) == param_2) break;
    lVar1 = lVar1 + 0x20;
  }
  return *(undefined4 *)(lVar1 + 0x18);
}



// FUNCTION 140e50ce0 FUN_140e50ce0 body=121 status=ok
// SIG undefined FUN_140e50ce0(void)

undefined1
FUN_140e50ce0(longlong param_1,int param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (0 < param_2)) {
    lVar2 = FUN_140e50b20();
    if (lVar2 != 0) {
      *param_3 = *(undefined4 *)(lVar2 + 8);
      *param_4 = *(undefined8 *)(lVar2 + 0x10);
      uVar1 = *(undefined8 *)(lVar2 + 0x20);
      *param_5 = *(undefined8 *)(lVar2 + 0x18);
      param_5[1] = uVar1;
      uVar1 = *(undefined8 *)(lVar2 + 0x30);
      param_5[2] = *(undefined8 *)(lVar2 + 0x28);
      param_5[3] = uVar1;
      uVar1 = *(undefined8 *)(lVar2 + 0x40);
      param_5[4] = *(undefined8 *)(lVar2 + 0x38);
      param_5[5] = uVar1;
      uVar1 = *(undefined8 *)(lVar2 + 0x50);
      param_5[6] = *(undefined8 *)(lVar2 + 0x48);
      param_5[7] = uVar1;
      param_5[8] = *(undefined8 *)(lVar2 + 0x58);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e50d60 FUN_140e50d60 body=64 status=ok
// SIG undefined FUN_140e50d60(void)

undefined8 FUN_140e50d60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 600);
    lVar2 = (longlong)*(int *)(param_1 + 0x260) * 0x20 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        if (lVar1 == 0) {
          return 0;
        }
        return *(undefined8 *)(lVar1 + 0x18);
      }
    }
  }
  return 0;
}



// FUNCTION 140e50da0 FUN_140e50da0 body=589 status=ok
// SIG undefined FUN_140e50da0(void)

void FUN_140e50da0(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  lVar7 = 0;
  *param_2 = 0;
  *param_3 = 0;
  lVar2 = FUN_140e81500();
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_140e814c0(param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = param_1 + 0x268;
  lVar3 = FWeakObjectPtr::Get(lVar4);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x270)) && (*(longlong *)(param_1 + 0x278) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x270) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar4);
      if (lVar3 != 0) goto LAB_140e50e68;
    }
LAB_140e50e9e:
    lVar3 = lVar7;
  }
  else {
LAB_140e50e68:
    lVar4 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e50e9e;
  }
  plVar5 = (longlong *)FUN_1409ab480(lVar2,local_res18,lVar3);
  lVar4 = lVar7;
  if (*plVar5 != 0) {
    lVar6 = FUN_14144bcb0();
    for (lVar3 = *plVar5; (lVar4 = lVar7, lVar3 != 0 && (lVar4 = *plVar5, lVar3 != lVar6));
        lVar3 = *(longlong *)(lVar3 + 0x30)) {
    }
  }
  lVar3 = param_1 + 0x290;
  *param_2 = lVar4;
  lVar4 = FWeakObjectPtr::Get(lVar3);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x298)) && (*(longlong *)(param_1 + 0x2a0) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x298) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar3);
      if (lVar4 != 0) goto LAB_140e50f5d;
    }
  }
  else {
LAB_140e50f5d:
    lVar3 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e50f96;
  }
  lVar4 = lVar7;
LAB_140e50f96:
  plVar5 = (longlong *)FUN_1409ab480(lVar2,local_res20,lVar4);
  lVar2 = lVar7;
  if (*plVar5 != 0) {
    lVar3 = FUN_14144bcb0();
    for (lVar4 = *plVar5; (lVar2 = lVar7, lVar4 != 0 && (lVar2 = *plVar5, lVar4 != lVar3));
        lVar4 = *(longlong *)(lVar4 + 0x30)) {
    }
  }
  *param_3 = lVar2;
  return;
}



// FUNCTION 140e50ff0 FUN_140e50ff0 body=8 status=ok
// SIG undefined FUN_140e50ff0(void)

undefined8 FUN_140e50ff0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x4e0);
}



// FUNCTION 140e51020 GetSplineUpDir body=25 status=ok
// SIG undefined GetSplineUpDir(void)

undefined8 * USplineMeshComponent::GetSplineUpDir(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x660);
  *param_2 = *(undefined8 *)(param_1 + 0x658);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140e51040 FUN_140e51040 body=670 status=ok
// SIG undefined FUN_140e51040(void)

undefined8 FUN_140e51040(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 local_res8 [8];
  longlong local_58 [3];
  longlong *plStack_40;
  longlong local_38 [2];
  
  plVar4 = (longlong *)(param_1 + -0x528);
  lVar9 = (**(code **)(*plVar4 + 0x148))(plVar4);
  if ((lVar9 != 0) && (lVar9 = FUN_140aea640(lVar9), lVar9 != 0)) {
    if ((*(longlong **)(param_1 + -0x70) == (longlong *)0x0) ||
       (cVar8 = (**(code **)(**(longlong **)(param_1 + -0x70) + 0x20))(), cVar8 == '\0')) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      if ((*(longlong **)(param_1 + 0x10) == (longlong *)0x0) ||
         (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(), cVar8 == '\0')) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        cVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
        if (cVar8 != '\0') {
          lVar10 = FUN_1424503b0(lVar9);
          if (lVar10 == 0) {
LAB_140e51131:
            lVar10 = 0;
          }
          else {
            lVar11 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_140e51131;
          }
          local_58[0] = 0;
          local_58[1] = 0;
          puVar12 = (undefined8 *)
                    (**(code **)(**(longlong **)(param_1 + -0x70) + 8))
                              (*(longlong **)(param_1 + -0x70),local_res8);
          cVar8 = FUN_140bcac80(lVar9,*puVar12);
          puVar12 = (undefined8 *)(param_1 + 0x10);
          if (cVar8 != '\0') {
            puVar12 = (undefined8 *)(param_1 + -0x70);
          }
          local_58[2] = *puVar12;
          plVar6 = (longlong *)puVar12[1];
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          plStack_40 = plVar6;
          cVar8 = FUN_140d7a1d0(*(undefined8 *)(lVar9 + 0x478),local_58 + 2,lVar10,1,0,local_58,
                                0xbf800000);
          plVar3 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_40 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_40)(plStack_40);
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
          if (cVar8 != '\0') {
            FText::FromString(param_2,local_58);
            local_38[0] = local_58[0];
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar6 + 1;
              lVar9 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                local_38[0] = local_58[0];
                if (iVar5 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                  local_38[0] = local_58[0];
                }
              }
            }
            goto LAB_140e512b5;
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar6 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar6)(plVar6);
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
          if (local_58[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  uVar13 = FUN_14270d290(plVar4,local_38);
  FText::FromString(param_2,uVar13);
LAB_140e512b5:
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140e512e0 FUN_140e512e0 body=352 status=ok
// SIG undefined FUN_140e512e0(void)

float FUN_140e512e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = 0;
  iVar10 = 0x7fffffff;
  iVar7 = 0;
  iVar9 = 0;
  if (param_2 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x1f0);
    plVar6 = plVar5 + (longlong)*(int *)(param_1 + 0x1f8) * 2;
    for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
      if (*plVar5 == param_2) {
        iVar8 = (int)plVar5[1];
        goto LAB_140e51335;
      }
    }
    iVar8 = 0;
LAB_140e51335:
    plVar6 = *(longlong **)(param_1 + 0x1b8);
    plVar5 = plVar6 + (longlong)*(int *)(param_1 + 0x1c0) * 3;
    if (plVar6 != plVar5) {
      do {
        lVar2 = *plVar6;
        iVar3 = iVar11;
        iVar4 = iVar10;
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) == param_2)) {
          iVar1 = *(int *)(lVar2 + 0xa0);
          iVar7 = iVar7 + 1;
          if ((char)plVar6[2] == '\0') {
            iVar4 = iVar1;
            if (iVar10 <= iVar1) {
              iVar4 = iVar10;
            }
          }
          else {
            iVar9 = iVar9 + 1;
            iVar3 = iVar1;
            if (iVar1 <= iVar11) {
              iVar3 = iVar11;
            }
          }
        }
        iVar10 = iVar4;
        iVar11 = iVar3;
        plVar6 = plVar6 + 3;
      } while (plVar6 != plVar5);
      if (0 < iVar7) {
        if ((iVar10 != 0) && (iVar11 != iVar10)) {
          if (iVar10 == 0x7fffffff) {
            return 1.0;
          }
          return (((float)iVar8 - (float)iVar11) / (float)(iVar10 - iVar11) + (float)iVar9) /
                 (float)iVar7;
        }
        return 0.0;
      }
    }
  }
  return 0.0;
}



// FUNCTION 140e51440 FUN_140e51440 body=329 status=ok
// SIG undefined FUN_140e51440(void)

float * FUN_140e51440(longlong param_1,float *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar9 = 0;
  iVar8 = 0;
  uVar4 = uVar9;
  uVar6 = uVar9;
  if ((param_3 != (longlong *)0x0) && (uVar4 = (**(code **)(*param_3 + 0x148))(param_3), uVar4 != 0)
     ) {
    uVar6 = *(ulonglong *)(uVar4 + 0x148);
  }
  if (((uVar4 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) && (uVar6 != 0)) {
    plVar7 = *(longlong **)(uVar6 + 0x470);
    plVar1 = plVar7 + *(int *)(uVar6 + 0x478);
    uVar4 = uVar9;
    iVar10 = iVar8;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar5 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) &&
           (uVar9 = (ulonglong)((int)uVar9 + 1),
           *(longlong *)(lVar2 + 0x570) == *(longlong *)(param_1 + 0x28))) {
          uVar4 = (ulonglong)((int)uVar4 + 1);
        }
      }
      iVar10 = (int)uVar4;
      iVar8 = (int)uVar9;
    }
    if ((*(char *)(param_1 + 0x30) == '\0') || (iVar8 < 1)) {
      *param_2 = (float)iVar10;
    }
    else {
      *param_2 = (float)iVar10 / (float)iVar8;
    }
    *(undefined1 *)(param_2 + 2) = 0;
    return param_2;
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *(undefined1 *)(param_2 + 2) = 0xff;
  return param_2;
}



// FUNCTION 140e515c0 FUN_140e515c0 body=137 status=ok
// SIG undefined FUN_140e515c0(void)

longlong FUN_140e515c0(int param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x1118);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x1120);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((((lVar2 != 0) && (*(int *)(lVar2 + 0xa0) == param_1)) && (-1 < param_2)) &&
         (param_2 < *(int *)(lVar2 + 0x78))) {
        return (longlong)param_2 * 0x58 + *(longlong *)(lVar2 + 0x70);
      }
    }
  }
  return 0;
}



// FUNCTION 140e51650 FUN_140e51650 body=28 status=ok
// SIG undefined FUN_140e51650(void)

undefined4 FUN_140e51650(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x78))) {
    return *(undefined4 *)((longlong)param_2 * 0x58 + 0x40 + *(longlong *)(param_1 + 0x70));
  }
  return 0;
}



// FUNCTION 140e51670 FUN_140e51670 body=181 status=ok
// SIG undefined FUN_140e51670(void)

longlong FUN_140e51670(int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    plVar4 = *(longlong **)(lVar2 + 0x1118);
    plVar1 = plVar4 + *(int *)(lVar2 + 0x1120);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if ((((lVar2 != 0) && (*(int *)(lVar2 + 0xa0) == param_1)) && (-1 < param_2)) &&
         (((param_2 < *(int *)(lVar2 + 0x88) &&
           (plVar3 = (longlong *)((longlong)param_2 * 0x10 + *(longlong *)(lVar2 + 0x80)),
           -1 < param_3)) && (param_3 < (int)plVar3[1])))) {
        return (longlong)param_3 * 0x70 + *plVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140e51730 FUN_140e51730 body=56 status=ok
// SIG undefined FUN_140e51730(void)

undefined4 FUN_140e51730(longlong param_1,int param_2,int param_3)

{
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x88))) && (-1 < param_3)) {
    if (param_3 < *(int *)(*(longlong *)(param_1 + 0x80) + 8 + (longlong)param_2 * 0x10)) {
      return *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)param_2 * 0x10) + 0x40 +
              (longlong)param_3 * 0x70);
    }
  }
  return 0;
}



// FUNCTION 140e51770 FUN_140e51770 body=56 status=ok
// SIG undefined FUN_140e51770(void)

longlong * FUN_140e51770(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x1588) != 0) {
    *param_2 = *(longlong *)(param_1 + 0x1588);
    return param_2;
  }
  FUN_140c46a90();
  return param_2;
}



// FUNCTION 140e517b0 FUN_140e517b0 body=113 status=ok
// SIG undefined FUN_140e517b0(void)

void FUN_140e517b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x6d8,local_res10);
  if ((*(int *)(param_1 + 0x6e0) == 0) && (*(longlong *)(param_1 + 0x6e8) != 0)) {
    lVar2 = USafeZone::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x6e8);
    lVar3 = lVar1;
    if (lVar1 != 0) {
      while (lVar3 != lVar2) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        FUN_140e58690(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e51830 FUN_140e51830 body=354 status=ok
// SIG undefined FUN_140e51830(void)

void FUN_140e51830(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (((*(longlong **)(param_1 + 0x118) != (longlong *)0x0) &&
      (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x4a0))(), lVar5 != 0)) &&
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x4a0))(),
     *(longlong *)(lVar5 + 0x30) != 0)) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x4a0))();
    cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x768))();
    if (cVar3 == '\0') {
      FUN_1414ad7c0(param_1,param_2,param_3);
      goto LAB_140e518b5;
    }
  }
  FUN_140e45910(param_1,param_2,param_3);
LAB_140e518b5:
  local_res8 = param_2;
  local_resc = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x208,&local_res8);
  if ((*(longlong *)(param_1 + 0x118) != 0) && (iVar4 = FUN_14233f450(param_1), iVar4 == 3)) {
    plVar2 = *(longlong **)(param_1 + 0x118);
    uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar5 + 0x678);
      lVar5 = (longlong)*(int *)(lVar5 + 0x680) * 0x78 + lVar8;
      if (lVar8 != lVar5) {
        lVar9 = lVar8 + 0x60;
        do {
          cVar3 = FUN_142d52a00(lVar9);
          if (cVar3 != '\0') {
            uVar6 = FUN_142d52a20(lVar9);
            lVar7 = FArchive::operator<<(uVar6);
            uVar1 = *(undefined4 *)(lVar7 + 0x20);
            uVar6 = FUN_142d52a20(lVar9);
            uVar6 = FArchive::operator<<(uVar6);
            FUN_142d6f560(uVar6,uVar1,1);
          }
          lVar8 = lVar8 + 0x78;
          lVar9 = lVar9 + 0x78;
        } while (lVar8 != lVar5);
      }
    }
  }
  return;
}



// FUNCTION 140e519a0 FUN_140e519a0 body=809 status=ok
// SIG undefined FUN_140e519a0(void)

void FUN_140e519a0(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int local_res20 [2];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  
  iVar5 = FUN_14233f450();
  if (iVar5 != 3) {
    return;
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  FUN_140e5db40(param_1,param_3);
  *(int *)((longlong)param_1 + 0x17c) = *(int *)((longlong)param_1 + 0x17c) + (param_3 - param_2);
  if ((char)param_1[0x50] == '\0') {
    local_res20[0] = param_3 - param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x44,local_res20);
  }
  plVar2 = (longlong *)param_1[0x23];
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar6 = FUN_14145f370();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  cVar4 = (**(code **)(*plVar2 + 0x768))(plVar2);
  if (cVar4 == '\0') {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar6 != 0) {
    lVar9 = lVar6 + 0xd88;
    lVar7 = FWeakObjectPtr::Get(lVar9);
    if (lVar7 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar6 + 0xd90)) && (*(longlong *)(lVar6 + 0xd98) != 0)) {
        lVar7 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar9,lVar7);
        if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar6 + 0xd90) = DAT_1464b56f4;
        }
        lVar7 = FWeakObjectPtr::Get(lVar9);
        if (lVar7 != 0) goto LAB_140e51b23;
      }
    }
    else {
LAB_140e51b23:
      lVar6 = FUN_142e1f230();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_140e51b60;
    }
  }
  lVar7 = 0;
LAB_140e51b60:
  lVar6 = (**(code **)(*plVar2 + 0x148))(plVar2);
  if ((((lVar6 != 0) && (lVar6 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar6), lVar6 != 0)) &&
      (lVar6 = FUN_142d84360(lVar6), lVar6 != 0)) && (lVar7 != 0)) {
    FUN_142dd18b0(lVar6,plVar2,lVar7,param_3 - param_2);
  }
  if ((param_1[0x24] != 0) || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)) {
    lVar6 = param_1[0x24];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    lVar6 = *(longlong *)(lVar6 + 400);
    if (lVar6 != 0) {
      lVar7 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_142dcf3a0(plVar2,&local_48);
        if (local_48 != 0) {
          local_38 = local_48;
          plStack_30 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
            UNLOCK();
          }
          uVar8 = FUN_140bb7440(lVar6);
          FUN_140d9f870(uVar8,&local_38,0x1d);
        }
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_40 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((longlong)plStack_40 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_40 + 8))(plStack_40,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e51cd0 FUN_140e51cd0 body=775 status=ok
// SIG undefined FUN_140e51cd0(void)

void FUN_140e51cd0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 local_res10 [8];
  longlong local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  code *local_28;
  undefined4 uStack_20;
  
  lVar6 = FUN_1422312c0();
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (((longlong *)param_1[0xa7] == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*(longlong *)param_1[0xa7] + 0x20))(), cVar5 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar5 = (**(code **)(*(longlong *)param_1[0xa7] + 0x20))(), cVar5 != '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        local_48 = param_1[0xa7];
        local_40 = (longlong *)param_1[0xa8];
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        cVar5 = FUN_140d86830(*(undefined8 *)(lVar6 + 0x478),&local_48);
        plVar8 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
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
        if (cVar5 == '\0') {
          if (param_1[0xcf] == 0) {
            local_28 = FUN_140e573f0;
            uStack_20 = 0;
            plVar8 = (longlong *)
                     FUN_140722860(*(longlong *)(lVar6 + 0x478) + 0x1e0,local_res10,param_1,
                                   &local_28);
            param_1[0xcf] = *plVar8;
            local_38 = param_1[0xa7];
            local_30 = (longlong *)param_1[0xa8];
            if (local_30 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_30 + 1) = (int)local_30[1] + 1;
              UNLOCK();
            }
            FUN_140d938f0(*(undefined8 *)(lVar6 + 0x478),&local_38);
            plVar8 = local_30;
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_30 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_30)(local_30);
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
          return;
        }
      }
    }
  }
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar9,&local_58);
  do {
    while( true ) {
      if ((local_50 < 0) || (*(int *)(local_58 + 8) <= local_50)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        return;
      }
      plVar8 = (longlong *)FWeakObjectPtr::Get();
      if (plVar8 != (longlong *)0x0) break;
LAB_140e51fc8:
      local_50 = local_50 + 1;
    }
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140e51fc8;
    FUN_140d09020(plVar8,param_1);
    cVar5 = (**(code **)(*plVar8 + 0x768))();
    if ((cVar5 == '\0') || (cVar5 = (**(code **)(*param_1 + 0x728))(param_1,0), cVar5 == '\0'))
    goto LAB_140e51fc8;
    if ((*(uint *)((longlong)param_1 + 0x484) & 8) != 0) {
      FUN_1429e0d40(plVar8,param_1[0xbb],2,param_1,0,0);
      goto LAB_140e51fc8;
    }
    uVar9 = 1;
    if ((*(uint *)((longlong)param_1 + 0x484) & 2) != 0) {
      uVar9 = 0x10;
    }
    FUN_1429e0d40(plVar8,param_1[0xbb],uVar9,param_1,0,0);
    *(uint *)((longlong)param_1 + 0x484) = *(uint *)((longlong)param_1 + 0x484) | 8;
    local_50 = local_50 + 1;
  } while( true );
}



// FUNCTION 140e51ff0 FUN_140e51ff0 body=2089 status=ok
// SIG undefined FUN_140e51ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140e52631) */
/* WARNING: Removing unreachable block (ram,0x000140e5263d) */
/* WARNING: Removing unreachable block (ram,0x000140e52656) */
/* WARNING: Removing unreachable block (ram,0x000140e52666) */

void FUN_140e51ff0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  ulonglong local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_248;
  longlong *plStack_240;
  undefined4 local_238 [2];
  undefined8 local_230;
  undefined8 uStack_228;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  ulonglong local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  longlong lStack_1e8;
  longlong *local_1e0;
  undefined1 local_1d8;
  undefined **local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong local_160 [2];
  undefined1 local_150 [8];
  longlong *local_148;
  undefined **local_140 [2];
  longlong *local_130;
  longlong local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e0;
  undefined1 local_cc;
  undefined1 local_b8;
  undefined1 local_a4;
  undefined1 local_90;
  undefined1 local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  uVar13 = 0;
  local_238[0] = 0;
  local_268 = 0;
  local_248 = 0;
  plStack_240 = (longlong *)0x0;
  if ((*param_2 == 0) && (*DAT_146870968 == 0)) {
    return;
  }
  local_1a8 = param_1;
  lVar8 = FUN_1422312c0();
  local_200 = uVar13;
  if (lVar8 == 0) goto LAB_140e525cb;
  lVar9 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) goto LAB_140e525cb;
  local_1c8 = *param_2;
  local_1c0 = (longlong *)param_2[1];
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
    UNLOCK();
  }
  local_1b8 = 0;
  local_1d0 = &PTR_FUN_143f740c8;
  local_1b0 = 0;
  uVar10 = FUN_140bb7440(lVar8);
  plVar11 = (longlong *)FUN_140d80730(uVar10,local_150,&local_1d0);
  if (&local_248 != plVar11) {
    local_248 = *plVar11;
    *plVar11 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_240);
  }
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_148 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar1 = (int *)((longlong)local_148 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_148 + 8))(local_148);
      }
    }
  }
  local_1d0 = &PTR_FUN_143f740c8;
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  plVar11 = local_1c0;
  local_1d0 = &PTR_FUN_143f73d18;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1c0 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  if (local_248 == 0) {
    if (*param_2 != 0) {
      plVar11 = (longlong *)UListView::OnItemSelectionChanged(lVar8);
      plVar16 = (longlong *)*plVar11;
      plVar11 = plVar16 + (int)plVar11[1];
      if (plVar16 != plVar11) {
        do {
          if (*plVar16 == 0) {
            uStack_250 = (longlong *)0x0;
            uVar15 = (uint)uVar13 | 4;
            local_198 = (longlong *)0x0;
            local_258 = 0;
          }
          else {
            uVar15 = (uint)uVar13 | 3;
            lVar9 = FUN_142547b50(*plVar16,local_140);
            uStack_250 = *(longlong **)(lVar9 + 0x10);
            local_258 = *(longlong *)(lVar9 + 8);
            local_218 = uStack_250;
            if (uStack_250 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_250 + 1) = (int)uStack_250[1] + 1;
              UNLOCK();
            }
          }
          plVar5 = local_198;
          uVar13 = (ulonglong)uVar15;
          if (uStack_250 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_250 + 1) = (int)uStack_250[1] + 1;
            UNLOCK();
          }
          if (((uVar15 & 4) != 0) &&
             (uVar13 = (ulonglong)(uVar15 & 0xfffffffb), local_198 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_198 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_198 + 8))();
              }
            }
          }
          plVar5 = local_218;
          if (((uVar13 & 2) != 0) &&
             (uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffd), local_218 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_218 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_218)(local_218);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_218 + 8))();
              }
            }
          }
          if ((uVar13 & 1) != 0) {
            uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffe);
            local_140[0] = &PTR_FUN_143f740c8;
            if (local_128 != 0) {
              FMemory::Free();
            }
            plVar5 = local_130;
            local_140[0] = &PTR_FUN_143f73d18;
            if (local_130 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_130 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_130)(local_130);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
          }
          if (local_258 != 0) {
            local_190 = *param_2;
            local_188 = (longlong *)param_2[1];
            if (local_188 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_188 + 1) = (int)local_188[1] + 1;
              UNLOCK();
            }
            local_178 = (undefined4)local_258;
            uStack_174 = local_258._4_4_;
            uStack_170 = (undefined4)uStack_250;
            uStack_16c = uStack_250._4_4_;
            if (uStack_250 != (longlong *)0x0) {
              LOCK();
              *(int *)(uStack_250 + 1) = (int)uStack_250[1] + 1;
              UNLOCK();
            }
            uVar10 = FUN_140bb74b0(lVar8);
            local_278 = 0;
            FUN_140d7da70(uVar10,&local_210,&local_178,&local_190);
            plVar5 = (longlong *)CONCAT44(uStack_16c,uStack_170);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            plVar5 = local_188;
            if (local_188 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_188 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_188)(local_188);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            if ((local_210 != (longlong *)0x0) &&
               (lVar9 = (**(code **)(*local_210 + 0x38))(), 1 < *(int *)(lVar9 + 0x20))) {
              lVar9 = (**(code **)(*local_210 + 0x38))();
              local_268 = FUN_140be2190(lVar8,lVar9 + 0x18,local_238);
              if (local_268 != 0) {
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
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*local_208 + 8))(local_208,1);
                    }
                  }
                }
                plVar11 = uStack_250;
                if (uStack_250 != (longlong *)0x0) {
                  LOCK();
                  plVar16 = uStack_250 + 1;
                  lVar9 = *plVar16;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*uStack_250)(uStack_250);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    iVar4 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*uStack_250 + 8))(uStack_250,1);
                    }
                  }
                }
                break;
              }
            }
            plVar5 = local_208;
            if (local_208 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_208 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_208)(local_208);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
          }
          plVar5 = uStack_250;
          if (uStack_250 != (longlong *)0x0) {
            LOCK();
            plVar2 = uStack_250 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*uStack_250)(uStack_250);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*uStack_250 + 8))();
              }
            }
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar11);
        goto LAB_140e52539;
      }
    }
  }
  else {
    local_268 = FUN_140bbaee0(lVar8,*(undefined4 *)(local_248 + 0x6c));
LAB_140e52539:
    local_200 = local_268;
    if (local_268 != 0) goto LAB_140e525cb;
  }
  bVar6 = false;
  puVar14 = *(ulonglong **)(lVar8 + 0xab8);
  puVar3 = puVar14 + *(int *)(lVar8 + 0xac0);
  local_200 = local_268;
  for (; local_268 = local_200, puVar14 != puVar3; puVar14 = puVar14 + 1) {
    uVar13 = *puVar14;
    if (uVar13 == 0) {
LAB_140e52588:
      bVar7 = false;
    }
    else {
      local_168 = *(undefined8 *)(uVar13 + 0x70);
      bVar6 = true;
      FString::FString(local_160,uVar13 + 0x78);
      lVar8 = FUN_141796280(&local_168);
      if (lVar8 == 0) goto LAB_140e52588;
      bVar7 = true;
    }
    if ((bVar6) && (bVar6 = false, local_160[0] != 0)) {
      FMemory::Free();
    }
    local_200 = uVar13;
    if (bVar7) break;
    local_200 = local_268;
  }
LAB_140e525cb:
  lStack_1e8 = *param_2;
  local_1e0 = (longlong *)param_2[1];
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
    UNLOCK();
  }
  local_230._0_4_ = (undefined4)lStack_1e8;
  local_230._4_4_ = (undefined4)((ulonglong)lStack_1e8 >> 0x20);
  uStack_228._0_4_ = SUB84(local_1e0,0);
  uStack_228._4_4_ = (undefined4)((ulonglong)local_1e0 >> 0x20);
  uStack_3c = uStack_228._4_4_;
  uStack_40 = (undefined4)uStack_228;
  uStack_44 = local_230._4_4_;
  local_48 = (undefined4)local_230;
  local_1d8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  uStack_228 = 0;
  local_230 = 0;
  local_118 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_cc = 0;
  local_b8 = 0;
  local_a4 = 0;
  local_90 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  FUN_140e4a040(&local_118,&local_248);
  lVar8 = local_1a8;
  FUN_140e53440(local_1a8,&local_200);
  *(byte *)(lVar8 + 0x738) = *(byte *)(lVar8 + 0x738) | 0xc;
  FUN_140e64bc0(lVar8,&local_118);
  if (*(longlong *)(lVar8 + 0x720) != 0) {
    lVar12 = USafeZone::GetPrivateStaticClass();
    for (lVar9 = *(longlong *)(lVar8 + 0x720); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar12) {
        if (*(longlong *)(lVar8 + 0x720) != 0) {
          FUN_140e53ec0(lVar8);
        }
        break;
      }
    }
  }
  if (lStack_60 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  plVar11 = local_1e0;
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1e0 + 1;
    lVar8 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  plVar11 = plStack_240;
  if (plStack_240 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_240 + 1;
    lVar8 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_240)(plStack_240);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_240 + 8))(plStack_240,1);
      }
    }
  }
  return;
}



// FUNCTION 140e52820 FUN_140e52820 body=30 status=ok
// SIG undefined FUN_140e52820(void)

void FUN_140e52820(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2388) = param_2;
  if (*(longlong **)(param_1 + 0x22a8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e52836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x22a8) + 0x3f8))();
    return;
  }
  return;
}



// FUNCTION 140e52840 FUN_140e52840 body=249 status=ok
// SIG undefined FUN_140e52840(void)

void FUN_140e52840(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res10;
  longlong local_res18;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar5 = 0;
  local_res10 = 0;
  local_res18 = 0;
  FUN_140e50da0(param_1,&local_res10,&local_res18);
  lVar1 = local_res18;
  if (local_res10 != 0) {
    lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar4 = local_res10;
    do {
      if (lVar4 == lVar2) {
        lVar4 = lVar5;
        if (lVar1 == 0) goto LAB_140e528c1;
        lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
        lVar2 = lVar1;
        goto LAB_140e528b0;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  goto LAB_140e528e4;
  while (lVar2 = *(longlong *)(lVar2 + 0x30), lVar4 = lVar5, lVar2 != 0) {
LAB_140e528b0:
    lVar4 = lVar1;
    if (lVar2 == lVar3) break;
  }
LAB_140e528c1:
  if (lVar4 == 0) {
    lVar5 = 2;
  }
  FUN_140e62280(param_1,param_1 + 0x2c0,local_res10,lVar5);
LAB_140e528e4:
  if (lVar1 != 0) {
    lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar5 = lVar1;
    while (lVar5 != lVar4) {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 == 0) {
        return;
      }
    }
    FUN_140e62280(param_1,param_1 + 0x2e0,lVar1,2);
  }
  return;
}



// FUNCTION 140e52940 FUN_140e52940 body=59 status=ok
// SIG undefined FUN_140e52940(void)

void FUN_140e52940(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,L"GbxShiftOverlay",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  (**(code **)(*plVar2 + 0x70))(plVar2,param_1);
  return;
}



// FUNCTION 140e52980 FUN_140e52980 body=23 status=ok
// SIG undefined FUN_140e52980(void)

void FUN_140e52980(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x22a8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e5298f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x22a8) + 0x400))();
    return;
  }
  return;
}



// FUNCTION 140e529a0 FUN_140e529a0 body=1954 status=ok
// SIG undefined FUN_140e529a0(void)

void FUN_140e529a0(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  uint local_48;
  uint uStack_44;
  
  plVar9 = param_1 + 0x465;
  FUN_140e41240(plVar9);
  uVar23 = 0;
  uVar8 = uVar23;
  if (*plVar9 != 0) {
    uVar8 = FUN_140e50900();
  }
  param_1[0x223] = uVar8;
  if ((uVar8 != 0) && (param_1[0x98] != 0)) {
    if (((byte)(param_3 - 1U) < 3) || (param_3 == '\x05')) {
      lVar12 = *(longlong *)(uVar8 + 0x48);
      local_c0 = lVar12;
      lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
      if ((lVar11 == 0) ||
         (lVar11 = (**(code **)(*param_1 + 0x148))(param_1),
         (*(uint *)(lVar11 + 0x830) >> 2 & 1) == 0)) {
        plVar9 = *(longlong **)(param_1[0x223] + 0x60);
        uVar13 = (ulonglong)*(int *)(param_1[0x223] + 0x68);
        uVar8 = uVar13 & 0x1fffffffffffffff;
        if (plVar9 + uVar13 < plVar9) {
          uVar8 = uVar23;
        }
        if (uVar8 != 0) {
          do {
            lVar12 = *plVar9;
            if (lVar12 != 0) {
              lVar11 = param_1[0x98];
              iVar4 = *(int *)(lVar11 + 0xec0);
              *(int *)(lVar11 + 0xec0) = iVar4 + 1;
              if (*(int *)(lVar11 + 0xec4) < iVar4 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0xeb8,iVar4);
              }
              lVar11 = *(longlong *)(lVar11 + 0xeb8);
              *(undefined1 *)(lVar11 + (longlong)iVar4 * 0x10) = 1;
              *(longlong *)(lVar11 + 8 + (longlong)iVar4 * 0x10) = lVar12;
            }
            plVar9 = plVar9 + 1;
            uVar23 = uVar23 + 1;
            lVar12 = local_c0;
          } while (uVar23 != uVar8);
        }
      }
      else {
        puVar6 = *(undefined4 **)(param_1[0x223] + 0x50);
        iVar4 = *(int *)(param_1[0x223] + 0x58);
        if (puVar6 != puVar6 + (longlong)iVar4 * 10) {
          puVar22 = puVar6 + 1;
          do {
            local_e8 = (longlong *)CONCAT44(*puVar22,puVar22[-1]);
            uStack_e0 = CONCAT44(uStack_e0._4_4_,puVar22[1]);
            local_98 = *(undefined8 *)(puVar22 + 3);
            lStack_d0 = 0;
            uStack_c8 = 0;
            puStack_d8 = (uint *)0x0;
            FString::FString(&uStack_90,puVar22 + 5);
            FSoftObjectPath::operator=(&puStack_d8,&local_98);
            lVar12 = FWeakObjectPtr::Get(&local_e8);
            if (lVar12 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != (int)uStack_e0) && (puStack_d8 != (uint *)0x0)) {
                lVar12 = FUN_141796df0(&puStack_d8);
                FWeakObjectPtr::operator=(&local_e8,lVar12);
                if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_1464b56f4);
                }
                lVar12 = FWeakObjectPtr::Get(&local_e8);
                if (lVar12 != 0) goto LAB_140e52bf1;
              }
            }
            else {
LAB_140e52bf1:
              lVar11 = UTextureRenderTargetCube::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                lVar11 = param_1[0x98];
                iVar17 = *(int *)(lVar11 + 0xec0);
                *(int *)(lVar11 + 0xec0) = iVar17 + 1;
                if (*(int *)(lVar11 + 0xec4) < iVar17 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar11 + 0xeb8,iVar17);
                }
                lVar11 = *(longlong *)(lVar11 + 0xeb8);
                *(undefined1 *)(lVar11 + (longlong)iVar17 * 0x10) = 1;
                *(longlong *)(lVar11 + 8 + (longlong)iVar17 * 0x10) = lVar12;
              }
            }
            if (lStack_d0 != 0) {
              FMemory::Free();
            }
            puVar1 = puVar22 + 9;
            lVar12 = local_c0;
            puVar22 = puVar22 + 10;
          } while (puVar1 != puVar6 + (longlong)iVar4 * 10);
        }
      }
      plVar9 = *(longlong **)(param_1[0x223] + 0x70);
      iVar4 = *(int *)(param_1[0x223] + 0x78);
      if (plVar9 != plVar9 + (longlong)iVar4 * 3) {
        plVar18 = param_1 + 0x56;
        puVar2 = (uint *)(param_1 + 0x58);
        plVar10 = plVar9 + 1;
LAB_140e52d70:
        uVar5 = *(uint *)(param_1 + 0x5b);
        local_b8 = 0;
        uStack_b4 = 1;
        uStack_a4 = 0;
        iStack_a0 = 0;
        if (uVar5 != 0) {
          puVar21 = (uint *)param_1[0x5a];
          if ((uint *)param_1[0x5a] == (uint *)0x0) {
            puVar21 = puVar2;
          }
          uVar20 = *puVar21;
          local_b8 = 0;
          iStack_a0 = 0;
          while (uVar20 == 0) {
            lVar12 = (longlong)local_b8;
            iStack_a0 = iStack_a0 + 0x20;
            iVar17 = local_b8 + 1;
            bVar7 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
            local_b8 = iVar17;
            if (bVar7) goto LAB_140e52e20;
            uVar20 = puVar21[lVar12 + 1];
          }
          uStack_b4 = uVar20 - 1 & uVar20 ^ uVar20;
          iVar17 = 0x1f;
          if (uStack_b4 != 0) {
            for (; uStack_b4 >> iVar17 == 0; iVar17 = iVar17 + -1) {
            }
          }
          if (uStack_b4 == 0) {
            iVar17 = 0x20;
          }
          else {
            iVar17 = 0x1f - iVar17;
          }
          uStack_a4 = (iStack_a0 - iVar17) + 0x1f;
          if ((int)uVar5 < (int)uStack_a4) {
LAB_140e52e20:
            uStack_a4 = uVar5;
          }
        }
        local_a8 = 0xffffffff;
        uStack_44 = *(uint *)(param_1 + 0x5b);
        uStack_e0 = CONCAT44(uStack_b4,local_b8);
        lStack_d0 = CONCAT44(uStack_a4,0xffffffff);
        uStack_c8 = CONCAT44(uStack_9c,iStack_a0);
        local_48 = -1 << ((byte)uStack_44 & 0x1f);
        uVar20 = uStack_44 & 0xffffffe0;
        iStack_78 = local_b8;
        uStack_74 = uStack_b4;
        local_e8 = plVar18;
        puStack_d8 = puVar2;
        puStack_b0 = puVar2;
        local_70 = puVar2;
        uStack_68 = lStack_d0;
        local_60 = uStack_c8;
        local_80 = plVar18;
        uVar19 = uStack_44;
        if (uStack_44 != uVar5) {
          puVar21 = (uint *)param_1[0x5a];
          if ((uint *)param_1[0x5a] == (uint *)0x0) {
            puVar21 = puVar2;
          }
          uVar19 = puVar21[(int)uStack_44 >> 5] & local_48;
          iVar17 = (int)uStack_44 >> 5;
          while (uVar19 == 0) {
            uVar20 = uVar20 + 0x20;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar17)
            goto LAB_140e52efa;
            uVar19 = puVar21[(longlong)iVar17 + 1];
            local_48 = 0xffffffff;
            iVar17 = iVar17 + 1;
          }
          uVar19 = uVar19 - 1 & uVar19 ^ uVar19;
          iVar17 = 0x1f;
          if (uVar19 != 0) {
            for (; uVar19 >> iVar17 == 0; iVar17 = iVar17 + -1) {
            }
          }
          if (uVar19 == 0) {
            iVar17 = 0x20;
          }
          else {
            iVar17 = 0x1f - iVar17;
          }
          uStack_44 = (uVar20 - iVar17) + 0x1f;
          uVar19 = uStack_44;
          if ((int)uVar5 < (int)uStack_44) {
LAB_140e52efa:
            uStack_44 = uVar5;
            uVar19 = uVar5;
          }
        }
        do {
          if ((uStack_68._4_4_ == uVar19) && (local_70 == puVar2)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if ((bVar7) && (local_80 == plVar18)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (!bVar7) goto LAB_140e53029;
          lVar12 = *(longlong *)(*local_80 + (longlong)(int)uStack_68._4_4_ * 0x10);
          if (lVar12 != 0) {
            lVar11 = FUN_142a07000();
            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if ((bVar7) && (*(longlong *)(lVar12 + 0x18) == plVar10[-1])) goto LAB_140e52fab;
          }
          uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68 & ~uStack_74);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
        } while( true );
      }
    }
    else {
      if (param_3 != '\0') goto LAB_140e530b5;
      lVar12 = *(longlong *)(uVar8 + 0x40);
      if (*plVar9 != 0) {
        plVar9 = (longlong *)FUN_141796280(*plVar9 + 0x70);
        if (plVar9 != (longlong *)0x0) {
          plVar10 = (longlong *)FUN_1413f82e0();
          plVar18 = plVar9;
          do {
            if (plVar18 == plVar10) {
              lVar11 = plVar9[0x1f];
              if (lVar11 == 0) {
                (**(code **)(*plVar9 + 0x368))(plVar9);
                lVar11 = plVar9[0x1f];
              }
              if (*(longlong *)(lVar11 + 0x4c0) != 0) {
                FUN_1408e22e0(param_1[0x98] + 0xeb8,*(longlong *)(lVar11 + 0x4c0) + 0xeb8);
              }
              break;
            }
            plVar18 = (longlong *)plVar18[6];
          } while (plVar18 != (longlong *)0x0);
        }
      }
    }
LAB_140e53056:
    if (lVar12 != 0) {
      lVar15 = FUN_1428eccf0();
      lVar11 = lVar12;
      do {
        if (lVar11 == lVar15) {
          if (param_1[0x120] != 0) {
            lVar15 = FUN_1428eccf0();
            lVar11 = lVar12;
            goto LAB_140e53085;
          }
          break;
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
      } while (lVar11 != 0);
    }
  }
  goto LAB_140e530b5;
LAB_140e52fab:
  uStack_90 = plVar10[1];
  iVar17 = *(int *)(lVar12 + 0xec0);
  local_98 = CONCAT71(local_98._1_7_,1);
  *(int *)(lVar12 + 0xec0) = iVar17 + 1;
  if (*(int *)(lVar12 + 0xec4) < iVar17 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar12 + 0xeb8,iVar17);
  }
  puVar6 = (undefined4 *)(*(longlong *)(lVar12 + 0xeb8) + (longlong)iVar17 * 0x10);
  *puVar6 = (undefined4)local_98;
  puVar6[1] = local_98._4_4_;
  puVar6[2] = (undefined4)uStack_90;
  puVar6[3] = uStack_90._4_4_;
  if (*plVar10 != 0) {
    lVar14 = FUN_1428eccf0();
    lVar11 = *plVar10;
    for (lVar15 = lVar11; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30)) {
      if (lVar15 == lVar14) goto LAB_140e53021;
    }
  }
  lVar11 = 0;
LAB_140e53021:
  FUN_1423b4b50(lVar12,lVar11);
LAB_140e53029:
  plVar3 = plVar10 + 2;
  lVar12 = local_c0;
  plVar10 = plVar10 + 3;
  if (plVar3 == plVar9 + (longlong)iVar4 * 3) goto LAB_140e53056;
  goto LAB_140e52d70;
  while (lVar11 = *(longlong *)(lVar11 + 0x30), lVar14 = 0, lVar11 != 0) {
LAB_140e53085:
    lVar14 = lVar12;
    if (lVar11 == lVar15) break;
  }
  FUN_142cec150(param_1[0x120],param_1[0x98],lVar14);
LAB_140e530b5:
  if (((char)param_1[0x46a] != '\0') && (lVar12 = param_1[0x453], lVar12 != 0)) {
    uVar16 = FUN_140e4cbc0(param_1);
    FUN_142d271f0(lVar12,uVar16,0);
    lVar12 = param_1[0x453];
    if (lVar12 != 0) {
      uVar16 = FUN_140e4ca10(param_1);
      FUN_142d271f0(lVar12,uVar16,0);
    }
  }
  FUN_140e442f0(param_1 + 0x465,param_1);
                    /* WARNING: Could not recover jumptable at 0x000140e5313b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x1b1] + 0x120))(param_1 + 0x1b1,DAT_1468707c8);
  return;
}



// FUNCTION 140e53150 FUN_140e53150 body=515 status=ok
// SIG undefined FUN_140e53150(void)

void FUN_140e53150(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
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
  undefined1 local_48 [16];
  longlong *local_38;
  longlong *local_30;
  undefined1 local_20;
  ushort local_1e;
  
  param_1[0x4a] = (longlong)param_2;
  if (((param_2 != (longlong *)0x0) &&
      (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) && (*param_1 != 0)) {
    lVar3 = FUN_141307c20();
    for (lVar6 = *param_1; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar3) {
        if (*param_1 == 0) {
          return;
        }
        FActorSpawnParameters::FActorSpawnParameters(local_48);
        local_1e = local_1e | 2;
        local_20 = 1;
        lVar6 = 0;
        local_38 = param_2;
        local_30 = param_2;
        if (*param_1 != 0) {
          lVar4 = FUN_141307c20();
          for (lVar3 = *param_1; (lVar6 = 0, lVar3 != 0 && (lVar6 = *param_1, lVar3 != lVar4));
              lVar3 = *(longlong *)(lVar3 + 0x30)) {
          }
        }
        lVar2 = FUN_142550d00(lVar2,lVar6,&DAT_1468b5b70,local_48);
        param_1[5] = lVar2;
        if (lVar2 == 0) {
          return;
        }
        FWeakObjectPtr::operator=(&local_78,0);
        local_70 = 0;
        puVar5 = (undefined8 *)FName::FName(local_res8,L"NotifyEchoPutDownFinished",1);
        FWeakObjectPtr::operator=(&local_78,param_1[0x4a]);
        local_70 = *puVar5;
        local_58 = local_78;
        local_54 = local_74;
        local_50 = local_70;
        FUN_1430886d0(param_1[5],&local_58);
        FWeakObjectPtr::operator=(&local_68,0);
        local_60 = 0;
        puVar5 = (undefined8 *)FName::FName(local_res8,L"NotifyEchoEquipFinished",1);
        FWeakObjectPtr::operator=(&local_68,param_1[0x4a]);
        local_60 = *puVar5;
        local_58 = local_68;
        local_54 = local_64;
        local_50 = local_60;
        FUN_143088610(param_1[5],&local_58);
        FUN_14307df60(param_1[5],param_1[0x4a]);
        (**(code **)(*(longlong *)param_1[5] + 0x310))((longlong *)param_1[5],1);
        if (*(char *)(param_1[0x4a] + 0x128) == '\x03') {
          return;
        }
        cVar1 = FUN_140e53990(param_1);
        if (cVar1 != '\0') {
          return;
        }
        FUN_140e2d370(param_1[0x4a]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e53360 FUN_140e53360 body=213 status=ok
// SIG undefined FUN_140e53360(void)

void FUN_140e53360(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140e53440();
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FUN_140b9ed10(param_1 + 0x5b0,param_3);
    lVar1 = FUN_141796280(*(longlong *)(param_1 + 0x4b0) + 0x70);
    if (lVar1 != 0) {
      lVar2 = FUN_1413f82e0();
      do {
        if (lVar1 == lVar2) {
          FUN_140e65140(param_1);
          goto LAB_140e533c8;
        }
        lVar1 = *(longlong *)(lVar1 + 0x30);
      } while (lVar1 != 0);
    }
    *(byte *)(param_1 + 0x738) = *(byte *)(param_1 + 0x738) | 0x80;
  }
LAB_140e533c8:
  if ((*(char *)(param_2 + 0xb) != '\0') && (*(longlong *)(param_1 + 0x720) != 0)) {
    lVar3 = USafeZone::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x720);
    lVar2 = lVar1;
    if (lVar1 != 0) {
      while (lVar2 != lVar3) {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        if (lVar2 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        FUN_140e53ec0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140e53440 FUN_140e53440 body=596 status=ok
// SIG undefined FUN_140e53440(void)

void FUN_140e53440(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [16];
  
  bVar2 = *(byte *)(param_1 + 0x738);
  bVar5 = bVar2 & 0x7b;
  *(byte *)(param_1 + 0x738) = bVar5;
  if ((bVar2 & 8) != 0) {
    if (*(longlong *)(param_1 + 0x6f0) != 0) {
      FUN_142227350(*(longlong *)(param_1 + 0x6f0),0,1);
      *(undefined8 *)(param_1 + 0x6f0) = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x468,0)
      ;
      bVar5 = *(byte *)(param_1 + 0x738);
    }
    *(byte *)(param_1 + 0x738) = bVar5 & 0xf7;
  }
  FUN_140e41240(param_1 + 0x4b0,param_2);
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FUN_140e48390();
  }
  if (*(longlong *)(param_1 + 0x4b0) == 0) {
    if (*(longlong *)(param_1 + 0x6f0) != 0) {
      FUN_142227350(*(longlong *)(param_1 + 0x6f0),0,1);
      *(undefined8 *)(param_1 + 0x6f0) = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x468,0)
      ;
      return;
    }
  }
  else {
    lVar6 = FUN_141796280(*(longlong *)(param_1 + 0x4b0) + 0x70);
    if (lVar6 != 0) {
      lVar7 = FUN_1413f82e0();
      do {
        if (lVar6 == lVar7) {
          FUN_140e47f60(param_1);
          if (*(char *)(param_2 + 0xb) == '\0') {
            return;
          }
          *(byte *)(param_1 + 0x738) = *(byte *)(param_1 + 0x738) | 8;
          return;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    if (*(longlong *)(param_1 + 0x6f0) != 0) {
      FUN_142227350(*(longlong *)(param_1 + 0x6f0),0,1);
      *(undefined8 *)(param_1 + 0x6f0) = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x468,0)
      ;
    }
    uVar8 = FUN_140e3df00(local_18,param_1,FUN_140e469b0);
    uVar9 = thunk_FUN_1422ca050();
    FUN_1409f97d0(uVar9,&local_28,*(undefined8 *)(param_1 + 0x4b0),uVar8);
    plVar11 = (longlong *)(param_1 + 0x728);
    plVar4 = (longlong *)*plVar11;
    iVar3 = *(int *)(param_1 + 0x730);
    lVar6 = (longlong)iVar3;
    for (plVar10 = plVar4; plVar10 != plVar4 + lVar6 * 2; plVar10 = plVar10 + 2) {
      if (*plVar10 == local_28) {
        if ((int)((longlong)plVar10 - (longlong)plVar4 >> 4) != -1) goto LAB_140e53611;
        break;
      }
    }
    *(int *)(param_1 + 0x730) = iVar3 + 1;
    if (*(int *)(param_1 + 0x734) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar3);
    }
    lVar7 = *plVar11;
    *(longlong *)(lVar7 + lVar6 * 0x10) = local_28;
    *(longlong **)(lVar7 + 8 + lVar6 * 0x10) = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
LAB_140e53611:
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
  return;
}



// FUNCTION 140e536a0 FUN_140e536a0 body=13 status=ok
// SIG undefined FUN_140e536a0(void)

byte FUN_140e536a0(longlong param_1)

{
  return *(byte *)(param_1 + 0x738) >> 4 & 1;
}



// FUNCTION 140e536b0 FUN_140e536b0 body=20 status=ok
// SIG undefined FUN_140e536b0(void)

ulonglong FUN_140e536b0(longlong param_1,byte param_2)

{
  ulonglong in_RAX;
  
  if (param_2 < 3) {
    return (ulonglong)*(byte *)(param_1 + 0x1b0 + (ulonglong)param_2 * 8);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140e536d0 FUN_140e536d0 body=286 status=ok
// SIG undefined FUN_140e536d0(void)

undefined8 FUN_140e536d0(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_142d1e470();
  if (((cVar1 != '\0') && (lVar4 = *(longlong *)(param_1 + 0x118), lVar4 != 0)) && (param_2 != 0)) {
    lVar3 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(param_2 + 0x130) != 0)) {
      lVar3 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = FUN_140e24990(lVar4);
      }
      else {
        lVar3 = FUN_141404840();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          return 1;
        }
        lVar4 = *(longlong *)(lVar4 + 9000);
      }
      if (*(longlong *)(param_2 + 0x130) != lVar4) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140e53810 FUN_140e53810 body=216 status=ok
// SIG undefined FUN_140e53810(void)

undefined8 FUN_140e53810(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(longlong *)(param_1 + 0x250) == 0) ||
      (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x2c70), plVar1 == (longlong *)0x0))
     || (cVar3 = (**(code **)(*plVar1 + 0x768))(), cVar3 == '\0')) {
    lVar4 = *(longlong *)(param_1 + 0x250);
  }
  else {
    if (*(longlong *)(param_1 + 0x250) == 0) {
      return 1;
    }
    lVar4 = FUN_142ceefa0();
    if (lVar4 != 0) {
      lVar5 = FUN_141448000();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((*(uint *)(lVar4 + 0x620) & 0x800) == 0)) {
        return 0;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x250);
    if (2 < *(byte *)(lVar4 + 0xec0)) {
      return 0;
    }
  }
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1d18) != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140e538f0 FUN_140e538f0 body=28 status=ok
// SIG undefined FUN_140e538f0(void)

longlong FUN_140e538f0(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x2318) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 140e53910 FUN_140e53910 body=28 status=ok
// SIG undefined FUN_140e53910(void)

void FUN_140e53910(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dafb10(param_1 + 0x38,local_res10);
  return;
}



// FUNCTION 140e53930 FUN_140e53930 body=43 status=ok
// SIG undefined FUN_140e53930(void)

ulonglong FUN_140e53930(longlong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0x170) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x30) != '\0')) {
    uVar2 = FUN_140e181f0(lVar1,1);
    return uVar2;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 140e53960 FUN_140e53960 body=24 status=ok
// SIG undefined FUN_140e53960(void)

undefined1 FUN_140e53960(longlong param_1)

{
  if ((*(char *)(param_1 + 600) != '\0') && (*(char *)(param_1 + 0x259) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e53980 FUN_140e53980 body=13 status=ok
// SIG undefined FUN_140e53980(void)

byte FUN_140e53980(longlong param_1)

{
  return *(byte *)(param_1 + 0x738) >> 3 & 1;
}



// FUNCTION 140e53990 FUN_140e53990 body=55 status=ok
// SIG undefined FUN_140e53990(void)

undefined8 FUN_140e53990(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x250) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x2c70), plVar1 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(*plVar1 + 0x768))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e539d0 FUN_140e539d0 body=21 status=ok
// SIG undefined FUN_140e539d0(void)

undefined1 FUN_140e539d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x22a8) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x22a8) + 0x208);
  }
  return 0;
}



// FUNCTION 140e53a00 FUN_140e53a00 body=680 status=ok
// SIG undefined FUN_140e53a00(void)

bool FUN_140e53a00(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar4 = (**(code **)(*param_1 + 0x148))();
  local_res8 = FUN_140aab5e0(uVar4);
  lVar5 = FUN_1422312c0(param_1);
  if (lVar5 == 0) {
LAB_140e53a6b:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e53a6b;
  }
  if (param_2 == (longlong *)0x0) {
    return false;
  }
  if (local_res8 == 0) {
    return false;
  }
  if (lVar5 == 0) {
    return false;
  }
  if (((longlong *)param_1[0x23] == (longlong *)0x0) ||
     (plVar7 = (longlong *)(**(code **)(*(longlong *)param_1[0x23] + 0x668))(),
     plVar7 == (longlong *)0x0)) {
LAB_140e53ae3:
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e53ae3;
  }
  cVar2 = FUN_140bc9f60(lVar5);
  if (cVar2 != '\0') {
    local_res10 = &local_res8;
    local_res20 = 0;
    lVar5 = FUN_140e41350(&local_res10,param_1,plVar7,&local_res20);
    local_res18 = 0;
    uVar4 = (**(code **)(*param_2 + 0x680))(param_2);
    lVar6 = FUN_140e41350(&local_res10,uVar4,param_2,&local_res18);
    if (lVar5 == 0) {
      return false;
    }
    if (lVar5 != lVar6) {
      return false;
    }
    cVar2 = UDirectionalLightComponent::GetAtmosphereSunLightIndex(lVar5);
    if (cVar2 != '\x01') {
      return false;
    }
    lVar5 = FUN_142df3510(local_res18);
    if (lVar5 == 0) {
      return false;
    }
    iVar3 = FUN_142dec940(lVar5,local_res20);
    return iVar3 == 2;
  }
  if ((plVar7 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar7 + 0x678))(plVar7), lVar5 == 0)) {
LAB_140e53b44:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e53b44;
  }
  lVar6 = (**(code **)(*param_2 + 0x678))(param_2);
  if (lVar6 != 0) {
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e53b92;
  }
  lVar6 = 0;
LAB_140e53b92:
  lVar8 = FUN_140aab960(local_res8,lVar5);
  lVar9 = FUN_140aab960(local_res8,lVar6);
  if ((((lVar8 != 0) && (lVar8 == lVar9)) && (cVar2 = FUN_140aac180(lVar8), cVar2 == '\x01')) &&
     ((lVar5 != 0 && (cVar2 = FUN_140e279c0(lVar5,lVar6), cVar2 == '\0')))) {
    return true;
  }
  return false;
}



// FUNCTION 140e53cb0 FUN_140e53cb0 body=35 status=ok
// SIG undefined FUN_140e53cb0(void)

undefined1 FUN_140e53cb0(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x4b0) == 0) || (*(longlong *)(param_1 + 0x6f0) != 0)) &&
     (*(int *)(param_1 + 0x6e0) < 1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140e53ce0 FUN_140e53ce0 body=159 status=ok
// SIG undefined FUN_140e53ce0(void)

ulonglong FUN_140e53ce0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *in_RAX;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x1b8);
    in_RAX = plVar2 + (longlong)*(int *)(param_1 + 0x1c0) * 3;
    for (plVar5 = plVar2; plVar5 != in_RAX; plVar5 = plVar5 + 3) {
      if (*plVar5 == param_2) {
        lVar4 = ((longlong)plVar5 - (longlong)plVar2) / 6 +
                ((longlong)plVar5 - (longlong)plVar2 >> 0x3f);
        in_RAX = (longlong *)0x0;
        uVar3 = (int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f);
        goto LAB_140e53d19;
      }
    }
  }
  uVar3 = 0xffffffff;
LAB_140e53d19:
  if (*(int *)(param_1 + 0x1e0) <= (int)uVar3) {
    return (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  lVar4 = *(longlong *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    lVar4 = param_1 + 0x1c8;
  }
  uVar1 = *(uint *)(lVar4 + (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
  return (ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (uVar3 & 0x1f) & 1) != 0);
}



// FUNCTION 140e53d80 FUN_140e53d80 body=82 status=ok
// SIG undefined FUN_140e53d80(void)

undefined8 FUN_140e53d80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x920);
  if (lVar1 != 0) {
    uVar3 = UTextBlock::GetPrivateStaticClass();
    cVar2 = FUN_142c736c0(lVar1,uVar3);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e53de0 FUN_140e53de0 body=25 status=ok
// SIG undefined FUN_140e53de0(void)

undefined1 FUN_140e53de0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x4c8) != 0) && ((*(byte *)(param_1 + 0x738) & 4) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e53e00 FUN_140e53e00 body=13 status=ok
// SIG undefined FUN_140e53e00(void)

byte FUN_140e53e00(longlong param_1)

{
  return *(byte *)(param_1 + 0x738) >> 2 & 1;
}



// FUNCTION 140e53e10 FUN_140e53e10 body=64 status=ok
// SIG undefined FUN_140e53e10(void)

undefined8 FUN_140e53e10(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x538) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x20))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x20))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e53e50 FUN_140e53e50 body=101 status=ok
// SIG undefined FUN_140e53e50(void)

void FUN_140e53e50(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar1 = FUN_1407c3030(param_1 + 0x278);
  FUN_142dafbc0(param_1 + 0x278,&local_res10);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x278);
    if (cVar1 != '\0') {
      FUN_1414a3020(param_1,1);
    }
  }
  return;
}



// FUNCTION 140e53ec0 FUN_140e53ec0 body=186 status=ok
// SIG undefined FUN_140e53ec0(void)

void FUN_140e53ec0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    lVar2 = USafeZone::GetPrivateStaticClass();
    lVar3 = param_2;
    while (lVar3 != lVar2) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      if (lVar3 == 0) {
        return;
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x6f0);
    *(longlong *)(param_1 + 0x6e8) = param_2;
    if (plVar4 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x6e0) < 1) {
        FUN_140e58690(param_1);
      }
      else {
        (**(code **)(*plVar4 + 0x310))(plVar4,1);
        plVar4 = *(longlong **)(param_1 + 0x6f8);
        plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x700) * 0xc;
        if (plVar4 != plVar5) {
          do {
            plVar1 = (longlong *)*plVar4;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x310))(plVar1,1);
            }
            plVar4 = plVar4 + 0xc;
          } while (plVar4 != plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140e53f80 FUN_140e53f80 body=95 status=ok
// SIG undefined FUN_140e53f80(void)

void FUN_140e53f80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x710) != 0) {
    lVar2 = USafeZone::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x710);
    lVar3 = lVar1;
    if (lVar1 != 0) {
      while (lVar3 != lVar2) {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          return;
        }
      }
      if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x738) & 8) == 0)) {
        FUN_140e53ec0(param_1,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e53fe0 MarkItemDirty body=80 status=ok
// SIG undefined MarkItemDirty(void)

void FFastArraySerializer::MarkItemDirty(longlong param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == -1) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *param_2 = *(int *)(param_1 + 0x50);
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == -1) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x50) = iVar1;
  }
  param_2[1] = param_2[1] + 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  if (*(int *)(param_1 + 0x54) == -1) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}



// FUNCTION 140e54030 FUN_140e54030 body=78 status=ok
// SIG undefined FUN_140e54030(void)

void FUN_140e54030(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140e50970();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*(longlong *)(lVar1 + 0xd80) + 0x18))();
  }
  if (((param_2 != 0) && (param_3 != 0)) && (lVar2 != 0)) {
    FUN_142fe44f0(lVar2,param_2,param_3);
  }
  return;
}



// FUNCTION 140e54080 FUN_140e54080 body=2820 status=ok
// SIG undefined FUN_140e54080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e54080(longlong param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  undefined8 local_res8;
  longlong *local_28;
  int local_20;
  
  FUN_140cbd560();
  pwVar8 = (wchar_t *)FUN_142269f40(param_1);
  pwVar15 = (wchar_t *)0x0;
  if (pwVar8 == (wchar_t *)0x0) {
LAB_140e540e1:
    pwVar8 = pwVar15;
  }
  else {
    lVar9 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140e540e1;
  }
  *(wchar_t **)(param_1 + 0xae8) = pwVar8;
  if (*(longlong *)(param_1 + 0xaf8) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x970) = 1;
  plVar11 = (longlong *)(param_1 + 0xb00);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xaf8) + 0x30);
  uVar14 = (ulonglong)uVar1;
  *(undefined4 *)(param_1 + 0xb08) = 0;
  if (*(uint *)(param_1 + 0xb0c) != uVar1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar11,uVar1);
  }
  if (0 < (int)uVar1) {
    do {
      iVar2 = *(int *)(param_1 + 0xb08);
      *(int *)(param_1 + 0xb08) = iVar2 + 1;
      if (*(int *)(param_1 + 0xb0c) < iVar2 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar11,iVar2);
      }
      uVar12 = uRam00000001468b5b78;
      puVar13 = (undefined8 *)((longlong)iVar2 * 0x30 + *plVar11);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = _DAT_1468b5b70;
        puVar13[1] = uVar12;
        uVar12 = uRam00000001468b5b88;
        puVar13[2] = _DAT_1468b5b80;
        puVar13[3] = uVar12;
        uVar7 = uRam00000001468b5b9c;
        uVar6 = uRam00000001468b5b98;
        uVar5 = uRam00000001468b5b94;
        *(undefined4 *)(puVar13 + 4) = _DAT_1468b5b90;
        *(undefined4 *)((longlong)puVar13 + 0x24) = uVar5;
        *(undefined4 *)(puVar13 + 5) = uVar6;
        *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar7;
      }
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UOakPlayerAnimInstance::OnWeaponReloadStarted",L"::")
    ;
    pwVar8 = pwVar15;
    while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar8 = pwVar4;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    FUN_14074ba20(*(longlong *)(param_1 + 0xae8) + 0x1060,param_1,&LAB_140e4171c,local_res8);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UOakPlayerAnimInstance::OnWeaponReloadEnded",L"::");
    while (pwVar10 = pwVar8, pwVar10 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
      pwVar15 = pwVar10;
    }
    FName::FName(&local_res8,pwVar15 + 2,1);
    FUN_14074ba20(*(longlong *)(param_1 + 0xae8) + 0x1070,param_1,&LAB_140dafaf8,local_res8);
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46730;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xc78),&local_28);
  if (local_20 == 0) {
LAB_140e54308:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e54308;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46760;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xc80),&local_28);
  if (local_20 == 0) {
LAB_140e543aa:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e543aa;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46790;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xc88),&local_28);
  if (local_20 == 0) {
LAB_140e5444c:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e5444c;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46540;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xc94),&local_28);
  if (local_20 == 0) {
LAB_140e544ee:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e544ee;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46590;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xca0),&local_28);
  if (local_20 == 0) {
LAB_140e54590:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e54590;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e465e0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xca4),&local_28);
  if (local_20 == 0) {
LAB_140e54632:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e54632;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46620;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xcac),&local_28);
  if (local_20 == 0) {
LAB_140e546d4:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e546d4;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e466a0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xcb4),&local_28);
  if (local_20 == 0) {
LAB_140e54776:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e54776;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46650;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xcb8),&local_28);
  if (local_20 == 0) {
LAB_140e54818:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e54818;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e466f0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xcbc),&local_28);
  if (local_20 == 0) {
LAB_140e548ba:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e548ba;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46810;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xcc8),&local_28);
  if (local_20 == 0) {
LAB_140e5495c:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e5495c;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e46860;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xcd0),&local_28);
  if (local_20 == 0) {
LAB_140e549fe:
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  else if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
    goto LAB_140e549fe;
  }
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e468b0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xcd8),&local_28);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_140e54aad;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_140e54aad:
  local_28 = (longlong *)0x0;
  plVar11 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    *plVar11 = (longlong)&PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(plVar11 + 1,param_1);
    plVar11[2] = (longlong)FUN_140e468e0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar11[4] = lVar9;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xce0),&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  puVar13 = (undefined8 *)operator_new(0x28,&local_28);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_FUN_14433a710;
    FWeakObjectPtr::operator=(puVar13 + 1,param_1);
    puVar13[2] = FUN_140e467c0;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar13[4] = uVar12;
  }
  FUN_142280120(param_1,*(undefined4 *)(param_1 + 0xcec),&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  return;
}



// FUNCTION 140e54b90 FUN_140e54b90 body=384 status=ok
// SIG undefined FUN_140e54b90(void)

void FUN_140e54b90(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  
  FUN_140cbdc40();
  if (*(longlong **)(param_1 + 0x950) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x950) + 0xc28))();
    bVar6 = (cVar5 << 5 ^ *(byte *)(param_1 + 0xb90)) & 0x20 ^ *(byte *)(param_1 + 0xb90);
    bVar6 = (bVar6 << 2 ^ bVar6) & 0x7f ^ bVar6 << 2;
    *(byte *)(param_1 + 0xb90) = (bVar6 >> 1 ^ bVar6) & 0x40 ^ bVar6;
    if (*(longlong *)(param_1 + 0xaf8) != 0) {
      FUN_140e63070(param_1,param_2);
      lVar4 = *(longlong *)(param_1 + 0xae8);
      if ((lVar4 != 0) && ((*(byte *)(param_1 + 0xb90) & 0x20) != 0)) {
        uVar2 = *(undefined8 *)(lVar4 + 0x28d8);
        fVar3 = *(float *)(lVar4 + 0x28e0);
        *(float *)(param_1 + 0xb1c) = (float)uVar2 + *(float *)(param_1 + 0xb1c);
        *(float *)(param_1 + 0xb20) =
             (float)((ulonglong)uVar2 >> 0x20) + *(float *)(param_1 + 0xb20);
        *(float *)(param_1 + 0xb24) = fVar3 + *(float *)(param_1 + 0xb24);
        lVar4 = *(longlong *)(param_1 + 0xae8);
        *(byte *)(param_1 + 0xb91) =
             *(byte *)(param_1 + 0xb91) ^
             (*(byte *)(lVar4 + 0x2721) ^ *(byte *)(param_1 + 0xb91)) & 1;
        bVar6 = (*(char *)(lVar4 + 0x28a0) * '\x02' ^ *(byte *)(param_1 + 0xb91)) & 2 ^
                *(byte *)(param_1 + 0xb91);
        *(byte *)(param_1 + 0xb91) = bVar6;
        bVar6 = (*(char *)(lVar4 + 0x28a8) << 2 ^ bVar6) & 4 ^ bVar6;
        *(byte *)(param_1 + 0xb91) = bVar6;
        *(byte *)(param_1 + 0xb91) = (*(char *)(lVar4 + 0x28b0) << 3 ^ bVar6) & 8 ^ bVar6;
        uVar1 = *(undefined4 *)(lVar4 + 0x28bc);
        *(undefined4 *)(param_1 + 0xb94) = *(undefined4 *)(lVar4 + 0x28b8);
        *(undefined4 *)(param_1 + 0xb98) = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 140e54d10 FUN_140e54d10 body=203 status=ok
// SIG undefined FUN_140e54d10(void)

undefined8 FUN_140e54d10(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x18,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x18,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1,0);
  }
  iVar2 = *(int *)(param_1 + 0x18) + 0x1f;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = param_1;
  }
  (**(code **)(*param_2 + 0x50))
            (param_2,lVar3,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  *param_4 = 1;
  return 1;
}



// FUNCTION 140e54de0 FUN_140e54de0 body=95 status=ok
// SIG undefined FUN_140e54de0(void)

void FUN_140e54de0(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  FUN_140e5e2f0(param_1,1,2);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    cVar1 = FUN_140e27710();
    FUN_140e36bd0(*(undefined8 *)(param_1 + 0x28),1);
    cVar2 = FUN_140e27710(*(undefined8 *)(param_1 + 0x28));
    if (cVar1 != cVar2) {
      FUN_140e60780(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140e54e40 FUN_140e54e40 body=161 status=ok
// SIG undefined FUN_140e54e40(void)

void FUN_140e54e40(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((*(int *)(param_1 + 0x620) != 0) && (*(longlong **)(param_1 + 0x618) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x618) + 0x18))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_140e54e6e;
    }
  }
  bVar1 = false;
LAB_140e54e6e:
  if (bVar1) {
    if (*(int *)(param_1 + 0x620) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x618);
    }
    (**(code **)(*plVar5 + 0x40))();
  }
  lVar3 = FUN_1422312c0(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      FUN_140bce120(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140e54ef0 FUN_140e54ef0 body=412 status=ok
// SIG undefined FUN_140e54ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e54ef0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)FUN_140e5a0a0;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_70 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    FUN_142880af0(uVar3,&local_88);
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
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140e55090 FUN_140e55090 body=149 status=ok
// SIG undefined FUN_140e55090(void)

void FUN_140e55090(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  longlong local_10;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
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
      FUN_140bce120(lVar2);
      local_18 = *(undefined8 *)(param_1 + 0x4b8);
      local_10 = *(longlong *)(param_1 + 0x4c0);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      FUN_140beada0(lVar2,&local_18,*(undefined1 *)(param_1 + 0x5f4));
    }
  }
  return;
}



// FUNCTION 140e55130 FUN_140e55130 body=711 status=ok
// SIG undefined FUN_140e55130(void)

void FUN_140e55130(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  ulonglong local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  bVar11 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) goto LAB_140e55335;
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = *(longlong *)(lVar7 + 400);
  if (lVar7 == 0) goto LAB_140e55335;
  lVar8 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_140e55335;
  if (((longlong *)param_1[0x97] == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[0x97] + 0x20))(), cVar6 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_140e55335;
  local_res8 = 0;
  plVar9 = (longlong *)FUN_1404b0000(&local_res8);
  if (plVar9 == (longlong *)0x0) goto LAB_140e55335;
  plVar3 = (longlong *)param_1[0x98];
  plVar4 = (longlong *)param_1[0x97];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  cVar6 = (**(code **)(*plVar4 + 0x20))();
  local_58 = SUB84(plVar4,0);
  uStack_54 = (undefined4)((ulonglong)plVar4 >> 0x20);
  uStack_50 = SUB84(plVar3,0);
  uStack_4c = (undefined4)((ulonglong)plVar3 >> 0x20);
  if (cVar6 == '\0') {
LAB_140e5526f:
    bVar5 = false;
  }
  else {
    bVar11 = true;
    local_48 = local_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    cVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9,&local_48);
    if (cVar6 == '\0') goto LAB_140e5526f;
    bVar5 = true;
  }
  if ((bVar11) && (plVar9 = (longlong *)CONCAT44(uStack_3c,uStack_40), plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plVar9 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (bVar5) {
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    uVar10 = FUN_140bb7440(lVar7);
    FUN_140d9f870(uVar10,&local_38,7);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
LAB_140e55335:
  local_res14 = 1;
  if ((int)param_1[0xad] != 1) {
    uVar10 = (**(code **)(*param_1 + 0x668))(param_1);
    FUN_142d7f490(uVar10,L"player_level_change");
    local_res14 = (undefined4)param_1[0xad];
  }
  local_res10 = (undefined4)param_1[0xc9];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xc5,&local_res10);
  *(int *)(param_1 + 0xc9) = (int)param_1[0xad];
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      FUN_140bce120(lVar7);
      return;
    }
  }
  return;
}



// FUNCTION 140e55400 FUN_140e55400 body=463 status=ok
// SIG undefined FUN_140e55400(void)

void FUN_140e55400(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  code *local_28;
  undefined4 uStack_20;
  
  lVar6 = FUN_1422312c0();
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_140bce120(lVar6);
      local_48 = param_1[0xa7];
      local_40 = (longlong *)param_1[0xa8];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_140d86830(*(undefined8 *)(lVar6 + 0x478),&local_48);
      plVar8 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
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
      if ((cVar5 == '\0') && (param_1[0xcf] == 0)) {
        local_28 = FUN_140e573f0;
        uStack_20 = 0;
        plVar8 = (longlong *)
                 FUN_140722860(*(longlong *)(lVar6 + 0x478) + 0x1e0,local_res8,param_1,&local_28);
        param_1[0xcf] = *plVar8;
        local_38 = param_1[0xa7];
        local_30 = (longlong *)param_1[0xa8];
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        FUN_140d938f0(*(undefined8 *)(lVar6 + 0x478),&local_38);
        plVar8 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_30)(local_30);
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
    }
  }
  (**(code **)(*param_1 + 0x7a8))(param_1);
  FUN_140e42500(param_1);
  return;
}



// FUNCTION 140e555d0 FUN_140e555d0 body=180 status=ok
// SIG undefined FUN_140e555d0(void)

void FUN_140e555d0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e5561d;
  }
  param_2 = 0;
LAB_140e5561d:
  *(longlong *)(param_1 + 0x298) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x118);
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
    if (bVar1) {
      uVar4 = FUN_140cffa10(lVar2);
      FUN_140e5e020(param_1,uVar4);
    }
  }
  return;
}



// FUNCTION 140e55690 FUN_140e55690 body=836 status=ok
// SIG undefined FUN_140e55690(void)

void FUN_140e55690(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint in_stack_ffffffffffffff90;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar8 = *(longlong **)(param_1 + 0x250);
  lVar6 = 0;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0xb88))(plVar8,DAT_146870860);
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x250) + 0xd88);
    (**(code **)(*plVar8 + 0x80))(plVar8,DAT_146870860,0);
    lVar6 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(lVar6 + 0xe68) != 0) {
      FUN_142dbb5d0(*(longlong *)(lVar6 + 0xe68) + 0x2990,&DAT_146870860);
      lVar6 = *(longlong *)(param_1 + 0x250);
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  if ((lVar6 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_140e55971;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x310))(*(longlong **)(param_1 + 0x28),1);
  lVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x250) + 0xd88) + 0x170))();
  if (lVar6 == 0) goto LAB_140e55971;
  FUN_140e215b0(*(undefined8 *)(param_1 + 0x28),&local_58);
  if (local_58 != 0) {
    local_48 = local_58;
    plStack_40 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
    }
    FUN_142c84750(*(undefined8 *)(*(longlong *)(param_1 + 0x250) + 0x920),&local_48);
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_50 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0xc08))();
  plVar8 = (longlong *)FUN_140c46a10(*(undefined8 *)(param_1 + 0x250),0);
  if (plVar8 == (longlong *)0x0) {
LAB_140e55854:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar7 = FUN_14149b100();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140e55854;
  }
  if ((cVar5 == '\0') &&
     ((plVar8 == (longlong *)0x0 || (cVar5 = (**(code **)(*plVar8 + 0x888))(plVar8), cVar5 == '\0'))
     )) {
    cVar5 = FUN_14304e8e0(lVar6,0x10,plVar8);
    uVar9 = 3;
    if (cVar5 != '\0') {
      uVar9 = 0x10;
    }
    if (plVar8 == (longlong *)0x0) {
      FUN_143057c50(lVar6,local_28,uVar9,0,0x3f800000,0,0,0);
      plVar8 = local_20;
    }
    else {
      uVar10 = FUN_141270170(plVar8);
      (**(code **)(*plVar8 + 0x990))
                (plVar8,local_38,uVar9,0x3f800000,uVar10,in_stack_ffffffffffffff90 & 0xffffff00,0);
      plVar8 = local_30;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
LAB_140e55971:
  if (*(longlong *)(param_1 + 0x250) != 0) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x250) + 0xd88);
    (**(code **)(*plVar8 + 0x108))(plVar8,DAT_146870860,0xffffffff);
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  FUN_140e4ff00(param_1,param_1 + 0x1e0,param_1 + 0x1e8);
  return;
}



// FUNCTION 140e559e0 FUN_140e559e0 body=180 status=ok
// SIG undefined FUN_140e559e0(void)

void FUN_140e559e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    bVar5 = false;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(int *)(lVar1 + 0x18c) = *(int *)(lVar1 + 0x18c) + 1;
    iVar8 = *(int *)(lVar1 + 0x18c);
    iVar7 = *(int *)(lVar1 + 0x180) + -1;
    lVar10 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar9 = lVar10 << 4;
      bVar5 = false;
      do {
        lVar3 = *(longlong *)(lVar1 + 0x178);
        if ((*(int *)(lVar9 + 8 + lVar3) == 0) ||
           (plVar4 = *(longlong **)(lVar9 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_140e55a50:
          bVar5 = true;
        }
        else {
          cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar2);
          if (cVar6 == '\0') goto LAB_140e55a50;
        }
        lVar9 = lVar9 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar8 = *(int *)(lVar1 + 0x18c);
    }
    *(int *)(lVar1 + 0x18c) = iVar8 + -1;
    if (bVar5) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0x178),0);
      return;
    }
  }
  return;
}



// FUNCTION 140e55aa0 FUN_140e55aa0 body=255 status=ok
// SIG undefined FUN_140e55aa0(void)

void FUN_140e55aa0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int local_18 [4];
  
  iVar2 = FUN_142340f30();
  if (((iVar2 != 3) && (0 < (int)param_1[0x2f])) && (0 < param_2)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 200);
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x260))(param_1);
      lVar5 = 0x7fffffffffffffff - param_1[0x30];
      if (0 < lVar5) {
        lVar4 = (longlong)param_2;
        if (lVar5 <= param_2) {
          lVar4 = lVar5;
        }
        param_1[0x30] = lVar4 + param_1[0x30];
        iVar2 = (**(code **)(*param_1 + 0x468))(param_1);
        iVar3 = FUN_140a2f190(lVar1,param_1[0x30]);
        if (iVar2 < iVar3) {
          FUN_140e519a0(param_1,iVar2,iVar3);
        }
        if ((char)param_1[0x50] == '\0') {
          local_18[0] = param_2;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x46,local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e55ba0 FUN_140e55ba0 body=69 status=ok
// SIG undefined FUN_140e55ba0(void)

void FUN_140e55ba0(longlong param_1,undefined8 param_2)

{
  if (DAT_14686b368 == '\0') {
    FUN_140c184b0(&DAT_14686b360);
  }
  FUN_140c1ba70(DAT_14686b360,*(undefined8 *)(param_1 + 0x1a8),param_2);
  return;
}



// FUNCTION 140e55bf0 FUN_140e55bf0 body=8 status=ok
// SIG undefined FUN_140e55bf0(void)

void FUN_140e55bf0(longlong param_1)

{
  *(byte *)(param_1 + 0x1c8) = *(byte *)(param_1 + 0x1c8) & 0xf8;
  return;
}



// FUNCTION 140e55c00 FUN_140e55c00 body=273 status=ok
// SIG undefined FUN_140e55c00(void)

void FUN_140e55c00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res18 [8];
  
  FUN_1423437a0();
  FUN_140e46e80(param_1);
  iVar3 = FUN_142340f30(param_1);
  if ((iVar3 != 3) && (*(longlong *)(param_1 + 0x290) != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 200);
    plVar4 = (longlong *)FUN_140e505b0(param_1);
    if (plVar4 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      uVar5 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    }
    if ((((lVar1 != 0) && (plVar4 != (longlong *)0x0)) && (lVar6 != 0)) &&
       (plVar4 = (longlong *)FUN_140a32c90(lVar1,local_res18), *plVar4 != 0)) {
      lVar7 = FUN_1430f1090();
      for (lVar2 = *plVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar7) {
          if (*plVar4 == 0) {
            return;
          }
          puVar8 = (undefined8 *)FUN_140a32c90(lVar1,local_res18);
          FUN_1430ede10(lVar6,*puVar8);
          *(undefined8 *)(param_1 + 0x290) = 0;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140e55d20 FUN_140e55d20 body=201 status=ok
// SIG undefined FUN_140e55d20(void)

void FUN_140e55d20(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  puVar6 = (undefined8 *)FName::FName(local_res8,L"GbxShiftOverlay",1);
  plVar7 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar6);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7,DAT_146870818);
  }
  plVar7 = (longlong *)FName::FName(local_res18,&DAT_14459bc4c,1);
  lVar4 = *(longlong *)(param_1 + 0x1e8);
  lVar5 = *plVar7;
  if (lVar4 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x1f0);
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
  return;
}



// FUNCTION 140e55df0 FUN_140e55df0 body=72 status=ok
// SIG undefined FUN_140e55df0(void)

void FUN_140e55df0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_1[0x454] != 0) && (param_1[0x98] != 0)) {
    FUN_142cac7e0();
  }
  uVar1 = UUGLoadoutBarUW::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x455] = lVar2;
  return;
}



// FUNCTION 140e55e40 FUN_140e55e40 body=23 status=ok
// SIG undefined FUN_140e55e40(void)

void FUN_140e55e40(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x22a8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e55e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x22a8) + 0x418))();
    return;
  }
  return;
}



// FUNCTION 140e55e60 FUN_140e55e60 body=196 status=ok
// SIG undefined FUN_140e55e60(void)

void FUN_140e55e60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    lVar2 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (lVar1 = *(longlong *)(param_1 + 0x2c0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if ((*(longlong *)(param_1 + 0x2c0) != 0) && (*(char *)(param_1 + 0x2d0) != '\0')) {
          FUN_140e44590(param_1,param_1 + 0x2c0,1);
        }
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    lVar3 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    lVar2 = lVar1;
    if (lVar1 != 0) {
      while (lVar2 != lVar3) {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        if (lVar2 == 0) {
          return;
        }
      }
      if ((lVar1 != 0) && (*(char *)(param_1 + 0x2f0) != '\0')) {
        FUN_140e44590(param_1,param_1 + 0x2e0,1);
      }
    }
  }
  return;
}



// FUNCTION 140e55f30 FUN_140e55f30 body=316 status=ok
// SIG undefined FUN_140e55f30(void)

void FUN_140e55f30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [49];
  undefined1 local_a7;
  
  if ((*(char *)(param_1 + 0x2320) != '\0') &&
     (plVar4 = *(longlong **)(param_1 + 0x2318), param_2 == plVar4)) {
    *(undefined1 *)(param_1 + 0x2320) = 0;
    if (plVar4 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar4 + 0x290))(plVar4,0);
      if (cVar6 == '\0') {
        *(undefined1 *)(param_1 + 0x2320) = 1;
      }
      else {
        FUN_142c62180(local_d8);
        local_a7 = 2;
        FUN_142d22270(plVar4,local_e8,param_1,local_d8,0);
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e0 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar2 = (int *)((longlong)local_e0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_e0 + 8))(local_e0,1);
            }
          }
        }
        FUN_142c63c50(local_d8);
      }
    }
    if (*(longlong **)(param_1 + 0x2318) != plVar4) {
      if (*(longlong *)(param_1 + 0x2298) != 0) {
        if (*(longlong **)(param_1 + 0x2318) != (longlong *)0x0) {
          FUN_142d26ae0();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_142d271f0(*(undefined8 *)(param_1 + 0x2298),plVar4,0);
        }
      }
      *(longlong **)(param_1 + 0x2318) = plVar4;
    }
  }
  return;
}



// FUNCTION 140e56070 FUN_140e56070 body=541 status=ok
// SIG undefined FUN_140e56070(void)

void FUN_140e56070(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) goto LAB_140e5627b;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar4 == 0) goto LAB_140e5627b;
  lVar6 = lVar4 + 0xd10;
  lVar2 = FWeakObjectPtr::Get(lVar6);
  lVar5 = 0;
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar4 + 0xd18)) || (*(longlong *)(lVar4 + 0xd20) == 0))
    goto LAB_140e5627b;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0xd18) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar6);
    if (lVar2 == 0) goto LAB_140e5627b;
  }
  lVar3 = FUN_142e1f230();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140e5627b;
  lVar2 = FWeakObjectPtr::Get(lVar6);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar4 + 0xd18)) && (*(longlong *)(lVar4 + 0xd20) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar4 + 0xd18) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar6);
      if (lVar2 != 0) goto LAB_140e561e5;
    }
LAB_140e5621b:
    lVar2 = lVar5;
  }
  else {
LAB_140e561e5:
    lVar4 = FUN_142e1f230();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e5621b;
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  lVar4 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar4);
  if (lVar4 != 0) {
    lVar5 = FUN_142d84360(lVar4);
  }
  if ((lVar2 != 0) && (lVar5 != 0)) {
    FUN_142dd18b0(lVar5,*(undefined8 *)(param_1 + 0x1a8),lVar2,1);
  }
LAB_140e5627b:
  FUN_1414b12f0(param_1,param_2);
  return;
}



// FUNCTION 140e56290 FUN_140e56290 body=23 status=ok
// SIG undefined FUN_140e56290(void)

void FUN_140e56290(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x22a8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e5629f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x22a8) + 0x420))();
    return;
  }
  return;
}



// FUNCTION 140e562b0 FUN_140e562b0 body=49 status=ok
// SIG undefined FUN_140e562b0(void)

void FUN_140e562b0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140e46910(param_1,param_1 + 0x2c0);
  FUN_140e46910(param_1,param_1 + 0x2e0);
  return;
}



// FUNCTION 140e56300 FUN_140e56300 body=62 status=ok
// SIG undefined FUN_140e56300(void)

void FUN_140e56300(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x22a8) != 0) {
    lVar1 = FUN_140e822b0();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
      FUN_1411d31b0(*(longlong *)(lVar1 + 0x48),param_2,1);
      return;
    }
  }
  return;
}



// FUNCTION 140e56340 FUN_140e56340 body=834 status=ok
// SIG undefined FUN_140e56340(void)

void FUN_140e56340(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar2 = FUN_140e4c8c0();
  lVar6 = 0;
  lVar5 = lVar6;
  if (0 < *(int *)(param_5 + 1)) {
    lVar5 = *(longlong *)*param_5;
  }
  if ((lVar2 == 0) || (lVar5 == 0)) goto LAB_140e56665;
  if (param_2 == '\0') {
LAB_140e565e6:
    if ((*(byte *)(param_1 + 0x1c8) & 2) == 0) {
      *(byte *)(param_1 + 0x1c8) = *(byte *)(param_1 + 0x1c8) | 2;
      goto LAB_140e565f9;
    }
  }
  else {
    if (param_2 != '\x01') {
      if (param_2 == '\x02') goto LAB_140e565e6;
      if (param_2 == '\x03') goto LAB_140e563c8;
      goto LAB_140e56628;
    }
LAB_140e563c8:
    bVar8 = (*(byte *)(param_1 + 0x1c8) & 1) == 0;
    if (bVar8) {
      *(byte *)(param_1 + 0x1c8) = *(byte *)(param_1 + 0x1c8) | 1;
    }
    if (param_2 == '\x01') {
      thunk_FUN_1414e6680();
    }
    else {
      thunk_FUN_1414e6600(lVar2);
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar5 = *(longlong *)(DAT_146b33f38 + 0x58);
      if (lVar5 != 0) {
        lVar7 = lVar5 + 0xd38;
        lVar3 = FWeakObjectPtr::Get(lVar7);
        if (lVar3 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar5 + 0xd40)) && (*(longlong *)(lVar5 + 0xd48) != 0)) {
            lVar3 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar7,lVar3);
            if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar5 + 0xd40) = DAT_1464b56f4;
            }
            lVar3 = FWeakObjectPtr::Get(lVar7);
            if (lVar3 != 0) goto LAB_140e5649d;
          }
        }
        else {
LAB_140e5649d:
          lVar4 = FUN_142e1f230();
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
            lVar3 = FWeakObjectPtr::Get(lVar7);
            if (lVar3 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != *(int *)(lVar5 + 0xd40)) && (*(longlong *)(lVar5 + 0xd48) != 0))
              {
                lVar3 = FUN_141796df0();
                FWeakObjectPtr::operator=(lVar7,lVar3);
                if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *(int *)(lVar5 + 0xd40) = DAT_1464b56f4;
                }
                lVar3 = FWeakObjectPtr::Get(lVar7);
                if (lVar3 != 0) goto LAB_140e5654a;
              }
LAB_140e56580:
              lVar3 = lVar6;
            }
            else {
LAB_140e5654a:
              lVar5 = FUN_142e1f230();
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) goto LAB_140e56580;
            }
            lVar5 = *(longlong *)(param_1 + 0x120);
            if (lVar5 == 0) {
              lVar5 = FUN_1423407b0(param_1);
            }
            lVar5 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar5);
            if (lVar5 != 0) {
              lVar6 = FUN_142d84360(lVar5);
            }
            if ((lVar3 != 0) && (lVar6 != 0)) {
              FUN_142dd18b0(lVar6,*(undefined8 *)(param_1 + 0x1a8),lVar3,
                            *(undefined4 *)(param_5 + 1));
            }
          }
        }
      }
    }
    if (bVar8) {
LAB_140e565f9:
      if (DAT_14686b368 == '\0') {
        FUN_140c184b0(&DAT_14686b360);
      }
      FUN_140c17500(DAT_14686b360,*(undefined8 *)(param_1 + 0x1a8),lVar2,param_2);
    }
  }
LAB_140e56628:
  if (DAT_14686b368 == '\0') {
    FUN_140c184b0(&DAT_14686b360);
  }
  FUN_140c1c2a0(DAT_14686b360,*(undefined8 *)(param_1 + 0x1a8),lVar2,param_4,param_3,param_2);
LAB_140e56665:
  FUN_1414b1330(param_1,param_2,param_5);
  return;
}


