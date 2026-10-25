// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b28030 FUN_140b28030 body=55 status=ok
// SIG undefined FUN_140b28030(void)

undefined8 * FUN_140b28030(longlong param_1,undefined8 *param_2)

{
  if (*(longlong **)(param_1 + 0x500) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x500) + 0x470))();
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140b28070 FUN_140b28070 body=298 status=ok
// SIG undefined FUN_140b28070(void)

longlong * FUN_140b28070(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar5 = DAT_146b33f38 + 0xa0;
  lVar2 = FWeakObjectPtr::Get(lVar5);
  lVar6 = 0;
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0xa8)) && (*(longlong *)(lVar3 + 0xb0) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0xa8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar5);
      if (lVar2 != 0) goto LAB_140b28111;
    }
  }
  else {
LAB_140b28111:
    lVar3 = FUN_1413bd170();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b2814a;
  }
  lVar2 = lVar6;
LAB_140b2814a:
  if (*(longlong *)(param_1 + 0x388) == 0) {
    if (lVar2 != 0) {
      plVar4 = (longlong *)FUN_14046d430(lVar2,local_res18);
      lVar6 = *plVar4;
    }
    *param_2 = lVar6;
    return param_2;
  }
  plVar4 = (longlong *)FUN_14054b6b0(*(longlong *)(param_1 + 0x388),local_res10);
  *param_2 = *plVar4;
  return param_2;
}



// FUNCTION 140b281a0 FUN_140b281a0 body=316 status=ok
// SIG undefined FUN_140b281a0(void)

undefined8 * FUN_140b281a0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = FUN_14301f8f0();
      param_3 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar3);
    }
    else {
      lVar2 = FUN_14301f8f0();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140b282c0;
    }
    if (((param_3 != (longlong *)0x0) && (param_3[0x42] != 0)) &&
       (lVar2 = *(longlong *)(param_3[0x42] + 0xb8), lVar2 != 0)) {
      lVar4 = USoundNodeEnveloper::StaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(param_1 + 0xd8) == '\0')) {
        uVar3 = *(undefined8 *)(lVar2 + 0x150);
        *param_2 = *(undefined8 *)(lVar2 + 0x148);
        param_2[1] = uVar3;
        return param_2;
      }
    }
  }
LAB_140b282c0:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140b282e0 FUN_140b282e0 body=304 status=ok
// SIG undefined FUN_140b282e0(void)

undefined8 * FUN_140b282e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = FUN_14301f8f0();
      param_3 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar3);
    }
    else {
      lVar2 = FUN_14301f8f0();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140b283f4;
    }
    if ((param_3 != (longlong *)0x0) && (lVar2 = param_3[0x43], lVar2 != 0)) {
      lVar4 = FUN_141436fd0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(param_1 + 0xd8) == '\0')) {
        uVar3 = *(undefined8 *)(lVar2 + 0x118);
        *param_2 = *(undefined8 *)(lVar2 + 0x110);
        param_2[1] = uVar3;
        return param_2;
      }
    }
  }
LAB_140b283f4:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140b28410 FUN_140b28410 body=52 status=ok
// SIG undefined FUN_140b28410(void)

longlong FUN_140b28410(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x4b0);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        return *(longlong *)(param_1 + 0x498);
      }
      return 0;
    }
    if (*(longlong *)(param_1 + 0x498) != 0) {
      return *(longlong *)(param_1 + 0x498);
    }
  }
  return *(longlong *)(param_1 + 0x4a0);
}



// FUNCTION 140b28450 FUN_140b28450 body=8 status=ok
// SIG undefined FUN_140b28450(void)

undefined1 FUN_140b28450(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x779);
}



// FUNCTION 140b28460 FUN_140b28460 body=260 status=ok
// SIG undefined FUN_140b28460(void)

longlong FUN_140b28460(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468691c8) {
    _Init_thread_header(&DAT_1468691c8);
    if (DAT_1468691c8 == -1) {
      FName::FName(&DAT_1468691c0,L"DrunkenRandomMovementComponent",1);
      _Init_thread_footer(&DAT_1468691c8);
    }
  }
  lVar2 = DAT_1468691c0;
  lVar3 = *(longlong *)(param_1 + 0x738);
  if (lVar3 == 0) {
    if (DAT_1468691c0 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar1 = FUN_142e10700();
    lVar2 = FUN_1417985e0(uVar1,param_1,lVar2,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x738) = lVar2;
    lVar3 = 0;
    if (lVar2 != 0) {
      FUN_14234b150(lVar2);
      lVar3 = *(longlong *)(param_1 + 0x738);
    }
  }
  return lVar3;
}



// FUNCTION 140b28570 FUN_140b28570 body=260 status=ok
// SIG undefined FUN_140b28570(void)

longlong FUN_140b28570(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468691d8) {
    _Init_thread_header(&DAT_1468691d8);
    if (DAT_1468691d8 == -1) {
      FName::FName(&DAT_1468691d0,L"DrunkenWaveMovementComponent",1);
      _Init_thread_footer(&DAT_1468691d8);
    }
  }
  lVar2 = DAT_1468691d0;
  lVar3 = *(longlong *)(param_1 + 0x740);
  if (lVar3 == 0) {
    if (DAT_1468691d0 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar1 = FUN_142e10b40();
    lVar2 = FUN_1417985e0(uVar1,param_1,lVar2,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x740) = lVar2;
    lVar3 = 0;
    if (lVar2 != 0) {
      FUN_14234b150(lVar2);
      lVar3 = *(longlong *)(param_1 + 0x740);
    }
  }
  return lVar3;
}



// FUNCTION 140b28680 FUN_140b28680 body=923 status=ok
// SIG undefined FUN_140b28680(void)

longlong *
FUN_140b28680(longlong *param_1,longlong param_2,char param_3,longlong param_4,char param_5,
             undefined8 *param_6,short *param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  char local_res8 [8];
  longlong local_res10;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong local_c0 [3];
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = -1;
  if ((param_5 != '\0') && (local_f0 = (longlong *)0x0, param_6 != &local_f8)) {
    *param_6 = 0;
    local_f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_6 + 1,&local_f0);
    plVar8 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
     (cVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) || (param_4 == 0)) goto LAB_140b289d7;
  cVar5 = -1;
  if ((*(byte *)(param_4 + 0x830) & 4) != 0) {
    if ('\0' < param_3) {
      cVar5 = param_3 + -1;
    }
    local_e8 = 0;
    local_e0 = 0;
    if ((param_7 != (short *)0x0) && (*param_7 != 0)) {
      do {
        lVar6 = lVar6 + 1;
      } while (param_7[lVar6] != 0);
      uVar11 = (int)lVar6 + 1;
      local_e0 = (ulonglong)uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      }
      FGenericPlatformString::Memcpy(local_e8,param_7,(longlong)(int)uVar11 * 2);
    }
    uVar10 = FUN_140b28ae0(local_c0,param_2,&local_e8,param_4,cVar5);
    FString::operator=(param_1,uVar10);
    if (local_c0[0] != 0) {
      FMemory::Free();
    }
    goto LAB_140b289d7;
  }
  lVar6 = FUN_142481360(param_4,*(undefined8 *)(param_2 + 8));
  if (lVar6 == 0) {
LAB_140b287ce:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140b287ce;
    plVar8 = (longlong *)param_8[7];
    local_res8[0] = param_3;
    local_res10 = lVar6;
    if (plVar8 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,&local_res10,local_res8);
  }
  if (plVar8 != (longlong *)0x0) {
    local_d8 = FUN_14301f8f0();
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x628))();
    local_108 = 0;
    local_100 = 0;
    if (plVar8 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_a8,0,0x68);
      FUN_142ff3000(plVar8,local_a8);
      FUN_142ff5c90(local_a8,&local_108,1);
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
    }
    if (param_1 == &local_108) {
      if (local_108 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_1 != 0) {
        FMemory::Free(*param_1);
      }
      *param_1 = local_108;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_100;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_100._4_4_;
    }
    if (((param_5 != '\0') && (1 < (int)param_1[1])) && (plVar8 != (longlong *)0x0)) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x440))(plVar8,local_d0);
      if (param_6 != puVar9) {
        *param_6 = *puVar9;
        *puVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_6 + 1,puVar9 + 1);
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_c8 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar2 = (int *)((longlong)local_c8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
    }
  }
LAB_140b289d7:
  plVar8 = (longlong *)param_8[7];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,plVar8 != param_8);
    param_8[7] = 0;
  }
  return param_1;
}



// FUNCTION 140b28a20 FUN_140b28a20 body=91 status=ok
// SIG undefined FUN_140b28a20(void)

undefined8
FUN_140b28a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined **local_48 [7];
  undefined ***local_10;
  
  local_48[0] = &PTR_LAB_1442abd28;
  local_10 = local_48;
  FUN_140b28680(param_1,param_2,0xff,param_3,param_4,param_5,L"ARTIFACTS",local_48);
  return param_1;
}



// FUNCTION 140b28a80 FUN_140b28a80 body=91 status=ok
// SIG undefined FUN_140b28a80(void)

undefined8
FUN_140b28a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined **local_48 [7];
  undefined ***local_10;
  
  local_48[0] = &PTR_LAB_1442abd58;
  local_10 = local_48;
  FUN_140b28680(param_1,param_2,0xff,param_3,param_4,param_5,L"CLASS MODS",local_48);
  return param_1;
}



// FUNCTION 140b28ae0 FUN_140b28ae0 body=917 status=ok
// SIG undefined FUN_140b28ae0(void)

undefined8 *
FUN_140b28ae0(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong param_4,char param_5
             )

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined2 *puVar7;
  char cVar8;
  bool bVar9;
  char local_res20;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 *local_140;
  int local_138;
  undefined4 local_134;
  longlong local_130;
  int local_128;
  undefined1 local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  int *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  
  if (param_4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    lVar2 = *param_3;
  }
  else {
    local_150 = 0;
    local_148 = 0;
    local_130 = FUN_140c125c0(param_2,param_4);
    if (local_130 != 0) {
      piVar5 = *(int **)(local_130 + 0xd8);
      local_res20 = '\0';
      local_c8 = piVar5 + (longlong)*(int *)(local_130 + 0xe0) * 0x16;
      if (piVar5 != local_c8) {
        piVar6 = piVar5 + 0x12;
        local_140 = (undefined2 *)0x0;
        do {
          local_128 = *piVar5;
          local_124 = (undefined1)piVar6[-0x11];
          local_120 = piVar6[-0x10];
          local_11c = piVar6[-0xf];
          local_118 = piVar6[-0xe];
          local_c0 = *(undefined8 *)(piVar6 + -0xc);
          local_108 = 0;
          local_100 = 0;
          local_110 = 0;
          FString::FString(local_b8,piVar6 + -10);
          FSoftObjectPath::operator=(&local_110,&local_c0);
          local_f8 = piVar6[-6];
          local_f4 = piVar6[-5];
          local_f0 = piVar6[-4];
          local_c0 = *(undefined8 *)(piVar6 + -2);
          local_e0 = 0;
          local_d8 = 0;
          local_e8 = 0;
          FString::FString(local_b8,piVar6);
          FSoftObjectPath::operator=(&local_e8,&local_c0);
          lVar2 = FUN_140d3bae0(&local_128);
          if (lVar2 != 0) {
            lVar2 = FUN_140d3bae0(&local_128);
            puVar3 = (undefined8 *)FText::ToString(lVar2 + 0x40);
            local_140 = (undefined2 *)0x0;
            local_138 = *(int *)(puVar3 + 1);
            lVar2 = (longlong)local_138;
            _Src = (void *)*puVar3;
            if (local_138 == 0) {
              local_134 = 0;
              puVar7 = (undefined2 *)0x0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_140,local_138,0);
              puVar7 = local_140;
              _guard_xfg_dispatch_icall_nop(local_140,_Src,lVar2 * 2);
            }
            puVar4 = &DAT_143f3eda8;
            if (local_138 != 0) {
              puVar4 = puVar7;
            }
            iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4);
            if (((iVar1 == 0) &&
                (((param_5 == -1 ||
                  (cVar8 = local_res20 + '\x01', bVar9 = param_5 == local_res20, local_res20 = cVar8
                  , bVar9)) && (lVar2 = (longlong)local_128, -1 < local_128)))) &&
               (local_128 < *(int *)(local_130 + 0xd0))) {
              _guard_xfg_dispatch_icall_nop(local_a8,0,0x68);
              FUN_142ff9df0(lVar2 * 0xb0 + *(longlong *)(local_130 + 200),local_a8);
              FUN_140abae50(local_a8,0);
              FUN_142ff5c90(local_a8,&local_150,1);
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
              if (puVar7 != (undefined2 *)0x0) {
                FMemory::Free(puVar7);
              }
              if (local_e0 != 0) {
                FMemory::Free();
              }
              if (local_108 != 0) {
                FMemory::Free();
              }
              break;
            }
            if (puVar7 != (undefined2 *)0x0) {
              FMemory::Free(puVar7);
            }
          }
          if (local_e0 != 0) {
            FMemory::Free();
          }
          if (local_108 != 0) {
            FMemory::Free();
          }
          piVar5 = piVar5 + 0x16;
          piVar6 = piVar6 + 0x16;
        } while (piVar5 != local_c8);
      }
    }
    *param_1 = local_150;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_148._4_4_;
    lVar2 = *param_3;
    local_150 = 0;
    local_148 = 0;
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140b28e80 FUN_140b28e80 body=91 status=ok
// SIG undefined FUN_140b28e80(void)

undefined8
FUN_140b28e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined **local_48 [7];
  undefined ***local_10;
  
  local_48[0] = &PTR_LAB_1442abcc8;
  local_10 = local_48;
  FUN_140b28680(param_1,param_2,0xff,param_3,param_4,param_5,L"GRENADE MODS",local_48);
  return param_1;
}



// FUNCTION 140b28ee0 FUN_140b28ee0 body=91 status=ok
// SIG undefined FUN_140b28ee0(void)

undefined8
FUN_140b28ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined **local_48 [7];
  undefined ***local_10;
  
  local_48[0] = &PTR_LAB_1442abcf8;
  local_10 = local_48;
  FUN_140b28680(param_1,param_2,0xff,param_3,param_4,param_5,L"SHIELDS",local_48);
  return param_1;
}



// FUNCTION 140b28f40 FUN_140b28f40 body=93 status=ok
// SIG undefined FUN_140b28f40(void)

undefined8 FUN_140b28f40(undefined8 param_1)

{
  undefined **local_48 [7];
  undefined ***local_10;
  
  local_48[0] = &PTR_LAB_1442abc98;
  local_10 = local_48;
  FUN_140b28680();
  return param_1;
}



// FUNCTION 140b28fa0 FUN_140b28fa0 body=141 status=ok
// SIG undefined FUN_140b28fa0(void)

longlong * FUN_140b28fa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x4b8);
  plVar1 = plVar5 + *(int *)(param_1 + 0x4c0);
  do {
    if (plVar5 == plVar1) {
      return (longlong *)0x0;
    }
    plVar2 = (longlong *)*plVar5;
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_14142bde0();
      lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x348) == '\0') {
          return plVar2;
        }
        lVar4 = FUN_140b2ab40(lVar4);
        if (lVar4 == param_2) {
          return plVar2;
        }
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140b29030 FUN_140b29030 body=52 status=ok
// SIG undefined FUN_140b29030(void)

void FUN_140b29030(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  *param_3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x24);
  uVar1 = FUN_142ffcb50(param_1 + -0x668);
  *param_4 = uVar1;
  return;
}



// FUNCTION 140b29070 GetNotifyName_Implementation body=133 status=ok
// SIG undefined GetNotifyName_Implementation(void)

undefined8
UHMNotify_ForceFeedback::GetNotifyName_Implementation(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  ulonglong local_res8;
  wchar_t *local_18;
  int local_10;
  
  bVar1 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    pwVar2 = L"none";
  }
  else {
    local_res8 = *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x18);
    FName::ToString(&local_res8,&local_18);
    bVar1 = true;
    pwVar2 = L"";
    if (local_10 != 0) {
      pwVar2 = local_18;
    }
  }
  FString::PrintfImpl(param_2,L"Adds the delivery method \'%ls\' to the grenade\'s balance state.",
                      pwVar2);
  if ((bVar1) && (local_18 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140b29100 FUN_140b29100 body=507 status=ok
// SIG undefined FUN_140b29100(void)

longlong * FUN_140b29100(longlong param_1,longlong *param_2)

{
  void *_Dst;
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *_Src;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 local_res8;
  undefined2 *local_38;
  undefined8 local_30;
  
  uVar8 = 0;
  *param_2 = 0;
  param_2[1] = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Adds these abilities to the inventory actor: ",0x5c);
  uVar10 = uVar8;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      lVar7 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(lVar7 + uVar10) != 0) {
        lVar5 = FUN_1430f1090();
        lVar7 = *(longlong *)(lVar7 + uVar10);
        for (lVar2 = lVar7; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar5) {
            if (lVar7 != 0) {
              local_res8 = *(undefined8 *)(lVar7 + 0x18);
              FName::ToString(&local_res8,&local_38);
              goto LAB_140b291c3;
            }
            break;
          }
        }
      }
      local_38 = (undefined2 *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
LAB_140b291c3:
      lVar7 = -1;
      _Src = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        _Src = local_38;
      }
      do {
        lVar7 = lVar7 + 1;
      } while (_Src[lVar7] != 0);
      iVar6 = (int)lVar7;
      if (iVar6 != 0) {
        iVar4 = (int)param_2[1];
        iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar6;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
      }
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar6 = *(int *)(param_1 + 0x40);
      if ((int)uVar8 < iVar6 + -1) {
        iVar6 = (int)param_2[1];
        iVar4 = (3 - (uint)(iVar6 != 0)) + iVar6;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
        }
        puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
        *puVar1 = 0x20002c;
        *(undefined2 *)(puVar1 + 1) = 0;
        iVar6 = *(int *)(param_1 + 0x40);
      }
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
      uVar10 = uVar10 + 8;
    } while ((int)uVar9 < iVar6);
  }
  return param_2;
}



// FUNCTION 140b29300 FUN_140b29300 body=245 status=ok
// SIG undefined FUN_140b29300(void)

undefined8 FUN_140b29300(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_140b14a80(local_18,param_1 + 0x48,&DAT_144299bb4,&DAT_14428d90c);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar3 = *(undefined2 **)(param_1 + 0x38);
  if (puVar3 == (undefined2 *)0x0) {
    local_20 = 5;
    local_28 = puVar3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(puVar3 + 0xc);
    FName::ToString(&local_res8,&local_28);
  }
  puVar3 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_2,
                      L"Attaches an extra gestalt mesh \'%s\' to the inventory with parts enabled: {%s}."
                      ,puVar3,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140b29400 FUN_140b29400 body=8 status=ok
// SIG undefined FUN_140b29400(void)

undefined1 FUN_140b29400(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x765);
}



// FUNCTION 140b29410 FUN_140b29410 body=3891 status=ok
// SIG undefined FUN_140b29410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140b29410(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined1 auStack_5b8 [32];
  undefined4 *local_598;
  undefined4 *puStack_590;
  undefined4 *local_588;
  undefined8 local_580;
  undefined4 *local_578;
  undefined8 local_570;
  undefined4 *local_568;
  undefined8 local_560;
  undefined4 *local_558;
  undefined8 local_550;
  undefined1 local_548 [24];
  undefined1 local_530 [8];
  longlong *local_528;
  undefined4 *local_518;
  undefined4 *puStack_510;
  undefined4 *local_508;
  undefined4 *puStack_500;
  undefined4 *local_4f8;
  undefined4 *puStack_4f0;
  undefined4 *local_4e8;
  ulonglong *puStack_4e0;
  longlong *local_4d8;
  undefined1 local_4c8 [32];
  longlong local_4a8;
  longlong local_498;
  longlong local_488;
  longlong local_478;
  undefined8 local_458;
  longlong local_450;
  undefined8 local_448;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_428 [16];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408 [16];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [8];
  longlong *local_3a0;
  undefined1 local_390 [8];
  longlong *local_388;
  undefined1 local_378 [8];
  longlong *local_370;
  undefined1 local_360 [24];
  undefined1 local_348 [16];
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320 [8];
  longlong local_318;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined1 local_270 [8];
  longlong *local_268;
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_240 [24];
  undefined1 local_228 [24];
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined4 local_130 [4];
  undefined1 local_120 [8];
  longlong *local_118;
  char local_108;
  undefined4 local_100 [4];
  undefined1 local_f0 [8];
  longlong *local_e8;
  char local_d8;
  undefined4 local_d0 [4];
  undefined1 local_c0 [8];
  longlong *local_b8;
  char local_a8;
  undefined4 local_a0 [4];
  undefined1 local_90 [8];
  longlong *local_88;
  char local_78;
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  if ((param_3 == 0) || (*(int *)(param_2 + 8) < 2)) {
    FText::FText();
    return param_1;
  }
  _guard_xfg_dispatch_icall_nop(local_4c8,0,0x68);
  FUN_142fde710(local_320,param_2);
  cVar8 = FUN_143001780(local_4c8,local_320);
  if (local_318 != 0) {
    FMemory::Free();
  }
  if (cVar8 == '\0') {
    FText::FText(param_1);
LAB_140b2955c:
    if (local_478 != 0) {
      FMemory::Free();
    }
    if (local_488 != 0) {
      FMemory::Free();
    }
    if (local_498 != 0) {
      FMemory::Free();
    }
    if (local_4a8 != 0) {
      FMemory::Free();
    }
    return param_1;
  }
  plVar9 = (longlong *)FUN_143019ed0(param_3,local_4c8,1,0);
  local_4d8 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FText::FText(param_1);
    goto LAB_140b2955c;
  }
  local_448 = FUN_14301f8f0();
  lVar10 = (**(code **)(*plVar9 + 0x628))(plVar9,local_448);
  if (lVar10 == 0) {
    FText::FText(param_1);
    goto LAB_140b2955c;
  }
  FText::FText(local_530,lVar10 + 0x268);
  cVar8 = FText::IsEmpty(local_530);
  if (cVar8 != '\0') {
    FText::FText(param_1);
    if (local_528 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_528 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_528)(local_528);
        LOCK();
        piVar1 = (int *)((longlong)local_528 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_528 + 8))(local_528,1);
        }
      }
    }
    goto LAB_140b2955c;
  }
  FText::FText(local_548);
  lVar14 = 0;
  if (*(longlong *)(lVar10 + 0x210) != 0) {
    lVar14 = *(longlong *)(*(longlong *)(lVar10 + 0x210) + 0xb8);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar10 = *(longlong *)(DAT_146b33f38 + 0x58);
  local_438 = (undefined4 *)CONCAT44(local_438._4_4_,(undefined4)local_438);
  uStack_430 = (undefined4 *)CONCAT44(uStack_430._4_4_,(undefined4)uStack_430);
  local_418 = (undefined4 *)CONCAT44(local_418._4_4_,(undefined4)local_418);
  uStack_410 = (undefined4 *)CONCAT44(uStack_410._4_4_,(undefined4)uStack_410);
  local_3f8 = (undefined4 *)CONCAT44(local_3f8._4_4_,(undefined4)local_3f8);
  uStack_3f0 = (undefined4 *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
  local_3d8 = (undefined4 *)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8);
  uStack_3d0 = (undefined4 *)CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0);
  local_3b8 = (undefined4 *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
  uStack_3b0 = (ulonglong *)CONCAT44(uStack_3b0._4_4_,(undefined4)uStack_3b0);
  if ((lVar14 == 0) ||
     (local_438 = (undefined4 *)CONCAT44(local_438._4_4_,(undefined4)local_438),
     uStack_430 = (undefined4 *)CONCAT44(uStack_430._4_4_,(undefined4)uStack_430),
     local_418 = (undefined4 *)CONCAT44(local_418._4_4_,(undefined4)local_418),
     uStack_410 = (undefined4 *)CONCAT44(uStack_410._4_4_,(undefined4)uStack_410),
     local_3f8 = (undefined4 *)CONCAT44(local_3f8._4_4_,(undefined4)local_3f8),
     uStack_3f0 = (undefined4 *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0),
     local_3d8 = (undefined4 *)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8),
     uStack_3d0 = (undefined4 *)CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0),
     local_3b8 = (undefined4 *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8),
     uStack_3b0 = (ulonglong *)CONCAT44(uStack_3b0._4_4_,(undefined4)uStack_3b0), lVar10 == 0))
  goto LAB_140b2a2e7;
  lVar4 = *(longlong *)(lVar10 + 0x340);
  lVar5 = *(longlong *)(lVar10 + 0x348);
  lVar6 = *(longlong *)(lVar10 + 0x350);
  lVar7 = *(longlong *)(lVar10 + 0x360);
  lVar10 = *(longlong *)(lVar10 + 0x358);
  FText::FText(local_228);
  if (lVar14 == lVar4) {
    local_580 = 0x23;
    local_588 = (undefined4 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_588,0);
    FGenericPlatformString::Memcpy(local_588,L"[rarity_common]{0}[/rarity_common]",0x46);
    lVar10 = FText::FText(local_1a8,local_530);
    uVar11 = FText::FromString(local_2e8,&local_588);
    plVar9 = (longlong *)FTextFormat::FTextFormat(local_1f8,uVar11);
    local_130[0] = 4;
    FText::FText(local_120,lVar10);
    local_518 = (undefined4 *)*plVar9;
    local_598 = local_130;
    puStack_590 = local_100;
    puStack_510 = (undefined4 *)plVar9[1];
    local_108 = '\x01';
    if (puStack_510 != (undefined4 *)0x0) {
      LOCK();
      puStack_510[2] = puStack_510[2] + 1;
      UNLOCK();
    }
    local_438 = local_598;
    uStack_430 = puStack_590;
    uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_428,&local_438);
    uVar11 = FText::Format(local_300,&local_518,uVar11);
    FText::FText(local_338,uVar11);
    if (local_2f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_2f8 + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_2f8)(local_2f8);
        LOCK();
        piVar1 = (int *)((longlong)local_2f8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2f8 + 8))(local_2f8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_428);
    if ((local_108 != '\0') && (local_108 = '\0', local_118 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_118 + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar14 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
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
    plVar9 = *(longlong **)(lVar10 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    FText::operator=(local_548,local_338);
    if (local_330 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_330 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_330)(local_330);
        LOCK();
        piVar1 = (int *)((longlong)local_330 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_330 + 8))(local_330,1);
        }
      }
    }
    if (local_2e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_2e0 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_2e0)(local_2e0);
        LOCK();
        piVar1 = (int *)((longlong)local_2e0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2e0 + 8))(local_2e0,1);
        }
      }
    }
    puVar13 = local_588;
LAB_140b2a295:
    if (puVar13 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (lVar14 == lVar5) {
      local_570 = 0x27;
      local_578 = (undefined4 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_578,0);
      FGenericPlatformString::Memcpy(local_578,L"[rarity_uncommon]{0}[/rarity_uncommon]",0x4e);
      lVar10 = FText::FText(local_190,local_530);
      uVar11 = FText::FromString(local_2b8,&local_578);
      plVar9 = (longlong *)FTextFormat::FTextFormat(local_1e8,uVar11);
      local_100[0] = 4;
      FText::FText(local_f0,lVar10);
      local_508 = (undefined4 *)*plVar9;
      local_518 = local_100;
      puStack_510 = local_d0;
      puStack_500 = (undefined4 *)plVar9[1];
      local_d8 = '\x01';
      if (puStack_500 != (undefined4 *)0x0) {
        LOCK();
        puStack_500[2] = puStack_500[2] + 1;
        UNLOCK();
      }
      local_418 = local_518;
      uStack_410 = puStack_510;
      uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_408,&local_418);
      uVar11 = FText::Format(local_2d0,&local_508,uVar11);
      FText::FText(local_3a8,uVar11);
      if (local_2c8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_2c8 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_2c8)(local_2c8);
          LOCK();
          piVar1 = (int *)((longlong)local_2c8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_2c8 + 8))(local_2c8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_408);
      if ((local_d8 != '\0') && (local_d8 = '\0', local_e8 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_e8 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      plVar9 = (longlong *)plVar9[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
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
      plVar9 = *(longlong **)(lVar10 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      FText::operator=(local_548,local_3a8);
      if (local_3a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_3a0 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_3a0)(local_3a0);
          LOCK();
          piVar1 = (int *)((longlong)local_3a0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_3a0 + 8))(local_3a0,1);
          }
        }
      }
      if (local_2b0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_2b0 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_2b0)(local_2b0);
          LOCK();
          piVar1 = (int *)((longlong)local_2b0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_2b0 + 8))(local_2b0,1);
          }
        }
      }
      puVar13 = local_578;
      goto LAB_140b2a295;
    }
    if (lVar14 == lVar6) {
      local_560 = 0x1f;
      local_568 = (undefined4 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_568,0);
      FGenericPlatformString::Memcpy(local_568,L"[rarity_rare]{0}[/rarity_rare]",0x3e);
      lVar10 = FText::FText(local_178,local_530);
      uVar11 = FText::FromString(local_288,&local_568);
      plVar9 = (longlong *)FTextFormat::FTextFormat(local_1d8,uVar11);
      local_d0[0] = 4;
      FText::FText(local_c0,lVar10);
      local_4f8 = (undefined4 *)*plVar9;
      local_508 = local_d0;
      puStack_500 = local_a0;
      puStack_4f0 = (undefined4 *)plVar9[1];
      local_a8 = '\x01';
      if (puStack_4f0 != (undefined4 *)0x0) {
        LOCK();
        puStack_4f0[2] = puStack_4f0[2] + 1;
        UNLOCK();
      }
      local_3f8 = local_508;
      uStack_3f0 = puStack_500;
      uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_3e8,&local_3f8);
      uVar11 = FText::Format(local_2a0,&local_4f8,uVar11);
      FText::FText(local_390,uVar11);
      if (local_298 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_298 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_298)(local_298);
          LOCK();
          piVar1 = (int *)((longlong)local_298 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_298 + 8))(local_298,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3e8);
      if ((local_a8 != '\0') && (local_a8 = '\0', local_b8 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_b8 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      plVar9 = (longlong *)plVar9[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
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
      plVar9 = *(longlong **)(lVar10 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      FText::operator=(local_548,local_390);
      if (local_388 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_388 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_388)(local_388);
          LOCK();
          piVar1 = (int *)((longlong)local_388 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_388 + 8))(local_388,1);
          }
        }
      }
      if (local_280 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_280 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_280)(local_280);
          LOCK();
          piVar1 = (int *)((longlong)local_280 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_280 + 8))(local_280,1);
          }
        }
      }
      puVar13 = local_568;
      goto LAB_140b2a295;
    }
    if (lVar14 == lVar10) {
      local_550 = 0x1f;
      local_558 = (undefined4 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_558,0);
      FGenericPlatformString::Memcpy(local_558,L"[rarity_epic]{0}[/rarity_epic]",0x3e);
      lVar10 = FText::FText(local_160,local_530);
      uVar11 = FText::FromString(local_258,&local_558);
      plVar9 = (longlong *)FTextFormat::FTextFormat(local_1c8,uVar11);
      local_a0[0] = 4;
      FText::FText(local_90,lVar10);
      local_4e8 = (undefined4 *)*plVar9;
      local_4f8 = local_a0;
      puStack_4f0 = local_70;
      puStack_4e0 = (ulonglong *)plVar9[1];
      local_78 = '\x01';
      if (puStack_4e0 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(puStack_4e0 + 1) = (int)puStack_4e0[1] + 1;
        UNLOCK();
      }
      local_3d8 = local_4f8;
      uStack_3d0 = puStack_4f0;
      uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_3c8,&local_3d8);
      uVar11 = FText::Format(local_270,&local_4e8,uVar11);
      FText::FText(local_378,uVar11);
      if (local_268 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_268 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_268)(local_268);
          LOCK();
          piVar1 = (int *)((longlong)local_268 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_268 + 8))(local_268,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3c8);
      if ((local_78 != '\0') && (local_78 = '\0', local_88 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_88 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
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
      plVar9 = (longlong *)plVar9[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
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
      plVar9 = *(longlong **)(lVar10 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      FText::operator=(local_548,local_378);
      if (local_370 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_370 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_370)(local_370);
          LOCK();
          piVar1 = (int *)((longlong)local_370 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_370 + 8))(local_370,1);
          }
        }
      }
      if (local_250 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_250 + 1;
        lVar10 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_250)(local_250);
          LOCK();
          piVar1 = (int *)((longlong)local_250 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_250 + 8))(local_250,1);
          }
        }
      }
      puVar13 = local_558;
      goto LAB_140b2a295;
    }
    if (lVar14 == lVar7) {
      puStack_590 = (undefined4 *)&DAT_00000029;
      local_598 = (undefined4 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_598,0);
      FGenericPlatformString::Memcpy(local_598,L"[rarity_legendary]{0}[/rarity_legendary]",0x52);
      lVar10 = FText::FText(local_148,local_530);
      uVar11 = FText::FromString(local_240,&local_598);
      puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_1b8,uVar11);
      local_70[0] = 4;
      FText::FText(local_60,lVar10);
      local_458 = *puVar12;
      local_4e8 = local_70;
      puStack_4e0 = &local_40;
      local_450 = puVar12[1];
      local_48 = '\x01';
      if (local_450 != 0) {
        LOCK();
        *(int *)(local_450 + 8) = *(int *)(local_450 + 8) + 1;
        UNLOCK();
      }
      local_3b8 = local_4e8;
      uStack_3b0 = puStack_4e0;
      uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_348,&local_3b8);
      uVar11 = FText::Format(local_210,&local_458,uVar11);
      FText::FText(local_360,uVar11);
      if (local_208 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_208 + 1;
        lVar14 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_208)(local_208);
          LOCK();
          piVar1 = (int *)((longlong)local_208 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_208 + 8))(local_208,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_348);
      if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
        LOCK();
        plVar9 = local_58 + 1;
        lVar14 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      plVar9 = (longlong *)puVar12[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
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
      plVar9 = *(longlong **)(lVar10 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
      FText::operator=(local_548,local_360);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_360);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_240);
      puVar13 = local_598;
      goto LAB_140b2a295;
    }
  }
  cVar8 = FText::IsEmpty(local_548);
  if (cVar8 != '\0') {
    FText::operator=(local_548,local_530);
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_228);
LAB_140b2a2e7:
  FUN_142227350(local_4d8,0,1);
  FText::FText(param_1,local_548);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_548);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_530);
  FUN_140b17480(local_4c8);
  return param_1;
}



// FUNCTION 140b2a350 FUN_140b2a350 body=570 status=ok
// SIG undefined FUN_140b2a350(void)

undefined8 * FUN_140b2a350(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_d8 [2];
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    if (*(int *)(param_2 + 8) < 2) {
      plVar6 = (longlong *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
      FUN_142fde710(local_a8,param_2);
      cVar4 = FUN_143001780(local_88,local_a8);
      if (local_a0 != 0) {
        FMemory::Free();
      }
      plVar6 = local_c8;
      if (((cVar4 != '\0') && (local_80 != 0)) && (local_78 != 0)) {
        plVar5 = (longlong *)operator_new(0x50);
        local_b0 = (longlong *)0x0;
        plVar6 = local_b0;
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = 0;
          plVar5[1] = 0;
          plVar5[4] = 0;
          plVar5[5] = 0;
          *(undefined4 *)(plVar5 + 6) = 0xffffffff;
          *(undefined4 *)((longlong)plVar5 + 0x34) = 0;
          plVar5[8] = 0;
          *(undefined4 *)(plVar5 + 9) = 0;
          plVar6 = plVar5;
        }
        plVar5 = (longlong *)operator_new(0x18);
        if (plVar5 != (longlong *)0x0) {
          *(undefined4 *)(plVar5 + 1) = 1;
          *plVar5 = (longlong)&PTR_FUN_143f60d28;
          *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
          plVar5[2] = (longlong)plVar6;
          local_b0 = plVar5;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar6,plVar6);
        local_b8 = 0;
        local_c8 = plVar6;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_b0);
        plVar6 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_b0 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_b0)(local_b0);
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
        plVar6 = local_c8;
        if (local_c8 != (longlong *)0x0) {
          local_d8[0] = 0;
          local_d8[1] = 0xd;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
          FGenericPlatformString::Memcpy(local_d8[0],L"SerialNumber",0x1a);
          FJsonObject::SetStringField(plVar6,local_d8,param_2);
          if (local_d8[0] != 0) {
            FMemory::Free();
          }
        }
      }
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
    *param_1 = plVar6;
    param_1[1] = uStack_c0;
  }
  return param_1;
}



// FUNCTION 140b2a590 FUN_140b2a590 body=271 status=ok
// SIG undefined FUN_140b2a590(void)

void FUN_140b2a590(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (param_3 != 0) {
    if ((undefined *)*param_2 != &DAT_14428ccc4) {
      iVar2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
        iVar2 = *(int *)(param_2 + 1);
      }
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
    }
    if (1 < *(int *)(param_1 + 8)) {
      _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
      FUN_142fde710(local_98,param_1);
      cVar1 = FUN_143001780(local_78,local_98);
      if (local_90 != 0) {
        FMemory::Free();
      }
      if (((cVar1 != '\0') && (local_68 != 0)) && (*(longlong *)(local_68 + 0xb8) != 0)) {
        FString::operator=(param_2,*(longlong *)(local_68 + 0xb8) + 0x58);
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b2a6a0 FUN_140b2a6a0 body=31 status=ok
// SIG undefined FUN_140b2a6a0(void)

undefined4 FUN_140b2a6a0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x94) & 0x18) != 0x10) {
    return *(undefined4 *)(param_1 + 0x7ac);
  }
  return *(undefined4 *)(param_1 + 0x470);
}



// FUNCTION 140b2a6c0 FUN_140b2a6c0 body=8 status=ok
// SIG undefined FUN_140b2a6c0(void)

undefined8 FUN_140b2a6c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x510);
}



// FUNCTION 140b2a6f0 FUN_140b2a6f0 body=8 status=ok
// SIG undefined FUN_140b2a6f0(void)

undefined8 FUN_140b2a6f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x6e8);
}



// FUNCTION 140b2a700 FUN_140b2a700 body=8 status=ok
// SIG undefined FUN_140b2a700(void)

undefined8 FUN_140b2a700(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x728);
}



// FUNCTION 140b2a710 FUN_140b2a710 body=31 status=ok
// SIG undefined FUN_140b2a710(void)

undefined4 FUN_140b2a710(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x94) & 0x18) != 0x10) {
    return *(undefined4 *)(param_1 + 0x7b0);
  }
  return *(undefined4 *)(param_1 + 0x488);
}



// FUNCTION 140b2a730 FUN_140b2a730 body=324 status=ok
// SIG undefined FUN_140b2a730(void)

longlong FUN_140b2a730(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0xe6];
  if (lVar2 == 0) {
    lVar2 = 0;
    if ((char)param_1[0x25] != '\x03') {
      uVar1 = UGunfireTechRequirementsImplWin64::GetPrivateStaticClass();
      lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
      param_1[0xe6] = lVar2;
    }
    if (lVar2 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1468691b8) &&
         (_Init_thread_header(&DAT_1468691b8), DAT_1468691b8 == -1)) {
        FName::FName(&DAT_1468691b0,L"GrenadeHomingComponent",1);
        _Init_thread_footer(&DAT_1468691b8);
      }
      lVar3 = DAT_1468691b0;
      lVar2 = param_1[0xe6];
      if (lVar2 == 0) {
        if (DAT_1468691b0 == 0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar1 = UGunfireTechRequirementsImplWin64::GetPrivateStaticClass();
        lVar3 = FUN_1417985e0(uVar1,param_1,lVar3,0,0,0,0,0,0);
        param_1[0xe6] = lVar3;
        lVar2 = 0;
        if (lVar3 != 0) {
          FUN_14234b150(lVar3);
          lVar2 = param_1[0xe6];
        }
      }
    }
  }
  return lVar2;
}



// FUNCTION 140b2a880 FUN_140b2a880 body=575 status=ok
// SIG undefined FUN_140b2a880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140b2a880(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146869210) && (_Init_thread_header(), DAT_146869210 == -1)) {
    _DAT_1468691f0 = _DAT_1468b5d90;
    _DAT_1468691f8 = DAT_1468b5d98;
    _Init_thread_footer();
  }
  if (param_2 != 0) {
    plVar7 = (longlong *)(param_1 + 0x820);
    local_78 = 0;
    uStack_74 = 1;
    iVar1 = *(int *)(param_1 + 0x848);
    puStack_28 = (uint *)(param_1 + 0x830);
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar1 != 0) {
      puVar8 = *(uint **)(param_1 + 0x840);
      if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
        puVar8 = puStack_28;
      }
      uVar2 = *puVar8;
      uStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar5 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_140b2a97f;
        uVar2 = puVar8[lVar5 + 1];
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
      local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
      if (iVar1 < local_68._4_4_) {
LAB_140b2a97f:
        local_68._4_4_ = iVar1;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    iStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar7,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    iStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x848);
    local_48 = plVar7;
    local_38 = plVar7;
    local_10 = plVar7;
    local_68 = puStack_28;
    if (bVar3) {
      do {
        lVar5 = *plVar7;
        if (*(longlong *)((longlong)iStack_5c * 0x40 + lVar5) == param_2) {
          lVar6 = (longlong)iStack_5c;
          if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
            TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),
                                CONCAT71((int7)((ulonglong)plVar7 >> 8),1));
          }
          return (undefined *)(lVar6 * 0x40 + lVar5 + 8);
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return &DAT_1468691e0;
}



// FUNCTION 140b2aac0 FUN_140b2aac0 body=116 status=ok
// SIG undefined FUN_140b2aac0(void)

longlong FUN_140b2aac0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x70c) & 1) == 0) {
    return 0;
  }
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
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140b2ab40 FUN_140b2ab40 body=118 status=ok
// SIG undefined FUN_140b2ab40(void)

longlong FUN_140b2ab40(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x348) == '\0') {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar1 != 0)) {
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
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140b2abc0 FUN_140b2abc0 body=124 status=ok
// SIG undefined FUN_140b2abc0(void)

longlong FUN_140b2abc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x118), lVar2 != 0)) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && ((*(byte *)(lVar1 + 0x90) & 4) != 0)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140b2ac40 GetPieceBrush body=8 status=ok
// SIG undefined GetPieceBrush(void)

undefined8 SThrobber::GetPieceBrush(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x498);
}



// FUNCTION 140b2ac50 FUN_140b2ac50 body=191 status=ok
// SIG undefined FUN_140b2ac50(void)

void FUN_140b2ac50(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x228);
  lVar6 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar5;
  for (; lVar5 != lVar6; lVar5 = lVar5 + 0x40) {
    plVar2 = *(longlong **)(lVar5 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_14142bde0();
      lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
      if ((lVar4 != 0) &&
         ((*(char *)(lVar4 + 0x348) == '\0' || (lVar4 = FUN_140b2ab40(lVar4), lVar4 == param_2)))) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar5 + 0xc);
      }
    }
  }
  return;
}



// FUNCTION 140b2ad10 FUN_140b2ad10 body=461 status=ok
// SIG undefined FUN_140b2ad10(void)

undefined8 * FUN_140b2ad10(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_38 [6];
  
  local_res8 = 0;
  FUN_142ffaa30();
  (**(code **)(*param_1 + 0x470))(param_1,&local_res8);
  if (CONCAT44(uStackX_c,local_res8) == 0) {
LAB_140b2ad72:
    local_38[2] = 0;
    local_38[3] = 6;
    bVar2 = false;
    bVar1 = true;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
    FGenericPlatformString::Memcpy(local_38[2],L"Error",0xc);
    plVar5 = local_38 + 2;
LAB_140b2adab:
    local_38[0] = 0;
    local_38[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"DamageType",0x16);
    FJsonObject::SetStringField(*param_2,local_38,plVar5);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if ((bVar1) && (local_38[2] != 0)) {
      FMemory::Free();
    }
    if ((bVar2) && (local_38[4] != 0)) {
      FMemory::Free();
    }
    return param_2;
  }
  lVar3 = FUN_142e49950();
  lVar7 = CONCAT44(uStackX_c,local_res8);
joined_r0x000140b2ad5a:
  if (lVar7 != 0) {
    if (lVar7 != lVar3) goto code_r0x000140b2ad69;
    plVar4 = (longlong *)FUN_142e49950();
    for (plVar5 = (longlong *)CONCAT44(uStackX_c,local_res8);
        (plVar6 = (longlong *)0x0, plVar5 != (longlong *)0x0 &&
        (plVar6 = (longlong *)CONCAT44(uStackX_c,local_res8), plVar5 != plVar4));
        plVar5 = (longlong *)plVar5[6]) {
    }
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar7 = plVar6[0x1f];
      if (lVar7 != 0) goto LAB_140b2ae89;
    }
    else {
LAB_140b2ae89:
      lVar3 = FUN_1414193b0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        bVar2 = true;
        bVar1 = false;
        plVar5 = (longlong *)FUN_140a8c190(lVar7,local_38 + 4);
        goto LAB_140b2adab;
      }
    }
  }
  goto LAB_140b2ad72;
code_r0x000140b2ad69:
  lVar7 = *(longlong *)(lVar7 + 0x30);
  goto joined_r0x000140b2ad5a;
}



// FUNCTION 140b2aee0 FUN_140b2aee0 body=955 status=ok
// SIG undefined FUN_140b2aee0(void)

void FUN_140b2aee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_143079100();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146869158) && (_Init_thread_header(&DAT_146869158), DAT_146869158 == -1)) {
    uVar1 = FUN_1413ac760();
    FUN_1413ac760();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GrenadeMod",1);
    DAT_146869150 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869158);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869150 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869150 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869150 + 0x30));
  }
  if ((*piVar4 < DAT_146869168) && (_Init_thread_header(&DAT_146869168), DAT_146869168 == -1)) {
    uVar1 = FUN_1413ac760();
    FUN_1413ac760();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GrenadeDamage",1);
    DAT_146869160 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869168);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869160 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869160 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869160 + 0x30));
  }
  if ((*piVar4 < DAT_146869178) && (_Init_thread_header(&DAT_146869178), DAT_146869178 == -1)) {
    uVar1 = FUN_1413ac760();
    FUN_1413ac760();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GrenadeExplosionRadius",1);
    DAT_146869170 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869178);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869170 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869170 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869170 + 0x30));
  }
  if ((*piVar4 < DAT_146869188) && (_Init_thread_header(&DAT_146869188), DAT_146869188 == -1)) {
    uVar1 = FUN_1413ac760();
    FUN_1413ac760();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GrenadeExplosionForce",1);
    DAT_146869180 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869188);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869180 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869180 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869180 + 0x30));
  }
  if ((*piVar4 < DAT_146869198) && (_Init_thread_header(&DAT_146869198), DAT_146869198 == -1)) {
    uVar1 = FUN_1413ac760();
    FUN_1413ac760();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ChildGenerationData",1);
    DAT_146869190 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869198);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869190 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869190 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869190 + 0x30));
  }
  return;
}



// FUNCTION 140b2b2a0 FUN_140b2b2a0 body=773 status=ok
// SIG undefined FUN_140b2b2a0(void)

void FUN_140b2b2a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_143079100();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146869118) && (_Init_thread_header(&DAT_146869118), DAT_146869118 == -1)) {
    uVar1 = UUGButton::GetPrivateStaticClass();
    UUGButton::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HealingParticles",1);
    DAT_146869110 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869118);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869110 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146869110 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869110 + 0x30));
  }
  if ((*piVar4 < DAT_146869128) && (_Init_thread_header(&DAT_146869128), DAT_146869128 == -1)) {
    uVar1 = UUGButton::GetPrivateStaticClass();
    UUGButton::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AudioComponent",1);
    DAT_146869120 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869128);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869120 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146869120 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869120 + 0x30));
  }
  if ((*piVar4 < DAT_146869138) && (_Init_thread_header(&DAT_146869138), DAT_146869138 == -1)) {
    uVar1 = UUGButton::GetPrivateStaticClass();
    UUGButton::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PersistantAudioEvent",1);
    DAT_146869130 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869138);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869130 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146869130 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869130 + 0x30));
  }
  if ((*piVar4 < DAT_146869148) && (_Init_thread_header(&DAT_146869148), DAT_146869148 == -1)) {
    uVar1 = UUGButton::GetPrivateStaticClass();
    UUGButton::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HealingAudioEvent",1);
    DAT_146869140 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869148);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869140 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146869140 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869140 + 0x30));
  }
  return;
}



// FUNCTION 140b2b5b0 FUN_140b2b5b0 body=951 status=ok
// SIG undefined FUN_140b2b5b0(void)

void FUN_140b2b5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142ffafd0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146869260) && (_Init_thread_header(&DAT_146869260), DAT_146869260 == -1)) {
    uVar1 = AGExplodingRockProjectile::GetPrivateStaticClass();
    AGExplodingRockProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DesiredFlyToType",1);
    DAT_146869258 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869260);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146869258 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869258 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869258 + 0x30));
  }
  if ((*piVar5 < DAT_146869270) && (_Init_thread_header(&DAT_146869270), DAT_146869270 == -1)) {
    uVar1 = AGExplodingRockProjectile::GetPrivateStaticClass();
    AGExplodingRockProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsInstanced",1);
    DAT_146869268 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869270);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146869268 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869268 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869268 + 0x30));
  }
  if ((*piVar5 < DAT_146869280) && (_Init_thread_header(&DAT_146869280), DAT_146869280 == -1)) {
    uVar1 = AGExplodingRockProjectile::GetPrivateStaticClass();
    AGExplodingRockProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bPlayedCallout",1);
    DAT_146869278 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869280);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146869278 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869278 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869278 + 0x30));
  }
  if ((*piVar5 < DAT_146869290) && (_Init_thread_header(&DAT_146869290), DAT_146869290 == -1)) {
    uVar1 = AGExplodingRockProjectile::GetPrivateStaticClass();
    AGExplodingRockProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bPickupEquipped",1);
    DAT_146869288 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869290);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146869288 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869288 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869288 + 0x30));
  }
  if ((*piVar5 < DAT_1468692a0) && (_Init_thread_header(&DAT_1468692a0), DAT_1468692a0 == -1)) {
    uVar1 = AGExplodingRockProjectile::GetPrivateStaticClass();
    AGExplodingRockProjectile::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bNoLootBeam",1);
    DAT_146869298 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468692a0);
  }
  if (0 < *(int *)(DAT_146869298 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146869298 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146869298 + 0x30));
  }
  return;
}



// FUNCTION 140b2b970 FUN_140b2b970 body=441 status=ok
// SIG undefined FUN_140b2b970(void)

void FUN_140b2b970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468692d0) && (_Init_thread_header(&DAT_1468692d0), DAT_1468692d0 == -1)) {
    uVar1 = FUN_141481e80();
    FUN_141481e80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FirstDonor",1);
    DAT_1468692c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468692d0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468692c8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468692c8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468692c8 + 0x30));
  }
  if ((*piVar5 < DAT_1468692e0) && (_Init_thread_header(&DAT_1468692e0), DAT_1468692e0 == -1)) {
    uVar1 = FUN_141481e80();
    FUN_141481e80();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"LargestDonor",1);
    DAT_1468692d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468692e0);
  }
  if (0 < *(int *)(DAT_1468692d8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468692d8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468692d8 + 0x30));
  }
  FUN_140b2b5b0(param_1,param_2);
  return;
}



// FUNCTION 140b2bb30 FUN_140b2bb30 body=232 status=ok
// SIG undefined FUN_140b2bb30(void)

void FUN_140b2bb30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468692f0) && (_Init_thread_header(&DAT_1468692f0), DAT_1468692f0 == -1))
  {
    uVar1 = FUN_1414ba680();
    FUN_1414ba680();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsBarrierShield",1);
    DAT_1468692e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468692f0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_1468692e8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468692e8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468692e8 + 0x30));
  }
  return;
}



// FUNCTION 140b2bc20 FUN_140b2bc20 body=433 status=ok
// SIG undefined FUN_140b2bc20(void)

void FUN_140b2bc20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142ffbc70();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146869220) && (_Init_thread_header(&DAT_146869220), DAT_146869220 == -1)) {
    uVar1 = AEquipmentSkin::GetPrivateStaticClass();
    AEquipmentSkin::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FeaturedInventoryList",1);
    DAT_146869218 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869220);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146869218 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146869218 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869218 + 0x30));
  }
  if ((*piVar5 < DAT_146869230) && (_Init_thread_header(&DAT_146869230), DAT_146869230 == -1)) {
    uVar1 = AEquipmentSkin::GetPrivateStaticClass();
    AEquipmentSkin::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"LastResetCounter",1);
    DAT_146869228 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869230);
  }
  if (0 < *(int *)(DAT_146869228 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146869228 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146869228 + 0x30));
  }
  return;
}



// FUNCTION 140b2bde0 FUN_140b2bde0 body=232 status=ok
// SIG undefined FUN_140b2bde0(void)

void FUN_140b2bde0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142ffb8b0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146869240) && (_Init_thread_header(&DAT_146869240), DAT_146869240 == -1))
  {
    uVar1 = FUN_14142bde0();
    FUN_14142bde0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsInstanced",1);
    DAT_146869238 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146869240);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146869238 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146869238 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146869238 + 0x30));
  }
  return;
}



// FUNCTION 140b2bed0 FUN_140b2bed0 body=25 status=ok
// SIG undefined FUN_140b2bed0(void)

undefined8 * FUN_140b2bed0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x7dc);
  *param_2 = *(undefined8 *)(param_1 + 0x7d4);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140b2bef0 FUN_140b2bef0 body=43 status=ok
// SIG undefined FUN_140b2bef0(void)

undefined1 FUN_140b2bef0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140b2abc0();
  if (lVar1 != 0) {
    return 2;
  }
  return *(char *)(param_1 + 0x218) != '\0';
}



// FUNCTION 140b2bf20 FUN_140b2bf20 body=7 status=ok
// SIG undefined FUN_140b2bf20(void)

undefined4 FUN_140b2bf20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28c);
}



// FUNCTION 140b2bf30 FUN_140b2bf30 body=54 status=ok
// SIG undefined FUN_140b2bf30(void)

undefined8 FUN_140b2bf30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    uVar2 = FUN_14129a7f0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140b2bf70 FUN_140b2bf70 body=59 status=ok
// SIG undefined FUN_140b2bf70(void)

undefined8 FUN_140b2bf70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x3b0);
                    /* WARNING: Could not recover jumptable at 0x000140b2bf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x278))(plVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140b2bfb0 FUN_140b2bfb0 body=54 status=ok
// SIG undefined FUN_140b2bfb0(void)

undefined8 FUN_140b2bfb0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    uVar2 = FUN_14129e5e0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140b2bff0 FUN_140b2bff0 body=33 status=ok
// SIG undefined FUN_140b2bff0(void)

undefined8 FUN_140b2bff0(longlong param_1,undefined8 param_2)

{
  FText::FText(param_2,param_1 + 0x480);
  return param_2;
}



// FUNCTION 140b2c020 FUN_140b2c020 body=115 status=ok
// SIG undefined FUN_140b2c020(void)

longlong FUN_140b2c020(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x228) != 0) {
    return *(longlong *)(param_1 + 0x228);
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_1413ac760();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b2c07e;
  }
  lVar3 = 0;
LAB_140b2c07e:
  *(longlong *)(param_1 + 0x228) = lVar3;
  return lVar3;
}



// FUNCTION 140b2c0a0 FUN_140b2c0a0 body=76 status=ok
// SIG undefined FUN_140b2c0a0(void)

undefined4 FUN_140b2c0a0(longlong param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    return *(undefined4 *)(param_1 + 0x7b8);
  case 1:
    return *(undefined4 *)(param_1 + 0x7bc);
  case 2:
    return *(undefined4 *)(param_1 + 0x7c0);
  case 3:
    return *(undefined4 *)(param_1 + 0x7c4);
  case 4:
    return *(undefined4 *)(param_1 + 0x7c8);
  case 5:
    return *(undefined4 *)(param_1 + 0x7cc);
  default:
    return 0xffffffff;
  }
}



// FUNCTION 140b2c110 FUN_140b2c110 body=403 status=ok
// SIG undefined FUN_140b2c110(void)

undefined8 FUN_140b2c110(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x518);
    iVar2 = *(int *)(param_1 + 0x540);
    puStack_20 = (uint *)(param_1 + 0x528);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar2 != 0) {
      puVar7 = *(uint **)(param_1 + 0x538);
      if (*(uint **)(param_1 + 0x538) == (uint *)0x0) {
        puVar7 = puStack_20;
      }
      uVar3 = *puVar7;
      uStack_40 = 0;
      local_58 = 0;
      while (uVar3 == 0) {
        lVar6 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar4) goto LAB_140b2c1df;
        uVar3 = puVar7[lVar6 + 1];
      }
      uStack_54 = -uVar3 & uVar3;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar2 < local_48._4_4_) {
LAB_140b2c1df:
        local_48._4_4_ = iVar2;
      }
    }
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_40 = 0xffffffff;
    iStack_3c = local_48._4_4_;
    bVar4 = local_48._4_4_ < iVar2;
    local_30 = plVar1;
    local_48 = puStack_20;
    if (bVar4) {
      do {
        if (*(longlong *)(*(longlong *)((longlong)iStack_3c * 0x40 + *plVar1) + 0x10) == param_2) {
          *param_3 = *plVar1 + 8 + (longlong)iStack_3c * 0x40;
          return *(undefined8 *)((longlong)iStack_3c * 0x40 + *plVar1);
        }
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return 0;
}



// FUNCTION 140b2c2b0 FUN_140b2c2b0 body=139 status=ok
// SIG undefined FUN_140b2c2b0(void)

longlong FUN_140b2c2b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x518);
  piVar2 = (int *)TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
                  ::FindId(plVar1,local_res8,param_2);
  if (*piVar2 == -1) {
    return 0;
  }
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,param_2);
  if (local_res8[0] == -1) {
    return 0;
  }
  lVar4 = (longlong)local_res8[0] * 0x40 + *plVar1;
  lVar3 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 140b2c350 FUN_140b2c350 body=134 status=ok
// SIG undefined FUN_140b2c350(void)

undefined8 FUN_140b2c350(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
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
      lVar4 = *(longlong *)(lVar4 + 0x2c70);
      goto LAB_140b2c3ab;
    }
  }
  lVar4 = 0;
LAB_140b2c3ab:
  if (lVar4 != 0) {
    uVar3 = FUN_140aabba0(lVar4 + 0x1a68,param_2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140b2c3e0 FUN_140b2c3e0 body=66 status=ok
// SIG undefined FUN_140b2c3e0(void)

longlong FUN_140b2c3e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  if (lVar1 == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = 0;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      return *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0);
    }
  }
  return lVar1;
}



// FUNCTION 140b2c430 FUN_140b2c430 body=8 status=ok
// SIG undefined FUN_140b2c430(void)

undefined8 FUN_140b2c430(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5c0);
}



// FUNCTION 140b2c440 FUN_140b2c440 body=509 status=ok
// SIG undefined FUN_140b2c440(void)

void FUN_140b2c440(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_38 [4];
  
  plVar11 = (longlong *)0x0;
  uVar4 = 0;
  local_res8 = 0;
  FUN_142ffd600();
  (**(code **)(*param_1 + 0x470))(param_1,&local_res8);
  if (CONCAT44(uStackX_c,local_res8) == 0) {
LAB_140b2c4a2:
    local_38[0] = 0;
    local_38[1] = 6;
    bVar2 = false;
    bVar1 = true;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
    FGenericPlatformString::Memcpy(local_38[0],L"Error",0xc);
    plVar7 = local_38;
LAB_140b2c4db:
    FUN_142ab64b0(param_2,"DamageType",plVar7);
    if ((bVar1) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar2) && (local_38[2] != 0)) {
      FMemory::Free();
    }
    param_1 = param_1 + 0x76;
    cVar3 = FWeakObjectPtr::IsValid(param_1);
    if (cVar3 != '\0') {
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1);
      uVar4 = (**(code **)(*plVar7 + 0x278))(plVar7);
    }
    FUN_142ab61f0(param_2,"CurrentMayhemPartHash",uVar4);
    cVar3 = FWeakObjectPtr::IsValid(param_1);
    if (cVar3 != '\0') {
      uVar9 = FWeakObjectPtr::Get(param_1);
      uVar5 = FUN_14129e5e0(uVar9);
      plVar11 = (longlong *)(ulonglong)uVar5;
    }
    FUN_142ab61f0(param_2,"CurrentMayhemPartUIStatHash",plVar11);
    return;
  }
  lVar6 = FUN_142e49950();
  lVar12 = CONCAT44(uStackX_c,local_res8);
joined_r0x000140b2c48b:
  if (lVar12 != 0) {
    if (lVar12 != lVar6) goto code_r0x000140b2c499;
    plVar8 = (longlong *)FUN_142e49950();
    for (plVar7 = (longlong *)CONCAT44(uStackX_c,local_res8);
        (plVar10 = plVar11, plVar7 != (longlong *)0x0 &&
        (plVar10 = (longlong *)CONCAT44(uStackX_c,local_res8), plVar7 != plVar8));
        plVar7 = (longlong *)plVar7[6]) {
    }
    lVar12 = plVar10[0x1f];
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar12 = plVar10[0x1f];
      if (lVar12 != 0) goto LAB_140b2c5a0;
    }
    else {
LAB_140b2c5a0:
      lVar6 = FUN_1414193b0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        bVar2 = true;
        bVar1 = false;
        plVar7 = (longlong *)FUN_140a8c190(lVar12,local_38 + 2);
        goto LAB_140b2c4db;
      }
    }
  }
  goto LAB_140b2c4a2;
code_r0x000140b2c499:
  lVar12 = *(longlong *)(lVar12 + 0x30);
  goto joined_r0x000140b2c48b;
}



// FUNCTION 140b2c640 FUN_140b2c640 body=395 status=ok
// SIG undefined FUN_140b2c640(void)

void FUN_140b2c640(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_28 [4];
  
  local_res8 = 0;
  FUN_142ffd9f0();
  (**(code **)(*param_1 + 0x470))(param_1,&local_res8);
  if (CONCAT44(uStackX_c,local_res8) != 0) {
    lVar3 = FUN_142e49950();
    for (lVar7 = CONCAT44(uStackX_c,local_res8); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar3) {
        plVar4 = (longlong *)FUN_142e49950();
        plVar6 = (longlong *)CONCAT44(uStackX_c,local_res8);
        plVar5 = plVar6;
        goto joined_r0x000140b2c740;
      }
    }
  }
  goto LAB_140b2c6a2;
joined_r0x000140b2c740:
  if (plVar5 == (longlong *)0x0) goto LAB_140b2c750;
  if (plVar5 == plVar4) goto LAB_140b2c752;
  plVar5 = (longlong *)plVar5[6];
  goto joined_r0x000140b2c740;
LAB_140b2c750:
  plVar6 = (longlong *)0x0;
LAB_140b2c752:
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) goto LAB_140b2c6a2;
  }
  lVar3 = FUN_1414193b0();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    bVar2 = true;
    bVar1 = false;
    plVar5 = (longlong *)FUN_140a8c190(lVar7,local_28 + 2);
    goto LAB_140b2c6df;
  }
LAB_140b2c6a2:
  local_28[0] = 0;
  local_28[1] = 6;
  bVar2 = false;
  bVar1 = true;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Error",0xc);
  plVar5 = local_28;
LAB_140b2c6df:
  FUN_140b406c0(param_2,"DamageType",plVar5);
  if ((bVar1) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b2c7d0 FUN_140b2c7d0 body=87 status=ok
// SIG undefined FUN_140b2c7d0(void)

undefined4 FUN_140b2c7d0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0x6e0);
}



// FUNCTION 140b2c830 FUN_140b2c830 body=895 status=ok
// SIG undefined FUN_140b2c830(void)

int FUN_140b2c830(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    bVar2 = false;
    if (DVar4 == DAT_1468c21c0) goto LAB_140b2c882;
  }
  else {
LAB_140b2c882:
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  fVar19 = 1.0;
  fVar13 = 1.0;
  uVar6 = FUN_14301f8f0();
  lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
  if (lVar7 == 0) goto LAB_140b2cb67;
  lVar9 = *(longlong *)(lVar7 + 0x208);
  if (lVar9 == 0) {
LAB_140b2ca18:
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar9 = DAT_146b33f38;
    lVar11 = DAT_146b33f38 + 0xa0;
    lVar8 = FWeakObjectPtr::Get(lVar11);
    if (lVar8 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar9 + 0xa8)) && (*(longlong *)(lVar9 + 0xb0) != 0)) {
        lVar8 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar11,lVar8);
        if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar9 + 0xa8) = DAT_1464b56f4;
        }
        lVar8 = FWeakObjectPtr::Get(lVar11);
        if (lVar8 != 0) goto LAB_140b2caac;
      }
LAB_140b2cae2:
      lVar8 = 0;
    }
    else {
LAB_140b2caac:
      lVar9 = FUN_1413bd170();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140b2cae2;
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar9 = *(longlong *)(DAT_146b33f38 + 0x58);
    if ((lVar8 != 0) && (lVar9 != 0)) {
      lVar11 = *(longlong *)(param_1 + 0x488);
      if (lVar11 == 0) {
        if (lVar9 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(lVar9 + 0x2c0);
        }
      }
      if (*(longlong *)(lVar9 + 0x2c8) == lVar11) {
        uVar6 = FUN_140e4c810(lVar8);
        fVar13 = (float)FUN_142c98860(uVar6,param_2);
        goto LAB_140b2cb67;
      }
    }
    iVar5 = *(int *)(lVar7 + 0x1fc);
  }
  else {
    if (*(char *)(lVar9 + 0x220) == '\0') {
      puVar10 = *(undefined8 **)(param_1 + 0x4b8);
      puVar1 = puVar10 + *(int *)(param_1 + 0x4c0);
      for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        if ((longlong *)*puVar10 == param_2) {
          local_88 = *(undefined8 *)(param_1 + 0x418);
          uStack_80 = *(undefined8 *)(param_1 + 0x420);
          local_78 = *(undefined8 *)(param_1 + 0x428);
          uStack_70 = *(undefined8 *)(param_1 + 0x430);
          uVar12 = *(undefined4 *)(param_1 + 0x438);
          uVar14 = *(undefined4 *)(param_1 + 0x43c);
          uVar15 = *(undefined4 *)(param_1 + 0x440);
          uVar16 = *(undefined4 *)(param_1 + 0x444);
          uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x448);
          uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x448) >> 0x20);
          goto LAB_140b2c9d0;
        }
      }
      if (*(longlong **)(param_3 + 0xe80) == param_2) {
        local_88 = *(undefined8 *)(param_1 + 0x450);
        uStack_80 = *(undefined8 *)(param_1 + 0x458);
        local_78 = *(undefined8 *)(param_1 + 0x460);
        uStack_70 = *(undefined8 *)(param_1 + 0x468);
        uVar12 = *(undefined4 *)(param_1 + 0x470);
        uVar14 = *(undefined4 *)(param_1 + 0x474);
        uVar15 = *(undefined4 *)(param_1 + 0x478);
        uVar16 = *(undefined4 *)(param_1 + 0x47c);
        uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x480);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x480) >> 0x20);
      }
      else {
        local_88 = *(undefined8 *)(param_1 + 0x3e0);
        uStack_80 = *(undefined8 *)(param_1 + 1000);
        local_78 = *(undefined8 *)(param_1 + 0x3f0);
        uStack_70 = *(undefined8 *)(param_1 + 0x3f8);
        uVar12 = *(undefined4 *)(param_1 + 0x400);
        uVar14 = *(undefined4 *)(param_1 + 0x404);
        uVar15 = *(undefined4 *)(param_1 + 0x408);
        uVar16 = *(undefined4 *)(param_1 + 0x40c);
        uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x410);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x410) >> 0x20);
      }
LAB_140b2c9d0:
      _local_68 = CONCAT44(uVar14,uVar12);
      _uStack_60 = CONCAT44(uVar16,uVar15);
      local_58 = CONCAT44(uVar18,uVar17);
      fVar19 = (float)FUN_142c98860(&local_88,*(undefined8 *)(param_1 + 0x118));
    }
    if (*(char *)(lVar9 + 0x221) == '\0') goto LAB_140b2ca18;
    fVar13 = (float)FUN_142c98860(lVar9 + 0x1e8,*(undefined8 *)(param_3 + 0x848));
    iVar5 = (int)fVar13;
  }
  fVar13 = (float)iVar5;
LAB_140b2cb67:
  return -((int)ROUND(-0.5 - (fVar19 + fVar19) * fVar13) >> 1);
}



// FUNCTION 140b2cbb0 FUN_140b2cbb0 body=47 status=ok
// SIG undefined FUN_140b2cbb0(void)

undefined8 FUN_140b2cbb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    uVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140b2cbe0 FUN_140b2cbe0 body=291 status=ok
// SIG undefined FUN_140b2cbe0(void)

undefined1 FUN_140b2cbe0(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 local_28 [32];
  
  if (((*(char *)(param_1 + 0x598) == '\0') || (param_2 != '\0')) &&
     (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar3 = FUN_142e1a5a0();
    lVar4 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x118),uVar3);
    if (lVar4 != 0) {
      lVar5 = FUN_142e1a5a0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_142d62190(lVar4,local_28,*(undefined8 *)(param_1 + 0x4f0));
        cVar2 = FUN_142d52a00(local_28);
        if (cVar2 != '\0') {
          uVar3 = FUN_142d52a20(local_28);
          uVar3 = FArchive::operator<<(uVar3);
          fVar6 = (float)FUN_142d5fea0(uVar3);
          if (1.0 <= fVar6) {
            *(undefined1 *)(param_1 + 0x598) = 3;
            return *(undefined1 *)(param_1 + 0x598);
          }
          uVar3 = FUN_142d52a20(local_28);
          uVar3 = FArchive::operator<<(uVar3);
          fVar6 = (float)FUN_142d5fea0(uVar3);
          *(char *)(param_1 + 0x598) = (0.0 < fVar6) + '\x01';
        }
      }
    }
    return *(undefined1 *)(param_1 + 0x598);
  }
  return *(undefined1 *)(param_1 + 0x598);
}



// FUNCTION 140b2cd10 FUN_140b2cd10 body=150 status=ok
// SIG undefined FUN_140b2cd10(void)

void FUN_140b2cd10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar4 = *(undefined4 **)(param_1 + 0x80);
  puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0x88) * 2;
  do {
    if (puVar4 == puVar1) {
      FUN_140b478c0(param_2,param_1 + 0x60,param_3);
      return;
    }
    local_res8 = *puVar4;
    local_resc = puVar4[1];
    cVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(&local_res8);
      lVar3 = FUN_140b478c0(param_2,lVar3 + 0x60,param_3);
      if (lVar3 != 0) {
        return;
      }
    }
    puVar4 = puVar4 + 2;
  } while( true );
}



// FUNCTION 140b2cdb0 GetUserWidgetObject body=8 status=ok
// SIG undefined GetUserWidgetObject(void)

undefined8 UWidgetComponent::GetUserWidgetObject(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x6f8);
}



// FUNCTION 140b2cdc0 GetAppIcon body=8 status=ok
// SIG undefined GetAppIcon(void)

undefined8 FSlateApplication::GetAppIcon(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x6c0);
}



// FUNCTION 140b2cdd0 FUN_140b2cdd0 body=462 status=ok
// SIG undefined FUN_140b2cdd0(void)

float * FUN_140b2cdd0(longlong param_1,float *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *local_res20;
  
  if (param_3 == 0) goto LAB_140b2cf87;
  lVar2 = AWeaponBase::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar2 = FUN_1413ac760();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (param_3 = *(longlong *)(param_3 + 0x6e8), param_3 == 0)) goto LAB_140b2cf87;
  }
  lVar5 = param_1 + 0x28;
  lVar6 = 0;
  local_res20 = (int *)0x0;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  lVar2 = lVar6;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x30)) && (*(longlong *)(param_1 + 0x38) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x30) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 != 0) goto LAB_140b2cef6;
    }
  }
  else {
LAB_140b2cef6:
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = UXPrimaryDataAsset::GetPrivateStaticClass();
      lVar5 = lVar3;
      do {
        lVar2 = lVar3;
        if (lVar5 == lVar4) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar2 = lVar6;
      } while (lVar5 != 0);
    }
  }
  FUN_140b2c110(param_3,lVar2,&local_res20);
  if (local_res20 != (int *)0x0) {
    *(undefined1 *)(param_2 + 2) = 0xff;
    *param_2 = (float)*local_res20;
    *(undefined1 *)(param_2 + 2) = 0;
    return param_2;
  }
LAB_140b2cf87:
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *(undefined1 *)(param_2 + 2) = 0xff;
  return param_2;
}



// FUNCTION 140b2cfa0 FUN_140b2cfa0 body=373 status=ok
// SIG undefined FUN_140b2cfa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140b2cfa0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38 [2];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar2 = local_78._4_4_;
  *(undefined1 *)(param_2 + 8) = 0xff;
  uStack_70 = 0;
  local_78 = param_3;
  uVar4 = FUN_142caae50(&local_48,*(undefined8 *)(param_1 + 0x38),&local_78);
  iVar3 = FUN_142cc45a0(uVar4,1);
  iVar3 = iVar3 + -1;
  if (iVar3 < 3) {
    if (iVar3 < 0) {
      return param_2;
    }
  }
  else {
    iVar3 = 2;
  }
  local_68 = *(undefined8 *)(param_1 + 0x28);
  puVar6 = &DAT_146868fe0;
  local_60 = *(undefined8 *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\0') {
    puVar6 = &DAT_146868ff8;
  }
  uStack_70 = 0;
  local_78._0_4_ = (undefined4)param_3;
  local_58 = *(undefined8 *)(puVar6 + (longlong)iVar3 * 8);
  local_48 = (undefined4)local_78;
  uStack_44 = uVar2;
  uStack_40 = 0;
  uStack_3c = 0;
  local_78 = param_3;
  local_38[0] = FUN_142ca2f00(*(undefined8 *)(param_1 + 0x40),&local_48,0x3f800000);
  local_30 = 0;
  lVar5 = FUN_142df1610(&local_68,&local_78,param_3);
  FUN_142cb5500(lVar5,local_38);
  uStack_40 = CONCAT31(uStack_40._1_3_,0xff);
  FUN_140a2f480(&local_48,lVar5);
  cVar1 = *(char *)(lVar5 + 8);
  switch(cVar1) {
  case '\0':
    bVar7 = cVar1 == '\0';
    break;
  case '\x01':
    bVar7 = cVar1 == '\x01';
    break;
  case '\x02':
    bVar7 = cVar1 == '\x02';
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    bVar7 = cVar1 == '\x03';
    break;
  default:
    goto switchD_140b2d0d4_default;
  }
  if (bVar7) {
    *(undefined1 *)(lVar5 + 8) = 0xff;
  }
switchD_140b2d0d4_default:
  FUN_140a2f480(param_2,&local_48);
  return param_2;
}



// FUNCTION 140b2d130 FUN_140b2d130 body=455 status=ok
// SIG undefined FUN_140b2d130(void)

undefined8 * FUN_140b2d130(longlong param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_res20;
  
  if (param_3 == 0) goto LAB_140b2d2e0;
  lVar2 = AWeaponBase::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar2 = FUN_1413ac760();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (param_3 = *(longlong *)(param_3 + 0x6e8), param_3 == 0)) goto LAB_140b2d2e0;
  }
  lVar5 = param_1 + 0x28;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  lVar6 = 0;
  lVar2 = lVar6;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x30)) && (*(longlong *)(param_1 + 0x38) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x30) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 != 0) goto LAB_140b2d251;
    }
  }
  else {
LAB_140b2d251:
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = UXPrimaryDataAsset::GetPrivateStaticClass();
      lVar5 = lVar3;
      do {
        lVar2 = lVar3;
        if (lVar5 == lVar4) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar2 = lVar6;
      } while (lVar5 != 0);
    }
  }
  lVar2 = FUN_140b2c110(param_3,lVar2,&local_res20);
  if (lVar2 != 0) {
    uVar7 = FUN_140afed70(lVar2,local_res20);
    *(undefined4 *)param_2 = uVar7;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_140b2d2e0:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 1) = 0xff;
  return param_2;
}



// FUNCTION 140b2d300 FUN_140b2d300 body=763 status=ok
// SIG undefined FUN_140b2d300(void)

float * FUN_140b2d300(longlong param_1,float *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 local_res20 [8];
  uint local_a8;
  uint uStack_a4;
  int iStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_80;
  uint *local_78;
  uint uStack_70;
  int iStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  
  if (param_3 == 0) {
LAB_140b2d5d9:
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 2) = 0xff;
    return param_2;
  }
  lVar6 = FUN_1414ba680();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_140b2d5d9;
  uVar7 = FWeakObjectPtr::Get(param_1 + 0x28);
  uVar11 = 0;
  iVar15 = 0;
  uVar14 = uVar11;
  if (uVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x30)) || (*(longlong *)(param_1 + 0x38) == 0))
    goto LAB_140b2d451;
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1 + 0x28,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x30) = DAT_1464b56f4;
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x28);
    if (uVar7 == 0) goto LAB_140b2d451;
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar8 = FUN_1414bf1a0();
    uVar10 = uVar7;
    do {
      uVar14 = uVar7;
      if (uVar10 == uVar8) break;
      uVar10 = *(ulonglong *)(uVar10 + 0x30);
      uVar14 = uVar11;
    } while (uVar10 != 0);
  }
LAB_140b2d451:
  lVar6 = *(longlong *)(param_1 + 0x50);
  plVar12 = (longlong *)(param_3 + 0x510);
  iVar1 = *(int *)(param_3 + 0x538);
  local_78 = (uint *)(param_3 + 0x520);
  uStack_a4 = 1;
  local_a8 = 0;
  iStack_94 = 0;
  uStack_90 = 0;
  if (iVar1 != 0) {
    puVar13 = *(uint **)(param_3 + 0x530);
    if (*(uint **)(param_3 + 0x530) == (uint *)0x0) {
      puVar13 = local_78;
    }
    uVar2 = *puVar13;
    uVar7 = uVar11;
    while (uVar2 == 0) {
      iVar5 = (int)uVar11;
      uStack_90 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_90;
      local_a8 = iVar5 + 1;
      uVar11 = (ulonglong)local_a8;
      iStack_94 = iVar1;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140b2d507;
      uVar2 = puVar13[(longlong)iVar5 + 1];
    }
    uStack_a4 = -uVar2 & uVar2;
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
    iStack_94 = (uStack_90 - iVar5) + 0x1f;
    if (iVar1 < iStack_94) {
      iStack_94 = iVar1;
    }
  }
LAB_140b2d507:
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_70 = 0xffffffff;
  iStack_6c = iStack_94;
  local_68 = CONCAT44(uStack_8c,uStack_90);
  local_60 = plVar12;
  uStack_58 = uStack_80;
  puStack_50 = local_78;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  iStack_44 = iStack_6c;
  if (iStack_94 < iVar1) {
    do {
      iVar1 = iStack_6c;
      lVar3 = *(longlong *)((longlong)iStack_6c * 0x40 + *plVar12);
      if ((*(ulonglong *)(lVar3 + 0x10) == uVar14) &&
         (plVar9 = (longlong *)
                   TBaseUObjectMethodDelegateInstance<1,UBorder,FSlateBrush_const_*___ptr64___cdecl(void),TAttribute<FSlateBrush>_>
                   ::GetHandle(lVar3,local_res20), *plVar9 == lVar6)) {
        iVar15 = *(int *)((longlong)iVar1 * 0x40 + 0x10 + *plVar12);
        break;
      }
      uStack_70 = uStack_70 & ~uStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  *param_2 = (float)iVar15;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 140b2d600 FUN_140b2d600 body=380 status=ok
// SIG undefined FUN_140b2d600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140b2d600(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38 [2];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_2 + 8) = 0xff;
  FUN_140a393e0(param_2);
  local_78._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar2 = local_78._4_4_;
  uStack_70 = 0;
  local_78 = param_3;
  fVar7 = (float)FUN_142ca2f00(*(undefined8 *)(param_1 + 0x38),&local_78,0x3f800000);
  iVar4 = (int)(fVar7 - 1.0);
  if (iVar4 < 3) {
    if (iVar4 < 0) {
      return param_2;
    }
  }
  else {
    iVar4 = 2;
  }
  local_68 = *(undefined8 *)(param_1 + 0x28);
  puVar5 = &DAT_146868fe0;
  local_60 = *(undefined8 *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x48) == '\0') {
    puVar5 = &DAT_146868ff8;
  }
  uStack_70 = 0;
  local_78._0_4_ = (undefined4)param_3;
  local_58 = *(undefined8 *)(puVar5 + (longlong)iVar4 * 8);
  local_48 = (undefined4)local_78;
  uStack_44 = uVar2;
  uStack_40 = 0;
  uStack_3c = 0;
  local_78 = param_3;
  local_38[0] = FUN_142ca2f00(*(undefined8 *)(param_1 + 0x40),&local_48,0x3f800000);
  local_30 = 0;
  lVar3 = FUN_142df1610(&local_68,&local_78,param_3);
  FUN_142cb5500(lVar3,local_38);
  uStack_40 = CONCAT31(uStack_40._1_3_,0xff);
  FUN_140a2f480(&local_48,lVar3);
  cVar1 = *(char *)(lVar3 + 8);
  switch(cVar1) {
  case '\0':
    bVar6 = cVar1 == '\0';
    break;
  case '\x01':
    bVar6 = cVar1 == '\x01';
    break;
  case '\x02':
    bVar6 = cVar1 == '\x02';
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    bVar6 = cVar1 == '\x03';
    break;
  default:
    goto switchD_140b2d73b_default;
  }
  if (bVar6) {
    *(undefined1 *)(lVar3 + 8) = 0xff;
  }
switchD_140b2d73b_default:
  FUN_140a2f480(param_2,&local_48);
  return param_2;
}



// FUNCTION 140b2d7a0 FUN_140b2d7a0 body=997 status=ok
// SIG undefined FUN_140b2d7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x000140b2da68 : 6 cases all go to same destination
    */

float * FUN_140b2d7a0(longlong param_1,float *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
LAB_140b2db72:
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 2) = 0xff;
    return param_2;
  }
  lVar2 = FUN_1414ba680();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140b2db72;
  if (*(char *)(param_1 + 0x60) != '\0') {
    if (*(char *)(param_1 + 0x60) == '\x01') {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
      lVar7 = 0;
      lVar2 = lVar7;
      if (lVar3 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 == *(int *)(param_1 + 0x30)) ||
           (local_68 = 0, *(longlong *)(param_1 + 0x38) == 0)) goto LAB_140b2da09;
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x28,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x30) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
        if (lVar3 == 0) goto LAB_140b2da09;
      }
      lVar4 = FUN_14171bfe0();
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
        lVar5 = FUN_1414bf1a0();
        lVar4 = lVar3;
        do {
          lVar2 = lVar3;
          if (lVar4 == lVar5) break;
          lVar4 = *(longlong *)(lVar4 + 0x30);
          lVar2 = lVar7;
        } while (lVar4 != 0);
      }
LAB_140b2da09:
      uVar6 = FUN_142caac20(param_1 + 0x68,local_60,param_3);
      fVar8 = (float)FUN_142cc4350(uVar6,0);
      fVar9 = (float)FUN_140b27780(param_3,lVar2,*(undefined8 *)(param_1 + 0x58),
                                   *(undefined1 *)(param_1 + 0x50));
      *param_2 = fVar8 * fVar9;
      *(undefined1 *)(param_2 + 2) = 0;
      return param_2;
    }
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
    lVar7 = 0;
    lVar2 = lVar7;
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x30)) &&
         (local_68 = 0, *(longlong *)(param_1 + 0x38) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x28,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x30) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
        if (lVar3 != 0) goto LAB_140b2d8a9;
      }
    }
    else {
LAB_140b2d8a9:
      lVar4 = FUN_14171bfe0();
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
        lVar5 = FUN_1414bf1a0();
        lVar4 = lVar3;
        do {
          lVar2 = lVar3;
          if (lVar4 == lVar5) break;
          lVar4 = *(longlong *)(lVar4 + 0x30);
          lVar2 = lVar7;
        } while (lVar4 != 0);
      }
    }
    fVar8 = (float)FUN_140b27780(param_3,lVar2,*(undefined8 *)(param_1 + 0x58),
                                 *(undefined1 *)(param_1 + 0x50));
    *param_2 = fVar8;
    goto LAB_140b2d911;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
  lVar7 = 0;
  lVar2 = lVar7;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x30)) &&
       (local_68 = 0, *(longlong *)(param_1 + 0x38) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 0x28,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x30) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
      if (lVar3 != 0) goto LAB_140b2dae2;
    }
  }
  else {
LAB_140b2dae2:
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
      lVar5 = FUN_1414bf1a0();
      lVar4 = lVar3;
      do {
        lVar2 = lVar3;
        if (lVar4 == lVar5) break;
        lVar4 = *(longlong *)(lVar4 + 0x30);
        lVar2 = lVar7;
      } while (lVar4 != 0);
    }
  }
  uVar6 = FUN_142caac20(param_1 + 0x68,local_54,param_3);
  fVar8 = (float)FUN_142cc4350(uVar6,0);
  fVar9 = (float)FUN_140b27780(param_3,lVar2,*(undefined8 *)(param_1 + 0x58),
                               *(undefined1 *)(param_1 + 0x50));
  *param_2 = fVar8 + fVar9;
LAB_140b2d911:
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 140b2dba0 FUN_140b2dba0 body=377 status=ok
// SIG undefined FUN_140b2dba0(void)

void FUN_140b2dba0(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (param_4 != 0) {
    iVar3 = 0;
    if ((undefined *)*param_2 != &DAT_14428cd1c) {
      *(undefined4 *)(param_2 + 1) = 0;
      iVar2 = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
        iVar2 = *(int *)(param_2 + 1);
      }
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
    }
    if ((undefined *)*param_3 != &DAT_14428cd64) {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3);
        iVar3 = *(int *)(param_3 + 1);
      }
      *(int *)(param_3 + 1) = iVar3;
      if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
      }
    }
    if (1 < *(int *)(param_1 + 8)) {
      _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
      FUN_142fde710(local_98,param_1);
      cVar1 = FUN_143001780(local_78,local_98);
      if (local_90 != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        if ((local_68 != 0) && (*(longlong *)(local_68 + 0xb8) != 0)) {
          FString::operator=(param_2,*(longlong *)(local_68 + 0xb8) + 0x58);
        }
        if (local_70 != 0) {
          FString::operator=(param_3,local_70 + 0xe0);
        }
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b2dd20 FUN_140b2dd20 body=211 status=ok
// SIG undefined FUN_140b2dd20(void)

longlong FUN_140b2dd20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x88;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x90)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x98) == 0) {
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
      *(int *)(param_1 + 0x90) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_1414eba50();
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



// FUNCTION 140b2de00 FUN_140b2de00 body=182 status=ok
// SIG undefined FUN_140b2de00(void)

undefined8 FUN_140b2de00(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_4 != (longlong *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = (**(code **)(*param_4 + 0x950))(param_4), cVar2 != '\0')) {
      return 0;
    }
  }
  lVar4 = FUN_142df3510(param_4);
  if (lVar4 == 0) {
    return 0;
  }
  iVar3 = FUN_142dec940(lVar4,param_2);
  if (iVar3 == 2) {
    *(undefined4 *)(param_2 + 0x760) = *(undefined4 *)(param_1 + 0x48);
    FUN_140b26e10(param_2);
  }
  return 1;
}



// FUNCTION 140b2dec0 FUN_140b2dec0 body=3544 status=ok
// SIG undefined FUN_140b2dec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b2dec0(longlong param_1,longlong *param_2,longlong param_3,int *param_4,
                  ulonglong param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined7 uVar19;
  longlong *plVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  int *local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  int *local_1a0;
  undefined4 local_198;
  undefined8 local_188;
  int *piStack_180;
  longlong local_168;
  undefined8 local_148;
  undefined4 local_140;
  ulonglong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  float local_118;
  float local_114;
  float local_110;
  int *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  ulonglong local_88;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_188 = (longlong *)param_2[0xf7];
  piStack_180 = (int *)param_2[0xf8];
  local_168 = param_2[0xfb];
  local_138 = param_5;
  if ((char)param_2[0xfa] != '\0') {
    return;
  }
  plVar13 = (longlong *)param_2[0xdf];
  local_1a0 = param_4;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x638))(plVar13,0);
  }
  uVar10 = FWeakObjectPtr::Get(param_4 + 0x1d);
  FUN_1422232e0(param_2,uVar10,&DAT_146532180,*(undefined8 *)(param_4 + 0x20));
  fVar23 = 0.0;
  fVar25 = 1.0;
  if (0.95 < ABS((float)param_4[0xd])) {
    fVar23 = 1.0;
    fVar25 = 0.0;
  }
  fVar22 = (float)param_4[0xc];
  fVar1 = (float)param_4[0xd];
  fVar2 = (float)param_4[0xb];
  fVar24 = fVar2 * fVar25 - fVar1 * fVar23;
  local_114 = -(fVar22 * fVar25) * fVar1 - fVar2 * fVar22 * fVar23;
  local_110 = fVar2 * fVar24 - -(fVar22 * fVar25) * fVar22;
  local_118 = fVar22 * fVar22 * fVar23 - fVar24 * fVar1;
  uVar10 = FRotationMatrix::MakeFromXZ(&local_188,&local_118);
  FMatrix::Rotator(uVar10,&local_108);
  local_1b8 = local_108;
  local_1b0 = local_100;
  AActor::SetActorRotation(param_2,&local_1b8,0);
  uVar10 = FWeakObjectPtr::Get(param_4 + 0x1b);
  local_1e8 = param_5;
  local_1e0 = param_4;
  FUN_1413b6b40(param_1,param_2,param_3,uVar10);
  plVar13 = (longlong *)param_2[0xe5];
  if (plVar13 != (longlong *)0x0) {
    *(undefined1 *)(plVar13 + 0x59) = 0;
    (**(code **)(*plVar13 + 0x288))();
  }
  if (param_3 != 0) {
    uVar10 = FUN_1413b0c30();
    lVar11 = FUN_140b2c110(param_3,uVar10,&local_1b8);
    if (lVar11 != 0) {
      lVar12 = FUN_1413b0c30();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (bVar21) {
        FUN_140b10510(lVar11,param_2);
      }
    }
  }
  uVar10 = FWeakObjectPtr::Get(param_4 + 0x1b);
  local_1e8 = param_5;
  cVar9 = FUN_140b2de00(param_1,param_2,param_3,uVar10);
  if (cVar9 != '\0') {
    plVar13 = (longlong *)FWeakObjectPtr::Get(param_4 + 0x1b);
    uVar10 = UScrollBox::GetPrivateStaticClass();
    lVar11 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar10);
    if (lVar11 != 0) {
      lVar12 = UScrollBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar21 = false;
      }
      else {
        bVar21 = true;
      }
      if (bVar21) {
        pwVar14 = _guard_xfg_dispatch_icall_nop(L"&AGrenade::UnstickGrenade",L"::");
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar14, pwVar4 != (wchar_t *)0x0) {
          pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_1a0,pwVar5 + 2,1);
        piVar18 = local_1a0;
        plVar20 = (longlong *)(lVar11 + 600);
        FWeakObjectPtr::operator=(&local_188,0);
        piStack_180 = (int *)0x0;
        FWeakObjectPtr::operator=(&local_188,param_2);
        piStack_180 = piVar18;
        local_1a8 = 0;
        if ((piVar18 != (int *)0x0) && (lVar12 = FWeakObjectPtr::Get(&local_188), lVar12 != 0)) {
          UObject::FindFunction(lVar12,piStack_180);
        }
        piVar18 = (int *)*plVar20;
        iVar3 = *(int *)(lVar11 + 0x260);
        for (piVar17 = piVar18; piVar17 != piVar18 + (longlong)iVar3 * 4; piVar17 = piVar17 + 4) {
          if (((*piVar17 == (int)local_188) &&
              (local_188._4_4_ = (int)((ulonglong)local_188 >> 0x20),
              bVar21 = piVar17[1] == local_188._4_4_, bVar21)) ||
             ((cVar9 = FWeakObjectPtr::IsValid(piVar17), cVar9 == '\0' &&
              (cVar9 = FWeakObjectPtr::IsValid(&local_188), cVar9 == '\0')))) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if ((bVar21) && (*(int **)(piVar17 + 2) == piStack_180)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          if (bVar21) {
            if ((int)((longlong)piVar17 - (longlong)piVar18 >> 4) != -1) goto LAB_140b2e2e6;
            break;
          }
        }
        iVar3 = *(int *)(lVar11 + 0x260);
        *(int *)(lVar11 + 0x260) = iVar3 + 1;
        if (*(int *)(lVar11 + 0x264) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar3);
        }
        puVar16 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar20);
        *puVar16 = (int)local_188;
        puVar16[1] = local_188._4_4_;
        *(int **)(puVar16 + 2) = piStack_180;
LAB_140b2e2e6:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar20);
        param_5 = local_138;
      }
    }
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&AGrenade::OnStuckGrenadeActorDestroyed",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar14, pwVar4 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_1a0,pwVar5 + 2,1);
    piVar18 = local_1a0;
    plVar20 = plVar13 + 0x52;
    FWeakObjectPtr::operator=(&local_188,0);
    piStack_180 = (int *)0x0;
    FWeakObjectPtr::operator=(&local_188,param_2);
    piStack_180 = piVar18;
    local_138 = 0;
    if ((piVar18 != (int *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_188), lVar11 != 0)) {
      UObject::FindFunction(lVar11,piStack_180);
    }
    piVar18 = (int *)*plVar20;
    lVar11 = plVar13[0x53];
    for (piVar17 = piVar18; piVar17 != piVar18 + (longlong)(int)lVar11 * 4; piVar17 = piVar17 + 4) {
      if (((*piVar17 == (int)local_188) &&
          (local_188._4_4_ = (int)((ulonglong)local_188 >> 0x20),
          bVar21 = piVar17[1] == local_188._4_4_, bVar21)) ||
         ((cVar9 = FWeakObjectPtr::IsValid(piVar17), cVar9 == '\0' &&
          (cVar9 = FWeakObjectPtr::IsValid(&local_188), cVar9 == '\0')))) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      if ((bVar21) && (*(int **)(piVar17 + 2) == piStack_180)) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      if (bVar21) {
        if ((int)((longlong)piVar17 - (longlong)piVar18 >> 4) != -1) goto LAB_140b2e435;
        break;
      }
    }
    iVar3 = (int)plVar13[0x53];
    *(int *)(plVar13 + 0x53) = iVar3 + 1;
    if (*(int *)((longlong)plVar13 + 0x29c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar3);
    }
    puVar16 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar20);
    *puVar16 = (int)local_188;
    puVar16[1] = local_188._4_4_;
    *(int **)(puVar16 + 2) = piStack_180;
LAB_140b2e435:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar20);
    goto LAB_140b2eb80;
  }
  *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_1 + 0x60);
  FUN_140b26e10(param_2);
  FUN_1417846f0(param_2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_1a8 = 0;
  uVar10 = FUN_142a175e0();
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = (int *)0x0;
  local_1e8 = local_1e8 & 0xffffffff00000000;
  plVar13 = (longlong *)FUN_1417985e0(uVar10,param_2,0,0);
  if (plVar13 == (longlong *)0x0) {
    lVar11 = *(longlong *)(param_1 + 0x80);
    if (lVar11 != 0) {
      local_1b0 = 0;
      lVar12 = param_2[0x2d];
      local_1b8 = (int *)0x0;
      if (lVar12 == 0) {
        local_1a0 = _DAT_1468b5d90;
        local_198 = DAT_1468b5d98;
      }
      else {
        local_1a0 = *(int **)(lVar12 + 0x220);
        local_198 = *(undefined4 *)(lVar12 + 0x228);
      }
      local_140 = local_198;
      local_148 = local_1a0;
      uVar10 = (**(code **)(*param_2 + 0x148))(param_2);
      local_1e0 = (int *)&local_1b8;
      local_1e8 = CONCAT44(local_1e8._4_4_,0x42480000);
      FUN_1405a1e30(&local_188,uVar10,lVar11,&local_148);
      FUN_140591060(&local_188);
    }
  }
  else {
    FUN_1423974f0(plVar13,1);
    (**(code **)(*plVar13 + 0x648))(plVar13,0xe);
    (**(code **)(*plVar13 + 0x838))(plVar13,0);
    (**(code **)(*plVar13 + 0x830))(plVar13,2,1);
    (**(code **)(*plVar13 + 0x638))(plVar13,1);
    pwVar14 = _guard_xfg_dispatch_icall_nop
                        (L"&UGrenadeBehavior_PayloadSticky::StuckGrenadeOverlappedActor",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar14, pwVar4 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_1b8,pwVar5 + 2,1);
    piVar18 = local_1b8;
    plVar20 = plVar13 + 0xae;
    FWeakObjectPtr::operator=(&local_188,0);
    piStack_180 = (int *)0x0;
    FWeakObjectPtr::operator=(&local_188,param_1);
    piStack_180 = piVar18;
    local_1a8 = 0;
    if ((piVar18 != (int *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_188), lVar11 != 0)) {
      UObject::FindFunction(lVar11,piStack_180);
    }
    piVar18 = (int *)*plVar20;
    piVar17 = piVar18 + (longlong)(int)plVar13[0xaf] * 4;
    local_148 = piVar18;
    for (; piVar18 != piVar17; piVar18 = piVar18 + 4) {
      if (((*piVar18 == (int)local_188) &&
          (local_188._4_4_ = (int)((ulonglong)local_188 >> 0x20),
          bVar21 = piVar18[1] == local_188._4_4_, bVar21)) ||
         ((cVar9 = FWeakObjectPtr::IsValid(piVar18), cVar9 == '\0' &&
          (cVar9 = FWeakObjectPtr::IsValid(&local_188), cVar9 == '\0')))) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      if ((bVar21) && (*(int **)(piVar18 + 2) == piStack_180)) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      if (bVar21) {
        if ((int)((longlong)piVar18 - (longlong)local_148 >> 4) != -1) goto LAB_140b2e63d;
        break;
      }
    }
    iVar3 = (int)plVar13[0xaf];
    *(int *)(plVar13 + 0xaf) = iVar3 + 1;
    if (*(int *)((longlong)plVar13 + 0x57c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar3);
    }
    puVar16 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar20);
    *puVar16 = (int)local_188;
    puVar16[1] = local_188._4_4_;
    *(int **)(puVar16 + 2) = piStack_180;
LAB_140b2e63d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar20);
    pwVar14 = _guard_xfg_dispatch_icall_nop
                        (L"&UGrenadeBehavior_PayloadSticky::StuckGrenadeUnoverlappedActor",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar14, pwVar4 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_1b8,pwVar5 + 2,1);
    piVar18 = local_1b8;
    plVar20 = plVar13 + 0xb0;
    FWeakObjectPtr::operator=(&local_188,0);
    piStack_180 = (int *)0x0;
    FWeakObjectPtr::operator=(&local_188,param_1);
    piStack_180 = piVar18;
    local_1a8 = 0;
    if ((piVar18 != (int *)0x0) && (lVar11 = FWeakObjectPtr::Get(&local_188), lVar11 != 0)) {
      UObject::FindFunction(lVar11,piStack_180);
    }
    piVar18 = (int *)*plVar20;
    piVar17 = piVar18 + (longlong)(int)plVar13[0xb1] * 4;
    local_148 = piVar18;
    for (; piVar18 != piVar17; piVar18 = piVar18 + 4) {
      if (((*piVar18 == (int)local_188) &&
          (local_188._4_4_ = (int)((ulonglong)local_188 >> 0x20),
          bVar21 = piVar18[1] == local_188._4_4_, bVar21)) ||
         ((cVar9 = FWeakObjectPtr::IsValid(piVar18), cVar9 == '\0' &&
          (cVar9 = FWeakObjectPtr::IsValid(&local_188), cVar9 == '\0')))) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      if ((bVar21) && (*(int **)(piVar18 + 2) == piStack_180)) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
      }
      if (bVar21) {
        if ((int)((longlong)piVar18 - (longlong)local_148 >> 4) != -1) goto LAB_140b2e78d;
        break;
      }
    }
    iVar3 = (int)plVar13[0xb1];
    *(int *)(plVar13 + 0xb1) = iVar3 + 1;
    if (*(int *)((longlong)plVar13 + 0x58c) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar3);
    }
    puVar16 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar20);
    *puVar16 = (int)local_188;
    puVar16[1] = local_188._4_4_;
    *(int **)(puVar16 + 2) = piStack_180;
LAB_140b2e78d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar20);
    puVar16 = &DAT_146532184;
    local_1a8 = 0;
    FUN_142382f60(plVar13,param_2[0x2d],&DAT_146532184,0);
    FUN_14234b150(plVar13);
    lVar11 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar11 == 0) {
      FUN_1409d4e20(param_2);
      uVar19 = (undefined7)((ulonglong)puVar16 >> 8);
      FUN_1423bc010(plVar13);
      (**(code **)(*plVar13 + 0x488))(plVar13,0,CONCAT71(uVar19,1),0);
    }
    else {
      local_188 = (longlong *)0x0;
      piStack_180 = (int *)((ulonglong)piStack_180 & 0xffffffff00000000);
      FWeakObjectPtr::operator=(&local_128,param_2);
      FWeakObjectPtr::operator=(&local_148,plVar13);
      FWeakObjectPtr::operator=(&local_1b8,param_1);
      uVar7 = (undefined4)local_128;
      uVar8 = local_128._4_4_;
      uVar6 = (undefined4)local_148;
      local_130 = local_148._4_4_;
      local_12c = (undefined4)local_1b8;
      local_1a8 = CONCAT44(local_1a8._4_4_,local_1b8._4_4_);
      plVar13 = (longlong *)FMemory::Realloc(0,0x40);
      if (plVar13 == (longlong *)0x0) {
        if ((((int)piStack_180 != 0) && (local_188 != (longlong *)0x0)) &&
           ((**(code **)(*local_188 + 0x28))(local_188,0), local_188 != (longlong *)0x0)) {
          local_188 = (longlong *)FMemory::Realloc(local_188,0,0);
        }
      }
      else {
        *plVar13 = (longlong)&PTR_GetPoolName_1442abae8;
        *(undefined4 *)(plVar13 + 1) = uVar7;
        *(undefined4 *)((longlong)plVar13 + 0xc) = uVar8;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_130;
        *(undefined4 *)(plVar13 + 2) = uVar6;
        *(undefined4 *)(plVar13 + 3) = local_12c;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = (undefined4)local_1a8;
        plVar13[4] = param_1;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar13[6] = lVar11;
        *plVar13 = (longlong)&PTR_GetPoolName_1442abb30;
        FUN_140b21da0(plVar13,&local_188);
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        lVar11 = FMemory::Realloc(plVar13,0,0);
        if (lVar11 != 0) {
          FMemory::Free(lVar11);
        }
      }
      lVar11 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar11 + 400) == 0) {
        uVar10 = *(undefined8 *)(lVar11 + 0x3f8);
      }
      else {
        uVar10 = *(undefined8 *)(*(longlong *)(lVar11 + 400) + 0x90);
      }
      local_f8 = 0;
      local_f0 = 0;
      if (((int)piStack_180 != 0) && (local_188 != (longlong *)0x0)) {
        (**(code **)(*local_188 + 0x30))(local_188,&local_f8);
      }
      FWeakObjectPtr::operator=(local_e8,0);
      local_e0 = 0;
      local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      FUN_142880af0(uVar10,&local_f8);
      if (local_98 != 0) {
        plVar13 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar13 = local_a8;
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
      if ((int)piStack_180 != 0) {
        if (local_188 == (longlong *)0x0) goto LAB_140b2ea0a;
        (**(code **)(*local_188 + 0x28))(local_188,0);
        if (local_188 != (longlong *)0x0) {
          local_188 = (longlong *)FMemory::Realloc(local_188,0,0);
        }
        piStack_180 = (int *)((ulonglong)piStack_180 & 0xffffffff00000000);
      }
      if (local_188 != (longlong *)0x0) {
        FMemory::Free(local_188);
      }
    }
LAB_140b2ea0a:
    lVar11 = *(longlong *)(param_1 + 0x88);
    if (lVar11 != 0) {
      local_140 = 0;
      lVar12 = param_2[0x2d];
      local_148 = (int *)0x0;
      if (lVar12 == 0) {
        local_1b8 = _DAT_1468b5d90;
        local_1b0 = DAT_1468b5d98;
      }
      else {
        local_1b8 = *(int **)(lVar12 + 0x220);
        local_1b0 = *(undefined4 *)(lVar12 + 0x228);
      }
      local_120 = local_1b0;
      local_128 = local_1b8;
      uVar10 = (**(code **)(*param_2 + 0x148))(param_2);
      local_1e0 = (int *)&local_148;
      local_1e8 = CONCAT44(local_1e8._4_4_,0x42480000);
      FUN_1405a1e30(&local_188,uVar10,lVar11,&local_128);
      FUN_140591060(&local_188);
    }
    param_5 = local_138;
    param_4 = local_1a0;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_140b1a280(param_2);
      param_5 = local_138;
      param_4 = local_1a0;
    }
  }
  puVar15 = (undefined8 *)FName::FName(&local_1a0,&DAT_14428c38c,1);
  lVar11 = FUN_140b1a100(param_2,*(undefined8 *)(param_1 + 0x50),*puVar15,1);
  if (lVar11 != 0) {
    fVar23 = *(float *)(param_1 + 0x68);
    fVar25 = *(float *)(param_1 + 100);
    fVar22 = (float)FUN_1409d4e20(param_2);
    if ((fVar25 <= fVar22) && (fVar25 = fVar22, fVar23 <= fVar22)) {
      fVar25 = fVar23;
    }
    FUN_14260f0c0(lVar11,*(undefined8 *)(param_1 + 0x58),fVar25);
    puVar15 = (undefined8 *)FVector::Rotation(param_4 + 0xe,&local_148);
    local_1e8 = local_1e8 & 0xffffffffffffff00;
    local_1b8 = (int *)*puVar15;
    local_1b0 = *(undefined4 *)(puVar15 + 1);
    FUN_142399b90(lVar11,&local_1b8,0,0);
  }
LAB_140b2eb80:
  *(int *)(param_5 + 0x28) = *(int *)(param_5 + 0x28) + 1;
  return;
}



// FUNCTION 140b2eca0 FUN_140b2eca0 body=546 status=ok
// SIG undefined FUN_140b2eca0(void)

undefined8 FUN_140b2eca0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x820);
  iVar2 = *(int *)(param_1 + 0x848);
  local_78 = 0;
  uStack_74 = 1;
  puStack_28 = (uint *)(param_1 + 0x830);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x840);
    if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
      puVar10 = puStack_28;
    }
    uVar3 = *puVar10;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar4) goto LAB_140b2ed6f;
      uVar3 = puVar10[lVar9 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_140b2ed6f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x848);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      lVar9 = (longlong)iStack_5c;
      if (*(longlong *)(*(longlong *)(lVar9 * 0x40 + *plVar1) + 0x10) != 0) {
        if (param_2 != 0) {
          lVar5 = UXPrimaryDataAsset::GetPrivateStaticClass();
          lVar7 = param_2;
          do {
            lVar8 = param_2;
            if (lVar7 == lVar5) goto LAB_140b2ee1a;
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
        }
        lVar8 = 0;
LAB_140b2ee1a:
        for (lVar9 = *(longlong *)(*(longlong *)(lVar9 * 0x40 + *plVar1) + 0x10); lVar9 != 0;
            lVar9 = *(longlong *)(lVar9 + 0x30)) {
          if (lVar9 == lVar8) {
            if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
              TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
              ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1)
              ;
            }
            return 1;
          }
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return 0;
}



// FUNCTION 140b2eed0 FUN_140b2eed0 body=249 status=ok
// SIG undefined FUN_140b2eed0(void)

ulonglong FUN_140b2eed0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 local_res10 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  if (((*(int *)(param_2 + 0x7c0) == 0) &&
      ((int)((ulonglong)*(undefined8 *)(param_2 + 0x7b8) >> 0x20) == 0)) &&
     (SUB164(*(undefined1 (*) [16])(param_2 + 0x7b8),0xc) == 0)) {
    uVar1 = FUN_1413b0610();
    uVar2 = FUN_140b2c110(param_3,uVar1,local_res10);
    if (uVar2 == 0) {
      uVar1 = FUN_1413b0550();
      uVar2 = FUN_140b2c110(param_3,uVar1,local_res10);
      if (uVar2 == 0) {
        uVar1 = FUN_1413b53a0();
        uVar2 = FUN_140b2c110(param_3,uVar1,local_res10);
        if (uVar2 == 0) goto LAB_140b2ef91;
      }
    }
    return uVar2 & 0xffffffffffffff00;
  }
LAB_140b2ef91:
  return (ulonglong)(*(int *)(param_2 + 0x7c8) < 1);
}



// FUNCTION 140b2efd0 FUN_140b2efd0 body=84 status=ok
// SIG undefined FUN_140b2efd0(void)

void FUN_140b2efd0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (((char)param_1[0x25] == '\x03') && ((*(byte *)((longlong)param_1 + 0x70c) & 1) != 0)) {
    lVar2 = FUN_140b2aac0();
    if (param_2 == lVar2) {
      cVar1 = (**(code **)(*param_1 + 0x7e8))(param_1);
      if (cVar1 != '\0') {
        FUN_142227350(param_1,0,1);
      }
    }
  }
  return;
}



// FUNCTION 140b2f030 FUN_140b2f030 body=97 status=ok
// SIG undefined FUN_140b2f030(void)

void FUN_140b2f030(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_14145f370();
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
      FUN_140b23080(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140b2f0a0 FUN_140b2f0a0 body=81 status=ok
// SIG undefined FUN_140b2f0a0(void)

void FUN_140b2f0a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (*(char *)(param_1 + 0x348) != '\0')) {
    lVar1 = FUN_140b2ab40(param_1);
    if ((param_2 == lVar1) && (*(longlong *)(param_1 + 0x118) != 0)) {
      FUN_142227350(*(longlong *)(param_1 + 0x118),0,1);
    }
  }
  return;
}



// FUNCTION 140b2f100 FUN_140b2f100 body=117 status=ok
// SIG undefined FUN_140b2f100(void)

void FUN_140b2f100(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c0);
  *(int *)(param_1 + 0x4c0) = iVar1 + 1;
  if (*(int *)(param_1 + 0x4c4) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x4b8,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + (longlong)iVar1 * 8) = param_2;
  FUN_1430174d0(param_1,param_2);
  FUN_140b40900(param_1,param_2);
  return;
}



// FUNCTION 140b2f180 MulticastChangeSkinAndColor_Implementation body=5 status=ok
// SIG undefined MulticastChangeSkinAndColor_Implementation(void)

void ABattleHomePlayer::MulticastChangeSkinAndColor_Implementation(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lStack_18;
  int iStack_10;
  
  iVar3 = FUN_14233f450();
  if ((iVar3 == 3) &&
     (((lVar4 = param_1[0x24], lVar4 != 0 || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)) &&
      (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 != 0)))) {
    (**(code **)(*param_1 + 0x4a8))(param_1,1);
    iVar3 = FUN_14233f450(param_1);
    if (iVar3 == 3) {
      uVar5 = FUN_140b823d0(param_1);
      FUN_140b461a0(param_1,uVar5,1);
      if (((param_1[0x24] != 0) || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)) &&
         (cVar2 = FUN_140b81c70(param_1), cVar2 == '\x01')) {
        lVar4 = param_1[0x24];
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(param_1);
        }
        UWorld::GetPlayerControllerIterator(lVar4,&lStack_18);
        while( true ) {
          if ((iStack_10 < 0) || (*(int *)(lStack_18 + 8) <= iStack_10)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          lVar4 = FWeakObjectPtr::Get();
          if (lVar4 != 0) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_140b461a0(param_1,lVar4,0);
            }
          }
          iStack_10 = iStack_10 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b2f190 FUN_140b2f190 body=67 status=ok
// SIG undefined FUN_140b2f190(void)

void FUN_140b2f190(longlong param_1,longlong *param_2)

{
  FUN_143000c40();
  if (((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x25c) != '\0')) &&
     ((*(byte *)(param_2 + 0xb5) & 1) != 0)) {
    (**(code **)(*param_2 + 0x7f8))(param_2);
  }
  return;
}



// FUNCTION 140b2f1e0 FUN_140b2f1e0 body=247 status=ok
// SIG undefined FUN_140b2f1e0(void)

void FUN_140b2f1e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x1c8) != '\0') {
      (**(code **)(*param_2 + 0x3a0))(param_2,0);
    }
    if (*(char *)(param_1 + 0x219) != '\0') {
      lVar3 = AGExplodingRockProjectile::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((*(byte *)((longlong)param_2 + 0x70c) & 8) == 0)) {
        *(byte *)((longlong)param_2 + 0x70c) = *(byte *)((longlong)param_2 + 0x70c) | 8;
        (**(code **)(*param_2 + 0x600))(param_2);
        (**(code **)(*param_2 + 0x830))(param_2);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      lVar3 = FUN_1413c3a10();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*plVar1 + 0x770))(plVar1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140b2f2f0 FUN_140b2f2f0 body=8 status=ok
// SIG undefined FUN_140b2f2f0(void)

undefined1 FUN_140b2f2f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x75d);
}



// FUNCTION 140b2f320 FUN_140b2f320 body=61 status=ok
// SIG undefined FUN_140b2f320(void)

ulonglong FUN_140b2f320(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  longlong *in_RAX;
  
  if (param_2 != 0) {
    in_RAX = *(longlong **)(param_1 + 0x560);
    plVar1 = in_RAX + (longlong)*(int *)(param_1 + 0x568) * 5;
    for (; in_RAX != plVar1; in_RAX = in_RAX + 5) {
      if (((*in_RAX == param_2) && (in_RAX[3] == param_3)) && ((char)in_RAX[4] == param_4)) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b2f360 FUN_140b2f360 body=194 status=ok
// SIG undefined FUN_140b2f360(void)

undefined8 FUN_140b2f360(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  local_res20 = 0;
  if (lVar1 != 0) {
    lVar4 = FUN_1413f82e0();
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
      cVar3 = FUN_140c42740(lVar1,param_2,&local_res20,local_res8);
      if (cVar3 != '\0') {
        plVar5 = (longlong *)FUN_140b27940(param_1,param_3);
        if (plVar5 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar5 + 0x440))(plVar5,local_res20);
          if (cVar3 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140b2f430 FUN_140b2f430 body=157 status=ok
// SIG undefined FUN_140b2f430(void)

ulonglong FUN_140b2f430(char *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *param_1;
  uVar2 = 0;
  if (((cVar1 == '\0') || (*(int *)(param_1 + 0x70) < 2)) || (*(longlong *)(param_1 + 0x78) == 0))
  goto LAB_140b2f4c5;
  if (cVar1 == '\x02') {
    if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) goto LAB_140b2f4c5;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))();
    if ((char)uVar2 == '\0') goto LAB_140b2f4c5;
    cVar1 = *param_1;
  }
  if ((cVar1 == '\x01') || ((byte)(cVar1 - 4U) < 2)) {
    uVar2 = FText::IsEmpty(param_1 + 0x20);
    if ((char)uVar2 != '\0') goto LAB_140b2f4c5;
    uVar2 = FText::IsEmpty(param_1 + 0x38);
    if ((char)uVar2 != '\0') goto LAB_140b2f4c5;
  }
  if ((*param_1 != '\x02') && (*param_1 != '\x05')) {
    uVar2 = FText::IsEmpty(param_1 + 8);
    if ((char)uVar2 != '\0') goto LAB_140b2f4c5;
  }
  uVar2 = 0;
  if (((byte)(*param_1 - 4U) < 2) || (*(longlong *)(param_1 + 0x80) != 0)) {
    return 1;
  }
LAB_140b2f4c5:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140b2f4d0 FUN_140b2f4d0 body=12 status=ok
// SIG undefined FUN_140b2f4d0(void)

bool FUN_140b2f4d0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x498) != 0;
}



// FUNCTION 140b2f4e0 FUN_140b2f4e0 body=115 status=ok
// SIG undefined FUN_140b2f4e0(void)

void FUN_140b2f4e0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x6e8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x1a0), lVar1 != 0)) {
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
    lVar3 = 0;
    if (bVar2) {
      lVar3 = lVar1;
    }
    FUN_140b2f560(param_1,lVar3);
  }
  return;
}



// FUNCTION 140b2f560 FUN_140b2f560 body=1126 status=ok
// SIG undefined FUN_140b2f560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b2f560(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined2 local_2eb;
  undefined1 local_2e9;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  byte local_298;
  undefined1 local_290 [56];
  undefined1 local_258 [8];
  undefined8 local_250;
  undefined4 local_248;
  undefined1 local_238 [20];
  undefined1 local_224 [8];
  undefined1 local_21c [236];
  float local_130;
  undefined1 local_12c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  if (((param_2 != 0) && ((char)param_1[0xdc] == '\0')) && (param_1[0xdf] != 0)) {
    lVar3 = UCelLightData::GetPrivateStaticClass();
    for (lVar4 = param_1[0xdf]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar3) {
        if (param_1[0xdf] != 0) {
          FUN_142d0a300(local_238);
          if ((float *)(param_1 + 0x8e) != &local_130) {
            local_130 = *(float *)(param_1 + 0x8e);
            local_12c = 1;
          }
          plVar11 = (longlong *)0x0;
          if (param_1[0xe2] != 0) {
            local_298 = local_298 & 0xfd | 1;
            local_2a8 = 0;
            local_2b8 = 0;
            uStack_2b0 = 0;
            local_2a0 = 0;
            FUN_142c8c260(local_290);
            local_258[0] = 0xff;
            local_250 = 0;
            local_248 = 0;
            cVar2 = FUN_140c42c80(param_2,param_1[0xe2],&local_2b8);
            if ((cVar2 != '\0') && (cVar2 = FUN_142d52a00(local_258), cVar2 != '\0')) {
              uVar8 = FUN_142d52a20(local_258);
              lVar4 = FArchive::operator<<(uVar8);
              if (0.0001 < *(float *)(lVar4 + 0x20)) {
                uVar8 = FUN_142d52a20(local_258);
                uVar8 = FArchive::operator<<(uVar8);
                local_130 = (float)FUN_142d61c30(uVar8);
                local_130 = local_130 * *(float *)(param_1 + 0xe1);
                local_12c = 1;
                if (local_130 <= 1.0) {
                  local_130 = 1.0;
                }
              }
            }
            if (local_2a8 != 0) {
              FMemory::Free();
            }
          }
          plVar9 = plVar11;
          if (param_1[0x90] == 0) goto LAB_140b2f731;
          plVar5 = (longlong *)FUN_142e0d0b0();
          plVar7 = (longlong *)param_1[0x90];
          plVar10 = plVar7;
          goto joined_r0x000140b2f717;
        }
        break;
      }
    }
  }
  goto LAB_140b2f8d1;
joined_r0x000140b2f717:
  if (plVar10 == (longlong *)0x0) goto LAB_140b2f731;
  if (plVar10 == plVar5) {
    if ((plVar7 != (longlong *)0x0) &&
       (plVar9 = (longlong *)plVar7[0x1f], (longlong *)plVar7[0x1f] == (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      plVar9 = (longlong *)plVar7[0x1f];
    }
    goto LAB_140b2f731;
  }
  plVar10 = (longlong *)plVar10[6];
  goto joined_r0x000140b2f717;
code_r0x000140b2f765:
  lVar3 = *(longlong *)(lVar3 + 0x30);
  if (lVar3 == 0) goto LAB_140b2f834;
  goto LAB_140b2f760;
LAB_140b2f731:
  FWeakObjectPtr::operator=(local_224,plVar9);
  if (param_1[0xe0] != 0) {
    lVar6 = FUN_142e49950();
    lVar4 = param_1[0xe0];
    lVar3 = lVar4;
    if (lVar4 != 0) {
LAB_140b2f760:
      if (lVar3 != lVar6) goto code_r0x000140b2f765;
      if (lVar4 != 0) {
        plVar7 = (longlong *)FUN_142e49950();
        for (plVar9 = (longlong *)param_1[0xe0];
            (plVar10 = plVar11, plVar9 != (longlong *)0x0 &&
            (plVar10 = (longlong *)param_1[0xe0], plVar9 != plVar7)); plVar9 = (longlong *)plVar9[6]
            ) {
        }
        plVar9 = (longlong *)plVar10[0x1f];
        if (plVar9 == (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x368))(plVar10);
          plVar9 = (longlong *)plVar10[0x1f];
        }
        if (plVar9 == (longlong *)0x0) goto LAB_140b2f834;
        lVar4 = FUN_142e49950();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140b2f834;
        goto LAB_140b2f837;
      }
    }
  }
LAB_140b2f834:
  plVar9 = plVar11;
LAB_140b2f837:
  FWeakObjectPtr::operator=(local_21c,plVar9);
  local_318 = &local_2f8;
  local_308 = 0;
  local_310 = (undefined8 *)0x0;
  local_2eb = 0;
  local_2e9 = 0;
  local_2f8 = 0xbf800000bf800000;
  local_2f0 = 0xbf800000;
  local_2ec = 0;
  local_2e8 = 0x3f800000;
  local_2e4 = 0x3f800000;
  local_2e0 = 0x3f800000;
  FUN_140a86fb0(param_1[0x23],param_1[0xdf],param_2,local_238);
  *(undefined1 *)(param_1 + 0xdc) = 1;
  FUN_1409c53c0(local_238);
LAB_140b2f8d1:
  local_2c0 = 0;
  lVar4 = param_1[0x2d];
  local_2c8 = 0;
  if (lVar4 == 0) {
    local_2f8 = _DAT_1468b5d90;
    local_2f0 = DAT_1468b5d98;
  }
  else {
    local_2f8 = *(undefined8 *)(lVar4 + 0x220);
    local_2f0 = *(undefined4 *)(lVar4 + 0x228);
  }
  local_2d0 = local_2f0;
  local_2d8 = local_2f8;
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  local_310 = &local_2c8;
  local_318 = (undefined8 *)CONCAT44(local_318._4_4_,0x42480000);
  FUN_1405a1e30(&local_2f8,uVar8,param_1[0xe6],&local_2d8);
  FUN_140591060(&local_2f8);
  (**(code **)(*param_1 + 0x6d0))(param_1,0);
  return;
}



// FUNCTION 140b2f9d0 FUN_140b2f9d0 body=1602 status=ok
// SIG undefined FUN_140b2f9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b2f9d0(longlong *param_1,longlong *param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_d0 = param_2;
  if ((((longlong *)param_1[0x34] != (longlong *)0x0) && ((longlong *)param_1[0x34] != param_2)) &&
     (lVar6 = FUN_140b2c020(), lVar6 != 0)) {
    lVar6 = FUN_140b2c020(param_1);
    if (*(longlong *)(lVar6 + 0x6e8) != 0) {
      local_d8 = param_1[0x34];
      TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (*(longlong *)(lVar6 + 0x6e8) + 0x5a8,&local_d8);
    }
    uVar7 = UScrollBox::GetPrivateStaticClass();
    lVar6 = (**(code **)(*(longlong *)param_1[0x34] + 0x628))((longlong *)param_1[0x34],uVar7);
    if (lVar6 != 0) {
      lVar8 = UScrollBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (bVar19) {
        FUN_140483870(lVar6 + 0x268,param_1);
      }
    }
    lVar6 = param_1[0x34];
    plVar14 = (longlong *)(lVar6 + 0x290);
    iVar16 = *(int *)(lVar6 + 0x298) + -1;
    if (-1 < iVar16) {
      lVar18 = (longlong)iVar16 << 4;
      lVar8 = lVar18;
      do {
        lVar17 = *plVar14 + lVar8;
        plVar9 = (longlong *)FWeakObjectPtr::Get(lVar17);
        if (param_1 == plVar9) {
LAB_140b2fb41:
          iVar1 = *(int *)(lVar6 + 0x298);
          iVar12 = (iVar1 - iVar16) + -1;
          if (0 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar18 + *plVar14),
                       (void *)((longlong)(iVar1 - iVar12) * 0x10 + *plVar14),(longlong)iVar12 << 4)
            ;
            iVar1 = *(int *)(lVar6 + 0x298);
          }
          *(int *)(lVar6 + 0x298) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar14);
        }
        else {
          local_d8 = 0;
          if ((*(longlong *)(lVar17 + 8) == 0) ||
             (lVar17 = FWeakObjectPtr::Get(lVar17,1), lVar17 == 0)) {
            bVar19 = true;
          }
          else {
            bVar19 = false;
          }
          if (bVar19) goto LAB_140b2fb41;
        }
        lVar18 = lVar18 + -0x10;
        lVar8 = lVar8 + -0x10;
        iVar16 = iVar16 + -1;
        param_2 = local_d0;
      } while (-1 < iVar16);
    }
  }
  param_1[0x34] = (longlong)param_2;
  if (param_2 != (longlong *)0x0) {
    if ((param_2[2] != 0) && (*(longlong *)(param_2[2] + 0x18) == DAT_146868fc8)) {
      FName::FName(&local_d0,L"Neck1",1);
      param_1[0x36] = (longlong)local_d0;
    }
    uVar7 = UScrollBox::GetPrivateStaticClass();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar7);
    if (lVar6 != 0) {
      lVar8 = UScrollBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (bVar19) {
        uStack_e0 = (longlong *)((ulonglong)uStack_e0 & 0xffffffff00000000);
        local_e8 = FUN_140b382c0;
        plVar9 = (longlong *)(lVar6 + 0x268);
        plVar14 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar14 != (longlong *)0x0) {
          *plVar14 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar14 + 1,param_1);
          *(int *)(plVar14 + 2) = (int)local_e8;
          *(int *)((longlong)plVar14 + 0x14) = local_e8._4_4_;
          *(undefined4 *)(plVar14 + 3) = (undefined4)uStack_e0;
          *(undefined4 *)((longlong)plVar14 + 0x1c) = uStack_e0._4_4_;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar14[5] = lVar8;
          *plVar14 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
          (**(code **)(*plVar14 + 0x20))(plVar14,&local_d0);
          iVar16 = *(int *)(lVar6 + 0x270);
          *(int *)(lVar6 + 0x270) = iVar16 + 1;
          if (*(int *)(lVar6 + 0x274) < iVar16 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar16);
          }
          puVar10 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar9);
          *puVar10 = plVar14;
          *(undefined4 *)(puVar10 + 1) = 3;
        }
      }
    }
    pwVar11 = _guard_xfg_dispatch_icall_nop
                        (L"&UGrenadeHomingComponent::OnHomingTargetDestroyed",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_d0,pwVar4 + 2,1);
    plVar9 = local_d0;
    plVar14 = param_2 + 0x52;
    FWeakObjectPtr::operator=(&local_e8,0);
    uStack_e0 = (longlong *)0x0;
    FWeakObjectPtr::operator=(&local_e8,param_1);
    local_d8 = 0;
    uStack_e0 = plVar9;
    if ((plVar9 != (longlong *)0x0) && (lVar6 = FWeakObjectPtr::Get(&local_e8), lVar6 != 0)) {
      UObject::FindFunction(lVar6,uStack_e0);
    }
    piVar2 = (int *)*plVar14;
    lVar6 = param_2[0x53];
    for (piVar15 = piVar2; piVar15 != piVar2 + (longlong)(int)lVar6 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == (int)local_e8) &&
          (local_e8._4_4_ = (int)((ulonglong)local_e8 >> 0x20),
          bVar19 = piVar15[1] == local_e8._4_4_, bVar19)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_e8), cVar5 == '\0')))) {
        bVar19 = true;
      }
      else {
        bVar19 = false;
      }
      if ((bVar19) && (*(longlong **)(piVar15 + 2) == uStack_e0)) {
        bVar19 = true;
      }
      else {
        bVar19 = false;
      }
      if (bVar19) {
        if ((int)((longlong)piVar15 - (longlong)piVar2 >> 4) != -1) goto LAB_140b2fe3c;
        break;
      }
    }
    iVar16 = (int)param_2[0x53];
    *(int *)(param_2 + 0x53) = iVar16 + 1;
    if (*(int *)((longlong)param_2 + 0x29c) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar16);
    }
    puVar13 = (undefined4 *)((longlong)iVar16 * 0x10 + *plVar14);
    *puVar13 = (int)local_e8;
    puVar13[1] = local_e8._4_4_;
    *(longlong **)(puVar13 + 2) = uStack_e0;
LAB_140b2fe3c:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
  }
  if (param_3 <= 0.0) {
    (**(code **)(*param_1 + 0x3f8))(param_1);
  }
  else {
    FUN_140b43a90();
    if ((param_1[0x24] != 0) || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)) {
      uStack_e0 = (longlong *)((ulonglong)uStack_e0 & 0xffffffff00000000);
      local_e8 = (code *)&LAB_140b1900c;
      lVar6 = param_1[0x24];
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar6 + 400) == 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
      }
      plVar14 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar14 != (longlong *)0x0) {
        *plVar14 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar14 + 1,param_1);
        *(int *)(plVar14 + 2) = (int)local_e8;
        *(int *)((longlong)plVar14 + 0x14) = local_e8._4_4_;
        *(undefined4 *)(plVar14 + 3) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)plVar14 + 0x1c) = uStack_e0._4_4_;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar14[5] = lVar6;
        *plVar14 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x30))(plVar14,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_f0 = 0xbf800000;
      local_f8 = 0;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar7,param_1 + 0x47,&local_c8,param_3);
      if (local_68 != 0) {
        plVar9 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar9 = local_78;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))(plVar14,0);
        lVar6 = FMemory::Realloc(plVar14,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b30020 FUN_140b30020 body=500 status=ok
// SIG undefined FUN_140b30020(void)

void FUN_140b30020(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + 0x820);
  iVar2 = *(int *)(param_1 + 0x848);
  local_88 = 0;
  uStack_84 = 1;
  puStack_38 = (uint *)(param_1 + 0x830);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x840);
    if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
      puVar10 = puStack_38;
    }
    uVar3 = *puVar10;
    local_88 = 0;
    uStack_70 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar4) goto LAB_140b300df;
      uVar3 = puVar10[lVar9 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
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
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_140b300df:
      local_78._4_4_ = iVar2;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar4 = local_78._4_4_ < *(int *)(param_1 + 0x848);
  local_58 = plVar1;
  local_48 = plVar1;
  local_20 = plVar1;
  local_78 = puStack_38;
  if (bVar4) {
    do {
      iVar2 = iStack_6c;
      lVar9 = *(longlong *)(*(longlong *)((longlong)iStack_6c * 0x40 + *plVar1) + 0x10);
      if (param_2 != 0) {
        lVar5 = UXPrimaryDataAsset::GetPrivateStaticClass();
        lVar8 = param_2;
        do {
          lVar6 = param_2;
          if (lVar8 == lVar5) goto LAB_140b30193;
          lVar8 = *(longlong *)(lVar8 + 0x30);
        } while (lVar8 != 0);
      }
      lVar6 = 0;
LAB_140b30193:
      if (lVar9 == lVar6) {
        TSet<TTuple<FRHIShaderResourceView_*,FShaderResourceKey>,TDefaultMapHashableKeyFuncs<FRHIShaderResourceView_*,FShaderResourceKey,0>,FDefaultSetAllocator>
        ::Remove(plVar1,*(undefined8 *)((longlong)iVar2 * 0x40 + *plVar1));
        break;
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b30220 FUN_140b30220 body=280 status=ok
// SIG undefined FUN_140b30220(void)

void FUN_140b30220(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_2 + 0x7b8);
    *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(param_2 + 0x7bc);
    *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_2 + 0x7c4);
    *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_2 + 0x7c8);
    *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_2 + 0x7cc);
    *(undefined1 *)(param_1 + 2000) = *(undefined1 *)(param_2 + 2000);
    *(undefined8 *)(param_1 + 0x7d4) = *(undefined8 *)(param_2 + 0x7d4);
    *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_2 + 0x7dc);
    iVar1 = *(int *)(param_2 + 0x668);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x668);
      if (*(int *)(param_1 + 0x66c) < iVar2 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x660));
        iVar2 = *(int *)(param_1 + 0x668);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x660) + (longlong)iVar2 * 8),
                 *(void **)(param_2 + 0x660),(longlong)iVar1 << 3);
      *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + iVar1;
    }
  }
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 0x2d0))(param_3,param_1 + 0x7b8);
  }
  return;
}



// FUNCTION 140b30340 FUN_140b30340 body=220 status=ok
// SIG undefined FUN_140b30340(void)

void FUN_140b30340(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *local_18;
  undefined8 local_10;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x358))(plVar4,0);
    FUN_142397540(*(undefined8 *)(param_1 + 8),1);
    uVar3 = 0;
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_14238b380(*(undefined8 *)(param_1 + 8),1,&local_18);
    uVar2 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
    if (local_18 + (int)local_10 < local_18) {
      uVar2 = uVar3;
    }
    plVar4 = local_18;
    if (uVar2 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x358))(plVar1,0);
          FUN_142397540(plVar1);
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar2);
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 140b30420 FUN_140b30420 body=294 status=ok
// SIG undefined FUN_140b30420(void)

void FUN_140b30420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 *local_48;
  undefined8 *local_40;
  int local_38;
  
  if (param_2 != 0) {
    ABuilding::GetPlayerUnitsInside(param_2,&local_40);
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)(local_40 + local_38) + (7 - (longlong)local_40)) >> 3;
    if (local_40 + local_38 < local_40) {
      uVar3 = uVar4;
    }
    puVar2 = local_40;
    if (uVar3 != 0) {
      do {
        local_res20 = *puVar2;
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x510,local_res10);
        if ((local_res10[0] == -1) ||
           (lVar1 = (longlong)local_res10[0] * 0x40 + *(longlong *)(param_1 + 0x510), lVar1 == 0)) {
          local_48 = &local_res20;
          FUN_140b13280(param_1 + 0x510,local_res18,&local_48,0);
          lVar1 = (longlong)local_res18[0] * 0x40 + *(longlong *)(param_1 + 0x510);
        }
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
        uVar4 = uVar4 + 1;
        *(longlong *)(lVar1 + 8) = param_1;
        puVar2 = puVar2 + 1;
      } while (uVar4 != uVar3);
    }
    if (local_40 != (undefined8 *)0x0) {
      FMemory::Free(local_40);
    }
  }
  return;
}



// FUNCTION 140b30550 FUN_140b30550 body=214 status=ok
// SIG undefined FUN_140b30550(void)

void FUN_140b30550(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_2 + 0x30);
  plVar1 = plVar5 + *(int *)(param_2 + 0x38);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar6 = *plVar5;
    if (lVar6 == 0) {
LAB_140b305ce:
      lVar6 = 0;
    }
    else {
      lVar4 = FUN_14149c820();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140b305ce;
    }
    FWeakObjectPtr::operator=(param_1 + 0x3b0,lVar6);
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
    if (cVar3 != '\0') break;
  }
  FUN_1430022a0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b30630 FUN_140b30630 body=31 status=ok
// SIG undefined FUN_140b30630(void)

void FUN_140b30630(longlong *param_1)

{
  (**(code **)(*param_1 + 0x448))();
  *(undefined1 *)((longlong)param_1 + 0x5b2) = 1;
  return;
}



// FUNCTION 140b30650 FUN_140b30650 body=172 status=ok
// SIG undefined FUN_140b30650(void)

void FUN_140b30650(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) &&
     (((*(longlong *)(param_1 + 0x228) != 0 &&
       (*(char *)(*(longlong *)(param_1 + 0x228) + 0x128) != '\x03')) ||
      ((*(longlong *)(param_1 + 0x230) != 0 &&
       (*(char *)(*(longlong *)(param_1 + 0x230) + 0x128) != '\x03')))))) {
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x278);
  }
  FUN_140b46ba0();
  FUN_140b46e30(param_1);
  return;
}



// FUNCTION 140b30700 FUN_140b30700 body=224 status=ok
// SIG undefined FUN_140b30700(void)

void FUN_140b30700(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  *param_1 = 4;
  FText::operator=(param_1 + 8,param_2 + 8);
  FText::operator=(param_1 + 0x20,param_2 + 0x20);
  FText::operator=(param_1 + 0x38,param_2 + 0x38);
  FString::operator=(param_1 + 0x50,param_3);
  puVar1 = (undefined8 *)FDateTime::UtcNow(local_res8);
  *(undefined8 *)(param_1 + 0x78) = *puVar1;
  param_1[0xb0] = 0;
  uVar2 = FGuid::NewGuid(local_18);
  FUN_141682af0(uVar2,&local_28,0);
  plVar3 = (longlong *)(param_1 + 0x68);
  if (plVar3 != &local_28) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = local_28;
    *(undefined4 *)(param_1 + 0x70) = local_20;
    *(undefined4 *)(param_1 + 0x74) = local_1c;
    return;
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b307e0 FUN_140b307e0 body=651 status=ok
// SIG undefined FUN_140b307e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b307e0(undefined1 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar5 = *param_2;
  if (iVar5 == 0) {
    *param_1 = 1;
  }
  else if (iVar5 == 1) {
    *param_1 = 2;
  }
  else if (iVar5 == 2) {
    *param_1 = 3;
  }
  uVar7 = FText::FromString(local_90,param_2 + 6);
  FText::operator=(param_1 + 8,uVar7);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  uVar7 = FText::FromString(local_78,param_2 + 10);
  FText::operator=(param_1 + 0x20,uVar7);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  uVar7 = FText::FromString(local_60,param_2 + 0xe);
  FText::operator=(param_1 + 0x38,uVar7);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FString::operator=(param_1 + 0x50,param_2 + 0x12);
  FString::operator=(param_1 + 0x68,param_2 + 2);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x1e);
  local_a8 = *(longlong **)(param_2 + 0x22);
  local_b0 = *(undefined8 *)(param_2 + 0x20);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  local_b8 = &PTR_FUN_143f740c8;
  local_a0 = 0;
  local_98 = 0;
  if (&local_b8 != (undefined ***)(param_1 + 0x88)) {
    puVar3 = (undefined8 *)(param_1 + 0x90);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
    }
    local_c8 = local_b0;
    plStack_c0 = local_a8;
    if (&local_c8 != puVar3) {
      local_c8 = *puVar3;
      plStack_c0 = *(longlong **)(param_1 + 0x98);
      *puVar3 = local_b0;
      *(longlong **)(param_1 + 0x98) = local_a8;
      local_48 = local_b0;
      plStack_40 = local_a8;
    }
    plVar1 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_c0 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
        }
      }
    }
  }
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0xa0,&local_a0);
  plVar1 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a8 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  *(int *)(param_1 + 0x60) = param_2[0x1a];
  return;
}



// FUNCTION 140b30a70 FUN_140b30a70 body=1809 status=ok
// SIG undefined FUN_140b30a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b30a70(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  wchar_t *pwVar16;
  uint *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_118;
  uint uStack_114;
  int iStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  ulonglong uStack_d0;
  longlong *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined1 auStack_60 [16];
  longlong *local_50;
  undefined1 local_48 [24];
  
  *(undefined8 *)(param_1 + 0x6e8) = param_2;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar11 = DAT_146b33f38;
  lVar18 = DAT_146b33f38 + 0xa0;
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(lVar18);
  pwVar13 = (wchar_t *)0x0;
  if (pwVar9 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar11 + 0xa8)) && (*(longlong *)(lVar11 + 0xb0) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar18,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar11 + 0xa8) = DAT_1464b56f4;
      }
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(lVar18);
      if (pwVar9 != (wchar_t *)0x0) goto LAB_140b30b24;
    }
LAB_140b30b5a:
    pwVar9 = pwVar13;
  }
  else {
LAB_140b30b24:
    lVar11 = FUN_1413bd170();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140b30b5a;
  }
  pwVar16 = *(wchar_t **)(param_1 + 0x118);
  if (pwVar16 == (wchar_t *)0x0) {
LAB_140b30b9f:
    pwVar16 = pwVar13;
  }
  else {
    lVar11 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar16 + 8) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar16 + 8) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140b30b9f;
  }
  *(wchar_t **)(param_1 + 0x6f0) = pwVar16;
  FUN_14307e770(param_1,pwVar16);
  if (*(longlong *)(param_1 + 0x728) != 0) {
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    local_d8 = FUN_140b38260;
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&AGrenade::OnGrenadeStop",L"::");
    pwVar16 = pwVar13;
    while (pwVar7 = pwVar12, pwVar7 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar16 = pwVar7;
    }
    FName::FName(&local_res10,pwVar16 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x728) + 0x200,param_1,&local_d8,local_res10);
  }
  lVar11 = *(longlong *)(param_1 + 0x6e8);
  if (lVar11 == 0) {
    if ((*(char *)(param_1 + 0x128) == '\x03') && (pwVar9 != (wchar_t *)0x0)) {
      uVar19 = CAkSegmentCtx::RemoveReferences(pwVar9,*(undefined8 *)(param_1 + 0x118));
      *(undefined4 *)(param_1 + 0x7ac) = uVar19;
      uVar19 = FUN_1412bf1f0(pwVar9);
      *(undefined4 *)(param_1 + 0x7b4) = uVar19;
    }
    return;
  }
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(lVar11 + 0x574);
    *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(lVar11 + 0x580);
  }
  plVar14 = (longlong *)(param_1 + 0x820);
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(lVar11 + 0x58c);
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(lVar11 + 0x510);
  FUN_140b12e40(plVar14,lVar11 + 0x518);
  plVar5 = *(longlong **)(param_1 + 0x7e8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x288))(plVar5,param_1,*(undefined8 *)(param_1 + 0x6e8));
    *(undefined4 *)(param_1 + 0x7f0) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x848);
  local_b8 = (uint *)(param_1 + 0x830);
  uStack_114 = 1;
  local_118 = 0;
  iStack_104 = 0;
  uStack_100 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)(param_1 + 0x840);
    if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
      puVar17 = local_b8;
    }
    uVar4 = *puVar17;
    pwVar16 = pwVar13;
    pwVar12 = pwVar13;
    while (uVar4 == 0) {
      iVar8 = (int)pwVar16;
      uStack_100 = (int)pwVar12 + 0x20;
      pwVar12 = (wchar_t *)(ulonglong)uStack_100;
      local_118 = iVar8 + 1;
      pwVar16 = (wchar_t *)(ulonglong)local_118;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_140b30d95;
      uVar4 = puVar17[(longlong)iVar8 + 1];
    }
    uStack_114 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar8 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_104 = (uStack_100 - iVar8) + 0x1f;
    if (iVar3 < iStack_104) {
LAB_140b30d95:
      iStack_104 = iVar3;
    }
  }
  uStack_b0 = CONCAT44(iStack_104,0xffffffff);
  auStack_60._8_4_ = uStack_100;
  auStack_60._0_8_ = uStack_b0;
  auStack_60._12_4_ = uStack_fc;
  uStack_c0 = local_118;
  uStack_bc = uStack_114;
  local_90 = 0;
  local_a8 = auStack_60._8_8_;
  local_c8 = plVar14;
  local_98 = plVar14;
  local_78 = plVar14;
  local_50 = plVar14;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
  puStack_68 = local_b8;
  plStack_a0 = plVar14;
  if (iStack_104 < *(int *)(param_1 + 0x848)) {
    do {
      plVar5 = *(longlong **)((longlong)iStack_104 * 0x40 + *local_c8);
      plStack_a0 = plVar14;
      (**(code **)(*plVar5 + 0x290))
                (plVar5,param_1,*(undefined8 *)(param_1 + 0x6e8),
                 *local_c8 + 8 + (longlong)iStack_104 * 0x40);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iStack_104 = uStack_b0._4_4_;
      plVar14 = plStack_a0;
    } while (uStack_b0._4_4_ < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x4c0);
  if (lVar11 == 0) {
    return;
  }
  if (*(longlong *)(lVar11 + 0x3a8) != 0) {
    lVar18 = UNiagaraSystem::GetEffectType();
    if (lVar18 != 0) {
      pwVar13 = (wchar_t *)UNiagaraSystem::GetEffectType(*(undefined8 *)(lVar11 + 0x3a8));
    }
  }
  plVar14 = *(longlong **)(param_1 + 0x708);
  if ((plVar14 == (longlong *)0x0) ||
     (((pwVar16 = *(wchar_t **)(param_1 + 0x720), pwVar16 == (wchar_t *)0x0 ||
       ((*(int *)(param_1 + 0x7c0) + *(int *)(param_1 + 0x7bc) < 1 &&
        (*(int *)(param_1 + 0x7c4) < 2)))) &&
      ((plVar14 == (longlong *)0x0 || (pwVar16 = pwVar13, pwVar13 == (wchar_t *)0x0)))))) {
    if ((*(longlong *)(param_1 + 0x700) == 0) || (*(char *)(param_1 + 0x7e1) != '\0'))
    goto LAB_140b310c8;
    FUN_142fea810(*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x498),param_1,
                  *(longlong *)(param_1 + 0x700),1);
    lVar11 = UKWMeshArray::GetMeshByIndex(*(undefined8 *)(param_1 + 0x700),0);
    if (lVar11 != 0) {
      lVar18 = FUN_1429bed90();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        *(byte *)(lVar11 + 0x2ef) = *(byte *)(lVar11 + 0x2ef) & 0xbf;
        pfVar1 = (float *)(lVar11 + 0x280);
        local_88 = _DAT_1468b5d90;
        local_80 = DAT_1468b5d98;
        if (((*(float *)(lVar11 + 0x1f8) == *pfVar1) &&
            (*(float *)(lVar11 + 0x1fc) == *(float *)(lVar11 + 0x284))) &&
           (*(float *)(lVar11 + 0x200) == *(float *)(lVar11 + 0x288))) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          uVar2 = *(undefined8 *)*(undefined1 (*) [12])(lVar11 + 0x1f8);
          auVar20._12_4_ = 0;
          auVar20._0_12_ = *(undefined1 (*) [12])(lVar11 + 0x1f8);
          auVar20 = divps(auVar20,_DAT_146868b60);
          fVar21 = (float)DAT_146868b60;
          fVar22 = DAT_146868b60._4_4_;
          fVar23 = DAT_146868b60._8_4_;
          fVar24 = (float)uVar2 - (float)(int)auVar20._0_4_ * fVar21;
          fVar25 = (float)((ulonglong)uVar2 >> 0x20) - (float)(int)auVar20._4_4_ * fVar22;
          fVar26 = *(float *)(lVar11 + 0x200) - (float)(int)auVar20._8_4_ * fVar23;
          fVar24 = (float)(((uint)(fVar24 + fVar21) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                          (uint)(fVar24 + fVar21));
          fVar25 = (float)(((uint)(fVar25 + fVar22) ^ (uint)fVar25) & -(uint)(0.0 <= fVar25) ^
                          (uint)(fVar25 + fVar22));
          fVar26 = (float)(((uint)(fVar26 + fVar23) ^ (uint)fVar26) & -(uint)(0.0 <= fVar26) ^
                          (uint)(fVar26 + fVar23));
          bVar6 = fRam0000000146868b58 < fVar26;
          *(ulonglong *)pfVar1 =
               CONCAT44(((uint)(fVar25 - fVar22) ^ (uint)fVar25) &
                        -(uint)(fRam0000000146868b54 < fVar25) ^ (uint)fVar25,
                        ((uint)(fVar24 - fVar21) ^ (uint)fVar24) & -(uint)(_DAT_146868b50 < fVar24)
                        ^ (uint)fVar24);
          *(uint *)(lVar11 + 0x288) =
               ((uint)(fVar26 - fVar23) ^ (uint)fVar26) & -(uint)bVar6 ^ (uint)fVar26;
          puVar15 = (undefined8 *)FRotator::Quaternion(pfVar1,local_48);
          uVar2 = puVar15[1];
          *(undefined8 *)(lVar11 + 0x270) = *puVar15;
          *(undefined8 *)(lVar11 + 0x278) = uVar2;
        }
        local_e8 = *(undefined8 *)(lVar11 + 0x270);
        uStack_e0 = *(undefined8 *)(lVar11 + 0x278);
        FUN_142397be0(lVar11,&local_88,&local_e8,0,0,0);
      }
    }
    plVar14 = *(longlong **)(param_1 + 0x708);
    if (plVar14 == (longlong *)0x0) goto LAB_140b310c8;
    pwVar16 = (wchar_t *)0x0;
  }
  (**(code **)(*plVar14 + 0x928))(plVar14,pwVar16);
LAB_140b310c8:
  plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4c0);
  plVar14 = (longlong *)(**(code **)(*plVar14 + 0x470))(plVar14,local_res18);
  lVar11 = *plVar14;
  *(longlong *)(param_1 + 0x478) = lVar11;
  if (lVar11 != 0) {
    lVar18 = FUN_142e49950();
    for (lVar11 = *(longlong *)(param_1 + 0x478); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)
        ) {
      if (lVar11 == lVar18) {
        if (*(longlong *)(param_1 + 0x478) != 0) {
          return;
        }
        break;
      }
    }
  }
  puVar15 = (undefined8 *)FUN_14046d430(pwVar9,local_res20);
  *(undefined8 *)(param_1 + 0x478) = *puVar15;
  return;
}



// FUNCTION 140b31190 FUN_140b31190 body=438 status=ok
// SIG undefined FUN_140b31190(void)

void FUN_140b31190(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  if (param_1[0xd9] != 0) {
    lVar3 = FUN_142ffa490();
    if (lVar3 == 0) {
      (**(code **)(*(longlong *)param_1[0xd9] + 0x288))();
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1468692b0) &&
         (_Init_thread_header(&DAT_1468692b0), DAT_1468692b0 == -1)) {
        FName::FName(&DAT_1468692a8,L"RColor",1);
        _Init_thread_footer(&DAT_1468692b0);
      }
      FUN_14260f940(param_1[0xd9],lVar3);
      puVar4 = (undefined4 *)FUN_142ffa350(param_1,local_18);
      local_28 = *puVar4;
      uStack_24 = puVar4[1];
      uStack_20 = puVar4[2];
      uStack_1c = puVar4[3];
      FUN_14260ee50(param_1[0xd9],DAT_1468692a8,&local_28);
      bVar1 = *(byte *)(param_1 + 0x10);
      *(byte *)(param_1 + 0x10) = bVar1 & 0xfe;
      (**(code **)(*(longlong *)param_1[0xd9] + 0x280))((longlong *)param_1[0xd9],1);
      *(byte *)(param_1 + 0x10) =
           *(byte *)(param_1 + 0x10) ^ (*(byte *)(param_1 + 0x10) ^ bVar1) & 1;
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x70d) & 1) == 0) {
    *(byte *)((longlong)param_1 + 0x70d) = *(byte *)((longlong)param_1 + 0x70d) | 1;
    lVar3 = FUN_142ffa460(param_1);
    if (((lVar3 != 0) && (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) &&
       (lVar5 = *(longlong *)(lVar5 + 400), lVar5 != 0)) {
      lVar6 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140ba3250(lVar5,param_1,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140b31350 FUN_140b31350 body=1337 status=ok
// SIG undefined FUN_140b31350(void)

void FUN_140b31350(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong uVar15;
  longlong local_88;
  float local_80;
  longlong local_78;
  float local_70;
  longlong local_68;
  float local_60;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar9 = param_1[0x23];
  if (lVar9 != 0) {
    if (((char)param_3[0x13] == '\0') || (lVar11 = *(longlong *)(lVar9 + 0x168), lVar11 == 0)) {
      lVar9 = *(longlong *)(lVar9 + 0x168);
      if (lVar9 == 0) {
        local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_80 = DAT_1468b5d98;
      }
      else {
        local_80 = *(float *)(lVar9 + 0x228);
        local_88 = *(longlong *)(lVar9 + 0x220);
      }
      local_70 = local_80;
      plVar10 = &local_78;
      local_78 = local_88;
    }
    else {
      plVar10 = &local_88;
      local_80 = *(float *)(lVar11 + 0x228);
      local_88 = *(longlong *)(lVar11 + 0x220);
    }
    local_68 = *plVar10;
    local_60 = *(float *)(plVar10 + 1);
    uVar15 = in_stack_ffffffffffffff48 & 0xffffffffffffff00;
    FUN_1423990b0(param_1,&local_68,0,0,uVar15);
    if (((DAT_1468b5d90 != *(float *)((longlong)param_3 + 0x8c)) ||
        (DAT_1468b5d94 != *(float *)(param_3 + 0x12))) ||
       (DAT_1468b5d98 != *(float *)((longlong)param_3 + 0x94))) {
      lVar9 = *(longlong *)(param_1[0x23] + 0x168);
      if (lVar9 == 0) {
        uVar13 = (undefined4)DAT_1468b5da0;
        uVar14 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_70 = DAT_1468b5da8;
      }
      else {
        local_48 = *(float *)(lVar9 + 0x210);
        fStack_44 = *(float *)(lVar9 + 0x214);
        fStack_40 = *(float *)(lVar9 + 0x218);
        fStack_3c = *(float *)(lVar9 + 0x21c);
        auVar1._4_4_ = -(uint)(*(float *)(lVar9 + 0x254) != fStack_44);
        auVar1._0_4_ = -(uint)(*(float *)(lVar9 + 0x250) != local_48);
        auVar1._8_4_ = -(uint)(*(float *)(lVar9 + 600) != fStack_40);
        auVar1._12_4_ = -(uint)(*(float *)(lVar9 + 0x25c) != fStack_3c);
        iVar6 = movmskps((int)param_1[0x23],auVar1);
        if (iVar6 != 0) {
          *(float *)(lVar9 + 0x250) = local_48;
          *(float *)(lVar9 + 0x254) = fStack_44;
          *(float *)(lVar9 + 600) = fStack_40;
          *(float *)(lVar9 + 0x25c) = fStack_3c;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_48,&local_88);
          *(undefined8 *)(lVar9 + 0x260) = *puVar7;
          *(undefined4 *)(lVar9 + 0x268) = *(undefined4 *)(puVar7 + 1);
        }
        uVar13 = (undefined4)*(undefined8 *)(lVar9 + 0x260);
        uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x260) >> 0x20);
        local_70 = *(float *)(lVar9 + 0x268);
      }
      fVar3 = *(float *)(param_1 + 0x44);
      fVar4 = *(float *)((longlong)param_1 + 0x224);
      fVar5 = *(float *)(param_1 + 0x45);
      local_78 = CONCAT44(uVar14,uVar13);
      local_68 = local_78;
      local_60 = local_70;
      pfVar8 = (float *)FRotator::RotateVector(&local_78,local_58,(longlong)param_3 + 0x8c);
      local_80 = fVar5 + pfVar8[2];
      local_68 = CONCAT44(fVar4 + pfVar8[1],fVar3 + *pfVar8);
      local_60 = local_80;
      FUN_1423990b0(param_1,&local_68,0,0,uVar15 & 0xffffffffffffff00);
    }
    if ((char)param_3[0x13] == '\0') {
      if (param_1[0x32] != 0) {
        (**(code **)(*param_1 + 0x418))(param_1,&DAT_146532190);
      }
    }
    else {
      FUN_142382f60(param_1,*(undefined8 *)(param_1[0x23] + 0x168),&DAT_146532180,0);
    }
    *(undefined4 *)(param_1 + 0xed) = *(undefined4 *)((longlong)param_3 + 0x74);
    FUN_1423bc010(param_1,param_2,1);
    param_1[0xec] = *param_3;
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      FUN_14234b150(param_1);
    }
    *(int *)((longlong)param_1 + 0x76c) = (int)param_3[5];
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0xe7,param_3 + 6);
    *(undefined1 *)(param_1 + 0xee) = *(undefined1 *)((longlong)param_3 + 0x99);
    *(undefined1 *)((longlong)param_1 + 0x771) = 1;
    *(int *)((longlong)param_1 + 0x774) = (int)param_3[0xe];
    *(char *)(param_1 + 0xf0) = (char)param_3[0xf];
    *(undefined4 *)((longlong)param_1 + 0x784) = *(undefined4 *)((longlong)param_3 + 0x7c);
    *(int *)(param_1 + 0xf1) = (int)param_3[0x10];
    *(undefined4 *)((longlong)param_1 + 0x78c) = *(undefined4 *)((longlong)param_3 + 0x84);
    *(int *)(param_1 + 0xf2) = (int)param_3[0x11];
    FGameplayTagContainer::operator=(param_1 + 0xf4,param_3 + 1);
    *(int *)((longlong)param_1 + 0x794) = (int)param_3[0x15];
    param_1[0xef] = param_3[0x16];
    *(int *)(param_1 + 0xf3) = (int)param_3[0x17];
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar9 = DAT_146b33f38;
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar9 = FGameplayTagContainer::AppendTags
                        (param_1 + 0xf4,*(longlong *)(DAT_146b33f38 + 0x58) + 0xc20);
    }
    lVar11 = param_1[0xeb];
    lVar12 = param_3[0x14];
    if (lVar11 == 0) {
      if (lVar12 != 0) {
        local_48 = *(float *)(param_1 + 0x42);
        fStack_44 = *(float *)((longlong)param_1 + 0x214);
        fStack_40 = *(float *)(param_1 + 0x43);
        fStack_3c = *(float *)((longlong)param_1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)((longlong)param_1 + 0x254) != fStack_44);
        auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x4a) != local_48);
        auVar2._8_4_ = -(uint)(*(float *)(param_1 + 0x4b) != fStack_40);
        auVar2._12_4_ = -(uint)(*(float *)((longlong)param_1 + 0x25c) != fStack_3c);
        iVar6 = movmskps((int)lVar9,auVar2);
        if (iVar6 != 0) {
          *(float *)(param_1 + 0x4a) = local_48;
          *(float *)((longlong)param_1 + 0x254) = fStack_44;
          *(float *)(param_1 + 0x4b) = fStack_40;
          *(float *)((longlong)param_1 + 0x25c) = fStack_3c;
          plVar10 = (longlong *)FQuat::Rotator(&local_48,local_58);
          param_1[0x4c] = *plVar10;
          *(int *)(param_1 + 0x4d) = (int)plVar10[1];
          lVar12 = param_3[0x14];
        }
        local_78 = param_1[0x44];
        local_80 = *(float *)(param_1 + 0x45);
        local_60 = *(float *)(param_1 + 0x4d);
        local_68 = param_1[0x4c];
        local_70 = local_80;
        lVar9 = FUN_1424600f0(lVar12,param_1,0,&local_78,&local_68,1,0,0,1,0);
        param_1[0xeb] = lVar9;
      }
    }
    else {
      if (lVar12 != 0) {
        FUN_14260f940(lVar11,lVar12);
        lVar11 = param_1[0xeb];
      }
      FUN_1425fcab0(lVar11,1);
    }
    plVar10 = (longlong *)FUN_140a24b10(param_1[0x23]);
    if (plVar10 != (longlong *)0x0) {
      FUN_142399e30(plVar10,param_1,0);
      FUN_14234b150(plVar10);
      plVar10[0x5a] = param_3[8];
      plVar10[0x5c] = param_3[0xb];
      plVar10[0x5d] = param_3[0xc];
      plVar10[0x5e] = param_3[0xd];
      *(int *)(plVar10 + 0x5f) = (int)param_3[9];
      *(undefined4 *)((longlong)plVar10 + 0x2fc) = *(undefined4 *)((longlong)param_3 + 0x4c);
      *(int *)(plVar10 + 0x60) = (int)param_3[0xe];
      (**(code **)(*plVar10 + 0x280))(plVar10,0);
    }
  }
  return;
}



// FUNCTION 140b31890 FUN_140b31890 body=11 status=ok
// SIG undefined FUN_140b31890(void)

void FUN_140b31890(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x458) = *param_2;
  *(undefined8 *)(param_1 + 0x460) = uVar1;
  return;
}



// FUNCTION 140b318a0 FUN_140b318a0 body=346 status=ok
// SIG undefined FUN_140b318a0(void)

undefined8 FUN_140b318a0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (param_2 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar4 = param_2;
    if (bVar3) goto LAB_140b31905;
  }
  lVar4 = 0;
LAB_140b31905:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  lVar5 = ATrap::GetActivationShapeComponent(param_1);
  if ((((lVar4 == 0) || (lVar1 == 0)) || (lVar5 == 0)) ||
     (cVar2 = FUN_140b31db0(param_1,param_2,param_3), cVar2 == '\0')) {
    uVar7 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x2c0);
    lVar6 = (**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))();
    if ((lVar1 != 0) && (lVar6 != 0)) {
      FUN_142fe44f0(lVar6,lVar1,*(undefined4 *)(lVar5 + 0x1fc));
      lVar1 = *(longlong *)(param_1 + 0x568);
      if (lVar1 != 0) {
        lVar5 = FUN_14149b100();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          thunk_FUN_14307deb0(lVar1,lVar4);
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 140b31a00 IsBoundToObject body=109 status=ok
// SIG undefined IsBoundToObject(void)

undefined8
FMulticastDelegateBase<FWeakObjectPtr>::IsBoundToObject(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = plVar3 + (longlong)(int)param_1[1] * 2;
  while( true ) {
    if (plVar3 == plVar4) {
      return 0;
    }
    if ((((int)plVar3[1] != 0) && (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2), cVar2 != '\0')) break;
    plVar3 = plVar3 + 2;
  }
  return 1;
}



// FUNCTION 140b31aa0 FUN_140b31aa0 body=267 status=ok
// SIG undefined FUN_140b31aa0(void)

undefined1 FUN_140b31aa0(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x210);
  if (lVar2 != 0) {
    lVar4 = FUN_14142a1f0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(byte *)(lVar2 + 0x128) == param_2)) {
      return 1;
    }
  }
  if (param_3 != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x230);
    plVar1 = plVar5 + *(int *)(param_1 + 0x238);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        lVar4 = FUN_14142de90();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(byte *)(lVar2 + 0x278) == param_2)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140b31bb0 FUN_140b31bb0 body=10 status=ok
// SIG undefined FUN_140b31bb0(void)

byte FUN_140b31bb0(longlong param_1)

{
  return *(byte *)(param_1 + 0x70c) & 1;
}



// FUNCTION 140b31bc0 FUN_140b31bc0 body=168 status=ok
// SIG undefined FUN_140b31bc0(void)

ulonglong FUN_140b31bc0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = (longlong *)(uVar4 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (longlong *)CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((((char)in_RAX != '\0') && (*(longlong *)(lVar2 + 0x2c70) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x2c70) + 0x1470), lVar2 != 0)) {
      for (in_RAX = (longlong *)(lVar2 + 0x4a8); in_RAX != (longlong *)(lVar2 + 0x4c8);
          in_RAX = in_RAX + 1) {
        if (*in_RAX == param_2) {
          return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
        }
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b31c70 FUN_140b31c70 body=104 status=ok
// SIG undefined FUN_140b31c70(void)

ulonglong FUN_140b31c70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x228);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x230) * 8;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 8) {
    if (plVar1[4] == param_2) goto LAB_140b31cd2;
  }
  plVar1 = *(longlong **)(param_1 + 0x4b8);
  plVar2 = plVar1 + *(int *)(param_1 + 0x4c0);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if (*plVar1 == param_2) goto LAB_140b31cd2;
  }
  if ((param_3 == 0) || (*(longlong *)(param_3 + 0xe80) != param_2)) {
    return (ulonglong)plVar1 & 0xffffffffffffff00;
  }
LAB_140b31cd2:
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}



// FUNCTION 140b31ce0 SupportsKeyboardFocus body=8 status=ok
// SIG undefined SupportsKeyboardFocus(void)

undefined1 SVirtualWindow::SupportsKeyboardFocus(longlong param_1)

{
  return *(undefined1 *)(param_1 + 2000);
}



// FUNCTION 140b31cf0 FUN_140b31cf0 body=92 status=ok
// SIG undefined FUN_140b31cf0(void)

ulonglong FUN_140b31cf0(longlong param_1,char *param_2)

{
  char *in_RAX;
  
  if ((*(byte *)(param_1 + 0x5a8) & 2) != 0) {
    if ((*(byte *)(param_1 + 0x70c) & 1) != 0) {
      in_RAX = (char *)FUN_140b2aac0();
      if ((in_RAX == (char *)0x0) || (in_RAX != param_2)) goto LAB_140b31d3f;
    }
    in_RAX = *(char **)(param_1 + 0x6e0);
    if ((in_RAX == (char *)0x0) || (*in_RAX == '\0')) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
LAB_140b31d3f:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b31d50 FUN_140b31d50 body=12 status=ok
// SIG undefined FUN_140b31d50(void)

bool FUN_140b31d50(longlong param_1)

{
  return *(longlong *)(param_1 + 0x5c0) != 0;
}



// FUNCTION 140b31d60 FUN_140b31d60 body=80 status=ok
// SIG undefined FUN_140b31d60(void)

undefined8 FUN_140b31d60(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(char *)(param_1 + 0x168) != '\0')) {
    uVar1 = 0;
    uVar2 = uVar1;
    if (*(longlong *)(param_2 + 0x210) != 0) {
      uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x210) + 0xb8);
    }
    if (uVar2 != 0) {
      uVar1 = (ulonglong)*(uint *)(uVar2 + 0x88);
    }
    if ((int)uVar1 < *(int *)(*(longlong *)(param_1 + 0x180) + 0x88)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140b31db0 FUN_140b31db0 body=783 status=ok
// SIG undefined FUN_140b31db0(void)

undefined8 FUN_140b31db0(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  plVar6 = (longlong *)0x0;
  plVar8 = *(longlong **)(lVar4 + 0x140);
  if (plVar8 == (longlong *)0x0) {
LAB_140b31e22:
    plVar8 = plVar6;
  }
  else {
    lVar4 = FUN_141425c60();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140b31e22;
  }
  if (param_3 != '\0') {
    return 0;
  }
  if ((plVar8 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar8 + 0xa30))(plVar8), cVar2 == '\0')
     ) {
    return 0;
  }
  lVar4 = FUN_1413b9340();
  if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  plVar8 = (longlong *)param_1[0xe2];
  if (plVar8 == (longlong *)0x0) {
    lVar4 = ATrap::GetActivationShapeComponent(param_1);
    plVar8 = plVar6;
    if (lVar4 != 0) {
      lVar5 = FUN_14142bde0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(lVar4 + 0x210) != 0)) {
        plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0x210) + 0xb8);
      }
    }
    param_1[0xe2] = (longlong)plVar8;
  }
  if (param_2 == 0) {
LAB_140b31fa7:
    param_2 = 0;
  }
  else {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140b31fa7;
    plVar7 = *(longlong **)(param_2 + 0x9c0);
    if (plVar7 != (longlong *)0x0) {
      lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_140b31fad;
      }
    }
  }
  plVar7 = plVar6;
LAB_140b31fad:
  lVar4 = ATrap::GetActivationShapeComponent(param_1);
  if (lVar4 != 0) {
    plVar6 = *(longlong **)(lVar4 + 0x208);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  if ((((((lVar4 != 0) && (*(longlong *)(DAT_146b33f38 + 0x90) != 0)) && (plVar6 != (longlong *)0x0)
        ) && (((lVar5 = plVar6[0x3b], lVar5 == *(longlong *)(lVar4 + 0x2a8) ||
               (lVar5 == *(longlong *)(lVar4 + 0x2b8))) ||
              ((lVar5 == *(longlong *)(lVar4 + 0x2b0) ||
               ((lVar5 == *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x90) + 0x498) ||
                (lVar5 == *(longlong *)(lVar4 + 0x300))))))))) && (plVar8 != (longlong *)0x0)) &&
     (((((plVar7 != (longlong *)0x0 && (plVar7[0x38f] != 0)) && (*(byte *)(plVar6 + 0x3c) < 2)) &&
       ((*(longlong *)(lVar4 + 0x340) != 0 &&
        (*(int *)(*(longlong *)(lVar4 + 0x340) + 0x88) <= (int)plVar8[0x11])))) &&
      (((int)plVar8[0x11] <= *(int *)(plVar7[0x38f] + 0x88) &&
       (((param_2 == 0 ||
         (lVar4 = (**(code **)(*(longlong *)(param_2 + 0xd80) + 0x18))(), lVar4 == 0)) ||
        (iVar3 = FUN_142ff7c90(lVar4,plVar6[0x3b]), iVar3 != 0)))))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140b320c0 FUN_140b320c0 body=234 status=ok
// SIG undefined FUN_140b320c0(void)

void FUN_140b320c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if ((((lVar5 != 0) || (lVar5 = FUN_1423407b0(), lVar5 != 0)) &&
      (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) &&
     ((cVar3 = FUN_1407c3030(lVar5 + 0x670), cVar3 != '\0' && (*(char *)(lVar5 + 0xa48) == '\0'))))
  {
    uVar4 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar5 + 0x670);
    lVar5 = FUN_14129ef20(uVar4);
    if (lVar5 != 0) {
      plVar2 = *(longlong **)(param_2 + 0x30);
      iVar1 = *(int *)(param_2 + 0x38);
      for (plVar6 = plVar2; plVar6 != plVar2 + iVar1; plVar6 = plVar6 + 1) {
        if (*plVar6 == lVar5) {
          if ((int)((longlong)plVar6 - (longlong)plVar2 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      *(int *)(param_2 + 0x38) = iVar1 + 1;
      if (*(int *)(param_2 + 0x3c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_2 + 0x30),iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *(longlong *)(param_2 + 0x30)) = lVar5;
    }
  }
  return;
}



// FUNCTION 140b321b0 FUN_140b321b0 body=400 status=ok
// SIG undefined FUN_140b321b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b321b0(longlong param_1,undefined8 param_2,float *param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  local_38 = *param_3;
  fStack_34 = param_3[1];
  fStack_30 = param_3[2];
  fStack_2c = param_3[3];
  if (*(char *)(param_1 + 0x2c8) != '\0') {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar9 = FUN_1423407b0();
      if (lVar9 == 0) goto LAB_140b32301;
    }
    lVar9 = *(longlong *)(param_1 + 0x178);
    if (lVar9 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x120);
      if (lVar10 == 0) {
        lVar10 = FUN_1423407b0(param_1);
        lVar9 = *(longlong *)(param_1 + 0x178);
      }
      local_40 = *(float *)(lVar10 + 0x7b0);
      local_48 = local_40 * *(float *)(param_1 + 0x2cc);
      local_44 = local_40 * *(float *)(param_1 + 0x2d0);
      local_40 = local_40 * *(float *)(param_1 + 0x2d4);
      fVar1 = *(float *)(lVar9 + 0x210);
      fVar2 = *(float *)(lVar9 + 0x214);
      fVar3 = *(float *)(lVar9 + 0x218);
      fVar4 = *(float *)(lVar9 + 0x21c);
      pfVar11 = (float *)FRotator::Quaternion(&local_48,local_28);
      fVar5 = *pfVar11;
      fVar6 = pfVar11[1];
      fVar7 = pfVar11[2];
      fVar8 = pfVar11[3];
      local_38 = fVar1 * fVar8 * _DAT_146868bd0 + fVar4 * fVar5 + fVar2 * fVar7 * _DAT_146868bc0 +
                 fVar3 * fVar6 * _DAT_146868bb0;
      fStack_34 = fVar1 * fVar7 * fRam0000000146868bd4 + fVar4 * fVar6 +
                  fVar2 * fVar8 * fRam0000000146868bc4 + fVar3 * fVar5 * fRam0000000146868bb4;
      fStack_30 = fVar1 * fVar6 * fRam0000000146868bd8 + fVar4 * fVar7 +
                  fVar2 * fVar5 * fRam0000000146868bc8 + fVar3 * fVar8 * fRam0000000146868bb8;
      fStack_2c = fVar1 * fVar5 * fRam0000000146868bdc + fVar4 * fVar8 +
                  fVar2 * fVar6 * fRam0000000146868bcc + fVar3 * fVar7 * fRam0000000146868bbc;
    }
  }
LAB_140b32301:
  FUN_143052e50(param_1,param_2,&local_38,param_4,param_5,param_6);
  return;
}



// FUNCTION 140b32340 FUN_140b32340 body=557 status=ok
// SIG undefined FUN_140b32340(void)

void FUN_140b32340(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 local_res8 [8];
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_48 = (uint *)(param_1 + 0x520);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar12 = puStack_48;
    }
    uVar11 = *puVar12;
    uStack_80 = 0;
    local_98 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar11 = local_98 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar11;
      if (bVar3) goto LAB_140b32411;
      uVar11 = puVar12[lVar8 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_88._4_4_ = (uStack_80 - iVar4) + 0x1f;
    if (iVar2 < local_88._4_4_) {
LAB_140b32411:
      local_88._4_4_ = iVar2;
    }
  }
  auStack_40._4_4_ = local_88._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar3 = local_88._4_4_ < *(int *)(param_1 + 0x538);
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar3) {
    do {
      lVar10 = (longlong)iStack_7c * 0x40;
      lVar8 = *(longlong *)(*(longlong *)(lVar10 + *plVar1) + 0x10);
      if (param_2 != 0) {
        lVar5 = FUN_1414bf1a0();
        lVar9 = param_2;
        do {
          lVar6 = param_2;
          if (lVar9 == lVar5) goto LAB_140b324c7;
          lVar9 = *(longlong *)(lVar9 + 0x30);
        } while (lVar9 != 0);
      }
      lVar6 = 0;
LAB_140b324c7:
      if (lVar8 == lVar6) {
        plVar7 = (longlong *)
                 TBaseUObjectMethodDelegateInstance<1,UBorder,FSlateBrush_const_*___ptr64___cdecl(void),TAttribute<FSlateBrush>_>
                 ::GetHandle(*(undefined8 *)(lVar10 + *plVar1),local_res8);
        if (*plVar7 == param_3) {
          plVar7 = *(longlong **)(lVar10 + *plVar1);
          (**(code **)(*plVar7 + 0x2d0))(plVar7,param_1,*plVar1 + 8 + lVar10,param_4);
        }
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b32570 FUN_140b32570 body=39 status=ok
// SIG undefined FUN_140b32570(void)

void FUN_140b32570(longlong param_1,float param_2)

{
  if (((*(byte *)(param_1 + 0x94) & 0x18) != 0x10) && (*(char *)(param_1 + 0x128) == '\x03')) {
    *(float *)(param_1 + 0x7ac) = param_2 * *(float *)(param_1 + 0x7ac);
  }
  return;
}



// FUNCTION 140b325a0 FUN_140b325a0 body=42 status=ok
// SIG undefined FUN_140b325a0(void)

void FUN_140b325a0(longlong param_1,undefined4 param_2)

{
  undefined1 local_res8 [32];
  undefined1 local_28 [40];
  
  FUN_142470da0(param_1 + 0x570,local_28,0,param_2,local_res8);
  return;
}



// FUNCTION 140b325d0 FUN_140b325d0 body=61 status=ok
// SIG undefined FUN_140b325d0(void)

void FUN_140b325d0(longlong param_1,float param_2)

{
  undefined1 local_res10 [24];
  undefined1 local_28 [40];
  
  *(float *)(param_1 + 0x594) = param_2 * *(float *)(param_1 + 0x594);
  FUN_142470da0(param_1 + 0x598,local_28,0,param_2,local_res10);
  return;
}



// FUNCTION 140b32610 FUN_140b32610 body=39 status=ok
// SIG undefined FUN_140b32610(void)

void FUN_140b32610(longlong param_1,float param_2)

{
  if (((*(byte *)(param_1 + 0x94) & 0x18) != 0x10) && (*(char *)(param_1 + 0x128) == '\x03')) {
    *(float *)(param_1 + 0x7b0) = param_2 * *(float *)(param_1 + 0x7b0);
  }
  return;
}



// FUNCTION 140b32640 FUN_140b32640 body=42 status=ok
// SIG undefined FUN_140b32640(void)

void FUN_140b32640(longlong param_1,undefined4 param_2)

{
  undefined1 local_res8 [32];
  undefined1 local_28 [40];
  
  FUN_142470da0(param_1 + 0x57c,local_28,0,param_2,local_res8);
  return;
}



// FUNCTION 140b32680 FUN_140b32680 body=397 status=ok
// SIG undefined FUN_140b32680(void)

void FUN_140b32680(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res20 [8];
  undefined8 local_28;
  undefined1 local_20;
  
  FUN_143005020();
  iVar3 = FUN_14233f450(param_1);
  if ((((iVar3 == 3) && (*(int *)(param_1 + 0x358) != 0)) &&
      (plVar2 = *(longlong **)(param_1 + 0x118), plVar2 != (longlong *)0x0)) &&
     ((char)plVar2[0x25] == '\x03')) {
    uVar4 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar4);
    if (lVar5 == 0) {
      plVar6 = (longlong *)FName::FName(local_res20,L"InventoryAbilityManagerComponent",1);
      lVar5 = *plVar6;
      if (lVar5 == 0) {
        FUN_1417846f0(plVar2,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar4 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
      lVar5 = FUN_1417985e0(uVar4,plVar2,lVar5,0,0,0,0,0,0);
      FUN_142350b20(lVar5,0);
      FUN_14234b150(lVar5);
    }
    plVar6 = *(longlong **)(param_1 + 0x350);
    plVar2 = plVar6 + *(int *)(param_1 + 0x358);
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      puVar7 = *(undefined8 **)(*plVar6 + 0x38);
      puVar1 = puVar7 + *(int *)(*plVar6 + 0x40);
      for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
        local_28 = *puVar7;
        local_20 = 2;
        FUN_1430ea410(lVar5,&local_28);
      }
    }
  }
  return;
}



// FUNCTION 140b32810 FUN_140b32810 body=621 status=ok
// SIG undefined FUN_140b32810(void)

void FUN_140b32810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_a8;
  uint uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  local_68 = *param_8;
  local_60 = *(undefined4 *)(param_8 + 1);
  local_58 = *param_7;
  local_50 = *(undefined4 *)(param_7 + 1);
  local_48 = *param_6;
  local_40 = *(undefined4 *)(param_6 + 1);
  FUN_141274e40((int)local_48,param_2,param_3,param_4,param_5,&local_48,&local_58,&local_68,param_9)
  ;
  plVar3 = *(longlong **)(param_1 + 0x7e8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,*(undefined8 *)(param_1 + 0x6e8),param_9);
  }
  plVar3 = (longlong *)(param_1 + 0x820);
  local_a8 = 0;
  uStack_a4 = 1;
  iVar1 = *(int *)(param_1 + 0x848);
  puStack_28 = (uint *)(param_1 + 0x830);
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x840);
    if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar2 = *puVar8;
    uStack_90 = 0;
    local_a8 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)local_a8;
      uStack_90 = uStack_90 + 0x20;
      iVar6 = local_a8 + 1;
      bVar5 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar6;
      if (bVar5) goto LAB_140b3296f;
      uVar2 = puVar8[lVar7 + 1];
    }
    uStack_a4 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_98._4_4_ = (uStack_90 - iVar6) + 0x1f;
    if (iVar1 < local_98._4_4_) {
LAB_140b3296f:
      local_98._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_98._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_90;
  auStack_20._12_4_ = iStack_8c;
  iStack_30 = local_a8;
  uStack_2c = uStack_a4;
  local_70 = 0;
  local_10._0_4_ = SUB84(plVar3,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  iStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_10;
  local_88._0_8_ = auStack_20._8_8_;
  local_88._12_4_ = local_10._4_4_;
  bVar5 = local_98._4_4_ < *(int *)(param_1 + 0x848);
  local_78 = plVar3;
  local_38 = plVar3;
  local_10 = plVar3;
  local_98 = puStack_28;
  if (bVar5) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_8c * 0x40 + *plVar3);
      (**(code **)(*plVar4 + 0x2b0))
                (plVar4,param_1,*(undefined8 *)(param_1 + 0x6e8),param_9,
                 *plVar3 + 8 + (longlong)iStack_8c * 0x40);
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    } while (iStack_8c < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  if ((*(char *)(param_1 + 0x764) != '\0') && (*(char *)(param_1 + 0x765) == '\0')) {
    FUN_140b26e10(param_1);
  }
  *(undefined1 *)(param_1 + 0x75d) = 1;
  return;
}



// FUNCTION 140b32a80 FUN_140b32a80 body=449 status=ok
// SIG undefined FUN_140b32a80(void)

void FUN_140b32a80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  local_res8 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x468,&local_res8);
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x9c0), lVar1 != 0)) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
        lVar3 = 0;
        if (*(longlong *)(param_1 + 0x498) != 0) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x208);
        }
        if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x230), lVar3 != 0)) {
          lVar4 = FUN_14142e810();
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
            thunk_FUN_14145e8d0(lVar1,lVar3);
            return;
          }
          lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
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
            thunk_FUN_14145e850(lVar1,lVar3);
            return;
          }
          lVar4 = FUN_1412fb190();
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
            thunk_FUN_14145e7d0(lVar1,lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b32c50 FUN_140b32c50 body=31 status=ok
// SIG undefined FUN_140b32c50(void)

void FUN_140b32c50(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x468,local_res8);
  return;
}



// FUNCTION 140b32c70 FUN_140b32c70 body=121 status=ok
// SIG undefined FUN_140b32c70(void)

void FUN_140b32c70(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_140b81c70();
  if ((cVar2 == '\x01') && (param_2 != 0)) {
    lVar3 = FUN_14145f370();
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
      cVar2 = FUN_140d018e0(param_2);
      if (cVar2 == '\0') {
        FUN_140b461a0(param_1,param_2,0);
      }
    }
  }
  return;
}



// FUNCTION 140b32cf0 FUN_140b32cf0 body=544 status=ok
// SIG undefined FUN_140b32cf0(void)

void FUN_140b32cf0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  FUN_142237550();
  if ((*(char *)(param_1 + 0x598) != '\0') && (lVar4 = *(longlong *)(param_1 + 0x150), lVar4 != 0))
  {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar1 = (longlong *)(param_1 + 0x510);
      iVar2 = *(int *)(param_1 + 0x538);
      puStack_28 = (uint *)(param_1 + 0x520);
      local_78 = 0;
      uStack_74 = 1;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      if (iVar2 != 0) {
        puVar9 = *(uint **)(param_1 + 0x530);
        if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
          puVar9 = puStack_28;
        }
        uVar3 = *puVar9;
        uStack_60 = 0;
        local_78 = 0;
        while (uVar3 == 0) {
          lVar7 = (longlong)local_78;
          uStack_60 = uStack_60 + 0x20;
          iVar8 = local_78 + 1;
          bVar6 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
          local_78 = iVar8;
          if (bVar6) goto LAB_140b32e1f;
          uVar3 = puVar9[lVar7 + 1];
        }
        uStack_74 = -uVar3 & uVar3;
        iVar8 = 0x1f;
        if (uStack_74 != 0) {
          for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_74 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        local_68._4_4_ = (uStack_60 - iVar8) + 0x1f;
        if (iVar2 < local_68._4_4_) {
LAB_140b32e1f:
          local_68._4_4_ = iVar2;
        }
      }
      auStack_20._4_4_ = local_68._4_4_;
      auStack_20._0_4_ = 0xffffffff;
      auStack_20._8_4_ = uStack_60;
      auStack_20._12_4_ = iStack_5c;
      iStack_30 = local_78;
      uStack_2c = uStack_74;
      local_40 = 0;
      local_10._0_4_ = SUB84(plVar1,0);
      local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
      iStack_70 = local_78;
      uStack_6c = uStack_74;
      uStack_60 = 0xffffffff;
      iStack_5c = local_68._4_4_;
      local_58._8_4_ = (undefined4)local_10;
      local_58._0_8_ = auStack_20._8_8_;
      local_58._12_4_ = local_10._4_4_;
      bVar6 = local_68._4_4_ < *(int *)(param_1 + 0x538);
      local_48 = plVar1;
      local_38 = plVar1;
      local_10 = plVar1;
      local_68 = puStack_28;
      if (bVar6) {
        do {
          plVar5 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar1);
          (**(code **)(*plVar5 + 0x2d8))
                    (plVar5,param_1,lVar4,*plVar1 + 8 + (longlong)iStack_5c * 0x40);
          uStack_60 = uStack_60 & ~uStack_6c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
        } while (iStack_5c < (int)local_68[6]);
        if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
          TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b32f10 FUN_140b32f10 body=219 status=ok
// SIG undefined FUN_140b32f10(void)

void FUN_140b32f10(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  FUN_143005390();
  iVar3 = FUN_14233f450(param_1);
  if ((((iVar3 == 3) && (*(int *)(param_1 + 0x358) != 0)) &&
      (plVar2 = *(longlong **)(param_1 + 0x118), plVar2 != (longlong *)0x0)) &&
     ((char)plVar2[0x25] == '\x03')) {
    uVar4 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar4);
    if (lVar5 != 0) {
      plVar7 = *(longlong **)(param_1 + 0x350);
      plVar2 = plVar7 + *(int *)(param_1 + 0x358);
      for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
        puVar6 = *(undefined8 **)(*plVar7 + 0x38);
        puVar1 = puVar6 + *(int *)(*plVar7 + 0x40);
        for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          FUN_1430ede10(lVar5,*puVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b32ff0 FUN_140b32ff0 body=787 status=ok
// SIG undefined FUN_140b32ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b32ff0(longlong param_1,char param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_38 [32];
  
  if (*(char *)(param_1 + 0x950) == '\0') {
    if (param_2 == '\0') {
      param_3 = *(undefined4 *)(param_1 + 0x870);
    }
    plVar1 = *(longlong **)(param_1 + 0x710);
    if ((plVar1 != (longlong *)0x0) && (param_4 != 0)) {
      (**(code **)(*plVar1 + 0x928))(plVar1,param_4);
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x710),1);
      if ((*(longlong *)(param_1 + 0x6f8) != 0) && (*(longlong *)(param_1 + 0x718) != 0)) {
        FUN_14281d030(param_4,local_38);
        *(undefined1 *)(*(longlong *)(param_1 + 0x6f8) + 0x714) = 0;
        lVar2 = *(longlong *)(param_1 + 0x6f8);
        uVar13 = *(uint *)(lVar2 + 0x230) & _DAT_146868c20;
        uVar14 = *(uint *)(lVar2 + 0x234) & uRam0000000146868c24;
        uVar15 = *(uint *)(lVar2 + 0x238) & uRam0000000146868c28;
        uVar16 = *(uint *)(lVar2 + 0x23c) & uRam0000000146868c2c;
        auVar10._4_4_ = uVar14;
        auVar10._0_4_ = uVar13;
        auVar10._8_4_ = uVar15;
        auVar10._12_4_ = uVar16;
        auVar11._4_4_ = uVar15;
        auVar11._0_4_ = uVar14;
        auVar11._8_4_ = uVar13;
        auVar11._12_4_ = uVar16;
        auVar11 = minps(auVar10,auVar11);
        auVar3._4_4_ = uVar13;
        auVar3._0_4_ = uVar15;
        auVar3._8_4_ = uVar14;
        auVar3._12_4_ = uVar16;
        auVar11 = minps(auVar11,auVar3);
        auVar12._4_12_ = auVar11._4_12_;
        auVar12._0_4_ = auVar11._0_4_ * *(float *)(lVar2 + 0x710);
        FUN_14234feb0(*(longlong *)(param_1 + 0x718),auVar12._0_8_,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x718) + 0x710),1);
        FUN_14281d030(param_4,local_38);
        FUN_14234feb0();
        lVar2 = **(longlong **)(param_1 + 0x718);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x4f8))();
        (**(code **)(lVar2 + 0x648))(*(undefined8 *)(param_1 + 0x718),uVar4);
        lVar2 = **(longlong **)(param_1 + 0x718);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x4d0))();
        (**(code **)(lVar2 + 0x840))(*(undefined8 *)(param_1 + 0x718),uVar5,0);
        (**(code **)(**(longlong **)(param_1 + 0x718) + 0x630))(*(longlong **)(param_1 + 0x718),1);
        lVar2 = **(longlong **)(param_1 + 0x718);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x4e8))();
        (**(code **)(lVar2 + 0x638))(*(undefined8 *)(param_1 + 0x718),uVar4);
        if (*(longlong *)(param_1 + 0x4f0) != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x718) + 0x418))
                    (*(longlong **)(param_1 + 0x718),&DAT_146532190);
          FUN_14223f010(param_1,*(undefined8 *)(param_1 + 0x718));
          uVar7 = 0;
          FUN_142382f60(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x718),
                        &DAT_146532184,0);
          (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x638))(*(longlong **)(param_1 + 0x6f8),0)
          ;
          (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x450))
                    (*(longlong **)(param_1 + 0x4f0),*(undefined8 *)(param_1 + 0x718));
          puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x6f8) + 0x378);
          uVar6 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x6f8) + 0x380);
          uVar9 = uVar6 & 0x1fffffffffffffff;
          if (puVar8 + uVar6 < puVar8) {
            uVar9 = uVar7;
          }
          if (uVar9 != 0) {
            do {
              FUN_14307e770(param_1,*puVar8);
              uVar7 = uVar7 + 1;
              puVar8 = puVar8 + 1;
            } while (uVar7 != uVar9);
          }
        }
      }
      lVar2 = *(longlong *)(param_1 + 0x710);
      *(undefined8 *)(lVar2 + 0x1ec) = 0;
      *(undefined4 *)(lVar2 + 500) = param_3;
      *(undefined1 *)(param_1 + 0x950) = 1;
    }
    lVar2 = *(longlong *)(param_1 + 0x708);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x1ec) = 0;
      *(undefined4 *)(lVar2 + 500) = param_3;
    }
    lVar2 = *(longlong *)(param_1 + 0x700);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x1ec) = 0;
      *(undefined4 *)(lVar2 + 500) = param_3;
    }
  }
  return;
}



// FUNCTION 140b33350 FUN_140b33350 body=115 status=ok
// SIG undefined FUN_140b33350(void)

void FUN_140b33350(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  undefined1 local_res10 [8];
  undefined1 local_28 [32];
  
  if (param_2 != 0) {
    fVar1 = (float)FUN_140afed70(param_1,param_3);
    if (fVar1 <= 0.0) {
      fVar1 = 1.0;
    }
    FUN_142470da0(param_2 + 0x570,local_28,0,fVar1,local_res10);
  }
  thunk_FUN_1413b2c00(param_1,param_2,param_3);
  return;
}



// FUNCTION 140b333f0 DestroyComponent body=32 status=ok
// SIG undefined DestroyComponent(void)

void UWidgetComponent::DestroyComponent(longlong *param_1)

{
  FUN_143005750();
                    /* WARNING: Could not recover jumptable at 0x000140b33409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x830))(param_1);
  return;
}



// FUNCTION 140b33410 FUN_140b33410 body=612 status=ok
// SIG undefined FUN_140b33410(void)

void FUN_140b33410(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong local_res18 [2];
  undefined2 *local_128;
  int local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  longlong local_f0 [4];
  undefined4 local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [64];
  
  local_res18[0] = param_3;
  if (param_3 == 0) {
LAB_140b33654:
    TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
              (param_1 + 0x750,local_res18);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x718);
    plVar10 = (longlong *)*plVar1;
    plVar2 = plVar10 + *(int *)(param_1 + 0x720);
    for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
      if (*plVar10 == param_3) goto LAB_140b33654;
    }
    lVar7 = FUN_142df3510(param_3);
    if ((lVar7 != 0) && (iVar6 = FUN_142dec940(lVar7,*(undefined8 *)(param_1 + 0x118)), iVar6 == 2))
    {
      local_f0[0] = *(longlong *)(param_1 + 0x118);
      local_108 = *(undefined8 *)(param_1 + 0x738);
      uVar8 = 0;
      local_f0[1] = 0;
      local_f0[2] = 0;
      local_f0[3] = 0;
      local_d0 = 0;
      uStack_110 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_118 = param_3;
      if (local_f0[0] != 0) {
        uVar8 = FUN_140a63ba0();
      }
      puVar9 = (undefined8 *)FUN_142d979c0(local_68);
      uVar5 = *(undefined8 *)(param_1 + 0x118);
      local_88 = *puVar9;
      uStack_80 = puVar9[1];
      local_78 = puVar9[2];
      uStack_70 = puVar9[3];
      local_res18[0] = *(longlong *)(param_3 + 0x18);
      local_b8 = local_118;
      uStack_b0 = uStack_110;
      local_98 = CONCAT44(uStack_f4,local_f8);
      local_a8 = (undefined4)local_108;
      uStack_a4 = local_108._4_4_;
      uStack_a0 = (undefined4)uStack_100;
      uStack_9c = uStack_100._4_4_;
      FName::ToString(local_res18,&local_128);
      uVar3 = *(undefined4 *)(param_1 + 0x710);
      puVar11 = &DAT_143f3eda8;
      if (local_120 != 0) {
        puVar11 = local_128;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x730);
      puVar9 = (undefined8 *)FName::FName(local_c8,puVar11,1);
      FUN_1430407f0(*(undefined8 *)(param_1 + 0x728),uVar8,local_f0,&local_b8,1,*puVar9,uVar4,
                    *(undefined8 *)(param_1 + 0x740),*(undefined8 *)(param_1 + 0x748),uVar3,uVar5,0,
                    &local_88,0xbf800000,0);
      if (local_128 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar6 = *(int *)(param_1 + 0x720);
      *(int *)(param_1 + 0x720) = iVar6 + 1;
      if (*(int *)(param_1 + 0x724) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
      }
      *(longlong *)(*plVar1 + (longlong)iVar6 * 8) = param_3;
      return;
    }
  }
  return;
}



// FUNCTION 140b33680 FUN_140b33680 body=497 status=ok
// SIG undefined FUN_140b33680(void)

void FUN_140b33680(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(char *)(param_1 + 0x771) == '\0') {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  lVar5 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
      != lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    uVar8 = FUN_143036a00();
    lVar5 = AGameStateBase::OnRep_GameModeClass(param_3,uVar8);
    if (lVar5 == 0) {
      if (*(longlong *)(param_3 + 0x10) == 0) {
        return;
      }
      uVar8 = UCurveSourceInterface::GetPrivateStaticClass();
      cVar3 = UClass::ImplementsInterface(*(undefined8 *)(param_3 + 0x10),uVar8);
      if (cVar3 == '\0') {
        return;
      }
      if (*(longlong *)(param_3 + 0x168) == 0) {
        return;
      }
      if (*(char *)(*(longlong *)(param_3 + 0x168) + 0x24e) != '\x02') {
        return;
      }
    }
    FUN_140b1a640(param_1,param_3);
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x750);
  if (lVar5 == 0) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar5 = FUN_142df3510(*(longlong *)(param_1 + 0x118));
      *(longlong *)(param_1 + 0x750) = lVar5;
    }
    if (lVar5 == 0) goto LAB_140b33720;
  }
  iVar4 = FUN_142dec940(lVar5,param_3);
  if (iVar4 != 2) {
    return;
  }
LAB_140b33720:
  plVar9 = *(longlong **)(param_1 + 0x738);
  plVar6 = plVar9 + *(int *)(param_1 + 0x740);
  for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
    if (*plVar9 == param_3) {
      return;
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x718);
  plVar9 = plVar6 + (longlong)*(int *)(param_1 + 0x720) * 2;
  for (; plVar6 != plVar9; plVar6 = plVar6 + 2) {
    if (param_3 == *plVar6) {
      return;
    }
  }
  plVar6 = (longlong *)(**(code **)(*(longlong *)(param_3 + 0x8c0) + 0x30))();
  if (*(int *)(param_1 + 0x7a8) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x7a0);
    plVar9 = plVar11 + *(int *)(param_1 + 0x7a8);
    if (plVar11 != plVar9) {
      plVar1 = (longlong *)*plVar6;
      do {
        if (plVar1 != plVar1 + (int)plVar6[1]) {
          plVar7 = plVar1;
          do {
            if (*plVar7 == *plVar11) {
              return;
            }
            plVar7 = plVar7 + 1;
          } while (plVar7 != plVar1 + (int)plVar6[1]);
        }
        plVar10 = (longlong *)plVar6[2];
        plVar7 = plVar10 + (int)plVar6[3];
        if (plVar10 != plVar7) {
          do {
            if (*plVar10 == *plVar11) {
              return;
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar7);
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar9);
    }
  }
  FUN_140b1a640(param_1,param_3);
  return;
}



// FUNCTION 140b33880 FUN_140b33880 body=423 status=ok
// SIG undefined FUN_140b33880(void)

void FUN_140b33880(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_28 = (uint *)(param_1 + 0x520);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar3 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar4) goto LAB_140b33951;
      uVar3 = puVar8[lVar5 + 1];
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
    local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_140b33951:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x538);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      puVar6 = (undefined8 *)(*plVar1 + (longlong)iStack_5c * 0x40);
      FUN_140b646c0(*puVar6,param_1,puVar6 + 1,param_2);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b33a40 FUN_140b33a40 body=520 status=ok
// SIG undefined FUN_140b33a40(void)

void FUN_140b33a40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  bVar6 = FUN_140b2cbe0(param_1,0);
  if (bVar6 < 2) {
    return;
  }
  lVar7 = *(longlong *)(param_2 + 600);
  lVar9 = (longlong)*(int *)(param_2 + 0x260) * 0x10 + lVar7;
  while( true ) {
    if (lVar7 == lVar9) {
      return;
    }
    if (0.0001 < *(float *)(lVar7 + 8)) break;
    lVar7 = lVar7 + 0x10;
  }
  plVar1 = (longlong *)(param_1 + 0x510);
  local_98 = 0;
  iVar2 = *(int *)(param_1 + 0x538);
  local_68 = (uint *)(param_1 + 0x520);
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar3 = *puVar10;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar5) goto LAB_140b33b5f;
      uVar3 = puVar10[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
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
    iStack_84 = (iStack_80 - iVar8) + 0x1f;
    if (iVar2 < iStack_84) {
LAB_140b33b5f:
      iStack_84 = iVar2;
    }
  }
  uStack_60 = CONCAT44(iStack_84,0xffffffff);
  auStack_20._8_4_ = iStack_80;
  auStack_20._0_8_ = uStack_60;
  auStack_20._12_4_ = uStack_7c;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  local_48 = plVar1;
  local_38 = plVar1;
  puStack_28 = local_68;
  local_10 = plVar1;
  iStack_30 = iStack_70;
  uStack_2c = uStack_6c;
  if (iStack_84 < *(int *)(param_1 + 0x538)) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_84 * 0x40 + *plVar1);
      (**(code **)(*plVar4 + 0x2b0))
                (plVar4,param_1,(longlong)iStack_84 * 0x40 + *plVar1 + 8,param_2);
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      iStack_84 = uStack_60._4_4_;
    } while (uStack_60._4_4_ < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b33c50 FUN_140b33c50 body=592 status=ok
// SIG undefined FUN_140b33c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b33c50(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if (param_3 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
    plVar7 = *(longlong **)(param_1 + 0x718);
    plVar4 = plVar7 + *(int *)(param_1 + 0x720);
    for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_3) {
        local_c8 = param_3;
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x750,&local_c8);
        if ((*(byte *)(param_3 + 0x94) & 2) != 0) {
          FWeakObjectPtr::operator=(&local_c8,param_3);
          FUN_140b26a70(param_1,&local_c8);
          return;
        }
        lVar3 = *(longlong *)(param_1 + 0x120);
        if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
          return;
        }
        uStack_b8 = 0;
        local_c0 = FUN_140b26a70;
        FWeakObjectPtr::operator=(&local_c8,param_3);
        uVar1 = (undefined4)local_c8;
        uVar2 = local_c8._4_4_;
        plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_144230918;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_c0;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_c0._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_b8;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_b4;
          *(undefined4 *)(plVar4 + 4) = uVar1;
          *(undefined4 *)((longlong)plVar4 + 0x24) = uVar2;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar5;
          *plVar4 = (longlong)&PTR_FUN_144230960;
        }
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_90 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        FUN_142880af0(uVar6,&local_a8);
        if (local_48 != 0) {
          plVar7 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar7 = local_58;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar3 = FMemory::Realloc(plVar4,0,0);
        if (lVar3 == 0) {
          return;
        }
        FMemory::Free(lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b33ea0 FUN_140b33ea0 body=181 status=ok
// SIG undefined FUN_140b33ea0(void)

void FUN_140b33ea0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x718);
    plVar5 = plVar3 + (longlong)*(int *)(param_1 + 0x720) * 2;
    if (plVar3 != plVar5) {
      while (param_3 != *plVar3) {
        plVar3 = plVar3 + 2;
        if (plVar3 == plVar5) {
          return;
        }
      }
      plVar3 = (longlong *)(param_1 + 0x728);
      plVar4 = (longlong *)*plVar3;
      plVar5 = plVar4 + *(int *)(param_1 + 0x730);
      for (; plVar4 != plVar5; plVar4 = plVar4 + 1) {
        if (*plVar4 == param_3) {
          return;
        }
      }
      cVar2 = FUN_142390930(param_1,param_3);
      if (cVar2 == '\0') {
        iVar1 = *(int *)(param_1 + 0x730);
        *(int *)(param_1 + 0x730) = iVar1 + 1;
        if (*(int *)(param_1 + 0x734) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
        }
        *(longlong *)(*plVar3 + (longlong)iVar1 * 8) = param_3;
      }
    }
  }
  return;
}



// FUNCTION 140b33f60 FUN_140b33f60 body=78 status=ok
// SIG undefined FUN_140b33f60(void)

void FUN_140b33f60(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    local_res8 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x4a0,&local_res8);
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x4d0))(*(longlong **)(param_1 + 0x498),param_2)
    ;
  }
  return;
}



// FUNCTION 140b33fb0 FUN_140b33fb0 body=414 status=ok
// SIG undefined FUN_140b33fb0(void)

void FUN_140b33fb0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (param_2 != 0) {
    if (SUB164(*(undefined1 (*) [16])(param_2 + 0x7b8),0xc) == 0) {
      lVar1 = *(longlong *)(param_2 + 0x168);
      if (lVar1 == 0) {
        uVar5 = (undefined4)DAT_1468b5da0;
        uVar6 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_64 = DAT_1468b5da8;
      }
      else {
        local_48 = *(float *)(lVar1 + 0x210);
        fStack_44 = *(float *)(lVar1 + 0x214);
        fStack_40 = *(float *)(lVar1 + 0x218);
        fStack_3c = *(float *)(lVar1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_44);
        auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_48);
        auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_40);
        auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_3c);
        iVar3 = movmskps(0,auVar2);
        if (iVar3 != 0) {
          *(float *)(lVar1 + 0x250) = local_48;
          *(float *)(lVar1 + 0x254) = fStack_44;
          *(float *)(lVar1 + 600) = fStack_40;
          *(float *)(lVar1 + 0x25c) = fStack_3c;
          puVar4 = (undefined8 *)FQuat::Rotator(&local_48,local_60);
          *(undefined8 *)(lVar1 + 0x260) = *puVar4;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
        }
        uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_64 = *(undefined4 *)(lVar1 + 0x268);
      }
      local_6c = CONCAT44(uVar6,uVar5);
      puVar4 = (undefined8 *)FRotator::Vector(&local_6c,local_54);
      *(undefined8 *)(param_4 + 0x10) = *puVar4;
      *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(puVar4 + 1);
    }
    else if (SUB164(*(undefined1 (*) [16])(param_2 + 0x7b8),0xc) == 1) {
      *(undefined8 *)(param_2 + 0x880) = 0;
      FUN_140b26e10(param_2);
    }
    else if ((*(int *)(param_2 + 0x7c4) == 2) &&
            ((int)((ulonglong)*(undefined8 *)(param_2 + 0x7b8) >> 0x20) == 0)) {
      *(float *)(param_2 + 0x488) = *(float *)(param_1 + 100) * *(float *)(param_2 + 0x488);
    }
  }
  thunk_FUN_1413b2d30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b34150 FUN_140b34150 body=69 status=ok
// SIG undefined FUN_140b34150(void)

void FUN_140b34150(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (SUB164(*(undefined1 (*) [16])(param_2 + 0x7b8),0xc) == 1) {
      FUN_140b20190();
    }
    if (*(longlong *)(param_2 + 0x6f8) != 0) {
      *(undefined1 *)(*(longlong *)(param_2 + 0x6f8) + 0x714) = 0;
    }
  }
  return;
}



// FUNCTION 140b341a0 FUN_140b341a0 body=1197 status=ok
// SIG undefined FUN_140b341a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b341a0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  longlong *local_128;
  int local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
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
  local_100 = param_4;
  if ((param_2 == (longlong *)0x0) || (param_3 == 0)) goto LAB_140b34620;
  lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar2 == 0) {
LAB_140b34365:
    if ((int)((ulonglong)param_2[0xf9] >> 0x20) != 0) goto LAB_140b34620;
    if ((int)param_2[0xf9] == 1) {
      puVar5 = (undefined8 *)FName::FName(&local_118,&DAT_14428c3ec,1);
      uVar3 = FUN_140b1a100(param_2,*(undefined8 *)(param_1 + 0x60),*puVar5,0);
      FUN_140b3fd40(param_2,uVar3,DAT_146868c80);
      if ((param_2[0xe5] != 0) && (lVar2 = *(longlong *)(param_3 + 0x510), lVar2 != 0)) {
        lVar6 = FUN_1413b1b90();
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
          FUN_140b23bf0(param_1,param_2,lVar2);
        }
      }
      goto LAB_140b34620;
    }
    if (((int)param_2[0xf9] != 0) || (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 == 0))
    goto LAB_140b34620;
    local_128 = (longlong *)0x0;
    local_120 = 0;
    FWeakObjectPtr::operator=(&local_118,param_2);
    uStack_10c = uStack_114;
    plVar4 = (longlong *)FMemory::Realloc(0,0x20,0);
    if (plVar4 == (longlong *)0x0) {
      if (((local_120 != 0) && (local_128 != (longlong *)0x0)) &&
         ((**(code **)(*local_128 + 0x28))(local_128,0), local_128 != (longlong *)0x0)) {
        local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
      }
    }
    else {
      *plVar4 = (longlong)&PTR_GetPoolName_1442ab8a8;
      *(undefined4 *)(plVar4 + 1) = local_118;
      *(undefined4 *)((longlong)plVar4 + 0xc) = uStack_10c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar2;
      *plVar4 = (longlong)&PTR_GetPoolName_1442ab8f0;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
      ::CreateCopy(plVar4,&local_128);
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar2 = FMemory::Realloc(plVar4,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar2 + 400) == 0) goto LAB_140b3452c;
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  else {
    uVar3 = FUN_1413b53a0();
    lVar2 = FUN_140b2c110(param_3,uVar3,&local_118);
    if ((lVar2 == 0) || (SUB164(*(undefined1 (*) [16])(param_2 + 0xf7),0xc) == 2))
    goto LAB_140b34365;
    FWeakObjectPtr::operator=(&local_118,param_2);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    FWeakObjectPtr::operator=(&local_110,param_1);
    local_108 = local_118;
    local_104 = uStack_114;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 == (longlong *)0x0) {
      if (((local_120 != 0) && (local_128 != (longlong *)0x0)) &&
         ((**(code **)(*local_128 + 0x28))(local_128,0), local_128 != (longlong *)0x0)) {
        local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
      }
    }
    else {
      *plVar4 = (longlong)&PTR_GetPoolName_14428b548;
      *(undefined4 *)(plVar4 + 1) = local_110;
      *(undefined4 *)((longlong)plVar4 + 0xc) = uStack_10c;
      *(undefined4 *)(plVar4 + 2) = local_108;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_104;
      plVar4[3] = param_1;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar2;
      *plVar4 = (longlong)&PTR_GetPoolName_14428b590;
      FUN_140af4dd0(plVar4,&local_128);
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar2 = FMemory::Realloc(plVar4,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar2 + 400) == 0) {
LAB_140b3452c:
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
  }
  local_c0 = 0;
  local_c8 = 0;
  if ((local_120 != 0) && (local_128 != (longlong *)0x0)) {
    (**(code **)(*local_128 + 0x30))(local_128,&local_c8);
  }
  FWeakObjectPtr::operator=(local_b8,0);
  local_b0 = 0;
  local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_78 = (longlong *)0x0;
  local_68 = 0;
  FUN_142880af0(uVar3,&local_c8);
  if (local_68 != 0) {
    plVar4 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar4 = local_78;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
  if (local_120 != 0) {
    if (local_128 == (longlong *)0x0) goto LAB_140b34620;
    (**(code **)(*local_128 + 0x28))(local_128,0);
    if (local_128 != (longlong *)0x0) {
      local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
    }
    local_120 = 0;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
LAB_140b34620:
  thunk_FUN_1413b2d30(param_1,param_2,param_3,local_100);
  return;
}



// FUNCTION 140b34650 FUN_140b34650 body=448 status=ok
// SIG undefined FUN_140b34650(void)

void FUN_140b34650(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar3 = *(longlong **)(param_1 + 0x7e8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x298))(plVar3,param_1,*(undefined8 *)(param_1 + 0x6e8));
  }
  plVar3 = (longlong *)(param_1 + 0x820);
  local_78 = 0;
  uStack_74 = 1;
  iVar1 = *(int *)(param_1 + 0x848);
  puStack_28 = (uint *)(param_1 + 0x830);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x840);
    if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar2 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar5 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar5) goto LAB_140b3472f;
      uVar2 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_140b3472f:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar3,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar5 = local_68._4_4_ < *(int *)(param_1 + 0x848);
  local_48 = plVar3;
  local_38 = plVar3;
  local_10 = plVar3;
  local_68 = puStack_28;
  if (bVar5) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar3);
      (**(code **)(*plVar4 + 0x2a0))
                (plVar4,param_1,*(undefined8 *)(param_1 + 0x6e8),
                 *plVar3 + 8 + (longlong)iStack_5c * 0x40);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b34810 FUN_140b34810 body=1132 status=ok
// SIG undefined FUN_140b34810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b34810(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auStack_168 [32];
  longlong *local_148;
  int local_140;
  float local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((((param_2 == (longlong *)0x0) || (param_3 == 0)) || ((int)param_2[0xf9] != 1)) ||
     (((char)param_2[0xfa] != '\0' || (lVar6 = param_2[0xe5], lVar6 == 0)))) goto LAB_140b34c4f;
  lVar3 = *(longlong *)(param_3 + 0x510);
  if (lVar3 == 0) {
LAB_140b3490b:
    fVar11 = *(float *)(lVar6 + 0x18c);
    fVar1 = *(float *)(lVar6 + 400);
    fVar2 = *(float *)(lVar6 + 0x194);
    fVar9 = fVar11 * fVar11 + fVar1 * fVar1 + fVar2 * fVar2;
    if (1e-08 < fVar9) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      local_138 = auVar10._0_4_;
      local_138 = local_138 + local_138 * (0.5 - fVar9 * 0.5 * local_138 * local_138);
      local_138 = local_138 + local_138 * (0.5 - fVar9 * 0.5 * local_138 * local_138);
      fVar11 = fVar11 * local_138;
      *(float *)(lVar6 + 0x18c) = fVar11;
      *(float *)(lVar6 + 400) = fVar1 * local_138;
      *(float *)(lVar6 + 0x194) = fVar2 * local_138;
    }
    fVar1 = *(float *)(param_1 + 0x58);
    *(float *)(lVar6 + 0x18c) = fVar11 * fVar1;
    *(float *)(lVar6 + 400) = fVar1 * *(float *)(lVar6 + 400);
    *(float *)(lVar6 + 0x194) = fVar1 * *(float *)(lVar6 + 0x194);
  }
  else {
    lVar5 = FUN_1413b1b90();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140b3490b;
    local_128 = *(undefined4 *)(param_1 + 0x58);
    *(undefined8 *)(lVar6 + 0x18c) = 0;
    *(undefined4 *)(lVar6 + 0x194) = local_128;
    FUN_140b23bf0(param_1,param_2,lVar3);
  }
  if ((*(int *)(lVar6 + 0x28c) <= *(int *)(lVar6 + 0x294) + 1) &&
     (lVar6 = (**(code **)(*param_2 + 0x148))(param_2), lVar6 != 0)) {
    local_148 = (longlong *)0x0;
    local_140 = 0;
    FWeakObjectPtr::operator=(&local_138,param_2);
    fVar11 = local_138;
    local_130 = CONCAT44(uStack_134,local_138);
    plVar7 = (longlong *)FMemory::Realloc(0,0x20,0);
    if (plVar7 == (longlong *)0x0) {
      if (((local_140 != 0) && (local_148 != (longlong *)0x0)) &&
         ((**(code **)(*local_148 + 0x28))(local_148,0), local_148 != (longlong *)0x0)) {
        local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
      }
    }
    else {
      *plVar7 = (longlong)&PTR_GetPoolName_1442ab938;
      *(float *)(plVar7 + 1) = fVar11;
      *(undefined4 *)((longlong)plVar7 + 0xc) = local_130._4_4_;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar7[3] = lVar6;
      *plVar7 = (longlong)&PTR_GetPoolName_1442ab980;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
      ::CreateCopy(plVar7,&local_148);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar6 = FMemory::Realloc(plVar7,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
    lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar8 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    local_f8 = 0;
    local_f0 = 0;
    if ((local_140 != 0) && (local_148 != (longlong *)0x0)) {
      (**(code **)(*local_148 + 0x30))(local_148,&local_f8);
    }
    FWeakObjectPtr::operator=(local_e8,0);
    local_e0 = 0;
    local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_a8 = (longlong *)0x0;
    local_98 = 0;
    FUN_142880af0(uVar8,&local_f8);
    if (local_98 != 0) {
      plVar7 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar7 = local_a8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
    if (local_140 != 0) {
      if (local_148 == (longlong *)0x0) goto LAB_140b34c4f;
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
LAB_140b34c4f:
  thunk_FUN_1413b2e30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b34c80 FUN_140b34c80 body=1195 status=ok
// SIG undefined FUN_140b34c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b34c80(longlong param_1,undefined8 param_2,longlong param_3,int *param_4,
                  longlong *param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined4 uVar17;
  ulonglong in_stack_ffffffffffffff68;
  longlong local_88;
  float local_80;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_50;
  
  lVar7 = param_6;
  plVar6 = param_5;
  if (param_5 == (longlong *)0x0) goto LAB_140b350ee;
  if (param_3 != 0) {
    uVar10 = UUGJournalKey::GetPrivateStaticClass();
    lVar11 = FUN_140b2c110(param_3,uVar10);
    if (lVar11 != 0) {
      lVar12 = UUGJournalKey::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong *)(lVar11 + 0x78) != 0)) {
        lVar13 = UCelLightData::GetPrivateStaticClass();
        lVar12 = *(longlong *)(lVar11 + 0x78);
        for (lVar2 = lVar12; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar13) {
            if (lVar12 != 0) {
              if (lVar12 == 0) goto LAB_140b34d83;
              plVar14 = (longlong *)UCelLightData::GetPrivateStaticClass();
              plVar16 = *(longlong **)(lVar11 + 0x78);
              plVar3 = plVar16;
              goto joined_r0x000140b34d73;
            }
            break;
          }
        }
      }
    }
  }
  goto LAB_140b34e79;
joined_r0x000140b34d73:
  if (plVar3 == (longlong *)0x0) goto LAB_140b34d83;
  if (plVar3 == plVar14) goto LAB_140b34d85;
  plVar3 = (longlong *)plVar3[6];
  goto joined_r0x000140b34d73;
LAB_140b34d83:
  plVar16 = (longlong *)0x0;
LAB_140b34d85:
  lVar11 = plVar16[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar16 + 0x368))(plVar16);
    lVar11 = plVar16[0x1f];
    if (lVar11 == 0) goto LAB_140b34e79;
  }
  lVar12 = UCelLightData::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
      != lVar12 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (*(longlong *)(lVar11 + 0xa0) != 0)) {
    lVar13 = FUN_142e0d0b0();
    lVar12 = *(longlong *)(lVar11 + 0xa0);
    for (lVar2 = lVar12; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar13) {
        if (lVar12 != 0) {
          if (lVar12 == 0) goto LAB_140b34e4e;
          plVar14 = (longlong *)FUN_142e0d0b0();
          plVar16 = *(longlong **)(lVar11 + 0xa0);
          plVar3 = plVar16;
          goto joined_r0x000140b34e3d;
        }
        break;
      }
    }
  }
  goto LAB_140b34e79;
joined_r0x000140b34e3d:
  if (plVar3 == (longlong *)0x0) goto LAB_140b34e4e;
  if (plVar3 == plVar14) goto LAB_140b34e50;
  plVar3 = (longlong *)plVar3[6];
  goto joined_r0x000140b34e3d;
LAB_140b34e4e:
  plVar16 = (longlong *)0x0;
LAB_140b34e50:
  lVar11 = plVar16[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar16 + 0x368))(plVar16);
    lVar11 = plVar16[0x1f];
  }
  if (lVar11 == *(longlong *)(lVar7 + 0x20)) {
    return;
  }
LAB_140b34e79:
  uVar17 = FUN_140afed70(param_1,param_4);
  iVar9 = *(int *)(param_1 + 0x50);
  if (0 < iVar9) {
    iVar1 = *param_4;
    iVar8 = iVar1 + -1;
    if ((iVar8 < 0) || (iVar9 <= iVar8)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else {
        if (iVar1 <= iVar9 + -1) {
          iVar9 = iVar1;
        }
        iVar8 = iVar9 + -1;
      }
    }
    plVar16 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x48));
    lVar11 = *plVar16;
    if (lVar11 != 0) {
      local_60 = 0;
      lVar12 = plVar6[0x2d];
      local_68 = 0;
      if (lVar12 == 0) {
        local_88 = _DAT_1468b5d90;
        local_80 = DAT_1468b5d98;
      }
      else {
        local_88 = *(longlong *)(lVar12 + 0x220);
        local_80 = *(float *)(lVar12 + 0x228);
      }
      local_50 = CONCAT44((int)(local_50 >> 0x20),local_80);
      local_58 = local_88;
      uVar10 = (**(code **)(*plVar6 + 0x148))(plVar6);
      FUN_1405a1e30(&local_88,uVar10,lVar11,&local_58,0x42480000,&local_68);
      FUN_140591060(&local_88);
    }
    if (plVar16[1] != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x68);
      local_58 = 0;
      local_50 = 0;
      puVar15 = (undefined8 *)FName::FName(&param_5,&DAT_14428ca84,1);
      FUN_140b8d930(plVar6,plVar16[1],*puVar15,uVar10,&local_58,uVar17,
                    in_stack_ffffffffffffff68 & 0xffffffffffffff00);
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    lVar11 = *(longlong *)(param_1 + 0x70);
    if (lVar11 != 0) {
      uVar5 = local_50 >> 0x20;
      local_50 = local_50 & 0xffffffff00000000;
      local_60 = 0;
      lVar12 = plVar6[0x2d];
      local_68 = 0;
      if (lVar12 == 0) {
        local_50 = CONCAT44((int)uVar5,DAT_1468b5d98);
        plVar16 = &local_58;
        local_58 = _DAT_1468b5d90;
      }
      else {
        plVar16 = &local_88;
        local_80 = (float)*(undefined4 *)(lVar12 + 0x228);
        local_88 = *(longlong *)(lVar12 + 0x220);
      }
      local_80 = *(float *)(plVar16 + 1) + *(float *)(param_1 + 0x60);
      local_50 = CONCAT44(local_50._4_4_,local_80);
      local_58 = CONCAT44((float)((ulonglong)*plVar16 >> 0x20) + *(float *)(param_1 + 0x5c),
                          (float)*plVar16 + *(float *)(param_1 + 0x58));
      uVar10 = (**(code **)(*plVar6 + 0x148))(plVar6);
      FUN_14245fbc0(uVar10,lVar11,&local_58,&local_68,1,1,0);
    }
  }
LAB_140b350ee:
  thunk_FUN_1413b2ee0(param_1,param_2,param_3,param_4,plVar6,lVar7);
  return;
}



// FUNCTION 140b35130 FUN_140b35130 body=973 status=ok
// SIG undefined FUN_140b35130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b35130(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,float *param_6)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_2b8 [32];
  undefined4 *local_298;
  float *local_290;
  undefined8 local_288;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined1 local_26c;
  undefined2 local_26b;
  undefined1 local_269;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined1 local_258 [28];
  undefined1 local_23c [236];
  float local_150;
  undefined1 local_14c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if ((param_2 != 0) && (param_5 != 0)) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar4 = FUN_14222e2a0(param_2);
    lVar3 = param_5;
    if (!bVar2) {
      lVar3 = 0;
    }
    if ((lVar3 == lVar4) && (*(longlong *)(param_1 + 0x78) != 0)) {
      lVar5 = UCelLightData::GetPrivateStaticClass();
      lVar3 = *(longlong *)(param_1 + 0x78);
      for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar5) {
          if (lVar3 != 0) {
            if (lVar3 == 0) goto LAB_140b35240;
            plVar6 = (longlong *)UCelLightData::GetPrivateStaticClass();
            plVar8 = *(longlong **)(param_1 + 0x78);
            plVar1 = plVar8;
            goto joined_r0x000140b35230;
          }
          break;
        }
      }
    }
  }
  goto LAB_140b354c0;
joined_r0x000140b35230:
  if (plVar1 == (longlong *)0x0) goto LAB_140b35240;
  if (plVar1 == plVar6) goto LAB_140b35242;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000140b35230;
LAB_140b35240:
  plVar8 = (longlong *)0x0;
LAB_140b35242:
  lVar3 = plVar8[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar3 = plVar8[0x1f];
    if (lVar3 == 0) goto LAB_140b354c0;
  }
  lVar4 = UCelLightData::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (*(longlong *)(lVar3 + 0xa0) != 0)) {
    lVar7 = FUN_142e0d0b0();
    lVar4 = *(longlong *)(lVar3 + 0xa0);
    for (lVar5 = lVar4; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar7) {
        if (lVar4 != 0) {
          if (lVar4 == 0) goto LAB_140b35314;
          plVar6 = (longlong *)FUN_142e0d0b0();
          plVar8 = *(longlong **)(lVar3 + 0xa0);
          plVar1 = plVar8;
          goto joined_r0x000140b35304;
        }
        break;
      }
    }
  }
  goto LAB_140b354c0;
joined_r0x000140b35304:
  if (plVar1 == (longlong *)0x0) goto LAB_140b35314;
  if (plVar1 == plVar6) goto LAB_140b35316;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000140b35304;
LAB_140b35314:
  plVar8 = (longlong *)0x0;
LAB_140b35316:
  lVar3 = plVar8[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar3 = plVar8[0x1f];
  }
  if (lVar3 == *(longlong *)(param_6 + 8)) goto LAB_140b354c0;
  FUN_142d0a300(local_258);
  local_150 = (float)FUN_140afed70(param_1,param_4);
  local_150 = local_150 * *param_6;
  local_14c = 1;
  if (*(longlong *)(param_2 + 0x478) != 0) {
    lVar5 = FUN_142e49950();
    lVar3 = *(longlong *)(param_2 + 0x478);
    for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar5) {
        if (lVar3 != 0) {
          if (lVar3 == 0) goto LAB_140b353d4;
          plVar6 = (longlong *)FUN_142e49950();
          plVar8 = *(longlong **)(param_2 + 0x478);
          plVar1 = plVar8;
          goto joined_r0x000140b353c4;
        }
        break;
      }
    }
  }
  goto LAB_140b3543f;
joined_r0x000140b353c4:
  if (plVar1 == (longlong *)0x0) goto LAB_140b353d4;
  if (plVar1 == plVar6) goto LAB_140b353d6;
  plVar1 = (longlong *)plVar1[6];
  goto joined_r0x000140b353c4;
LAB_140b353d4:
  plVar8 = (longlong *)0x0;
LAB_140b353d6:
  lVar3 = plVar8[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar3 = plVar8[0x1f];
    if (lVar3 != 0) goto LAB_140b353fa;
LAB_140b35430:
    lVar3 = 0;
  }
  else {
LAB_140b353fa:
    lVar4 = FUN_142e49950();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140b35430;
  }
  FWeakObjectPtr::operator=(local_23c,lVar3);
LAB_140b3543f:
  local_278 = 0xbf800000;
  local_288 = 0;
  local_290 = (float *)0x0;
  local_26b = 0;
  local_269 = 0;
  local_26c = 0;
  local_298 = &local_278;
  local_274 = 0xbf800000;
  local_270 = 0xbf800000;
  local_268 = 0x3f800000;
  local_264 = 0x3f800000;
  local_260 = 0x3f800000;
  FUN_140a86fb0(param_2,*(undefined8 *)(param_1 + 0x78),param_5,local_258);
  FUN_1409c53c0(local_258);
LAB_140b354c0:
  local_290 = param_6;
  local_298 = (undefined4 *)param_5;
  thunk_FUN_1413b2ee0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b35500 FUN_140b35500 body=2434 status=ok
// SIG undefined FUN_140b35500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b35500(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  float local_230;
  longlong local_228;
  undefined8 local_220;
  float local_218;
  undefined8 local_214;
  float local_20c;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  byte local_1b8;
  undefined1 local_1b0 [56];
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined1 local_150 [16];
  longlong local_140;
  undefined8 local_138;
  undefined1 local_128;
  ushort local_126;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1f0 = param_5;
  local_228 = param_6;
  local_1e8 = param_4;
  local_158 = param_3;
  if (((((param_2 != (longlong *)0x0) && (param_2[0x23] != 0)) && (param_5 != 0)) &&
      (((char)param_2[0x25] == '\x03' &&
       (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 != 0)))) &&
     (*(longlong *)(param_6 + 0x20) != 0)) {
    plVar12 = *(longlong **)(param_1 + 0x68);
    lVar4 = *(longlong *)(*(longlong *)(param_6 + 0x20) + 0x10);
    plVar6 = plVar12 + *(int *)(param_1 + 0x70);
    if (plVar12 != plVar6) {
      lVar13 = 0;
      do {
        lVar9 = lVar13;
        if (*plVar12 != 0) {
          lVar5 = FUN_142e0d0b0();
          for (lVar7 = *plVar12; (lVar9 = lVar13, lVar7 != 0 && (lVar9 = *plVar12, lVar7 != lVar5));
              lVar7 = *(longlong *)(lVar7 + 0x30)) {
          }
        }
        if (lVar9 == lVar4) {
          plVar6 = *(longlong **)(param_6 + 8);
          plVar12 = plVar6 + (longlong)*(int *)(param_6 + 0x10) * 2;
          if (plVar6 != plVar12) {
            goto LAB_140b35660;
          }
          break;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar6);
    }
  }
  goto LAB_140b35e31;
  while (plVar6 = plVar6 + 2, plVar6 != plVar12) {
LAB_140b35660:
    lVar4 = *plVar6;
    lStack_200 = plVar6[1];
    local_208 = lVar4;
    if ((lVar4 == *(longlong *)(param_1 + 0x48)) &&
       (fVar16 = (float)lStack_200, 0.0 < (float)lStack_200)) {
      fVar14 = (float)FUN_140afed70(param_1,local_1e8);
      lVar9 = param_2[0x23];
      fVar14 = fVar14 * fVar16;
      fVar16 = 1.0;
      if (fVar14 <= 1.0) {
        fVar14 = 1.0;
      }
      if (lVar9 == 0) {
LAB_140b3578b:
        local_1f8 = 0;
      }
      else {
        local_1f8 = lVar9;
        lVar7 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140b3578b;
        local_1c8 = 0;
        local_1b8 = local_1b8 & 0xfd | 1;
        local_1c0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        FUN_142c8c260(local_1b0,0x3f800000);
        local_178[0] = 0xff;
        local_170 = 0;
        local_168 = 0;
        FUN_140c42c80(lVar9,lVar4,&local_1d8);
        cVar2 = FUN_142d52a00(local_178);
        if (cVar2 != '\0') {
          uVar8 = FUN_142d52a20(local_178);
          uVar8 = FArchive::operator<<(uVar8);
          fVar15 = (float)FUN_142d5fea0(uVar8);
          if (fVar15 < 1.0) {
            lVar13 = lVar9;
          }
        }
        if (local_1c8 != 0) {
          FMemory::Free();
        }
        if (lVar13 != 0) goto LAB_140b35929;
      }
      uVar8 = (**(code **)(*param_2 + 0x148))(param_2);
      UWorld::GetPlayerControllerIterator(uVar8,&local_208);
      iVar3 = (int)(float)lStack_200;
      while( true ) {
        if ((iVar3 < 0) || (*(int *)(local_208 + 8) <= iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        lVar9 = FWeakObjectPtr::Get();
        if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x488), lVar9 != 0)) {
          lVar7 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) &&
             (iVar3 = (**(code **)(*(longlong *)(lVar9 + 0x8b0) + 0x20))
                                ((longlong *)(lVar9 + 0x8b0),param_2[0x23]), iVar3 != 2)) {
            local_1c8 = 0;
            local_1b8 = local_1b8 & 0xfd | 1;
            local_1c0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            FUN_142c8c260(local_1b0,0x3f800000);
            local_178[0] = 0xff;
            local_170 = 0;
            local_168 = 0;
            FUN_140c42c80(lVar9,lVar4,&local_1d8);
            cVar2 = FUN_142d52a00(local_178);
            if (cVar2 != '\0') {
              uVar8 = FUN_142d52a20(local_178);
              uVar8 = FArchive::operator<<(uVar8);
              fVar15 = (float)FUN_142d5fea0(uVar8);
              if (fVar15 < fVar16) {
                lVar13 = lVar9;
                fVar16 = fVar15;
              }
            }
            if (local_1c8 != 0) {
              FMemory::Free();
            }
          }
        }
        iVar3 = (int)(float)lStack_200 + 1;
        lStack_200 = CONCAT44(lStack_200._4_4_,iVar3);
      }
      if (lVar13 == 0) {
        lVar13 = param_2[0x23];
        if (lVar13 == 0) break;
        lVar4 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
      }
LAB_140b35929:
      lVar4 = param_2[0x2d];
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        puVar10 = &local_238;
        local_230 = DAT_1468b5d98;
      }
      else {
        puVar10 = &local_220;
        local_218 = (float)*(undefined4 *)(lVar4 + 0x228);
        local_220 = *(undefined8 *)(lVar4 + 0x220);
      }
      local_214 = *puVar10;
      local_20c = *(float *)(puVar10 + 1);
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar4 + 0x220);
        local_230 = *(float *)(lVar4 + 0x228);
      }
      fVar16 = local_230;
      uVar8 = local_238;
      local_218 = local_230;
      lVar4 = *(longlong *)(lVar13 + 0x168);
      local_220 = local_238;
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar4 + 0x220);
        local_230 = *(float *)(lVar4 + 0x228);
      }
      local_220._0_4_ = (float)uVar8;
      local_230 = local_230 - fVar16;
      local_220._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      local_238 = CONCAT44((float)((ulonglong)local_238 >> 0x20) - local_220._4_4_,
                           (float)local_238 - (float)local_220);
      local_220 = uVar8;
      uVar8 = FVector::Rotation(&local_238,&local_220);
      FRotator::Quaternion(uVar8,&local_118);
      lVar4 = param_2[0x2d];
      local_c8 = local_118;
      uStack_c0 = uStack_110;
      local_b8._8_4_ = local_20c;
      local_b8._0_8_ = local_214;
      local_b8._12_4_ = 0;
      local_a8._4_4_ = DAT_1464aa788._4_4_;
      local_a8._0_4_ = (undefined4)DAT_1464aa788;
      local_a8._8_4_ = DAT_1464aa790;
      local_a8._12_4_ = 0;
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar4 + 0x220);
        local_230 = *(float *)(lVar4 + 0x228);
      }
      fVar16 = local_230;
      uVar8 = local_238;
      local_20c = local_230;
      lVar4 = *(longlong *)(lVar13 + 0x168);
      local_214 = local_238;
      if (lVar4 == 0) {
        local_238 = _DAT_1468b5d90;
        local_230 = DAT_1468b5d98;
      }
      else {
        local_238 = *(undefined8 *)(lVar4 + 0x220);
        local_230 = *(float *)(lVar4 + 0x228);
      }
      local_214._0_4_ = (float)uVar8;
      local_230 = local_230 - fVar16;
      local_214._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
      local_238 = CONCAT44((float)((ulonglong)local_238 >> 0x20) - local_214._4_4_,
                           (float)local_238 - (float)local_214);
      local_214 = uVar8;
      FVector::Rotation(&local_238,local_108);
      FActorSpawnParameters::FActorSpawnParameters(local_f8);
      local_e8 = param_2[0x23];
      local_e0 = FUN_140a63ba0(param_2);
      lVar4 = param_2[0x23];
      lVar9 = UUGButton::GetPrivateStaticClass();
      uVar8 = FUN_140a63ba0(param_2);
      uVar11 = (**(code **)(*param_2 + 0x148))(param_2);
      FActorSpawnParameters::FActorSpawnParameters(local_150);
      local_126 = local_126 | 4;
      local_128 = 0;
      param_6 = local_228;
      local_140 = lVar4;
      local_138 = uVar8;
      if ((lVar9 != 0) &&
         (lVar4 = FUN_142550d00(uVar11,lVar9,&local_c8,local_150), param_6 = local_228, lVar4 != 0))
      {
        lVar7 = UUGButton::GetPrivateStaticClass();
        lVar9 = local_1f8;
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        param_6 = local_228;
        if (bVar1) {
          *(undefined8 *)(lVar4 + 0x700) = *(undefined8 *)(param_1 + 0x58);
          if (lVar13 != local_1f8) {
            local_1b8 = local_1b8 & 0xfd | 1;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1c8 = 0;
            local_1c0 = 0;
            FUN_142c8c260(local_1b0,0x3f800000);
            local_178[0] = 0xff;
            local_170 = 0;
            local_168 = 0;
            if (lVar9 != 0) {
              cVar2 = FUN_140c42c80(lVar9,*(undefined8 *)(param_1 + 0x48),&local_1d8);
              if ((cVar2 != '\0') && (cVar2 = FUN_142d52a00(local_178), cVar2 != '\0')) {
                uVar8 = FUN_142d52a20(local_178);
                lVar9 = FArchive::operator<<(uVar8);
                if (0.0001 < *(float *)(lVar9 + 0x20)) {
                  *(undefined8 *)(lVar4 + 0x710) = *(undefined8 *)(param_1 + 0x48);
                  uVar8 = FUN_142d52a20(local_178);
                  uVar8 = FArchive::operator<<(uVar8);
                  fVar16 = (float)FUN_142d61c30(uVar8);
                  *(float *)(lVar4 + 0x708) = fVar14 / fVar16;
                }
              }
            }
            if (local_1c8 != 0) {
              FMemory::Free();
            }
          }
          *(undefined8 *)(lVar4 + 0x700) = *(undefined8 *)(param_1 + 0x58);
          *(float *)(lVar4 + 0x470) = fVar14;
          *(longlong *)(lVar4 + 0x480) = param_2[0x90];
          *(undefined8 *)(lVar4 + 0x6f8) = *(undefined8 *)(param_1 + 0x50);
          *(undefined8 *)(lVar4 + 0x718) = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 *)(lVar4 + 0x728) = *(undefined8 *)(param_1 + 0x78);
          *(undefined8 *)(lVar4 + 0x730) = *(undefined8 *)(param_1 + 0x80);
          if (*(longlong *)(lVar4 + 0x720) != 0) {
            FUN_1405abab0(*(longlong *)(lVar4 + 0x720),*(undefined8 *)(param_1 + 0x78));
          }
          if (*(longlong *)(lVar4 + 0x6e8) != 0) {
            *(longlong *)(*(longlong *)(lVar4 + 0x6e8) + 0x1a0) = lVar13;
            FUN_142d6f9d0(*(undefined8 *)(lVar4 + 0x6e8),1);
          }
          FUN_14222b9f0(lVar4,&local_c8,0,0);
          param_6 = local_228;
        }
      }
      break;
    }
  }
LAB_140b35e31:
  local_248 = local_1f0;
  local_240 = param_6;
  thunk_FUN_1413b2ee0(param_1,param_2,local_158,local_1e8);
  return;
}



// FUNCTION 140b35e90 FUN_140b35e90 body=91 status=ok
// SIG undefined FUN_140b35e90(void)

void FUN_140b35e90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x500) & 1) == 0)) {
    FUN_140b26d70(param_2);
  }
  thunk_FUN_1413b3080(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b35ef0 FUN_140b35ef0 body=1818 status=ok
// SIG undefined FUN_140b35ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b35ef0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 *local_220;
  undefined8 local_218;
  float local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  float local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [12];
  undefined1 local_13c [12];
  undefined1 local_130 [24];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_190 = param_4;
  if (((param_2 != (longlong *)0x0) && ((char)param_2[0x25] == '\x03')) && (param_3 != 0)) {
    local_178 = param_2[0xf9];
    lStack_170 = param_2[0xfa];
    local_168 = param_2[0xfb];
    if (((int)((ulonglong)param_2[0xf7] >> 0x20) == 0) && ((*(byte *)(param_2 + 0xa0) & 1) == 0)) {
      if (SUB164(*(undefined1 (*) [16])(param_2 + 0xf7),0xc) == 2) {
        uVar4 = FUN_1413b53a0();
        lVar5 = FUN_140b2c110(param_3,uVar4,&local_218);
        if (lVar5 == 0) goto LAB_140b365dd;
        lVar6 = FUN_1413b53a0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140b365dd;
        fVar15 = *(float *)(lVar5 + 0x68);
        fVar16 = fVar15;
      }
      else {
        if ((int)param_2[0xf8] != 1) goto LAB_140b365dd;
        uVar4 = FUN_1413b53a0();
        lVar5 = FUN_140b2c110(param_3,uVar4,&local_218);
        if (lVar5 != 0) goto LAB_140b365dd;
        uVar4 = FUN_1413b0610();
        lVar5 = FUN_140b2c110(param_3,uVar4,&local_218);
        if (lVar5 == 0) goto LAB_140b365dd;
        lVar6 = FUN_1413b0610();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140b365dd;
        fVar16 = *(float *)(lVar5 + 0x48);
        fVar15 = *(float *)(lVar5 + 0x4c);
      }
      fVar10 = (float)FUN_140afed70(param_1,param_4);
      iVar9 = (int)fVar10;
      local_1b0 = 0;
      local_1a8 = 0x3f800000;
      if (0 < iVar9) {
        rand();
        local_1c0 = 0x3f800000;
        local_1b8 = 0;
        do {
          iVar3 = rand();
          local_1cc = 0;
          local_1c4 = 0;
          local_1c8 = (float)iVar3 * 3.051851e-05 * (fVar15 - fVar16) + fVar16;
          FRotator::Vector(&local_1cc,&local_218);
          puVar7 = (undefined8 *)FVector::RotateAngleAxis(&local_218,local_148);
          local_218 = *puVar7;
          local_210 = *(float *)(puVar7 + 1);
          uVar4 = *puVar7;
          fVar13 = (float)uVar4;
          fVar14 = (float)((ulonglong)uVar4 >> 0x20);
          local_1f0 = *(float *)(puVar7 + 1);
          uVar8 = FVector::Rotation(&local_1b0,local_13c);
          FRotator::Quaternion(uVar8,&local_158);
          local_1f8 = uVar4;
          fVar10 = local_1f0 * fStack_154 - fVar14 * fStack_150;
          fVar11 = fVar13 * fStack_150 - local_1f0 * local_158;
          fVar12 = fVar14 * local_158 - fVar13 * fStack_154;
          fVar10 = fVar10 + fVar10;
          fVar11 = fVar11 + fVar11;
          fVar12 = fVar12 + fVar12;
          local_210 = (fVar11 * local_158 - fVar10 * fStack_154) + fStack_14c * fVar12 + local_1f0;
          lVar5 = param_2[0x2d];
          local_218 = CONCAT44((fVar10 * fStack_150 - fVar12 * local_158) +
                               fStack_14c * fVar11 + fVar14,
                               (fVar12 * fStack_154 - fVar11 * fStack_150) +
                               fStack_14c * fVar10 + fVar13);
          if (lVar5 == 0) {
            local_1e0 = DAT_1468b5d98;
            puVar7 = &local_1e8;
            local_1e8 = _DAT_1468b5d90;
          }
          else {
            puVar7 = (undefined8 *)&local_208;
            local_208 = *(undefined4 *)(lVar5 + 0x220);
            local_200 = *(undefined4 *)(lVar5 + 0x228);
            uStack_204 = *(undefined4 *)(lVar5 + 0x224);
          }
          uVar4 = *puVar7;
          local_1d0 = *(undefined4 *)(puVar7 + 1);
          local_198 = local_210;
          uVar8 = FVector::Rotation(&local_218,local_130);
          FRotator::Quaternion(uVar8,&local_188);
          lVar5 = param_2[0x23];
          lVar6 = param_2[2];
          local_118 = local_188;
          uStack_110 = uStack_180;
          local_108._8_4_ = local_1d0;
          local_108._0_8_ = uVar4;
          local_108._12_4_ = 0;
          local_f8._4_4_ = DAT_1464aa788._4_4_;
          local_f8._0_4_ = (undefined4)DAT_1464aa788;
          local_f8._8_4_ = DAT_1464aa790;
          local_f8._12_4_ = 0;
          local_1d8 = uVar4;
          uVar4 = FUN_140a63ba0(param_2);
          uVar8 = (**(code **)(*param_2 + 0x148))(param_2);
          local_220 = (undefined8 *)((ulonglong)local_220 & 0xffffffffffffff00);
          local_228 = uVar4;
          lVar5 = FUN_140aea740(uVar8,lVar6,&local_118,lVar5);
          if (lVar5 != 0) {
            FUN_140b30220(lVar5,param_2,param_1);
            FUN_140b30a70(lVar5,param_3);
            bVar1 = *(byte *)(lVar5 + 0x94);
            if ((bVar1 & 0x18) == 0x10) {
              fVar10 = *(float *)(lVar5 + 0x470);
            }
            else {
              fVar10 = *(float *)(lVar5 + 0x7ac);
            }
            if ((bVar1 & 0x18) == 0x10) {
              fVar11 = *(float *)(lVar5 + 0x488);
            }
            else {
              fVar11 = *(float *)(lVar5 + 0x7b0);
            }
            if (((0.0001 < fVar10) && ((bVar1 & 0x18) != 0x10)) &&
               (*(char *)(lVar5 + 0x128) == '\x03')) {
              fVar12 = (float)FUN_140b2a6a0(param_2);
              *(float *)(lVar5 + 0x7ac) = (fVar12 / fVar10) * *(float *)(lVar5 + 0x7ac);
            }
            if (((0.0001 < fVar11) && ((bVar1 & 0x18) != 0x10)) &&
               (*(char *)(lVar5 + 0x128) == '\x03')) {
              fVar10 = (float)FUN_140b2a710(param_2);
              *(float *)(lVar5 + 0x7b0) = (fVar10 / fVar11) * *(float *)(lVar5 + 0x7b0);
            }
            UGameplayStatics::FinishSpawningActor(lVar5,&local_118);
          }
          param_4 = local_190;
          iVar9 = iVar9 + -1;
        } while (0 < iVar9);
        *(int *)(local_190 + 0x28) = *(int *)(local_190 + 0x28) + 1;
        local_198 = 0.0;
        local_1e0 = 0;
        lVar5 = param_2[0x2d];
        local_1e8 = 0;
        if (lVar5 == 0) {
          local_1d0 = DAT_1468b5d98;
          puVar7 = &local_1d8;
          local_1d8 = _DAT_1468b5d90;
        }
        else {
          puVar7 = (undefined8 *)&local_208;
          local_208 = *(undefined4 *)(lVar5 + 0x220);
          local_200 = *(undefined4 *)(lVar5 + 0x228);
          uStack_204 = *(undefined4 *)(lVar5 + 0x224);
        }
        local_1f8 = *puVar7;
        local_1f0 = *(float *)(puVar7 + 1);
        uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
        local_220 = &local_1e8;
        local_228 = CONCAT44(local_228._4_4_,0x42480000);
        FUN_1405a1e30(&local_188,uVar4,*(undefined8 *)(param_1 + 0x50),&local_1f8);
        FUN_140591060(&local_188);
      }
    }
  }
LAB_140b365dd:
  thunk_FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b36610 FUN_140b36610 body=822 status=ok
// SIG undefined FUN_140b36610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b36610(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined4 local_140;
  longlong *local_138;
  int local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((((param_2 != (longlong *)0x0) && ((int)param_2[0xf8] == 0)) &&
      ((*(byte *)(param_2 + 0xa0) & 1) == 0)) &&
     ((param_2[0xe5] != 0 && (*(int *)(param_2[0xe5] + 0x28c) == 0)))) {
    local_120 = 0x3f800000;
    local_110 = 0x3f800000;
    local_148 = &local_118;
    local_118 = 0;
    FUN_140b41aa0();
    if ((0.0 < *(float *)(param_1 + 0x58)) &&
       (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) {
      FWeakObjectPtr::operator=(&local_128,param_2);
      local_138 = (longlong *)0x0;
      local_130 = 0;
      plVar3 = (longlong *)FMemory::Realloc(0,0x20,0);
      if (plVar3 == (longlong *)0x0) {
        if (((local_130 != 0) && (local_138 != (longlong *)0x0)) &&
           ((**(code **)(*local_138 + 0x28))(local_138,0), local_138 != (longlong *)0x0)) {
          local_138 = (longlong *)FMemory::Realloc(local_138,0,0);
        }
      }
      else {
        *plVar3 = (longlong)&PTR_GetPoolName_1442ab548;
        *(undefined4 *)(plVar3 + 1) = local_128;
        *(undefined4 *)((longlong)plVar3 + 0xc) = local_124;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[3] = lVar2;
        *plVar3 = (longlong)&PTR_GetPoolName_1442ab590;
        TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
        ::CreateCopy(plVar3,&local_138);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
      local_118 = 0;
      lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      fVar5 = (float)FUN_140afed70(param_1,param_4);
      local_d8 = 0;
      fVar1 = *(float *)(param_1 + 0x58);
      local_d0 = 0;
      if ((local_130 != 0) && (local_138 != (longlong *)0x0)) {
        (**(code **)(*local_138 + 0x30))(local_138,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_140 = 0xbf800000;
      local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,&local_118,&local_d8,fVar5 * fVar1);
      if (local_78 != 0) {
        plVar3 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar3 = local_88;
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if (local_130 != 0) {
        if (local_138 == (longlong *)0x0) goto LAB_140b3691a;
        (**(code **)(*local_138 + 0x28))(local_138,0);
        if (local_138 != (longlong *)0x0) {
          local_138 = (longlong *)FMemory::Realloc(local_138,0,0);
        }
        local_130 = 0;
      }
      if (local_138 != (longlong *)0x0) {
        FMemory::Free(local_138);
      }
    }
  }
LAB_140b3691a:
  thunk_FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b36950 FUN_140b36950 body=249 status=ok
// SIG undefined FUN_140b36950(void)

void FUN_140b36950(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  
  if (((param_2 == 0) || ((*(byte *)(param_2 + 0x500) & 1) != 0)) ||
     (*(int *)(param_2 + 0x7c8) != 0)) goto LAB_140b36a24;
  if (*(int *)(param_2 + 0x7c4) == 0) {
    if (((int)*(undefined8 *)(param_2 + 0x7c0) != 1) && (param_3 != 0)) {
      uVar1 = FUN_1413b0610();
      lVar2 = FUN_140b2c110(param_3,uVar1,local_res10);
      if (lVar2 != 0) goto LAB_140b369f9;
    }
    if (*(char *)(param_2 + 0x128) == '\x03') {
      FUN_140b43450(param_1,param_2,param_3);
      goto LAB_140b36a24;
    }
  }
LAB_140b369f9:
  if (SUB164(*(undefined1 (*) [16])(param_2 + 0x7b8),0xc) == 1) {
    FUN_140b42d80(param_1,param_2,param_3,param_4);
  }
LAB_140b36a24:
  thunk_FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b36a50 FUN_140b36a50 body=638 status=ok
// SIG undefined FUN_140b36a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b36a50(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res10 [8];
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  
  lVar1 = local_68;
  if (param_2 == (longlong *)0x0) goto LAB_140b36ca6;
  local_58 = (undefined4)param_2[0xf9];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x7cc);
  uStack_50 = (undefined4)param_2[0xfa];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x7d4);
  local_48 = param_2[0xfb];
  if (*(int *)((longlong)param_2 + 0x7c4) == 1) {
    *(undefined1 *)((longlong)param_2 + 0x779) = 1;
    goto LAB_140b36ca6;
  }
  lVar3 = param_2[0xe5];
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x294) < *(int *)(lVar3 + 0x28c))) goto LAB_140b36ca6;
  if (1 < *(int *)((longlong)param_2 + 0x7c4)) goto LAB_140b36ca6;
  local_68 = param_2[0xf7];
  uStack_60 = (undefined4)param_2[0xf8];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x7c4);
  lVar1 = param_2[0xf7];
  if ((int)param_2[0xf9] != 0) goto LAB_140b36ca6;
  local_48 = param_2[0xfb];
  lVar1 = local_68;
  if ((char)param_2[0xfa] != '\0') goto LAB_140b36ca6;
  local_58 = (undefined4)param_2[0xf9];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x7cc);
  uStack_50 = (undefined4)param_2[0xfa];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x7d4);
  local_48 = param_2[0xfb];
  if (SUB164(*(undefined1 (*) [16])(param_2 + 0xf7),0xc) == 2) {
LAB_140b36b9d:
    if (param_3 != 0) {
      uVar2 = FUN_1413b53a0();
      lVar3 = FUN_140b2c110(param_3,uVar2,local_res10);
      lVar1 = local_68;
      if (lVar3 != 0) goto LAB_140b36ca6;
    }
  }
  else if (SUB164(*(undefined1 (*) [16])(param_2 + 0xf7),0xc) == 0) goto LAB_140b36b9d;
  if ((char)param_2[0xef] == '\0') {
    local_30 = 0;
    lVar1 = param_2[0x2d];
    *(undefined2 *)(param_2 + 0xef) = 0x101;
    local_38 = 0;
    if (lVar1 == 0) {
      local_68 = _DAT_1468b5d90;
      uStack_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(longlong *)(lVar1 + 0x220);
      uStack_60 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_20 = uStack_60;
    local_28 = local_68;
    uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    FUN_1405a1e30(&local_68,uVar2,*(undefined8 *)(param_1 + 0x120),&local_28,0x42480000,&local_38);
    FUN_140591060(&local_68);
    lVar1 = local_68;
  }
  else {
    *(undefined2 *)(param_2 + 0xef) = 0;
    FUN_140b20190(param_1,param_2,param_3,param_4);
    lVar1 = local_68;
  }
LAB_140b36ca6:
  local_68 = lVar1;
  thunk_FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b36cd0 FUN_140b36cd0 body=1570 status=ok
// SIG undefined FUN_140b36cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b36cd0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (param_2 == (longlong *)0x0) goto LAB_140b372bc;
  local_108 = param_2[0xf7];
  uStack_100 = param_2[0xf8];
  local_e8 = param_2[0xfb];
  if ((int)((ulonglong)param_2[0xf9] >> 0x20) != 0) goto LAB_140b372bc;
  local_108 = param_2[0xf7];
  uStack_100 = param_2[0xf8];
  local_e8 = param_2[0xfb];
  if ((char)param_2[0xfa] != '\0') goto LAB_140b372bc;
  local_108 = param_2[0xf7];
  uStack_100 = param_2[0xf8];
  local_e8 = param_2[0xfb];
  if (((int)param_2[0xf9] == 0) &&
     ((((*(byte *)(param_2 + 0xa0) & 1) == 0 || (*(char *)((longlong)param_2 + 0x779) != '\0')) &&
      ((char)param_2[0x25] == '\x03')))) {
    uVar6 = FUN_1413b0610();
    cVar5 = FUN_140b2eca0(param_2,uVar6);
    if (cVar5 != '\0') {
      local_f8 = param_2[0xf9];
      lStack_f0 = param_2[0xfa];
      local_e8 = param_2[0xfb];
      if ((int)param_2[0xf8] < 1) goto LAB_140b37164;
    }
    uVar6 = FUN_1413b0550();
    cVar5 = FUN_140b2eca0(param_2,uVar6);
    if (cVar5 != '\0') {
      local_f8 = param_2[0xf9];
      lStack_f0 = param_2[0xfa];
      local_e8 = param_2[0xfb];
      if (SUB164(*(undefined1 (*) [16])(param_2 + 0xf7),4) == 0 ||
          SUB168(*(undefined1 (*) [16])(param_2 + 0xf7),0) < 0) goto LAB_140b37164;
    }
    lVar8 = param_2[0x2d];
    if (lVar8 == 0) {
      local_118._0_4_ = (undefined4)_DAT_1468b5d90;
      local_118._4_4_ = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
      local_110 = DAT_1468b5d98;
    }
    else {
      local_118._0_4_ = *(undefined4 *)(lVar8 + 0x220);
      local_118._4_4_ = *(undefined4 *)(lVar8 + 0x224);
      local_110 = *(undefined4 *)(lVar8 + 0x228);
    }
    lVar3 = CONCAT44(local_118._4_4_,(undefined4)local_118);
    local_118._0_4_ = 0x42b40000;
    local_c0 = local_110;
    local_118._4_4_ = 0;
    local_110 = 0;
    FRotator::Quaternion(&local_118,&local_108);
    lVar8 = param_2[0x23];
    lVar2 = param_2[2];
    local_a8 = local_108;
    uStack_a0 = uStack_100;
    local_98._8_4_ = local_c0;
    local_98._0_8_ = lVar3;
    local_98._12_4_ = 0;
    local_88._4_4_ = DAT_1464aa788._4_4_;
    local_88._0_4_ = (undefined4)DAT_1464aa788;
    local_88._8_4_ = DAT_1464aa790;
    local_88._12_4_ = 0;
    local_c8 = lVar3;
    uVar6 = FUN_140a63ba0(param_2);
    uVar7 = (**(code **)(*param_2 + 0x148))(param_2);
    local_120 = (undefined8 *)((ulonglong)local_120 & 0xffffffffffffff00);
    local_128 = uVar6;
    lVar8 = FUN_140aea740(uVar7,lVar2,&local_a8,lVar8);
    if (lVar8 == 0) goto LAB_140b372bc;
    FUN_140b30220(lVar8,param_2,param_1);
    FUN_140b30a70(lVar8,param_3);
    bVar10 = *(byte *)(lVar8 + 0x94) & 0x18;
    if (bVar10 == 0x10) {
      fVar12 = *(float *)(lVar8 + 0x470);
      fVar1 = *(float *)(lVar8 + 0x488);
    }
    else {
      fVar12 = *(float *)(lVar8 + 0x7ac);
      fVar1 = *(float *)(lVar8 + 0x7b0);
    }
    if (0.0001 < fVar12) {
      if ((*(byte *)((longlong)param_2 + 0x94) & 0x18) == 0x10) {
        fVar11 = *(float *)(param_2 + 0x8e);
      }
      else {
        fVar11 = *(float *)((longlong)param_2 + 0x7ac);
      }
      if ((bVar10 != 0x10) && (*(char *)(lVar8 + 0x128) == '\x03')) {
        *(float *)(lVar8 + 0x7ac) = (fVar11 / fVar12) * *(float *)(lVar8 + 0x7ac);
      }
    }
    if (0.0001 < fVar1) {
      if ((*(byte *)((longlong)param_2 + 0x94) & 0x18) == 0x10) {
        fVar12 = *(float *)(param_2 + 0x91);
      }
      else {
        fVar12 = *(float *)(param_2 + 0xf6);
      }
      if ((bVar10 != 0x10) && (*(char *)(lVar8 + 0x128) == '\x03')) {
        *(float *)(lVar8 + 0x7b0) = (fVar12 / fVar1) * *(float *)(lVar8 + 0x7b0);
      }
    }
    UGameplayStatics::FinishSpawningActor(lVar8,&local_a8);
    lVar8 = *(longlong *)(param_1 + 0x68);
    if (lVar8 == 0) goto LAB_140b372bc;
    uVar4 = uStack_100 >> 0x20;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    local_d0 = 0;
    lVar2 = param_2[0x2d];
    local_d8 = 0;
    if (lVar2 == 0) {
      local_c0 = DAT_1468b5d98;
      plVar9 = &local_c8;
      local_c8 = _DAT_1468b5d90;
    }
    else {
      plVar9 = &local_118;
      local_118._0_4_ = *(undefined4 *)(lVar2 + 0x220);
      local_110 = *(undefined4 *)(lVar2 + 0x228);
      local_118._4_4_ = *(undefined4 *)(lVar2 + 0x224);
    }
    local_108 = *plVar9;
    uStack_100 = CONCAT44((int)uVar4,(int)plVar9[1]);
    uVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    local_120 = &local_d8;
    local_128 = CONCAT44(local_128._4_4_,0x42480000);
    FUN_1405a1e30(&local_c8,uVar6,lVar8,&local_108);
    plVar9 = &local_c8;
  }
  else {
LAB_140b37164:
    local_108 = param_2[0xf7];
    uStack_100 = param_2[0xf8];
    local_e8 = param_2[0xfb];
    if ((int)param_2[0xf9] != 1) goto LAB_140b372bc;
    fVar12 = (float)FUN_140afed70(param_1,param_4);
    lVar8 = param_2[0xe5];
    *(undefined1 *)(param_2 + 0xef) = 1;
    *(float *)(param_2 + 0x8e) = fVar12 * *(float *)(param_2 + 0x8e);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x294) <= *(int *)(lVar8 + 0x28c))) {
      FUN_140b3d9f0(param_2);
    }
    lVar8 = *(longlong *)(param_1 + 0x68);
    if ((lVar8 == 0) || (*(char *)((longlong)param_2 + 0x779) != '\0')) goto LAB_140b372bc;
    uVar4 = uStack_100 >> 0x20;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    local_d0 = 0;
    lVar2 = param_2[0x2d];
    local_d8 = 0;
    if (lVar2 == 0) {
      uStack_100 = CONCAT44((int)uVar4,DAT_1468b5d98);
      plVar9 = &local_108;
      local_108 = _DAT_1468b5d90;
    }
    else {
      plVar9 = &local_118;
      local_118._0_4_ = *(undefined4 *)(lVar2 + 0x220);
      local_110 = *(undefined4 *)(lVar2 + 0x228);
      local_118._4_4_ = *(undefined4 *)(lVar2 + 0x224);
    }
    local_c8 = *plVar9;
    local_c0 = (undefined4)plVar9[1];
    uVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    local_120 = &local_d8;
    local_128 = CONCAT44(local_128._4_4_,0x42480000);
    FUN_1405a1e30(&local_108,uVar6,lVar8,&local_c8);
    plVar9 = &local_108;
  }
  FUN_140591060(plVar9);
LAB_140b372bc:
  thunk_FUN_1413b3180(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b37300 FUN_140b37300 body=444 status=ok
// SIG undefined FUN_140b37300(void)

void FUN_140b37300(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined4 local_50;
  
  if (param_2 == 0) goto LAB_140b37485;
  if ((int)*(undefined8 *)(param_2 + 0x7c0) != 0) {
    if ((0 < *(int *)(param_2 + 0x7c0)) && (*(longlong *)(param_2 + 0x728) != 0)) {
      puVar1 = (uint *)(*(longlong *)(param_2 + 0x728) + 0x1c8);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    goto LAB_140b37485;
  }
  if (*(char *)(param_1 + 0x70) != (char)*(undefined8 *)(param_2 + 0x7c0)) {
    lVar3 = FWeakObjectPtr::Get(param_4 + 0x6c);
    if (lVar3 != 0) {
      uVar4 = UScrollBox::GetPrivateStaticClass();
      uVar5 = FWeakObjectPtr::Get(param_4 + 0x6c);
      lVar3 = AGameStateBase::OnRep_GameModeClass(uVar5,uVar4);
      if (lVar3 != 0) goto LAB_140b373ce;
    }
    if ((*(char *)(param_2 + 0x764) != '\0') && (*(float *)(param_2 + 0x760) == 0.0)) {
      local_50 = *(undefined4 *)(param_4 + 0x40);
      local_58 = *(undefined8 *)(param_4 + 0x38);
      FUN_140b41aa0(param_1,param_2,param_3,param_5,&local_58);
      goto LAB_140b37485;
    }
  }
LAB_140b373ce:
  lVar3 = *(longlong *)(param_2 + 0x728);
  if (lVar3 != 0) {
    uVar4 = FUN_1413b1450();
    cVar2 = FUN_140b2eca0(param_2,uVar4);
    if (((cVar2 != '\0') && (0 < *(int *)(lVar3 + 0x28c))) &&
       (((*(int *)(lVar3 + 0x294) == 0 && (*(char *)(param_1 + 0x71) != '\0')) ||
        ((*(int *)(lVar3 + 0x294) == *(int *)(lVar3 + 0x28c) && (*(char *)(param_1 + 0x71) == '\0'))
        )))) {
      local_50 = *(undefined4 *)(param_4 + 0x40);
      local_58 = *(undefined8 *)(param_4 + 0x38);
      FUN_140b41aa0(param_1,param_2,param_3,param_5,&local_58);
      *(undefined4 *)(param_2 + 0x760) = 0;
      FUN_140b26e10(param_2);
    }
  }
LAB_140b37485:
  thunk_FUN_1413b33a0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b374c0 FUN_140b374c0 body=66 status=ok
// SIG undefined FUN_140b374c0(void)

void FUN_140b374c0(undefined8 param_1,longlong param_2)

{
  if (((param_2 != 0) && (*(int *)(param_2 + 0x7c4) == 2)) && (*(longlong *)(param_2 + 0x728) != 0))
  {
    *(undefined4 *)(*(longlong *)(param_2 + 0x728) + 0x268) = 0;
  }
  thunk_FUN_1413b33a0();
  return;
}



// FUNCTION 140b37510 FUN_140b37510 body=959 status=ok
// SIG undefined FUN_140b37510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b37510(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d8 = param_5;
  if (((param_2 == (longlong *)0x0) || ((char)param_2[0xfa] != '\0')) ||
     (cVar2 = FUN_140b2eed0(), cVar2 == '\0')) goto LAB_140b3789a;
  local_c8 = param_2[0xf7];
  lStack_c0 = param_2[0xf8];
  iVar10 = 0;
  local_a8 = param_2[0xfb];
  if ((int)((ulonglong)param_2[0xf9] >> 0x20) == 1) {
LAB_140b37697:
    lVar4 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar4 != 0) {
      local_d0 = param_2[0x23];
      puVar9 = (undefined8 *)&DAT_1468b5b70;
      if (param_2[0x2d] == 0) {
        plVar5 = (longlong *)&DAT_1468b5b70;
      }
      else {
        plVar5 = (longlong *)(param_2[0x2d] + 0x210);
      }
      local_c8 = *plVar5;
      lStack_c0 = plVar5[1];
      lVar4 = param_2[2];
      local_b8 = (undefined4)plVar5[2];
      uStack_b4 = *(undefined4 *)((longlong)plVar5 + 0x14);
      uStack_b0 = (undefined4)plVar5[3];
      uStack_ac = *(undefined4 *)((longlong)plVar5 + 0x1c);
      local_a8 = plVar5[4];
      uStack_a0 = (undefined4)plVar5[5];
      uStack_9c = *(undefined4 *)((longlong)plVar5 + 0x2c);
      uVar6 = FUN_140a63ba0(param_2);
      uVar7 = (**(code **)(*param_2 + 0x148))(param_2);
      local_e0 = 0;
      local_e8 = uVar6;
      lVar4 = FUN_140aea740(uVar7,lVar4,&local_c8,local_d0);
      param_5 = local_d8;
      if (lVar4 != 0) {
        FUN_140b30220(lVar4,param_2,param_1);
        FUN_140b30a70(lVar4,param_3);
        FUN_14223ef90(lVar4,0);
        if (param_2[0x2d] != 0) {
          puVar9 = (undefined8 *)(param_2[0x2d] + 0x210);
        }
        local_98 = *puVar9;
        uStack_90 = puVar9[1];
        local_88 = *(undefined4 *)(puVar9 + 2);
        uStack_84 = *(undefined4 *)((longlong)puVar9 + 0x14);
        uStack_80 = *(undefined4 *)(puVar9 + 3);
        uStack_7c = *(undefined4 *)((longlong)puVar9 + 0x1c);
        local_78 = *(undefined4 *)(puVar9 + 4);
        uStack_74 = *(undefined4 *)((longlong)puVar9 + 0x24);
        uStack_70 = *(undefined4 *)(puVar9 + 5);
        uStack_6c = *(undefined4 *)((longlong)puVar9 + 0x2c);
        UGameplayStatics::FinishSpawningActor(lVar4,&local_98);
        *(int *)(lVar4 + 0x470) = (int)param_2[0x8e];
        *(int *)(lVar4 + 0x488) = (int)param_2[0x91];
        if (((param_3 != 0) && (0 < iVar10)) && (lVar3 = *(longlong *)(param_3 + 0x510), lVar3 != 0)
           ) {
          lVar8 = UPawnAction_Sequence::StaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            fVar11 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar3 + 0xb8),(float)iVar10);
            *(float *)(lVar4 + 0x470) = fVar11 * *(float *)(lVar4 + 0x470);
            fVar11 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar3 + 0xbc),(float)iVar10);
            *(float *)(lVar4 + 0x488) = fVar11 * *(float *)(lVar4 + 0x488);
          }
        }
        param_5 = local_d8;
        local_e8 = local_d8;
        FUN_140b2dec0(param_1,lVar4,param_3,param_4);
      }
    }
  }
  else {
    lVar4 = param_2[0xe5];
    if (lVar4 != 0) {
      iVar10 = *(int *)(lVar4 + 0x294);
      if (((0 < *(int *)(lVar4 + 0x28c)) && ((*(byte *)(lVar4 + 0x1c8) & 2) != 0)) &&
         (iVar10 < *(int *)(lVar4 + 0x28c))) goto LAB_140b37697;
      if ((0 < iVar10) && (lVar4 = *(longlong *)(param_3 + 0x510), lVar4 != 0)) {
        lVar3 = UPawnAction_Sequence::StaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          fVar11 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar4 + 0xb8),(float)iVar10);
          *(float *)(param_2 + 0x8e) = fVar11 * *(float *)(param_2 + 0x8e);
          fVar11 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar4 + 0xbc),(float)iVar10);
          *(float *)(param_2 + 0x91) = fVar11 * *(float *)(param_2 + 0x91);
        }
      }
    }
    local_e8 = param_5;
    FUN_140b2dec0(param_1,param_2,param_3,param_4);
  }
LAB_140b3789a:
  local_e8 = param_5;
  thunk_FUN_1413b33a0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b378d0 FUN_140b378d0 body=85 status=ok
// SIG undefined FUN_140b378d0(void)

void FUN_140b378d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (0 < (int)((ulonglong)*(undefined8 *)(param_2 + 0x7b8) >> 0x20))) {
    lVar2 = *(longlong *)(param_2 + 0x728);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x1c0) = *(undefined4 *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      *(uint *)(lVar2 + 0x1c8) = *(uint *)(lVar2 + 0x1c8) | 1;
      *(undefined4 *)(lVar2 + 0x1dc) = uVar1;
    }
    *(undefined1 *)(param_2 + 0x7e1) = 1;
  }
  thunk_FUN_1413b35d0(param_1);
  return;
}



// FUNCTION 140b37930 FUN_140b37930 body=145 status=ok
// SIG undefined FUN_140b37930(void)

void FUN_140b37930(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (0 < *(int *)(param_2 + 0x7c0))) &&
      ((int)((ulonglong)*(undefined8 *)(param_2 + 0x7b8) >> 0x20) == 0)) &&
     ((*(int *)(param_2 + 0x7c4) == 0 && (*(int *)(param_2 + 0x7c8) == 0)))) {
    lVar2 = *(longlong *)(param_2 + 0x728);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x1c0) = *(undefined4 *)(param_1 + 0x50);
      uVar1 = *(undefined4 *)(param_1 + 0x54);
      *(uint *)(lVar2 + 0x1c8) = *(uint *)(lVar2 + 0x1c8) | 1;
      *(undefined4 *)(lVar2 + 0x1dc) = uVar1;
      *(undefined1 *)(lVar2 + 0x2c8) = 0;
    }
    *(undefined1 *)(param_2 + 0x7e1) = 1;
  }
  thunk_FUN_1413b35d0(param_1);
  return;
}



// FUNCTION 140b379d0 FUN_140b379d0 body=590 status=ok
// SIG undefined FUN_140b379d0(void)

void FUN_140b379d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res10 [8];
  longlong local_98 [3];
  undefined8 uStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  
  if (((((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_2 + 0x118) != 0)) &&
      ((*(longlong *)(param_1 + 0x50) != 0 &&
       (*(int *)(param_2 + 0x7cc) +
        *(int *)(param_2 + 0x7bc) + *(int *)(param_2 + 0x7c8) + *(int *)(param_2 + 0x7c4) +
        *(int *)(param_2 + 0x7b8) + *(int *)(param_2 + 0x7c0) == 0)))) &&
     (*(char *)(param_2 + 0x128) == '\x03')) {
    *(undefined1 *)(param_2 + 0x5d8) = 0;
    local_98[1] = 0;
    local_98[0] = *(longlong *)(param_2 + 0x118);
    fVar7 = (float)FUN_142ca2f00(*(undefined8 *)(param_1 + 0x50),local_98);
    fVar8 = (float)FUN_140afed70(param_1,param_4);
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    iVar6 = (int)fVar8;
    if (0 < iVar6) {
      local_98[2] = *(undefined8 *)(param_2 + 0x118);
      uStack_80 = 0;
      FUN_142c8e590(local_78,*(undefined8 *)(param_1 + 0x50),local_98 + 2,1,(float)-iVar6,0,
                    local_res10);
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
      bVar5 = *(byte *)(param_2 + 0x94) & 0x18;
      if (bVar5 != 0x10) {
        if (*(char *)(param_2 + 0x128) == '\x03') {
          *(float *)(param_2 + 0x7ac) =
               ((float)iVar6 * *(float *)(param_1 + 0x48) + 1.0) * *(float *)(param_2 + 0x7ac);
        }
        if ((bVar5 != 0x10) && (*(char *)(param_2 + 0x128) == '\x03')) {
          *(float *)(param_2 + 0x7b0) =
               ((float)iVar6 * *(float *)(param_1 + 0x4c) + 1.0) * *(float *)(param_2 + 0x7b0);
        }
      }
    }
  }
  thunk_FUN_1413b35d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b37c20 FUN_140b37c20 body=486 status=ok
// SIG undefined FUN_140b37c20(void)

void FUN_140b37c20(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  float local_60;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x7c8) == 0)) {
    if (SUB164(*(undefined1 (*) [16])(param_2 + 0x7b8),0xc) == 1) {
      lVar2 = *(longlong *)(param_2 + 0x728);
      *(undefined4 *)(param_2 + 0x760) = *(undefined4 *)(param_1 + 0x60);
      *(char *)(param_2 + 0x779) = SUB161(*(undefined1 (*) [16])(param_2 + 0x7b8),0xc);
      if (lVar2 != 0) {
        fVar6 = *(float *)(param_1 + 0x48);
        if ((param_3 != 0) && (lVar3 = *(longlong *)(param_3 + 0x510), lVar3 != 0)) {
          lVar5 = FUN_1413b1b90();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            fVar6 = fVar6 * *(float *)(lVar3 + 0x78);
          }
        }
        fVar1 = *(float *)(param_1 + 0x60);
        *(undefined4 *)(lVar2 + 0x1dc) = 0;
        fVar6 = (fVar6 * -2.0) / (fVar1 * fVar1);
        local_60 = -(fVar1 * fVar6);
        *(float *)(lVar2 + 0x1c0) = local_60;
        if (*(char *)(param_2 + 0x128) == '\x03') {
          *(undefined8 *)(lVar2 + 0x18c) = 0;
          local_60 = 1.0;
        }
        else {
          *(undefined8 *)(lVar2 + 0x18c) = 0;
        }
        *(float *)(lVar2 + 0x268) = fVar6;
        *(float *)(lVar2 + 0x194) = local_60;
        *(undefined1 *)(lVar2 + 0x2c8) = 0;
      }
    }
    else if (((*(int *)(param_2 + 0x7c4) == 2) &&
             ((int)((ulonglong)*(undefined8 *)(param_2 + 0x7b8) >> 0x20) == 0)) &&
            (lVar2 = *(longlong *)(param_2 + 0x728), lVar2 != 0)) {
      *(undefined4 *)(lVar2 + 0x1c0) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(lVar2 + 0x1dc) = 0x3f800000;
    }
  }
  thunk_FUN_1413b35d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b37e10 FUN_140b37e10 body=330 status=ok
// SIG undefined FUN_140b37e10(void)

void FUN_140b37e10(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  undefined1 local_res10 [8];
  
  if (((param_2 != 0) && (*(int *)(param_2 + 0x7c8) == 1)) &&
     ((int)((ulonglong)*(undefined8 *)(param_2 + 0x7c8) >> 0x20) == 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_1413b53a0();
      lVar3 = FUN_140b2c110(param_3,uVar2,local_res10);
      if ((lVar3 != 0) && (*(int *)(param_2 + 0x7c4) != 2)) goto LAB_140b37f34;
    }
    *(undefined4 *)(param_2 + 0x760) = 0;
    iVar1 = 0;
    *(undefined1 *)(param_2 + 0x764) = 1;
    *(undefined1 *)(param_2 + 0x75c) = 0;
    iVar4 = *(int *)(param_1 + 0x50);
    if (0 < iVar4) {
      iVar1 = *param_4;
      if (iVar1 + -1 < 0) {
        iVar4 = 0;
      }
      else {
        if (iVar1 <= iVar4 + -1) {
          iVar4 = iVar1;
        }
        iVar4 = iVar4 + -1;
      }
      fVar5 = (float)FUN_142c98860((longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x48),0);
      iVar1 = (int)fVar5;
      if (1 < iVar1) {
        *(undefined1 *)(param_2 + 0x779) = 0;
      }
    }
    lVar3 = *(longlong *)(param_2 + 0x728);
    *(undefined4 *)(param_2 + 0x7a8) = 0;
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x1c8) = *(uint *)(lVar3 + 0x1c8) | 2;
      *(int *)(lVar3 + 0x28c) = iVar1;
      *(undefined4 *)(lVar3 + 0x1dc) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined8 *)(lVar3 + 0x1e4) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x1c0) = *(undefined4 *)(param_1 + 0x58);
    }
  }
LAB_140b37f34:
  thunk_FUN_1413b35d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b37f60 FUN_140b37f60 body=243 status=ok
// SIG undefined FUN_140b37f60(void)

void FUN_140b37f60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_2 != 0) {
    if ((int)((ulonglong)*(undefined8 *)(param_2 + 0x7c8) >> 0x20) == 0) {
      plVar1 = *(longlong **)(param_2 + 0x6f8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x830))(plVar1,2,1);
        (**(code **)(*plVar1 + 0x830))(plVar1,*(undefined1 *)(param_1 + 0x4c),2);
        *(undefined1 *)((longlong)plVar1 + 0x714) = 0;
      }
      cVar2 = FUN_140b2eed0(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_2 + 0x764) = 0;
      }
    }
    else if (*(int *)(param_2 + 0x7c8) == 0) {
      plVar1 = *(longlong **)(param_2 + 0x6f8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x838))(plVar1,1);
      }
      *(undefined1 *)(param_2 + 0x779) = 1;
      *(undefined1 *)(param_2 + 0x75c) = 0;
    }
  }
  thunk_FUN_1413b35d0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b38060 FUN_140b38060 body=448 status=ok
// SIG undefined FUN_140b38060(void)

void FUN_140b38060(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar3 = *(longlong **)(param_1 + 0x7e8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,*(undefined8 *)(param_1 + 0x6e8));
  }
  plVar3 = (longlong *)(param_1 + 0x820);
  local_78 = 0;
  uStack_74 = 1;
  iVar1 = *(int *)(param_1 + 0x848);
  puStack_28 = (uint *)(param_1 + 0x830);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x840);
    if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar2 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar5 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar5) goto LAB_140b3813f;
      uVar2 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_140b3813f:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar3,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar5 = local_68._4_4_ < *(int *)(param_1 + 0x848);
  local_48 = plVar3;
  local_38 = plVar3;
  local_10 = plVar3;
  local_68 = puStack_28;
  if (bVar5) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar3);
      (**(code **)(*plVar4 + 0x2a8))
                (plVar4,param_1,*(undefined8 *)(param_1 + 0x6e8),
                 *plVar3 + 8 + (longlong)iStack_5c * 0x40);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b38220 FUN_140b38220 body=54 status=ok
// SIG undefined FUN_140b38220(void)

void FUN_140b38220(undefined8 param_1,longlong param_2)

{
  if (((param_2 != 0) && (*(int *)(param_2 + 0x7c8) == 1)) && (*(char *)(param_2 + 2000) == '\0')) {
    *(undefined1 *)(param_2 + 0x779) = 1;
  }
  thunk_FUN_1413b36d0();
  return;
}



// FUNCTION 140b38260 FUN_140b38260 body=60 status=ok
// SIG undefined FUN_140b38260(void)

void FUN_140b38260(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x728) != 0) && (*(char *)(param_1 + 0x7e0) != '\0')) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x728) + 0x2c8) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x6f8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140b38294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x830))(plVar1,2,1);
    return;
  }
  return;
}



// FUNCTION 140b382a0 FUN_140b382a0 body=17 status=ok
// SIG undefined FUN_140b382a0(void)

void FUN_140b382a0(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0x1a0)) {
    FUN_140b382c0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140b382c0 FUN_140b382c0 body=198 status=ok
// SIG undefined FUN_140b382c0(void)

void FUN_140b382c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  FUN_140b43a90();
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if ((*(longlong *)(param_1 + 0x228) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x6e8), lVar1 != 0)) {
    local_res8 = 0;
    TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
              (lVar1 + 0x5a8,&local_res8);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x228) + 0x6e8) + 0x510);
    if (lVar1 != 0) {
      lVar3 = UFGOnlineSessionClient::GetPrivateStaticClass();
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
        FUN_140b0cab0(lVar1,*(longlong *)(param_1 + 0x228),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x228) + 0x6e8),1);
      }
    }
  }
  return;
}



// FUNCTION 140b38390 FUN_140b38390 body=95 status=ok
// SIG undefined FUN_140b38390(void)

void FUN_140b38390(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = FUN_142ff9ea0(param_1);
  if (lVar1 != 0) {
    FUN_140b1bcb0(param_1,param_2,lVar1);
  }
  return;
}



// FUNCTION 140b383f0 FUN_140b383f0 body=122 status=ok
// SIG undefined FUN_140b383f0(void)

void FUN_140b383f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (((param_3 != 0) && (*(longlong *)(param_1 + 0x6e8) != 0)) &&
     (param_3 == *(longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x1a0))) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      param_3 = 0;
    }
    FUN_140b2f560(param_1,param_3);
  }
  return;
}



// FUNCTION 140b38470 FUN_140b38470 body=539 status=ok
// SIG undefined FUN_140b38470(void)

void FUN_140b38470(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_28 = (uint *)(param_1 + 0x520);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar7 = *puVar8;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar7 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar7 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar7;
      if (bVar3) goto LAB_140b38542;
      uVar7 = puVar8[lVar6 + 1];
    }
    uStack_74 = uVar7 - 1 & uVar7 ^ uVar7;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_140b38542:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x538);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      iVar2 = iStack_5c;
      lVar6 = *(longlong *)((longlong)iStack_5c * 0x40 + *plVar1);
      if (lVar6 != 0) {
        lVar5 = FUN_1414bf0f0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_140b6a310(lVar6,param_1,*plVar1 + 8 + (longlong)iVar2 * 0x40);
          break;
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b38690 FUN_140b38690 body=550 status=ok
// SIG undefined FUN_140b38690(void)

void FUN_140b38690(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x5b1) != '\0') {
    plVar1 = (longlong *)(param_1 + 0x510);
    iVar2 = *(int *)(param_1 + 0x538);
    puStack_28 = (uint *)(param_1 + 0x520);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)(param_1 + 0x530);
      if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
        puVar9 = puStack_28;
      }
      uVar8 = *puVar9;
      local_78 = 0;
      uStack_60 = 0;
      while (uVar8 == 0) {
        lVar6 = (longlong)(int)local_78;
        uStack_60 = uStack_60 + 0x20;
        uVar8 = local_78 + 1;
        bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
        local_78 = uVar8;
        if (bVar3) goto LAB_140b3876e;
        uVar8 = puVar9[lVar6 + 1];
      }
      uStack_74 = uVar8 - 1 & uVar8 ^ uVar8;
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
      local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
      if (iVar2 < local_68._4_4_) {
LAB_140b3876e:
        local_68._4_4_ = iVar2;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    uStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x538);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    local_68 = puStack_28;
    if (bVar3) {
      do {
        lVar7 = (longlong)iStack_5c;
        lVar6 = *(longlong *)(lVar7 * 0x40 + *plVar1);
        if (lVar6 != 0) {
          lVar5 = FUN_1414bf0f0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_140b6a4e0(lVar6,param_1,*plVar1 + 8 + lVar7 * 0x40);
          }
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 140b388c0 FUN_140b388c0 body=523 status=ok
// SIG undefined FUN_140b388c0(void)

void FUN_140b388c0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  local_88 = 0;
  uStack_84 = 1;
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_38 = (uint *)(param_1 + 0x520);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_38;
    }
    uVar7 = *puVar8;
    local_88 = 0;
    uStack_70 = 0;
    while (uVar7 == 0) {
      lVar6 = (longlong)(int)local_88;
      uStack_70 = uStack_70 + 0x20;
      uVar7 = local_88 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
      local_88 = uVar7;
      if (bVar3) goto LAB_140b38992;
      uVar7 = puVar8[lVar6 + 1];
    }
    uStack_84 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_78._4_4_ = (uStack_70 - iVar4) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_140b38992:
      local_78._4_4_ = iVar2;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x538);
  local_58 = plVar1;
  local_48 = plVar1;
  local_20 = plVar1;
  local_78 = puStack_38;
  if (bVar3) {
    do {
      iVar2 = iStack_6c;
      lVar6 = *(longlong *)((longlong)iStack_6c * 0x40 + *plVar1);
      if (lVar6 != 0) {
        lVar5 = FUN_1414bf0f0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_140b6a3e0(lVar6,param_1,param_2,*plVar1 + 8 + (longlong)iVar2 * 0x40);
          break;
        }
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b38ad0 FUN_140b38ad0 body=539 status=ok
// SIG undefined FUN_140b38ad0(void)

void FUN_140b38ad0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_28 = (uint *)(param_1 + 0x520);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar7 = *puVar8;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar7 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar7 = local_78 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar7;
      if (bVar3) goto LAB_140b38ba2;
      uVar7 = puVar8[lVar6 + 1];
    }
    uStack_74 = uVar7 - 1 & uVar7 ^ uVar7;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_140b38ba2:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x538);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      iVar2 = iStack_5c;
      lVar6 = *(longlong *)((longlong)iStack_5c * 0x40 + *plVar1);
      if (lVar6 != 0) {
        lVar5 = FUN_1414bf0f0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_140b6a4e0(lVar6,param_1,*plVar1 + 8 + (longlong)iVar2 * 0x40);
          break;
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b38cf0 FUN_140b38cf0 body=31 status=ok
// SIG undefined FUN_140b38cf0(void)

void FUN_140b38cf0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x458,local_res8);
  return;
}



// FUNCTION 140b38d30 FUN_140b38d30 body=17 status=ok
// SIG undefined FUN_140b38d30(void)

void FUN_140b38d30(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puStack_28;
  undefined8 uStack_20;
  
  plVar8 = *(longlong **)(param_1 + 0x5c0);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  plVar10 = (longlong *)0x0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  plVar5 = plVar10;
  if ((plVar8[0x23] != 0) && (plVar5 = (longlong *)0x0, lVar2 != 0)) {
    uVar4 = FUN_142e64ca0();
    plVar5 = (longlong *)AGameStateBase::OnRep_GameModeClass(plVar8[0x23],uVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = FUN_142e64ca0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar4 = *(undefined8 *)(lVar2 + 0x230);
        lVar6 = FUN_1429f11d0();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar7 = plVar8;
        if (!bVar3) {
          plVar7 = plVar10;
        }
        FUN_142d363c0(plVar5,plVar7,uVar4);
        lVar6 = plVar8[0x23];
        if (lVar6 != 0) {
          uVar4 = UGameplayTagAssetInterface::GetPrivateStaticClass();
          plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x18))(plVar7,0);
          }
        }
        goto LAB_140b7e8ee;
      }
    }
    plVar5 = (longlong *)0x0;
  }
LAB_140b7e8ee:
  (**(code **)(*plVar8 + 0x418))(plVar8,&DAT_14653218c);
  if ((*(byte *)(plVar8 + 0x17) & 1) != 0) {
    FUN_142359580(plVar8);
    puStack_28 = (undefined8 *)0x0;
    uStack_20 = 0;
    FUN_14238b380(plVar8,1,&puStack_28);
    puVar1 = puStack_28 + (int)uStack_20;
    for (puVar9 = puStack_28; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      plVar8 = (longlong *)*puVar9;
      if (plVar8 != (longlong *)0x0) {
        if ((*(byte *)(plVar8 + 0x17) & 1) != 0) {
          FUN_142359580(plVar8);
        }
        if (plVar5 != (longlong *)0x0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x230);
          lVar6 = FUN_1429f11d0();
          if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            plVar8 = plVar10;
          }
          FUN_142d363c0(plVar5,plVar8,uVar4);
        }
      }
    }
    if (puStack_28 != (undefined8 *)0x0) {
      FMemory::Free(puStack_28);
    }
  }
  return;
}



// FUNCTION 140b38d50 FUN_140b38d50 body=79 status=ok
// SIG undefined FUN_140b38d50(void)

void FUN_140b38d50(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (*(longlong *)(param_2 + 0x20) != 0)) {
    cVar1 = FUN_1407cd900(*(undefined8 *)(param_2 + 0x20));
    if (cVar1 == '\0') {
      FUN_140b3eca0(param_1,*(undefined8 *)(param_2 + 0x20));
    }
  }
  FUN_1430089a0(param_1,param_2);
  return;
}



// FUNCTION 140b38db0 DestroyComponent body=32 status=ok
// SIG undefined DestroyComponent(void)

void UWidgetComponent::DestroyComponent(longlong *param_1)

{
  FUN_143008ae0();
                    /* WARNING: Could not recover jumptable at 0x000140b38dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x830))(param_1);
  return;
}



// FUNCTION 140b38de0 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140b471d0(param_1);
  return;
}



// FUNCTION 140b38e00 FUN_140b38e00 body=143 status=ok
// SIG undefined FUN_140b38e00(void)

void FUN_140b38e00(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((((*(byte *)(param_1 + 0x70c) & 1) != 0) && (*(longlong *)(param_1 + 0x568) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x568) + 0x128) == '\x03')) &&
     (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
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
    if (bVar2) {
      FUN_140b8ce10(*(undefined8 *)(param_1 + 0x568),lVar1);
    }
  }
  FUN_140b471d0(param_1);
  return;
}



// FUNCTION 140b38e90 FUN_140b38e90 body=443 status=ok
// SIG undefined FUN_140b38e90(void)

void FUN_140b38e90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  local_88 = 0;
  uStack_84 = 1;
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_38 = (uint *)(param_1 + 0x520);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_38;
    }
    uVar3 = *puVar8;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_140b38f63;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
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
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_140b38f63:
      local_78._4_4_ = iVar2;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar5 = local_78._4_4_ < *(int *)(param_1 + 0x538);
  local_58 = plVar1;
  local_48 = plVar1;
  local_20 = plVar1;
  local_78 = puStack_38;
  if (bVar5) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_6c * 0x40 + *plVar1);
      (**(code **)(*plVar4 + 0x2b8))
                (plVar4,param_1,*plVar1 + 8 + (longlong)iStack_6c * 0x40,param_2,param_3);
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b39050 FUN_140b39050 body=1149 status=ok
// SIG undefined FUN_140b39050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b39050(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  longlong **pplVar13;
  uint *puVar14;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_108;
  uint *puStack_100;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  ulonglong uStack_d8;
  uint *puStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 local_b8;
  longlong *local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong **local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((char)param_1[0xb3] == '\x03') {
    local_108 = (longlong *)*param_2;
    puStack_100 = (uint *)param_2[1];
    local_f8 = (undefined4)param_2[2];
    iStack_f4 = (int)(param_2[2] >> 0x20);
    FUN_140b3a060((int)*param_2,&local_108);
  }
  *(undefined1 *)(param_1 + 0xb3) = 1;
  local_e0 = param_1 + 0xa2;
  iVar11 = (int)param_1[0xa7];
  puStack_100 = (uint *)(param_1 + 0xa4);
  local_108 = (longlong *)0x100000000;
  iStack_f4 = 0;
  iStack_f0 = 0;
  if (iVar11 != 0) {
    puVar14 = (uint *)param_1[0xa6];
    if ((uint *)param_1[0xa6] == (uint *)0x0) {
      puVar14 = puStack_100;
    }
    uVar7 = *puVar14;
    iStack_f0 = 0;
    iVar8 = 0;
    while (uVar7 == 0) {
      iStack_f0 = iStack_f0 + 0x20;
      uVar1 = (ulonglong)local_108 >> 0x20;
      local_108 = (longlong *)CONCAT44((int)uVar1,iVar8 + 1);
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_140b39164;
      uVar7 = puVar14[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    local_108 = (longlong *)CONCAT44(uVar7,SUB84(local_108,0));
    if (uVar7 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_f4 = (iStack_f0 - iVar8) + 0x1f;
    if (iVar11 < iStack_f4) {
LAB_140b39164:
      iStack_f4 = iVar11;
    }
  }
  local_f8 = 0xffffffff;
  uStack_90 = CONCAT44(iStack_f4,0xffffffff);
  auStack_c8._8_4_ = iStack_f0;
  auStack_c8._0_8_ = uStack_90;
  auStack_c8._12_4_ = uStack_ec;
  uStack_d8 = (ulonglong)local_108;
  local_70 = 0;
  local_b8._0_4_ = SUB84(local_e0,0);
  local_b8._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
  uStack_a0 = (ulonglong)local_108;
  local_88._8_4_ = (undefined4)local_b8;
  local_88._0_8_ = auStack_c8._8_8_;
  local_88._12_4_ = local_b8._4_4_;
  iVar11 = iStack_f4;
  puStack_d0 = puStack_100;
  local_b8 = local_e0;
  local_a8 = local_e0;
  local_98 = puStack_100;
  local_78 = local_e0;
  if (iStack_f4 < (int)param_1[0xa7]) {
    do {
      local_108 = (longlong *)*param_2;
      puStack_100 = (uint *)param_2[1];
      local_f8 = (undefined4)param_2[2];
      iStack_f4 = (int)(param_2[2] >> 0x20);
      plVar9 = *(longlong **)((longlong)iVar11 * 0x40 + *local_a8);
      (**(code **)(*plVar9 + 0x2a0))
                (plVar9,param_1,&local_108,*local_a8 + 8 + (longlong)iVar11 * 0x40);
      uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      iVar11 = uStack_90._4_4_;
    } while (uStack_90._4_4_ < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  if ((((param_1[0xb4] != 0) && ((longlong *)param_1[0x23] != (longlong *)0x0)) &&
      (plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x23] + 0x670))(),
      plVar9 != (longlong *)0x0)) &&
     (((*(uint *)((longlong)plVar9 + 0x4cc) >> 1 & 1) != 0 &&
      (cVar6 = (**(code **)(*plVar9 + 0x768))(plVar9), cVar6 != '\0')))) {
    local_118 = 0;
    FUN_142d408e0(param_1[0xb4],plVar9,0x3f800000,0);
  }
  if ((char)param_1[0xbb] != '\0') {
    FWeakObjectPtr::operator=(&local_e8,param_1);
    local_108 = (longlong *)0x0;
    puStack_100 = (uint *)((ulonglong)puStack_100 & 0xffffffff00000000);
    plVar9 = (longlong *)FMemory::Realloc(0,0x40);
    if (plVar9 == (longlong *)0x0) {
      if ((((int)puStack_100 != 0) && (local_108 != (longlong *)0x0)) &&
         ((**(code **)(*local_108 + 0x28))(local_108,0), local_108 != (longlong *)0x0)) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
    }
    else {
      uVar4 = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 4);
      uVar5 = param_2[1];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar1 = param_2[2];
      *plVar9 = (longlong)&PTR_GetPoolName_1442abd88;
      *(undefined4 *)(plVar9 + 1) = local_e8;
      *(undefined4 *)((longlong)plVar9 + 0xc) = local_e4;
      *(int *)(plVar9 + 2) = (int)uVar4;
      *(undefined4 *)((longlong)plVar9 + 0x14) = uVar2;
      *(int *)(plVar9 + 3) = (int)uVar5;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar3;
      plVar9[4] = uVar1;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[6] = lVar10;
      *plVar9 = (longlong)&PTR_GetPoolName_1442abdd0;
      FUN_140b21ab0(plVar9,&local_108);
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      lVar10 = FMemory::Realloc(plVar9,0,0);
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
    lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar10 + 400) == 0) {
      uVar12 = *(undefined8 *)(lVar10 + 0x3f8);
    }
    else {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar10 + 400) + 0x90);
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    if (((int)puStack_100 != 0) && (local_108 != (longlong *)0x0)) {
      (**(code **)(*local_108 + 0x30))(local_108,&local_a8);
    }
    FWeakObjectPtr::operator=(&local_98,0);
    uStack_90 = 0;
    local_88._0_8_ = AK::MemoryMgr::StartProfileThreadUsage;
    local_58 = (longlong **)0x0;
    local_48 = 0;
    FUN_142880af0(uVar12,&local_a8);
    if (local_48 != 0) {
      pplVar13 = &local_78;
      if (local_58 != (longlong **)0x0) {
        pplVar13 = local_58;
      }
      if (pplVar13 != (longlong **)0x0) {
        (*(code *)(*pplVar13)[2])(pplVar13,0);
      }
    }
    if (local_58 != (longlong **)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if ((int)puStack_100 != 0) {
      if (local_108 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_108 + 0x28))(local_108,0);
      if (local_108 != (longlong *)0x0) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
      puStack_100 = (uint *)((ulonglong)puStack_100 & 0xffffffff00000000);
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
  }
  return;
}



// FUNCTION 140b394d0 FUN_140b394d0 body=1981 status=ok
// SIG undefined FUN_140b394d0(void)

void FUN_140b394d0(longlong param_1,wchar_t *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int *piVar12;
  longlong *plVar13;
  uint *puVar14;
  wchar_t *pwVar15;
  bool bVar16;
  undefined8 local_res10;
  longlong local_res18 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  if (param_2 != (wchar_t *)0x0) {
    uVar7 = FUN_142e1a5a0();
    lVar8 = AGameStateBase::OnRep_GameModeClass(param_2,uVar7);
    pwVar15 = (wchar_t *)0x0;
    if (lVar8 != 0) {
      lVar9 = FUN_142e1a5a0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if ((bVar16) && (lVar8 = FUN_142d62010(lVar8,*(undefined8 *)(param_1 + 0x4f0)), lVar8 != 0)) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldFilled",L"::");
        pwVar11 = pwVar15;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar11 = pwVar4;
        }
        FName::FName(&local_res10,pwVar11 + 2,1);
        FUN_14074ba20(lVar8 + 0x28,param_1,FUN_140b39c90,local_res10);
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldNotFilled",L"::");
        pwVar11 = pwVar15;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar11 = pwVar4;
        }
        FName::FName(&local_res10,pwVar11 + 2,1);
        FUN_14074ba20(lVar8 + 0x38,param_1,FUN_140b3a060,local_res10);
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldDepleted",L"::");
        pwVar11 = pwVar15;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar11 = pwVar4;
        }
        FName::FName(&local_res10,pwVar11 + 2,1);
        FUN_14074ba20(lVar8 + 8,param_1,FUN_140b39050,local_res10);
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldNotDepleted",L"::");
        pwVar11 = pwVar15;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar11 = pwVar4;
        }
        FName::FName(&local_res10,pwVar11 + 2,1);
        FUN_14074ba20(lVar8 + 0x18,param_1,FUN_140b39e70,local_res10);
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldNotDepleted",L"::");
        pwVar11 = pwVar15;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar11 = pwVar4;
        }
        FName::FName(&local_res10,pwVar11 + 2,1);
        FUN_14074ba20(lVar8 + 0x48,param_1,FUN_140b39e70,local_res10);
      }
    }
    lVar8 = *(longlong *)(param_2 + 0x73c);
    if (lVar8 != 0) {
      cVar5 = FMulticastDelegateBase<FWeakObjectPtr>::IsBoundToObject(lVar8 + 0x1e8,param_1);
      if (cVar5 == '\0') {
        FUN_140998460(lVar8 + 0x1e8,&local_res10,param_1,FUN_140b33a40);
      }
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldAbsorbedDamage",L"::");
      pwVar11 = pwVar15;
      while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar11 = pwVar4;
      }
      FName::FName(local_res18,pwVar11 + 2,1);
      lVar9 = local_res18[0];
      plVar13 = (longlong *)(lVar8 + 0x8f8);
      FWeakObjectPtr::operator=(&local_a8,0);
      uStack_a0 = 0;
      FWeakObjectPtr::operator=(&local_a8,param_1);
      uStack_a0 = lVar9;
      local_res10 = 0;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_a8), lVar9 != 0)) {
        UObject::FindFunction(lVar9,uStack_a0);
      }
      piVar3 = (int *)*plVar13;
      iVar1 = *(int *)(lVar8 + 0x900);
      uVar7 = local_a8;
      for (piVar12 = piVar3; local_a8 = (longlong *)uVar7, piVar12 != piVar3 + (longlong)iVar1 * 4;
          piVar12 = piVar12 + 4) {
        local_a8._0_4_ = (uint)uVar7;
        if (((*piVar12 == (uint)local_a8) &&
            (local_a8._4_4_ = (uint)((ulonglong)uVar7 >> 0x20),
            bVar16 = piVar12[1] == local_a8._4_4_, bVar16)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_a8), cVar5 == '\0')))) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
        if ((bVar16) && (*(longlong *)(piVar12 + 2) == uStack_a0)) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
        if (bVar16) {
          if ((int)((longlong)piVar12 - (longlong)piVar3 >> 4) != -1) goto LAB_140b398e7;
          break;
        }
        uVar7 = local_a8;
      }
      iVar1 = *(int *)(lVar8 + 0x900);
      lVar9 = (longlong)iVar1;
      *(int *)(lVar8 + 0x900) = iVar1 + 1;
      if (*(int *)(lVar8 + 0x904) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
      }
      lVar8 = *plVar13;
      *(uint *)(lVar8 + lVar9 * 0x10) = (uint)local_a8;
      *(uint *)(lVar8 + 4 + lVar9 * 0x10) = local_a8._4_4_;
      *(longlong *)(lVar8 + 8 + lVar9 * 0x10) = uStack_a0;
LAB_140b398e7:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
    }
    if (*(longlong *)(param_2 + 0x740) != 0) {
      lVar8 = *(longlong *)(param_2 + 0x740) + 0x1d0;
      cVar5 = FMulticastDelegateBase<FWeakObjectPtr>::IsBoundToObject(lVar8,param_1);
      if (cVar5 == '\0') {
        FUN_140998460(lVar8,&local_res10,param_1,FUN_140b33880);
      }
    }
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnWeaponChanged",L"::");
    pwVar11 = pwVar15;
    while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar11 = pwVar4;
    }
    FName::FName(local_res18,pwVar11 + 2,1);
    pwVar11 = param_2 + 0x828;
    FWeakObjectPtr::operator=(&local_a8,0);
    uStack_a0 = 0;
    FWeakObjectPtr::operator=(&local_a8,param_1);
    uStack_a0 = local_res18[0];
    local_res10 = 0;
    if ((local_res18[0] != 0) && (lVar8 = FWeakObjectPtr::Get(&local_a8), lVar8 != 0)) {
      UObject::FindFunction(lVar8,uStack_a0);
    }
    piVar3 = *(int **)pwVar11;
    iVar1 = *(int *)(param_2 + 0x82c);
    uVar7 = local_a8;
    for (piVar12 = piVar3; local_a8 = (longlong *)uVar7, piVar12 != piVar3 + (longlong)iVar1 * 4;
        piVar12 = piVar12 + 4) {
      local_a8._0_4_ = (uint)uVar7;
      if (((*piVar12 == (uint)local_a8) &&
          (local_a8._4_4_ = (uint)((ulonglong)uVar7 >> 0x20), bVar16 = piVar12[1] == local_a8._4_4_,
          bVar16)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_a8), cVar5 == '\0')))) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (*(longlong *)(piVar12 + 2) == uStack_a0)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        if ((int)((longlong)piVar12 - (longlong)piVar3 >> 4) != -1) goto LAB_140b39a67;
        break;
      }
      uVar7 = local_a8;
    }
    iVar1 = *(int *)(param_2 + 0x82c);
    lVar8 = (longlong)iVar1;
    *(int *)(param_2 + 0x82c) = iVar1 + 1;
    if (*(int *)(param_2 + 0x82e) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar11,iVar1);
    }
    lVar9 = *(longlong *)pwVar11;
    *(uint *)(lVar9 + lVar8 * 0x10) = (uint)local_a8;
    *(uint *)(lVar9 + 4 + lVar8 * 0x10) = local_a8._4_4_;
    *(longlong *)(lVar9 + 8 + lVar8 * 0x10) = uStack_a0;
LAB_140b39a67:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar11);
    local_78 = (longlong *)(param_1 + 0x510);
    iVar1 = *(int *)(param_1 + 0x538);
    puStack_58 = (uint *)(param_1 + 0x520);
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 1;
    local_98._4_4_ = 0;
    uStack_90 = 0;
    if (iVar1 != 0) {
      puVar14 = *(uint **)(param_1 + 0x530);
      if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
        puVar14 = puStack_58;
      }
      uVar2 = *puVar14;
      pwVar11 = pwVar15;
      pwVar10 = pwVar15;
      while (uVar2 == 0) {
        iVar6 = (int)pwVar11;
        uStack_90 = (int)pwVar10 + 0x20;
        pwVar10 = (wchar_t *)(ulonglong)uStack_90;
        local_a8._0_4_ = iVar6 + 1;
        pwVar11 = (wchar_t *)(ulonglong)(uint)local_a8;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140b39b30;
        uVar2 = puVar14[(longlong)iVar6 + 1];
      }
      local_a8._4_4_ = uVar2 - 1 & uVar2 ^ uVar2;
      iVar6 = 0x1f;
      if (local_a8._4_4_ != 0) {
        for (; local_a8._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (local_a8._4_4_ == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_98._4_4_ = (uStack_90 - iVar6) + 0x1f;
      if (iVar1 < local_98._4_4_) {
LAB_140b39b30:
        local_98._4_4_ = iVar1;
      }
    }
    auStack_50._4_4_ = local_98._4_4_;
    auStack_50._0_4_ = 0xffffffff;
    auStack_50._8_4_ = uStack_90;
    auStack_50._12_4_ = iStack_8c;
    uStack_60 = (uint)local_a8;
    uStack_5c = local_a8._4_4_;
    local_70 = 0;
    local_40._0_4_ = SUB84(local_78,0);
    local_40._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_a0._0_4_ = (uint)local_a8;
    uStack_a0._4_4_ = local_a8._4_4_;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = auStack_50._8_8_;
    local_88._12_4_ = local_40._4_4_;
    bVar16 = local_98._4_4_ < *(int *)(param_1 + 0x538);
    local_a8 = local_78;
    local_68 = local_78;
    local_40 = local_78;
    local_98 = puStack_58;
    if (bVar16) {
      do {
        plVar13 = *(longlong **)((longlong)iStack_8c * 0x40 + *local_a8);
        (**(code **)(*plVar13 + 0x280))
                  (plVar13,param_1,param_2,*local_a8 + 8 + (longlong)iStack_8c * 0x40);
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < (int)local_98[6]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
      }
    }
    *(wchar_t **)(param_1 + 0x150) = param_2;
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_2 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (!bVar16) {
      param_2 = pwVar15;
    }
    *(wchar_t **)(param_1 + 0x508) = param_2;
    if ((param_2 != (wchar_t *)0x0) && (*(longlong *)(param_1 + 0x5b8) != 0)) {
      local_res10 = 0;
      FUN_142382f60(*(longlong *)(param_1 + 0x5b8),*(undefined8 *)(param_2 + 0xb4),&DAT_146532184,0)
      ;
    }
  }
  return;
}



// FUNCTION 140b39c90 FUN_140b39c90 body=465 status=ok
// SIG undefined FUN_140b39c90(void)

void FUN_140b39c90(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 0x598) = 3;
  local_78 = (longlong *)(param_1 + 0x510);
  local_98 = 0;
  iVar4 = *(int *)(param_1 + 0x538);
  local_68 = (uint *)(param_1 + 0x520);
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar4 != 0) {
    puVar7 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar7 = local_68;
    }
    uVar1 = *puVar7;
    local_98 = 0;
    iStack_80 = 0;
    while (uVar1 == 0) {
      lVar5 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar3 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar3) goto LAB_140b39d6d;
      uVar1 = puVar7[lVar5 + 1];
    }
    uStack_94 = -uVar1 & uVar1;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_84 = (iStack_80 - iVar6) + 0x1f;
    if (iVar4 < iStack_84) {
LAB_140b39d6d:
      iStack_84 = iVar4;
    }
  }
  uStack_60 = CONCAT44(iStack_84,0xffffffff);
  auStack_20._8_4_ = iStack_80;
  auStack_20._0_8_ = uStack_60;
  auStack_20._12_4_ = uStack_7c;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_40 = 0;
  local_10._0_4_ = SUB84(local_78,0);
  local_10._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  iVar4 = iStack_84;
  local_48 = local_78;
  local_38 = local_78;
  puStack_28 = local_68;
  local_10 = local_78;
  iStack_30 = iStack_70;
  uStack_2c = uStack_6c;
  if (iStack_84 < *(int *)(param_1 + 0x538)) {
    do {
      local_98 = *param_2;
      uStack_94 = param_2[1];
      uStack_90 = *(undefined8 *)(param_2 + 2);
      local_88 = (undefined4)*(undefined8 *)(param_2 + 4);
      iStack_84 = (int)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
      plVar2 = *(longlong **)((longlong)iVar4 * 0x40 + *local_78);
      (**(code **)(*plVar2 + 0x290))
                (plVar2,param_1,&local_98,*local_78 + 8 + (longlong)iVar4 * 0x40);
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      iVar4 = uStack_60._4_4_;
    } while (uStack_60._4_4_ < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b39e70 FUN_140b39e70 body=493 status=ok
// SIG undefined FUN_140b39e70(void)

void FUN_140b39e70(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x598) == '\x01') {
    *(undefined1 *)(param_1 + 0x598) = 2;
    local_78 = (longlong *)(param_1 + 0x510);
    iVar4 = *(int *)(param_1 + 0x538);
    local_68 = (uint *)(param_1 + 0x520);
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar4 != 0) {
      puVar7 = *(uint **)(param_1 + 0x530);
      if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
        puVar7 = local_68;
      }
      uVar1 = *puVar7;
      local_98 = 0;
      iStack_80 = 0;
      while (uVar1 == 0) {
        lVar5 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar6 = local_98 + 1;
        bVar3 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar6;
        if (bVar3) goto LAB_140b39f5d;
        uVar1 = puVar7[lVar5 + 1];
      }
      uStack_94 = -uVar1 & uVar1;
      iVar6 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      iStack_84 = (iStack_80 - iVar6) + 0x1f;
      if (iVar4 < iStack_84) {
LAB_140b39f5d:
        iStack_84 = iVar4;
      }
    }
    uStack_60 = CONCAT44(iStack_84,0xffffffff);
    auStack_20._8_4_ = iStack_80;
    auStack_20._0_8_ = uStack_60;
    auStack_20._12_4_ = uStack_7c;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_40 = 0;
    local_10._0_4_ = SUB84(local_78,0);
    local_10._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    iVar4 = iStack_84;
    local_48 = local_78;
    local_38 = local_78;
    puStack_28 = local_68;
    local_10 = local_78;
    iStack_30 = iStack_70;
    uStack_2c = uStack_6c;
    if (iStack_84 < *(int *)(param_1 + 0x538)) {
      do {
        local_98 = *param_2;
        uStack_94 = param_2[1];
        uStack_90 = *(undefined8 *)(param_2 + 2);
        local_88 = (undefined4)*(undefined8 *)(param_2 + 4);
        iStack_84 = (int)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
        plVar2 = *(longlong **)((longlong)iVar4 * 0x40 + *local_78);
        (**(code **)(*plVar2 + 0x2a8))
                  (plVar2,param_1,&local_98,*local_78 + 8 + (longlong)iVar4 * 0x40);
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
        iVar4 = uStack_60._4_4_;
      } while (uStack_60._4_4_ < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 140b3a060 FUN_140b3a060 body=493 status=ok
// SIG undefined FUN_140b3a060(void)

void FUN_140b3a060(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x598) == '\x03') {
    *(undefined1 *)(param_1 + 0x598) = 2;
    local_78 = (longlong *)(param_1 + 0x510);
    iVar4 = *(int *)(param_1 + 0x538);
    local_68 = (uint *)(param_1 + 0x520);
    local_98 = 0;
    uStack_94 = 1;
    iStack_84 = 0;
    iStack_80 = 0;
    if (iVar4 != 0) {
      puVar7 = *(uint **)(param_1 + 0x530);
      if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
        puVar7 = local_68;
      }
      uVar1 = *puVar7;
      local_98 = 0;
      iStack_80 = 0;
      while (uVar1 == 0) {
        lVar5 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar6 = local_98 + 1;
        bVar3 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar6;
        if (bVar3) goto LAB_140b3a14d;
        uVar1 = puVar7[lVar5 + 1];
      }
      uStack_94 = -uVar1 & uVar1;
      iVar6 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      iStack_84 = (iStack_80 - iVar6) + 0x1f;
      if (iVar4 < iStack_84) {
LAB_140b3a14d:
        iStack_84 = iVar4;
      }
    }
    uStack_60 = CONCAT44(iStack_84,0xffffffff);
    auStack_20._8_4_ = iStack_80;
    auStack_20._0_8_ = uStack_60;
    auStack_20._12_4_ = uStack_7c;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_40 = 0;
    local_10._0_4_ = SUB84(local_78,0);
    local_10._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    iVar4 = iStack_84;
    local_48 = local_78;
    local_38 = local_78;
    puStack_28 = local_68;
    local_10 = local_78;
    iStack_30 = iStack_70;
    uStack_2c = uStack_6c;
    if (iStack_84 < *(int *)(param_1 + 0x538)) {
      do {
        local_98 = *param_2;
        uStack_94 = param_2[1];
        uStack_90 = *(undefined8 *)(param_2 + 2);
        local_88 = (undefined4)*(undefined8 *)(param_2 + 4);
        iStack_84 = (int)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
        plVar2 = *(longlong **)((longlong)iVar4 * 0x40 + *local_78);
        (**(code **)(*plVar2 + 0x298))
                  (plVar2,param_1,&local_98,*local_78 + 8 + (longlong)iVar4 * 0x40);
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
        iVar4 = uStack_60._4_4_;
      } while (uStack_60._4_4_ < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 140b3a250 FUN_140b3a250 body=1309 status=ok
// SIG undefined FUN_140b3a250(void)

void FUN_140b3a250(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  uint *puVar14;
  undefined8 local_res8;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x598) = 0;
    return;
  }
  uVar8 = FUN_142e1a5a0();
  lVar9 = AGameStateBase::OnRep_GameModeClass(param_2,uVar8);
  pwVar12 = (wchar_t *)0x0;
  if (lVar9 != 0) {
    lVar10 = FUN_142e1a5a0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar9 = FUN_142d62990(lVar9,*(undefined8 *)(param_1 + 0x4f0)), lVar9 != 0)) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldFilled",L"::");
      pwVar13 = pwVar12;
      while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar13 = pwVar6;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x28,param_1,local_res8);
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldNotFilled",L"::");
      pwVar13 = pwVar12;
      while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar13 = pwVar6;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x38,param_1,local_res8);
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldDepleted",L"::");
      pwVar13 = pwVar12;
      while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar13 = pwVar6;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 8,param_1,local_res8);
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldNotDepleted",L"::");
      pwVar13 = pwVar12;
      while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar13 = pwVar6;
      }
      FName::FName(&local_res8,pwVar13 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x18,param_1,local_res8);
    }
  }
  lVar9 = *(longlong *)(param_2 + 0xe78);
  if (lVar9 != 0) {
    FUN_140483870(lVar9 + 0x1e8,param_1);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldAbsorbedDamage",L"::");
    pwVar13 = pwVar12;
    while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar13 = pwVar6;
    }
    FName::FName(&local_res8,pwVar13 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x8f8,param_1,local_res8);
  }
  if (*(longlong *)(param_2 + 0xe80) != 0) {
    FUN_140483870(*(longlong *)(param_2 + 0xe80) + 0x1d0,param_1);
  }
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnWeaponChanged",L"::");
  pwVar13 = pwVar12;
  while (pwVar6 = pwVar11, pwVar6 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar13 = pwVar6;
  }
  FName::FName(&local_res8,pwVar13 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x1050,param_1,local_res8);
  plVar1 = (longlong *)(param_1 + 0x510);
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_38 = (uint *)(param_1 + 0x520);
  local_88 = 0;
  uStack_84 = 1;
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar14 = puStack_38;
    }
    uVar3 = *puVar14;
    pwVar13 = pwVar12;
    while (uVar3 == 0) {
      iVar7 = (int)pwVar12;
      uStack_70 = (int)pwVar13 + 0x20;
      pwVar13 = (wchar_t *)(ulonglong)uStack_70;
      local_88 = iVar7 + 1;
      pwVar12 = (wchar_t *)(ulonglong)local_88;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140b3a60f;
      uVar3 = puVar14[(longlong)iVar7 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
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
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_140b3a60f:
      local_78._4_4_ = iVar2;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  uStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = local_88;
  uStack_7c = uStack_84;
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar5 = local_78._4_4_ < *(int *)(param_1 + 0x538);
  local_58 = plVar1;
  local_48 = plVar1;
  local_20 = plVar1;
  local_78 = puStack_38;
  if (bVar5) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_6c * 0x40 + *plVar1);
      (**(code **)(*plVar4 + 0x288))
                (plVar4,param_1,param_2,*plVar1 + 8 + (longlong)iStack_6c * 0x40);
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  FUN_140b3c490(param_1);
  FUN_140b3c560(param_1);
  FUN_140b3c810(param_1);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    local_res8 = 0;
    FUN_142382f60(*(longlong *)(param_1 + 0x5b8),*(undefined8 *)(param_1 + 0x168),&DAT_146532184,0);
    FUN_1405ac9d0(*(undefined8 *)(param_1 + 0x5b8));
  }
  *(undefined1 *)(param_1 + 0x598) = 0;
  return;
}



// FUNCTION 140b3a770 FUN_140b3a770 body=50 status=ok
// SIG undefined FUN_140b3a770(void)

void FUN_140b3a770(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14222e2a0();
  if (lVar1 == param_2) {
    FUN_140b46700(param_1,0,0);
  }
  return;
}



// FUNCTION 140b3a7b0 FUN_140b3a7b0 body=407 status=ok
// SIG undefined FUN_140b3a7b0(void)

void FUN_140b3a7b0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res8;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    if (param_2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x910);
    }
    if (lVar2 != 0) {
      cVar1 = FUN_142dafb10(lVar2 + 0x290,&DAT_146869098);
      if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) == DAT_1468690a0)) {
        FUN_142dbb5d0(lVar2 + 0x290,&DAT_146869098);
        lVar2 = *(longlong *)(param_2 + 0xe90);
        if (lVar2 != 0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146869250) && (_Init_thread_header(&DAT_146869250), DAT_146869250 == -1)) {
            FWeakObjectPtr::operator=(&DAT_146869248,0);
            _Init_thread_footer(&DAT_146869250);
          }
          cVar1 = FWeakObjectPtr::IsValid(&DAT_146869248);
          if (cVar1 == '\0') {
            uVar3 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass();
            uVar3 = FUN_141799410(uVar3,0xffffffffffffffff,
                                  L"/Game/Gear/Artifacts/_Design/PartSets/Abilities/DamageArtifacts/LastStand/StatusEffect_Ability_LastStand.StatusEffect_Ability_LastStand"
                                 );
            FWeakObjectPtr::operator=(&DAT_146869248,uVar3);
          }
          lVar4 = FWeakObjectPtr::Get(&DAT_146869248);
          if (lVar4 != 0) {
            local_18[1] = 0;
            local_18[0] = lVar4;
            FUN_142dd9790(lVar2,local_18);
          }
        }
      }
    }
    local_res8 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x4b0,&local_res8);
    (**(code **)(**(longlong **)(param_1 + 0x498) + 0x4d8))(*(longlong **)(param_1 + 0x498),param_2)
    ;
  }
  return;
}



// FUNCTION 140b3a950 FUN_140b3a950 body=206 status=ok
// SIG undefined FUN_140b3a950(void)

void FUN_140b3a950(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [12];
  undefined1 local_c;
  
  FUN_1430094f0();
  if ((*(char *)((longlong)param_1 + 0x6d5) == '\0') ||
     (*(char *)((longlong)param_2 + 0x11) == '\0')) goto LAB_140b3a9d0;
  lVar3 = *param_2;
  local_c = 0;
  if (lVar3 == 0) {
LAB_140b3a9b7:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140b3a9b7;
  }
  (**(code **)(*param_1 + 0x848))(param_1,lVar3,local_18,0);
LAB_140b3a9d0:
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x72c) = *(undefined4 *)(lVar3 + 0x790);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0;
  return;
}



// FUNCTION 140b3aa20 FUN_140b3aa20 body=139 status=ok
// SIG undefined FUN_140b3aa20(void)

void FUN_140b3aa20(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [12];
  undefined1 local_c;
  
  FUN_1430094f0();
  if (*(char *)((longlong)param_1 + 0x6d5) == '\0') {
    return;
  }
  if (*(char *)((longlong)param_2 + 0x11) == '\0') {
    return;
  }
  lVar3 = *param_2;
  local_c = 0;
  if (lVar3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b3aa89;
  }
  lVar3 = 0;
LAB_140b3aa89:
  (**(code **)(*param_1 + 0x848))(param_1,lVar3,local_18,0);
  return;
}



// FUNCTION 140b3aab0 FUN_140b3aab0 body=443 status=ok
// SIG undefined FUN_140b3aab0(void)

void FUN_140b3aab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  local_88 = 0;
  uStack_84 = 1;
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_38 = (uint *)(param_1 + 0x520);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_38;
    }
    uVar3 = *puVar8;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_140b3ab83;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
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
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_140b3ab83:
      local_78._4_4_ = iVar2;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar5 = local_78._4_4_ < *(int *)(param_1 + 0x538);
  local_58 = plVar1;
  local_48 = plVar1;
  local_20 = plVar1;
  local_78 = puStack_38;
  if (bVar5) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_6c * 0x40 + *plVar1);
      (**(code **)(*plVar4 + 0x2c0))
                (plVar4,param_1,*plVar1 + 8 + (longlong)iStack_6c * 0x40,param_2,param_3);
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b3ac70 FUN_140b3ac70 body=443 status=ok
// SIG undefined FUN_140b3ac70(void)

void FUN_140b3ac70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  local_88 = 0;
  uStack_84 = 1;
  iVar2 = *(int *)(param_1 + 0x538);
  puStack_38 = (uint *)(param_1 + 0x520);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_38;
    }
    uVar3 = *puVar8;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_140b3ad43;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
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
    local_78._4_4_ = (uStack_70 - iVar7) + 0x1f;
    if (iVar2 < local_78._4_4_) {
LAB_140b3ad43:
      local_78._4_4_ = iVar2;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar1,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar5 = local_78._4_4_ < *(int *)(param_1 + 0x538);
  local_58 = plVar1;
  local_48 = plVar1;
  local_20 = plVar1;
  local_78 = puStack_38;
  if (bVar5) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_6c * 0x40 + *plVar1);
      (**(code **)(*plVar4 + 0x2c8))
                (plVar4,param_1,*plVar1 + 8 + (longlong)iStack_6c * 0x40,param_2,param_3);
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140b3aec0 FUN_140b3aec0 body=1840 status=ok
// SIG undefined FUN_140b3aec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b3aec0(longlong *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong **pplVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  undefined1 auStack_2b8 [32];
  uint5 *local_298;
  undefined4 *local_290;
  undefined1 *local_288;
  char local_278;
  char local_277 [7];
  longlong *local_270;
  uint local_268;
  longlong *local_260;
  uint local_258;
  uint local_254;
  int local_250;
  uint5 local_248;
  undefined3 uStack_243;
  longlong local_240;
  undefined8 local_238;
  undefined8 *local_230;
  longlong local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong *local_208;
  int local_200;
  undefined1 local_1f8 [8];
  undefined8 local_1f0;
  code *local_1e8;
  longlong local_1d8 [4];
  longlong *local_1b8;
  int local_1a8;
  longlong local_198;
  undefined4 local_190;
  undefined1 local_188 [8];
  undefined8 local_180;
  code *local_178;
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 local_128 [72];
  longlong local_e0;
  longlong local_c0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_278 = param_4;
  local_230 = param_3;
  local_228 = param_2;
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if ((param_2 != 0) && (lVar8 != 0)) {
    (**(code **)(*param_1 + 0x600))(param_1);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar10 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar10 != 0) {
      uVar1 = *(undefined4 *)(lVar10 + 0x3ac);
      fVar2 = *(float *)(lVar10 + 0x3b8);
      fVar3 = *(float *)(lVar10 + 0x3b4);
      fVar4 = *(float *)(lVar10 + 0x3bc);
      if (param_1[0x8f] == 0) {
        fVar19 = 0.0;
        lVar11 = 0;
      }
      else {
        iVar7 = rand();
        lVar11 = param_1[0x8f];
        fVar19 = (float)iVar7 * 3.051851e-05 * (fVar3 - fVar2) + fVar2;
      }
      plVar13 = (longlong *)0x0;
      iVar7 = *(int *)(lVar10 + 0x3b0) - (uint)(lVar11 != 0);
      local_250 = iVar7;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1468692c0) &&
         (_Init_thread_header(&DAT_1468692c0), DAT_1468692c0 == -1)) {
        FName::FName(&DAT_1468692b8,L"MassPickupSphere",1);
        _Init_thread_footer(&DAT_1468692c0);
      }
      local_277[0] = local_278;
      local_298 = (uint5 *)0x0;
      FUN_1422ffb20(local_128,DAT_1468692b8,local_277,0);
      local_240 = 0;
      local_238 = 0;
      if (*(char *)((longlong)param_3 + 0xc) == '\0') {
        lVar10 = param_1[0x2d];
        if (lVar10 == 0) {
          local_270 = _DAT_1468b5d90;
          local_268 = DAT_1468b5d98;
        }
        else {
          local_270 = *(longlong **)(lVar10 + 0x220);
          local_268 = *(uint *)(lVar10 + 0x228);
        }
        pplVar15 = &local_260;
        local_260 = local_270;
        local_258 = local_268;
      }
      else {
        local_270 = (longlong *)*param_3;
        pplVar15 = &local_270;
        local_268 = *(uint *)(param_3 + 1);
      }
      local_220 = 2;
      local_21c = uVar1;
      puVar9 = (uint *)FUN_140a05dc0();
      local_288 = local_128;
      local_290 = &local_220;
      local_298 = &local_248;
      local_248 = (uint5)(~puVar9[1] & *puVar9);
      UWorld::OverlapMultiByObjectType(lVar8,&local_240,pplVar15,&DAT_1464aa810);
      local_260 = (longlong *)0x0;
      local_254 = 0;
      _local_248 = local_240 + (longlong)(int)local_238 * 0x18;
      lVar8 = local_240;
      plVar17 = plVar13;
      plVar18 = plVar13;
      if (local_240 != _local_248) {
        do {
          lVar10 = FUN_1423111a0(lVar8);
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
            if ((bVar5) && (*(char *)(lVar10 + 0x6d4) != '\0')) {
              iVar16 = (int)plVar17;
              for (plVar14 = plVar13; plVar14 != plVar13 + iVar16; plVar14 = plVar14 + 1) {
                if (*plVar14 == lVar10) goto LAB_140b3b4cf;
              }
              local_258 = iVar16 + 1;
              if ((int)plVar18 < (int)local_258) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_260,plVar17);
              }
              plVar13 = local_260;
              plVar17 = (longlong *)(ulonglong)local_258;
              local_260[iVar16] = lVar10;
              uVar12 = FUN_142dccd00(local_228);
              local_298 = (uint5 *)CONCAT71(local_298._1_7_,1);
              cVar6 = FUN_142fe9a90(lVar10,uVar12,1,0);
              if ((cVar6 != '\0') &&
                 (lVar11 = (**(code **)(*param_1 + 0x148))(param_1), lVar11 != 0)) {
                if ((iVar7 < 1) || (fVar4 <= fVar19)) {
                  *(undefined1 *)(lVar10 + 0x67c) = 0;
                  *(undefined1 *)(lVar10 + 0x468) = 1;
                }
                else {
                  local_250 = iVar7 + -1;
                  iVar7 = rand();
                  fVar19 = fVar19 + (float)iVar7 * 3.051851e-05 * (fVar3 - fVar2) + fVar2;
                }
                local_208 = (longlong *)0x0;
                local_200 = 0;
                FWeakObjectPtr::operator=(local_1f8,0);
                local_1f0 = 0;
                local_1e8 = AK::MemoryMgr::StartProfileThreadUsage;
                local_1b8 = (longlong *)0x0;
                local_1a8 = 0;
                uVar12 = FName::FName(&local_270,L"TryMassPickupBy",1);
                plVar13 = (longlong *)FMemory::Realloc(0,0x40,0);
                if (plVar13 == (longlong *)0x0) {
                  if ((local_200 != 0) && (local_208 != (longlong *)0x0)) {
                    (**(code **)(*local_208 + 0x28))(local_208,0);
                    if (local_208 != (longlong *)0x0) {
                      local_208 = (longlong *)FMemory::Realloc(local_208,0,0);
                    }
                    local_200 = 0;
                  }
                }
                else {
                  local_298 = (uint5 *)((ulonglong)local_298 & 0xffffffffffffff00);
                  FUN_140b14ca0(plVar13,lVar10,uVar12);
                  (**(code **)(*plVar13 + 0x30))(plVar13,&local_208);
                  (**(code **)(*plVar13 + 0x28))(plVar13,0);
                  lVar11 = FMemory::Realloc(plVar13,0,0);
                  if (lVar11 != 0) {
                    FMemory::Free(lVar11);
                  }
                }
                lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
                if (*(longlong *)(lVar11 + 400) == 0) {
                  uVar12 = *(undefined8 *)(lVar11 + 0x3f8);
                }
                else {
                  uVar12 = *(undefined8 *)(*(longlong *)(lVar11 + 400) + 0x90);
                }
                local_198 = 0;
                local_190 = 0;
                if ((local_200 != 0) && (local_208 != (longlong *)0x0)) {
                  (**(code **)(*local_208 + 0x30))(local_208,&local_198);
                }
                FWeakObjectPtr::operator=(local_188,0);
                local_290 = (undefined4 *)CONCAT44(local_290._4_4_,0xbf800000);
                local_178 = AK::MemoryMgr::StartProfileThreadUsage;
                local_180 = 0;
                local_148 = (longlong *)0x0;
                local_138 = 0;
                local_298 = (uint5 *)((ulonglong)local_298 & 0xffffffffffffff00);
                FUN_142880850(uVar12,lVar10 + 0x6f8,&local_198,fVar19);
                if (local_138 != 0) {
                  plVar13 = local_168;
                  if (local_148 != (longlong *)0x0) {
                    plVar13 = local_148;
                  }
                  if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13,0);
                  }
                }
                if (local_148 != (longlong *)0x0) {
                  FMemory::Free();
                }
                TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
                if (local_278 != '\0') {
                  (**(code **)(*param_1 + 0x600))(param_1);
                  *(undefined1 *)(lVar10 + 0x6d6) = 2;
                }
                if (local_1a8 != 0) {
                  plVar13 = local_1d8;
                  if (local_1b8 != (longlong *)0x0) {
                    plVar13 = local_1b8;
                  }
                  if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13,0);
                  }
                }
                if (local_1b8 != (longlong *)0x0) {
                  FMemory::Free();
                }
                TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_208);
                plVar13 = local_260;
                iVar7 = local_250;
              }
              plVar18 = (longlong *)(ulonglong)local_254;
            }
          }
LAB_140b3b4cf:
          lVar8 = lVar8 + 0x18;
        } while (lVar8 != _local_248);
        if (plVar13 != (longlong *)0x0) {
          FMemory::Free(plVar13);
        }
      }
      if (local_240 != 0) {
        FMemory::Free(local_240);
      }
      if (local_c0 != 0) {
        FMemory::Free();
      }
      param_3 = local_230;
      if (local_e0 != 0) {
        FMemory::Free();
        param_3 = local_230;
      }
    }
  }
  if (*(char *)((longlong)param_3 + 0xc) != '\0') {
    *(undefined1 *)((longlong)param_3 + 0xc) = 0;
  }
  return;
}



// FUNCTION 140b3b5f0 FUN_140b3b5f0 body=567 status=ok
// SIG undefined FUN_140b3b5f0(void)

void FUN_140b3b5f0(longlong *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  FUN_14300bc00();
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = UWorld::GetGameState<APVPGameState>(uVar6);
    if (lVar5 != 0) {
      FUN_140cd7a40(lVar5,param_1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x67c) != '\0') {
    if (((char *)param_1[0xdc] == (char *)0x0) || (*(char *)param_1[0xdc] == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) && (param_1[0x8f] != 0)) {
      FUN_140b26b90(param_1);
    }
  }
  iVar4 = FUN_142235230(param_1);
  if (iVar4 == 3) goto LAB_140b3b78a;
  if (((char)param_1[0xd7] != '\0') && (lVar5 = param_1[0x8f], lVar5 != 0)) {
    lVar7 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      thunk_FUN_1414000b0(lVar5,(char)param_1[0xd7]);
    }
  }
  *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) & 0xfb;
  lVar5 = param_1[0x8f];
  if ((((lVar5 == 0) || (param_1[0x98] == 0)) || (*(char *)(param_1[0x98] + 0x38) != '\0')) ||
     (param_1[0xad] == 0)) goto LAB_140b3b78a;
  uVar6 = UUserObjectListEntry::GetPrivateStaticClass();
  plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)param_1[0x8f];
    uVar6 = ANavLinkProxy::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar6);
LAB_140b3b7b6:
    if (((lVar5 == 0) || (lVar7 = param_1[0xad], lVar7 == 0)) ||
       (lVar5 = *(longlong *)(lVar5 + 0x118), lVar5 == 0)) goto LAB_140b3b771;
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (cVar3 = FUN_140c48e60(lVar5,lVar7), cVar3 == '\0')) goto LAB_140b3b771;
    bVar2 = 4;
  }
  else {
    lVar5 = (**(code **)(*plVar8 + 0x18))(plVar8);
    if (lVar5 != 0) {
      lVar7 = ANavLinkProxy::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140b3b7b6;
    }
LAB_140b3b771:
    bVar2 = 0;
  }
  *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) & 0xfb;
  *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) | bVar2;
LAB_140b3b78a:
  FUN_140b1f150(param_1);
  return;
}



// FUNCTION 140b3b830 FUN_140b3b830 body=48 status=ok
// SIG undefined FUN_140b3b830(void)

void FUN_140b3b830(longlong *param_1)

{
  thunk_FUN_142ff0a90();
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x6d6) = 1;
  }
  return;
}



// FUNCTION 140b3b860 FUN_140b3b860 body=443 status=ok
// SIG undefined FUN_140b3b860(void)

undefined8 * FUN_140b3b860(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined1 local_188;
  undefined1 local_187;
  undefined4 local_184;
  byte local_180;
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  void *local_c8;
  int local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined4 local_b4;
  byte local_b0;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  if (*(longlong *)(param_1 + 0x4a8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_142c62180(local_e8);
    local_1b8 = &PTR_FUN_143ff6170;
    local_1b0 = local_e0;
    local_1a8 = local_d8;
    local_1a0 = local_d0;
    local_b7 = 2;
    local_198 = (void *)0x0;
    local_190 = local_c0;
    if (local_c0 == 0) {
      local_18c = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_198,local_c0,0);
      _guard_xfg_dispatch_icall_nop(local_198,local_c8,(longlong)local_c0 * 0x38);
    }
    local_188 = local_b8;
    local_184 = local_b4;
    local_180 = local_180 ^ (local_180 ^ local_b0) & 7;
    local_187 = local_b7;
    FUN_1405e0d90(local_178,local_a8);
    FUN_1405e0d90(local_160,local_90);
    FUN_1405e0d90(local_148,local_78);
    FUN_1405e0d90(local_130,local_60);
    local_118 = local_48;
    local_114 = local_44;
    local_110 = local_40;
    local_108 = local_38;
    local_100 = local_30;
    local_10c = local_3c;
    local_f8 = local_28;
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_142c7bb40(*(undefined8 *)(param_1 + 0x4a8),param_2,param_3,&local_1b8,0);
    FUN_142c63c50(local_e8);
  }
  return param_2;
}



// FUNCTION 140b3ba20 FUN_140b3ba20 body=356 status=ok
// SIG undefined FUN_140b3ba20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b3ba20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  longlong local_250;
  undefined1 local_240 [8];
  undefined8 *local_238;
  undefined1 *puStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  lVar1 = FUN_142ff9ea0();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((((param_2 != 0) && (lVar1 != 0)) && (*(longlong *)(DAT_146b33f38 + 0xd8) != 0)) &&
     ((*(byte *)((longlong)param_1 + 0x70c) & 2) == 0)) {
    local_258 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x100);
    local_268 = &local_258;
    local_278 = 0;
    puStack_260 = local_240;
    local_270 = 0;
    local_250 = param_2;
    local_238 = local_268;
    puStack_230 = puStack_260;
    FUN_1405e1200(local_228,&local_238);
    local_278 = CONCAT44(0xffffffff,(undefined4)local_278);
    local_270 = 0;
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    local_288 = 0;
    local_290 = &local_278;
    local_298 = 0;
    FUN_1405f8040(&local_268,uVar2,*(undefined8 *)(lVar1 + 0x140),local_228);
    if (local_20 != 0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x600))(param_1);
    *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) | 2;
  }
  return;
}



// FUNCTION 140b3bb90 FUN_140b3bb90 body=52 status=ok
// SIG undefined FUN_140b3bb90(void)

void FUN_140b3bb90(longlong param_1,longlong param_2)

{
  undefined1 local_28 [40];
  
  if ((*(longlong *)(param_1 + 0x5d0) != 0) && (param_2 != 0)) {
    FUN_1405a3150(*(longlong *)(param_1 + 0x5d0),local_28,param_2,0);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 140b3bbd0 FUN_140b3bbd0 body=44 status=ok
// SIG undefined FUN_140b3bbd0(void)

void FUN_140b3bbd0(longlong param_1)

{
  FUN_142349c40();
  if (*(char *)(param_1 + 0x370) == '\x01') {
    FUN_142350b20(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140b3bc00 FUN_140b3bc00 body=251 status=ok
// SIG undefined FUN_140b3bc00(void)

void FUN_140b3bc00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_14300c0c0();
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar6 = *(undefined4 *)(lVar4 + 0x790);
  }
  *(undefined4 *)(param_1 + 0xe1) = uVar6;
  uVar5 = FUN_142e80f20();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
  param_1[0xd8] = lVar4;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x278) = 1;
  }
  lVar4 = FUN_142ff9ea0(param_1);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0xd8) != '\0')) && (param_1[0xd8] != 0)) {
    FText::FText(local_28,lVar4 + 0x40);
    FText::operator=(param_1[0xd8] + 0x260,local_28);
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



// FUNCTION 140b3bd00 FUN_140b3bd00 body=216 status=ok
// SIG undefined FUN_140b3bd00(void)

void FUN_140b3bd00(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1417510e0();
    FWeakObjectPtr::operator=(&local_res8,param_1);
    lVar3 = *(longlong *)(param_1 + 0x30);
    plVar7 = (longlong *)(lVar3 + 0x80);
    lVar4 = *plVar7;
    iVar2 = *(int *)(lVar3 + 0x88);
    for (lVar6 = lVar4; lVar6 != lVar4 + (longlong)iVar2 * 8; lVar6 = lVar6 + 8) {
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,&local_res8);
      if (cVar5 != '\0') {
        if ((int)(lVar6 - lVar4 >> 3) != -1) goto LAB_140b3bdb5;
        break;
      }
    }
    iVar2 = *(int *)(lVar3 + 0x88);
    *(int *)(lVar3 + 0x88) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x8c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
    }
    puVar1 = (undefined4 *)(*plVar7 + (longlong)iVar2 * 8);
    *puVar1 = local_res8;
    puVar1[1] = local_resc;
LAB_140b3bdb5:
    FUN_140b46820(*(undefined8 *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 140b3bde0 FUN_140b3bde0 body=44 status=ok
// SIG undefined FUN_140b3bde0(void)

void FUN_140b3bde0(longlong param_1)

{
  FUN_142238800();
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x7ac);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x7b0);
  return;
}



// FUNCTION 140b3be10 FUN_140b3be10 body=94 status=ok
// SIG undefined FUN_140b3be10(void)

void FUN_140b3be10(long param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (param_2 != 0) {
    lVar2 = FUN_14149b100();
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
      FUN_14127e590(param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 140b3be70 FUN_140b3be70 body=454 status=ok
// SIG undefined FUN_140b3be70(void)

void FUN_140b3be70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_res18 [2];
  int local_28;
  int local_24;
  longlong local_20;
  
  if (param_2 != 0) {
    plVar10 = (longlong *)(param_1 + 0x4c8);
    plVar11 = (longlong *)*plVar10;
    iVar2 = *(int *)(param_1 + 0x4d0);
    plVar1 = plVar11 + iVar2;
    for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
      if (*plVar11 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0x4d0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x4d4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10);
    }
    *(longlong *)((longlong)iVar2 * 8 + *plVar10) = param_2;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UInventoryShopComponent::HandleActorDestroyed",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(local_res18,pwVar4 + 2,1);
    plVar10 = (longlong *)(param_2 + 0x290);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    piVar8 = (int *)*plVar10;
    iVar2 = *(int *)(param_2 + 0x298);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_20)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b3c01d;
        break;
      }
    }
    iVar2 = *(int *)(param_2 + 0x298);
    *(int *)(param_2 + 0x298) = iVar2 + 1;
    if (*(int *)(param_2 + 0x29c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
    }
    piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar10);
    *piVar8 = local_28;
    piVar8[1] = local_24;
    *(longlong *)(piVar8 + 2) = local_20;
LAB_140b3c01d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  }
  return;
}



// FUNCTION 140b3c040 FUN_140b3c040 body=442 status=ok
// SIG undefined FUN_140b3c040(void)

void FUN_140b3c040(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((((*(char *)(param_1 + 0x128) == '\x03') && (param_2 != 0)) && (param_3 != 0)) &&
     (*(longlong *)(param_3 + 0x110) != 0)) {
    plVar1 = (longlong *)(param_1 + 0x580);
    plVar8 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x588);
    plVar7 = plVar8 + (longlong)iVar2 * 4;
    for (; plVar8 != plVar7; plVar8 = plVar8 + 4) {
      if (*plVar8 == param_3) goto LAB_140b3c145;
    }
    *(int *)(param_1 + 0x588) = iVar2 + 1;
    if (*(int *)(param_1 + 0x58c) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1);
    }
    lVar4 = 0;
    plVar8 = (longlong *)(*plVar1 + (longlong)iVar2 * 0x20);
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = param_3;
    lVar3 = GetTransientPackage();
    lVar5 = *(longlong *)(param_3 + 0x110);
    if (lVar5 != 0) {
      if ((lVar3 + 1U & 0xfffffffffffffffe) == 0) {
        lVar3 = GetTransientPackage();
      }
      lVar4 = FUN_1417987a0(lVar5,lVar3,0,0xefffffff,0,0,0xff800000);
    }
    plVar8[1] = lVar4;
LAB_140b3c145:
    plVar7 = (longlong *)plVar8[2];
    iVar2 = (int)plVar8[3];
    plVar1 = plVar7 + iVar2;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_2) {
        return;
      }
    }
    *(int *)(plVar8 + 3) = iVar2 + 1;
    if (*(int *)((longlong)plVar8 + 0x1c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8 + 2);
    }
    *(longlong *)((longlong)iVar2 * 8 + plVar8[2]) = param_2;
    if (*(char *)(param_3 + 0x118) == '\0') {
      lVar5 = (**(code **)(*(longlong *)(param_2 + 0x8e0) + 0x10))(param_2 + 0x8e0);
      if (lVar5 != 0) {
        uVar6 = (**(code **)(*(longlong *)(param_2 + 0x8e0) + 0x10))(param_2 + 0x8e0);
        FUN_142d26430(uVar6,plVar8[1]);
      }
    }
    else if ((*(char *)(param_3 + 0x118) == '\x01') && (*(longlong *)(param_2 + 0xe78) != 0)) {
      FUN_142d26430(*(longlong *)(param_2 + 0xe78),plVar8[1]);
    }
  }
  return;
}



// FUNCTION 140b3c200 FUN_140b3c200 body=465 status=ok
// SIG undefined FUN_140b3c200(void)

void FUN_140b3c200(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  int local_38;
  int local_34;
  longlong local_30;
  
  if (((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0xe80), lVar2 != 0)) &&
     (local_res10 = param_2, cVar5 = FUN_140a8e500(lVar2), cVar5 == '\0')) {
    FUN_140a95900(lVar2,*(undefined8 *)(param_1 + 0x590),param_1,0);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnWeaponShotModified",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res20,pwVar4 + 2,1);
    plVar10 = (longlong *)(lVar2 + 0x308);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res20;
    local_res18 = 0;
    if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_30);
    }
    piVar8 = (int *)*plVar10;
    iVar1 = *(int *)(lVar2 + 0x310);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_30)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b3c39d;
        break;
      }
    }
    iVar1 = *(int *)(lVar2 + 0x310);
    *(int *)(lVar2 + 0x310) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x314) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
    *piVar8 = local_38;
    piVar8[1] = local_34;
    *(longlong *)(piVar8 + 2) = local_30;
LAB_140b3c39d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x570,&local_res10);
  }
  return;
}



// FUNCTION 140b3c3e0 FUN_140b3c3e0 body=169 status=ok
// SIG undefined FUN_140b3c3e0(void)

void FUN_140b3c3e0(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_18;
  int local_10;
  
  local_10 = *(int *)(param_1 + 0x720);
  lVar1 = (longlong)local_10;
  puVar3 = (undefined8 *)0x0;
  _Src = *(void **)(param_1 + 0x718);
  local_18 = (undefined8 *)0x0;
  if (local_10 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    puVar3 = local_18;
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 << 4);
  }
  lVar1 = (longlong)local_10;
  for (puVar2 = puVar3; puVar2 != puVar3 + lVar1 * 2; puVar2 = puVar2 + 2) {
    FUN_140b3d440(param_1,*puVar2,1);
  }
  if (puVar3 != (undefined8 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 140b3c490 FUN_140b3c490 body=197 status=ok
// SIG undefined FUN_140b3c490(void)

void FUN_140b3c490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  plVar3 = (longlong *)(param_1 + 0x560);
  lVar7 = *plVar3;
  uVar9 = (ulonglong)*(int *)(param_1 + 0x568);
  lVar4 = lVar7 + uVar9 * 0x28;
  if (lVar7 != lVar4) {
    do {
      FUN_142ca96a0(lVar7 + 8);
      lVar7 = lVar7 + 0x28;
    } while (lVar7 != lVar4);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x568);
  }
  if ((int)uVar9 != 0) {
    plVar10 = (longlong *)(*plVar3 + 0x10);
    do {
      plVar6 = (longlong *)*plVar10;
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
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      plVar10 = plVar10 + 5;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x568) = 0;
  if (*(int *)(param_1 + 0x56c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (plVar3,0);
  }
  return;
}



// FUNCTION 140b3c560 FUN_140b3c560 body=390 status=ok
// SIG undefined FUN_140b3c560(void)

void FUN_140b3c560(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar1 = (longlong *)(param_1 + 0x580);
    lVar6 = *plVar1;
    uVar8 = (ulonglong)*(int *)(param_1 + 0x588);
    lVar10 = uVar8 * 0x20 + lVar6;
    if (lVar6 != lVar10) {
      puVar11 = (undefined8 *)0x0;
      do {
        local_30 = *(int *)(lVar6 + 0x18);
        lVar2 = (longlong)local_30;
        _Src = *(void **)(lVar6 + 0x10);
        local_38 = (undefined8 *)0x0;
        if (local_30 == 0) {
          local_2c = 0;
          puVar12 = puVar11;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_38,local_30,0);
          puVar12 = local_38;
          _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar2 << 3);
        }
        puVar5 = (undefined8 *)
                 ((ulonglong)((longlong)(puVar12 + local_30) + (7 - (longlong)puVar12)) >> 3);
        if (puVar12 + local_30 < puVar12) {
          puVar5 = puVar11;
        }
        puVar3 = puVar12;
        puVar9 = puVar11;
        if (puVar5 != (undefined8 *)0x0) {
          do {
            FUN_140b46510(param_1,*puVar3);
            puVar9 = (undefined8 *)((longlong)puVar9 + 1);
            puVar3 = puVar3 + 1;
          } while (puVar9 != puVar5);
        }
        if (puVar12 != (undefined8 *)0x0) {
          FMemory::Free(puVar12);
        }
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != lVar10);
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x588);
    }
    if ((int)uVar8 != 0) {
      plVar4 = (longlong *)(*plVar1 + 0x10);
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 4;
        uVar7 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x588) = 0;
    if (*(int *)(param_1 + 0x58c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
  }
  return;
}



// FUNCTION 140b3c6f0 FUN_140b3c6f0 body=274 status=ok
// SIG undefined FUN_140b3c6f0(void)

void FUN_140b3c6f0(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_28;
  int local_20;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar1 = *(longlong **)(param_1 + 0x580);
    plVar5 = plVar1 + (longlong)*(int *)(param_1 + 0x588) * 4;
    if (plVar1 != plVar5) {
      while (*plVar1 != param_2) {
        plVar1 = plVar1 + 4;
        if (plVar1 == plVar5) {
          return;
        }
      }
      puVar2 = (undefined8 *)0x0;
      local_20 = (int)plVar1[3];
      lVar3 = (longlong)local_20;
      _Src = (void *)plVar1[2];
      local_28 = (undefined8 *)0x0;
      puVar6 = puVar2;
      if (local_20 != 0) {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
        puVar6 = local_28;
        _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar3 << 3);
      }
      puVar7 = (undefined8 *)
               ((ulonglong)((longlong)(puVar6 + local_20) + (7 - (longlong)puVar6)) >> 3);
      if (puVar6 + local_20 < puVar6) {
        puVar7 = puVar2;
      }
      puVar4 = puVar6;
      if (puVar7 != (undefined8 *)0x0) {
        do {
          FUN_140b46510(param_1,*puVar4,param_2);
          puVar2 = (undefined8 *)((longlong)puVar2 + 1);
          puVar4 = puVar4 + 1;
        } while (puVar2 != puVar7);
      }
      if (puVar6 != (undefined8 *)0x0) {
        FMemory::Free(puVar6);
      }
    }
  }
  return;
}



// FUNCTION 140b3c810 FUN_140b3c810 body=338 status=ok
// SIG undefined FUN_140b3c810(void)

void FUN_140b3c810(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  puVar1 = (ulonglong *)(param_1 + 0x570);
  plVar7 = (longlong *)*puVar1;
  pwVar8 = (wchar_t *)0x0;
  pwVar9 = (wchar_t *)((longlong)*(int *)(param_1 + 0x578) & 0x1fffffffffffffff);
  if (plVar7 + *(int *)(param_1 + 0x578) < plVar7) {
    pwVar9 = pwVar8;
  }
  pwVar6 = pwVar8;
  if (pwVar9 != (wchar_t *)0x0) {
    do {
      local_res10 = *plVar7;
      if ((local_res10 != 0) && (lVar2 = *(longlong *)(local_res10 + 0xe80), lVar2 != 0)) {
        FUN_140a9b1e0(lVar2,*(undefined8 *)(param_1 + 0x590),0);
        pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnWeaponShotModified",L"::");
        pwVar4 = pwVar8;
        while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(local_res8,pwVar4 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x308,param_1);
        TArray<FName,FDefaultAllocator>::Remove(puVar1,&local_res10);
      }
      plVar7 = plVar7 + 1;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
    } while (pwVar6 != pwVar9);
  }
  *(undefined4 *)(param_1 + 0x578) = 0;
  if (*(int *)(param_1 + 0x57c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 140b3c970 FUN_140b3c970 body=229 status=ok
// SIG undefined FUN_140b3c970(void)

void FUN_140b3c970(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x38 + (longlong)param_2 * 0x60);
    iVar3 = param_3;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar2 + -3);
      plVar2 = plVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar1 * 0x60);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140b3ca60 FUN_140b3ca60 body=260 status=ok
// SIG undefined FUN_140b3ca60(void)

void FUN_140b3ca60(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28);
    iVar6 = param_3;
    do {
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
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (param_3 <= iVar5) {
      iVar5 = param_3;
    }
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x28),
                 (void *)(*param_1 + (longlong)(iVar6 - iVar5) * 0x28),(longlong)iVar5 * 0x28);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140b3cb70 FUN_140b3cb70 body=336 status=ok
// SIG undefined FUN_140b3cb70(void)

void FUN_140b3cb70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x780);
    plVar8 = (longlong *)*plVar1;
    plVar2 = plVar8 + *(int *)(param_1 + 0x788);
    if (plVar8 != plVar2) {
      while ((plVar4 = (longlong *)*plVar8, plVar4 == (longlong *)0x0 || (plVar4[0xde] != param_2)))
      {
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar2) {
          return;
        }
      }
      FUN_142600fa0(plVar4);
      if (plVar4 != (longlong *)0x0) {
        iVar3 = *(int *)(param_1 + 0x788);
        uVar9 = 0;
        iVar7 = iVar3;
        if (0 < iVar3) {
          uVar11 = uVar9;
          do {
            iVar10 = (int)uVar11;
            lVar5 = *plVar1;
            if (*(longlong **)(uVar9 + lVar5) == plVar4) {
              iVar6 = (iVar7 - iVar10) + -1;
              if (0 < iVar6) {
                iVar6 = 1;
              }
              if (iVar6 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar5 + (longlong)iVar10 * 8),
                           (void *)(lVar5 + (longlong)(iVar7 - iVar6) * 8),(longlong)iVar6 << 3);
                iVar7 = *(int *)(param_1 + 0x788);
              }
              *(int *)(param_1 + 0x788) = iVar7 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
              iVar7 = *(int *)(param_1 + 0x788);
              iVar10 = iVar10 + -1;
              uVar9 = uVar9 - 8;
            }
            uVar11 = (ulonglong)(iVar10 + 1U);
            uVar9 = uVar9 + 8;
          } while ((int)(iVar10 + 1U) < iVar7);
        }
        if (iVar3 != iVar7) {
          if (*(char *)((longlong)plVar4 + 0x71c) == '\x02') {
            FUN_14260b180();
            return;
          }
          (**(code **)(*plVar4 + 0x3b0))(plVar4,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b3ccc0 FUN_140b3ccc0 body=476 status=ok
// SIG undefined FUN_140b3ccc0(void)

void FUN_140b3ccc0(longlong param_1,char param_2,char param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  lVar4 = *(longlong *)(param_1 + 0x790);
  if (lVar4 != 0) {
    if (((0 < *(int *)(param_1 + 0x7a0)) &&
        (*(longlong *)
          (*(longlong *)(param_1 + 0x798) + -0x10 + (longlong)*(int *)(param_1 + 0x7a0) * 0x10) ==
         param_4)) || (param_3 != '\0')) {
      if (param_2 == '\0') {
        *(byte *)(lVar4 + 0x71a) = *(byte *)(lVar4 + 0x71a) & 0xbf;
        lVar4 = *(longlong *)(param_1 + 0x790);
      }
      FUN_142600fa0(lVar4);
      if (param_2 != '\0') {
        FUN_140b3d130(param_1,*(undefined8 *)(param_1 + 0x790));
        *(undefined8 *)(param_1 + 0x790) = 0;
      }
    }
    lVar4 = (longlong)*(int *)(param_1 + 0x7a0);
    iVar9 = 0;
    if (*(int *)(param_1 + 0x7a0) != 0) {
      iVar9 = 0;
      bVar10 = **(longlong **)(param_1 + 0x798) != param_4;
      lVar8 = 0;
      iVar6 = 0;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar6 + 1;
        if (lVar8 < lVar4) {
          plVar5 = (longlong *)(lVar8 * 0x10 + *(longlong *)(param_1 + 0x798));
          do {
            if (bVar10 != (*plVar5 != param_4)) break;
            iVar7 = iVar7 + 1;
            lVar8 = lVar8 + 1;
            plVar5 = plVar5 + 2;
          } while (lVar8 < lVar4);
        }
        if (bVar10 != false) {
          if (iVar9 != iVar6) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x798)),
                       (void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x798)),
                       (longlong)(iVar7 - iVar6) << 4);
          }
          iVar9 = iVar9 + (iVar7 - iVar6);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar6 = iVar7;
      } while (lVar8 < lVar4);
      *(int *)(param_1 + 0x7a0) = iVar9;
    }
    if ((param_3 == '\0') && (0 < *(int *)(param_1 + 0x7a0))) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x798) + -8 + (longlong)iVar9 * 0x10);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x798) + -0x10 + (longlong)iVar9 * 0x10);
      if (lVar4 != 0) {
        puVar2 = (undefined8 *)FName::FName(local_res8,&DAT_14428d9ec,1);
        uVar3 = FUN_140b1a100(param_1,lVar4,*puVar2,0);
        FUN_140b3fd40(param_1,uVar3,uVar1);
      }
    }
  }
  return;
}



// FUNCTION 140b3cea0 FUN_140b3cea0 body=216 status=ok
// SIG undefined FUN_140b3cea0(void)

void FUN_140b3cea0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_res8;
  
  plVar4 = *(longlong **)(param_1 + 0x4b8);
  plVar1 = plVar4 + *(int *)(param_1 + 0x4c0);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    plVar5 = (longlong *)*plVar4;
    if (plVar5 != (longlong *)0x0) {
      uVar2 = FUN_14142bde0();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if ((lVar3 != 0) &&
         ((*(char *)(lVar3 + 0x348) == '\0' || (lVar3 = FUN_140b2ab40(lVar3), lVar3 == param_2))))
      goto LAB_140b3cf18;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140b3cf18:
  if (plVar5 != (longlong *)0x0) {
    local_res8 = plVar5;
    FUN_140b3eca0(param_1,plVar5);
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x4b8,&local_res8);
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x2c0);
    if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x600))();
    }
  }
  return;
}



// FUNCTION 140b3cf80 FUN_140b3cf80 body=428 status=ok
// SIG undefined FUN_140b3cf80(void)

void FUN_140b3cf80(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar10 = (longlong *)0x0;
    plVar1 = (longlong *)(param_1 + 0x560);
    plVar8 = (longlong *)*plVar1;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    plVar11 = plVar8 + (longlong)*(int *)(param_1 + 0x568) * 5;
    uVar3 = local_30;
    for (; local_30._0_4_ = (int)uVar3, plVar8 != plVar11; plVar8 = plVar8 + 5) {
      lVar4 = *plVar8;
      if (((lVar4 == param_2) && (plVar8[3] == param_3)) && ((char)plVar8[4] == param_4)) {
        lVar9 = (longlong)(int)local_30;
        local_30._0_4_ = (int)local_30 + 1;
        local_30._4_4_ = (int)(uVar3 >> 0x20);
        if (local_30._4_4_ < (int)local_30) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_38,uVar3 & 0xffffffff);
          lVar4 = *plVar8;
          plVar10 = local_38;
        }
        plVar2 = plVar10 + lVar9 * 5;
        *plVar2 = lVar4;
        plVar2[1] = plVar8[1];
        lVar4 = plVar8[2];
        plVar2[2] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
          plVar10 = local_38;
        }
        plVar2[3] = plVar8[3];
        *(char *)(plVar2 + 4) = (char)plVar8[4];
        FUN_142ca96a0();
        uVar3 = local_30;
      }
      local_30 = uVar3;
      uVar3 = local_30;
    }
    lVar4 = (longlong)(int)local_30;
    local_30 = uVar3;
    if (plVar10 != plVar10 + lVar4 * 5) {
      plVar11 = plVar10 + 3;
      do {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x568)) {
          lVar9 = 0;
          do {
            plVar8 = (longlong *)(*plVar1 + lVar9);
            if (*plVar8 == plVar11[-3]) {
              lVar5 = FUN_142c9feb0(plVar11 + -2);
              lVar6 = FUN_142c9feb0(plVar8 + 1);
              if (((lVar6 == lVar5) && (plVar8[3] == *plVar11)) &&
                 ((char)plVar8[4] == (char)plVar11[1])) {
                FUN_140b3ca60(plVar1,iVar7,1,1);
                iVar7 = iVar7 + -1;
                lVar9 = lVar9 + -0x28;
              }
            }
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 0x28;
          } while (iVar7 < *(int *)(param_1 + 0x568));
        }
        plVar8 = plVar11 + 2;
        plVar11 = plVar11 + 5;
      } while (plVar8 != plVar10 + lVar4 * 5);
    }
    FUN_140676620(&local_38);
  }
  return;
}



// FUNCTION 140b3d130 FUN_140b3d130 body=232 status=ok
// SIG undefined FUN_140b3d130(void)

void FUN_140b3d130(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_2 != (longlong *)0x0) {
    iVar5 = 0;
    iVar1 = *(int *)(param_1 + 0x788);
    iVar4 = iVar1;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x780);
        if (*(longlong **)(lVar6 + lVar2) == param_2) {
          iVar3 = (iVar4 - iVar5) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + (longlong)iVar5 * 8),
                       (void *)(lVar2 + (longlong)(iVar4 - iVar3) * 8),(longlong)iVar3 << 3);
            iVar4 = *(int *)(param_1 + 0x788);
          }
          *(int *)(param_1 + 0x788) = iVar4 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x780));
          iVar4 = *(int *)(param_1 + 0x788);
          iVar5 = iVar5 + -1;
          lVar6 = lVar6 + -8;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar5 < iVar4);
    }
    if (iVar1 != iVar4) {
      if (*(char *)((longlong)param_2 + 0x71c) == '\x02') {
        FUN_14260b180();
        return;
      }
      (**(code **)(*param_2 + 0x3b0))(param_2,0);
    }
  }
  return;
}



// FUNCTION 140b3d220 FUN_140b3d220 body=531 status=ok
// SIG undefined FUN_140b3d220(void)

void FUN_140b3d220(longlong param_1)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong local_res8;
  longlong *local_48;
  int local_40;
  
  if (0 < *(int *)(param_1 + 0x730)) {
    local_40 = *(int *)(param_1 + 0x730);
    lVar6 = (longlong)local_40;
    _Src = *(void **)(param_1 + 0x728);
    local_48 = (longlong *)0x0;
    if (local_40 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40);
      _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar6 << 3);
    }
    local_res8 = 0;
    uVar5 = (ulonglong)((longlong)(local_48 + local_40) + (7 - (longlong)local_48)) >> 3;
    if (local_48 + local_40 < local_48) {
      uVar5 = 0;
    }
    plVar2 = local_48;
    if (uVar5 != 0) {
      do {
        uVar7 = 0;
        lVar6 = *plVar2;
        if ((lVar6 == 0) || (cVar1 = FUN_142390930(param_1,lVar6), cVar1 != '\0')) {
          lVar3 = (longlong)*(int *)(param_1 + 0x730);
          if (*(int *)(param_1 + 0x730) != 0) {
            bVar13 = **(longlong **)(param_1 + 0x728) != lVar6;
            uVar10 = uVar7;
            uVar12 = uVar7;
            do {
              iVar9 = (int)uVar10;
              uVar7 = uVar7 + 1;
              uVar10 = (ulonglong)(iVar9 + 1);
              if ((longlong)uVar7 < lVar3) {
                plVar4 = (longlong *)(*(longlong *)(param_1 + 0x728) + uVar7 * 8);
                do {
                  if (bVar13 != (*plVar4 != lVar6)) break;
                  uVar10 = (ulonglong)((int)uVar10 + 1);
                  uVar7 = uVar7 + 1;
                  plVar4 = plVar4 + 1;
                } while ((longlong)uVar7 < lVar3);
              }
              iVar8 = (int)uVar10 - iVar9;
              if (bVar13 != false) {
                iVar11 = (int)uVar12;
                if (iVar11 != iVar9) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar11 * 8),
                             (void *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar9 * 8),
                             (longlong)iVar8 << 3);
                }
                uVar12 = (ulonglong)(uint)(iVar11 + iVar8);
              }
              bVar13 = (bool)(bVar13 ^ 1);
            } while ((longlong)uVar7 < lVar3);
            *(int *)(param_1 + 0x730) = (int)uVar12;
          }
        }
        else {
          FUN_140b3d440(param_1,lVar6,1);
        }
        local_res8 = local_res8 + 1;
        plVar2 = plVar2 + 1;
      } while (local_res8 != uVar5);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
      return;
    }
  }
  return;
}



// FUNCTION 140b3d440 FUN_140b3d440 body=437 status=ok
// SIG undefined FUN_140b3d440(void)

void FUN_140b3d440(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong local_res10;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x718);
    plVar5 = (longlong *)*plVar1;
    plVar8 = plVar5 + (longlong)*(int *)(param_1 + 0x720) * 2;
    if (plVar5 != plVar8) {
      while (param_2 != *plVar5) {
        plVar5 = plVar5 + 2;
        if (plVar5 == plVar8) {
          return;
        }
      }
      local_res10 = param_2;
      if (param_3 == '\0') {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x728,&local_res10);
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x728);
        for (plVar8 = plVar5; plVar8 != plVar5 + *(int *)(param_1 + 0x730); plVar8 = plVar8 + 1) {
          if (*plVar8 == param_2) {
            iVar7 = (int)((longlong)plVar8 - (longlong)plVar5 >> 3);
            if (iVar7 != -1) {
              _guard_xfg_dispatch_icall_nop
                        (plVar5 + iVar7,plVar5 + iVar7 + 1,
                         (longlong)((*(int *)(param_1 + 0x730) - iVar7) + -1) << 3);
              *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + -1;
            }
            break;
          }
        }
        iVar7 = *(int *)(param_1 + 0x720);
        iVar9 = 0;
        if (0 < iVar7) {
          lVar10 = 0;
          do {
            lVar2 = *plVar1;
            if (param_2 == *(longlong *)(lVar10 + lVar2)) {
              iVar4 = (iVar7 - iVar9) + -1;
              if (0 < iVar4) {
                iVar4 = 1;
              }
              if (iVar4 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar9 * 0x10 + lVar2),
                           (void *)((longlong)(iVar7 - iVar4) * 0x10 + lVar2),(longlong)iVar4 << 4);
                iVar7 = *(int *)(param_1 + 0x720);
              }
              *(int *)(param_1 + 0x720) = iVar7 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
              iVar7 = *(int *)(param_1 + 0x720);
              iVar9 = iVar9 + -1;
              lVar10 = lVar10 + -0x10;
            }
            iVar9 = iVar9 + 1;
            lVar10 = lVar10 + 0x10;
          } while (iVar9 < iVar7);
        }
        if (*(longlong *)(param_1 + 0x748) != 0) {
          FUN_1430890e0(*(longlong *)(param_1 + 0x748),param_2);
        }
        uVar6 = UCurveSourceInterface::GetPrivateStaticClass();
        cVar3 = UClass::ImplementsInterface(*(undefined8 *)(param_2 + 0x10),uVar6);
        if (cVar3 != '\0') {
          FUN_1414c3f00(param_2,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b3d600 FUN_140b3d600 body=412 status=ok
// SIG undefined FUN_140b3d600(void)

void FUN_140b3d600(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 local_res20 [8];
  longlong *local_18;
  longlong *local_10;
  
  if (param_3 == '\0') {
    if ((*(longlong *)(param_1 + 0x498) == param_2) && (*(char *)(param_1 + 0x4b0) == '\x02')) {
      return;
    }
    if ((*(longlong *)(param_1 + 0x4a0) == param_2) && (*(char *)(param_1 + 0x4b0) != '\x02')) {
      return;
    }
  }
  *(longlong *)(param_1 + 0x498) = param_2;
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    bVar8 = false;
    if ((*(longlong *)(param_1 + 0x4a0) != 0) && (cVar4 = FUN_140b40ea0(param_1), cVar4 == '\0')) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar7 = *(longlong *)(DAT_146b33f38 + 0x58);
      if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0x5e8), lVar6 != 0)) {
        lVar5 = USafeZone::GetPrivateStaticClass();
        do {
          if (lVar6 == lVar5) {
            lVar7 = *(longlong *)(lVar7 + 0x5e8);
            if (lVar7 == 0) goto LAB_140b3d6f5;
            lVar5 = USafeZone::GetPrivateStaticClass();
            lVar6 = lVar7;
            goto LAB_140b3d6e7;
          }
          lVar6 = *(longlong *)(lVar6 + 0x30);
        } while (lVar6 != 0);
      }
    }
    goto LAB_140b3d77f;
  }
  bVar8 = *(char *)(param_1 + 0x4b0) == '\x01';
  goto LAB_140b3d77d;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_140b3d6e7:
    if (lVar6 == lVar5) goto LAB_140b3d6f7;
  }
LAB_140b3d6f5:
  lVar7 = 0;
LAB_140b3d6f7:
  FUN_140b3b860(param_1,&local_18,lVar7);
  if ((local_18 != (longlong *)0x0) && (cVar4 = (**(code **)(*local_18 + 0x38))(), cVar4 == '\0')) {
    FUN_140b12d60(local_18 + 0xb,local_res20,param_1,&LAB_140b33310);
    *(undefined1 *)(param_1 + 0x4b0) = 2;
    bVar8 = true;
  }
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
  bVar8 = !bVar8;
LAB_140b3d77d:
  if (!bVar8) {
    return;
  }
LAB_140b3d77f:
  FUN_140b20a00(param_1);
  return;
}



// FUNCTION 140b3d7a0 FUN_140b3d7a0 body=376 status=ok
// SIG undefined FUN_140b3d7a0(void)

void FUN_140b3d7a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 << 6;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x40;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 140b3d920 FUN_140b3d920 body=202 status=ok
// SIG undefined FUN_140b3d920(void)

void FUN_140b3d920(longlong *param_1,int param_2)

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
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar2 + -3);
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
      plVar2 = (longlong *)(*param_1 + 0x38);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar2 + -3);
        plVar2 = plVar2 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140b3d9f0 FUN_140b3d9f0 body=99 status=ok
// SIG undefined FUN_140b3d9f0(void)

void FUN_140b3d9f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x765) = 0;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0xed);
    param_1[0xed] = 0;
  }
  return;
}



// FUNCTION 140b3da60 FUN_140b3da60 body=328 status=ok
// SIG undefined FUN_140b3da60(void)

void FUN_140b3da60(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  FUN_142d6d6a0();
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_142d6f9d0(param_1,1);
    FUN_140b46ba0(param_1);
    if (*(longlong *)(param_1 + 0x208) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1dc) = 0;
    }
    if (*(longlong *)(param_1 + 0x228) == 0) {
      uVar2 = AUGDoor::GetPrivateStaticClass();
      lVar3 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x118),uVar2);
      if (lVar3 != 0) {
        lVar4 = AUGDoor::GetPrivateStaticClass();
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
          if (*(longlong *)(param_1 + 0x270) != 0) {
            FUN_1405a3150(lVar3,local_28,*(longlong *)(param_1 + 0x270),0);
            FUN_140591060(local_28);
          }
          if (*(longlong *)(param_1 + 0x268) != 0) {
            FUN_1405acbd0(lVar3);
          }
        }
      }
    }
    else {
      if ((*(longlong *)(param_1 + 0x270) != 0) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 0x748), lVar3 != 0)) {
        FUN_1405a3150(lVar3,local_28,*(longlong *)(param_1 + 0x270),0);
        FUN_140591060(local_28);
      }
      if ((*(longlong *)(param_1 + 0x268) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x228) + 0x748) != 0)) {
        FUN_1405acbd0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b3dbb0 FUN_140b3dbb0 body=342 status=ok
// SIG undefined FUN_140b3dbb0(void)

void FUN_140b3dbb0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_18;
  int local_10;
  
  iVar3 = FUN_14233f450();
  if ((iVar3 == 3) &&
     (((lVar4 = param_1[0x24], lVar4 != 0 || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)) &&
      (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 != 0)))) {
    (**(code **)(*param_1 + 0x4a8))(param_1,1);
    iVar3 = FUN_14233f450(param_1);
    if (iVar3 == 3) {
      uVar5 = FUN_140b823d0(param_1);
      FUN_140b461a0(param_1,uVar5,1);
      if (((param_1[0x24] != 0) || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)) &&
         (cVar2 = FUN_140b81c70(param_1), cVar2 == '\x01')) {
        lVar4 = param_1[0x24];
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(param_1);
        }
        UWorld::GetPlayerControllerIterator(lVar4,&local_18);
        while( true ) {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          lVar4 = FWeakObjectPtr::Get();
          if (lVar4 != 0) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_140b461a0(param_1,lVar4,0);
            }
          }
          local_10 = local_10 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 140b3dd10 FUN_140b3dd10 body=302 status=ok
// SIG undefined FUN_140b3dd10(void)

void FUN_140b3dd10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  void *_Src;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  int local_20;
  
  (**(code **)(*param_1 + 0x4a8))(param_1,1);
  bVar2 = false;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar1 != 0) {
    plVar3 = (longlong *)0x0;
    local_20 = *(int *)(lVar1 + 0x318);
    lVar5 = (longlong)local_20;
    _Src = *(void **)(lVar1 + 0x310);
    local_28 = (longlong *)0x0;
    plVar7 = plVar3;
    if (local_20 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
      plVar7 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 << 3);
    }
    if (0 < local_20) {
      plVar4 = (longlong *)
               ((ulonglong)((longlong)(plVar7 + local_20) + (7 - (longlong)plVar7)) >> 3);
      if (plVar7 + local_20 < plVar7) {
        plVar4 = plVar3;
      }
      plVar6 = plVar7;
      if (plVar4 != (longlong *)0x0) {
        do {
          FUN_142fe3940(param_1,*plVar6,*plVar6 == param_2);
          plVar3 = (longlong *)((longlong)plVar3 + 1);
          plVar6 = plVar6 + 1;
        } while (plVar3 != plVar4);
      }
      bVar2 = true;
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
    if (bVar2) {
      return;
    }
  }
  if (param_2 != 0) {
    FUN_142fe3940(param_1,param_2,1);
  }
  return;
}



// FUNCTION 140b3de40 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPrimitiveSceneInfo_*,TInlineAllocator<10,TSizedDefaultAllocator<32>_>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x58);
  if (uVar1 < 0xb) {
    uVar2 = 10;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x5c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x5c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x50);
  if (uVar2 < 0xb) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x50);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x50) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar5;
  return;
}



// FUNCTION 140b3df30 ResizeShrink body=144 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar2 < 5) {
    uVar2 = 4;
    goto LAB_140b3df99;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 3)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 3,0);
        uVar3 = *(uint *)(param_1 + 0x2c);
        uVar2 = (uint)(uVar1 >> 3);
      }
      goto LAB_140b3df99;
    }
    if (uVar2 == 0) goto LAB_140b3df99;
  }
  uVar2 = uVar3;
LAB_140b3df99:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    FUN_140717c90(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 140b3dfc0 FUN_140b3dfc0 body=1609 status=ok
// SIG undefined FUN_140b3dfc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b3dfc0(longlong param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined1 local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  longlong *local_1f8;
  undefined8 **local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined1 local_16f;
  undefined8 local_168;
  longlong local_160;
  undefined1 local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  undefined1 local_138 [32];
  undefined1 local_118 [24];
  longlong local_100;
  longlong local_f0;
  undefined2 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  if (param_2 != 0) {
    local_68 = DAT_1468387a8 ^ (ulonglong)auStack_278;
    local_140 = param_3;
    iVar3 = FUN_14233f450();
    if (2 < iVar3) {
      uVar5 = FUN_142ff7010(param_1);
      local_208 = uVar5;
      uVar4 = FUN_142ff8b70(param_1);
      local_238 = uVar4;
      if (*(longlong *)(param_2 + 8) != 0) {
        lVar6 = UAnimNotifyState::GetPrivateStaticClass();
        lVar10 = *(longlong *)(param_2 + 8);
        for (lVar12 = lVar10; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
          if (lVar12 == lVar6) {
            if (lVar10 != 0) goto LAB_140b3e086;
            break;
          }
        }
      }
      plVar7 = (longlong *)FUN_142ff8780(param_1,&local_200);
      lVar10 = *plVar7;
LAB_140b3e086:
      local_148 = FUN_140b823d0(param_1);
      local_218 = FUN_140b81ea0(local_148,uVar4);
      lVar12 = *(longlong *)(param_2 + 0x48);
      local_228 = (undefined8 *)0x0;
      local_200 = (longlong)*(int *)(param_2 + 0x50) * 0x58 + lVar12;
      local_220 = 0;
      if (lVar12 != local_200) {
        do {
          cVar2 = FUN_143012ee0(lVar12,uVar5);
          if (cVar2 != '\0') {
            local_258 = &local_230;
            local_210 = 0;
            local_230 = 0;
            FUN_1430123b0(param_1,lVar12,uVar5,&local_210);
            FUN_140b3d920(&local_228,0);
            local_240 = 0;
            local_248 = 0;
            local_250 = 0;
            local_258 = (undefined8 *)lVar10;
            FUN_143013fe0(&local_228,local_210,uVar4,uVar5);
            if (0 < (int)local_220) {
              lVar6 = 0;
              if (*(longlong *)(param_1 + 0x118) != 0) {
                lVar6 = FUN_14222b250(*(longlong *)(param_1 + 0x118),local_230,0);
              }
              uVar11 = *(undefined1 *)(param_1 + 0x1b4);
              if (lVar6 != 0) {
                lVar8 = FUN_142a0cc80();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if ((bVar1) && (lVar8 = FUN_1423b0a60(lVar6), lVar8 != 0)) {
                  if ((0.0001 < ABS(*(float *)(lVar8 + 0x60))) ||
                     ((0.0001 < ABS(*(float *)(lVar8 + 100)) ||
                      (0.0001 < ABS(*(float *)(lVar8 + 0x68)))))) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (!bVar1) {
                    uVar11 = 2;
                  }
                }
              }
              cVar2 = FUN_1430035b0(*local_228);
              _guard_xfg_dispatch_icall_nop(local_138,0,0x60);
              local_d8 = local_230;
              local_e0 = 1;
              local_c0 = 0;
              local_d0 = lVar6;
              local_c8 = uVar11;
              FUN_140aa0aa0(local_138,local_228);
              plVar7 = local_140;
              local_c0 = 0;
              if (cVar2 != '\0') {
                local_c0 = local_148;
              }
              iVar3 = (int)local_140[1];
              *(int *)(local_140 + 1) = iVar3 + 1;
              if (*(int *)((longlong)local_140 + 0xc) < iVar3 + 1) {
                TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                          (local_140,iVar3);
              }
              lVar6 = (longlong)iVar3 * 0x80 + *plVar7;
              FUN_1409f3dd0(lVar6,local_138);
              *(undefined8 *)(lVar6 + 0x60) = local_d8;
              *(longlong *)(lVar6 + 0x68) = local_d0;
              *(undefined1 *)(lVar6 + 0x70) = local_c8;
              *(longlong *)(lVar6 + 0x78) = local_c0;
              if (cVar2 != '\0') {
                local_1f0 = &local_228;
                local_1f8 = plVar7;
                local_1e8 = local_218;
                local_1e4 = local_238;
                local_1e0 = local_210;
                local_1d8 = local_208;
                local_1d0 = lVar10;
                FUN_1409f3dd0(&local_1c8,local_138);
                uVar5 = local_d8;
                local_160 = local_d0;
                local_158 = local_c8;
                local_150 = local_c0;
                local_168 = local_d8;
                local_88 = (longlong *)0x0;
                local_78 = 0;
                puVar9 = (undefined8 *)FUN_140438ef0(0xb8,local_a8);
                if (puVar9 != (undefined8 *)0x0) {
                  *puVar9 = &PTR_FUN_1442ab518;
                  puVar9[4] = local_1e0;
                  puVar9[5] = local_1d8;
                  puVar9[6] = local_1d0;
                  puVar9[1] = local_1f8;
                  puVar9[2] = local_1f0;
                  *(undefined4 *)(puVar9 + 3) = local_1e8;
                  *(undefined4 *)((longlong)puVar9 + 0x1c) = local_1e4;
                  puVar9[7] = local_1c8;
                  puVar9[8] = local_1c0;
                  puVar9[9] = local_1b8;
                  *(undefined4 *)(puVar9 + 10) = local_1b0;
                  puVar9[0xb] = local_1a8;
                  *(undefined4 *)(puVar9 + 0xc) = (undefined4)local_1a0;
                  *(undefined4 *)((longlong)puVar9 + 100) = local_1a0._4_4_;
                  *(undefined1 *)(puVar9 + 0xd) = local_198;
                  puVar9[0xe] = local_190;
                  *(undefined4 *)(puVar9 + 0xf) = (undefined4)local_188;
                  *(undefined4 *)((longlong)puVar9 + 0x7c) = local_188._4_4_;
                  puVar9[0x10] = local_180;
                  *(undefined4 *)(puVar9 + 0x11) = (undefined4)local_178;
                  *(undefined4 *)((longlong)puVar9 + 0x8c) = local_178._4_4_;
                  *(undefined1 *)(puVar9 + 0x12) = local_170;
                  *(undefined1 *)((longlong)puVar9 + 0x91) = local_16f;
                  puVar9[0x14] = local_d0;
                  *(undefined1 *)(puVar9 + 0x15) = local_c8;
                  puVar9[0x16] = local_c0;
                  local_1a8 = 0;
                  local_1a0 = 0;
                  local_190 = 0;
                  local_188 = 0;
                  local_180 = 0;
                  local_178 = 0;
                  puVar9[0x13] = uVar5;
                }
                lVar8 = local_180;
                lVar6 = local_190;
                local_b8[0] = &LAB_140b1f860;
                FUN_140b7fe80(param_1,local_b8);
                if (local_78 != 0) {
                  plVar7 = local_a8;
                  if (local_88 != (longlong *)0x0) {
                    plVar7 = local_88;
                  }
                  if (plVar7 != (longlong *)0x0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7,0);
                  }
                }
                if (local_88 != (longlong *)0x0) {
                  FMemory::Free();
                }
                if (lVar8 != 0) {
                  FMemory::Free(lVar8);
                }
                if (lVar6 != 0) {
                  FMemory::Free(lVar6);
                }
                TArray<FNamedInterfaceDef,FDefaultAllocator>::
                ~TArray<FNamedInterfaceDef,FDefaultAllocator>(&local_1a8);
              }
              if (local_f0 != 0) {
                FMemory::Free();
              }
              if (local_100 != 0) {
                FMemory::Free();
              }
              TArray<FNamedInterfaceDef,FDefaultAllocator>::
              ~TArray<FNamedInterfaceDef,FDefaultAllocator>(local_118);
              uVar5 = local_208;
              uVar4 = local_238;
            }
          }
          lVar12 = lVar12 + 0x58;
        } while (lVar12 != local_200);
      }
      if ((int)local_220 != 0) {
        plVar7 = local_228 + 7;
        iVar3 = (int)local_220;
        do {
          if (plVar7[2] != 0) {
            FMemory::Free();
          }
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar7 + -3);
          plVar7 = plVar7 + 0xc;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (local_228 != (undefined8 *)0x0) {
        FMemory::Free(local_228);
      }
    }
  }
  return;
}



// FUNCTION 140b3e610 FUN_140b3e610 body=1670 status=ok
// SIG undefined FUN_140b3e610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b3e610(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float *pfVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined1 local_200;
  longlong *local_1f8;
  float *pfStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  int local_1d0 [2];
  float local_1c8 [2];
  undefined4 local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  float local_198;
  char local_194;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_150;
  undefined4 local_148;
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  float local_120;
  char local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  if (param_2 != 0) {
    local_68 = DAT_1468387a8 ^ (ulonglong)auStack_238;
    local_1d8 = param_2;
    local_1b0 = param_3;
    local_1a8 = param_1;
    iVar4 = FUN_14233f450();
    if (2 < iVar4) {
      local_1e0 = FUN_142ff7010(param_1);
      uVar5 = FUN_142ff8b70(param_1);
      plVar7 = (longlong *)(param_2 + 8);
      local_1e8 = uVar5;
      if (*(longlong *)(param_2 + 8) != 0) {
        lVar6 = UAnimNotifyState::GetPrivateStaticClass();
        for (lVar8 = *plVar7; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
          if (lVar8 == lVar6) {
            if (*plVar7 != 0) goto LAB_140b3e6e4;
            break;
          }
        }
      }
      plVar7 = (longlong *)FUN_142ff8780(param_1,&local_1b8);
LAB_140b3e6e4:
      local_1b8 = *plVar7;
      lVar8 = FUN_140b823d0(param_1);
      local_1c0 = FUN_140b81ea0(lVar8,uVar5);
      iVar4 = (int)param_3[1];
      lVar6 = (longlong)iVar4;
      *(int *)(param_3 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar4);
      }
      lVar12 = *param_3;
      *(undefined8 *)(lVar12 + lVar6 * 0x18) = 0;
      *(undefined8 *)(lVar12 + 8 + lVar6 * 0x18) = 0;
      plVar7 = (longlong *)(lVar12 + lVar6 * 0x18);
      plVar7[2] = lVar8;
      iVar4 = (int)param_3[1];
      lVar8 = (longlong)iVar4;
      *(int *)(param_3 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_3,iVar4);
      }
      lVar6 = *param_3;
      *(undefined8 *)(lVar6 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar6 + 8 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar6 + 0x10 + lVar8 * 0x18) = 0;
      plVar1 = (longlong *)(lVar6 + lVar8 * 0x18);
      pfStack_1f0 = (float *)0x0;
      lVar8 = *(longlong *)(param_2 + 0x48);
      local_1f8 = (longlong *)0x0;
      lVar6 = (longlong)*(int *)(param_2 + 0x50) * 0x58 + lVar8;
      uVar2 = local_1e0;
      for (; local_1e0 = uVar2, lVar8 != lVar6; lVar8 = lVar8 + 0x58) {
        cVar3 = FUN_143012ee0(lVar8,uVar2);
        if (cVar3 != '\0') {
          FUN_140b3d920(&local_1f8,0);
          uVar9 = FHardwareCursor::GetHandle(lVar8);
          local_200 = 0;
          local_208 = 0;
          local_210 = 0;
          local_218 = local_1b8;
          FUN_143013fe0(&local_1f8,uVar9,local_1e8,uVar2);
          plVar15 = local_1f8 + (longlong)(int)pfStack_1f0 * 0xc;
          for (plVar14 = local_1f8; plVar14 != plVar15; plVar14 = plVar14 + 0xc) {
            cVar3 = FUN_1430035b0(*plVar14);
            if (cVar3 == '\0') {
              iVar4 = (int)plVar1[1];
              *(int *)(plVar1 + 1) = iVar4 + 1;
              if (*(int *)((longlong)plVar1 + 0xc) < iVar4 + 1) {
                TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
              }
              lVar12 = (longlong)iVar4 * 0x60 + *plVar1;
            }
            else {
              iVar4 = (int)plVar7[1];
              *(int *)(plVar7 + 1) = iVar4 + 1;
              if (*(int *)((longlong)plVar7 + 0xc) < iVar4 + 1) {
                TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar7,iVar4);
              }
              lVar12 = (longlong)iVar4 * 0x60 + *plVar7;
            }
            FUN_1409f3dd0(lVar12,plVar14);
          }
        }
        param_2 = local_1d8;
        uVar2 = local_1e0;
      }
      if ((int)pfStack_1f0 != 0) {
        plVar14 = local_1f8 + 7;
        iVar4 = (int)pfStack_1f0;
        do {
          if (plVar14[2] != 0) {
            FMemory::Free();
          }
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar14 + -3);
          plVar14 = plVar14 + 0xc;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (local_1f8 != (longlong *)0x0) {
        FMemory::Free(local_1f8);
      }
      local_1f8 = (longlong *)*plVar1;
      pfStack_1f0._0_4_ = (int)plVar1[1];
      AK::MemoryMgr::StartProfileThreadUsage(0x4428be18);
      local_1f8 = (longlong *)*plVar7;
      pfStack_1f0 = (float *)CONCAT44(pfStack_1f0._4_4_,(int)plVar7[1]);
      AK::MemoryMgr::StartProfileThreadUsage(0x4428bd78);
      lVar8 = plVar7[1];
      if (0 < (int)lVar8) {
        local_194 = '\0';
        local_190 = 0;
        local_198 = 0.0;
        local_188 = 0;
        local_170 = 0;
        local_168 = 0;
        local_15c = 0;
        local_150 = 0;
        local_148 = 0;
        local_160 = 0xffffffff;
        TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
        ::Empty(&local_190,*(undefined4 *)(param_2 + 0x50));
        uVar2 = local_1e0;
        lVar6 = *(longlong *)(param_2 + 0x48);
        lVar12 = (longlong)*(int *)(param_2 + 0x50) * 0x58 + lVar6;
        for (; lVar6 != lVar12; lVar6 = lVar6 + 0x58) {
          local_1d8 = FHardwareCursor::GetHandle(lVar6);
          fVar16 = (float)FUN_142fe9930(lVar6,uVar2);
          local_1c8[0] = fVar16;
          if ((1e-08 < fVar16) || (local_194 != '\0')) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(&local_190,local_1d0,local_1d8);
            pfVar13 = (float *)0x0;
            if (local_1d0[0] != -1) {
              pfVar13 = (float *)(local_190 + (longlong)local_1d0[0] * 0x18);
            }
            pfVar10 = pfVar13 + 2;
            if (pfVar13 == (float *)0x0) {
              pfVar10 = (float *)0x0;
            }
            if (pfVar10 != (float *)0x0) {
              local_198 = local_198 - *pfVar10;
            }
            local_198 = local_198 + fVar16;
            local_1f8 = &local_1d8;
            pfStack_1f0 = local_1c8;
            TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                      (&local_190,&local_1e0,&local_1f8,0);
          }
        }
        local_118 = 0;
        local_110 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0xffffffff;
        local_e4 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_138 = local_1b0;
        local_130 = local_1c0;
        local_12c = local_1e8;
        local_128 = (int)lVar8;
        local_120 = local_198;
        local_11c = local_194;
        TSet<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>,TDefaultMapHashableKeyFuncs<INavLinkCustomInterface_*,FWeakObjectPtr,0>,FDefaultSetAllocator>
        ::operator=(&local_118,&local_190);
        local_c0 = local_1b8;
        local_c8 = uVar2;
        local_88 = (longlong *)0x0;
        local_78 = 0;
        puVar11 = (undefined8 *)FUN_140438ef0(0x88,local_a8);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_1442ab530;
          puVar11[1] = local_138;
          *(undefined4 *)(puVar11 + 2) = local_130;
          *(undefined4 *)((longlong)puVar11 + 0x14) = local_12c;
          *(int *)(puVar11 + 3) = local_128;
          *(float *)(puVar11 + 4) = local_120;
          *(char *)((longlong)puVar11 + 0x24) = local_11c;
          puVar11[5] = 0;
          puVar11[6] = 0;
          puVar11[9] = 0;
          puVar11[10] = 0;
          *(undefined4 *)(puVar11 + 0xb) = 0xffffffff;
          *(undefined4 *)((longlong)puVar11 + 0x5c) = 0;
          puVar11[0xd] = 0;
          *(undefined4 *)(puVar11 + 0xe) = 0;
          TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::operator=(puVar11 + 5,&local_118);
          if (local_d8 == 0) {
            _guard_xfg_dispatch_icall_nop(puVar11 + 0xc,local_e0,4);
          }
          if (puVar11[0xd] != 0) {
            FMemory::Free();
          }
          puVar11[0xd] = local_d8;
          local_d8 = 0;
          *(undefined4 *)(puVar11 + 0xe) = local_d0;
          local_d0 = 0;
          puVar11[0xf] = local_c8;
          puVar11[0x10] = local_c0;
        }
        local_b8[0] = &LAB_140b1f850;
        FUN_140b7fe80(local_1a8,local_b8);
        if (local_78 != 0) {
          plVar7 = local_a8;
          if (local_88 != (longlong *)0x0) {
            plVar7 = local_88;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_88 != (longlong *)0x0) {
          FMemory::Free();
        }
        local_d0 = 0;
        if (local_d8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_118);
        local_148 = 0;
        if (local_150 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_190);
      }
    }
  }
  return;
}



// FUNCTION 140b3eca0 FUN_140b3eca0 body=119 status=ok
// SIG undefined FUN_140b3eca0(void)

void FUN_140b3eca0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((0.0 < *(float *)(param_1 + 0x490)) && (lVar2 = FUN_14178ca30(param_2), lVar2 != 0)) {
    lVar3 = FUN_1428dfc70();
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
      FUN_14223e8c0(param_2,*(undefined4 *)(lVar2 + 0x138));
    }
  }
  return;
}



// FUNCTION 140b3ed20 FUN_140b3ed20 body=1884 status=ok
// SIG undefined FUN_140b3ed20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b3ed20(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined1 auStack_c8 [32];
  byte local_a8 [8];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78 [4];
  longlong *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar11 = (longlong *)0x0;
  plVar22 = *(longlong **)(param_2 + 0x220);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_4c = 0;
  plVar13 = (longlong *)((longlong)*(int *)(param_2 + 0x228) & 0x1fffffffffffffff);
  if (plVar22 + *(int *)(param_2 + 0x228) < plVar22) {
    plVar13 = plVar11;
  }
  plVar15 = plVar11;
  plVar21 = plVar11;
  local_a0 = param_1;
  local_90 = param_2;
  if (plVar13 != (longlong *)0x0) {
LAB_140b3eda0:
    pcVar6 = *(char **)(param_1 + 0x70);
    lVar8 = *plVar22;
    pcVar12 = pcVar6 + *(int *)(param_1 + 0x78);
    cVar3 = *(char *)(lVar8 + 0x38);
    for (; pcVar6 != pcVar12; pcVar6 = pcVar6 + 1) {
      if (*pcVar6 == cVar3) goto LAB_140b3edee;
    }
    pcVar6 = *(char **)(param_1 + 0x90);
    pcVar12 = pcVar6 + *(int *)(param_1 + 0x98);
    for (; pcVar6 != pcVar12; pcVar6 = pcVar6 + 1) {
      if (*pcVar6 == cVar3) goto LAB_140b3edee;
    }
    goto LAB_140b3ee2b;
  }
LAB_140b3ee3f:
  lVar8 = local_a0;
  iVar10 = *(int *)(local_a0 + 0x38);
  uVar14 = (uint)plVar11;
  if (iVar10 < (int)uVar14) {
    if ((int)uVar14 < iVar10) {
      local_50 = uVar14 + (iVar10 - uVar14);
      if (local_4c < (int)local_50) {
        TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_78);
        plVar15 = local_58;
      }
      plVar22 = local_78;
      if (plVar15 != (longlong *)0x0) {
        plVar22 = plVar15;
      }
      _guard_xfg_dispatch_icall_nop(plVar22 + (int)uVar14,0,(longlong)(int)(iVar10 - uVar14) << 3);
    }
    else {
      if (((int)uVar14 <= iVar10) || (iVar20 = uVar14 - iVar10, iVar20 == 0)) goto LAB_140b3eeed;
      iVar17 = (uVar14 - iVar20) - iVar10;
      if (iVar17 != 0) {
        plVar22 = local_78;
        if (plVar15 != (longlong *)0x0) {
          plVar22 = (longlong *)0x0;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(((ulonglong)plVar22 | (ulonglong)plVar15) + (longlong)iVar10 * 8),
                   (void *)(((ulonglong)plVar22 | (ulonglong)plVar15) +
                           (longlong)(iVar20 + iVar10) * 8),(longlong)iVar17 << 3);
        uVar14 = local_50;
      }
      local_50 = uVar14 - iVar20;
      TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink
                (local_78);
    }
    plVar11 = (longlong *)(ulonglong)local_50;
    plVar15 = local_58;
  }
LAB_140b3eeed:
  lVar2 = local_90;
  lVar7 = local_a0;
  uVar18 = 0;
  iVar20 = (int)plVar11;
  iVar10 = 2;
  if (1 < iVar20) {
    iVar10 = iVar20;
  }
  if (0 < (longlong)iVar10) {
    iVar17 = 1;
    uVar19 = uVar18;
    do {
      if (iVar17 < iVar20) {
        plVar22 = local_78;
        if (plVar15 != (longlong *)0x0) {
          plVar22 = plVar15;
        }
        uVar16 = (ulonglong)(uint)(iVar20 - iVar17);
        plVar13 = plVar22 + uVar18 + 1;
        iVar4 = 1;
        do {
          lVar1 = *plVar13;
          plVar13 = plVar13 + 1;
          iVar5 = iVar4 + 1;
          if (plVar22[uVar18] != lVar1) {
            iVar5 = iVar4;
          }
          uVar16 = uVar16 - 1;
          iVar4 = iVar5;
        } while (uVar16 != 0);
        if (iVar5 == 3) {
          plVar22 = local_78;
          if (plVar15 != (longlong *)0x0) {
            plVar22 = plVar15;
          }
          plVar11 = *(longlong **)(local_a0 + 0x80);
          plVar13 = (longlong *)plVar22[(int)uVar19];
          plVar22 = plVar11 + *(int *)(local_a0 + 0x88);
          local_88 = plVar13;
          if (plVar11 == plVar22) goto LAB_140b3f0a1;
          goto LAB_140b3f060;
        }
      }
      uVar19 = (ulonglong)((int)uVar19 + 1);
      iVar17 = iVar17 + 1;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < (longlong)iVar10);
  }
  goto LAB_140b3ef73;
LAB_140b3edee:
  local_50 = (int)plVar11 + 1;
  if (local_4c < (int)local_50) {
    TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (local_78);
    plVar15 = local_58;
    param_1 = local_a0;
  }
  plVar9 = local_78;
  if (plVar15 != (longlong *)0x0) {
    plVar9 = plVar15;
  }
  plVar9[(int)plVar11] = lVar8;
  plVar11 = (longlong *)(ulonglong)local_50;
  plVar15 = local_58;
LAB_140b3ee2b:
  plVar22 = plVar22 + 1;
  plVar21 = (longlong *)((longlong)plVar21 + 1);
  if (plVar21 == plVar13) goto LAB_140b3ee3f;
  goto LAB_140b3eda0;
LAB_140b3f060:
  do {
    local_98 = *plVar11;
    cVar3 = FWeakObjectPtr::IsValid(&local_98);
    if (cVar3 != '\0') {
      lVar8 = FWeakObjectPtr::Get(&local_98);
      lVar8 = FUN_140b478c0(plVar13,lVar8 + 0x40,lVar2);
      if (lVar8 != 0) goto LAB_140b3f0b3;
    }
    plVar11 = plVar11 + 1;
  } while (plVar11 != plVar22);
LAB_140b3f0a1:
  lVar8 = FUN_140b478c0(plVar13,lVar7 + 0x40,lVar2);
LAB_140b3f0b3:
  if (lVar8 != 0) {
    lVar7 = param_3[1];
    iVar10 = (int)lVar7 + 1;
    *(int *)(param_3 + 1) = iVar10;
    if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
    }
    *(longlong *)(*param_3 + (longlong)(int)lVar7 * 8) = lVar8;
  }
  lVar8 = (longlong)(int)local_50;
  if (local_50 == 0) goto LAB_140b3f412;
  plVar11 = (longlong *)0x0;
  plVar22 = local_78;
  if (local_58 != (longlong *)0x0) {
    plVar22 = local_58;
  }
  local_a8[0] = (longlong *)*plVar22 != plVar13;
  plVar15 = local_58;
  plVar22 = plVar11;
  plVar21 = plVar11;
  do {
    iVar10 = (int)plVar21;
    plVar22 = (longlong *)((longlong)plVar22 + 1);
    plVar21 = (longlong *)(ulonglong)(iVar10 + 1);
    if ((longlong)plVar22 < lVar8) {
      plVar9 = local_78;
      if (plVar15 != (longlong *)0x0) {
        plVar9 = plVar15;
      }
      plVar9 = plVar9 + (longlong)plVar22;
      do {
        if ((bool)local_a8[0] != ((longlong *)*plVar9 != plVar13)) break;
        plVar21 = (longlong *)(ulonglong)((int)plVar21 + 1);
        plVar22 = (longlong *)((longlong)plVar22 + 1);
        plVar9 = plVar9 + 1;
      } while ((longlong)plVar22 < lVar8);
    }
    iVar20 = (int)plVar21 - iVar10;
    if (local_a8[0] != 0) {
      iVar17 = (int)plVar11;
      if (iVar17 != iVar10) {
        plVar11 = local_78;
        if (plVar15 != (longlong *)0x0) {
          plVar11 = plVar15;
        }
        _guard_xfg_dispatch_icall_nop(plVar11 + iVar17,plVar11 + iVar10,(longlong)iVar20 << 3);
        plVar15 = local_58;
      }
      plVar11 = (longlong *)(ulonglong)(uint)(iVar17 + iVar20);
    }
    local_a8[0] = local_a8[0] ^ 1;
    plVar13 = local_88;
  } while ((longlong)plVar22 < lVar8);
  local_50 = (uint)plVar11;
  lVar8 = local_a0;
LAB_140b3ef73:
  iVar10 = (int)plVar11;
  while (iVar10 != 0) {
    iVar10 = (int)plVar11;
    if (iVar10 == 1) {
      plVar22 = local_78;
      if (plVar15 != (longlong *)0x0) {
        plVar22 = plVar15;
      }
      lVar7 = FUN_140b2cd10(lVar8,*plVar22,local_90);
      if (lVar7 != 0) {
        iVar10 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar10 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar10);
        }
        *(longlong *)(*param_3 + (longlong)iVar10 * 8) = lVar7;
      }
      iVar10 = local_50 - 1;
      if (0 < iVar10) {
        iVar10 = 1;
      }
      if (iVar10 != 0) {
        plVar22 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar22 = local_58;
        }
        _guard_xfg_dispatch_icall_nop
                  (plVar22,plVar22 + (int)(local_50 - iVar10),(longlong)iVar10 << 3);
      }
      local_50 = local_50 - 1;
LAB_140b3f3f7:
      TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink
                (local_78);
LAB_140b3f403:
      plVar11 = (longlong *)(ulonglong)local_50;
      plVar15 = local_58;
    }
    else {
      local_98 = 0;
      local_a0 = 0;
      if (*(int *)(lVar8 + 0x58) < 1) {
LAB_140b3f31e:
        uVar18 = 0;
        plVar22 = local_78;
        if (plVar15 != (longlong *)0x0) {
          plVar22 = plVar15;
        }
        uVar19 = (longlong)iVar10 & 0x1fffffffffffffff;
        if (plVar22 + iVar10 < plVar22) {
          uVar19 = uVar18;
        }
        if (uVar19 != 0) {
          do {
            lVar7 = FUN_140b2cd10(lVar8,*plVar22,local_90);
            if (lVar7 != 0) {
              lVar2 = param_3[1];
              iVar10 = (int)lVar2 + 1;
              *(int *)(param_3 + 1) = iVar10;
              if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3);
              }
              *(longlong *)(*param_3 + (longlong)(int)lVar2 * 8) = lVar7;
            }
            plVar22 = plVar22 + 1;
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar19);
          plVar11 = (longlong *)(ulonglong)local_50;
          plVar15 = local_58;
        }
        iVar10 = (int)plVar11;
        if (iVar10 < 0) {
          local_50 = 0;
          if (local_4c < 0) {
            TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
            ResizeGrow(local_78);
            plVar15 = local_58;
          }
          plVar22 = local_78;
          if (plVar15 != (longlong *)0x0) {
            plVar22 = plVar15;
          }
          _guard_xfg_dispatch_icall_nop(plVar22 + iVar10,0,(longlong)-iVar10 << 3);
          goto LAB_140b3f403;
        }
        if (0 < iVar10) {
          if (iVar10 != 0) {
            local_50 = 0;
            goto LAB_140b3f3f7;
          }
          break;
        }
      }
      else {
        local_88 = local_78;
        if (plVar15 != (longlong *)0x0) {
          local_88 = plVar15;
        }
        local_80 = local_88 + iVar10;
        lVar7 = FUN_140b27a20(lVar8,&local_88,&local_98,&local_a0);
        if (lVar7 == 0) goto LAB_140b3f31e;
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          iVar10 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar10 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar10);
          }
          *(longlong *)(*param_3 + (longlong)iVar10 * 8) = lVar7;
          plVar11 = (longlong *)(ulonglong)local_50;
          plVar15 = local_58;
        }
        plVar22 = local_78;
        if (plVar15 != (longlong *)0x0) {
          plVar22 = plVar15;
        }
        for (plVar13 = plVar22; plVar13 != plVar22 + (int)plVar11; plVar13 = plVar13 + 1) {
          if (*plVar13 == local_98) {
            iVar10 = (int)((longlong)plVar13 - (longlong)plVar22 >> 3);
            if (iVar10 != -1) {
              _guard_xfg_dispatch_icall_nop
                        (plVar22 + iVar10,plVar22 + iVar10 + 1,
                         (longlong)(((int)plVar11 - iVar10) + -1) << 3);
              plVar11 = (longlong *)(ulonglong)(local_50 - 1);
              local_50 = local_50 - 1;
              plVar15 = local_58;
            }
            break;
          }
        }
        plVar22 = local_78;
        if (plVar15 != (longlong *)0x0) {
          plVar22 = plVar15;
        }
        for (plVar13 = plVar22; plVar13 != plVar22 + (int)plVar11; plVar13 = plVar13 + 1) {
          if (*plVar13 == local_a0) {
            iVar10 = (int)((longlong)plVar13 - (longlong)plVar22 >> 3);
            if (iVar10 != -1) {
              _guard_xfg_dispatch_icall_nop
                        (plVar22 + iVar10,plVar22 + iVar10 + 1,
                         (longlong)(((int)plVar11 - iVar10) + -1) << 3);
              local_50 = local_50 - 1;
              goto LAB_140b3f403;
            }
            break;
          }
        }
      }
    }
    iVar10 = (int)plVar11;
  }
LAB_140b3f412:
  local_a8[0] = 0;
  FUN_140b14270(*param_3,(longlong)(int)param_3[1],0,local_a8);
  iVar10 = (int)param_3[1];
  if ((3 < iVar10) && (iVar10 + -3 != 0)) {
    *(int *)(param_3 + 1) = iVar10 - (iVar10 + -3);
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_3);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b3f480 FUN_140b3f480 body=113 status=ok
// SIG undefined FUN_140b3f480(void)

void FUN_140b3f480(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142ff0dc0();
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    cVar1 = UGameplayStatics::IsGamePaused(lVar3);
    if (cVar1 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      lVar3 = FUN_140b5b830(lVar3);
      if (lVar3 != 0) {
        FUN_140b511a0(lVar3,lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140b3f500 FUN_140b3f500 body=145 status=ok
// SIG undefined FUN_140b3f500(void)

void FUN_140b3f500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_48 [32];
  longlong local_28;
  
  FUN_142fde510(local_48);
  cVar2 = FUN_142ffa4f0(param_1,param_2,local_48);
  if ((cVar2 != '\0') && (local_28 != 0)) {
    lVar3 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(local_28 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_28 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14127e590(local_28,param_3);
    }
  }
  return;
}



// FUNCTION 140b3f5b0 FUN_140b3f5b0 body=279 status=ok
// SIG undefined FUN_140b3f5b0(void)

void FUN_140b3f5b0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_48 [32];
  longlong *local_28;
  
  FUN_142fde510(local_48);
  cVar2 = FUN_142ffa4f0(param_1,param_2,local_48);
  if ((cVar2 != '\0') && (local_28 != (longlong *)0x0)) {
    lVar3 = FUN_14142fee0();
    if ((*(int *)(local_28[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_28[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (cVar2 = FUN_14142f600(param_1,param_2), cVar2 != '\0')) &&
       (lVar3 = *(longlong *)(param_1 + 0x118), lVar3 != 0)) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         ((**(code **)(*local_28 + 0x700))(local_28,lVar3),
         *(char *)((longlong)local_28 + 0x479) != '\0')) {
        FUN_143011bf0(param_1,param_2,1);
      }
    }
  }
  return;
}



// FUNCTION 140b3f6d0 FUN_140b3f6d0 body=135 status=ok
// SIG undefined FUN_140b3f6d0(void)

void FUN_140b3f6d0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = *(char *)(param_1 + 0x128);
  bVar3 = true;
  if (((cVar2 == '\x03') && (param_2 == '\0')) &&
     (((*(byte *)(param_1 + 0x70c) & 0x60) != 0 || ((char)*(byte *)(param_1 + 0x70c) < '\0')))) {
    bVar3 = false;
    cVar2 = '\x03';
  }
  if (bVar3) {
    FUN_14223c560(param_1);
    cVar2 = *(char *)(param_1 + 0x128);
  }
  if ((cVar2 == '\x03') && (lVar1 = *(longlong *)(param_1 + 0x718), lVar1 != 0)) {
    if (((*(byte *)(param_1 + 0x80) & 1) != 0) && ((*(byte *)(param_1 + 0x5a8) & 1) != 0)) {
      FUN_142f6c130(lVar1,1);
      return;
    }
    FUN_142f6c130(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 140b3f760 SetClickMethod body=7 status=ok
// SIG undefined SetClickMethod(void)

void SButton::SetClickMethod(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5b0) = param_2;
  return;
}



// FUNCTION 140b3f770 FUN_140b3f770 body=258 status=ok
// SIG undefined FUN_140b3f770(void)

void FUN_140b3f770(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FText::ToString(param_1 + 0x68);
  iVar4 = FUN_141592950(uVar5,L"$VALUE$",1,0,0xffffffff);
  if (iVar4 != -1) {
    puVar6 = (undefined8 *)FText::ToString(param_2);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar6;
    }
    uVar5 = FText::ToString(param_1 + 0x68);
    uVar5 = FString::Replace(uVar5,local_38,L"$VALUE$",puVar7,1);
    uVar5 = FText::FromString(local_28,uVar5);
    FText::operator=(param_1 + 0x80,uVar5);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140b3f880 FUN_140b3f880 body=470 status=ok
// SIG undefined FUN_140b3f880(void)

void FUN_140b3f880(longlong *param_1,longlong *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  longlong local_res18 [2];
  int local_28;
  int local_24;
  longlong local_20;
  
  if (((char)param_1[0x25] == '\x03') &&
     ((**(code **)(*param_1 + 0x600))(), param_2 != (longlong *)0x0)) {
    *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) | 1;
    FUN_14223ed20(param_1,1);
    (**(code **)(*param_1 + 0x448))(param_1,param_2);
    cVar4 = (**(code **)(*param_2 + 0x768))(param_2);
    FUN_14223ef90(param_1,cVar4 == '\0');
    FUN_140b471d0(param_1);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakInventoryItemPickup::HandleActorDestroyed",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(local_res18,pwVar3 + 2,1);
    plVar9 = param_2 + 0x52;
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_20);
    }
    piVar7 = (int *)*plVar9;
    lVar6 = param_2[0x53];
    for (piVar8 = piVar7; piVar8 != piVar7 + (longlong)(int)lVar6 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == local_28) && (piVar8[1] == local_24)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar8), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_28), cVar4 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_20)) {
        if ((int)((longlong)piVar8 - (longlong)piVar7 >> 4) != -1) goto LAB_140b3fa3d;
        break;
      }
    }
    iVar1 = (int)param_2[0x53];
    *(int *)(param_2 + 0x53) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0x29c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
    }
    piVar7 = (int *)((longlong)iVar1 * 0x10 + *plVar9);
    *piVar7 = local_28;
    piVar7[1] = local_24;
    *(longlong *)(piVar7 + 2) = local_20;
LAB_140b3fa3d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
  }
  return;
}



// FUNCTION 140b3fa60 FUN_140b3fa60 body=502 status=ok
// SIG undefined FUN_140b3fa60(void)

void FUN_140b3fa60(longlong *param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  longlong local_res20;
  int local_28;
  int local_24;
  longlong local_20;
  
  iVar4 = FUN_14233f450();
  if (((iVar4 == 3) && (param_2 != (longlong *)0x0)) &&
     (plVar9 = (longlong *)param_1[0x23], plVar9 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined1 *)(param_1 + 0x69) = 1;
    FUN_14223ed20(plVar9,1);
    (**(code **)(*plVar9 + 0x448))(plVar9,param_2);
    if (((*(byte *)((longlong)plVar9 + 0x92) & 0x40) == 0) ||
       (cVar3 = (**(code **)(*param_2 + 0x768))(param_2), cVar3 == '\0')) {
      (**(code **)(*plVar9 + 0x600))(plVar9);
    }
    else {
      FUN_14223ef90(plVar9,0);
    }
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UOakInventoryBalanceStateComponent::HandleActorDestroyed",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res20,pwVar2 + 2,1);
    plVar9 = param_2 + 0x52;
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res20;
    if ((local_res20 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_20);
    }
    piVar7 = (int *)*plVar9;
    lVar6 = param_2[0x53];
    for (piVar8 = piVar7; piVar8 != piVar7 + (longlong)(int)lVar6 * 4; piVar8 = piVar8 + 4) {
      if ((((*piVar8 == local_28) && (piVar8[1] == local_24)) ||
          ((cVar3 = FWeakObjectPtr::IsValid(piVar8), cVar3 == '\0' &&
           (cVar3 = FWeakObjectPtr::IsValid(&local_28), cVar3 == '\0')))) &&
         (*(longlong *)(piVar8 + 2) == local_20)) {
        if ((int)((longlong)piVar8 - (longlong)piVar7 >> 4) != -1) goto LAB_140b3fc3d;
        break;
      }
    }
    iVar4 = (int)param_2[0x53];
    *(int *)(param_2 + 0x53) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0x29c) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar4);
    }
    piVar7 = (int *)((longlong)iVar4 * 0x10 + *plVar9);
    *piVar7 = local_28;
    piVar7[1] = local_24;
    *(longlong *)(piVar7 + 2) = local_20;
LAB_140b3fc3d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
  }
  return;
}



// FUNCTION 140b3fc60 FUN_140b3fc60 body=98 status=ok
// SIG undefined FUN_140b3fc60(void)

void FUN_140b3fc60(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (plVar1 = (longlong *)param_1[0x23], plVar1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined1 *)(param_1 + 0x69) = 0;
    FUN_14223ed20(plVar1,0);
    FUN_14223ef90(plVar1,1);
    (**(code **)(*plVar1 + 0x600))(plVar1);
  }
  return;
}



// FUNCTION 140b3fcd0 FUN_140b3fcd0 body=99 status=ok
// SIG undefined FUN_140b3fcd0(void)

void FUN_140b3fcd0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)FName::FName(local_res10,&DAT_14428d9ec,1);
    uVar2 = FUN_140b1a100(param_1,param_2,*puVar1,0);
    FUN_140b3fd40(param_1,uVar2,param_3);
  }
  return;
}



// FUNCTION 140b3fd40 FUN_140b3fd40 body=267 status=ok
// SIG undefined FUN_140b3fd40(void)

void FUN_140b3fd40(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    FUN_140b3ccc0(param_1,1,1,param_3);
    plVar1 = (longlong *)(param_1 + 0x780);
    *(longlong *)(param_1 + 0x790) = param_2;
    plVar5 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x788);
    plVar2 = plVar5 + iVar3;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_2) goto LAB_140b3fdc8;
    }
    *(int *)(param_1 + 0x788) = iVar3 + 1;
    if (*(int *)(param_1 + 0x78c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(longlong *)((longlong)iVar3 * 8 + *plVar1) = param_2;
LAB_140b3fdc8:
    plVar1 = (longlong *)(param_1 + 0x798);
    plVar5 = (longlong *)*plVar1;
    iVar3 = *(int *)(param_1 + 0x7a0);
    plVar2 = plVar5 + (longlong)iVar3 * 2;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 2) {
      if (*plVar5 == param_3) goto LAB_140b3fdf5;
    }
    plVar5 = (longlong *)0x0;
LAB_140b3fdf5:
    lVar4 = *(longlong *)(param_2 + 0x6f0);
    if (plVar5 == (longlong *)0x0) {
      *(int *)(param_1 + 0x7a0) = iVar3 + 1;
      if (*(int *)(param_1 + 0x7a4) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
      }
      plVar1 = (longlong *)(*plVar1 + (longlong)iVar3 * 0x10);
      *plVar1 = param_3;
      plVar1[1] = lVar4;
    }
    else {
      plVar5[1] = lVar4;
    }
  }
  return;
}



// FUNCTION 140b3fe50 FUN_140b3fe50 body=334 status=ok
// SIG undefined FUN_140b3fe50(void)

void FUN_140b3fe50(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)(param_2 + uVar3) != '\0');
    FUN_140a6ec50(param_1 + 0x30,5);
    FUN_140a78ce0(param_1 + 0x30,param_2,uVar3 & 0xffffffff);
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  FUN_140a6ec50(plVar1,param_3 + 1);
  lVar4 = *plVar1;
  if (param_3 == 0) {
    if (*(ulonglong *)(lVar4 + 0x20) < *(longlong *)(lVar4 + 0x18) + 5U) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar4,5);
      lVar4 = *plVar1;
    }
    puVar2 = *(undefined1 **)(lVar4 + 0x18);
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    *puVar2 = 0x66;
    puVar2 = *(undefined1 **)(*plVar1 + 0x18);
    *(undefined1 **)(*plVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x61;
    puVar2 = *(undefined1 **)(*plVar1 + 0x18);
    *(undefined1 **)(*plVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x6c;
    puVar2 = *(undefined1 **)(*plVar1 + 0x18);
    *(undefined1 **)(*plVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x73;
  }
  else {
    if (*(ulonglong *)(lVar4 + 0x20) < *(longlong *)(lVar4 + 0x18) + 4U) {
      rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar4,4);
      lVar4 = *plVar1;
    }
    puVar2 = *(undefined1 **)(lVar4 + 0x18);
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    *puVar2 = 0x74;
    puVar2 = *(undefined1 **)(*plVar1 + 0x18);
    *(undefined1 **)(*plVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x72;
    puVar2 = *(undefined1 **)(*plVar1 + 0x18);
    *(undefined1 **)(*plVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x75;
  }
  puVar2 = *(undefined1 **)(*plVar1 + 0x18);
  *(undefined1 **)(*plVar1 + 0x18) = puVar2 + 1;
  *puVar2 = 0x65;
  return;
}



// FUNCTION 140b3ffa0 FUN_140b3ffa0 body=7 status=ok
// SIG undefined FUN_140b3ffa0(void)

void FUN_140b3ffa0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x778) = param_2;
  return;
}


