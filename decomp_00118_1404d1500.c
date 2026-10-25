// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404d1500 FUN_1404d1500 body=93 status=ok
// SIG undefined FUN_1404d1500(void)

longlong FUN_1404d1500(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + -0x1918);
  if (lVar1 != 0) {
    lVar3 = FUN_1404e74f0();
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
      return lVar1 + 0x540;
    }
  }
  return 0;
}



// FUNCTION 1404d1560 FUN_1404d1560 body=93 status=ok
// SIG undefined FUN_1404d1560(void)

undefined8 FUN_1404d1560(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  int local_10;
  
  local_res8[0] = *(undefined8 *)(param_1 + -0x528);
  FName::ToString(local_res8,&local_18);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"NetDriver [%s]",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404d15c0 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FRenderResource::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"NetDriver",0x14);
  return param_2;
}



// FUNCTION 1404d1600 FUN_1404d1600 body=93 status=ok
// SIG undefined FUN_1404d1600(void)

longlong FUN_1404d1600(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + -0x4b0);
  if (lVar1 != 0) {
    lVar3 = FUN_1404e7690();
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
      return lVar1 + 0x1970;
    }
  }
  return 0;
}



// FUNCTION 1404d1660 GetChannelProxy body=8 status=ok
// SIG undefined GetChannelProxy(void)

undefined8 UMovieSceneSection::GetChannelProxy(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// FUNCTION 1404d16e0 FUN_1404d16e0 body=30 status=ok
// SIG undefined FUN_1404d16e0(void)

void FUN_1404d16e0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
                    /* WARNING: Could not recover jumptable at 0x0001404d16f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x148))(plVar1);
  return;
}



// FUNCTION 1404d1700 FUN_1404d1700 body=1185 status=ok
// SIG undefined FUN_1404d1700(void)

void FUN_1404d1700(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int local_res18 [2];
  undefined8 local_68;
  longlong local_60 [4];
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  switch(param_3) {
  case 0:
    FUN_1404e0350(param_1);
    break;
  case 1:
    FUN_1404c0d00(param_4,param_1 + 0x60);
    FUN_1404de820(param_1);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0xe8,param_1);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound(param_1 + 0xf8,param_1)
    ;
    break;
  case 7:
    plVar4 = (longlong *)param_4[1];
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
    }
    else {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,*(undefined1 *)*plVar4);
      *plVar4 = *plVar4 + 1;
    }
    TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound
              (param_1 + 0x118,param_1,(char)local_res18[0] != '\0');
    break;
  case 8:
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x108,param_1);
    break;
  case 9:
    plVar4 = (longlong *)0x0;
    local_68 = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    (**(code **)(*param_4 + 0x40))(param_4,&local_68);
    FUN_14158ce90(param_4,local_60 + 2);
    uVar2 = local_68;
    if (((*(int *)(param_1 + 0x160) != 0) && (*(longlong **)(param_1 + 0x158) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x160) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x158);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,param_1,uVar2,local_60 + 2);
    }
    goto LAB_1404d1a91;
  case 10:
    FUN_1404c0d00(param_4,param_1 + 0x60);
    FUN_1404de820(param_1);
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x88,param_1);
    break;
  case 0xb:
    plVar4 = (longlong *)param_4[1];
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
    }
    else {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,*(undefined1 *)*plVar4);
      *plVar4 = *plVar4 + 1;
    }
    TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound
              (param_1 + 0x128,param_1,(char)local_res18[0] != '\0');
    break;
  case 0xc:
    plVar4 = (longlong *)param_4[1];
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
    }
    else {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,*(undefined1 *)*plVar4);
      *plVar4 = *plVar4 + 1;
    }
    plVar4 = (longlong *)param_4[1];
    bVar5 = (char)local_res18[0] != '\0';
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
    }
    else {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,*(undefined1 *)*plVar4);
      *plVar4 = *plVar4 + 1;
    }
    plVar4 = (longlong *)param_4[1];
    bVar6 = (char)local_res18[0] != '\0';
    if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
    }
    else {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,*(undefined1 *)*plVar4);
      *plVar4 = *plVar4 + 1;
    }
    bVar7 = (char)local_res18[0] != '\0';
    if (((*(int *)(param_1 + 0x140) != 0) && (*(longlong **)(param_1 + 0x138) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x140) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x138);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,param_1,bVar5,bVar6,bVar7);
    }
    break;
  case 0xd:
    plVar4 = (longlong *)0x0;
    local_68 = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    local_res18[0] = (uint)local_res18[0]._1_3_ << 8;
    (**(code **)(*param_4 + 0x40))(param_4,&local_68);
    FUN_14158ce90(param_4,local_60 + 2);
    FUN_14158ce90(param_4,local_60);
    (**(code **)(*param_4 + 8))(param_4,local_res18);
    uVar2 = local_68;
    uVar1 = (char)local_res18[0];
    if (((*(int *)(param_1 + 0x150) != 0) && (*(longlong **)(param_1 + 0x148) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x150) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x148);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,param_1,uVar2,local_60 + 2,local_60,uVar1);
    }
    if (local_60[0] != 0) {
      FMemory::Free();
    }
LAB_1404d1a91:
    if (local_60[2] != 0) {
      FMemory::Free();
    }
    break;
  case 0xe:
    plVar4 = (longlong *)param_4[1];
    if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_res18,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(int *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    TBaseDelegate<void,FText_const_&,enum_ETextCommit::Type>::ExecuteIfBound
              (param_1 + 0x178,param_1,local_res18[0]);
    break;
  case 0xf:
    plVar4 = (longlong *)0x0;
    local_40 = &PTR_FUN_143f740c8;
    local_28 = 0;
    local_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    FUN_1425da060(param_4,&local_40);
    FUN_14158ce90(param_4,local_60 + 2);
    if (((*(int *)(param_1 + 400) != 0) && (*(longlong **)(param_1 + 0x188) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 400) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x188);
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,param_1,&local_40,local_60 + 2);
    }
    if (local_60[2] != 0) {
      FMemory::Free();
    }
    FUN_1404bf980(&local_40);
  }
  return;
}



// FUNCTION 1404d1bf0 FUN_1404d1bf0 body=2937 status=ok
// SIG undefined FUN_1404d1bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404d1bf0(longlong *param_1,undefined ***param_2,undefined4 param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_148 [32];
  char local_128 [8];
  longlong local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined **local_f8;
  undefined **local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined ***local_b8 [2];
  undefined **local_a8;
  undefined **local_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_b8[0] = param_2;
  switch(param_3) {
  case 0x10:
    plVar8 = (longlong *)0x0;
    local_128[0] = '\x01';
    local_e8 = (longlong *)0x0;
    uVar14 = 2;
    local_f8 = &PTR_FUN_143f74338;
    local_120 = CONCAT44(local_120._4_4_,2);
    local_e0 = 0;
    local_f0 = &PTR_FUN_143f740c8;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_110 = (longlong *)0x0;
    local_108 = 0;
    FUN_1404c0ec0(param_4,&local_f8);
    FUN_1404c0d00(param_4,&local_110);
    cVar3 = FUN_1404d5db0(&local_f8);
    iVar5 = 0;
    if (cVar3 == '\0') {
      local_78 = (longlong *)0x0;
      local_68 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,&lStack_98);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = param_1;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_120 = 0;
      local_a8 = (undefined **)&LAB_1404c6830;
      local_118 = 0x34;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
      FGenericPlatformString::Memcpy
                (local_120,L"client_host_send_initial_party_reservations_failure",0x68);
      FUN_1404dcf70(param_1,&local_120,&local_a8);
      if (local_120 != 0) {
        FMemory::Free();
      }
      FUN_1404bed90(&local_a8);
    }
    else {
      lVar15 = param_1[0x1a];
      lVar11 = lVar15 + (longlong)(int)param_1[0x1b] * 0x48;
      for (; lVar15 != lVar11; lVar15 = lVar15 + 0x48) {
        if (((*(longlong **)(lVar15 + 0x10) == (longlong *)0x0) ||
            (cVar3 = (**(code **)(**(longlong **)(lVar15 + 0x10) + 0x20))(), cVar3 == '\0')) ||
           ((local_e8 == (longlong *)0x0 ||
            (cVar3 = (**(code **)(*local_e8 + 0x20))(), cVar3 == '\0')))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        plVar10 = *(longlong **)(lVar15 + 0x10);
        if ((((plVar10 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar3 == '\0')) &&
            ((local_e8 == (longlong *)0x0 ||
             (cVar3 = (**(code **)(*local_e8 + 0x20))(), cVar3 == '\0')))) ||
           ((bVar1 && (cVar3 = (**(code **)*local_e8)(local_e8,*(undefined8 *)(lVar15 + 0x10)),
                      cVar3 != '\0')))) {
          FUN_1404deb60(param_1,&local_f0);
          if (((int)local_108 == 0) || (cVar3 = FUN_1404c8130(param_1,&local_110), cVar3 == '\0')) {
            plVar10 = plVar8;
            if ((local_e8 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*local_e8 + 0x20))(), cVar3 == '\0')) goto LAB_1404d1f2b;
            lVar11 = local_c8 + (longlong)(int)local_c0 * 0x28;
            lVar15 = local_c8;
            if (local_c8 != lVar11) goto LAB_1404d1f06;
            goto LAB_1404d1f25;
          }
          local_78 = (longlong *)0x0;
          local_68 = 0;
          puVar6 = (undefined8 *)FUN_140438ef0(0x10,&lStack_98);
          if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = param_1;
            *puVar6 = &PTR_FUN_143f77b70;
          }
          local_120 = 0;
          local_a8 = (undefined **)&LAB_1404c6840;
          local_118 = 0x34;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
          FGenericPlatformString::Memcpy
                    (local_120,L"client_host_send_initial_party_reservations_failure",0x68);
          FUN_1404dcf70(param_1,&local_120,&local_a8);
          if (local_120 != 0) {
            FMemory::Free();
          }
          if (local_68 != 0) {
            plVar8 = &lStack_98;
            if (local_78 != (longlong *)0x0) {
              plVar8 = local_78;
            }
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x10))(plVar8,0);
            }
          }
          if (local_78 != (longlong *)0x0) {
            FMemory::Free();
          }
          uVar14 = 4;
          goto LAB_1404d22f2;
        }
      }
      if ((int)param_1[10] == 0) {
        iVar13 = iVar5;
        if ((local_e8 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*local_e8 + 0x20))(), cVar3 != '\0')) {
          lVar11 = local_c8 + (longlong)(int)local_c0 * 0x28;
          lVar15 = local_c8;
          if (local_c8 != lVar11) {
            do {
              if ((*(longlong **)(lVar15 + 8) == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(**(longlong **)(lVar15 + 8) + 0x20))(), cVar3 == '\0'))
              goto LAB_1404d2035;
              lVar15 = lVar15 + 0x28;
            } while (lVar15 != lVar11);
          }
          iVar13 = (int)local_c0 + 1;
        }
LAB_1404d2035:
        plVar10 = local_110;
        plVar16 = local_110 + (longlong)(int)local_108 * 8;
        for (plVar12 = local_110; plVar12 != plVar16; plVar12 = plVar12 + 8) {
          cVar3 = FUN_1404d5db0(plVar12);
          if (cVar3 == '\0') {
            local_78 = (longlong *)0x0;
            local_68 = 0;
            puVar6 = (undefined8 *)FUN_140438ef0(0x10,&lStack_98);
            if (puVar6 != (undefined8 *)0x0) {
              puVar6[1] = param_1;
              *puVar6 = &PTR_FUN_143f77b70;
            }
            local_120 = 0;
            local_a8 = (undefined **)&LAB_1404c6890;
            local_118 = 0x34;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
            FGenericPlatformString::Memcpy
                      (local_120,L"client_host_send_initial_party_reservations_failure",0x68);
            FUN_1404dcf70(param_1,&local_120,&local_a8);
            if (local_120 != 0) {
              FMemory::Free();
            }
            if (local_68 != 0) {
              plVar12 = &lStack_98;
              if (local_78 != (longlong *)0x0) {
                plVar12 = local_78;
              }
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x10))(plVar12,0);
              }
            }
            if (local_78 != (longlong *)0x0) {
              FMemory::Free();
            }
            local_128[0] = '\0';
            local_120 = CONCAT44(local_120._4_4_,3);
            break;
          }
          cVar3 = FUN_1404d5db0(plVar12);
          iVar4 = iVar5;
          if (cVar3 != '\0') {
            iVar4 = (int)plVar12[7] + 1;
          }
          iVar13 = iVar13 + iVar4;
        }
        cVar3 = (**(code **)(*param_1 + 0x2f0))(param_1,iVar13);
        if (cVar3 == '\0') {
          bVar1 = false;
          uVar14 = 5;
        }
        else {
          iVar5 = (int)param_1[0xd];
          *(int *)(param_1 + 0xd) = iVar5 + 1;
          if (*(int *)((longlong)param_1 + 0x6c) < iVar5 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 0xc,iVar5);
          }
          FUN_1404bdf40((longlong)iVar5 * 0x40 + param_1[0xc],&local_f8);
          for (; plVar10 != plVar16; plVar10 = plVar10 + 8) {
            FUN_1404c5c30(param_1,plVar10);
          }
          bVar1 = true;
          uVar14 = (undefined4)local_120;
        }
        if ((local_128[0] != '\0') && (bVar1)) goto LAB_1404d21c9;
      }
      else {
        uVar14 = 6;
      }
    }
    goto LAB_1404d22f2;
  case 0x11:
    local_a8 = &PTR_FUN_143f740c8;
    cVar3 = '\0';
    uStack_90 = 0;
    local_128[0] = '\0';
    local_88 = 0;
    local_a0 = (undefined **)0x0;
    lStack_98 = 0;
    FUN_1425da060(param_4,&local_a8);
    lVar11 = param_1[0xc];
    lVar15 = (longlong)(int)param_1[0xd] * 0x40 + lVar11;
    for (; lVar11 != lVar15; lVar11 = lVar11 + 0x40) {
      uVar7 = FUN_1404d0440(param_2,&local_f8);
      cVar2 = FUniqueNetIdWrapper::operator==(lVar11 + 8,uVar7);
      FUN_1404bf980(&local_f8);
      if (cVar2 != '\0') {
        cVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
        local_128[0] = cVar3;
        if (cVar3 != '\0') {
          FUN_1404b8a10(lVar11 + 0x30,&local_a8);
        }
        break;
      }
    }
    FUN_1404bc200(param_2,1,0xb,local_128);
    if (cVar3 != '\0') {
      FUN_1404d2ae0(param_1);
      plVar8 = param_1 + 0x2a;
LAB_1404d24b9:
      FUN_1404cb7e0(plVar8,param_1,&local_a8);
    }
    break;
  case 0x12:
    local_a8 = &PTR_FUN_143f740c8;
    uStack_90 = 0;
    local_88 = 0;
    local_a0 = (undefined **)0x0;
    lStack_98 = 0;
    FUN_1425da060(param_4,&local_a8);
    lVar11 = param_1[0xc];
    lVar15 = (longlong)(int)param_1[0xd] * 0x40 + lVar11;
    if (lVar11 != lVar15) {
      while( true ) {
        uVar7 = FUN_1404d0440(param_2,&local_f8);
        cVar3 = FUniqueNetIdWrapper::operator==(lVar11 + 8,uVar7);
        FUN_1404bf980(&local_f8);
        if (cVar3 != '\0') break;
        lVar11 = lVar11 + 0x40;
        if (lVar11 == lVar15) {
          FUN_1404bf980(&local_a8);
          return;
        }
      }
      local_b8[0] = &local_a8;
      iVar5 = FUN_1404bb710(lVar11 + 0x30,local_b8);
      if (0 < iVar5) {
        FUN_1404d2ae0(param_1);
        plVar8 = param_1 + 0x2c;
        goto LAB_1404d24b9;
      }
    }
    break;
  case 0x13:
    plVar8 = (longlong *)0x0;
    local_120 = 0;
    (**(code **)(*param_4 + 0x40))(param_4,&local_120);
    local_88 = 0;
    lStack_98 = 0;
    uStack_90 = 0;
    local_a0 = &PTR_FUN_143f740c8;
    local_a8 = &PTR_FUN_143f74338;
    local_80 = 0;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    uVar7 = FUN_1404d0440(param_2,&local_f8);
    iVar5 = FUN_1404cc400(param_1,uVar7);
    FUN_1404bf980(&local_f8);
    if ((-1 < iVar5) && (iVar5 < (int)param_1[0xd])) {
      lVar11 = (longlong)iVar5 * 0x40 + param_1[0xc];
      FUN_1404c0940(&local_a0,lVar11 + 8);
      FUN_1404c0480(&local_78,lVar11 + 0x30);
    }
    lVar11 = local_120;
    if ((((int)param_1[0x1f] != 0) && ((longlong *)param_1[0x1e] != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*(longlong *)param_1[0x1e] + 0x18))(), cVar3 != '\0')) {
      if ((int)param_1[0x1f] != 0) {
        plVar8 = (longlong *)param_1[0x1e];
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,param_1,lVar11,&local_a8);
    }
    local_a8 = &PTR_FUN_143f74338;
    FUN_1404bebc0(&local_78);
    FUN_1404bf980(&local_a0);
    return;
  case 0x14:
    plVar8 = (longlong *)0x0;
    local_110 = (longlong *)0x0;
    local_108 = 0;
    FUN_14158ce90(param_4,&local_110);
    uVar7 = FUN_1404d0440(param_2,&local_f8);
    if ((((int)param_1[0x21] != 0) && ((longlong *)param_1[0x20] != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x18))(), cVar3 != '\0')) {
      if ((int)param_1[0x21] != 0) {
        plVar8 = (longlong *)param_1[0x20];
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,param_1,uVar7,&local_110);
    }
    pppuVar9 = &local_f8;
    goto LAB_1404d2724;
  case 0x15:
    plVar8 = (longlong *)0x0;
    local_110 = (longlong *)0x0;
    local_108 = 0;
    FUN_14158ce90(param_4,&local_110);
    local_88 = 0;
    lStack_98 = 0;
    uStack_90 = 0;
    local_a0 = &PTR_FUN_143f740c8;
    local_a8 = &PTR_FUN_143f74338;
    local_80 = 0;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    uVar7 = FUN_1404d0440(param_2,&local_f8);
    iVar5 = FUN_1404cc400(param_1,uVar7);
    FUN_1404bf980(&local_f8);
    if ((-1 < iVar5) && (iVar5 < (int)param_1[0xd])) {
      lVar11 = (longlong)iVar5 * 0x40 + param_1[0xc];
      FUN_1404c0940(&local_a0,lVar11 + 8);
      FUN_1404c0480(&local_78,lVar11 + 0x30);
    }
    if ((((int)param_1[0x23] != 0) && ((longlong *)param_1[0x22] != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*(longlong *)param_1[0x22] + 0x18))(), cVar3 != '\0')) {
      if ((int)param_1[0x23] != 0) {
        plVar8 = (longlong *)param_1[0x22];
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,param_1,&local_a8,&local_110);
    }
    local_a8 = &PTR_FUN_143f74338;
    FUN_1404bebc0(&local_78);
    pppuVar9 = &local_a0;
LAB_1404d2724:
    FUN_1404bf980(pppuVar9);
    if (local_110 != (longlong *)0x0) {
      FMemory::Free();
    }
  default:
    goto switchD_1404d1c4c_default;
  }
  FUN_1404bf980(&local_a8);
switchD_1404d1c4c_default:
  return;
  while (lVar15 = lVar15 + 0x28, lVar15 != lVar11) {
LAB_1404d1f06:
    if ((*(longlong **)(lVar15 + 8) == (longlong *)0x0) ||
       (cVar3 = (**(code **)(**(longlong **)(lVar15 + 8) + 0x20))(), cVar3 == '\0'))
    goto LAB_1404d1f2b;
  }
LAB_1404d1f25:
  plVar10 = (longlong *)(ulonglong)((int)local_c0 + 1);
LAB_1404d1f2b:
  cVar3 = (**(code **)(*param_1 + 0x2f0))(param_1,plVar10);
  if (cVar3 != '\0') {
    iVar5 = (int)param_1[0xd];
    *(int *)(param_1 + 0xd) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0x6c) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0xc,iVar5);
    }
    FUN_1404bdf40((longlong)iVar5 * 0x40 + param_1[0xc],&local_f8);
LAB_1404d21c9:
    local_120 = 0;
    local_118 = 0;
    FUN_1404c6600(param_1,&local_120);
    FUN_1404bc0e0(local_b8[0],1,1,&local_120);
    FUN_1404d2ae0(param_1);
    if (((int)param_1[0x1d] != 0) &&
       (((longlong *)param_1[0x1c] != (longlong *)0x0 &&
        (cVar3 = (**(code **)(*(longlong *)param_1[0x1c] + 0x18))(), cVar3 != '\0')))) {
      if ((int)param_1[0x1d] != 0) {
        plVar8 = (longlong *)param_1[0x1c];
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,param_1,&local_f8);
    }
    FUN_1404bec90(&local_120);
    goto LAB_1404d2300;
  }
  local_78 = (longlong *)0x0;
  local_68 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,&lStack_98);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_120 = 0;
  local_a8 = (undefined **)&LAB_1404c68c0;
  local_118 = 0x34;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
  FGenericPlatformString::Memcpy
            (local_120,L"client_host_send_initial_party_reservations_failure",0x68);
  FUN_1404dcf70(param_1,&local_120,&local_a8);
  if (local_120 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    plVar8 = &lStack_98;
    if (local_78 != (longlong *)0x0) {
      plVar8 = local_78;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar14 = 5;
LAB_1404d22f2:
  FUN_1404bbe70(local_b8[0],1,uVar14);
LAB_1404d2300:
  FUN_1404bec90(&local_110);
  local_f8 = &PTR_FUN_143f74338;
  FUN_1404bebc0(&local_c8);
  FUN_1404bf980(&local_f0);
  return;
}



// FUNCTION 1404d2790 HandleDisconnect body=58 status=ok
// SIG undefined HandleDisconnect(void)

void UOnlineSessionClient::HandleDisconnect(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar1 == '\0') {
    FUN_142876830(DAT_146b17150,param_2,param_3);
  }
  return;
}



// FUNCTION 1404d27d0 FUN_1404d27d0 body=105 status=ok
// SIG undefined FUN_1404d27d0(void)

undefined8 FUN_1404d27d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == param_2) {
    if (*(char *)((longlong)param_1 + 0x191) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x191) = 1;
      FUN_1404c9b60(param_1,param_1 + 0x15,0x11f,param_1 + 9);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1404d2840 thunk_FUN_1404d2ae0 body=5 status=ok
// SIG undefined thunk_FUN_1404d2ae0(void)

void thunk_FUN_1404d2ae0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lStack_18;
  undefined8 uStack_10;
  
  lStack_18 = 0;
  uStack_10 = 0;
  FUN_1404c6600(param_1,&lStack_18);
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) && (lVar4 = FUN_1425bd330(*plVar6,6), lVar4 != 0)) {
        lVar5 = FUN_1404e6fc0();
        iVar7 = *(int *)(lVar5 + 0x90);
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar7) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar7 * 8)
            != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1404bc0e0(lVar4,CONCAT71((int7)(int3)((uint)iVar7 >> 8),1),10,&lStack_18);
        }
      }
    }
  }
  lVar4 = lStack_18;
  if ((int)uStack_10 != 0) {
    lVar5 = lStack_18 + 8;
    iVar7 = (int)uStack_10;
    do {
      *(undefined ***)(lVar5 + -8) = &PTR_FUN_143f74338;
      FUN_1404bebc0(lVar5 + 0x28);
      FUN_1404bf980(lVar5);
      lVar5 = lVar5 + 0x40;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x88,param_1);
  return;
}



// FUNCTION 1404d2880 FUN_1404d2880 body=601 status=ok
// SIG undefined FUN_1404d2880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404d2880(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  if ((param_3 != 0) &&
     (local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8, *(longlong *)(param_3 + 0x120) == param_1[8]
     )) {
    if (param_4 == 4) {
      plVar4 = *(longlong **)(param_3 + 0x98);
      uVar3 = 0;
      uVar6 = (longlong)*(int *)(param_3 + 0xa0) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(param_3 + 0xa0) < plVar4) {
        uVar6 = uVar3;
      }
      if (uVar6 != 0) {
        do {
          lVar2 = *plVar4;
          if ((lVar2 != 0) && (*(int *)(lVar2 + 300) == 4)) {
            local_68 = (longlong *)0x0;
            local_58 = 0;
            local_a8 = param_1;
            uStack_a0 = lVar2;
            puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_88);
            if (puVar1 != (undefined8 *)0x0) {
              *puVar1 = &PTR_FUN_143f77c18;
              *(undefined4 *)(puVar1 + 1) = (undefined4)local_a8;
              *(undefined4 *)((longlong)puVar1 + 0xc) = local_a8._4_4_;
              *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_a0;
              *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_a0._4_4_;
            }
            local_98[0] = &LAB_1404c6880;
            local_b8[0] = 0;
            local_b8[1] = 0x1a;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
            FGenericPlatformString::Memcpy(local_b8[0],L"client_connection_timeout",0x34);
            FUN_1404dcf70(param_1,local_b8,local_98);
            if (local_b8[0] != 0) {
              FMemory::Free();
            }
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
            lVar2 = lVar2 + 0x158;
            FUN_1404cb7e0(param_1 + 0x26,param_1,lVar2);
            FUN_1404deb60(param_1,lVar2);
            FUN_1404decc0(param_1,lVar2);
            FUN_1404d2ae0(param_1);
          }
          plVar4 = plVar4 + 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar6);
      }
    }
    else {
      (**(code **)(*param_1 + 0x2c0))(param_1,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 1404d2ae0 FUN_1404d2ae0 body=323 status=ok
// SIG undefined FUN_1404d2ae0(void)

void FUN_1404d2ae0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_1404c6600(param_1,&local_18);
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar3 != '\0')) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar6 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      if ((*plVar6 != 0) && (lVar4 = FUN_1425bd330(*plVar6,6), lVar4 != 0)) {
        lVar5 = FUN_1404e6fc0();
        iVar7 = *(int *)(lVar5 + 0x90);
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar7) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar7 * 8)
            != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1404bc0e0(lVar4,CONCAT71((int7)(int3)((uint)iVar7 >> 8),1),10,&local_18);
        }
      }
    }
  }
  lVar4 = local_18;
  if ((int)local_10 != 0) {
    lVar5 = local_18 + 8;
    iVar7 = (int)local_10;
    do {
      *(undefined ***)(lVar5 + -8) = &PTR_FUN_143f74338;
      FUN_1404bebc0(lVar5 + 0x28);
      FUN_1404bf980(lVar5);
      lVar5 = lVar5 + 0x40;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (lVar4 != 0) {
    FMemory::Free(lVar4);
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x88,param_1);
  return;
}



// FUNCTION 1404d2c30 FUN_1404d2c30 body=549 status=ok
// SIG undefined FUN_1404d2c30(void)

void FUN_1404d2c30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong local_res8;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  FOutputDevice::LogfImpl(param_3,&DAT_143f6279c);
  if (param_1[0xac] == 0) {
    puVar5 = (undefined8 *)FUN_1404cf040(param_1,local_28);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    FOutputDevice::LogfImpl(param_3,L"%s Socket: null",puVar8);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x378))();
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_58,0,0);
    (**(code **)(*(longlong *)param_1[0xac] + 0x78))((longlong *)param_1[0xac],local_58);
    puVar5 = (undefined8 *)(**(code **)(*local_58 + 0x68))(local_58,local_38,1);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    local_res8 = param_1[3];
    FName::ToString(&local_res8,&local_78);
    puVar7 = &DAT_143f3eda8;
    if (local_70 != 0) {
      puVar7 = local_78;
    }
    puVar5 = (undefined8 *)FName::ToString(param_1 + 0x24,local_48);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar5;
    }
    pwVar6 = L"";
    if ((char)param_1[0x30] != '\0') {
      pwVar6 = L"(PEER)";
    }
    FString::PrintfImpl(&local_68,L"%s %s%s",puVar9,puVar7,pwVar6);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar7 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar7 = local_68;
    }
    FOutputDevice::LogfImpl(param_3,L"%s Socket: %s",puVar7,puVar8);
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
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
  }
  FOutputDevice::CanBeUsedOnAnyThread(param_1 + 5,param_4,L"SOCKETS",param_3);
  return;
}



// FUNCTION 1404d2e60 FUN_1404d2e60 body=123 status=ok
// SIG undefined FUN_1404d2e60(void)

undefined8 FUN_1404d2e60(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (0 < *(int *)(param_1 + 0xd8)) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar3 = 0;
    plVar2 = *(longlong **)(lVar1 + 0x98);
    iVar4 = 0;
    uVar6 = (longlong)*(int *)(lVar1 + 0xa0) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(lVar1 + 0xa0) < plVar2) {
      uVar6 = uVar3;
    }
    uVar5 = uVar3;
    if (uVar6 != 0) {
      do {
        if ((*plVar2 != 0) && (*(int *)(*plVar2 + 300) != 1)) {
          uVar5 = (ulonglong)((int)uVar5 + 1);
        }
        iVar4 = (int)uVar5;
        plVar2 = plVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar6);
    }
    if (*(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0x68) < iVar4) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404d2ee0 FUN_1404d2ee0 body=192 status=ok
// SIG undefined FUN_1404d2ee0(void)

undefined8 FUN_1404d2ee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xd0);
  lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0xd8) * 0x48;
  while( true ) {
    if (lVar4 == lVar1) {
      return 0;
    }
    if ((((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar3 == '\0')) ||
        (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((*(longlong **)(lVar4 + 0x10) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))(), cVar3 == '\0')) &&
        ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
         (cVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar3 == '\0')))) ||
       ((bVar2 && (cVar3 = (**(code **)**(undefined8 **)(param_2 + 8))
                                     (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar4 + 0x10)),
                  cVar3 != '\0')))) break;
    lVar4 = lVar4 + 0x48;
  }
  return 1;
}



// FUNCTION 1404d2fa0 FUN_1404d2fa0 body=190 status=ok
// SIG undefined FUN_1404d2fa0(void)

undefined8 FUN_1404d2fa0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar4 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar3;
  while( true ) {
    if (lVar3 == lVar4) {
      return 0;
    }
    if ((((*(longlong **)(lVar3 + 0x10) == (longlong *)0x0) ||
         (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x20))(), cVar2 == '\0')) ||
        (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((*(longlong **)(lVar3 + 0x10) == (longlong *)0x0) ||
         (cVar2 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x20))(), cVar2 == '\0')) &&
        ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
         (cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar2 == '\0')))) ||
       ((bVar1 && (cVar2 = (**(code **)**(undefined8 **)(param_2 + 8))
                                     (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar3 + 0x10)),
                  cVar2 != '\0')))) break;
    lVar3 = lVar3 + 0x40;
  }
  return 1;
}



// FUNCTION 1404d3060 FUN_1404d3060 body=69 status=ok
// SIG undefined FUN_1404d3060(void)

ulonglong FUN_1404d3060(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  
  if (*(int *)(param_1 + 0x50) == 1) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar1 = FUN_1404cfb00();
  return (ulonglong)(iVar1 < *(int *)(param_1 + 0xcc));
}



// FUNCTION 1404d30b0 FUN_1404d30b0 body=496 status=ok
// SIG undefined FUN_1404d30b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404d30b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uStack_40 = 0x21;
  puVar8 = (undefined8 *)0x0;
  local_48 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"E10CE5624988492C96F73AB781F3D607",0x42);
  FUN_141678c50(&local_48,&DAT_146852ec0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)*param_1;
  for (iVar9 = *(int *)(param_1 + 1); iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 8;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  lVar3 = FUN_1404cf3e0();
  if (lVar3 != 0) {
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    puVar6 = puVar8;
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = (longlong)param_1;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_1404d9c00;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 8,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      iVar9 = *(int *)(lVar3 + 0x10);
      puVar6 = (undefined8 *)*puVar6;
      *(int *)(lVar3 + 0x10) = iVar9 + 1;
      if (*(int *)(lVar3 + 0x14) < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 8,iVar9);
      }
      puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar3 + 8));
      *puVar7 = plVar4;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    param_1[3] = puVar6;
    local_48 = 0;
    uStack_40 = 0;
    puVar6 = (undefined8 *)operator_new(0x58);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_1404bdac0(puVar6,lVar3);
      *puVar6 = &PTR_FUN_143f76cd0;
      uVar2 = _DAT_146852ec8;
      uVar1 = _DAT_146852ec0;
      *(undefined4 *)(puVar6 + 6) = 1;
      puVar6[4] = uVar1;
      puVar6[5] = uVar2;
      *(undefined4 *)((longlong)puVar6 + 0x34) = (undefined4)local_48;
      *(undefined4 *)(puVar6 + 7) = local_48._4_4_;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = (undefined4)uStack_40;
      *(undefined4 *)(puVar6 + 8) = uStack_40._4_4_;
      *(undefined4 *)((longlong)puVar6 + 0x44) = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar8 = puVar6;
    }
    FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(lVar3 + 0x50),puVar8);
  }
  return;
}



// FUNCTION 1404d32a0 FUN_1404d32a0 body=197 status=ok
// SIG undefined FUN_1404d32a0(void)

void FUN_1404d32a0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  FWeakObjectPtr::operator=(param_1 + 600);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_1;
    *plVar2 = (longlong)&PTR_GetPoolName_143f61570;
    plVar2[2] = (longlong)FUN_1404da0a0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f615b8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
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
  return;
}



// FUNCTION 1404d3370 FUN_1404d3370 body=61 status=ok
// SIG undefined FUN_1404d3370(void)

undefined4 FUN_1404d3370(longlong param_1,int *param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x610) = 1;
  iVar1 = FUN_1428cced0();
  *param_2 = iVar1;
  *(float *)(param_1 + 0x658) = (float)iVar1;
  return 1;
}



// FUNCTION 1404d33b0 FUN_1404d33b0 body=112 status=ok
// SIG undefined FUN_1404d33b0(void)

void FUN_1404d33b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1425c2240(param_1);
  *(undefined8 *)(param_1 + 0x1988) = param_3;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  return;
}



// FUNCTION 1404d3420 FUN_1404d3420 body=1129 status=ok
// SIG undefined FUN_1404d3420(void)

undefined8
FUN_1404d3420(longlong *param_1,char param_2,undefined8 param_3,longlong param_4,undefined1 param_5,
             longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong *local_38;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  cVar4 = FUN_1425c25e0();
  if ((cVar4 != '\0') &&
     (plVar9 = (longlong *)(**(code **)(*param_1 + 0x378))(param_1), plVar9 != (longlong *)0x0)) {
    lVar10 = (**(code **)(*param_1 + 0x410))(param_1,param_4);
    param_1[0xac] = lVar10;
    if (lVar10 == 0) {
      param_1[0xac] = 0;
      uVar5 = (**(code **)(*plVar9 + 0x88))();
      FString::PrintfImpl(&local_80,L"WinSock: socket failed (%i)",uVar5);
      if (param_6 == &local_80) {
        if (local_80 == 0) {
          return 0;
        }
        FMemory::Free();
        return 0;
      }
      if (*param_6 != 0) {
        FMemory::Free();
      }
      *param_6 = local_80;
      *(undefined4 *)(param_6 + 1) = local_78;
    }
    else {
      cVar4 = (**(code **)(*plVar9 + 0x58))(plVar9);
      if ((cVar4 == '\0') &&
         (cVar4 = (**(code **)(*(longlong *)param_1[0xac] + 0x90))((longlong *)param_1[0xac],1),
         cVar4 == '\0')) {
        uVar5 = (**(code **)(*plVar9 + 0x88))(plVar9);
        uVar11 = (**(code **)(*plVar9 + 0x80))(plVar9);
        FString::PrintfImpl(&local_70,L"%s: setsockopt SO_BROADCAST failed (%i)",uVar11,uVar5);
        if (param_6 == &local_70) {
          if (local_70 == 0) {
            return 0;
          }
          FMemory::Free();
          return 0;
        }
        if (*param_6 != 0) {
          FMemory::Free();
        }
        *param_6 = local_70;
        *(undefined4 *)(param_6 + 1) = local_68;
        local_74 = local_64;
      }
      else {
        (**(code **)(*(longlong *)param_1[0xac] + 0xb8))((longlong *)param_1[0xac],param_5);
        (**(code **)(*(longlong *)param_1[0xac] + 200))((longlong *)param_1[0xac],1);
        local_98 = 0x20000;
        if (param_2 != '\0') {
          local_98 = 0x8000;
        }
        local_94 = local_98;
        (**(code **)(*(longlong *)param_1[0xac] + 0xd8))
                  ((longlong *)param_1[0xac],local_98,&local_94);
        (**(code **)(*(longlong *)param_1[0xac] + 0xd0))
                  ((longlong *)param_1[0xac],local_98,&local_98);
        lVar10 = *plVar9;
        uVar11 = FUN_141672640();
        plVar12 = (longlong *)(**(code **)(lVar10 + 0xb0))(plVar9,local_40,uVar11);
        local_88 = (longlong *)plVar12[1];
        local_90 = *plVar12;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
        }
        plVar12 = param_1 + 0xaa;
        if (plVar12 != &local_90) {
          *plVar12 = local_90;
          local_90 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xab,&local_88);
        }
        plVar3 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_88 + 8))(local_88,1);
            }
          }
        }
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_38 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_38 + 8))(local_38,1);
            }
          }
        }
        if (param_2 == '\0') {
          uVar6 = *(undefined4 *)(param_4 + 0x20);
        }
        else {
          uVar6 = (**(code **)(*param_1 + 0x418))(param_1,param_4);
        }
        (**(code **)(*(longlong *)*plVar12 + 0x30))((longlong *)*plVar12,uVar6);
        uVar6 = (**(code **)(*(longlong *)*plVar12 + 0x38))();
        uVar11 = CONCAT44(uVar5,1);
        iVar7 = FUN_1419c62a0(plVar9,param_1[0xac],*plVar12,*(int *)((longlong)param_1 + 0x54c) + 1,
                              uVar11);
        uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if (iVar7 == 0) {
          uVar11 = ISocketSubsystem::GetSocketError(plVar9,0x38);
          uVar8 = (**(code **)(*plVar9 + 0x88))(plVar9);
          uVar13 = (**(code **)(*plVar9 + 0x80))(plVar9);
          FString::PrintfImpl(&local_60,L"%s: binding to port %i failed (%i) (%s)",uVar13,uVar6,
                              CONCAT44(uVar5,uVar8),uVar11);
          if (param_6 == &local_60) {
            if (local_60 == 0) {
              return 0;
            }
            FMemory::Free();
            return 0;
          }
          if (*param_6 != 0) {
            FMemory::Free();
          }
          *param_6 = local_60;
          *(undefined4 *)(param_6 + 1) = local_58;
          local_74 = local_54;
        }
        else {
          cVar4 = (**(code **)(*(longlong *)param_1[0xac] + 0x88))((longlong *)param_1[0xac],1);
          if (cVar4 != '\0') {
            return 1;
          }
          uVar11 = ISocketSubsystem::GetSocketError(plVar9,0x38);
          uVar5 = (**(code **)(*plVar9 + 0x88))(plVar9);
          uVar13 = (**(code **)(*plVar9 + 0x80))(plVar9);
          FString::PrintfImpl(&local_50,L"%s: SetNonBlocking failed (%i) (%s)",uVar13,uVar5,uVar11);
          if (param_6 == &local_50) {
            if (local_50 == 0) {
              return 0;
            }
            FMemory::Free();
            return 0;
          }
          if (*param_6 != 0) {
            FMemory::Free();
          }
          *param_6 = local_50;
          *(undefined4 *)(param_6 + 1) = local_48;
          local_74 = local_44;
        }
      }
    }
    *(undefined4 *)((longlong)param_6 + 0xc) = local_74;
  }
  return 0;
}



// FUNCTION 1404d3890 FUN_1404d3890 body=480 status=ok
// SIG undefined FUN_1404d3890(void)

undefined8 FUN_1404d3890(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res8 = 0x11c;
  plVar10 = (longlong *)0x0;
  uVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = FUN_14286ad30(DAT_146b17150,uVar4,local_res8);
  param_1[9] = lVar5;
  lVar2 = DAT_146b17150;
  if (lVar5 == 0) {
    local_38 = (undefined1 *)0x0;
    uStack_30 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"init_base_failed",0x22);
    FUN_1404dd160(param_1,&local_38);
    if (local_38 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    return 0;
  }
  plVar9 = (longlong *)(DAT_146b17150 + 0x9e8);
  local_38 = &LAB_1404c2168;
  uStack_30._0_4_ = 0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  plVar7 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143f77f28;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_30._4_4_;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar5;
    *plVar6 = (longlong)&PTR_FUN_143f77f70;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
    plVar7 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
    iVar1 = *(int *)(lVar2 + 0x9f0);
    plVar7 = (longlong *)*plVar7;
    *(int *)(lVar2 + 0x9f0) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x9f4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
    }
    puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar9);
    *puVar8 = plVar6;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  param_1[0xb] = (longlong)plVar7;
  *(longlong *)(param_1[9] + 0x120) = param_1[8];
  local_res8 = *(undefined8 *)(param_1[9] + 0x18);
  if ((((int)param_1[0x14] != 0) && ((longlong *)param_1[0x13] != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0x13] + 0x18))(), cVar3 != '\0')) {
    if ((int)param_1[0x14] != 0) {
      plVar10 = (longlong *)param_1[0x13];
    }
    (**(code **)(*plVar10 + 0x40))(plVar10,param_1,1,&local_res8);
  }
  return 1;
}



// FUNCTION 1404d3a70 FUN_1404d3a70 body=738 status=ok
// SIG undefined FUN_1404d3a70(void)

char FUN_1404d3a70(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  char cVar11;
  longlong *plVar12;
  undefined8 local_res10;
  longlong local_48 [3];
  undefined4 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar11 = '\0';
  if (*(int *)(param_2 + 0x68) == 0) {
    return '\0';
  }
  plVar12 = (longlong *)0x0;
  if (param_1[0x1c] != 0) {
    plVar6 = (longlong *)UXSparseGridManager::GetPrivateStaticClass();
    plVar1 = (longlong *)param_1[0x1c];
    for (plVar9 = plVar1; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[6]) {
      if (plVar9 == plVar6) {
        if ((plVar1 != (longlong *)0x0) &&
           ((plVar1[0x1f] != 0 || ((**(code **)(*plVar1 + 0x368))(plVar1), plVar1[0x1f] != 0)))) {
          plVar1 = (longlong *)param_1[0x1c];
          if (plVar1 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)plVar1[0x1f];
            if (plVar9 == (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x368))(plVar1);
              plVar9 = (longlong *)plVar1[0x1f];
            }
          }
          uVar5 = (**(code **)(*plVar9 + 0x2d8))();
          *(undefined4 *)(param_2 + 0x20) = uVar5;
        }
        break;
      }
    }
  }
  cVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((cVar4 != '\0') && ((longlong *)param_1[9] != (longlong *)0x0)) {
    local_48[0] = 0;
    local_48[1] = 0;
    lVar10 = *(longlong *)param_1[9];
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    (**(code **)(lVar10 + 0x380))(param_1[9],uVar7);
    cVar4 = (**(code **)(*(longlong *)param_1[9] + 0x288))
                      ((longlong *)param_1[9],param_1 + 5,param_2,local_48);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x1a) = 0;
      (**(code **)(*param_1 + 0x2c0))(param_1,1,&DAT_1461fb7e8);
    }
    else {
      lVar10 = param_1[9];
      bVar3 = false;
      lVar2 = *(longlong *)(lVar10 + 0x90);
      param_1[0x19] = lVar2;
      if (*(longlong *)(lVar2 + 0x138) != 0) {
        uStack_20 = 0;
        local_28 = FUN_1404e01c0;
        local_48[2] = 0;
        local_30 = 0;
        puVar8 = (undefined8 *)operator_new(0x30,local_48 + 2);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(puVar8 + 1,param_1);
          *(undefined4 *)(puVar8 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar8 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar8 + 3) = uStack_20;
          *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_1c;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar8[5] = uVar7;
          *puVar8 = &PTR_FUN_143f77bd0;
        }
        FUN_1421e1490(*(undefined8 *)(param_1[0x19] + 0x138),local_48 + 2);
        lVar10 = param_1[9];
        bVar3 = true;
      }
      *(undefined1 *)(param_1 + 0x1a) = 2;
      *(longlong **)(lVar10 + 0x168) = param_1 + 5;
      *(int *)(param_1[9] + 0x78) = (int)param_1[7];
      *(undefined4 *)(param_1[9] + 0x7c) = *(undefined4 *)((longlong)param_1 + 0x3c);
      if (!bVar3) {
        FUN_1404e01c0(param_1);
      }
      cVar11 = '\x01';
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (cVar11 != '\0') {
      FName::FName(&local_res10,"NOT AVAILABLE",1);
      if (param_1[9] != 0) {
        local_res10 = *(undefined8 *)(*(longlong *)(param_1[9] + 0x10) + 0x18);
      }
      if ((((int)param_1[0x14] != 0) && ((longlong *)param_1[0x13] != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*(longlong *)param_1[0x13] + 0x18))(), cVar4 != '\0')) {
        if ((int)param_1[0x14] != 0) {
          plVar12 = (longlong *)param_1[0x13];
        }
        (**(code **)(*plVar12 + 0x40))(plVar12,param_1,0,&local_res10);
      }
    }
  }
  return cVar11;
}



// FUNCTION 1404d3d60 FUN_1404d3d60 body=287 status=ok
// SIG undefined FUN_1404d3d60(void)

undefined1 FUN_1404d3d60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint in_stack_ffffffffffffffa8;
  ulonglong uVar5;
  uint in_stack_ffffffffffffffb8;
  
  cVar2 = (**(code **)(*param_1 + 0x280))
                    (param_1,1,param_2,param_3,in_stack_ffffffffffffffa8 & 0xffffff00,param_4);
  if (cVar2 != '\0') {
    lVar1 = param_1[0x20];
    uVar3 = GetTransientPackage();
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar5 = 0;
    plVar4 = (longlong *)
             FUN_1417985e0(lVar1,uVar3,0,0,0,0,in_stack_ffffffffffffffb8 & 0xffffff00,0,0);
    param_1[0x12] = (longlong)plVar4;
    (**(code **)(*plVar4 + 0x318))
              (plVar4,param_1,param_1[0xac],param_3,2,uVar5 & 0xffffffff00000000,0);
    FUN_1425b9f20(param_1[0x12],1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1404d3e80 FUN_1404d3e80 body=539 status=ok
// SIG undefined FUN_1404d3e80(void)

undefined8 FUN_1404d3e80(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  int local_res18 [4];
  longlong local_88;
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined4 local_58;
  longlong local_50;
  longlong local_40;
  longlong *local_30;
  int local_28;
  longlong local_20;
  int local_10;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_14289aca0(local_78,0,puVar5,0);
  uVar4 = FCommandLine::Get();
  cVar3 = FParse::Value(uVar4,L"BeaconPort=",local_res18);
  if ((cVar3 != '\0') && (local_res18[0] != 0)) {
    *(int *)(param_1 + 0x19) = local_res18[0];
  }
  local_58 = (undefined4)param_1[0x19];
  *(undefined4 *)((longlong)param_1 + 0xcc) = param_3;
  if (((local_10 != 0) && (cVar3 = (**(code **)(*param_1 + 0x2b8))(param_1), cVar3 != '\0')) &&
     ((longlong *)param_1[9] != (longlong *)0x0)) {
    local_88 = 0;
    local_80 = 0;
    lVar1 = *(longlong *)param_1[9];
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    (**(code **)(lVar1 + 0x380))(param_1[9],uVar4);
    cVar3 = (**(code **)(*(longlong *)param_1[9] + 0x290))
                      ((longlong *)param_1[9],param_1 + 5,local_78,0,&local_88);
    if (cVar3 != '\0') {
      *(undefined4 *)(param_1 + 0x19) = local_58;
      *(longlong **)(param_1[9] + 0x168) = param_1 + 5;
      *(int *)(param_1[9] + 0x78) = (int)param_1[7];
      *(undefined4 *)(param_1[9] + 0x7c) = *(undefined4 *)((longlong)param_1 + 0x3c);
      if (local_88 != 0) {
        FMemory::Free();
      }
      uVar4 = 1;
      goto LAB_1404d3fea;
    }
    (**(code **)(*param_1 + 0x2c0))(param_1,1,&DAT_1461fb7e8);
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  uVar4 = 0;
LAB_1404d3fea:
  plVar2 = local_30;
  if (local_20 != 0) {
    FMemory::Free();
    plVar2 = local_30;
  }
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 1404d40a0 FUN_1404d40a0 body=105 status=ok
// SIG undefined FUN_1404d40a0(void)

undefined1
FUN_1404d40a0(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x280))(param_1,0,param_2,param_3,param_4,param_5);
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(*param_1 + 0x2a0))(param_1);
  uVar2 = (**(code **)(*(longlong *)param_1[0xaa] + 0x38))();
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  return 1;
}



// FUNCTION 1404d4110 FUN_1404d4110 body=950 status=ok
// SIG undefined FUN_1404d4110(void)

void FUN_1404d4110(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,uint param_6,int param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong local_f8;
  longlong *local_f0;
  undefined2 *local_e8;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48 [2];
  
  if ((param_6 == 0) || (uVar9 = param_6, 0x400 < (int)param_6)) {
    uVar9 = 0x400;
  }
  iVar13 = param_7;
  if (param_7 == 0) {
    iVar13 = 0x1c;
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_2,param_3,param_4,param_5,uVar9,iVar13);
  param_6 = param_6 & 0xffffff00;
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x378))(param_2);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x70))(plVar6,local_58,0,0);
  local_f0 = (longlong *)plVar6[1];
  local_f8 = *plVar6;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  plVar6 = param_1 + 0x32f;
  if (plVar6 != &local_f8) {
    *plVar6 = local_f8;
    local_f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x330,&local_f0);
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
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = *(undefined2 **)(param_4 + 0x10);
  }
  (**(code **)(*(longlong *)*plVar6 + 8))((longlong *)*plVar6,puVar10,&param_6);
  (**(code **)(*(longlong *)*plVar6 + 0x30))((longlong *)*plVar6,*(undefined4 *)(param_4 + 0x20));
  if ((char)param_6 == '\0') {
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0xb] + 0x378))();
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_d8,0,0);
    (**(code **)(*(longlong *)param_1[0x331] + 0x78))((longlong *)param_1[0x331],local_d8);
    FString::FString(local_c8,param_4);
    FString::FString(local_b8,param_4 + 0x10);
    local_a8 = *(undefined4 *)(param_4 + 0x20);
    FString::FString(local_a0,param_4 + 0x28);
    FString::FString(local_90,param_4 + 0x38);
    iVar13 = *(int *)(param_4 + 0x50);
    puVar12 = *(undefined8 **)(param_4 + 0x48);
    local_80 = (undefined8 *)0x0;
    local_78 = iVar13;
    if (iVar13 == 0) {
      local_74 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_80,iVar13,0);
      puVar11 = local_80;
      do {
        *puVar11 = 0;
        iVar4 = *(int *)(puVar12 + 1);
        _Src = (void *)*puVar12;
        *(int *)(puVar11 + 1) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,iVar4,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar11,_Src,(longlong)iVar4 * 2);
        }
        puVar11 = puVar11 + 2;
        puVar12 = puVar12 + 2;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    FString::FString(local_70,param_4 + 0x58);
    local_60 = *(undefined4 *)(param_4 + 0x68);
    uVar5 = (**(code **)(*local_d8 + 0x38))();
    FString::PrintfImpl(&local_e8,L"InitiatorPort=%d",uVar5);
    puVar10 = &DAT_143f3eda8;
    if (local_e0 != 0) {
      puVar10 = local_e8;
    }
    FURL::AddOption(local_c8,puVar10);
    if (local_e8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x378))();
    lVar8 = *plVar6;
    uVar7 = FUN_1428bd910(local_c8,local_48,1);
    lVar8 = (**(code **)(lVar8 + 0x48))(plVar6,uVar7,local_b8);
    param_1[0x332] = lVar8;
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (param_1[0x332] == 0) {
      (**(code **)(*param_1 + 0x2f8))(param_1);
    }
    FURL::~FURL(local_c8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_d0 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x2b0))(param_1);
  return;
}



// FUNCTION 1404d44d0 FUN_1404d44d0 body=585 status=ok
// SIG undefined FUN_1404d44d0(void)

void FUN_1404d44d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined4 param_6,uint param_7,int param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong local_58;
  longlong *local_50;
  undefined2 *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  longlong local_28 [2];
  
  if ((param_7 == 0) || (uVar8 = param_7, 0x400 < (int)param_7)) {
    uVar8 = 0x400;
  }
  iVar4 = param_8;
  if (param_8 == 0) {
    iVar4 = 0x1c;
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_2,param_3,param_4,param_6,uVar8,iVar4);
  param_7 = param_7 & 0xffffff00;
  (**(code **)(*param_5 + 0x68))(param_5,&local_48,0);
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x378))(param_2);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x70))(plVar6,local_38,0,0);
  local_50 = (longlong *)plVar6[1];
  local_58 = *plVar6;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  plVar6 = param_1 + 0x32f;
  if (plVar6 != &local_58) {
    *plVar6 = local_58;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x330,&local_50);
  }
  plVar7 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  puVar9 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar9 = local_48;
  }
  (**(code **)(*(longlong *)*plVar6 + 8))((longlong *)*plVar6,puVar9,&param_7);
  plVar7 = (longlong *)*plVar6;
  lVar3 = *plVar7;
  uVar5 = (**(code **)(*param_5 + 0x38))(param_5);
  (**(code **)(lVar3 + 0x30))(plVar7,uVar5);
  plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar6 + 0x68))((longlong *)*plVar6,local_28,0);
  plVar6 = param_1 + 0x17;
  if (plVar6 != plVar7) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    *plVar6 = *plVar7;
    *plVar7 = 0;
    *(int *)(param_1 + 0x18) = (int)plVar7[1];
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)plVar7 + 0xc);
    plVar7[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x2b0))(param_1);
  UNetConnection::SetClientLoginState(param_1,1);
  UNetConnection::SetExpectedClientLoginMsgType(param_1,0);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404d4720 InitializeModule body=65 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FBlastLoaderModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f73c50;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1404d4770 FUN_1404d4770 body=1561 status=ok
// SIG undefined FUN_1404d4770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404d4770(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  short *psVar13;
  undefined2 *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  wchar_t *pwVar19;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  undefined8 local_150;
  undefined2 *local_148;
  ulonglong local_140;
  short *local_138;
  undefined8 local_130;
  undefined2 *local_128;
  wchar_t *local_120;
  undefined2 *local_118;
  undefined8 local_110;
  undefined **local_108 [18];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined2 *local_58;
  undefined2 *local_50;
  wchar_t *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  bVar3 = false;
  bVar2 = false;
  local_158 = (wchar_t *)((ulonglong)local_158 & 0xffffffff00000000);
  lVar16 = *param_2;
  if (*(char *)(lVar16 + 0x50) == '\0') goto LAB_1404d4d1a;
  if (*(int *)(lVar16 + 0x60) == 0) {
    local_128 = &DAT_143f3eda8;
  }
  else {
    local_128 = *(undefined2 **)(lVar16 + 0x58);
  }
  local_118 = (undefined2 *)0x0;
  local_120 = L"Paks";
  local_110 = 0;
  FPaths::CombineInternal(&local_118,&local_128,2);
  plVar7 = (longlong *)FUN_1415c3d50();
  puVar14 = &DAT_143f3eda8;
  if ((int)local_110 != 0) {
    puVar14 = local_118;
  }
  cVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,puVar14);
  if (cVar5 != '\0') {
    local_158 = (wchar_t *)0x0;
    iVar6 = *(int *)((undefined8 *)*param_2 + 1);
    _Src = *(void **)*param_2;
    local_150._0_4_ = iVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,iVar6 + (5 - (uint)(iVar6 != 0)),0);
    pwVar19 = local_158;
    _guard_xfg_dispatch_icall_nop(local_158,_Src,(longlong)iVar6 * 2);
    iVar6 = (int)local_150;
    lVar16 = (longlong)(int)local_150;
    iVar18 = (5 - (uint)((int)local_150 != 0)) + (int)local_150;
    local_150 = (wchar_t *)CONCAT44(local_150._4_4_,iVar18);
    if (local_150._4_4_ < iVar18) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158);
      pwVar19 = local_158;
      iVar18 = (int)local_150;
    }
    builtin_wcsncpy(pwVar19 + (lVar16 - (ulonglong)(iVar6 != 0)),L".pak",5);
    if (((DAT_1468e2280 == 0) || (DAT_1468e2278 == (longlong *)0x0)) ||
       (cVar5 = (**(code **)(*DAT_1468e2278 + 0x18))(), cVar5 == '\0')) {
LAB_1404d49b2:
      bVar4 = false;
    }
    else {
      local_138 = (short *)0x0;
      local_128 = &DAT_143f3eda8;
      if ((int)local_110 != 0) {
        local_128 = local_118;
      }
      local_130 = 0;
      local_120 = L"";
      if (iVar18 != 0) {
        local_120 = pwVar19;
      }
      FPaths::CombineInternal(&local_138,&local_128,2);
      local_148 = (undefined2 *)0x0;
      psVar13 = &DAT_143f3eda8;
      if ((int)local_130 != 0) {
        psVar13 = local_138;
      }
      local_140 = 0;
      if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
        lVar16 = -1;
        do {
          lVar16 = lVar16 + 1;
        } while (psVar13[lVar16] != 0);
        uVar15 = (int)lVar16 + 1;
        local_140 = (ulonglong)uVar15;
        if (0 < (int)uVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        }
        FGenericPlatformString::Memcpy(local_148,psVar13,(longlong)(int)uVar15 * 2);
      }
      plVar7 = (longlong *)0x0;
      if (DAT_1468e2280 != 0) {
        plVar7 = DAT_1468e2278;
      }
      bVar3 = true;
      bVar2 = true;
      cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,&local_148,0,0);
      if (cVar5 == '\0') goto LAB_1404d49b2;
      bVar4 = true;
    }
    if ((bVar2) && (local_148 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((bVar3) && (local_138 != (short *)0x0)) {
      FMemory::Free();
    }
    if (bVar4) {
      FArchive::FArchive(local_108);
      local_68 = 0;
      local_78 = 0;
      lStack_70 = 0;
      local_108[0] = &PTR__scalar_deleting_destructor__143f747a8;
      FArchive::SetIsLoading(local_108,1);
      FArchive::SetIsPersistent(local_108,0);
      puVar9 = (undefined8 *)*param_2;
      puVar8 = (undefined8 *)FPaths::ProjectContentDir(&local_158);
      if (*(int *)(puVar8 + 1) == 0) {
        local_58 = &DAT_143f3eda8;
      }
      else {
        local_58 = (undefined2 *)*puVar8;
      }
      if (*(int *)(puVar9 + 1) == 0) {
        local_50 = &DAT_143f3eda8;
      }
      else {
        local_50 = (undefined2 *)*puVar9;
      }
      local_148 = (undefined2 *)0x0;
      local_48 = L"AssetRegistry.bin";
      local_140 = 0;
      FPaths::CombineInternal(&local_148,&local_58,3);
      if (local_158 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      plVar7 = (longlong *)FUN_1415c3d50();
      puVar14 = &DAT_143f3eda8;
      if ((int)local_140 != 0) {
        puVar14 = local_148;
      }
      cVar5 = (**(code **)(*plVar7 + 0x48))(plVar7,puVar14);
      if (cVar5 != '\0') {
        puVar14 = &DAT_143f3eda8;
        if ((int)local_140 != 0) {
          puVar14 = local_148;
        }
        cVar5 = FUN_141676460(&lStack_70,puVar14,0);
        if (cVar5 != '\0') {
          puVar9 = (undefined8 *)FName::FName(&local_158,L"AssetRegistry",1);
          uVar1 = *puVar9;
          uVar10 = FUN_14168dc80();
          plVar7 = (longlong *)FUN_141690010(uVar10,uVar1);
          local_78 = 0;
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
          (**(code **)(*plVar7 + 0x1a0))(plVar7,local_108);
        }
      }
      if (*(int *)(*param_2 + 0x60) == 0) {
        local_158 = L"";
      }
      else {
        local_158 = *(wchar_t **)(*param_2 + 0x58);
      }
      local_138 = (short *)0x0;
      local_150 = L"Movies";
      local_130 = 0;
      FPaths::CombineInternal(&local_138,&local_158,2);
      plVar7 = (longlong *)FUN_1415c3d50();
      psVar13 = &DAT_143f3eda8;
      if ((int)local_130 != 0) {
        psVar13 = local_138;
      }
      cVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,psVar13);
      if (cVar5 != '\0') {
        FUN_1415bfc90(&local_138);
      }
      puVar9 = (undefined8 *)*param_2;
      puVar8 = (undefined8 *)FPaths::ProjectContentDir(&local_158);
      if (*(int *)(puVar8 + 1) == 0) {
        local_58 = &DAT_143f3eda8;
      }
      else {
        local_58 = (undefined2 *)*puVar8;
      }
      if (*(int *)(puVar9 + 1) == 0) {
        local_50 = &DAT_143f3eda8;
      }
      else {
        local_50 = (undefined2 *)*puVar9;
      }
      local_128 = (undefined2 *)0x0;
      local_48 = L"Content";
      local_120 = (wchar_t *)0x0;
      FPaths::CombineInternal(&local_128,&local_58,3);
      if (local_158 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      FShaderCodeLibrary::OpenLibrary(*param_2,&local_128);
      plVar17 = *(longlong **)(param_1 + 0x38);
      puVar9 = (undefined8 *)*param_2;
      plVar7 = plVar17 + *(int *)(param_1 + 0x40);
      for (; plVar17 != plVar7; plVar17 = plVar17 + 1) {
        lVar16 = *plVar17;
        if (lVar16 != 0) {
          if (*(int *)(puVar9 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar9;
          }
          if (*(int *)(lVar16 + 0x50) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = *(undefined2 **)(lVar16 + 0x48);
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
          if (iVar6 == 0) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0x68,&local_158,lVar16);
            if ((int)local_158 == -1) {
              lVar16 = 0;
            }
            else {
              lVar16 = *(longlong *)(param_1 + 0x68) + (longlong)(int)local_158 * 0x18;
            }
            lVar11 = lVar16 + 8;
            if (lVar16 == 0) {
              lVar11 = 0;
            }
            if (lVar11 != 0) {
              *(undefined1 *)(lVar11 + 4) = 1;
            }
            break;
          }
        }
      }
      if (local_128 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_138 != (short *)0x0) {
        FMemory::Free();
      }
      if (local_148 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (lStack_70 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_108);
    }
    if (pwVar19 != (wchar_t *)0x0) {
      FMemory::Free(pwVar19);
    }
  }
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1404d4d1a:
  lVar16 = *param_2;
  plVar7 = (longlong *)(param_1 + 200);
  iVar6 = TArray<FString,FDefaultAllocator>::Find(plVar7,lVar16 + 0x20);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_1 + 0xd0);
    *(int *)(param_1 + 0xd0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xd4) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar6);
    }
    FString::FString((longlong)iVar6 * 0x10 + *plVar7,lVar16 + 0x20);
  }
  return;
}



// FUNCTION 1404d4d90 FUN_1404d4d90 body=1152 status=ok
// SIG undefined FUN_1404d4d90(void)

void FUN_1404d4d90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  longlong *local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [4];
  
  puVar5 = (undefined8 *)FName::FName(local_a8,L"AssetRegistry",1);
  uVar10 = *puVar5;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar10);
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  plVar8 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
  lVar9 = FUN_1404e7350();
  (**(code **)(*plVar8 + 0x28))(plVar8,*(undefined8 *)(lVar9 + 0x18),&local_a0,1);
  plVar8 = local_a0 + (longlong)(int)local_98 * 0xb;
  if (local_a0 != plVar8) {
    local_res8 = 0;
    plVar15 = local_a0;
    do {
      if (*plVar15 != 0) {
        puVar5 = (undefined8 *)FName::ToString(plVar15,local_90);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar5;
        }
        uVar10 = UObject::GetPrivateStaticClass();
        lVar9 = FUN_141799410(uVar10,0,puVar14,0);
        if (local_90[0] != 0) {
          FMemory::Free();
        }
        if (lVar9 == 0) {
          puVar5 = (undefined8 *)FName::ToString(plVar15,local_80);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar5;
          }
          uVar10 = UObject::GetPrivateStaticClass();
          lVar9 = FUN_141799c90(uVar10,0,puVar14,0,0,0,1);
          if (local_80[0] != 0) {
            FMemory::Free();
          }
          if (lVar9 == 0) goto LAB_1404d4f9c;
        }
        lVar11 = FUN_1404e7350();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_res18 = lVar9;
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x38,&local_res18);
          plVar12 = *(longlong **)(param_1 + 0x38);
          plVar2 = plVar12 + *(int *)(param_1 + 0x40);
          for (; local_res20 = lVar9, plVar12 != plVar2; plVar12 = plVar12 + 1) {
            if (*plVar12 == lVar9) {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(param_1 + 0x68,&local_res8,lVar9);
              if ((((int)local_res8 == -1) ||
                  (lVar9 = *(longlong *)(param_1 + 0x68) + (longlong)(int)local_res8 * 0x18,
                  lVar9 == 0)) || (lVar9 == -8)) {
                local_b8 = &local_res20;
                FUN_1404b9390(param_1 + 0x68,local_res10,&local_b8);
              }
              break;
            }
          }
        }
      }
LAB_1404d4f9c:
      plVar15 = plVar15 + 0xb;
    } while (plVar15 != plVar8);
  }
  FUN_1404cc9c0(param_1);
  if ((longlong)local_98 < 0) {
    iVar13 = local_98._4_4_;
    if ((int)local_98 != 0) {
      plVar8 = local_a0 + 6;
      iVar13 = (int)local_98;
      do {
        if (plVar8[1] != 0) {
          FMemory::Free();
        }
        plVar15 = (longlong *)*plVar8;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar8 = plVar8 + 0xb;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      iVar13 = local_98._4_4_;
    }
    local_98 = local_98 & 0xffffffff00000000;
    if (iVar13 != 0) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(&local_a0,0);
    }
  }
  else {
    if ((int)local_98 != 0) {
      plVar8 = local_a0 + 6;
      iVar13 = (int)local_98;
      do {
        if (plVar8[1] != 0) {
          FMemory::Free();
        }
        plVar15 = (longlong *)*plVar8;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar8 = plVar8 + 0xb;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    local_98 = local_98 & 0xffffffff00000000;
  }
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
  lVar9 = FUN_1404e7160();
  (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(lVar9 + 0x18),&local_a0,1);
  plVar7 = local_a0 + (longlong)(int)local_98 * 0xb;
  if (local_a0 != plVar7) {
    local_res8 = 0;
    plVar8 = local_a0;
    do {
      if (*plVar8 != 0) {
        puVar5 = (undefined8 *)FName::ToString(plVar8,local_70);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar5;
        }
        uVar10 = UObject::GetPrivateStaticClass();
        lVar9 = FUN_141799410(uVar10,0,puVar14,0);
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        if (lVar9 == 0) {
          puVar5 = (undefined8 *)FName::ToString(plVar8,local_60);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar5;
          }
          uVar10 = UObject::GetPrivateStaticClass();
          lVar9 = FUN_141799c90(uVar10,0,puVar14,0,0,0,1);
          if (local_60[0] != 0) {
            FMemory::Free();
          }
          if (lVar9 == 0) goto LAB_1404d51e0;
        }
        lVar11 = FUN_1404e7160();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_b0 = lVar9;
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x48,&local_b0);
        }
      }
LAB_1404d51e0:
      plVar8 = plVar8 + 0xb;
    } while (plVar8 != plVar7);
  }
  *(undefined1 *)(param_1 + 0x143) = 1;
  FUN_1404be960(&local_a0);
  return;
}



// FUNCTION 1404d5210 FUN_1404d5210 body=43 status=ok
// SIG undefined FUN_1404d5210(void)

longlong FUN_1404d5210(longlong *param_1)

{
  longlong *plVar1;
  uint7 uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)*param_1;
  plVar3 = plVar1 + (longlong)(int)param_1[1] * 2;
  while( true ) {
    uVar2 = (uint7)((ulonglong)plVar1 >> 8);
    if (plVar1 == plVar3) {
      return (ulonglong)uVar2 << 8;
    }
    if (((int)plVar1[1] != 0) && (*plVar1 != 0)) break;
    plVar1 = plVar1 + 2;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1404d5240 FUN_1404d5240 body=49 status=ok
// SIG undefined FUN_1404d5240(void)

undefined8 FUN_1404d5240(longlong param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xd8) != 0) {
    return 1;
  }
  if ((*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1404d5290 GetGender body=8 status=ok
// SIG undefined GetGender(void)

undefined1 CLogicalCitizen::GetGender(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xd8);
}



// FUNCTION 1404d52a0 FUN_1404d52a0 body=386 status=ok
// SIG undefined FUN_1404d52a0(void)

bool FUN_1404d52a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  wchar_t *local_28;
  undefined8 local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  iVar11 = *(int *)(param_2 + 8);
  if (iVar11 < 2) {
    return iVar11 < 2;
  }
  lVar5 = FUN_1404ce1d0();
  if (lVar5 == 0) {
    return iVar11 < 2;
  }
  iVar11 = 0;
  iVar10 = 0;
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  cVar4 = FUN_1404e14f0(param_2,param_2,&local_18,&local_28,1,0);
  pwVar3 = local_18;
  if (cVar4 != '\0') {
    pwVar8 = L"";
    if ((int)local_10 != 0) {
      pwVar8 = local_18;
    }
    uVar6 = _wcstoui64(pwVar8,(wchar_t **)0x0,0x10);
    pwVar8 = L"";
    if ((int)local_20 != 0) {
      pwVar8 = local_28;
    }
    uVar7 = _wcstoui64(pwVar8,(wchar_t **)0x0,0x10);
    iVar10 = (int)uVar7;
    iVar11 = (int)uVar6;
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (pwVar3 != (wchar_t *)0x0) {
    FMemory::Free(pwVar3);
  }
  if ((iVar11 != 0) && (iVar10 != 0)) {
    plVar9 = *(longlong **)(lVar5 + 0x48);
    plVar1 = plVar9 + *(int *)(lVar5 + 0x50);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      plVar2 = (longlong *)*plVar9;
      if ((((plVar2 != (longlong *)0x0) && ((int)plVar2[8] == iVar10)) && (plVar2[6] != 0)) &&
         (*(int *)(plVar2[6] + 0x30) == iVar11)) {
        if (plVar2 == (longlong *)0x0) {
          return false;
        }
        cVar4 = (**(code **)(*plVar2 + 0x288))(plVar2);
        if (cVar4 == '\0') {
          return false;
        }
        cVar4 = (**(code **)(*plVar2 + 0x280))(plVar2,0);
        if (cVar4 == '\0') {
          return false;
        }
        return true;
      }
    }
  }
  return false;
}



// FUNCTION 1404d5430 FUN_1404d5430 body=800 status=ok
// SIG undefined FUN_1404d5430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1404d5430(longlong param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 local_74;
  undefined8 local_68 [2];
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar3 = local_48;
  if (param_2 == 0) {
LAB_1404d5739:
    return uVar3 & 0xffffffffffffff00;
  }
  if ((param_3 == (longlong *)0x0) ||
     (uVar3 = (**(code **)(*param_3 + 0x768))(param_3), (char)uVar3 != '\0')) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x68,&local_78,*(undefined8 *)(param_2 + 0x30));
    uVar3 = (longlong)local_78;
    if (local_78 != -1) {
      uVar3 = *(ulonglong *)(param_1 + 0x68);
      lVar4 = uVar3 + (longlong)local_78 * 0x18;
      if ((lVar4 != 0) && (puVar9 = (uint *)(lVar4 + 8), puVar9 != (uint *)0x0)) {
        uVar3 = 0;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          uVar2 = *(int *)(*(longlong *)(param_2 + 0x38) + 0x58) - 1;
          uVar3 = (ulonglong)uVar2;
          uVar2 = 1 << ((byte)uVar2 & 0x1f);
          if ((uVar2 != 0) && ((*puVar9 & uVar2) == 0)) goto LAB_1404d5739;
        }
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
    goto LAB_1404d5739;
  }
  plVar10 = (longlong *)param_3[0xa1];
  if (plVar10 == (longlong *)0x0) goto LAB_1404d5739;
  lVar4 = FUN_1429c30a0();
  iVar6 = *(int *)(lVar4 + 0x90);
  uVar3 = (longlong)iVar6;
  if ((*(int *)(plVar10[2] + 0x90) < iVar6) ||
     (uVar3 = *(ulonglong *)(plVar10[2] + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar6 * 8) != lVar4 + 0x88)) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  if ((char)uVar3 == '\0') goto LAB_1404d5739;
  uVar3 = (**(code **)(*plVar10 + 0x280))(plVar10);
  if (uVar3 != 0) {
    plVar10 = *(longlong **)(uVar3 + 0x1970);
  }
  if ((plVar10 == (longlong *)0x0) || (*(longlong *)(param_2 + 0x30) == 0)) goto LAB_1404d5739;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(local_68,0);
  local_50 = 0x80;
  puVar7 = local_68;
  if (local_58 != (undefined8 *)0x0) {
    puVar7 = local_58;
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  FUN_1404cc8a0(local_68,plVar10 + 0x32a);
  puVar7 = local_58;
  lVar4 = *(longlong *)(param_2 + 0x30);
  bVar1 = true;
  if (lVar4 == 0) {
LAB_1404d55ad:
    bVar12 = false;
  }
  else {
    iVar6 = *(int *)(lVar4 + 0x30) + -1;
    if ((iVar6 < 0) || (bVar12 = bVar1, local_50 <= iVar6)) {
      bVar12 = false;
    }
    if (!bVar12) goto LAB_1404d55ad;
    puVar8 = local_68;
    if (local_58 != (undefined8 *)0x0) {
      puVar8 = local_58;
    }
    uVar2 = 1 << ((byte)iVar6 & 0x1f) &
            *(uint *)((longlong)puVar8 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    bVar12 = uVar2 != 0;
    if (uVar2 != 0) goto LAB_1404d56c2;
  }
  if (*(int *)(lVar4 + 0x60) < 1) goto LAB_1404d56c2;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(local_68,0);
  local_50 = 0x80;
  puVar8 = local_68;
  if (local_58 != (undefined8 *)0x0) {
    puVar8 = local_58;
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  FUN_1404cc8a0(local_68,plVar10 + 0x32c);
  puVar8 = local_58;
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 == 0) {
LAB_1404d56b2:
    bVar12 = false;
  }
  else {
    if (*(longlong *)(lVar4 + 0x30) == 0) {
      local_74 = DAT_146852e50;
    }
    else {
      local_74 = CONCAT44(*(undefined4 *)(lVar4 + 0x58),
                          *(undefined4 *)(*(longlong *)(lVar4 + 0x30) + 0x30));
    }
    FUN_1404cc340(&DAT_1461fb880,&local_78,&local_74);
    if (((local_78 == -1) || (lVar4 = DAT_1461fb880 + (longlong)local_78 * 0x14, lVar4 == 0)) ||
       (piVar5 = (int *)(lVar4 + 8), piVar5 == (int *)0x0)) goto LAB_1404d56b2;
    iVar6 = *piVar5 + -1;
    if ((iVar6 < 0) || (local_50 <= iVar6)) {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_1404d56b2;
    puVar11 = local_68;
    if (puVar8 != (undefined8 *)0x0) {
      puVar11 = puVar8;
    }
    bVar12 = (*(uint *)((longlong)puVar11 +
                       (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4) &
             1 << ((byte)iVar6 & 0x1f)) != 0;
  }
  if (puVar8 != (undefined8 *)0x0) {
    FMemory::Free(puVar8);
  }
LAB_1404d56c2:
  if (puVar7 != (undefined8 *)0x0) {
    FMemory::Free(puVar7);
  }
  return (ulonglong)bVar12;
}



// FUNCTION 1404d5760 FUN_1404d5760 body=29 status=ok
// SIG undefined FUN_1404d5760(void)

bool FUN_1404d5760(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1404cfb00();
  return *(int *)(param_1 + 0xcc) <= iVar1;
}



// FUNCTION 1404d5780 FUN_1404d5780 body=117 status=ok
// SIG undefined FUN_1404d5780(void)

ulonglong FUN_1404d5780(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_res10 [6];
  
  lVar1 = FUN_1404ce1d0();
  uVar2 = 0;
  if (lVar1 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar1 + 0x68),local_res10);
    uVar3 = 0;
    if (local_res10[0] != -1) {
      uVar3 = *(longlong *)(lVar1 + 0x68) + (longlong)local_res10[0] * 0x18;
    }
    uVar2 = uVar3 + 8;
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    if ((param_1 != 0) && (uVar2 != 0)) {
      return (ulonglong)*(byte *)(uVar2 + 4);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1404d5800 FUN_1404d5800 body=41 status=ok
// SIG undefined FUN_1404d5800(void)

void FUN_1404d5800(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1404ce1d0();
  if (lVar1 != 0) {
    FUN_1404d5cc0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1404d5830 FUN_1404d5830 body=28 status=ok
// SIG undefined FUN_1404d5830(void)

bool FUN_1404d5830(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 0x650) == 0) {
    return true;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x650) + 0x14);
  LOCK();
  bVar2 = *piVar1 == 0;
  if (bVar2) {
    *piVar1 = 0;
  }
  UNLOCK();
  return !bVar2;
}



// FUNCTION 1404d5850 FUN_1404d5850 body=167 status=ok
// SIG undefined FUN_1404d5850(void)

undefined1 FUN_1404d5850(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res10 [6];
  
  lVar2 = FUN_1404ce1d0();
  if (lVar2 == 0) {
    return 0;
  }
  if (param_1 != (longlong *)0x0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar2 + 0x68),local_res10);
    lVar3 = 0;
    if (local_res10[0] != -1) {
      lVar3 = *(longlong *)(lVar2 + 0x68) + (longlong)local_res10[0] * 0x18;
    }
    lVar2 = lVar3 + 8;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x298))(param_1);
      if (iVar1 == 0) {
        return 1;
      }
      if (iVar1 == 1) {
        return *(undefined1 *)(lVar2 + 4);
      }
    }
  }
  return 0;
}



// FUNCTION 1404d5900 FUN_1404d5900 body=61 status=ok
// SIG undefined FUN_1404d5900(void)

void FUN_1404d5900(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1404ce1d0();
  if (lVar1 != 0) {
    FUN_1404d5430(lVar1,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1404d5940 IsLoaded body=24 status=ok
// SIG undefined IsLoaded(void)

void UOnlineEngineInterfaceImpl::IsLoaded(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  IOnlineSubsystem::IsLoaded(local_res10);
  return;
}



// FUNCTION 1404d5960 FUN_1404d5960 body=345 status=ok
// SIG undefined FUN_1404d5960(void)

bool FUN_1404d5960(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_1404d0fe0(param_1,&local_38,param_2,param_3);
  FUN_1404cf790(&local_28,param_2,0);
  if ((local_28 == (longlong *)0x0) || (local_38 == 0)) {
    bVar6 = false;
  }
  else {
    local_18 = local_38;
    plStack_10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    iVar5 = (**(code **)(*local_28 + 0x78))(local_28,&local_18);
    plVar4 = plStack_10;
    bVar6 = iVar5 == 2;
    if (plStack_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_10)(plStack_10);
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
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return bVar6;
}



// FUNCTION 1404d5ac0 FUN_1404d5ac0 body=325 status=ok
// SIG undefined FUN_1404d5ac0(void)

undefined8 FUN_1404d5ac0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x30);
  puVar5 = puVar6;
  do {
    if (puVar5 == puVar6 + (longlong)iVar4 * 4) {
LAB_1404d5b18:
      puVar6 = *(undefined8 **)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x30);
      puVar5 = puVar6;
      while( true ) {
        if (puVar5 == puVar6 + (longlong)iVar4 * 4) {
          return 0;
        }
        cVar2 = (*(code *)**(undefined8 **)*param_3)((undefined8 *)*param_3,*puVar5);
        if (cVar2 != '\0') break;
        puVar5 = puVar5 + 4;
      }
      iVar4 = (int)((longlong)puVar5 - (longlong)puVar6 >> 5);
      if (iVar4 == -1) {
        return 0;
      }
      uVar1 = *param_2;
      lVar3 = (longlong)iVar4 * 0x20;
      puVar6 = *(undefined8 **)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x28));
      puVar5 = puVar6 + (longlong)*(int *)(lVar3 + 0x18 + *(longlong *)(param_1 + 0x28)) * 2;
      while( true ) {
        if (puVar6 == puVar5) {
          return 0;
        }
        cVar2 = (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,uVar1);
        if (cVar2 != '\0') break;
        puVar6 = puVar6 + 2;
      }
      return 1;
    }
    cVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*puVar5);
    if (cVar2 != '\0') {
      iVar4 = (int)((longlong)puVar5 - (longlong)puVar6 >> 5);
      if (iVar4 != -1) {
        uVar1 = *param_3;
        lVar3 = (longlong)iVar4 * 0x20;
        puVar6 = *(undefined8 **)(lVar3 + 0x10 + *(longlong *)(param_1 + 0x28));
        puVar5 = puVar6 + (longlong)*(int *)(lVar3 + 0x18 + *(longlong *)(param_1 + 0x28)) * 2;
        for (; puVar6 != puVar5; puVar6 = puVar6 + 2) {
          cVar2 = (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,uVar1);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
      goto LAB_1404d5b18;
    }
    puVar5 = puVar5 + 4;
  } while( true );
}



// FUNCTION 1404d5c20 FUN_1404d5c20 body=155 status=ok
// SIG undefined FUN_1404d5c20(void)

undefined1 FUN_1404d5c20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404cf2e0(&local_18,0);
  if (local_18 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*local_18 + 0xc0))();
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1404d5cc0 FUN_1404d5cc0 body=143 status=ok
// SIG undefined FUN_1404d5cc0(void)

bool FUN_1404d5cc0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x68),local_res8,param_2);
  puVar5 = (uint *)0x0;
  if (local_res8[0] != -1) {
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x68) + (longlong)local_res8[0] * 0x18);
  }
  puVar4 = puVar5 + 2;
  if (puVar5 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  if ((param_2 != 0) && (puVar4 != (uint *)0x0)) {
    uVar1 = *puVar4;
    uVar2 = FUN_1404cfc30(param_2);
    uVar3 = FUN_1404cfc30(param_2);
    return (uVar2 & uVar1) == uVar3;
  }
  return false;
}



// FUNCTION 1404d5db0 FUN_1404d5db0 body=107 status=ok
// SIG undefined FUN_1404d5db0(void)

undefined8 FUN_1404d5db0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(), cVar2 != '\0')) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x38) * 0x28;
    while( true ) {
      if (lVar3 == lVar1) {
        return 1;
      }
      if ((*(longlong **)(lVar3 + 8) == (longlong *)0x0) ||
         (cVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x20))(), cVar2 == '\0')) break;
      lVar3 = lVar3 + 0x28;
    }
  }
  return 0;
}



// FUNCTION 1404d5e40 FUN_1404d5e40 body=255 status=ok
// SIG undefined FUN_1404d5e40(void)

void FUN_1404d5e40(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    iVar3 = (**(code **)(*local_18 + 0x20))(local_18,param_2);
    if (iVar3 == 0) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
      lVar2 = *plVar4;
      uVar5 = (**(code **)(*param_1 + 0x2b0))(param_1);
      uVar5 = UGameInstance::GetFirstGamePlayer(uVar5);
      (**(code **)(lVar2 + 0x298))(plVar4,uVar5,param_3);
    }
    else {
      FUN_1404c0750(param_1 + 0x1a,param_3);
      *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_3 + 0xb8);
      plVar4 = (longlong *)FUN_1404cad30(param_1,local_res8,param_2,param_1 + 5);
      param_1[0x13] = *plVar4;
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return;
}



// FUNCTION 1404d5f40 FUN_1404d5f40 body=416 status=ok
// SIG undefined FUN_1404d5f40(void)

void FUN_1404d5f40(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar8 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      if ((*plVar8 != 0) && (lVar5 = FUN_1425bd330(*plVar8,6), lVar5 != 0)) {
        lVar6 = FUN_1404e6fc0();
        iVar7 = *(int *)(lVar6 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar7) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar7 * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_1404bbf80(lVar5,CONCAT71((int7)(int3)((uint)iVar7 >> 8),1),0xe,local_res10);
        }
      }
    }
  }
  if (((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
      (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) &&
     (iVar7 = *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0) + -1, lVar5 = (longlong)iVar7,
     -1 < iVar7)) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x98) + lVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_1404dffc0(plVar1);
        (**(code **)(*plVar1 + 0x300))(plVar1);
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  for (iVar7 = *(int *)(param_1 + 0xd8); iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar2 = &PTR_FUN_143f74338;
    FUN_1404bebc0(puVar2 + 6);
    FUN_1404bf980(puVar2 + 1);
    puVar2 = puVar2 + 9;
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0xd0,0);
  }
  FUN_1404ca6b0(param_1 + 0x60,0);
  return;
}



// FUNCTION 1404d60e0 FUN_1404d60e0 body=709 status=ok
// SIG undefined FUN_1404d60e0(void)

void FUN_1404d60e0(longlong param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 local_res18 [4];
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x68) <= param_2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    plVar3 = *(longlong **)((longlong)param_2 * 0x40 + 0x18 + *(longlong *)(param_1 + 0x60));
    plVar4 = *(longlong **)((longlong)param_2 * 0x40 + 0x10 + *(longlong *)(param_1 + 0x60));
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_58 = &PTR_FUN_143f740c8;
    local_40 = 0;
    local_38 = 0;
    local_res18[0] = param_3;
    local_50 = plVar4;
    local_48 = plVar3;
    if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar7 != '\0')) {
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
      plVar10 = plVar11 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
      for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
        lVar8 = *plVar11;
        if (lVar8 != 0) {
          if ((*(longlong **)(lVar8 + 0x160) == (longlong *)0x0) ||
             (cVar7 = (**(code **)(**(longlong **)(lVar8 + 0x160) + 0x20))(), cVar7 == '\0')) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            if ((plVar4 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4), cVar7 == '\0')) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_1404d61fe;
            bVar5 = true;
          }
          else {
LAB_1404d61fe:
            bVar5 = false;
          }
          if ((*(longlong **)(lVar8 + 0x160) == (longlong *)0x0) ||
             (cVar7 = (**(code **)(**(longlong **)(lVar8 + 0x160) + 0x20))(), cVar7 == '\0')) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
LAB_1404d623d:
            if ((bVar5) &&
               (cVar7 = (**(code **)*plVar4)(plVar4,*(undefined8 *)(lVar8 + 0x160)), cVar7 != '\0'))
            goto LAB_1404d6255;
            bVar5 = false;
          }
          else {
            if ((plVar4 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4), cVar7 == '\0')) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) goto LAB_1404d623d;
LAB_1404d6255:
            bVar5 = true;
          }
          if (bVar5) {
            lVar8 = FUN_1425bd330(lVar8,6);
            if (lVar8 != 0) {
              lVar9 = FUN_1404e6fc0();
              iVar2 = *(int *)(lVar9 + 0x90);
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < iVar2) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
                  lVar9 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                FUN_1404bbf80(lVar8,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0xe,local_res18);
              }
            }
            break;
          }
        }
      }
    }
    if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar7 != '\0')) {
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
      plVar4 = plVar10 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
      for (; plVar10 != plVar4; plVar10 = plVar10 + 1) {
        plVar11 = (longlong *)*plVar10;
        if ((plVar11 != (longlong *)0x0) &&
           (cVar7 = FUniqueNetIdWrapper::operator==(plVar11 + 0x2b,&local_58), cVar7 != '\0')) {
          FUN_1404dffc0(plVar11);
          (**(code **)(*plVar11 + 0x300))(plVar11);
          break;
        }
      }
    }
    plVar4 = local_48;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar3 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404d63b0 LoginPIEInstance body=153 status=ok
// SIG undefined LoginPIEInstance(void)

void UOnlineEngineInterface::LoginPIEInstance
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  plVar2 = (longlong *)0x0;
  local_18[1] = 0x10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Not implemented",0x20);
  if (((int)param_5[1] != 0) && ((longlong *)*param_5 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_5 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_5[1] != 0) {
        plVar2 = (longlong *)*param_5;
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_3,0,local_18);
    }
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404d6450 FUN_1404d6450 body=484 status=ok
// SIG undefined FUN_1404d6450(void)

undefined8 FUN_1404d6450(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong *local_48;
  longlong *local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x378))();
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_48,0,0);
  (**(code **)(**(longlong **)(param_1 + 0x1988) + 0x78))(*(longlong **)(param_1 + 0x1988),local_48)
  ;
  iVar2 = *(int *)(param_1 + 0x1934);
  if (iVar2 == 0) {
    pwVar7 = L"NotStarted";
  }
  else if (iVar2 == 1) {
    pwVar7 = L"SentChallenge";
  }
  else {
    pwVar7 = L"Invalid";
    if (iVar2 == 2) {
      pwVar7 = L"Complete";
    }
  }
  iVar2 = *(int *)(param_1 + 300);
  if (iVar2 == 2) {
    pwVar6 = L"Pending";
  }
  else if (iVar2 == 3) {
    pwVar6 = L"Open";
  }
  else {
    pwVar6 = L"Invalid";
    if (iVar2 == 1) {
      pwVar6 = L"Closed";
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x1978);
  puVar5 = (undefined8 *)(**(code **)(*local_48 + 0x68))(local_48,local_28,1);
  puVar9 = &DAT_143f3eda8;
  if (*(int *)(puVar5 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar5;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x68))(plVar4,local_38,1);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar5;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    puVar9 = *(undefined2 **)(param_1 + 0xb8);
  }
  FString::PrintfImpl(param_2,
                      L"url=%s remote=%s local=%s state: %s handshake: %s uid: %hhu %hhu %hhu",
                      puVar9,puVar8,puVar10,pwVar6,pwVar7,*(undefined1 *)(param_1 + 0x193d),
                      *(undefined1 *)(param_1 + 0x193e),*(undefined1 *)(param_1 + 0x193f));
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_2;
}



// FUNCTION 1404d6640 FUN_1404d6640 body=106 status=ok
// SIG undefined FUN_1404d6640(void)

void FUN_1404d6640(longlong *param_1)

{
  longlong *plVar1;
  
  <lambda_35ab28b87e35bf3b4fc6cb932d2fec24>::<lambda_invoker_cdecl>();
  if ((param_1[0xac] != 0) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x378))(param_1);
    (**(code **)(*(longlong *)param_1[0xac] + 8))();
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1[0xac]);
    param_1[0xac] = 0;
  }
  return;
}



// FUNCTION 1404d66b0 FUN_1404d66b0 body=34 status=ok
// SIG undefined FUN_1404d66b0(void)

undefined8 FUN_1404d66b0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x68))(*(longlong **)(param_1 + 0x550),param_2,1);
  return param_2;
}



// FUNCTION 1404d66e0 FUN_1404d66e0 body=31 status=ok
// SIG undefined FUN_1404d66e0(void)

undefined8 FUN_1404d66e0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1978) + 0x68))();
  return param_2;
}



// FUNCTION 1404d6700 FUN_1404d6700 body=427 status=ok
// SIG undefined FUN_1404d6700(void)

void FUN_1404d6700(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  ulonglong in_stack_ffffffffffffffa8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  char local_2c;
  
  if ((longlong *)param_1[0x332] != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)param_1[0x332] + 8))();
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = (**(code **)(*(longlong *)param_1[0x332] + 0x10))();
    if (iVar3 != 0) {
      *(undefined4 *)(*(longlong *)(param_1[0xb] + 0x90) + 300) = 1;
      plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[0xb] + 0x378))();
      (**(code **)(*plVar4 + 0xa0))(plVar4,param_1[0x332]);
      param_1[0x332] = 0;
      return;
    }
    plVar4 = (longlong *)param_1[0x32f];
    lVar1 = *plVar4;
    uVar5 = (**(code **)(*(longlong *)param_1[0x332] + 0x18))();
    (**(code **)(lVar1 + 0x20))(plVar4,uVar5);
    plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[0xb] + 0x378))();
    (**(code **)(*plVar4 + 0xa0))(plVar4,param_1[0x332]);
    param_1[0x332] = 0;
    (**(code **)(*param_1 + 0x378))(param_1);
  }
  lVar1 = param_1[0x27];
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x240) == '\0')) {
    local_48 = 0;
    local_40 = 0;
    FUN_1421e2770(lVar1,&local_38,param_2,param_4,in_stack_ffffffffffffffa8 & 0xffffffffffffff00,
                  &local_48);
    param_3 = 0;
    if (local_2c == '\0') {
      param_2 = local_38;
      param_3 = (int)((local_30 + 7 >> 0x1f & 7U) + local_30 + 7) >> 3;
    }
  }
  local_res8[0] = 0;
  if (0 < param_3) {
    (**(code **)(*(longlong *)param_1[0x331] + 0x48))
              ((longlong *)param_1[0x331],param_2,param_3,local_res8,param_1[0x32f]);
  }
  return;
}



// FUNCTION 1404d68b0 FUN_1404d68b0 body=440 status=ok
// SIG undefined FUN_1404d68b0(void)

void FUN_1404d68b0(longlong *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  char local_res8 [8];
  undefined4 local_res10 [2];
  undefined8 local_68;
  int local_60;
  char local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_res8[0] = 1 < (int)param_2[1];
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x378))();
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_58,0,0);
  if (local_res8[0] != '\0') {
    if ((int)param_2[1] == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    (**(code **)(*local_58 + 8))(local_58,puVar6,local_res8);
    if (local_res8[0] != '\0') {
      lVar3 = param_1[0x15];
      uVar5 = param_3;
      if (lVar3 != 0) {
        plVar4 = (longlong *)FString::FString(local_48,param_2);
        uVar5 = FString::FString(local_38,plVar4);
        FUN_1421e2770(lVar3,&local_68,param_3,param_4,1,uVar5);
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        uVar5 = local_68;
        param_4 = local_60;
        if (local_5c != '\0') {
          param_4 = 0;
          uVar5 = param_3;
        }
      }
      local_res10[0] = 0;
      if (0 < param_4) {
        (**(code **)(*(longlong *)param_1[0xac] + 0x48))
                  ((longlong *)param_1[0xac],uVar5,
                   (int)((param_4 + 7 >> 0x1f & 7U) + param_4 + 7) >> 3,local_res10,local_58);
      }
    }
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
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404d6a70 FUN_1404d6a70 body=504 status=ok
// SIG undefined FUN_1404d6a70(void)

undefined1
FUN_1404d6a70(undefined8 param_1,undefined8 param_2,undefined1 param_3,longlong param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_1404d0fe0(param_1,&local_38,param_2,param_3);
  if (local_38 != 0) {
    FUN_1404d13e0(&local_48,param_2);
    plVar3 = local_40;
    if (local_48 != (longlong *)0x0) {
      local_28 = local_38;
      plStack_20 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      lVar5 = *local_48;
      uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_4 + 8,local_18);
      uVar6 = (**(code **)(lVar5 + 0x90))(local_48,&local_28,uVar7,param_5);
      plVar3 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_20)(plStack_20);
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
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_10 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)local_10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      goto LAB_1404d6c10;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  uVar6 = 0;
LAB_1404d6c10:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1404d6c70 ResetGameWorldState body=83 status=ok
// SIG undefined ResetGameWorldState(void)

void UReplicationDriver::ResetGameWorldState(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\NetworkDelegates.h",
             0x44,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyAcceptedConnection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\NetworkDelegates.h",
             0x44,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyAcceptedConnection");
  return;
}



// FUNCTION 1404d6cd0 IsDependent body=85 status=ok
// SIG undefined IsDependent(void)

undefined1 UMaterialFunctionInterface::IsDependent(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\NetworkDelegates.h",
             0x4d,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyAcceptingChannel");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\NetworkDelegates.h",
             0x4d,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyAcceptingChannel");
  return 0;
}



// FUNCTION 1404d6d30 FUN_1404d6d30 body=160 status=ok
// SIG undefined FUN_1404d6d30(void)

ulonglong FUN_1404d6d30(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (*(longlong *)(*(longlong *)(uVar4 + 0x58) + 0x90) == 0) {
    if (*(int *)(param_2 + 0x34) != 0) goto LAB_1404d6dc3;
    bVar5 = *(int *)(param_2 + 0x44) == 1;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x44);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 == 6) {
      lVar3 = FUN_1404e6fc0();
      iVar2 = *(int *)(lVar3 + 0x90);
      uVar4 = (longlong)iVar2;
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar2) ||
         (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
         *(longlong *)(uVar4 + (longlong)iVar2 * 8) != lVar3 + 0x88)) {
        uVar4 = uVar4 & 0xffffffffffffff00;
      }
      else {
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((char)uVar4 != '\0') {
        *(longlong *)(param_2 + 0x68) = param_1 + -0x28;
        return CONCAT71((int7)((ulonglong)(param_1 + -0x28) >> 8),1);
      }
      goto LAB_1404d6db6;
    }
    bVar5 = uVar1 == 4;
  }
  if (!bVar5) {
LAB_1404d6dc3:
    return uVar4 & 0xffffffffffffff00;
  }
LAB_1404d6db6:
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 1404d6dd0 FUN_1404d6dd0 body=88 status=ok
// SIG undefined FUN_1404d6dd0(void)

undefined8 FUN_1404d6dd0(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\NetworkDelegates.h",
             0x3d,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyAcceptedConnection");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\NetworkDelegates.h",
             0x3d,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyAcceptedConnection");
  return 2;
}



// FUNCTION 1404d6e50 RemoveNetworkActor body=83 status=ok
// SIG undefined RemoveNetworkActor(void)

void UReplicationDriver::RemoveNetworkActor(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\NetworkDelegates.h",
             0x53,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyReceivedText");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\engine\\classes\\engine\\NetworkDelegates.h",
             0x53,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyReceivedText");
  return;
}



// FUNCTION 1404d6eb0 FUN_1404d6eb0 body=3228 status=ok
// SIG undefined FUN_1404d6eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404d6eb0(longlong param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  undefined1 auStack_228 [32];
  undefined1 local_208 [4];
  uint local_204;
  ushort *local_200;
  undefined8 local_1f8;
  ushort *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
  ushort *local_1d8 [2];
  longlong local_1c8;
  longlong *local_1c0;
  byte local_19f;
  longlong local_138;
  longlong local_d8;
  longlong local_c8;
  undefined **local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x90) == 0) {
    return;
  }
  uVar5 = (param_3 & 0xff) - 2;
  if (0x1d < uVar5) {
switchD_1404d6f24_caseD_3:
    puVar11 = &DAT_1461fb848;
LAB_1404d7b15:
    uVar8 = 8;
    goto LAB_1404d7b1a;
  }
  uVar5 = (&switchD_1404d6f24::switchdataD_1404d7b4c)
          [(&switchD_1404d6f24::switchdataD_1404d7b74)[(int)uVar5]];
  switch(param_3 & 0xff) {
  case 2:
    plVar7 = (longlong *)param_4[1];
    if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,&local_204,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,&local_204,4);
      }
      puVar11 = &DAT_1461fb7e8;
      uVar8 = 6;
    }
    else {
      local_204 = *(uint *)*plVar7;
      puVar11 = &DAT_1461fb7e8;
      uVar8 = 6;
      *plVar7 = *plVar7 + 4;
    }
    goto LAB_1404d7b1a;
  default:
    goto switchD_1404d6f24_caseD_3;
  case 6:
    local_200 = (ushort *)0x0;
    local_1f8 = 0;
    FUN_14158ce90(param_4,&local_200);
    _Src = DAT_1461fb7f8;
    if ((int)local_1f8 < 2) {
      iVar9 = (int)DAT_1461fb800;
      local_1f8 = CONCAT44(local_1f8._4_4_,iVar9);
      if ((iVar9 == 0) && (local_1f8._4_4_ == 0)) {
        local_1f8 = DAT_1461fb800 & 0xffffffff;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_200,DAT_1461fb800 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_200,_Src,(longlong)iVar9 * 2);
      }
    }
    (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2c0))(param_1 + -0x28,5,&local_200);
    local_1d8[0] = local_200;
    break;
  case 0x17:
    plVar7 = (longlong *)param_4[1];
    if ((undefined4 *)plVar7[1] < (undefined4 *)*plVar7 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_1e0,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,local_1e0,4);
      }
    }
    else {
      local_1e0[0] = *(undefined4 *)*plVar7;
      *plVar7 = *plVar7 + 4;
    }
    if (*(char *)((longlong)param_2 + 0x193c) != '\0') {
      *(char *)((longlong)param_2 + 0x193d) = (char)((uint)local_1e0[0] >> 0x18);
      *(char *)((longlong)param_2 + 0x193f) = (char)((uint)local_1e0[0] >> 8);
      *(char *)((longlong)param_2 + 0x193e) = (char)((uint)local_1e0[0] >> 0x10);
      *(undefined4 *)((longlong)param_2 + 0x1934) = 1;
      (**(code **)(*param_2 + 0x2c8))(param_2,0);
    }
    FString::PrintfImpl(&local_1f0,L"895fcf626f55798667e4e94cb7a636af %u",local_1e0[0]);
    local_204 = 0xffffffff;
    puVar12 = &DAT_143f3eda8;
    if ((int)local_1e8 != 0) {
      puVar12 = local_1f0;
    }
    uVar1 = *puVar12;
    while (puVar12 = puVar12 + 1, uVar1 != 0) {
      uVar5 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(byte)((byte)local_204 ^ (byte)uVar1) * 4) ^
              local_204 >> 8;
      uVar5 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((uVar1 >> 8 ^ uVar5) & 0xff) * 4) ^ uVar5 >> 8;
      uVar5 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar5 & 0xff) * 4) ^ uVar5 >> 8;
      local_204 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar5 & 0xff) * 4) ^ uVar5 >> 8;
      uVar1 = *puVar12;
    }
    local_204 = ~local_204;
    lVar6 = *(longlong *)param_2[0x2b0];
    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x30) & 2) == 0)) {
      FControlChannelOutBunch::FControlChannelOutBunch(&local_1c8,lVar6,0);
      local_208[0] = 0x18;
      if ((undefined1 *)local_1c0[1] < (undefined1 *)*local_1c0 + 1) {
        (**(code **)(local_1c8 + 0x50))(&local_1c8,local_208,1);
      }
      else {
        local_208[0] = *(undefined1 *)*local_1c0;
        *local_1c0 = *local_1c0 + 1;
      }
      if ((uint *)local_1c0[1] < (uint *)*local_1c0 + 1) {
        (**(code **)(local_1c8 + 0x50))(&local_1c8,&local_204,4);
        if ((local_19f & 0x10) != 0) {
          FArchive::ByteSwap(&local_1c8,&local_204,4);
        }
      }
      else {
        local_204 = *(uint *)*local_1c0;
        *local_1c0 = *local_1c0 + 4;
      }
      (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                (*(longlong **)param_2[0x2b0],&local_200,&local_1c8,1);
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_1c8);
    }
    (**(code **)(*param_2 + 0x2c8))(param_2,0);
    local_1d8[0] = local_1f0;
    break;
  case 0x19:
    if (*(char *)((longlong)param_2 + 0x193c) != '\0') {
      *(undefined4 *)((longlong)param_2 + 0x1934) = 2;
    }
    local_204 = FUN_1416727f0(CONCAT71((int7)((ulonglong)
                                              (IMAGE_DOS_HEADER_140000000.e_magic + uVar5) >> 8),1))
    ;
    plVar7 = (longlong *)UOnlineEngineInterface::Get();
    (**(code **)(*plVar7 + 0x3e0))(plVar7,local_1d8);
    plVar7 = (longlong *)UOnlineEngineInterface::Get();
    (**(code **)(*plVar7 + 1000))(plVar7,&local_1f0);
    lVar6 = *(longlong *)param_2[0x2b0];
    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x30) & 2) == 0)) {
      FControlChannelOutBunch::FControlChannelOutBunch(&local_1c8,lVar6,0);
      local_208[0] = 0;
      if ((undefined1 *)local_1c0[1] < (undefined1 *)*local_1c0 + 1) {
        (**(code **)(local_1c8 + 0x50))(&local_1c8,local_208,1);
      }
      else {
        local_208[0] = *(undefined1 *)*local_1c0;
        *local_1c0 = *local_1c0 + 1;
      }
      if ((uint *)local_1c0[1] < (uint *)*local_1c0 + 1) {
        (**(code **)(local_1c8 + 0x50))(&local_1c8,&local_204,4);
        if ((local_19f & 0x10) != 0) {
          FArchive::ByteSwap(&local_1c8,&local_204,4);
        }
      }
      else {
        local_204 = *(uint *)*local_1c0;
        *local_1c0 = *local_1c0 + 4;
      }
      FUN_14158ce90(&local_1c8,local_1d8);
      FUN_14158ce90(&local_1c8,&local_1f0);
      (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                (*(longlong **)param_2[0x2b0],&local_200,&local_1c8,1);
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_1c8);
    }
    (**(code **)(*param_2 + 0x2c8))(param_2,0);
    if (local_1f0 != (ushort *)0x0) {
      FMemory::Free();
    }
    break;
  case 0x1a:
    plVar7 = param_2 + 0x33;
    iVar9 = 0;
    if ((undefined4 *)*plVar7 != &DAT_143f6290c) {
      *(undefined4 *)(param_2 + 0x34) = 0;
      if (*(int *)((longlong)param_2 + 0x1a4) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar7,2);
        iVar9 = (int)param_2[0x34];
      }
      *(int *)(param_2 + 0x34) = iVar9 + 2;
      if (*(int *)((longlong)param_2 + 0x1a4) < iVar9 + 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar7);
      }
      *(undefined4 *)*plVar7 = 0x30;
    }
    plVar7 = (longlong *)(param_1 + -0x28);
    (**(code **)(*(longlong *)(param_1 + -0x28) + 0x278))(plVar7,&local_1f0);
    if (1 < (int)local_1e8) {
      local_b0 = (longlong *)0x0;
      local_b8 = &PTR_FUN_143f740c8;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      uVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
      lVar6 = UEngine::GetFirstGamePlayer(DAT_146b17150,uVar8);
      if (lVar6 != 0) {
        uVar8 = FUN_142547b50(lVar6,local_88);
        FUN_1404c0940(&local_b8,uVar8);
        FUN_1404bf980(local_88);
      }
      if ((local_b0 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*local_b0 + 0x20))(), cVar4 == '\0')) {
        local_58 = (longlong *)0x0;
        local_48 = 0;
        puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_78);
        if (puVar11 != (undefined8 *)0x0) {
          puVar11[1] = plVar7;
          *puVar11 = &PTR_FUN_143f77b70;
        }
        local_200 = (ushort *)0x0;
        local_88[0] = &LAB_1404c6850;
        local_1f8 = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
        FGenericPlatformString::Memcpy(local_200,L"beacon_welcome_failure",0x2e);
        FUN_1404dcf70(plVar7,&local_200,local_88);
        if (local_200 != (ushort *)0x0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          plVar10 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar10 = local_58;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        (**(code **)(*plVar7 + 0x2c0))(plVar7,8,&DAT_1461fb7e8);
        FUN_1404bf980(&local_b8);
        local_1d8[0] = local_1f0;
      }
      else {
        local_204 = 5;
        lVar6 = *(longlong *)param_2[0x2b0];
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_1c8,lVar6,0);
          local_208[0] = 0x1b;
          if ((undefined1 *)local_1c0[1] < (undefined1 *)*local_1c0 + 1) {
            (**(code **)(local_1c8 + 0x50))(&local_1c8,local_208,1);
          }
          else {
            local_208[0] = *(undefined1 *)*local_1c0;
            *local_1c0 = *local_1c0 + 1;
          }
          FUN_14158ce90(&local_1c8,&local_1f0);
          FUN_1425da060(&local_1c8,&local_b8);
          if ((uint *)local_1c0[1] < (uint *)*local_1c0 + 1) {
            (**(code **)(local_1c8 + 0x50))(&local_1c8,&local_204,4);
            if ((local_19f & 0x10) != 0) {
              FArchive::ByteSwap(&local_1c8,&local_204,4);
            }
          }
          else {
            local_204 = *(uint *)*local_1c0;
            *local_1c0 = *local_1c0 + 4;
          }
          (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                    (*(longlong **)param_2[0x2b0],&local_200,&local_1c8,1);
          if (local_c8 != 0) {
            FMemory::Free();
          }
          if (local_d8 != 0) {
            FMemory::Free();
          }
          if (local_138 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_1c8);
        }
        plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x90);
        (**(code **)(*plVar7 + 0x2c8))(plVar7,0);
        FUN_1404bf980(&local_b8);
        local_1d8[0] = local_1f0;
      }
      break;
    }
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[1] = plVar7;
      *puVar11 = &PTR_FUN_143f77b70;
    }
    local_200 = (ushort *)0x0;
    local_88[0] = &LAB_1404c68d0;
    local_1f8 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
    FGenericPlatformString::Memcpy(local_200,L"beacon_welcome_failure",0x2e);
    FUN_1404dcf70(plVar7,&local_200,local_88);
    if (local_200 != (ushort *)0x0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      plVar10 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar10 = local_58;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    lVar6 = *plVar7;
    puVar11 = &DAT_1461fb7e8;
    uVar8 = 8;
    goto LAB_1404d7af7;
  case 0x1c:
    *(undefined1 *)(param_1 + 0xa8) = 3;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 300) = 3;
    plVar7 = (longlong *)UOnlineEngineInterface::Get();
    (**(code **)(*plVar7 + 0x3f0))(plVar7,local_1d8);
    FUN_1404e00b0(param_2,local_1d8);
    lVar6 = *(longlong *)param_2[0x2b0];
    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x30) & 2) == 0)) {
      FControlChannelOutBunch::FControlChannelOutBunch(&local_1c8,lVar6,0);
      local_208[0] = 4;
      if ((undefined1 *)local_1c0[1] < (undefined1 *)*local_1c0 + 1) {
        (**(code **)(local_1c8 + 0x50))(&local_1c8,local_208,1);
      }
      else {
        local_208[0] = *(undefined1 *)*local_1c0;
        *local_1c0 = *local_1c0 + 1;
      }
      if ((undefined4 *)local_1c0[1] < (undefined4 *)*local_1c0 + 1) {
        (**(code **)(local_1c8 + 0x50))(&local_1c8,param_2 + 7,4);
        if ((local_19f & 0x10) != 0) {
          FArchive::ByteSwap(&local_1c8,param_2 + 7,4);
        }
      }
      else {
        *(undefined4 *)(param_2 + 7) = *(undefined4 *)*local_1c0;
        *local_1c0 = *local_1c0 + 4;
      }
      (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                (*(longlong **)param_2[0x2b0],&local_200,&local_1c8,1);
      if (local_c8 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_1c8);
    }
    (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2d0))(param_1 + -0x28);
    break;
  case 0x1d:
    puVar11 = &DAT_1461fb7e8;
    uVar8 = 3;
LAB_1404d7b1a:
    (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2c0))(param_1 + -0x28,uVar8,puVar11);
    return;
  case 0x1e:
    local_1f0 = (ushort *)0x0;
    local_1e8 = 0;
    FUN_14158ce90(param_4,&local_1f0);
LAB_1404d7ae3:
    lVar6 = *(longlong *)(param_1 + -0x28);
    uVar8 = 5;
    puVar11 = &DAT_1461fb858;
LAB_1404d7af7:
    (**(code **)(lVar6 + 0x2c0))(param_1 + -0x28,uVar8,puVar11);
    local_1d8[0] = local_1f0;
    break;
  case 0x1f:
    if (*(char *)(param_1 + 0x48) != '\0') {
      local_1f0 = (ushort *)0x0;
      local_1e8 = 0;
      FUN_14158ce90(param_4,&local_1f0);
      plVar7 = (longlong *)UOnlineEngineInterface::Get();
      cVar4 = (**(code **)(*plVar7 + 0x400))(plVar7,&local_1f0);
      if (cVar4 != '\0') {
        lVar6 = *(longlong *)(param_1 + 0x20);
        lVar2 = *(longlong *)(lVar6 + 0x90);
        lVar3 = **(longlong **)(lVar2 + 0x1580);
        if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_1c8,lVar3,0);
          local_208[0] = 0x20;
          if ((undefined1 *)local_1c0[1] < (undefined1 *)*local_1c0 + 1) {
            (**(code **)(local_1c8 + 0x50))(&local_1c8,local_208,1);
          }
          else {
            local_208[0] = *(undefined1 *)*local_1c0;
            *local_1c0 = *local_1c0 + 1;
          }
          plVar7 = (longlong *)**(undefined8 **)(lVar2 + 0x1580);
          (**(code **)(*plVar7 + 0x2c8))(plVar7,&local_200,&local_1c8,1);
          if (local_c8 != 0) {
            FMemory::Free();
          }
          if (local_d8 != 0) {
            FMemory::Free();
          }
          if (local_138 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_1c8);
          lVar6 = *(longlong *)(param_1 + 0x20);
        }
        (**(code **)(**(longlong **)(lVar6 + 0x90) + 0x2c8))(*(longlong **)(lVar6 + 0x90),0);
        local_1d8[0] = local_1f0;
        break;
      }
      goto LAB_1404d7ae3;
    }
    puVar11 = &DAT_1461fb7e8;
    goto LAB_1404d7b15;
  }
  if (local_1d8[0] != (ushort *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404d7ba0 FUN_1404d7ba0 body=4072 status=ok
// SIG undefined FUN_1404d7ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404d7ba0(longlong param_1,longlong *param_2,byte param_3,longlong *param_4)

{
  bool bVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  LARGE_INTEGER LVar9;
  longlong lVar10;
  LARGE_INTEGER LVar11;
  longlong lVar12;
  LARGE_INTEGER LVar13;
  longlong *plVar14;
  LARGE_INTEGER LVar15;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [4];
  int local_2c4;
  undefined4 local_2c0 [2];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined2 *local_2a8;
  ulonglong local_2a0;
  LARGE_INTEGER local_298;
  undefined8 local_290;
  undefined8 local_288;
  int iStack_280;
  undefined4 uStack_27c;
  longlong local_278;
  undefined8 local_270;
  LARGE_INTEGER local_268;
  longlong local_258;
  longlong *local_250;
  byte local_22f;
  longlong local_1c8;
  longlong local_168;
  longlong local_158;
  undefined **local_148;
  longlong *local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *local_118;
  int local_108;
  longlong *local_f8;
  LARGE_INTEGER local_f0;
  int local_e8;
  undefined4 local_e4;
  void *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x90) != 0) {
    return;
  }
  cVar3 = UNetConnection::IsClientMsgTypeValid(param_2,param_3);
  pvVar2 = DAT_1461fb848;
  if (cVar3 == '\0') {
    *(byte *)(param_4 + 5) = *(byte *)(param_4 + 5) | 0x80;
    iStack_280 = CONCAT31(iStack_280._1_3_,param_3);
    local_118 = (longlong *)0x0;
    local_108 = 0;
    local_288 = (undefined2 *)(param_1 + -0x28);
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,&local_138);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_288;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_288._4_4_;
      *(int *)(puVar5 + 2) = iStack_280;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_27c;
    }
    local_2a8 = (undefined2 *)0x0;
    local_148 = (undefined **)&LAB_1404c6870;
    local_2a0 = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
    FGenericPlatformString::Memcpy(local_2a8,L"is_client_msg_type_valid_failed",0x40);
    FUN_1404dcf70(param_1 + -0x28,&local_2a8,&local_148);
    if (local_2a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_108 != 0) {
      plVar14 = &local_138;
      if (local_118 != (longlong *)0x0) {
        plVar14 = local_118;
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14,0);
      }
    }
    if (local_118 == (longlong *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (0x22 < param_3) {
switchD_1404d7d21_caseD_1:
    local_2b8 = (undefined2 *)0x0;
    iVar4 = (int)DAT_1461fb850;
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,iVar4);
    if (iVar4 == 0) {
      uStack_2b0 = DAT_1461fb850 & 0xffffffff;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2b8,DAT_1461fb850 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_2b8,pvVar2,(longlong)iVar4 * 2);
    }
    FUN_1404dfdc0(param_2,&local_2b8);
    puVar8 = local_2b8;
LAB_1404d8b37:
    if (puVar8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    goto LAB_1404d8b41;
  }
  switch((ulonglong)param_3) {
  case 0:
    local_2c0[0] = 0;
    local_2c4 = FUN_1416727f0(CONCAT71((int7)((ulonglong)
                                              (IMAGE_DOS_HEADER_140000000.e_magic +
                                              (&switchD_1404d7d21::switchdataD_1404d8b88)
                                              [(&switchD_1404d7d21::switchdataD_1404d8ba8)[param_3]]
                                              ) >> 8),1));
    plVar14 = (longlong *)param_4[1];
    if ((undefined4 *)plVar14[1] < (undefined4 *)*plVar14 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,local_2c0,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,local_2c0,4);
      }
    }
    else {
      local_2c0[0] = *(undefined4 *)*plVar14;
      *plVar14 = *plVar14 + 4;
    }
    FUN_14158ce90(param_4,param_2 + 0x328);
    FUN_14158ce90(param_4,param_2 + 0x32a);
    cVar3 = FNetworkVersion::IsNetworkCompatible(local_2c4,local_2c0[0]);
    if (cVar3 == '\0') {
      uStack_2b0 = CONCAT44(local_2c0[0],local_2c4);
      local_118 = (longlong *)0x0;
      local_108 = 0;
      local_2b8 = (undefined2 *)(param_1 + -0x28);
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,&local_138);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar5 + 1) = (undefined4)local_2b8;
        *(undefined4 *)((longlong)puVar5 + 0xc) = local_2b8._4_4_;
        *(int *)(puVar5 + 2) = (int)uStack_2b0;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_2b0._4_4_;
      }
      local_2a8 = (undefined2 *)0x0;
      local_148 = (undefined **)&LAB_1404c68a0;
      local_2a0 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
      FGenericPlatformString::Memcpy(local_2a8,L"hello_failure",0x1c);
      FUN_1404dcf70((undefined2 *)(param_1 + -0x28),&local_2a8,&local_148);
      if (local_2a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_108 != 0) {
        plVar14 = &local_138;
        if (local_118 != (longlong *)0x0) {
          plVar14 = local_118;
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
        }
      }
      if (local_118 != (longlong *)0x0) {
        FMemory::Free();
      }
      lVar10 = *(longlong *)param_2[0x2b0];
      if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x30) & 2) == 0)) {
        FControlChannelOutBunch::FControlChannelOutBunch(&local_258,lVar10,0);
        local_2c8[0] = 2;
        if ((undefined1 *)local_250[1] < (undefined1 *)*local_250 + 1) {
          (**(code **)(local_258 + 0x50))(&local_258,local_2c8,1);
        }
        else {
          local_2c8[0] = *(undefined1 *)*local_250;
          *local_250 = *local_250 + 1;
        }
        if ((int *)local_250[1] < (int *)*local_250 + 1) {
          (**(code **)(local_258 + 0x50))(&local_258,&local_2c4,4);
          if ((local_22f & 0x10) != 0) {
            FArchive::ByteSwap(&local_258,&local_2c4,4);
          }
        }
        else {
          local_2c4 = *(int *)*local_250;
          *local_250 = *local_250 + 4;
        }
        (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                  (*(longlong **)param_2[0x2b0],&local_298,&local_258,1);
        if (local_158 != 0) {
          FMemory::Free();
        }
        if (local_168 != 0) {
          FMemory::Free();
        }
        if (local_1c8 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_258);
      }
    }
    else {
      if (*(int *)(param_1 + 0x28) != 1) {
        plVar14 = (longlong *)UOnlineEngineInterface::Get();
        (**(code **)(*plVar14 + 0x3e0))(plVar14,&local_2a8);
        if ((int)param_2[0x329] == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)param_2[0x328];
        }
        puVar7 = &DAT_143f3eda8;
        if ((int)local_2a0 != 0) {
          puVar7 = local_2a8;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
        if (iVar4 == 0) {
          if (*(char *)(param_1 + 0x48) != '\0') {
            plVar14 = (longlong *)UOnlineEngineInterface::Get();
            lVar10 = *plVar14;
            uVar6 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
            (**(code **)(lVar10 + 0x3f8))(plVar14,&local_2b8,uVar6);
            if (1 < (int)uStack_2b0) {
              lVar10 = *(longlong *)param_2[0x2b0];
              if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x30) & 2) == 0)) {
                FControlChannelOutBunch::FControlChannelOutBunch(&local_258,lVar10,0);
                local_2c8[0] = 0x1f;
                if ((undefined1 *)local_250[1] < (undefined1 *)*local_250 + 1) {
                  (**(code **)(local_258 + 0x50))(&local_258,local_2c8,1);
                }
                else {
                  local_2c8[0] = *(undefined1 *)*local_250;
                  *local_250 = *local_250 + 1;
                }
                FUN_14158ce90(&local_258,&local_2b8);
                (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                          (*(longlong **)param_2[0x2b0],&local_298,&local_258,1);
                if (local_158 != 0) {
                  FMemory::Free();
                }
                if (local_168 != 0) {
                  FMemory::Free();
                }
                if (local_1c8 != 0) {
                  FMemory::Free();
                }
                FArchive::~FArchive(&local_258);
              }
              UNetConnection::SetExpectedClientLoginMsgType(param_2,0x20);
              (**(code **)(*param_2 + 0x2c8))(param_2,0);
              if (local_2b8 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              goto LAB_1404d82ab;
            }
            if (local_2b8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          QueryPerformanceCounter(&local_298);
          FString::PrintfImpl(&local_2b8,L"%08X",local_298.QuadPart & 0xffffffff);
          plVar14 = param_2 + 0x31;
          if (plVar14 == &local_2b8) {
            if (local_2b8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          else {
            if (*plVar14 != 0) {
              FMemory::Free();
            }
            *plVar14 = (longlong)local_2b8;
            *(int *)(param_2 + 0x32) = (int)uStack_2b0;
            *(undefined4 *)((longlong)param_2 + 0x194) = uStack_2b0._4_4_;
          }
          FUN_1404dfed0(param_2);
          UNetConnection::SetExpectedClientLoginMsgType(param_2,0x1b);
          (**(code **)(*param_2 + 0x2c8))(param_2,0);
LAB_1404d82ab:
          if (local_2a8 == (undefined2 *)0x0) {
            return;
          }
          FMemory::Free();
          return;
        }
        lVar10 = *(longlong *)param_2[0x2b0];
        puVar8 = local_2a8;
        if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_258,lVar10,0);
          local_2c8[0] = 0x1e;
          if ((undefined1 *)local_250[1] < (undefined1 *)*local_250 + 1) {
            (**(code **)(local_258 + 0x50))(&local_258,local_2c8,1);
          }
          else {
            local_2c8[0] = *(undefined1 *)*local_250;
            *local_250 = *local_250 + 1;
          }
          FUN_14158ce90(&local_258,&local_2a8);
          (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                    (*(longlong **)param_2[0x2b0],&local_298,&local_258,1);
          if (local_158 != 0) {
            FMemory::Free();
          }
          if (local_168 != 0) {
            FMemory::Free();
          }
          if (local_1c8 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_258);
          puVar8 = local_2a8;
        }
        goto LAB_1404d8b37;
      }
      FUN_1404dfdc0(param_2,&DAT_1461fb808);
    }
    goto LAB_1404d8b41;
  default:
    goto switchD_1404d7d21_caseD_1;
  case 4:
    plVar14 = (longlong *)param_4[1];
    if ((int *)plVar14[1] < (int *)*plVar14 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,&local_2c4,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,&local_2c4,4);
      }
    }
    else {
      local_2c4 = *(int *)*plVar14;
      *plVar14 = *plVar14 + 4;
    }
    iVar4 = 0x708;
    if ((0x707 < local_2c4) &&
       (iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 100), local_2c4 < iVar4)) {
      iVar4 = local_2c4;
    }
    *(int *)(param_2 + 7) = iVar4;
    break;
  case 0x1b:
    LVar9.QuadPart = 0;
    local_278 = 0;
    local_270 = 0;
    local_2a8 = (undefined2 *)0x0;
    local_2a0 = 0;
    local_140 = (longlong *)0x0;
    local_138 = 0;
    local_148 = &PTR_FUN_143f740c8;
    local_130 = 0;
    local_128 = 0;
    FUN_14158ce90(param_4,&local_2a8);
    FUN_1425da060(param_4,&local_148);
    plVar14 = (longlong *)param_4[1];
    if ((int *)plVar14[1] < (int *)*plVar14 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,&local_2c4,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,&local_2c4,4);
      }
    }
    else {
      local_2c4 = *(int *)*plVar14;
      *plVar14 = *plVar14 + 4;
    }
    if (local_2c4 == 5) {
      if (*(int *)(param_1 + 0x28) == 0) {
        lVar10 = *(longlong *)(param_1 + 0x38);
        lVar12 = (longlong)*(int *)(param_1 + 0x40) * 0x40 + lVar10;
        for (; lVar10 != lVar12; lVar10 = lVar10 + 0x40) {
          if ((((*(longlong **)(lVar10 + 0x10) == (longlong *)0x0) ||
               (cVar3 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x20))(), cVar3 == '\0')) ||
              (local_140 == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(*local_140 + 0x20))(), cVar3 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          plVar14 = *(longlong **)(lVar10 + 0x10);
          if ((((plVar14 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar14 + 0x20))(plVar14), cVar3 == '\0')) &&
              ((local_140 == (longlong *)0x0 ||
               (cVar3 = (**(code **)(*local_140 + 0x20))(), cVar3 == '\0')))) ||
             ((bVar1 && (cVar3 = (**(code **)*local_140)(local_140,*(undefined8 *)(lVar10 + 0x10)),
                        cVar3 != '\0')))) {
            FString::operator=(&local_278,&DAT_1461fb828);
            local_c8 = 0;
            local_b8 = 0;
            puVar5 = (undefined8 *)FUN_140438ef0(0x10,&local_e8);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = &PTR_FUN_143f77b70;
              puVar5[1] = param_1 + -0x28;
            }
            local_298.QuadPart = 0;
            local_f8 = (longlong *)&LAB_1404c6810;
            local_290 = 0x14;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
            FGenericPlatformString::Memcpy(local_298.QuadPart,L"beacon_join_failure",0x28);
            FUN_1404dcf70(param_1 + -0x28,&local_298,&local_f8);
            if ((void *)local_298.QuadPart != (void *)0x0) {
              FMemory::Free();
            }
            FUN_1404bed90(&local_f8);
            goto LAB_1404d85c2;
          }
        }
        plVar14 = (longlong *)(param_1 + -0x28);
        cVar3 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2e8))(plVar14,&local_2a8);
        if (cVar3 == '\0') {
          FString::operator=(&local_278,&DAT_1461fb818);
          (**(code **)(*plVar14 + 0x278))(plVar14,&local_288);
          iVar4 = iStack_280;
          puVar8 = local_288;
          local_e8 = iStack_280;
          local_f0.QuadPart = 0;
          local_f8 = plVar14;
          if (iStack_280 == 0) {
            local_e4 = 0;
            LVar11.QuadPart = LVar9.QuadPart;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f0,iStack_280,0);
            LVar11 = local_f0;
            _guard_xfg_dispatch_icall_nop((void *)local_f0,puVar8,(longlong)iVar4 * 2);
          }
          puVar8 = local_2a8;
          lVar10 = (longlong)(int)local_2a0;
          local_e0 = (void *)0x0;
          local_d8 = (int)local_2a0;
          if ((int)local_2a0 == 0) {
            local_2c0[0] = 0;
            local_268.QuadPart = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,local_2a0 & 0xffffffff,0);
            pvVar2 = local_e0;
            _guard_xfg_dispatch_icall_nop(local_e0,puVar8,lVar10 * 2);
            local_268.QuadPart = (LONGLONG)pvVar2;
            local_2c0[0] = local_d4;
            LVar11 = local_f0;
          }
          iVar4 = local_d8;
          LVar15 = local_268;
          local_78 = 0;
          local_68 = 0;
          local_298 = local_268;
          puVar5 = (undefined8 *)FUN_140438ef0(0x30,local_98);
          LVar13 = local_298;
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_FUN_143f77c30;
            puVar5[1] = local_f8;
            ((LARGE_INTEGER *)(puVar5 + 2))->QuadPart = (LONGLONG)LVar11;
            *(undefined4 *)((longlong)puVar5 + 0x1c) = local_e4;
            *(int *)(puVar5 + 3) = local_e8;
            ((LARGE_INTEGER *)(puVar5 + 4))->QuadPart = (LONGLONG)local_268;
            *(int *)(puVar5 + 5) = iVar4;
            *(undefined4 *)((longlong)puVar5 + 0x2c) = local_2c0[0];
            LVar11.QuadPart = LVar9.QuadPart;
            LVar13.QuadPart = LVar9.QuadPart;
            LVar15.QuadPart = LVar9.QuadPart;
          }
          local_2b8 = (undefined2 *)0x0;
          local_a8[0] = &LAB_1404c68b0;
          uStack_2b0 = 0x14;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
          FGenericPlatformString::Memcpy(local_2b8,L"beacon_join_failure",0x28);
          FUN_1404dcf70(plVar14,&local_2b8,local_a8);
          LVar9 = LVar15;
          if (local_2b8 != (undefined2 *)0x0) {
            FMemory::Free();
            LVar9 = LVar13;
          }
          FUN_1404bed90(local_a8);
          if ((void *)LVar9.QuadPart != (void *)0x0) {
            FMemory::Free(LVar15.QuadPart);
          }
          if ((void *)LVar11.QuadPart != (void *)0x0) {
            FMemory::Free(LVar11.QuadPart);
          }
          if (local_288 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          lVar10 = *(longlong *)param_2[0x2b0];
          if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x30) & 2) == 0)) {
            FControlChannelOutBunch::FControlChannelOutBunch(&local_258,lVar10,0);
            local_2c8[0] = 0x1c;
            if ((undefined1 *)local_250[1] < (undefined1 *)*local_250 + 1) {
              (**(code **)(local_258 + 0x50))(&local_258,local_2c8,1);
            }
            else {
              local_2c8[0] = *(undefined1 *)*local_250;
              *local_250 = *local_250 + 1;
            }
            (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                      (*(longlong **)param_2[0x2b0],&local_298,&local_258,1);
            if (local_158 != 0) {
              FMemory::Free();
            }
            if (local_168 != 0) {
              FMemory::Free();
            }
            if (local_1c8 != 0) {
              FMemory::Free();
            }
            FArchive::~FArchive(&local_258);
          }
          UNetConnection::SetClientLoginState(param_2,2);
          (**(code **)(*param_2 + 0x2c8))(param_2,0);
          FUN_1404c0940(param_2 + 0x2b,&local_148);
          lVar10 = FUN_1425b9f20(param_2,6,1);
          if ((lVar10 != 0) && (cVar3 = FUN_1404bb0c0(lVar10), cVar3 != '\0')) {
            *(longlong **)(lVar10 + 0x68) = plVar14;
            FUN_1404bbe70(lVar10,1,0);
          }
        }
      }
      else {
        FString::operator=(&local_278,&DAT_1461fb808);
      }
    }
    else {
      FString::operator=(&local_278,&DAT_1461fb838);
      iStack_280 = local_2c4;
      local_78 = 0;
      local_68 = 0;
      local_288 = (undefined2 *)(param_1 + -0x28);
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_98);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar5 + 1) = (undefined4)local_288;
        *(undefined4 *)((longlong)puVar5 + 0xc) = local_288._4_4_;
        *(int *)(puVar5 + 2) = iStack_280;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_27c;
      }
      local_2b8 = (undefined2 *)0x0;
      local_a8[0] = &LAB_1404c6860;
      uStack_2b0 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
      FGenericPlatformString::Memcpy(local_2b8,L"beacon_join_failure",0x28);
      FUN_1404dcf70((undefined2 *)(param_1 + -0x28),&local_2b8,local_a8);
      if (local_2b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1404bed90(local_a8);
    }
LAB_1404d85c2:
    bVar1 = 1 < (int)local_270;
    if (bVar1) {
      FUN_1404dfdc0(param_2,&local_278);
    }
    FUN_1404bf980(&local_148);
    if (local_2a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_278 != 0) {
      FMemory::Free();
    }
    if (!bVar1) {
      return;
    }
LAB_1404d8b41:
    (**(code **)(*param_2 + 0x2c8))(param_2,1);
    (**(code **)(*param_2 + 0x2f8))(param_2);
    break;
  case 0x1d:
    FUN_1404cb7e0(param_1 + 0x118,param_1 + -0x28,param_2 + 0x2b);
    BeginUpdateGPUSpriteResources(param_1 + -0x28,param_2 + 0x2b);
    break;
  case 0x20:
    if (*(char *)(param_1 + 0x48) != '\0') {
      QueryPerformanceCounter(&local_298);
      FString::PrintfImpl(&local_288,L"%08X",local_298.QuadPart & 0xffffffff);
      FString::operator=(param_2 + 0x31,&local_288);
      if (local_288 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1404dfed0(param_2);
      UNetConnection::SetExpectedClientLoginMsgType(param_2,0x1b);
      (**(code **)(*param_2 + 0x2c8))(param_2,0);
      return;
    }
    FString::FString(&local_288,&DAT_1461fb848);
    FUN_1404dfdc0(param_2,&local_288);
    puVar8 = local_288;
    goto LAB_1404d8b37;
  case 0x21:
    FUN_14158ce90(param_4,param_2 + 0x32a);
    break;
  case 0x22:
    FUN_14158ce90(param_4,param_2 + 0x32c);
  }
  return;
}



// FUNCTION 1404d8bd0 FUN_1404d8bd0 body=681 status=ok
// SIG undefined FUN_1404d8bd0(void)

void FUN_1404d8bd0(longlong param_1,char param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 == '\x02') {
    lVar1 = (longlong)*(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar8 = 0;
      bVar9 = *(char *)(*(longlong *)(param_1 + 0x28) + 0x18) != '\0';
      lVar7 = 0;
      iVar4 = 0;
      do {
        lVar7 = lVar7 + 1;
        iVar5 = iVar4 + 1;
        if (lVar7 < lVar1) {
          pcVar2 = (char *)(*(longlong *)(param_1 + 0x28) + 0x18 + lVar7 * 0x30);
          do {
            if (bVar9 != (*pcVar2 != '\0')) break;
            iVar5 = iVar5 + 1;
            lVar7 = lVar7 + 1;
            pcVar2 = pcVar2 + 0x30;
          } while (lVar7 < lVar1);
        }
        iVar6 = iVar5 - iVar4;
        if (bVar9 == false) {
          puVar3 = (undefined4 *)((longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x28));
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            if (*(longlong *)(puVar3 + 2) != 0) {
              FMemory::Free();
            }
            FUN_1416f8340(*puVar3);
            puVar3 = puVar3 + 0xc;
          }
        }
        else {
          if (iVar8 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x28)),
                       (void *)((longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x28)),
                       (longlong)iVar6 * 0x30);
          }
          iVar8 = iVar8 + iVar6;
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar4 = iVar5;
      } while (lVar7 < lVar1);
      *(int *)(param_1 + 0x30) = iVar8;
    }
  }
  else if (param_2 == '\x01') {
    lVar1 = (longlong)*(int *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar8 = 0;
      bVar9 = *(char *)(*(longlong *)(param_1 + 0x28) + 0x18) != '\x01';
      lVar7 = 0;
      iVar4 = 0;
      do {
        lVar7 = lVar7 + 1;
        iVar5 = iVar4 + 1;
        if (lVar7 < lVar1) {
          pcVar2 = (char *)(*(longlong *)(param_1 + 0x28) + 0x18 + lVar7 * 0x30);
          do {
            if (bVar9 != (*pcVar2 != '\x01')) break;
            iVar5 = iVar5 + 1;
            lVar7 = lVar7 + 1;
            pcVar2 = pcVar2 + 0x30;
          } while (lVar7 < lVar1);
        }
        iVar6 = iVar5 - iVar4;
        if (bVar9 == false) {
          puVar3 = (undefined4 *)((longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x28));
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            if (*(longlong *)(puVar3 + 2) != 0) {
              FMemory::Free();
            }
            FUN_1416f8340(*puVar3);
            puVar3 = puVar3 + 0xc;
          }
        }
        else {
          if (iVar8 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x28)),
                       (void *)((longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x28)),
                       (longlong)iVar6 * 0x30);
          }
          iVar8 = iVar8 + iVar6;
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar4 = iVar5;
      } while (lVar7 < lVar1);
      *(int *)(param_1 + 0x30) = iVar8;
    }
  }
  else if (param_2 == '\0') {
    iVar4 = *(int *)(param_1 + 0x34);
    puVar3 = *(undefined4 **)(param_1 + 0x28);
    iVar8 = *(int *)(param_1 + 0x30);
    if (iVar4 < 0) {
      if (iVar8 != 0) {
        do {
          if (*(longlong *)(puVar3 + 2) != 0) {
            FMemory::Free();
          }
          FUN_1416f8340(*puVar3);
          puVar3 = puVar3 + 0xc;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar4 = *(int *)(param_1 + 0x34);
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (iVar4 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0x28,0);
      }
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*(longlong *)(puVar3 + 2) != 0) {
          FMemory::Free();
        }
        FUN_1416f8340(*puVar3);
        puVar3 = puVar3 + 0xc;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}



// FUNCTION 1404d8ea0 FUN_1404d8ea0 body=63 status=ok
// SIG undefined FUN_1404d8ea0(void)

void FUN_1404d8ea0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1404deb60(param_1,param_2 + 0x158);
    FUN_1404decc0(param_1,param_2 + 0x158);
    FUN_1404d2ae0(param_1);
  }
  return;
}



// FUNCTION 1404d8ee0 FUN_1404d8ee0 body=281 status=ok
// SIG undefined FUN_1404d8ee0(void)

void FUN_1404d8ee0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *local_res10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar1 = FUN_1404cf3e0();
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x68);
    iVar5 = 0;
    if (0 < *(int *)(lVar1 + 0x40)) {
      lVar8 = 0;
      do {
        plVar6 = (longlong *)(*(longlong *)(lVar1 + 0x38) + lVar8);
        if ((((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) &&
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,&local_res10),
           *plVar2 == lVar3)) {
          if (((int)plVar6[1] != 0) && (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar6 != 0) {
              lVar3 = FMemory::Realloc(*plVar6,0,0);
              *plVar6 = lVar3;
            }
            *(undefined4 *)(plVar6 + 1) = 0;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar5 < *(int *)(lVar1 + 0x40));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0x38),0);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  puVar4 = (undefined4 *)*param_2;
  puVar7 = puVar4 + (longlong)(int)param_2[1] * 4;
  if (puVar4 != puVar7) {
    local_res10 = &local_38;
    do {
      local_38 = *puVar4;
      uStack_34 = puVar4[1];
      uStack_30 = puVar4[2];
      uStack_2c = puVar4[3];
      iVar5 = FUN_1404bb570(param_1 + 0x40,&local_res10);
      if (0 < iVar5) {
        FUN_1404cc5b0(param_1 + 0x40);
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar7);
  }
  return;
}



// FUNCTION 1404d9000 FUN_1404d9000 body=164 status=ok
// SIG undefined FUN_1404d9000(void)

void FUN_1404d9000(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xe0))(local_18,param_1 + 0x14);
  }
  if (param_3 == 1) {
    (**(code **)(*param_1 + 0x2e8))(param_1,param_2,param_1 + 0x1a);
  }
  *(undefined1 *)((longlong)param_1 + 0x191) = 0;
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



// FUNCTION 1404d90b0 FUN_1404d90b0 body=169 status=ok
// SIG undefined FUN_1404d90b0(void)

void FUN_1404d90b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xe0))(local_18,param_1 + 0x15);
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x38);
  }
  FUN_142876830(DAT_146b17150,lVar4,uVar5);
  *(undefined1 *)((longlong)param_1 + 0x191) = 0;
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



// FUNCTION 1404d9160 FUN_1404d9160 body=63 status=ok
// SIG undefined FUN_1404d9160(void)

void FUN_1404d9160(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
    if (cVar2 == '\0') {
      *(undefined1 *)((longlong)plVar1 + 0x4c) = 1;
    }
    FUN_1404dd800(param_1,1);
  }
  return;
}



// FUNCTION 1404d91a0 FUN_1404d91a0 body=149 status=ok
// SIG undefined FUN_1404d91a0(void)

void FUN_1404d91a0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xb8))(local_18,param_1 + 0x13);
  }
  FUN_1404c9b60(param_1,param_1 + 0x14,param_2,param_1 + 7);
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



// FUNCTION 1404d9240 FUN_1404d9240 body=321 status=ok
// SIG undefined FUN_1404d9240(void)

void FUN_1404d9240(longlong param_1,undefined8 param_2,int param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404d0c50(&local_18,param_4);
  if (local_18 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
      lVar5 = *(longlong *)(param_1 + 0xd0);
      if (*(longlong *)(param_1 + 0xd0) == 0) {
        lVar5 = param_1 + 200;
      }
      iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)param_4 >> 0x20) + (int)param_4) &
                               (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x90) + (longlong)iVar4 * 0x18;
          if (*(longlong *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar4 * 0x18) == param_4) {
            if (iVar4 != -1) goto LAB_1404d92f3;
            break;
          }
          iVar4 = *(int *)(lVar5 + 0x10);
        } while (iVar4 != -1);
      }
    }
    lVar5 = 0;
LAB_1404d92f3:
    lVar6 = lVar5 + 8;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      (**(code **)(*local_18 + 0xb8))(local_18);
    }
  }
  TBaseDelegate<void,FName,bool>::ExecuteIfBound(param_5,param_2,param_3 == 1);
  plVar3 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return;
}



// FUNCTION 1404d9390 FUN_1404d9390 body=121 status=ok
// SIG undefined FUN_1404d9390(void)

void FUN_1404d9390(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0xb8))(local_18,param_1 + 0x18);
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



// FUNCTION 1404d9410 FUN_1404d9410 body=82 status=ok
// SIG undefined FUN_1404d9410(void)

void FUN_1404d9410(undefined8 param_1,undefined1 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_3 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_3[1] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*param_3;
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 1404d9470 FUN_1404d9470 body=379 status=ok
// SIG undefined FUN_1404d9470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404d9470(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8 = param_1;
  local_a0 = param_2;
  FString::FString(local_98,param_3);
  plVar3 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77b58;
    puVar2[1] = local_a8;
    *(undefined4 *)(puVar2 + 2) = local_a0;
    FString::FString(puVar2 + 3,local_98);
  }
  local_b8[0] = 0;
  local_88[0] = &LAB_1404c6820;
  local_b8[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],L"on_failure",0x16);
  FUN_1404dcf70(param_1,local_b8,local_88);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
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
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  FUN_1404ca6b0(param_1 + 0xc,0);
  if (((int)param_1[0x10] != 0) && ((longlong *)param_1[0xf] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0xf] + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_1[0x10] != 0) {
        plVar3 = (longlong *)param_1[0xf];
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2,param_3);
    }
  }
  (**(code **)(*param_1 + 0x288))(param_1);
  return;
}



// FUNCTION 1404d95f0 FUN_1404d95f0 body=386 status=ok
// SIG undefined FUN_1404d95f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404d95f0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  local_a8 = param_1;
  local_a0 = param_2;
  FString::FString(local_98,param_3);
  plVar3 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77b58;
    puVar2[1] = local_a8;
    *(undefined4 *)(puVar2 + 2) = local_a0;
    FString::FString(puVar2 + 3,local_98);
  }
  local_b8[0] = 0;
  local_88[0] = &LAB_1404c6820;
  local_b8[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],L"on_failure",0x16);
  FUN_1404dcf70(param_1,local_b8,local_88);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
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
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  FUN_1404ca6b0(param_1 + 0xc,0);
  if (((int)param_1[0x10] != 0) && ((longlong *)param_1[0xf] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0xf] + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_1[0x10] != 0) {
        plVar3 = (longlong *)param_1[0xf];
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2,param_3);
    }
  }
  (**(code **)(*param_1 + 0x288))(param_1);
  return;
}



// FUNCTION 1404d9780 FUN_1404d9780 body=60 status=ok
// SIG undefined FUN_1404d9780(void)

int FUN_1404d9780(longlong param_1,undefined8 param_2,int param_3)

{
  if (0 < *(int *)(param_1 + 0x65c)) {
    *(int *)(param_1 + 0x65c) = *(int *)(param_1 + 0x65c) - param_3;
    return param_3;
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FVoicePacketBuffer::PopAudio();
  }
  return param_3;
}



// FUNCTION 1404d97c0 FUN_1404d97c0 body=309 status=ok
// SIG undefined FUN_1404d97c0(void)

void FUN_1404d97c0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  puVar5 = (undefined4 *)param_1[5];
  uVar6 = 0;
  puVar7 = puVar5 + (longlong)(int)param_1[6] * 0xc;
  if (puVar5 != puVar7) {
    while (puVar5[8] != *(int *)(*param_2 + 8)) {
      puVar5 = puVar5 + 0xc;
      if (puVar5 == puVar7) {
        return;
      }
    }
    cVar1 = FUN_142b01f90();
    if ((cVar1 != '\0') && (0 < *(int *)(*param_2 + 0xa0))) {
      if (puVar5[4] == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)(puVar5 + 2);
      }
      FName::FName(&local_res10,puVar4,1);
      lVar2 = FUN_1404c89e0(param_1,local_res10,*param_2 + 0x98);
      local_res8[0] = 0xffffffff;
      if (lVar2 != 0) {
        FUN_14170c210(local_res8,lVar2);
      }
      FUN_1416ff870(puVar5,local_res8);
      FUN_1416f8340(local_res8[0]);
      lVar2 = FUN_1416f8720(*puVar5);
      if (lVar2 != 0) {
        FUN_1404c41f0(param_1,param_2);
        uVar6 = 1;
        puVar5[7] = *(undefined4 *)(*param_2 + 0xa0);
      }
    }
    puVar5[9] = (uVar6 ^ 1) + 2;
    uVar3 = FUN_1416f8720(*puVar5);
    (**(code **)(*param_1 + 0x60))(param_1,uVar6,puVar5 + 2,uVar3);
  }
  return;
}



// FUNCTION 1404d9900 FUN_1404d9900 body=425 status=ok
// SIG undefined FUN_1404d9900(void)

void FUN_1404d9900(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  longlong *local_20;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_28);
  if ((local_28 != (longlong *)0x0) &&
     ((**(code **)(*local_28 + 0x168))(local_28,param_1 + 0x16), param_3 == 1)) {
    local_48 = 0;
    local_40 = 0;
    cVar5 = (**(code **)(*local_28 + 0x290))(local_28,param_2,&local_48);
    if (cVar5 != '\0') {
      (**(code **)(*param_1 + 0x148))(param_1);
      uVar6 = (**(code **)(*param_1 + 0x2b0))(param_1);
      lVar7 = FUN_14244f490(uVar6);
      uVar4 = local_40;
      if (lVar7 != 0) {
        if ((char)param_1[0x32] != '\0') {
          iVar3 = (int)local_40;
          lVar9 = (longlong)(int)local_40;
          iVar8 = (0xf - (uint)((int)local_40 != 0)) + (int)local_40;
          local_40 = CONCAT44(local_40._4_4_,iVar8);
          if (local_40._4_4_ < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar4 & 0xffffffff);
          }
          lVar9 = lVar9 - (ulonglong)(iVar3 != 0);
          builtin_wcsncpy((wchar_t *)(local_48 + lVar9 * 2),L"?bIsFrom",8);
          lVar9 = local_48 + lVar9 * 2;
          builtin_wcsncpy((wchar_t *)(lVar9 + 0x10),L"Invi",4);
          *(undefined4 *)(lVar9 + 0x18) = 0x650074;
          *(undefined2 *)(lVar9 + 0x1c) = 0;
          *(undefined1 *)(param_1 + 0x32) = 0;
        }
        local_38 = 0;
        uStack_30 = 0;
        FUN_1426ffc80(lVar7,&local_48,0,0,&local_38);
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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



// FUNCTION 1404d9ab0 FUN_1404d9ab0 body=159 status=ok
// SIG undefined FUN_1404d9ab0(void)

void FUN_1404d9ab0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_3;
  iVar6 = (int)param_3[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
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
    lVar5 = *param_3;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404d9b50 FUN_1404d9b50 body=167 status=ok
// SIG undefined FUN_1404d9b50(void)

void FUN_1404d9b50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404cdd50(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x18))(local_18,param_1 + 8);
    (**(code **)(*local_18 + 0x38))(local_18,param_1 + 6);
  }
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  (**(code **)(*param_1 + 0x20))(param_1);
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



// FUNCTION 1404d9c00 FUN_1404d9c00 body=692 status=ok
// SIG undefined FUN_1404d9c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404d9c00(longlong *param_1,int *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  int local_res10 [2];
  undefined1 local_e8 [16];
  undefined1 *local_d8;
  undefined1 **local_d0;
  undefined **local_c8;
  longlong *local_c0;
  byte local_9f;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (((param_2[1] == _DAT_146852ec4 && param_2[2] == _DAT_146852ec8) &&
      param_2[3] == _DAT_146852ecc) && *param_2 == _DAT_146852ec0) {
    lVar2 = FUN_1404cf3e0();
    puVar6 = (undefined8 *)0x0;
    if (lVar2 != 0) {
      TBaseMulticastDelegate<void>::Remove(lVar2 + 8,param_1[3]);
      param_1[3] = 0;
    }
    if (param_3 == 0) {
      FArchive::FArchive(&local_c8);
      local_38 = 0;
      local_c8 = &PTR_FUN_143f4a3a0;
      local_28 = 0x7fffffffffffffff;
      local_30 = param_4;
      FArchive::SetIsLoading(&local_c8,1);
      FArchive::SetIsPersistent(&local_c8,0);
      local_res10[0] = 0;
      if ((int *)local_c0[1] < (int *)*local_c0 + 1) {
        (*(code *)local_c8[10])(&local_c8,local_res10,4);
        if ((local_9f & 0x10) != 0) {
          FArchive::ByteSwap(&local_c8,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*local_c0;
        *local_c0 = *local_c0 + 4;
      }
      iVar7 = local_res10[0];
      lVar2 = param_1[1];
      iVar1 = (int)lVar2 + local_res10[0];
      *(int *)(param_1 + 1) = iVar1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1);
      }
      puVar4 = (undefined8 *)((longlong)(int)lVar2 * 0x40 + *param_1);
      if (iVar7 != 0) {
        puVar3 = puVar4 + 3;
        do {
          *puVar4 = 0;
          puVar3[-2] = 0;
          puVar4 = puVar4 + 8;
          puVar3[-1] = 0;
          *puVar3 = 0;
          *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
          *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
          puVar3[4] = 0;
          puVar3 = puVar3 + 8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      puVar4 = puVar6;
      if (0 < local_res10[0]) {
        do {
          lVar2 = *param_1 + (longlong)puVar4;
          FUN_14158ce90(&local_c8,lVar2);
          FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_e8,&local_c8);
          local_d8 = local_e8;
          local_d0 = &local_d8;
          FUN_141661f40(&local_d8,lVar2 + 0x10);
          FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_e8);
          if ((undefined4 *)local_c0[1] < (undefined4 *)*local_c0 + 1) {
            (*(code *)local_c8[10])(&local_c8,lVar2 + 0x20,4);
            if ((local_9f & 0x10) != 0) {
              FArchive::ByteSwap(&local_c8,lVar2 + 0x20,4);
            }
          }
          else {
            *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)*local_c0;
            *local_c0 = *local_c0 + 4;
          }
          FUN_141661e90(&local_c8,lVar2 + 0x24);
          uVar5 = (int)puVar6 + 1;
          puVar6 = (undefined8 *)(ulonglong)uVar5;
          puVar4 = puVar4 + 8;
        } while ((int)uVar5 < local_res10[0]);
      }
      FArchive::~FArchive(&local_c8);
    }
    else if (lVar2 != 0) {
      puVar4 = (undefined8 *)operator_new(0x48);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_1404bdac0(puVar4,lVar2);
        *(undefined1 *)(puVar4 + 4) = 1;
        *puVar4 = &PTR__scalar_deleting_destructor__143f76d50;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar6 = puVar4;
      }
      FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(lVar2 + 0x50),puVar6);
    }
  }
  return;
}



// FUNCTION 1404d9ec0 FUN_1404d9ec0 body=361 status=ok
// SIG undefined FUN_1404d9ec0(void)

void FUN_1404d9ec0(longlong *param_1,ulonglong param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  ulonglong local_res8;
  undefined1 local_28 [16];
  
  lVar2 = FUN_1404cccf0(param_1 + 8);
  if (lVar2 != 0) {
    FString::FString(local_28,lVar2);
    puVar3 = (undefined4 *)FUN_1404ba650(param_1 + 5,local_28);
    if (puVar3 != (undefined4 *)0x0) {
      lVar2 = FUN_1404cf3e0();
      if (lVar2 != 0) {
        TBaseMulticastDelegate<void>::Remove(lVar2 + 8,*(undefined8 *)(puVar3 + 10));
        *(undefined8 *)(puVar3 + 10) = 0;
      }
      if ((param_3 == 0) && (0 < *(int *)(param_4 + 8))) {
        if (puVar3[4] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(puVar3 + 2);
        }
        puVar4 = (undefined8 *)FName::FName(local_28,puVar6,1);
        lVar2 = FUN_1404c89e0(param_1,*puVar4,param_4);
        local_res8 = CONCAT44(local_res8._4_4_,0xffffffff);
        if (lVar2 != 0) {
          FUN_14170c210(&local_res8,lVar2);
        }
        FUN_1416ff870(puVar3,&local_res8);
        FUN_1416f8340(local_res8 & 0xffffffff);
        lVar2 = FUN_1416f8720(*puVar3);
        if (lVar2 != 0) {
          puVar3[7] = *(undefined4 *)(param_4 + 8);
          puVar3[9] = 2;
          uVar5 = FUN_1416f8720(*puVar3);
          (**(code **)(*param_1 + 0x60))(param_1,1,puVar3 + 2,uVar5);
          return;
        }
      }
      else {
        local_res8 = param_2;
        iVar1 = FUN_1404bb570(param_1 + 8,&local_res8);
        if (0 < iVar1) {
          FUN_1404cc5b0(param_1 + 8);
        }
      }
      FUN_1404c9fc0(param_1,puVar3);
    }
  }
  return;
}



// FUNCTION 1404da030 FUN_1404da030 body=99 status=ok
// SIG undefined FUN_1404da030(void)

void FUN_1404da030(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  
  if ((((param_2 == 1) && (*(longlong *)(param_5 + 8) != 0)) &&
      (*(longlong **)(param_5 + 0xa0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_5 + 0xa0) + 0x20))(), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0x32) = 1;
    (**(code **)(*param_1 + 0x2e8))(param_1,0x11f,param_5);
  }
  return;
}



// FUNCTION 1404da0a0 FUN_1404da0a0 body=817 status=ok
// SIG undefined FUN_1404da0a0(void)

void FUN_1404da0a0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_res10 [2];
  longlong *local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146852f90) &&
       (_Init_thread_header(&DAT_146852f90), DAT_146852f90 == -1)) {
      FName::FName(&DAT_146852f88,"Beacon",1);
      _Init_thread_footer(&DAT_146852f90);
    }
    cVar1 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852f88);
    if (cVar1 != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x238);
      uVar7 = 0;
      local_58 = (longlong *)0x0;
      local_50 = 0;
      uVar8 = (longlong)*(int *)(param_1 + 0x240) & 0x1fffffffffffffff;
      if (plVar2 + *(int *)(param_1 + 0x240) < plVar2) {
        uVar8 = uVar7;
      }
      uVar6 = uVar7;
      if (uVar8 != 0) {
        do {
          plVar3 = (longlong *)*plVar2;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x298))(plVar3,&local_58);
          }
          plVar2 = plVar2 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
      plVar2 = *(longlong **)(param_1 + 0x248);
      uVar8 = (longlong)*(int *)(param_1 + 0x250) & 0x1fffffffffffffff;
      if (plVar2 + *(int *)(param_1 + 0x250) < plVar2) {
        uVar8 = uVar7;
      }
      if (uVar8 != 0) {
        do {
          plVar3 = (longlong *)*plVar2;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x298))(plVar3,&local_58);
          }
          plVar2 = plVar2 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar8);
      }
      plVar2 = (longlong *)(param_3 + 0x98);
      local_48 = CONCAT44((float)DAT_1464aa744._1_1_ * 0.003921569,
                          (float)DAT_1464aa744._2_1_ * 0.003921569);
      local_40 = CONCAT44((float)DAT_1464aa744._3_1_ * 0.003921569,
                          (float)(byte)DAT_1464aa744 * 0.003921569);
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
      local_res10[0] = 0;
      local_48 = 0;
      local_40 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"Beacon",0xe);
      FUN_1428a6fb0(plVar2,&local_48,local_res10);
      if (local_48 != 0) {
        FMemory::Free();
      }
      local_48 = CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                          (float)DAT_1464aa730._2_1_ * 0.003921569);
      local_40 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                          (float)(byte)DAT_1464aa730 * 0.003921569);
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
      uVar8 = (ulonglong)(int)local_50;
      plVar4 = local_58 + uVar8 * 2;
      plVar3 = local_58;
      if (local_58 != plVar4) {
        do {
          local_res10[0] = 0;
          FUN_1428a6fb0(plVar2,plVar3,local_res10);
          plVar3 = plVar3 + 2;
        } while (plVar3 != plVar4);
        uVar8 = local_50 & 0xffffffff;
      }
      uVar5 = (uint)uVar8;
      plVar2 = local_58;
      while (uVar5 != 0) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
        uVar5 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar5;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  return;
}



// FUNCTION 1404da3e0 FUN_1404da3e0 body=4616 status=ok
// SIG undefined FUN_1404da3e0(void)

void FUN_1404da3e0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  wchar_t *pwVar16;
  longlong *plVar17;
  undefined1 local_res18 [16];
  undefined4 local_348;
  undefined1 local_344;
  undefined1 local_343 [3];
  longlong *local_340;
  longlong *local_338;
  longlong *local_330;
  undefined8 *local_328;
  ulonglong local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 *local_300;
  ulonglong local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 *local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  longlong *local_280;
  longlong *local_278;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  longlong *local_230;
  longlong *local_228;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong local_1c0 [2];
  longlong local_1b0 [2];
  longlong local_1a0 [2];
  longlong local_190 [2];
  longlong local_180 [2];
  longlong local_170 [2];
  longlong local_160 [2];
  longlong local_150 [2];
  longlong local_140 [2];
  longlong local_130 [2];
  longlong local_120 [2];
  longlong local_110 [2];
  longlong local_100 [2];
  longlong local_f0 [2];
  longlong local_e0 [2];
  longlong local_d0 [2];
  longlong local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [5];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852fa0) && (_Init_thread_header(&DAT_146852fa0), DAT_146852fa0 == -1))
  {
    FName::FName(&DAT_146852f98,"Voice",1);
    _Init_thread_footer(&DAT_146852fa0);
  }
  if (((param_3 != 0) && (param_2 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*param_2 + 0x740))(param_2,&DAT_146852f98), cVar5 != '\0')) {
    plVar14 = (longlong *)(param_3 + 0x98);
    local_348 = 0x40800000;
    local_340 = plVar14;
    FDisplayDebugManager::SetDrawColor(plVar14,&DAT_1464aa73c);
    puVar11 = &DAT_1468e2308;
    if (*(char *)(param_1 + 0xd8) == '\0') {
      puVar11 = &DAT_1468e2320;
    }
    puVar6 = (undefined8 *)FText::ToString(puVar11);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar6;
    }
    FString::PrintfImpl(local_1c0,L"Comm Enabled: %s",puVar15);
    FUN_1428a6fb0(plVar14,local_1c0,&local_348);
    if (local_1c0[0] != 0) {
      FMemory::Free();
    }
    local_2e8 = 0x1b;
    local_2f0 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f0,0);
    FGenericPlatformString::Memcpy(local_2f0,L"Registered Voice Providers",0x36);
    FUN_1428a6fb0(plVar14,&local_2f0,&local_348);
    if (local_2f0 != 0) {
      FMemory::Free();
    }
    local_330 = *(longlong **)(param_1 + 0x18);
    plVar7 = local_330 + *(int *)(param_1 + 0x20);
    local_308 = plVar7;
    if (local_330 != plVar7) {
      do {
        plVar17 = (longlong *)*local_330;
        local_338 = plVar17;
        if (plVar17 != (longlong *)0x0) {
          local_348 = 0x41000000;
          local_290 = (float)DAT_1464aa730._2_1_ * 0.003921569;
          local_28c = (float)DAT_1464aa730._1_1_ * 0.003921569;
          local_288 = (float)(byte)DAT_1464aa730 * 0.003921569;
          local_284 = (float)DAT_1464aa730._3_1_ * 0.003921569;
          (**(code **)(*plVar14 + 0x20))(plVar14,&local_290);
          puVar6 = (undefined8 *)(**(code **)(*plVar17 + 0x30))(plVar17,local_d0);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar6;
          }
          FString::PrintfImpl(local_1b0,L"Provider: %s",puVar15);
          FUN_1428a6fb0(plVar14,local_1b0,&local_348);
          if (local_1b0[0] != 0) {
            FMemory::Free();
          }
          if (local_d0[0] != 0) {
            FMemory::Free();
          }
          cVar5 = (**(code **)(*plVar17 + 0x10))(plVar17);
          puVar11 = &DAT_1468e2308;
          if (cVar5 == '\0') {
            puVar11 = &DAT_1468e2320;
          }
          puVar6 = (undefined8 *)FText::ToString(puVar11);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar6;
          }
          FString::PrintfImpl(local_1a0,L"IsVoiceServer: %s",puVar15);
          FUN_1428a6fb0(plVar14,local_1a0,&local_348);
          if (local_1a0[0] != 0) {
            FMemory::Free();
          }
          plVar7 = (longlong *)(**(code **)(*plVar17 + 0x20))(plVar17);
          if (plVar7 != (longlong *)0x0) {
            puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,local_c0);
            if (*(int *)(puVar6 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar6;
            }
            FString::PrintfImpl(local_190,L"Server Connection: %s",puVar15);
            FUN_1428a6fb0(plVar14,local_190,&local_348);
            if (local_190[0] != 0) {
              FMemory::Free();
            }
            if (local_c0[0] != 0) {
              FMemory::Free();
            }
            FDisplayDebugManager::SetDrawColor(plVar14,&DAT_1464aa73c);
            local_300 = (undefined8 *)0x0;
            local_2f8 = 0;
            (**(code **)(*plVar7 + 0x10))(plVar7,1,&local_300);
            local_348 = 0x41400000;
            FString::PrintfImpl(local_180,L"Remote Players: %d",local_2f8 & 0xffffffff);
            FUN_1428a6fb0(plVar14,local_180,&local_348);
            if (local_180[0] != 0) {
              FMemory::Free();
            }
            FDisplayDebugManager::SetDrawColor(plVar14,&DAT_1464aa730);
            puVar9 = local_300 + (longlong)(int)local_2f8 * 2;
            for (puVar6 = local_300; puVar6 != puVar9; puVar6 = puVar6 + 2) {
              local_278 = (longlong *)puVar6[1];
              local_280 = (longlong *)*puVar6;
              if (local_278 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_278 + 1) = (int)local_278[1] + 1;
                UNLOCK();
              }
              local_348 = 0x41800000;
              puVar8 = (undefined8 *)(**(code **)(*local_280 + 0x30))(local_280,local_b0);
              if (*(int *)(puVar8 + 1) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = (undefined2 *)*puVar8;
              }
              FString::PrintfImpl(local_170,L"Player: %s",puVar15);
              FUN_1428a6fb0(plVar14,local_170,&local_348);
              if (local_170[0] != 0) {
                FMemory::Free();
              }
              if (local_b0[0] != 0) {
                FMemory::Free();
              }
              local_res18[0] = DAT_1461fb7e0;
              local_348 = 0x41a00000;
              if (((*(int *)(param_1 + 0x10) == 0) ||
                  (*(longlong **)(param_1 + 8) == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar5 == '\0')) {
                cVar5 = '\x01';
                local_res18[0] = DAT_1461fb7e0;
              }
              else {
                if (*(int *)(param_1 + 0x10) == 0) {
                  plVar7 = (longlong *)0x0;
                }
                else {
                  plVar7 = *(longlong **)(param_1 + 8);
                }
                cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,&local_280,local_res18);
              }
              pwVar16 = L"Invalid";
              if (cVar5 != '\0') {
                pwVar16 = L"Valid";
              }
              FString::PrintfImpl(local_160,L"Channel: %hhu %s",local_res18[0],pwVar16);
              FUN_1428a6fb0(plVar14,local_160,&local_348);
              if (local_160[0] != 0) {
                FMemory::Free();
              }
              plVar7 = local_278;
              if (local_278 != (longlong *)0x0) {
                LOCK();
                plVar17 = local_278 + 1;
                lVar4 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar4 == 1) {
                  (**(code **)*local_278)(local_278);
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
              plVar17 = local_338;
            }
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_300);
          }
          local_318 = (longlong *)0x0;
          local_310 = 0;
          (**(code **)(*plVar17 + 0x18))(plVar17,&local_318);
          if (0 < (int)local_310) {
            local_348 = 0x41000000;
            local_270 = (float)DAT_1464aa73c._2_1_ * 0.003921569;
            local_26c = (float)DAT_1464aa73c._1_1_ * 0.003921569;
            local_268 = (float)(byte)DAT_1464aa73c * 0.003921569;
            local_264 = (float)DAT_1464aa73c._3_1_ * 0.003921569;
            (**(code **)(*plVar14 + 0x20))(plVar14,&local_270);
            local_2e0 = 0;
            local_2d8 = 0x13;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e0,0);
            FGenericPlatformString::Memcpy(local_2e0,L"Client Connections",0x26);
            FUN_1428a6fb0(plVar14,&local_2e0,&local_348);
            if (local_2e0 != 0) {
              FMemory::Free();
            }
            local_338 = local_318;
            plVar7 = local_318 + (int)local_310;
            local_2a0 = plVar7;
            if (local_318 != plVar7) {
              do {
                plVar17 = (longlong *)*local_338;
                if (plVar17 != (longlong *)0x0) {
                  local_348 = 0x41400000;
                  local_260 = (float)DAT_1464aa730._2_1_ * 0.003921569;
                  local_25c = (float)DAT_1464aa730._1_1_ * 0.003921569;
                  local_258 = (float)(byte)DAT_1464aa730 * 0.003921569;
                  local_254 = (float)DAT_1464aa730._3_1_ * 0.003921569;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_260);
                  puVar6 = (undefined8 *)(**(code **)(*plVar17 + 0x18))(plVar17,local_a0);
                  if (*(int *)(puVar6 + 1) == 0) {
                    puVar15 = &DAT_143f3eda8;
                  }
                  else {
                    puVar15 = (undefined2 *)*puVar6;
                  }
                  FString::PrintfImpl(local_150,L"Connection: %s",puVar15);
                  FUN_1428a6fb0(plVar14,local_150,&local_348);
                  if (local_150[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_a0[0] != 0) {
                    FMemory::Free();
                  }
                  local_328 = (undefined8 *)0x0;
                  local_320 = 0;
                  (**(code **)(*plVar17 + 0x10))(plVar17,1,&local_328);
                  local_250 = (float)DAT_1464aa73c._2_1_ * 0.003921569;
                  local_24c = (float)DAT_1464aa73c._1_1_ * 0.003921569;
                  local_248 = (float)(byte)DAT_1464aa73c * 0.003921569;
                  local_244 = (float)DAT_1464aa73c._3_1_ * 0.003921569;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_250);
                  FString::PrintfImpl(local_140,L"Remote Players: %d",local_320 & 0xffffffff);
                  FUN_1428a6fb0(plVar14,local_140,&local_348);
                  if (local_140[0] != 0) {
                    FMemory::Free();
                  }
                  local_240 = (float)DAT_1464aa730._2_1_ * 0.003921569;
                  local_23c = (float)DAT_1464aa730._1_1_ * 0.003921569;
                  local_238 = (float)(byte)DAT_1464aa730 * 0.003921569;
                  local_234 = (float)DAT_1464aa730._3_1_ * 0.003921569;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_240);
                  uVar13 = (ulonglong)(int)local_320;
                  puVar9 = local_328 + uVar13 * 2;
                  puVar6 = local_328;
                  if (local_328 != puVar9) {
                    do {
                      local_228 = (longlong *)puVar6[1];
                      local_230 = (longlong *)*puVar6;
                      if (local_228 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(local_228 + 1) = (int)local_228[1] + 1;
                        UNLOCK();
                      }
                      local_348 = 0x41800000;
                      puVar8 = (undefined8 *)(**(code **)(*local_230 + 0x30))(local_230,local_90);
                      if (*(int *)(puVar8 + 1) == 0) {
                        puVar15 = &DAT_143f3eda8;
                      }
                      else {
                        puVar15 = (undefined2 *)*puVar8;
                      }
                      FString::PrintfImpl(local_130,L"Player: %s",puVar15);
                      FUN_1428a6fb0(plVar14,local_130,&local_348);
                      if (local_130[0] != 0) {
                        FMemory::Free();
                      }
                      if (local_90[0] != 0) {
                        FMemory::Free();
                      }
                      local_344 = DAT_1461fb7e0;
                      local_348 = 0x41a00000;
                      if (((*(int *)(param_1 + 0x10) == 0) ||
                          (*(longlong **)(param_1 + 8) == (longlong *)0x0)) ||
                         (cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(),
                         cVar5 == '\0')) {
                        cVar5 = '\x01';
                        local_344 = DAT_1461fb7e0;
                      }
                      else {
                        if (*(int *)(param_1 + 0x10) == 0) {
                          plVar7 = (longlong *)0x0;
                        }
                        else {
                          plVar7 = *(longlong **)(param_1 + 8);
                        }
                        cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,&local_230,&local_344);
                      }
                      pwVar16 = L"Invalid";
                      if (cVar5 != '\0') {
                        pwVar16 = L"Valid";
                      }
                      FString::PrintfImpl(local_120,L"Channel: %hhu %s",local_344,pwVar16);
                      FUN_1428a6fb0(plVar14,local_120,&local_348);
                      if (local_120[0] != 0) {
                        FMemory::Free();
                      }
                      plVar7 = local_228;
                      if (local_228 != (longlong *)0x0) {
                        LOCK();
                        plVar17 = local_228 + 1;
                        lVar4 = *plVar17;
                        *(int *)plVar17 = (int)*plVar17 + -1;
                        UNLOCK();
                        if ((int)lVar4 == 1) {
                          (**(code **)*local_228)(local_228);
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
                      puVar6 = puVar6 + 2;
                    } while (puVar6 != puVar9);
                    uVar13 = local_320 & 0xffffffff;
                  }
                  if ((int)uVar13 != 0) {
                    plVar7 = local_328 + 1;
                    do {
                      plVar17 = (longlong *)*plVar7;
                      if (plVar17 != (longlong *)0x0) {
                        LOCK();
                        plVar2 = plVar17 + 1;
                        lVar4 = *plVar2;
                        *(int *)plVar2 = (int)*plVar2 + -1;
                        UNLOCK();
                        if ((int)lVar4 == 1) {
                          (**(code **)*plVar17)(plVar17);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar17 + 0xc);
                          iVar3 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (iVar3 == 1) {
                            (**(code **)(*plVar17 + 8))(plVar17,1);
                          }
                        }
                      }
                      plVar7 = plVar7 + 2;
                      uVar12 = (int)uVar13 - 1;
                      uVar13 = (ulonglong)uVar12;
                    } while (uVar12 != 0);
                  }
                  plVar7 = local_2a0;
                  if (local_328 != (undefined8 *)0x0) {
                    FMemory::Free(local_328);
                    plVar7 = local_2a0;
                  }
                }
                local_338 = local_338 + 1;
              } while (local_338 != plVar7);
            }
          }
          plVar7 = local_308;
          if (local_318 != (longlong *)0x0) {
            FMemory::Free(local_318);
            plVar7 = local_308;
          }
        }
        local_330 = local_330 + 1;
      } while (local_330 != plVar7);
    }
    local_348 = 0x40800000;
    local_220 = (float)DAT_1464aa73c._2_1_ * 0.003921569;
    local_21c = (float)DAT_1464aa73c._1_1_ * 0.003921569;
    local_218 = (float)(byte)DAT_1464aa73c * 0.003921569;
    local_214 = (float)DAT_1464aa73c._3_1_ * 0.003921569;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_220);
    local_2d0 = 0;
    local_2c8 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
    FGenericPlatformString::Memcpy(local_2d0,L"Mute List",0x14);
    FUN_1428a6fb0(plVar14,&local_2d0,&local_348);
    if (local_2d0 != 0) {
      FMemory::Free();
    }
    local_210 = (float)DAT_1464aa730._2_1_ * 0.003921569;
    local_20c = (float)DAT_1464aa730._1_1_ * 0.003921569;
    local_208 = (float)(byte)DAT_1464aa730 * 0.003921569;
    local_204 = (float)DAT_1464aa730._3_1_ * 0.003921569;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_210);
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    plVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x30) * 4;
    plVar14 = local_340;
    local_330 = plVar7;
    if (puVar6 != plVar7) {
      do {
        local_348 = 0x41000000;
        puVar9 = (undefined8 *)
                 (**(code **)(*(longlong *)*puVar6 + 0x30))((longlong *)*puVar6,local_80);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar9;
        }
        FString::PrintfImpl(local_110,L"Player: %s",puVar15);
        FUN_1428a6fb0(plVar14,local_110,&local_348);
        if (local_110[0] != 0) {
          FMemory::Free();
        }
        if (local_80[0] != 0) {
          FMemory::Free();
        }
        plVar17 = local_340;
        puVar9 = (undefined8 *)puVar6[2];
        puVar8 = puVar9 + (longlong)*(int *)(puVar6 + 3) * 2;
        for (; puVar9 != puVar8; puVar9 = puVar9 + 2) {
          plVar14 = (longlong *)puVar9[1];
          plVar7 = (longlong *)*puVar9;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
          }
          local_348 = 0x41400000;
          local_200 = (float)DAT_1464aa730._2_1_ * 0.003921569;
          local_1fc = (float)DAT_1464aa730._1_1_ * 0.003921569;
          local_1f8 = (float)(byte)DAT_1464aa730 * 0.003921569;
          local_1f4 = (float)DAT_1464aa730._3_1_ * 0.003921569;
          (**(code **)(*plVar17 + 0x20))(plVar17,&local_200);
          puVar10 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,local_70);
          if (*(int *)(puVar10 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar10;
          }
          FString::PrintfImpl(local_100,L"Muted: %s",puVar15);
          FUN_1428a6fb0(plVar17,local_100,&local_348);
          if (local_100[0] != 0) {
            FMemory::Free();
          }
          if (local_70[0] != 0) {
            FMemory::Free();
          }
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar14 + 1;
            lVar4 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          plVar14 = local_340;
          plVar7 = local_330;
        }
        puVar6 = puVar6 + 4;
      } while (puVar6 != plVar7);
    }
    local_348 = 0x40800000;
    local_1f0 = (float)DAT_1464aa73c._2_1_ * 0.003921569;
    local_1ec = (float)DAT_1464aa73c._1_1_ * 0.003921569;
    local_1e8 = (float)(byte)DAT_1464aa73c * 0.003921569;
    local_1e4 = (float)DAT_1464aa73c._3_1_ * 0.003921569;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_1f0);
    local_2c0 = 0;
    local_2b8 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c0,0);
    FGenericPlatformString::Memcpy(local_2c0,L"Local Players",0x1c);
    FUN_1428a6fb0(plVar14,&local_2c0,&local_348);
    if (local_2c0 != 0) {
      FMemory::Free();
    }
    local_1e0 = (float)DAT_1464aa730._2_1_ * 0.003921569;
    local_1dc = (float)DAT_1464aa730._1_1_ * 0.003921569;
    local_1d8 = (float)(byte)DAT_1464aa730 * 0.003921569;
    local_1d4 = (float)DAT_1464aa730._3_1_ * 0.003921569;
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_1e0);
    local_298 = 0;
    FUN_1404cf890(&local_1d0,0);
    if (local_1d0 != (longlong *)0x0) {
      local_2b0 = (undefined8 *)0x0;
      local_2a8 = 0;
      (**(code **)(*local_1d0 + 0x70))(local_1d0,&local_2b0);
      puVar9 = local_2b0 + (longlong)(int)local_2a8 * 2;
      for (puVar6 = local_2b0; puVar6 != puVar9; puVar6 = puVar6 + 2) {
        local_348 = 0x41000000;
        puVar8 = (undefined8 *)
                 (**(code **)(*(longlong *)*puVar6 + 0x30))((longlong *)*puVar6,local_60);
        if (*(int *)(puVar8 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar8;
        }
        FString::PrintfImpl(local_f0,L"Player: %s",puVar15);
        FUN_1428a6fb0(plVar14,local_f0,&local_348);
        if (local_f0[0] != 0) {
          FMemory::Free();
        }
        if (local_60[0] != 0) {
          FMemory::Free();
        }
        local_343[0] = DAT_1461fb7e0;
        local_348 = 0x41400000;
        if (((*(int *)(param_1 + 0x10) == 0) || (*(longlong **)(param_1 + 8) == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar5 == '\0')) {
          cVar5 = '\x01';
          local_343[0] = DAT_1461fb7e0;
        }
        else {
          if (*(int *)(param_1 + 0x10) == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = *(longlong **)(param_1 + 8);
          }
          cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,puVar6,local_343);
        }
        pwVar16 = L"Invalid";
        if (cVar5 != '\0') {
          pwVar16 = L"Valid";
        }
        FString::PrintfImpl(local_e0,L"Channel: %hhu %s",local_343[0],pwVar16);
        FUN_1428a6fb0(plVar14,local_e0,&local_348);
        if (local_e0[0] != 0) {
          FMemory::Free();
        }
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_2b0);
    }
    plVar14 = local_1c8;
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1c8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404db5f0 FUN_1404db5f0 body=302 status=ok
// SIG undefined FUN_1404db5f0(void)

void FUN_1404db5f0(longlong param_1,undefined8 param_2,int param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404d0c50(&local_18,param_4);
  if (local_18 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      lVar5 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar5 = param_1 + 0x78;
      }
      iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)param_4 >> 0x20) + (int)param_4) &
                               (longlong)*(int *)(param_1 + 0x88) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x40) + (longlong)iVar4 * 0x18;
          if (*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar4 * 0x18) == param_4) {
            if (iVar4 != -1) goto LAB_1404db693;
            break;
          }
          iVar4 = *(int *)(lVar5 + 0x10);
        } while (iVar4 != -1);
      }
    }
    lVar5 = 0;
LAB_1404db693:
    lVar6 = lVar5 + 8;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      (**(code **)(*local_18 + 0x68))(local_18);
    }
  }
  TBaseDelegate<void,FName,bool>::ExecuteIfBound(param_5,param_2,param_3 == 1);
  plVar3 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return;
}



// FUNCTION 1404db720 FUN_1404db720 body=118 status=ok
// SIG undefined FUN_1404db720(void)

void FUN_1404db720(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x68))(local_18,param_1 + 0x17);
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



// FUNCTION 1404db7a0 FUN_1404db7a0 body=117 status=ok
// SIG undefined FUN_1404db7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404db7a0(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  if (((param_2[1] == _DAT_146852ec4 && param_2[2] == _DAT_146852ec8) &&
      param_2[3] == _DAT_146852ecc) && *param_2 == _DAT_146852ec0) {
    lVar1 = FUN_1404cf3e0();
    if (lVar1 != 0) {
      TBaseMulticastDelegate<void>::Remove(lVar1 + 0x20,*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      FUN_1404cc5b0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1404db820 FUN_1404db820 body=154 status=ok
// SIG undefined FUN_1404db820(void)

void FUN_1404db820(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  param_1 = param_1 + 0x40;
  lVar3 = FUN_1404cccf0(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_1404cf3e0();
    if (lVar4 != 0) {
      TBaseMulticastDelegate<void>::Remove(lVar4 + 0x20,*(undefined8 *)(lVar3 + 0x38));
      *(undefined8 *)(lVar3 + 0x38) = 0;
    }
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_4 + 0x58);
      *(undefined8 *)(lVar3 + 0x24) = *(undefined8 *)(param_4 + 0x50);
      *(undefined8 *)(lVar3 + 0x2c) = uVar1;
      *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(param_4 + 0x60);
      *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_4 + 0x40);
    }
    else {
      local_res8 = param_2;
      iVar2 = FUN_1404bb570(param_1,&local_res8);
      if (0 < iVar2) {
        FUN_1404cc5b0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1404db8c0 FUN_1404db8c0 body=400 status=ok
// SIG undefined FUN_1404db8c0(void)

undefined1 FUN_1404db8c0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_res10 [2];
  undefined8 local_res20;
  longlong local_28;
  undefined8 local_20;
  
  uVar3 = 0;
  local_res10[0] = param_2;
  cVar2 = FParse::Command(local_res10,L"ONLINE",1);
  if (cVar2 == '\0') {
    return 0;
  }
  local_28 = 0;
  local_20 = 0;
  FParse::Value(local_res10[0],L"Sub=",&local_28,1);
  if (((int)local_20 == 0) || (iVar7 = (int)local_20 + -1, iVar7 < 1)) {
    FParse::Value(local_res10[0],L"Subsystem=",&local_28,1);
    if ((int)local_20 != 0) {
      iVar7 = (int)local_20 + -1;
      if (0 < iVar7) {
        iVar4 = (int)local_20 + 9;
        goto LAB_1404db958;
      }
      goto LAB_1404db96b;
    }
  }
  else {
    iVar4 = (int)local_20 + 3;
LAB_1404db958:
    local_res10[0] = local_res10[0] + (longlong)iVar4 * 2;
LAB_1404db96b:
    if (iVar7 != 0) {
      FName::FName(&local_res20,local_28,1);
      goto LAB_1404db989;
    }
  }
  local_res20 = 0;
LAB_1404db989:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar1 = DAT_146852c58;
  uVar5 = FUN_14168dc80();
  plVar6 = (longlong *)FModuleManager::GetModule(uVar5,uVar1);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,local_res20);
  if (plVar6 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar6 + 0x120))(plVar6,param_1,local_res10[0],param_3);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 1404dba50 PopAudio body=371 status=ok
// SIG undefined PopAudio(void)

int FVoicePacketBuffer::PopAudio(longlong *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = 0;
  if (param_3 != 0) {
    do {
      lVar2 = *param_1;
      iVar7 = (int)uVar6;
      if (lVar2 == 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(param_2 + uVar6 * 4),0,(ulonglong)(param_3 - iVar7) << 2);
        *(uint *)(param_1 + 2) = (int)param_1[2] + param_3;
        if (*(uint *)(param_1 + 3) < *(uint *)(param_1 + 2)) {
          LOCK();
          *(undefined4 *)((longlong)param_1 + 0x14) = 1;
          UNLOCK();
        }
        return 0;
      }
      if ((ulonglong)param_1[1] < *(ulonglong *)(lVar2 + 0x30)) {
        param_1[1] = *(ulonglong *)(lVar2 + 0x30);
      }
      else {
        iVar5 = param_3 - iVar7;
        if (iVar5 < *(int *)(lVar2 + 0x1c)) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(param_2 + uVar6 * 4),
                     (void *)(*(longlong *)(lVar2 + 0x10) +
                             (longlong)(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x1c)) * 4),
                     (longlong)iVar5 * 4);
          uVar6 = (ulonglong)param_3;
          *(int *)(*param_1 + 0x1c) = *(int *)(*param_1 + 0x1c) - iVar5;
          param_1[1] = param_1[1] + (longlong)iVar5;
          *(undefined4 *)(param_1 + 2) = 0;
          LOCK();
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
          UNLOCK();
        }
        else {
          LOCK();
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
          UNLOCK();
          lVar2 = *param_1;
          uVar1 = *(uint *)(lVar2 + 0x1c);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(param_2 + uVar6 * 4),
                     (void *)(*(longlong *)(lVar2 + 0x10) +
                             (longlong)(int)(*(int *)(lVar2 + 0x18) - uVar1) * 4),
                     (ulonglong)uVar1 * 4);
          param_1[1] = param_1[1] + (ulonglong)uVar1;
          lVar2 = *param_1;
          uVar6 = (ulonglong)(iVar7 + uVar1);
          puVar4 = (undefined8 *)operator_new(0x10);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = 0;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar2 + 0x28);
            puVar3 = (undefined8 *)param_1[6];
            param_1[6] = (longlong)puVar4;
            *puVar3 = puVar4;
          }
          *param_1 = *(longlong *)(*param_1 + 0x20);
        }
      }
    } while ((uint)uVar6 < param_3);
  }
  return param_3 - (int)param_1[2];
}



// FUNCTION 1404dbbd0 FUN_1404dbbd0 body=764 status=ok
// SIG undefined FUN_1404dbbd0(void)

void FUN_1404dbbd0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong local_88;
  undefined8 local_80;
  undefined **local_78 [2];
  longlong *local_68;
  longlong local_60;
  undefined **local_50 [2];
  longlong *local_40;
  longlong local_38;
  
  uVar6 = (**(code **)(*param_1 + 0x148))();
  lVar7 = 0;
  if ((DAT_146b17150 == 0) || (lVar7 = UEngine::GetFirstGamePlayer(DAT_146b17150,uVar6), lVar7 == 0)
     ) {
    local_88 = 0;
    local_80 = 0x3c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy
              (local_88,L"populate_local_party_reservation_failed_null_primary_player",0x78);
    FUN_1404dd160(param_1,&local_88);
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  else {
    uVar8 = FUN_142547b50(lVar7,local_78);
    FUN_1404c0940(param_2 + 8,uVar8);
    local_78[0] = &PTR_FUN_143f740c8;
    if (local_60 != 0) {
      FMemory::Free();
    }
    local_78[0] = &PTR_FUN_143f73d18;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_68 + 1;
      lVar10 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  puVar13 = *(undefined8 **)(param_2 + 0x30);
  for (iVar11 = *(int *)(param_2 + 0x38); iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = &PTR_FUN_143f740c8;
    if (puVar13[3] != 0) {
      FMemory::Free();
    }
    *puVar13 = &PTR_FUN_143f73d18;
    plVar14 = (longlong *)puVar13[2];
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar14 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    puVar13 = puVar13 + 5;
  }
  uVar12 = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  if (*(int *)(param_2 + 0x3c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2 + 0x30,0);
  }
  puVar9 = (ulonglong *)FUN_1428749e0(DAT_146b17150,uVar6);
  plVar14 = (longlong *)*puVar9;
  uVar15 = (longlong)(int)puVar9[1] & 0x1fffffffffffffff;
  if (plVar14 + (int)puVar9[1] < plVar14) {
    uVar15 = uVar12;
  }
  if (uVar15 != 0) {
    do {
      lVar10 = *plVar14;
      if ((lVar10 != 0) && (lVar10 != lVar7)) {
        lVar10 = FUN_142547b50(lVar10,local_50);
        iVar11 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar11 + 1;
        if (*(int *)(param_2 + 0x3c) < iVar11 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2 + 0x30,iVar11);
        }
        lVar5 = *(longlong *)(param_2 + 0x30);
        *(undefined ***)(lVar5 + (longlong)iVar11 * 0x28) = &PTR_FUN_143f73d18;
        puVar13 = (undefined8 *)(lVar5 + (longlong)iVar11 * 0x28);
        puVar13[1] = *(undefined8 *)(lVar10 + 8);
        lVar10 = *(longlong *)(lVar10 + 0x10);
        puVar13[2] = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        *puVar13 = &PTR_FUN_143f740c8;
        puVar13[3] = 0;
        puVar13[4] = 0;
        local_50[0] = &PTR_FUN_143f740c8;
        if (local_38 != 0) {
          FMemory::Free();
        }
        plVar2 = local_40;
        local_50[0] = &PTR_FUN_143f73d18;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
      plVar14 = plVar14 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar15);
  }
  return;
}



// FUNCTION 1404dbed0 PostInitProperties body=765 status=ok
// SIG undefined PostInitProperties(void)

void UOnlinePIESettings::PostInitProperties(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  byte *local_48;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  FUN_1417931d0();
  lVar12 = *(longlong *)(param_1 + 0x40);
  lVar15 = (longlong)*(int *)(param_1 + 0x48) * 0x40 + lVar12;
  if (lVar12 != lVar15) {
    puVar9 = (uint *)(lVar12 + 0x18);
    do {
      uVar10 = 0;
      uVar14 = puVar9[8];
      if ((int)uVar14 < 1) {
        *puVar9 = 0;
        if (puVar9[1] != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar9 + -2,0);
        }
      }
      else {
        uVar11 = (longlong)(int)(uVar14 + 0xf) & 0xfffffffffffffff0;
        if ((0 < (longlong)uVar11) && (uVar11 == (longlong)(int)uVar14)) {
          local_48 = (byte *)0x0;
          local_3c = 0;
          uVar6 = 0;
          local_40 = 0;
          uVar8 = uVar10;
          if ((int)uVar11 != 0) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo
                      (&local_48,(longlong)(int)(uVar14 + 0xf) & 0xfffffff0);
            uVar8 = (ulonglong)local_40;
          }
          local_40 = (int)uVar11 + (int)uVar8;
          if (local_3c < (int)local_40) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48);
          }
          uVar14 = local_40;
          pbVar3 = local_48;
          ::_guard_xfg_dispatch_icall_nop(local_48,*(void **)(puVar9 + 6),uVar11);
          uVar13 = (uint)(uVar11 >> 2);
          uVar11 = uVar10;
          if ((0 < (int)uVar13) && (0xf < uVar13)) {
            uVar7 = uVar13 & 0x8000000f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
            }
            puVar5 = (ulonglong *)(pbVar3 + 0x20);
            do {
              uVar11 = uVar11 + 0x10;
              puVar5[-4] = puVar5[-4] ^ 0xdeadbeefdeadbeef;
              puVar5[-3] = puVar5[-3] ^ 0xdeadbeefdeadbeef;
              puVar5[-2] = puVar5[-2] ^ 0xdeadbeefdeadbeef;
              puVar5[-1] = puVar5[-1] ^ 0xdeadbeefdeadbeef;
              *puVar5 = *puVar5 ^ 0xdeadbeefdeadbeef;
              puVar5[1] = puVar5[1] ^ 0xdeadbeefdeadbeef;
              puVar5[2] = puVar5[2] ^ 0xdeadbeefdeadbeef;
              puVar5[3] = puVar5[3] ^ 0xdeadbeefdeadbeef;
              puVar5 = puVar5 + 8;
            } while ((longlong)uVar11 < (longlong)(int)(uVar13 - uVar7));
          }
          for (; (longlong)uVar11 < (longlong)(int)uVar13; uVar11 = uVar11 + 1) {
            *(uint *)(pbVar3 + uVar11 * 4) = *(uint *)(pbVar3 + uVar11 * 4) ^ 0xdeadbeef;
          }
          pbVar1 = pbVar3 + 1;
          if (((int)(uint)*pbVar3 < (int)uVar14) &&
             (*(short *)(pbVar3 + (ulonglong)(*pbVar3 >> 1) * 2 + -1) == 0)) {
            local_38 = 0;
            local_30 = local_30 & 0xffffffff;
            uVar14 = uVar6;
            if ((pbVar1 != (byte *)0x0) && (uVar14 = 0, *(short *)pbVar1 != 0)) {
              lVar4 = -1;
              do {
                lVar2 = lVar4 * 2;
                lVar4 = lVar4 + 1;
              } while (*(short *)(pbVar3 + lVar2 + 3) != 0);
              uVar13 = (int)lVar4 + 1;
              local_30 = (ulonglong)uVar13;
              uVar11 = uVar10;
              uVar6 = uVar13;
              if (0 < (int)uVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
                uVar11 = local_30 >> 0x20;
                uVar6 = (uint)local_30;
              }
              uVar10 = local_38;
              uVar14 = (uint)uVar11;
              FGenericPlatformString::Memcpy(local_38,pbVar1,(longlong)(int)uVar13 * 2);
            }
            puVar5 = (ulonglong *)(puVar9 + -2);
            if (puVar5 == &local_38) {
              if (uVar10 != 0) {
                FMemory::Free(uVar10);
                FMemory::Free(pbVar3);
                goto LAB_1404dc193;
              }
            }
            else {
              if (*puVar5 != 0) {
                FMemory::Free();
              }
              *puVar5 = uVar10;
              *puVar9 = uVar6;
              puVar9[1] = uVar14;
              local_38 = 0;
              local_30 = 0;
            }
          }
          else {
            *puVar9 = 0;
            if (puVar9[1] != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar9 + -2,0);
            }
            puVar9[8] = 0;
            if (puVar9[9] != 0) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar9 + 6);
              FMemory::Free(pbVar3);
              goto LAB_1404dc193;
            }
          }
          FMemory::Free(pbVar3);
        }
      }
LAB_1404dc193:
      lVar12 = lVar12 + 0x40;
      puVar9 = puVar9 + 0x10;
    } while (lVar12 != lVar15);
  }
  return;
}



// FUNCTION 1404dc1d0 FUN_1404dc1d0 body=1719 status=ok
// SIG undefined FUN_1404dc1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404dc1d0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  undefined1 *_Src;
  undefined1 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined1 local_207 [7];
  longlong *local_200;
  uint local_1f8;
  uint local_1f4;
  longlong *local_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  void *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined1 local_1c0 [8];
  longlong local_1b8 [2];
  longlong local_1a8 [2];
  undefined1 local_198 [16];
  longlong local_188;
  longlong *local_180;
  longlong local_f8;
  longlong local_98;
  longlong local_88;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar11 = (longlong *)0x0;
  iVar2 = 0;
  local_200 = (longlong *)0x0;
  local_1f4 = 0;
  local_1c8 = param_1;
  if (DAT_146b17150 != 0) {
    plVar12 = *(longlong **)(DAT_146b17150 + 0xc18);
    plVar5 = plVar12 + *(int *)(DAT_146b17150 + 0xc20);
    plVar15 = (longlong *)0x0;
    plVar8 = plVar11;
    plVar13 = plVar11;
    for (; plVar11 = plVar15, plVar12 != plVar5; plVar12 = plVar12 + 1) {
      local_1f0 = (longlong *)*plVar12;
      plVar15 = *(longlong **)((longlong)local_1f0 + 0x248);
      plVar14 = plVar15 + (longlong)*(int *)((longlong)local_1f0 + 0x250) * 2;
      for (; plVar15 != plVar14; plVar15 = plVar15 + 2) {
        lVar10 = *plVar15;
        if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x90) != 0)) {
          iVar2 = (int)plVar8;
          for (plVar4 = plVar11; plVar4 != plVar11 + iVar2; plVar4 = plVar4 + 1) {
            if (*plVar4 == *(longlong *)(lVar10 + 0x90)) {
              if ((int)((longlong)plVar4 - (longlong)plVar11 >> 3) != -1) goto LAB_1404dc302;
              break;
            }
          }
          local_1f8 = iVar2 + 1;
          if ((int)plVar13 < (int)local_1f8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_200,plVar8);
            plVar13 = (longlong *)(ulonglong)local_1f4;
            plVar11 = local_200;
          }
          plVar8 = (longlong *)(ulonglong)local_1f8;
          plVar11[iVar2] = *(longlong *)(lVar10 + 0x90);
        }
LAB_1404dc302:
      }
      plVar15 = *(longlong **)((longlong)local_1f0 + 0x290);
      plVar14 = plVar15 + (longlong)*(int *)((longlong)local_1f0 + 0x298) * 2;
      for (; iVar2 = (int)plVar8, plVar15 != plVar14; plVar15 = plVar15 + 2) {
        lVar10 = *plVar15;
        if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x90) != 0)) {
          for (plVar4 = plVar11; plVar4 != plVar11 + iVar2; plVar4 = plVar4 + 1) {
            if (*plVar4 == *(longlong *)(lVar10 + 0x90)) {
              if ((int)((longlong)plVar4 - (longlong)plVar11 >> 3) != -1) goto LAB_1404dc3a7;
              break;
            }
          }
          local_1f8 = iVar2 + 1;
          if ((int)plVar13 < (int)local_1f8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_200,plVar8);
            plVar13 = (longlong *)(ulonglong)local_1f4;
            plVar11 = local_200;
          }
          plVar8 = (longlong *)(ulonglong)local_1f8;
          plVar11[iVar2] = *(longlong *)(lVar10 + 0x90);
        }
LAB_1404dc3a7:
      }
      plVar15 = plVar11;
    }
  }
  plVar5 = plVar11 + iVar2;
  plVar12 = plVar11;
  local_1f0 = plVar5;
  if (plVar11 != plVar5) {
    do {
      lVar10 = local_1c8;
      puVar9 = (undefined1 *)0x0;
      plVar12 = (longlong *)*plVar11;
      if (plVar12 != (longlong *)0x0) {
        puVar6 = (undefined1 *)(local_1c8 + 0x100);
        local_68 = (undefined1 *)0x0;
        local_60 = 0;
        iVar2 = 0;
        if (local_78 != puVar6) {
          iVar3 = *(int *)(local_1c8 + 0x118);
          uVar1 = iVar3 + 0x1f + (iVar3 + 0x1f >> 0x1f & 0x1fU);
          puVar7 = puVar9;
          if ((uVar1 & 0xffffffe0) != 0) {
            local_60 = ((ulonglong)uVar1 & 0xffffffe0) << 0x20;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(local_78,0);
            iVar3 = *(int *)(lVar10 + 0x118);
            puVar7 = (undefined1 *)(local_60 >> 0x20);
          }
          local_60 = CONCAT44(local_60._4_4_,iVar3);
          iVar2 = (int)puVar7;
          if (iVar3 != 0) {
            iVar2 = (int)puVar7 + 0x1f;
            puVar7 = *(undefined1 **)(lVar10 + 0x110);
            if (*(undefined1 **)(lVar10 + 0x110) == (undefined1 *)0x0) {
              puVar7 = puVar6;
            }
            puVar6 = local_78;
            if (local_68 != (undefined1 *)0x0) {
              puVar6 = puVar9;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((ulonglong)puVar6 | (ulonglong)local_68),puVar7,
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
            iVar2 = local_60._4_4_;
          }
        }
        puVar6 = local_68;
        local_48 = (undefined1 *)0x0;
        local_40 = 0;
        if (local_58 != (undefined1 *)(lVar10 + 0x120)) {
          iVar3 = *(int *)(lVar10 + 0x138);
          uVar1 = iVar3 + 0x1f + (iVar3 + 0x1f >> 0x1f & 0x1fU);
          if ((uVar1 & 0xffffffe0) != 0) {
            local_40 = ((ulonglong)uVar1 & 0xffffffe0) << 0x20;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(local_58,0);
            iVar3 = *(int *)(lVar10 + 0x138);
            puVar9 = (undefined1 *)(local_40 >> 0x20);
          }
          local_40 = CONCAT44(local_40._4_4_,iVar3);
          if (iVar3 != 0) {
            iVar3 = (int)puVar9 + 0x1f;
            puVar9 = *(undefined1 **)(lVar10 + 0x130);
            if (*(undefined1 **)(lVar10 + 0x130) == (undefined1 *)0x0) {
              puVar9 = (undefined1 *)(lVar10 + 0x120);
            }
            puVar7 = local_58;
            if (local_48 != (undefined1 *)0x0) {
              puVar7 = (undefined1 *)0x0;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((ulonglong)puVar7 | (ulonglong)local_48),puVar9,
                       (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
            puVar9 = (undefined1 *)(local_40 >> 0x20);
          }
        }
        puVar7 = local_48;
        local_1e8 = (void *)0x0;
        local_1dc = 0;
        iVar2 = (int)((iVar2 + 0x1f >> 0x1f & 0x1fU) + iVar2 + 0x1f) >> 5;
        iVar3 = iVar2 << 2;
        local_1e0 = iVar3;
        if (0 < iVar2 << 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
        }
        _Src = local_78;
        if (puVar6 != (undefined1 *)0x0) {
          _Src = puVar6;
        }
        _guard_xfg_dispatch_icall_nop(local_1e8,_Src,(longlong)iVar3);
        FBase64::Encode(local_1a8,&local_1e8);
        if (local_1e8 != (void *)0x0) {
          FMemory::Free();
        }
        local_1d8 = (void *)0x0;
        local_1cc = 0;
        iVar2 = (int)puVar9 + 0x1f;
        iVar2 = (int)((iVar2 >> 0x1f & 0x1fU) + iVar2) >> 5;
        iVar3 = iVar2 << 2;
        local_1d0 = iVar3;
        if (0 < iVar2 << 2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
        }
        puVar9 = local_58;
        if (puVar7 != (undefined1 *)0x0) {
          puVar9 = puVar7;
        }
        _guard_xfg_dispatch_icall_nop(local_1d8,puVar9,(longlong)iVar3);
        FBase64::Encode(local_1b8,&local_1d8);
        if (local_1d8 != (void *)0x0) {
          FMemory::Free();
        }
        lVar10 = *(longlong *)plVar12[0x2b0];
        if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_188,lVar10,0);
          local_208 = 0x21;
          if ((undefined1 *)local_180[1] < (undefined1 *)*local_180 + 1) {
            (**(code **)(local_188 + 0x50))(&local_188,&local_208,1);
          }
          else {
            local_208 = *(undefined1 *)*local_180;
            *local_180 = *local_180 + 1;
          }
          FUN_14158ce90(&local_188,local_1a8);
          (**(code **)(**(longlong **)plVar12[0x2b0] + 0x2c8))
                    (*(longlong **)plVar12[0x2b0],local_1c0,&local_188,1);
          if (local_88 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          if (local_f8 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_188);
          lVar10 = *(longlong *)plVar12[0x2b0];
        }
        if ((lVar10 != 0) && ((*(byte *)(lVar10 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_188,lVar10,0);
          local_207[0] = 0x22;
          if ((undefined1 *)local_180[1] < (undefined1 *)*local_180 + 1) {
            (**(code **)(local_188 + 0x50))(&local_188,local_207,1);
          }
          else {
            local_207[0] = *(undefined1 *)*local_180;
            *local_180 = *local_180 + 1;
          }
          FUN_14158ce90(&local_188,local_1b8);
          (**(code **)(**(longlong **)plVar12[0x2b0] + 0x2c8))
                    (*(longlong **)plVar12[0x2b0],local_198,&local_188,1);
          if (local_88 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          if (local_f8 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_188);
        }
        (**(code **)(*plVar12 + 0x2c8))(plVar12,0);
        if (local_1b8[0] != 0) {
          FMemory::Free();
        }
        if (local_1a8[0] != 0) {
          FMemory::Free();
        }
        if (puVar7 != (undefined1 *)0x0) {
          FMemory::Free(puVar7);
        }
        plVar5 = local_1f0;
        if (puVar6 != (undefined1 *)0x0) {
          FMemory::Free(puVar6);
          plVar5 = local_1f0;
        }
      }
      plVar11 = plVar11 + 1;
      plVar12 = local_200;
    } while (plVar11 != plVar5);
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  return;
}



// FUNCTION 1404dc890 FUN_1404dc890 body=1159 status=ok
// SIG undefined FUN_1404dc890(void)

void FUN_1404dc890(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  char cVar9;
  short sVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  char local_res20 [8];
  undefined8 *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined8 **local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  sVar10 = (**(code **)(*(longlong *)*param_2 + 0x10))();
  if ((sVar10 == 0) ||
     ((*(char *)(param_1 + 0xd8) == '\0' &&
      (cVar7 = (**(code **)(*(longlong *)*param_2 + 0x30))(), cVar7 == '\0')))) {
                    /* WARNING: Could not recover jumptable at 0x0001404dcd13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x30))();
    return;
  }
  puVar15 = (undefined8 *)*param_3;
  iVar17 = (int)param_3[1];
  plVar12 = (longlong *)0x0;
  local_b8 = (undefined8 *)0x0;
  local_b0 = iVar17;
  if (iVar17 == 0) {
    local_ac = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar17,0);
    puVar13 = local_b8;
    do {
      *puVar13 = *puVar15;
      lVar11 = puVar15[1];
      puVar13[1] = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      puVar13 = puVar13 + 2;
      puVar15 = puVar15 + 2;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  cVar7 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  if (cVar7 != DAT_1461fb7e0) {
    local_68 = param_1;
    local_60 = param_2;
    FUN_1404bba20(&local_b8,&local_68);
  }
  if (local_b0 < 1) {
    cVar7 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar7 != '\0') {
      lVar11 = *param_3;
      lVar18 = (longlong)(int)param_3[1] * 0x10 + lVar11;
      for (; lVar11 != lVar18; lVar11 = lVar11 + 0x10) {
        cVar7 = DAT_1461fb7e0;
        if (((*(int *)(param_1 + 0x10) == 0) ||
            (cVar7 = DAT_1461fb7e0, *(longlong **)(param_1 + 8) == (longlong *)0x0)) ||
           (local_res20[0] = DAT_1461fb7e0,
           cVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar7 = DAT_1461fb7e0,
           cVar9 == '\0')) {
LAB_1404dccbf:
          local_res20[0] = cVar7;
          (**(code **)(*(longlong *)*param_2 + 0x18))();
        }
        else {
          plVar14 = plVar12;
          if (*(int *)(param_1 + 0x10) != 0) {
            plVar14 = *(longlong **)(param_1 + 8);
          }
          cVar9 = (**(code **)(*plVar14 + 0x38))(plVar14,lVar11,local_res20);
          cVar7 = local_res20[0];
          if (cVar9 != '\0') goto LAB_1404dccbf;
        }
      }
    }
  }
  else {
    plVar16 = *(longlong **)(param_1 + 0x18);
    plVar14 = plVar16 + *(int *)(param_1 + 0x20);
    for (; plVar16 != plVar14; plVar16 = plVar16 + 1) {
      plVar4 = (longlong *)*plVar16;
      if ((plVar4 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*plVar4 + 0x28))(plVar4,param_2,&local_b8), cVar7 != '\0')) {
        bVar5 = false;
        bVar6 = false;
        cVar7 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (cVar7 != '\0') {
          local_98 = 0;
          local_90 = 0;
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_98);
          goto LAB_1404dc9f5;
        }
        plVar12 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
        if (plVar12 != (longlong *)0x0) {
          plVar14 = (longlong *)*param_2;
          lVar11 = (**(code **)(*plVar14 + 0x28))(plVar14,local_48);
          plVar16 = *(longlong **)(lVar11 + 8);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          uVar8 = (**(code **)(*plVar14 + 0x30))(plVar14);
          local_88 = 0;
          local_80 = 0;
          (**(code **)(*plVar12 + 0x10))(plVar12,uVar8,&local_88);
          local_70 = &local_b8;
          FUN_1404bbc40(&local_88,&local_70);
          iVar17 = (int)local_80;
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar16 + 1;
            lVar11 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_40 + 1;
            lVar11 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
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
          if (0 < iVar17) {
            (**(code **)*plVar12)(plVar12,param_2);
            goto LAB_1404dccd1;
          }
        }
        break;
      }
    }
    (**(code **)(*(longlong *)*param_2 + 0x30))();
  }
LAB_1404dccd1:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b8);
  return;
LAB_1404dc9f5:
  iVar17 = (int)plVar12;
  if ((iVar17 < 0) || ((int)local_90 <= iVar17)) goto LAB_1404dcb16;
  plVar12 = *(longlong **)(local_98 + (longlong)iVar17 * 8);
  if (plVar12 == (longlong *)0x0) {
LAB_1404dcb0f:
    plVar12 = (longlong *)(ulonglong)(iVar17 + 1);
  }
  else {
    plVar14 = (longlong *)*param_2;
    lVar11 = (**(code **)(*plVar14 + 0x28))(plVar14,local_58);
    plVar16 = *(longlong **)(lVar11 + 8);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    uVar8 = (**(code **)(*plVar14 + 0x30))();
    local_a8 = 0;
    local_a0 = 0;
    (**(code **)(*plVar12 + 0x10))(plVar12,uVar8,&local_a8);
    local_78 = &local_b8;
    FUN_1404bbc40(&local_a8,&local_78);
    iVar3 = (int)local_a0;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_a8);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar16 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    plVar14 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_50 + 1;
      lVar11 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_50)(local_50);
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
    bVar5 = bVar6;
    if (iVar3 < 1) goto LAB_1404dcb0f;
    (**(code **)*plVar12)(plVar12,param_2);
    bVar5 = true;
    plVar12 = (longlong *)(ulonglong)(iVar17 + 1);
    bVar6 = true;
  }
  goto LAB_1404dc9f5;
LAB_1404dcb16:
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (!bVar5) {
    (**(code **)(*(longlong *)*param_2 + 0x30))();
  }
  goto LAB_1404dccd1;
}



// FUNCTION 1404dcd20 FUN_1404dcd20 body=580 status=ok
// SIG undefined FUN_1404dcd20(void)

void FUN_1404dcd20(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  cVar1 = (**(code **)(*param_1 + 0x368))();
  if (cVar1 != '\0') {
    plVar4 = (longlong *)param_1[0xa4];
    if ((plVar4 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar4 + 0x318))
                          (plVar4,param_2,param_3,param_4,param_5,param_6,param_7), cVar2 != '\0'))
    {
      return;
    }
    if ((*(uint *)(param_3 + 0x88) & 0x4000) != 0) {
      iVar5 = 0;
      if (0 < (int)param_1[0x14]) {
        lVar6 = 0;
        do {
          plVar4 = *(longlong **)(lVar6 + param_1[0x13]);
          if ((plVar4 != (longlong *)0x0) && (plVar4[0x12] != 0)) {
            if ((*(byte *)(param_3 + 0x88) & 0x80) == 0) {
              FUN_1425ad800(local_58,plVar4,0);
              cVar2 = (**(code **)(*param_2 + 0x468))(param_2,local_50,local_48,local_40);
              if (cVar2 == '\0') goto LAB_1404dce93;
            }
            lVar3 = (**(code **)(*plVar4 + 0x280))(plVar4);
            if (lVar3 != 0) {
              plVar4 = (longlong *)plVar4[0x32e];
            }
            FUN_1425c3fb0(param_1,param_2,param_7,plVar4,param_3,param_4,param_5,param_6,cVar1);
          }
LAB_1404dce93:
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar5 < (int)param_1[0x14]);
      }
      plVar4 = (longlong *)FUN_142873bb0(DAT_146b17150,param_1[0x1a],0x11e);
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar4 + 0x2e8))(plVar4,param_2,param_3,param_4,param_5,param_6,param_7);
      return;
    }
  }
  lVar6 = (**(code **)(*param_2 + 0x4a8))(param_2);
  if (lVar6 != 0) {
    FUN_1425c3fb0(param_1,param_2,param_7,lVar6,param_3,param_4,param_5,param_6,cVar1);
  }
  return;
}



// FUNCTION 1404dcf70 FUN_1404dcf70 body=490 status=ok
// SIG undefined FUN_1404dcf70(void)

void FUN_1404dcf70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_68 [3];
  longlong *local_50;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  uVar7 = (**(code **)(*param_1 + 0x148))();
  if ((DAT_146b17150 != 0) && (lVar8 = UEngine::GetFirstGamePlayer(DAT_146b17150,uVar7), lVar8 != 0)
     ) {
    lVar8 = FUN_142547b50(lVar8,local_48);
    plVar5 = *(longlong **)(lVar8 + 0x10);
    lVar8 = *(longlong *)(lVar8 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (lVar8 != 0) {
      local_68[1] = 7;
      local_68[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
      FGenericPlatformString::Memcpy(local_68[0],L"beacon",0xe);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_68[2] = lVar8;
      local_50 = plVar5;
      uVar7 = FUN_142b45ee0();
      FUN_142b63240(uVar7,local_68 + 2,local_68,param_2,param_3);
      plVar1 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_50)(local_50);
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
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 1404dd160 FUN_1404dd160 body=198 status=ok
// SIG undefined FUN_1404dd160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404dd160(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_1404c6800;
  FUN_1404dcf70(param_1,param_2,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404dd230 FUN_1404dd230 body=154 status=ok
// SIG undefined FUN_1404dd230(void)

void FUN_1404dd230(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)operator_new(0x58);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1404bdac0(puVar6,param_1);
    *puVar6 = &PTR_FUN_143f76cd0;
    uVar4 = *param_2;
    uVar5 = param_2[1];
    *(undefined4 *)(puVar6 + 6) = param_3;
    puVar6[4] = uVar4;
    puVar6[5] = uVar5;
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 *)((longlong)puVar6 + 0x34) = *param_4;
    *(undefined4 *)(puVar6 + 7) = uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar2;
    *(undefined4 *)(puVar6 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x44) = param_4[4];
    puVar6[9] = 0;
    puVar6[10] = 0;
  }
  FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(param_1 + 0x50),puVar6);
  return;
}



// FUNCTION 1404dd2e0 FUN_1404dd2e0 body=1159 status=ok
// SIG undefined FUN_1404dd2e0(void)

void FUN_1404dd2e0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  bool bVar14;
  char local_res18 [8];
  char local_res20;
  int local_b0 [2];
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res20 = '\x01';
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_58);
  (**(code **)(*(longlong *)*puVar7 + 8))((longlong *)*puVar7,&local_a8);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  FUN_1404cf890(&local_80,local_a8);
  if (local_80 != (longlong *)0x0) {
    local_90 = 0;
    local_88 = 0;
    (**(code **)(*local_80 + 0x70))(local_80,&local_90);
    lVar8 = (longlong)(int)local_88 * 0x10 + local_90;
    for (lVar11 = local_90; lVar11 != lVar8; lVar11 = lVar11 + 0x10) {
      puVar7 = (undefined8 *)
               (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_48);
      local_68 = *puVar7;
      local_60 = (longlong *)puVar7[1];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      cVar4 = FUN_1404d5ac0(param_1,lVar11,&local_68);
      plVar10 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_60 + 1;
        lVar2 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar10 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_40 + 1;
        lVar2 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (cVar4 == '\0') {
        local_res18[0] = DAT_1461fb7e0;
        cVar4 = DAT_1461fb7e0;
        if (((*(int *)(param_1 + 0x10) != 0) &&
            (cVar4 = DAT_1461fb7e0, *(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
           (cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar4 = DAT_1461fb7e0,
           cVar5 != '\0')) {
          plVar10 = (longlong *)0x0;
          if (*(int *)(param_1 + 0x10) != 0) {
            plVar10 = *(longlong **)(param_1 + 8);
          }
          cVar5 = (**(code **)(*plVar10 + 0x38))(plVar10,lVar11,local_res18);
          cVar4 = local_res18[0];
          if (cVar5 == '\0') goto LAB_1404dd4d2;
        }
        local_res18[0] = cVar4;
        cVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
        if ((cVar4 == DAT_1461fb7e0) ||
           (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))(), cVar4 == local_res18[0])) {
          local_res20 = '\0';
          break;
        }
      }
LAB_1404dd4d2:
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_90);
  }
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&local_a0);
  bVar14 = (int)local_98 == 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146852c60) && (_Init_thread_header(&DAT_146852c60), DAT_146852c60 == -1))
  {
    FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
    _Init_thread_footer(&DAT_146852c60);
  }
  uVar3 = DAT_146852c58;
  uVar9 = FUN_14168dc80();
  plVar10 = (longlong *)FModuleManager::GetModule(uVar9,uVar3);
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))(plVar10,0);
  if (plVar10 != (longlong *)0x0) {
    puVar12 = local_a0 + (longlong)(int)local_98 * 2;
    for (puVar7 = local_a0; puVar7 != puVar12; puVar7 = puVar7 + 2) {
      cVar4 = (**(code **)(*(longlong *)*puVar7 + 0x20))();
      if ((cVar4 != '\0') && (cVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10,puVar7), cVar4 != '\0')
         ) {
        bVar14 = true;
      }
    }
  }
  if ((bVar14) &&
     (((local_res20 == '\0' && (*(char *)(param_1 + 0xd8) != '\0')) ||
      (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))(), cVar4 != '\0')))) {
    plVar10 = (longlong *)(param_1 + 0x88);
    if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
      lVar11 = *(longlong *)(param_1 + 200);
      if (*(longlong *)(param_1 + 200) == 0) {
        lVar11 = param_1 + 0xc0;
      }
      iVar6 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)local_a8 >> 0x20) + (int)local_a8) &
                                (longlong)*(int *)(param_1 + 0xd0) - 1U) * 4);
      if (iVar6 != -1) {
        do {
          plVar13 = (longlong *)((longlong)iVar6 * 0x20 + *plVar10);
          if (*plVar13 == local_a8) {
            if ((iVar6 != -1) && (plVar13 != (longlong *)0x0)) goto LAB_1404dd68a;
            break;
          }
          iVar6 = (int)plVar13[3];
        } while (iVar6 != -1);
      }
    }
    local_70 = &local_a8;
    FUN_1404b9690(plVar10,local_b0,&local_70,0);
    plVar13 = (longlong *)((longlong)local_b0[0] * 0x20 + *plVar10);
LAB_1404dd68a:
    iVar6 = (int)plVar13[2];
    *(int *)(plVar13 + 2) = iVar6 + 1;
    if (*(int *)((longlong)plVar13 + 0x14) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13 + 1,iVar6);
    }
    puVar7 = (undefined8 *)((longlong)iVar6 * 0x10 + plVar13[1]);
    *puVar7 = *param_2;
    lVar11 = param_2[1];
    puVar7[1] = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_a0);
  plVar10 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_78 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  return;
}



// FUNCTION 1404dd770 FUN_1404dd770 body=141 status=ok
// SIG undefined FUN_1404dd770(void)

void FUN_1404dd770(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    plVar1 = (longlong *)param_2[1];
    local_res8[0] = 0xffffffff;
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2a0))
              (*(longlong **)(param_1 + 0x68),param_1,local_res8[0],param_2);
  }
  return;
}



// FUNCTION 1404dd800 FUN_1404dd800 body=203 status=ok
// SIG undefined FUN_1404dd800(void)

void FUN_1404dd800(longlong *param_1,byte param_2)

{
  char cVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  if ((int)param_1[0x1b] == 0) {
    if ((longlong *)param_1[0x17] != (longlong *)0x0) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x17] + 0x30))();
      if (cVar1 != '\0') goto LAB_1404dd8b0;
    }
    if ((((param_2 == 0) || (*(char *)((longlong)param_1 + 0x143) != '\0')) && (param_1[0x17] != 0))
       && (*(char *)(param_1[0x17] + 0x4c) != '\0')) {
      *(byte *)(param_1 + 0x28) = param_2 ^ 1;
      QueryPerformanceCounter(&local_res8);
      dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
      *(int *)(param_1 + 0x2b) = (int)param_1[0x2b] + 1;
      *(undefined1 *)((longlong)param_1 + 0x142) = 0;
      param_1[0x29] = (longlong)(dVar2 + 16777216.0);
                    /* WARNING: Could not recover jumptable at 0x0001404dd8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[0x17] + 0x28))();
      return;
    }
  }
  else {
LAB_1404dd8b0:
    *(undefined1 *)((longlong)param_1 + 0x142) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001404dd8c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 1404dd8d0 FUN_1404dd8d0 body=336 status=ok
// SIG undefined FUN_1404dd8d0(void)

void FUN_1404dd8d0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar1 = param_1[0x17];
  if (lVar1 != 0) {
    if ((int)param_1[0x1b] != 1) {
      *(undefined4 *)(param_1 + 0x1b) = 1;
    }
    if (((char)param_1[0x28] != '\0') && (*(char *)((longlong)param_1 + 0x143) == '\0')) {
      FUN_1404d4d90();
    }
    plVar8 = *(longlong **)(lVar1 + 0x30);
    plVar9 = plVar8 + (longlong)*(int *)(lVar1 + 0x38) * 2;
    for (; plVar8 != plVar9; plVar8 = plVar8 + 2) {
      puVar6 = (undefined8 *)param_1[0x19];
      lVar1 = *plVar8;
      puVar7 = puVar6 + (longlong)(int)param_1[0x1a] * 2;
      for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
        if (*(int *)(lVar1 + 0x28) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar1 + 0x20);
        }
        if (*(int *)(puVar6 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar6;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (iVar2 == 0) goto LAB_1404dd9b3;
      }
      (**(code **)(*param_1 + 0x40))(param_1,plVar8);
LAB_1404dd9b3:
    }
    FUN_1404e0ed0(param_1);
    if ((int)param_1[0x1b] != 2) {
      *(undefined4 *)(param_1 + 0x1b) = 2;
    }
    uVar3 = FUN_141607f00();
    FTextLocalizationManager::RefreshResources(uVar3);
    FUN_142a3d4f0();
  }
  if ((int)param_1[0x1b] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001404dda16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 1404dda20 FUN_1404dda20 body=1376 status=ok
// SIG undefined FUN_1404dda20(void)

void FUN_1404dda20(longlong *param_1)

{
  longlong **pplVar1;
  longlong **pplVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88 [2];
  longlong *local_78 [2];
  longlong *local_68 [2];
  longlong *local_58 [2];
  longlong *local_48 [2];
  longlong *local_38 [2];
  
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_88[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_1404d9900;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77d20;
  }
  pplVar1 = (longlong **)(param_1 + 0xb);
  if (local_88 != pplVar1) {
    if (plVar5 == (longlong *)0x0) {
      if (((int)param_1[0xc] != 0) && (plVar7 = *pplVar1, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar7;
        }
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,pplVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_88[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_88[0] != (longlong *)0x0) {
      FMemory::Free(local_88[0]);
    }
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_78[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_1404d91a0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77d20;
  }
  pplVar1 = (longlong **)(param_1 + 5);
  if (local_78 != pplVar1) {
    if (plVar5 == (longlong *)0x0) {
      if (((int)param_1[6] != 0) && (plVar7 = *pplVar1, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar7;
        }
        *(undefined4 *)(param_1 + 6) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,pplVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_78[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_78[0] != (longlong *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_68[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_1404d9000;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77d20;
  }
  pplVar1 = (longlong **)(param_1 + 7);
  if (local_68 != pplVar1) {
    if (plVar5 == (longlong *)0x0) {
      if (((int)param_1[8] != 0) && (plVar7 = *pplVar1, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar7;
        }
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,pplVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_68[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_68[0] != (longlong *)0x0) {
      FMemory::Free(local_68[0]);
    }
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_58[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_1404d90b0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77d20;
  }
  pplVar1 = (longlong **)(param_1 + 9);
  if (local_58 != pplVar1) {
    if (plVar5 == (longlong *)0x0) {
      if (((int)param_1[10] != 0) && (plVar7 = *pplVar1, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar7;
        }
        *(undefined4 *)(param_1 + 10) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,pplVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_58[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_58[0] != (longlong *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_48[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77d68;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)&LAB_1404c2180;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77db0;
  }
  pplVar1 = (longlong **)(param_1 + 0xd);
  if (local_48 != pplVar1) {
    if (plVar5 == (longlong *)0x0) {
      if (((int)param_1[0xe] != 0) && (plVar7 = *pplVar1, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar7;
        }
        *(undefined4 *)(param_1 + 0xe) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,pplVar1);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_48[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_48[0] != (longlong *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_38[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77df8;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)&LAB_1404c218c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143f77e40;
  }
  pplVar2 = (longlong **)(param_1 + 0xf);
  if (local_38 != pplVar2) {
    if (plVar5 == (longlong *)0x0) {
      if (((int)param_1[0x10] != 0) && (plVar7 = *pplVar2, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar7;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,pplVar2);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_38[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_38[0] != (longlong *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_98);
  if (local_98 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*local_98 + 0x208))(local_98,local_res8,pplVar1);
    param_1[0x11] = *plVar5;
    plVar5 = (longlong *)(**(code **)(*local_98 + 0x248))(local_98,local_res10,pplVar2);
    param_1[0x12] = *plVar5;
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_90 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar3 = (int *)((longlong)local_90 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return;
}



// FUNCTION 1404ddf80 FUN_1404ddf80 body=243 status=ok
// SIG undefined FUN_1404ddf80(void)

void FUN_1404ddf80(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_1404d0b50(&local_28,param_2,*(undefined8 *)(param_1 + 0x30));
  if (local_28 != (longlong *)0x0) {
    cVar6 = (**(code **)(*param_4 + 0x20))(param_4);
    if (cVar6 != '\0') {
      lVar5 = *local_28;
      uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_4 + 1,local_18);
      (**(code **)(lVar5 + 0x2d0))(local_28,param_3,uVar7);
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 1404de080 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar10;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar10 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_1404de1bf;
        uVar10 = puVar13[lVar6 + 1];
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
      if (iVar4 < iStack_44) {
LAB_1404de1bf:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        pbVar3 = (byte *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar10 = (int)*plVar2 - 1U & (uint)*pbVar3;
        *(uint *)(pbVar3 + 0x14) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(pbVar3 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1404de290 FUN_1404de290 body=535 status=ok
// SIG undefined FUN_1404de290(void)

void FUN_1404de290(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      local_58 = 0;
      iStack_40 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1404de3cf;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
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
LAB_1404de3cf:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x14;
        uVar5 = FCrc::MemCrc32(lVar6,8);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x10) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1404de4b0 FUN_1404de4b0 body=34 status=ok
// SIG undefined FUN_1404de4b0(void)

undefined8 FUN_1404de4b0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1978) + 0x68))
            (*(longlong **)(param_1 + 0x1978),param_2,1);
  return param_2;
}



// FUNCTION 1404de4e0 RemoveAtImpl body=258 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
     ::RemoveAtImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20);
    iVar6 = param_3;
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar7 + 1);
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
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + *param_1),(longlong)iVar5 << 5);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1404de5f0 FUN_1404de5f0 body=303 status=ok
// SIG undefined FUN_1404de5f0(void)

void FUN_1404de5f0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar7 = (undefined8 *)(*param_1 + (longlong)param_2 * 0x28);
    iVar6 = param_3;
    do {
      *puVar7 = &PTR_FUN_143f740c8;
      if (puVar7[3] != 0) {
        FMemory::Free();
      }
      *puVar7 = &PTR_FUN_143f73d18;
      plVar3 = (longlong *)puVar7[2];
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
      puVar7 = puVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x28),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x28),(longlong)iVar5 * 0x28);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1404de720 FUN_1404de720 body=250 status=ok
// SIG undefined FUN_1404de720(void)

void FUN_1404de720(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (param_3 != 0) {
    plVar6 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x38);
    iVar5 = param_3;
    do {
      plVar3 = (longlong *)*plVar6;
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
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar6 = plVar6 + 7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar7 = (iVar5 - param_2) - param_3;
    if (param_3 <= iVar7) {
      iVar7 = param_3;
    }
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x38),
                 (void *)((longlong)(iVar5 - iVar7) * 0x38 + *param_1),(longlong)iVar7 * 0x38);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1404de820 FUN_1404de820 body=435 status=ok
// SIG undefined FUN_1404de820(void)

void FUN_1404de820(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined **local_68;
  undefined **local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = &PTR_FUN_143f74338;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_60 = &PTR_FUN_143f740c8;
  FUN_1404dbbd0(param_1,&local_68);
  plVar5 = local_58;
  iVar11 = *(int *)(param_1 + 0x68) + -1;
  if (-1 < iVar11) {
    plVar1 = (longlong *)(param_1 + 0x60);
    lVar10 = (longlong)iVar11 << 6;
    lVar9 = (longlong)iVar11;
    do {
      lVar2 = *plVar1;
      plVar3 = *(longlong **)(lVar2 + 0x10 + lVar10);
      if ((((plVar3 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar3 + 0x20))(), cVar6 == '\0'))
          || (plVar5 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar5 + 0x20))(plVar5), cVar6 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      plVar3 = *(longlong **)(lVar2 + 0x10 + lVar10);
      if ((((plVar3 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar3 + 0x20))(), cVar6 == '\0'))
          && ((plVar5 == (longlong *)0x0 ||
              (cVar6 = (**(code **)(*plVar5 + 0x20))(plVar5), cVar6 == '\0')))) ||
         ((bVar4 && (cVar6 = (**(code **)*plVar5)(plVar5,*(undefined8 *)(lVar2 + 0x10 + lVar10)),
                    cVar6 != '\0')))) {
        lVar9 = *plVar1;
        lVar10 = (longlong)iVar11 * 0x40;
        *(undefined ***)(lVar9 + lVar10) = &PTR_FUN_143f74338;
        FUN_1404bebc0(lVar9 + 0x30 + lVar10);
        FUN_1404bf980(lVar9 + 8 + lVar10);
        iVar7 = *(int *)(param_1 + 0x68);
        iVar8 = (iVar7 - iVar11) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar10),(void *)((longlong)(iVar11 + 1) * 0x40 + *plVar1),
                     (longlong)iVar8 << 6);
          iVar7 = *(int *)(param_1 + 0x68);
        }
        *(int *)(param_1 + 0x68) = iVar7 + -1;
        TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(plVar1);
        break;
      }
      iVar11 = iVar11 + -1;
      lVar10 = lVar10 + -0x40;
      bVar4 = 0 < lVar9;
      lVar9 = lVar9 + -1;
    } while (bVar4);
  }
  local_68 = &PTR_FUN_143f74338;
  FUN_1404bebc0(&local_38);
  FUN_1404bf980(&local_60);
  return;
}



// FUNCTION 1404de9e0 FUN_1404de9e0 body=319 status=ok
// SIG undefined FUN_1404de9e0(void)

void FUN_1404de9e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x30);
  puVar6 = puVar2;
  do {
    if (puVar6 == puVar2 + (longlong)iVar5 * 4) {
LAB_1404dea86:
      puVar2 = (undefined8 *)*plVar1;
      iVar5 = *(int *)(param_1 + 0x30);
      puVar6 = puVar2;
      while( true ) {
        if (puVar6 == puVar2 + (longlong)iVar5 * 4) {
          return;
        }
        cVar3 = (*(code *)**(undefined8 **)*param_3)((undefined8 *)*param_3,*puVar6);
        if (cVar3 != '\0') break;
        puVar6 = puVar6 + 4;
      }
      uVar7 = (longlong)puVar6 - (longlong)puVar2 >> 5;
      iVar5 = (int)uVar7;
      if (iVar5 == -1) {
        return;
      }
      local_res8 = *param_2;
      lVar4 = (longlong)iVar5 * 0x20;
      FUN_1404bb3d0(*plVar1 + 0x10 + lVar4,&local_res8);
      if (*(int *)(lVar4 + 0x18 + *plVar1) != 0) {
        return;
      }
      TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(plVar1,uVar7 & 0xffffffff,1,1);
      return;
    }
    cVar3 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,*puVar6);
    if (cVar3 != '\0') {
      uVar7 = (longlong)puVar6 - (longlong)puVar2 >> 5;
      iVar5 = (int)uVar7;
      if (iVar5 != -1) {
        local_res8 = *param_3;
        lVar4 = (longlong)iVar5 * 0x20;
        FUN_1404bb3d0(*plVar1 + 0x10 + lVar4,&local_res8);
        if (*(int *)(lVar4 + 0x18 + *plVar1) == 0) {
          TArray<FMediaTextureResource::TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::FRetiringObjectInfo,TSizedDefaultAllocator<32>_>
          ::RemoveAtImpl(plVar1,uVar7 & 0xffffffff,1,1);
        }
      }
      goto LAB_1404dea86;
    }
    puVar6 = puVar6 + 4;
  } while( true );
}



// FUNCTION 1404deb20 BeginUpdateGPUSpriteResources body=50 status=ok
// SIG undefined BeginUpdateGPUSpriteResources(void)

void BeginUpdateGPUSpriteResources(undefined8 param_1,undefined8 param_2)

{
  FUN_1404deb60();
  FUN_1404decc0(param_1,param_2);
  FUN_1404d2ae0(param_1);
  return;
}



// FUNCTION 1404deb60 FUN_1404deb60 body=340 status=ok
// SIG undefined FUN_1404deb60(void)

void FUN_1404deb60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0xd8)) {
    lVar8 = 0;
    plVar1 = (longlong *)(param_1 + 0xd0);
    do {
      lVar2 = *plVar1;
      plVar3 = *(longlong **)(lVar2 + 0x10 + lVar8);
      if ((((plVar3 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0'))
          || (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar5 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      plVar3 = *(longlong **)(lVar2 + 0x10 + lVar8);
      if ((((plVar3 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar3 + 0x20))(), cVar5 == '\0'))
          && ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
              (cVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar5 == '\0')))) ||
         ((bVar4 && (cVar5 = (**(code **)**(undefined8 **)(param_2 + 8))
                                       (*(undefined8 **)(param_2 + 8),
                                        *(undefined8 *)(lVar2 + 0x10 + lVar8)), cVar5 != '\0')))) {
        lVar2 = *plVar1;
        lVar8 = (longlong)iVar9 * 0x48;
        *(undefined ***)(lVar2 + lVar8) = &PTR_FUN_143f74338;
        FUN_1404bebc0(lVar2 + 0x30 + lVar8);
        FUN_1404bf980(lVar2 + 8 + lVar8);
        iVar6 = *(int *)(param_1 + 0xd8);
        iVar7 = (iVar6 - iVar9) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar8),(void *)(*plVar1 + (longlong)(iVar9 + 1) * 0x48),
                     (longlong)iVar7 * 0x48);
          iVar6 = *(int *)(param_1 + 0xd8);
        }
        *(int *)(param_1 + 0xd8) = iVar6 + -1;
        TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(plVar1);
        return;
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 0x48;
    } while (iVar9 < *(int *)(param_1 + 0xd8));
  }
  return;
}



// FUNCTION 1404decc0 FUN_1404decc0 body=521 status=ok
// SIG undefined FUN_1404decc0(void)

void FUN_1404decc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar7 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x60);
      plVar1 = *(longlong **)(lVar10 + 0x10 + lVar7);
      if ((((plVar1 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar1 + 0x20))(), cVar4 == '\0'))
          || (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      plVar1 = *(longlong **)(lVar10 + 0x10 + lVar7);
      if ((((plVar1 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar1 + 0x20))(), cVar4 == '\0'))
          && ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
              (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')))) ||
         ((bVar3 && (cVar4 = (**(code **)**(undefined8 **)(param_2 + 8))
                                       (*(undefined8 **)(param_2 + 8),
                                        *(undefined8 *)(lVar10 + 0x10 + lVar7)), cVar4 != '\0')))) {
        lVar7 = *(longlong *)(param_1 + 0x60);
        lVar10 = (longlong)iVar8 * 0x40;
        *(undefined ***)(lVar7 + lVar10) = &PTR_FUN_143f74338;
        FUN_1404bebc0(lVar7 + 0x30 + lVar10);
        FUN_1404bf980(lVar7 + 8 + lVar10);
        iVar5 = *(int *)(param_1 + 0x68);
        iVar6 = (iVar5 - iVar8) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x60) + lVar10),
                     (void *)((longlong)(iVar8 + 1) * 0x40 + *(longlong *)(param_1 + 0x60)),
                     (longlong)iVar6 << 6);
          iVar5 = *(int *)(param_1 + 0x68);
        }
        *(int *)(param_1 + 0x68) = iVar5 + -1;
        TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x60);
        TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(param_1 + 0x88,param_1);
        break;
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 0x40;
    } while (iVar8 < *(int *)(param_1 + 0x68));
  }
  lVar7 = *(longlong *)(param_1 + 0x48);
  if (lVar7 != 0) {
    plVar9 = *(longlong **)(lVar7 + 0x98);
    plVar1 = plVar9 + *(int *)(lVar7 + 0xa0);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      plVar2 = (longlong *)*plVar9;
      if (plVar2 != (longlong *)0x0) {
        if (((((longlong *)plVar2[0x2c] == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*(longlong *)plVar2[0x2c] + 0x20))(), cVar4 == '\0')) ||
            (*(longlong **)(param_2 + 8) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (((((longlong *)plVar2[0x2c] == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*(longlong *)plVar2[0x2c] + 0x20))(), cVar4 == '\0')) &&
            ((*(longlong **)(param_2 + 8) == (longlong *)0x0 ||
             (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')))) ||
           ((bVar3 && (cVar4 = (**(code **)**(undefined8 **)(param_2 + 8))
                                         (*(undefined8 **)(param_2 + 8),plVar2[0x2c]), cVar4 != '\0'
                      )))) {
          (**(code **)(*plVar2 + 0x2f8))(plVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1404deed0 FUN_1404deed0 body=794 status=ok
// SIG undefined FUN_1404deed0(void)

void FUN_1404deed0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  char local_res20 [8];
  longlong local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  plVar9 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  if ((plVar9 != (longlong *)0x0) && (cVar6 = (**(code **)(*plVar9 + 0x10))(plVar9), cVar6 != '\0'))
  {
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
    puVar10 = local_70 + (int)local_68;
    for (puVar15 = local_70; puVar15 != puVar10; puVar15 = puVar15 + 1) {
      plVar9 = (longlong *)*puVar15;
      if ((plVar9 != (longlong *)0x0) && (param_2 != plVar9)) {
        lVar14 = *plVar9;
        local_80 = 0;
        local_78 = 0;
        uVar7 = (**(code **)(*(longlong *)*param_3 + 0x30))();
        (**(code **)(lVar14 + 0x10))(plVar9,uVar7,&local_80);
        bVar4 = 0 < (int)local_78;
        cVar6 = (**(code **)(*(longlong *)*param_3 + 0x30))();
        if (cVar6 == '\0') {
          lVar16 = (longlong)(int)local_78 * 0x10 + local_80;
          for (lVar14 = local_80; lVar14 != lVar16; lVar14 = lVar14 + 0x10) {
            puVar11 = (undefined8 *)
                      (**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,local_50);
            local_60 = *puVar11;
            local_58 = (longlong *)puVar11[1];
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
            cVar6 = FUN_1404d5ac0(param_1,&local_60,lVar14);
            plVar12 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_58 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
            plVar12 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
            if (cVar6 != '\0') goto LAB_1404df12b;
            local_res20[0] = DAT_1461fb7e0;
            cVar6 = DAT_1461fb7e0;
            if (((*(int *)(param_1 + 0x10) != 0) &&
                (cVar6 = DAT_1461fb7e0, *(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
               (cVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar6 = DAT_1461fb7e0,
               cVar8 != '\0')) {
              if (*(int *)(param_1 + 0x10) == 0) {
                plVar12 = (longlong *)0x0;
              }
              else {
                plVar12 = *(longlong **)(param_1 + 8);
              }
              cVar8 = (**(code **)(*plVar12 + 0x38))(plVar12,lVar14,local_res20);
              cVar6 = local_res20[0];
              if (cVar8 == '\0') goto LAB_1404df12b;
            }
            local_res20[0] = cVar6;
            cVar6 = (**(code **)(*(longlong *)*param_3 + 0x18))();
            if ((cVar6 != DAT_1461fb7e0) &&
               (cVar6 = (**(code **)(*(longlong *)*param_3 + 0x18))(), cVar6 != local_res20[0]))
            goto LAB_1404df12b;
          }
        }
        if (bVar4) {
          (**(code **)*plVar9)(plVar9,param_3);
        }
LAB_1404df12b:
        if ((int)local_78 != 0) {
          plVar9 = (longlong *)(local_80 + 8);
          iVar13 = (int)local_78;
          do {
            plVar12 = (longlong *)*plVar9;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar12 + 1;
              lVar14 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar12)(plVar12);
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
            plVar9 = plVar9 + 2;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
        }
        if (local_80 != 0) {
          FMemory::Free();
        }
      }
    }
    if (local_70 != (undefined8 *)0x0) {
      FMemory::Free(local_70);
    }
  }
  return;
}



// FUNCTION 1404df1f0 FUN_1404df1f0 body=294 status=ok
// SIG undefined FUN_1404df1f0(void)

void FUN_1404df1f0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_18;
  longlong *local_10;
  
  lVar6 = FUN_1404cd630();
  if ((*param_2 == 0) || (lVar6 == 0)) goto LAB_1404df2cf;
  if (param_3 == 0) {
LAB_1404df26e:
    param_3 = 0;
  }
  else {
    lVar7 = FUN_1404e7690();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1404df26e;
    param_3 = param_3 + 0x1970;
  }
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  FUN_1404deed0(lVar6,param_3,&local_18);
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
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
LAB_1404df2cf:
  plVar4 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 1404df320 FUN_1404df320 body=392 status=ok
// SIG undefined FUN_1404df320(void)

void FUN_1404df320(longlong param_1,void **param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined1 local_58 [16];
  undefined4 local_48;
  void *local_40;
  ulonglong local_38;
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  
  FString::FString(local_68);
  FString::FString(local_78,local_68);
  FString::FString(local_58,local_78);
  lVar4 = FUN_1404ba650(param_1 + 0x28,local_58);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 == 0) {
    local_40 = (void *)0x0;
    local_38 = 0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_48 = 0xffffffff;
    local_30 = param_3;
    if (&local_40 != param_2) {
      uVar1 = *(uint *)(param_2 + 1);
      _Src = *param_2;
      local_38 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,uVar1,0);
        _guard_xfg_dispatch_icall_nop(local_40,_Src,(longlong)(int)uVar1 * 2);
      }
    }
    uVar3 = local_48;
    iVar2 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar2 + 1;
    if (*(int *)(param_1 + 0x34) < iVar2 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar2);
    }
    puVar6 = (undefined4 *)((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x28));
    *puVar6 = 0xffffffff;
    uVar5 = FUN_1416f8720(uVar3);
    FUN_14170c210(puVar6,uVar5);
    FString::FString(puVar6 + 2,&local_40);
    *(undefined1 *)(puVar6 + 6) = local_30;
    puVar6[7] = (undefined4)local_2c;
    puVar6[8] = local_2c._4_4_;
    puVar6[9] = local_24;
    *(undefined8 *)(puVar6 + 10) = local_20;
    if (local_40 != (void *)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(local_48);
  }
  return;
}



// FUNCTION 1404df4b0 FUN_1404df4b0 body=16 status=ok
// SIG undefined FUN_1404df4b0(void)

void FUN_1404df4b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1404bcb70(param_1,1,0x11,param_2);
  return;
}



// FUNCTION 1404df4c0 FUN_1404df4c0 body=16 status=ok
// SIG undefined FUN_1404df4c0(void)

void FUN_1404df4c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1404bcb70(param_1,1,0x12,param_2);
  return;
}



// FUNCTION 1404df4d0 Reset body=266 status=ok
// SIG undefined Reset(void)

void TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset
               (longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar7 = (int)param_1[1];
  if (iVar5 < param_2) {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(*param_1 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar5 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar5 != param_2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(*param_1 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1404df5e0 FUN_1404df5e0 body=272 status=ok
// SIG undefined FUN_1404df5e0(void)

void FUN_1404df5e0(longlong param_1)

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
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)local_1c * 0x20 + 8 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 1404df6f0 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

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
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x28,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1404df780 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x48,0);
    iVar3 = (int)(uVar1 / 0x48);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x48,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1404df810 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x14,0);
  iVar4 = (int)(uVar3 / 0x14);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x14,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1404df8a0 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0xa0,0);
  iVar4 = (int)(uVar3 / 0xa0);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xa0,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1404df930 ResizeShrink body=162 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeShrink(ulonglong *param_1)

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
  if ((0x3fff < uVar2 * 0x38) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x38,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 5);
      }
      goto LAB_1404df9a4;
    }
    if (iVar5 == 0) goto LAB_1404df9a4;
  }
  iVar5 = iVar6;
LAB_1404df9a4:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x38,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1404df9e0 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x28) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x28,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x28);
      }
      goto LAB_1404dfa56;
    }
    if (iVar4 == 0) goto LAB_1404dfa56;
  }
  iVar4 = iVar5;
LAB_1404dfa56:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x28,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1404dfa90 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 6)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 6,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 6);
      }
      goto LAB_1404dfaed;
    }
    if (iVar3 == 0) goto LAB_1404dfaed;
  }
  iVar3 = iVar4;
LAB_1404dfaed:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 6,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404dfb20 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x48) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x48,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x48);
      }
      goto LAB_1404dfb96;
    }
    if (iVar4 == 0) goto LAB_1404dfb96;
  }
  iVar4 = iVar5;
LAB_1404dfb96:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x48,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1404dfbd0 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x14,0);
    iVar3 = (int)(uVar1 / 0x14);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x14,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404dfc50 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x60,0);
    iVar3 = (int)(uVar1 / 0x60);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x60,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404dfcd0 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xa0,0);
    iVar3 = (int)(uVar1 / 0xa0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xa0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404dfd50 ResizeTo body=112 status=ok
// SIG undefined ResizeTo(void)

void TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

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
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x58,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1404dfdc0 FUN_1404dfdc0 body=258 status=ok
// SIG undefined FUN_1404dfdc0(void)

void FUN_1404dfdc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  lVar1 = **(longlong **)(param_1 + 0x1580);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar1,0);
    local_res8[0] = 6;
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    FUN_14158ce90(&local_118,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1580) + 0x2c8))
              ((longlong *)**(undefined8 **)(param_1 + 0x1580),local_res18,&local_118,1);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
  }
  return;
}



// FUNCTION 1404dfed0 FUN_1404dfed0 body=230 status=ok
// SIG undefined FUN_1404dfed0(void)

void FUN_1404dfed0(longlong param_1)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  lVar1 = **(longlong **)(param_1 + 0x1580);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar1,0);
    local_res8[0] = 0x1a;
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1580) + 0x2c8))
              ((longlong *)**(undefined8 **)(param_1 + 0x1580),local_res10,&local_118,1);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
  }
  return;
}



// FUNCTION 1404dffc0 FUN_1404dffc0 body=230 status=ok
// SIG undefined FUN_1404dffc0(void)

void FUN_1404dffc0(longlong param_1)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  lVar1 = **(longlong **)(param_1 + 0x1580);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar1,0);
    local_res8[0] = 0x1d;
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1580) + 0x2c8))
              ((longlong *)**(undefined8 **)(param_1 + 0x1580),local_res10,&local_118,1);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
  }
  return;
}



// FUNCTION 1404e00b0 FUN_1404e00b0 body=258 status=ok
// SIG undefined FUN_1404e00b0(void)

void FUN_1404e00b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  lVar1 = **(longlong **)(param_1 + 0x1580);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 2) == 0)) {
    FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar1,0);
    local_res8[0] = 0x22;
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    FUN_14158ce90(&local_118,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x1580) + 0x2c8))
              ((longlong *)**(undefined8 **)(param_1 + 0x1580),local_res18,&local_118,1);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
  }
  return;
}



// FUNCTION 1404e01c0 FUN_1404e01c0 body=389 status=ok
// SIG undefined FUN_1404e01c0(void)

void FUN_1404e01c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if ((((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x90), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x138) != 0)) && (*(int *)(*(longlong *)(lVar1 + 0x138) + 0x1cc) == 2))
  {
    local_res10[0] = 1;
    lVar2 = **(longlong **)(lVar1 + 0x1580);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
      FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar2,0);
      local_res8[0] = 0x16;
      if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
        (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*local_110;
        *local_110 = *local_110 + 1;
      }
      if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
        (**(code **)(local_118 + 0x50))(&local_118,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*local_110;
        *local_110 = *local_110 + 1;
      }
      (**(code **)(*(longlong *)**(undefined8 **)(lVar1 + 0x1580) + 0x2c8))
                ((longlong *)**(undefined8 **)(lVar1 + 0x1580),local_res18,&local_118,1);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_118);
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    (**(code **)(**(longlong **)(lVar3 + 0x90) + 0x2c8))(*(longlong **)(lVar3 + 0x90),0);
  }
  return;
}



// FUNCTION 1404e0350 FUN_1404e0350 body=601 status=ok
// SIG undefined FUN_1404e0350(void)

void FUN_1404e0350(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_178;
  undefined8 local_170;
  undefined **local_168;
  undefined **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong *local_120;
  byte local_ff;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  plVar3 = (longlong *)0x0;
  local_160 = &PTR_FUN_143f740c8;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = &PTR_FUN_143f74338;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  FUN_1404dbbd0(0,&local_168);
  local_178 = 0;
  local_170 = 0;
  if ((*(int *)(param_1 + 0x170) != 0) && (*(longlong **)(param_1 + 0x168) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_1404e03d6;
    }
  }
  bVar1 = false;
LAB_1404e03d6:
  if (bVar1) {
    if (*(int *)(param_1 + 0x170) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x168);
    }
    (**(code **)(*plVar3 + 0x40))(plVar3,param_1,&local_178);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    plVar3 = (longlong *)FUN_1425bd330(*(longlong *)(param_1 + 200),6);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_1404e6fc0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_res8[0] = 0x10;
        FUN_1423e4ec0(&local_128,plVar3,0);
        local_40 = local_40 | 0x20;
        if ((undefined4 *)local_120[1] < (undefined4 *)*local_120 + 1) {
          (**(code **)(local_128 + 0x50))(&local_128,local_res8,4);
          if ((local_ff & 0x10) != 0) {
            FArchive::ByteSwap(&local_128,local_res8,4);
          }
        }
        else {
          local_res8[0] = *(undefined4 *)*local_120;
          *local_120 = *local_120 + 4;
        }
        FUN_1404c0ec0(&local_128,&local_168);
        FUN_1404c0d00(&local_128,&local_178);
        (**(code **)(*plVar3 + 0x2c8))(plVar3,local_res10,&local_128,0);
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_128);
      }
    }
  }
  if ((int)local_170 != 0) {
    lVar4 = local_178 + 8;
    iVar5 = (int)local_170;
    do {
      *(undefined ***)(lVar4 + -8) = &PTR_FUN_143f74338;
      FUN_1404bebc0(lVar4 + 0x28);
      FUN_1404bf980(lVar4);
      lVar4 = lVar4 + 0x40;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  local_168 = &PTR_FUN_143f74338;
  FUN_1404bebc0(&local_138);
  FUN_1404bf980(&local_160);
  return;
}



// FUNCTION 1404e05b0 FUN_1404e05b0 body=333 status=ok
// SIG undefined FUN_1404e05b0(void)

void FUN_1404e05b0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,local_28);
  (**(code **)(*(longlong *)*puVar3 + 8))((longlong *)*puVar3,&local_res10);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar4 = param_1 + 0x70;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                             (longlong)*(int *)(param_1 + 0x80) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x38));
        if (*plVar5 == local_res10) {
          if ((iVar2 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_1404e06b1;
          break;
        }
        iVar2 = (int)plVar5[3];
      } while (iVar2 != -1);
    }
  }
  local_res18 = &local_res10;
  FUN_1404b9690(param_1 + 0x38,local_res8,&local_res18,0);
  plVar5 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x38));
LAB_1404e06b1:
  iVar2 = (int)plVar5[2];
  *(int *)(plVar5 + 2) = iVar2 + 1;
  if (*(int *)((longlong)plVar5 + 0x14) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5 + 1,iVar2);
  }
  puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + plVar5[1]);
  *puVar3 = *param_2;
  lVar4 = param_2[1];
  puVar3[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1404e0700 FUN_1404e0700 body=78 status=ok
// SIG undefined FUN_1404e0700(void)

void FUN_1404e0700(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 local_18;
  longlong local_10;
  
  plVar1 = (longlong *)FUN_1425c1c50(param_1 + -0x1970);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar1 + 0x300))(plVar1,&local_18);
  }
  return;
}



// FUNCTION 1404e0750 Serialize body=111 status=ok
// SIG undefined Serialize(void)

void FArrayReader::Serialize(longlong param_1,void *param_2,size_t param_3)

{
  if ((param_3 != 0) && (-1 < (char)*(byte *)(param_1 + 0x28))) {
    if ((longlong)(*(longlong *)(param_1 + 0x90) + param_3) <= (longlong)*(int *)(param_1 + 0xa0)) {
      ::_guard_xfg_dispatch_icall_nop
                (param_2,(void *)((longlong)(int)*(longlong *)(param_1 + 0x90) +
                                 *(longlong *)(param_1 + 0x98)),param_3);
      *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
      return;
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
  }
  return;
}



// FUNCTION 1404e07c0 FUN_1404e07c0 body=452 status=ok
// SIG undefined FUN_1404e07c0(void)

longlong *
FUN_1404e07c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar5 = FUN_1404cd630();
  if (lVar5 != 0) {
    FUN_1404d13e0(&local_28,param_3);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0xa0))(local_28,&local_38,param_5);
      plVar3 = plStack_30;
      if (local_38 != 0) {
        local_18 = local_38;
        plStack_10 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
          UNLOCK();
        }
        FUN_1404dd2e0(lVar5,&local_18);
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
        plVar3 = local_20;
        *param_2 = local_38;
        param_2[1] = (longlong)plStack_30;
        plStack_30 = (longlong *)0x0;
        local_38 = 0;
        if (local_20 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar1 = local_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return param_2;
        }
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return param_2;
        }
        (**(code **)(*local_20 + 8))(local_20,1);
        return param_2;
      }
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_30 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plStack_30 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
    }
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1404e0990 seekp body=5 status=ok
// SIG undefined seekp(void)

void FMemFileOut::seekp(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 1404e09a0 SetDrawColor body=111 status=ok
// SIG undefined SetDrawColor(void)

void FDisplayDebugManager::SetDrawColor(longlong *param_1,byte *param_2)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_18 = (float)param_2[2] * 0.003921569;
  local_14 = (float)param_2[1] * 0.003921569;
  local_10 = (float)*param_2 * 0.003921569;
  local_c = (float)param_2[3] * 0.003921569;
  (**(code **)(*param_1 + 0x20))(local_c,&local_18);
  return;
}



// FUNCTION 1404e0a10 FUN_1404e0a10 body=196 status=ok
// SIG undefined FUN_1404e0a10(void)

void FUN_1404e0a10(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if ((local_18 != (longlong *)0x0) &&
     (lVar5 = (**(code **)(*local_18 + 0x2c8))(local_18,*param_3), lVar5 != 0)) {
    *(undefined1 *)(lVar5 + 0x10) = *(undefined1 *)(param_3 + 1);
    *(undefined1 *)(lVar5 + 0x15) = *(undefined1 *)((longlong)param_3 + 9);
    if ((*(char *)((longlong)param_3 + 10) == '\0') || (*(char *)((longlong)param_3 + 0xb) != '\0'))
    {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(lVar5 + 0x17) = uVar4;
    *(undefined1 *)(lVar5 + 0x18) = *(undefined1 *)((longlong)param_3 + 0xb);
    *(undefined4 *)(lVar5 + 8) = *(undefined4 *)((longlong)param_3 + 0xc);
    (**(code **)(*local_18 + 0x80))(local_18,*param_3,lVar5,0);
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
  return;
}



// FUNCTION 1404e0ae0 FUN_1404e0ae0 body=7 status=ok
// SIG undefined FUN_1404e0ae0(void)

void FUN_1404e0ae0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xcc) = param_2;
  return;
}



// FUNCTION 1404e0af0 FUN_1404e0af0 body=208 status=ok
// SIG undefined FUN_1404e0af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404e0af0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  plVar5 = (longlong *)param_2[1];
  puVar1 = (undefined8 *)(param_1 + 8);
  uVar6 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_38 = uVar6;
  plStack_30 = plVar5;
  if (&local_38 != puVar1) {
    local_38 = *puVar1;
    plStack_30 = *(longlong **)(param_1 + 0x10);
    *puVar1 = uVar6;
    *(longlong **)(param_1 + 0x10) = plVar5;
    local_28 = uVar6;
    plStack_20 = plVar5;
  }
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1404e0bc0 FUN_1404e0bc0 body=188 status=ok
// SIG undefined FUN_1404e0bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404e0bc0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 8);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = *(longlong **)(param_1 + 0x10);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0xc) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x14) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1404e0c80 FUN_1404e0c80 body=153 status=ok
// SIG undefined FUN_1404e0c80(void)

void FUN_1404e0c80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0x1e;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1425d46e0();
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0xd0) = param_2;
    uVar2 = UObjectBaseUtility::GetOutermost(param_2);
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    *(longlong *)(param_1 + 0x168) = param_2 + 0x28;
    FUN_1425ca960(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  return;
}



// FUNCTION 1404e0d20 FUN_1404e0d20 body=421 status=ok
// SIG undefined FUN_1404e0d20(void)

void FUN_1404e0d20(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong local_48 [4];
  undefined2 *local_28;
  undefined8 local_20;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    lVar9 = 0;
    local_48[1] = 2;
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    local_48[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    lVar1 = local_48[0];
    FGenericPlatformString::Memcpy(local_48[0],&DAT_143f73c90,4);
    if (*(longlong *)(lVar5 + 0x50) == 0) {
      local_48[2] = 0;
      local_48[3] = 0;
    }
    else {
      FName::ToString((longlong *)(lVar5 + 0x50),local_48 + 2);
    }
    FUN_1404e14f0(local_48 + 2,local_48,0,local_48 + 4,0,0);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    puVar6 = (undefined8 *)FUN_1428cc8c0(param_2,local_48 + 2);
    puVar2 = local_28;
    puVar7 = &DAT_143f3eda8;
    puVar8 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar8 = local_28;
    }
    if (*(int *)(puVar6 + 1) != 0) {
      puVar7 = (undefined2 *)*puVar6;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
    if (iVar3 == 0) {
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x148);
      }
      if (lVar9 != 0) {
        TArray<TSharedPtr<IAudioPluginListener,1>,FDefaultAllocator>::Reset(param_1 + 0x568,0);
        FUN_1404d0830(lVar9,param_1 + 0x568);
      }
    }
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  FUN_1425d1950(param_1,param_2);
  return;
}



// FUNCTION 1404e0ed0 FUN_1404e0ed0 body=1162 status=ok
// SIG undefined FUN_1404e0ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404e0ed0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined1 auStack_b8 [32];
  uint *local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_70 [4];
  uint *local_60;
  undefined8 local_58;
  uint local_50 [4];
  uint *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  puVar11 = (uint *)0x0;
  local_40 = (uint *)0x0;
  local_90 = 0;
  local_38 = 0;
  if (local_50 != (uint *)(param_1 + 0x100)) {
    local_90 = *(int *)(param_1 + 0x118);
    uVar3 = local_90 + 0x1f + (local_90 + 0x1f >> 0x1f & 0x1fU);
    iVar6 = 0;
    if ((uVar3 & 0xffffffe0) != 0) {
      local_38 = ((ulonglong)uVar3 & 0xffffffe0) << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(local_50,0);
      local_90 = *(int *)(param_1 + 0x118);
      iVar6 = local_38._4_4_;
    }
    local_38 = CONCAT44(local_38._4_4_,local_90);
    if (local_90 != 0) {
      puVar7 = *(uint **)(param_1 + 0x110);
      if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x100);
      }
      puVar13 = local_50;
      if (local_40 != (uint *)0x0) {
        puVar13 = puVar11;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)puVar13 | (ulonglong)local_40),puVar7,
                 (longlong)((int)(iVar6 + 0x1f + (iVar6 + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2);
      local_90 = (int)local_38;
    }
  }
  local_60 = (uint *)0x0;
  local_8c = 0;
  local_58 = 0;
  if (local_70 != (uint *)(param_1 + 0x120)) {
    local_8c = *(int *)(param_1 + 0x138);
    uVar3 = local_8c + 0x1f + (local_8c + 0x1f >> 0x1f & 0x1fU);
    iVar6 = 0;
    if ((uVar3 & 0xffffffe0) != 0) {
      local_58 = ((ulonglong)uVar3 & 0xffffffe0) << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(local_70,0);
      local_8c = *(int *)(param_1 + 0x138);
      iVar6 = local_58._4_4_;
    }
    local_58 = CONCAT44(local_58._4_4_,local_8c);
    if (local_8c != 0) {
      puVar7 = *(uint **)(param_1 + 0x130);
      if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x120);
      }
      puVar13 = local_70;
      if (local_60 != (uint *)0x0) {
        puVar13 = puVar11;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)puVar13 | (ulonglong)local_60),puVar7,
                 (longlong)((int)(iVar6 + 0x1f + (iVar6 + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2);
      local_8c = (int)local_58;
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x58);
  puVar7 = (uint *)((longlong)*(int *)(param_1 + 0x60) & 0x1fffffffffffffff);
  if (plVar12 + *(int *)(param_1 + 0x60) < plVar12) {
    puVar7 = puVar11;
  }
  puVar13 = puVar11;
  local_98 = puVar7;
  if (puVar7 != (uint *)0x0) {
    do {
      lVar10 = *plVar12;
      if (lVar10 != 0) {
        plVar1 = *(longlong **)(lVar10 + 0x30);
        if (plVar1 != (longlong *)0x0) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x68,&local_88,plVar1);
          puVar7 = puVar11;
          if (local_88 != -1) {
            puVar7 = (uint *)(*(longlong *)(param_1 + 0x68) + (longlong)local_88 * 0x18);
          }
          puVar5 = puVar7 + 2;
          if (puVar7 == (uint *)0x0) {
            puVar5 = puVar11;
          }
          puVar7 = local_98;
          if (puVar5 != (uint *)0x0) {
            *puVar5 = *puVar5 | 1 << ((char)*(undefined4 *)(lVar10 + 0x58) - 1U & 0x1f);
            cVar2 = (**(code **)(*plVar1 + 0x280))(plVar1);
            puVar7 = local_98;
            if (cVar2 != '\0') {
              iVar6 = (int)plVar1[6] + -1;
              if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x118))) {
                lVar9 = *(longlong *)(param_1 + 0x110);
                if (*(longlong *)(param_1 + 0x110) == 0) {
                  lVar9 = param_1 + 0x100;
                }
                iVar4 = iVar6;
                if (iVar6 < 0) {
                  iVar4 = (int)plVar1[6] + 0x1e;
                }
                puVar5 = (uint *)(lVar9 + (longlong)(iVar4 >> 5) * 4);
                *puVar5 = *puVar5 | 1 << ((byte)iVar6 & 0x1f);
              }
            }
          }
        }
        lVar9 = *(longlong *)(lVar10 + 0x30);
        if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x60))) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x68,&local_84,lVar9);
          puVar7 = puVar11;
          if (local_84 != -1) {
            puVar7 = (uint *)(*(longlong *)(param_1 + 0x68) + (longlong)local_84 * 0x18);
          }
          puVar5 = puVar7 + 2;
          if (puVar7 == (uint *)0x0) {
            puVar5 = puVar11;
          }
          puVar7 = local_98;
          if (puVar5 != (uint *)0x0) {
            uVar3 = 1 << ((char)*(undefined4 *)(lVar10 + 0x58) - 1U & 0x1f);
            if ((uVar3 == 0) || ((*puVar5 & uVar3) != 0)) {
              local_7c = *(undefined4 *)(lVar9 + 0x30);
              local_78 = *(undefined4 *)(lVar10 + 0x58);
              FUN_1404cc340(&DAT_1461fb880,&local_80,&local_7c);
              puVar7 = puVar11;
              if (local_80 != -1) {
                puVar7 = (uint *)(DAT_1461fb880 + (longlong)local_80 * 0x14);
              }
              puVar5 = puVar7 + 2;
              if (puVar7 == (uint *)0x0) {
                puVar5 = puVar11;
              }
              puVar7 = local_98;
              if (puVar5 != (uint *)0x0) {
                iVar6 = *puVar5 - 1;
                if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x138))) {
                  lVar10 = *(longlong *)(param_1 + 0x130);
                  if (*(longlong *)(param_1 + 0x130) == 0) {
                    lVar10 = param_1 + 0x120;
                  }
                  iVar4 = iVar6;
                  if (iVar6 < 0) {
                    iVar4 = *puVar5 + 0x1e;
                  }
                  puVar5 = (uint *)(lVar10 + (longlong)(iVar4 >> 5) * 4);
                  *puVar5 = *puVar5 | 1 << ((byte)iVar6 & 0x1f);
                }
              }
            }
          }
        }
      }
      plVar12 = plVar12 + 1;
      puVar13 = (uint *)((longlong)puVar13 + 1);
    } while (puVar13 != puVar7);
  }
  puVar7 = local_40;
  puVar11 = local_60;
  if (*(int *)(param_1 + 0x118) == local_90) {
    iVar6 = *(int *)(param_1 + 0x11c) + 0x1f;
    puVar11 = local_50;
    if (local_40 != (uint *)0x0) {
      puVar11 = local_40;
    }
    pvVar8 = *(void **)(param_1 + 0x110);
    if (*(void **)(param_1 + 0x110) == (void *)0x0) {
      pvVar8 = (void *)(param_1 + 0x100);
    }
    iVar6 = _guard_xfg_dispatch_icall_nop
                      (pvVar8,puVar11,
                       (ulonglong)(uint)(((int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5) << 2));
    puVar11 = local_60;
    if ((iVar6 == 0) && (*(int *)(param_1 + 0x138) == local_8c)) {
      iVar6 = *(int *)(param_1 + 0x13c) + 0x1f;
      puVar13 = local_70;
      if (local_60 != (uint *)0x0) {
        puVar13 = local_60;
      }
      pvVar8 = *(void **)(param_1 + 0x130);
      if (*(void **)(param_1 + 0x130) == (void *)0x0) {
        pvVar8 = (void *)(param_1 + 0x120);
      }
      iVar6 = _guard_xfg_dispatch_icall_nop
                        (pvVar8,puVar13,
                         (ulonglong)(uint)(((int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5) << 2));
      if (iVar6 == 0) goto LAB_1404e1313;
    }
  }
  FUN_1404dc1d0(param_1);
LAB_1404e1313:
  if (puVar11 != (uint *)0x0) {
    FMemory::Free(puVar11);
  }
  if (puVar7 != (uint *)0x0) {
    FMemory::Free(puVar7);
  }
  return;
}



// FUNCTION 1404e1360 FUN_1404e1360 body=344 status=ok
// SIG undefined FUN_1404e1360(void)

void FUN_1404e1360(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  FUN_1404cf2e0(&local_38,0);
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    FUN_1404d0fe0(param_1,&local_48,param_2,param_3);
    plVar4 = plStack_40;
    if (local_48 != 0) {
      local_28 = local_48;
      plStack_20 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
        plVar5 = local_38;
      }
      (**(code **)(*plVar5 + 0x90))(plVar5,&local_28);
      plVar5 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_20 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        plVar4 = plStack_40;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar4 = plStack_40;
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
            plVar4 = plStack_40;
          }
        }
      }
    }
    plVar5 = plStack_40;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar4 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1404e14c0 FUN_1404e14c0 body=46 status=ok
// SIG undefined FUN_1404e14c0(void)

void FUN_1404e14c0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  plVar1 = (longlong *)FUN_1404b0000(local_res10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001404e14e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x110))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1404e14f0 FUN_1404e14f0 body=574 status=ok
// SIG undefined FUN_1404e14f0(void)

undefined8
FUN_1404e14f0(undefined8 *param_1,undefined8 *param_2,wchar_t **param_3,wchar_t **param_4,
             undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  wchar_t *pwVar12;
  wchar_t *local_40;
  int local_38;
  undefined4 local_34;
  
  puVar11 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = FUN_141592950(param_1,puVar5,param_5,param_6,0xffffffff);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    if (param_3 != (wchar_t **)0x0) {
      iVar7 = *(int *)(param_1 + 1) + -1;
      if (*(int *)(param_1 + 1) == 0) {
        pwVar12 = L"";
        iVar7 = 0;
      }
      else {
        pwVar12 = (wchar_t *)*param_1;
      }
      local_40 = (wchar_t *)0x0;
      local_34 = 0;
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
      iVar8 = iVar7 + 1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      pwVar10 = local_40;
      local_38 = iVar8;
      if ((0 < iVar8) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0), iVar8 = local_38,
         pwVar10 = local_40, 0 < local_38)) {
        wcsncpy(local_40,pwVar12,(longlong)iVar7);
        pwVar10[iVar7] = L'\0';
      }
      if (param_3 == &local_40) {
        if (pwVar10 != (wchar_t *)0x0) {
          FMemory::Free(pwVar10);
        }
      }
      else {
        if (*param_3 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_3 = pwVar10;
        *(int *)(param_3 + 1) = iVar8;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
      }
    }
    pwVar12 = (wchar_t *)0x0;
    if (param_4 != (wchar_t **)0x0) {
      iVar8 = *(int *)(param_1 + 1);
      iVar7 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar7 = 0;
      }
      uVar9 = iVar8 - 1;
      uVar4 = iVar7 + iVar2;
      uVar6 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar9 = 0;
      }
      uVar1 = uVar4 + 0x7fffffff;
      if (uVar4 < uVar9) {
        uVar9 = uVar4;
      }
      if (iVar8 == 0) {
        uVar6 = 0;
      }
      uVar4 = uVar9;
      if ((uVar9 <= uVar1) && (uVar4 = uVar6, uVar1 < uVar6)) {
        uVar4 = uVar1;
      }
      if (iVar8 != 0) {
        puVar11 = (undefined2 *)*param_1;
      }
      iVar7 = uVar4 - uVar9;
      local_40 = (wchar_t *)0x0;
      local_34 = 0;
      iVar2 = iVar7 + 1;
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      local_38 = iVar2;
      if ((0 < iVar2) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_40,0), iVar2 = local_38,
         pwVar12 = local_40, 0 < local_38)) {
        wcsncpy(local_40,puVar11 + (int)uVar9,(longlong)iVar7);
        pwVar12[iVar7] = L'\0';
      }
      if (param_4 == &local_40) {
        if (pwVar12 != (wchar_t *)0x0) {
          FMemory::Free(pwVar12);
        }
      }
      else {
        if (*param_4 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *param_4 = pwVar12;
        *(int *)(param_4 + 1) = iVar2;
        *(undefined4 *)((longlong)param_4 + 0xc) = local_34;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1404e1730 FUN_1404e1730 body=324 status=ok
// SIG undefined FUN_1404e1730(void)

void FUN_1404e1730(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_1404d0fe0(param_1,&local_38,param_2,param_3);
  plVar5 = plStack_30;
  if (local_38 != 0) {
    FUN_1404d13e0(&local_28,param_2);
    plVar5 = plStack_30;
    if (local_28 != (longlong *)0x0) {
      local_18 = local_38;
      plStack_10 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_28 + 0x20))(plStack_30,&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_30;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_30;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_30;
          }
        }
      }
    }
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      plVar5 = plStack_30;
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar5 = plStack_30;
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
          plVar5 = plStack_30;
        }
      }
    }
  }
  plVar4 = plStack_30;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1404e1880 FUN_1404e1880 body=394 status=ok
// SIG undefined FUN_1404e1880(void)

void FUN_1404e1880(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x2b8))(param_1,&local_18);
  if (((local_18 == (longlong *)0x0) ||
      (lVar3 = (**(code **)(*local_18 + 0x10))(local_18,param_2), plVar5 = local_18, lVar3 == 0)) ||
     ((*(int *)(lVar3 + 0x110) - 2U & 0xfffffffb) != 0)) goto LAB_1404e19c2;
  local_28 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77cd8;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)&LAB_1404c2174;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar3;
    *plVar4 = (longlong)&PTR_FUN_143f77d20;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x60))(plVar5,local_res8,&local_28);
  param_1[0x17] = *plVar5;
  if (local_20 == 0) {
LAB_1404e19a7:
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
    goto LAB_1404e19a7;
  }
  (**(code **)(*local_18 + 0x58))(local_18,param_2);
LAB_1404e19c2:
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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



// FUNCTION 1404e1a10 FUN_1404e1a10 body=427 status=ok
// SIG undefined FUN_1404e1a10(void)

void FUN_1404e1a10(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  int local_50;
  longlong local_48;
  undefined4 local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  
  FUN_1404d0b50(&local_38,param_2,*(undefined8 *)(param_1 + 0x30));
  if (((local_38 == (longlong *)0x0) ||
      (lVar5 = (**(code **)(*local_38 + 0x10))(local_38,param_3), lVar5 == 0)) ||
     ((*(int *)(lVar5 + 0x110) - 2U & 0xfffffffb) != 0)) {
    TBaseDelegate<void,FName,bool>::ExecuteIfBound(param_4,param_3,0);
    goto LAB_1404e1b67;
  }
  local_68 = *(undefined8 *)(param_1 + 0x30);
  local_48 = 0;
  local_40 = 0;
  if (((param_4 != &local_48) && ((int)param_4[1] != 0)) &&
     (param_4 = (longlong *)*param_4, param_4 != (longlong *)0x0)) {
    (**(code **)(*param_4 + 0x30))(param_4,&local_48);
  }
  lVar5 = *local_38;
  uVar6 = FUN_1404b9000(&local_58,param_1,FUN_1404db5f0,local_68,&local_48);
  (**(code **)(lVar5 + 0x60))(local_38,local_60,uVar6);
  if (local_50 == 0) {
LAB_1404e1b1a:
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
    goto LAB_1404e1b1a;
  }
  local_28 = &local_68;
  local_20 = local_60;
  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
            (param_1 + 0x40,local_res8,&local_28,0);
  (**(code **)(*local_38 + 0x58))(local_38,param_3);
LAB_1404e1b67:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
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



// FUNCTION 1404e1bc0 FUN_1404e1bc0 body=324 status=ok
// SIG undefined FUN_1404e1bc0(void)

void FUN_1404e1bc0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_1404d0fe0(param_1,&local_38,param_2,param_3);
  plVar5 = plStack_30;
  if (local_38 != 0) {
    FUN_1404d13e0(&local_28,param_2);
    plVar5 = plStack_30;
    if (local_28 != (longlong *)0x0) {
      local_18 = local_38;
      plStack_10 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      (**(code **)(*local_28 + 0x28))(plStack_30,&local_18);
      plVar4 = plStack_10;
      if (plStack_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_10 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        plVar5 = plStack_30;
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_10)(plStack_10);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = plStack_30;
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
            plVar5 = plStack_30;
          }
        }
      }
    }
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      plVar5 = plStack_30;
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar5 = plStack_30;
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
          plVar5 = plStack_30;
        }
      }
    }
  }
  plVar4 = plStack_30;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1404e1d10 FUN_1404e1d10 body=10 status=ok
// SIG undefined FUN_1404e1d10(void)

void FUN_1404e1d10(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001404e1d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}



// FUNCTION 1404e1d20 FUN_1404e1d20 body=171 status=ok
// SIG undefined FUN_1404e1d20(void)

void FUN_1404e1d20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined8 local_28 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  lVar1 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar2;
  if (lVar2 != lVar1) {
    local_res8[0] = param_5;
    do {
      local_28[0] = param_2;
      FUN_1404bc920(param_1,lVar2 + 8,1,0xd,local_28,param_3,param_4,local_res8);
      lVar2 = lVar2 + 0x40;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 1404e1dd0 FUN_1404e1dd0 body=770 status=ok
// SIG undefined FUN_1404e1dd0(void)

void FUN_1404e1dd0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  
  lVar12 = *(longlong *)(param_1 + 0x60);
  lVar11 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar12;
  local_res8[0] = param_2;
  do {
    if (lVar12 == lVar11) {
      return;
    }
    uVar8 = 0;
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))();
      if (cVar4 != '\0') {
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
        uVar5 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
        uVar13 = uVar5 & 0x1fffffffffffffff;
        if (plVar9 + uVar5 < plVar9) {
          uVar13 = uVar8;
        }
        if (uVar13 != 0) {
          do {
            lVar6 = *plVar9;
            if (lVar6 != 0) {
              if ((*(longlong **)(lVar6 + 0x160) == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x20))(), cVar4 == '\0')) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                if ((*(longlong **)(lVar12 + 0x10) == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x20))(), cVar4 == '\0'))
                {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) goto LAB_1404e1ec1;
                bVar2 = true;
              }
              else {
LAB_1404e1ec1:
                bVar2 = false;
              }
              if ((*(longlong **)(lVar6 + 0x160) == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x20))(), cVar4 == '\0')) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
LAB_1404e1f01:
                if ((bVar2) &&
                   (cVar4 = (**(code **)**(undefined8 **)(lVar12 + 0x10))
                                      (*(undefined8 **)(lVar12 + 0x10),
                                       *(undefined8 *)(lVar6 + 0x160)), cVar4 != '\0'))
                goto LAB_1404e1f1a;
                bVar2 = false;
              }
              else {
                if ((*(longlong **)(lVar12 + 0x10) == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x20))(), cVar4 == '\0'))
                {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) goto LAB_1404e1f01;
LAB_1404e1f1a:
                bVar2 = true;
              }
              if (bVar2) {
                *(undefined1 *)(lVar6 + 0x1931) = 1;
              }
            }
            plVar9 = plVar9 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar13);
        }
      }
      if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
         (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
        plVar9 = plVar10 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
        for (; plVar10 != plVar9; plVar10 = plVar10 + 1) {
          lVar6 = *plVar10;
          if (lVar6 != 0) {
            if ((*(longlong **)(lVar6 + 0x160) == (longlong *)0x0) ||
               (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x20))(), cVar4 == '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              if ((*(longlong **)(lVar12 + 0x10) == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x20))(), cVar4 == '\0')) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_1404e1fce;
              bVar2 = true;
            }
            else {
LAB_1404e1fce:
              bVar2 = false;
            }
            if ((*(longlong **)(lVar6 + 0x160) == (longlong *)0x0) ||
               (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x20))(), cVar4 == '\0')) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
LAB_1404e200e:
              if ((bVar2) &&
                 (cVar4 = (**(code **)**(undefined8 **)(lVar12 + 0x10))
                                    (*(undefined8 **)(lVar12 + 0x10),*(undefined8 *)(lVar6 + 0x160))
                 , cVar4 != '\0')) goto LAB_1404e2027;
              bVar2 = false;
            }
            else {
              if ((*(longlong **)(lVar12 + 0x10) == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x20))(), cVar4 == '\0')) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) goto LAB_1404e200e;
LAB_1404e2027:
              bVar2 = true;
            }
            if (bVar2) {
              lVar6 = FUN_1425bd330(lVar6,6);
              if (lVar6 != 0) {
                lVar7 = FUN_1404e6fc0();
                iVar1 = *(int *)(lVar7 + 0x90);
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar1) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
                    lVar7 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  FUN_1404bc200(lVar6,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),7,local_res8);
                }
              }
              break;
            }
          }
        }
      }
    }
    lVar12 = lVar12 + 0x40;
  } while( true );
}



// FUNCTION 1404e20e0 FUN_1404e20e0 body=117 status=ok
// SIG undefined FUN_1404e20e0(void)

void FUN_1404e20e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  lVar1 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
    local_res8 = param_2;
    FUN_1404bc700(param_1,lVar2 + 8,1,9,&local_res8,param_3);
  }
  return;
}



// FUNCTION 1404e2160 FUN_1404e2160 body=16 status=ok
// SIG undefined FUN_1404e2160(void)

void FUN_1404e2160(undefined8 param_1,undefined8 param_2)

{
  FUN_1404bcd00(param_1,1,0x14,param_2);
  return;
}



// FUNCTION 1404e2170 FUN_1404e2170 body=367 status=ok
// SIG undefined FUN_1404e2170(void)

void FUN_1404e2170(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (local_res10 = param_2, plVar2 = (longlong *)FUN_1425bd330(*(longlong *)(param_1 + 200),6),
     plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_1404e6fc0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_res8[0] = 0x13;
      FUN_1423e4ec0(&local_118,plVar2,0);
      local_30 = local_30 | 0x20;
      if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
        (**(code **)(local_118 + 0x50))(&local_118,local_res8,4);
        if ((local_ef & 0x10) != 0) {
          FArchive::ByteSwap(&local_118,local_res8,4);
        }
      }
      else {
        local_res8[0] = *(undefined4 *)*local_110;
        *local_110 = *local_110 + 4;
      }
      (**(code **)(local_118 + 0x40))(&local_118,&local_res10);
      (**(code **)(*plVar2 + 0x2c8))(plVar2,local_res18,&local_118,0);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_118);
    }
  }
  return;
}



// FUNCTION 1404e22e0 FUN_1404e22e0 body=16 status=ok
// SIG undefined FUN_1404e22e0(void)

void FUN_1404e22e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1404bcd00(param_1,1,0x15,param_2);
  return;
}



// FUNCTION 1404e22f0 FUN_1404e22f0 body=33 status=ok
// SIG undefined FUN_1404e22f0(void)

void FUN_1404e22f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1404bc4e0(param_1,param_2,1,0xf,param_3,param_4);
  return;
}



// FUNCTION 1404e2320 FUN_1404e2320 body=59 status=ok
// SIG undefined FUN_1404e2320(void)

void FUN_1404e2320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1404bc920(param_1,param_2,1,0xd,local_res18,param_4,param_5,&stack0x00000030);
  return;
}



// FUNCTION 1404e2360 FUN_1404e2360 body=533 status=ok
// SIG undefined FUN_1404e2360(void)

void FUN_1404e2360(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 local_res18 [8];
  
  local_res18[0] = param_3;
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
    uVar8 = 0;
    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    uVar5 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    uVar11 = uVar5 & 0x1fffffffffffffff;
    if (plVar9 + uVar5 < plVar9) {
      uVar11 = uVar8;
    }
    if (uVar11 != 0) {
      do {
        lVar6 = *plVar9;
        if ((lVar6 != 0) &&
           (cVar4 = FUniqueNetIdWrapper::operator==(lVar6 + 0x158,param_2), cVar4 != '\0')) {
          *(undefined1 *)(lVar6 + 0x1931) = 1;
        }
        plVar9 = plVar9 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar11);
    }
  }
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar9 = plVar10 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar10 != plVar9; plVar10 = plVar10 + 1) {
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        if ((*(longlong **)(lVar6 + 0x160) == (longlong *)0x0) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x20))(), cVar4 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
             (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1404e248e;
          bVar2 = true;
        }
        else {
LAB_1404e248e:
          bVar2 = false;
        }
        if ((*(longlong **)(lVar6 + 0x160) == (longlong *)0x0) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x20))(), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
LAB_1404e24ce:
          if ((bVar2) &&
             (cVar4 = (**(code **)**(undefined8 **)(param_2 + 8))
                                (*(undefined8 **)(param_2 + 8),*(undefined8 *)(lVar6 + 0x160)),
             cVar4 != '\0')) goto LAB_1404e24e7;
          bVar2 = false;
        }
        else {
          if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
             (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) goto LAB_1404e24ce;
LAB_1404e24e7:
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = FUN_1425bd330(lVar6,6);
          if (lVar6 == 0) {
            return;
          }
          lVar7 = FUN_1404e6fc0();
          iVar1 = *(int *)(lVar7 + 0x90);
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar1) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar1 * 8)
              != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            return;
          }
          FUN_1404bc200(lVar6,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),7,local_res18);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1404e2580 FUN_1404e2580 body=43 status=ok
// SIG undefined FUN_1404e2580(void)

void FUN_1404e2580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_1404bc700(param_1,param_2,1,9,local_res18,param_4);
  return;
}



// FUNCTION 1404e25b0 FUN_1404e25b0 body=267 status=ok
// SIG undefined FUN_1404e25b0(void)

void FUN_1404e25b0(longlong param_1)

{
  char cVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))();
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    if ((*(char *)(param_1 + 0x12a) != '\0') &&
       (((*(longlong **)(param_1 + 0xa0) == (longlong *)0x0 ||
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))(), cVar1 == '\0')) &&
        (QueryPerformanceCounter(&local_res8),
        2.0 < ((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0) -
              *(double *)(param_1 + 0x138))))) {
      *(undefined1 *)(param_1 + 0x12a) = 0;
      FUN_1404dd800(param_1 + -0x18,1);
    }
  }
  else if (*(int *)(param_1 + 0xc0) == 2) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *(undefined1 *)(param_1 + 0x129) = *(undefined1 *)(param_1 + 0x128);
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(double *)(param_1 + 0x138) = dVar2 + 16777216.0;
                    /* WARNING: Could not recover jumptable at 0x0001404e263b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + -0x18) + 0x38))(param_1 + -0x18);
    return;
  }
  return;
}



// FUNCTION 1404e26e0 FUN_1404e26e0 body=765 status=ok
// SIG undefined FUN_1404e26e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404e26e0(longlong param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined2 *puVar9;
  int iVar10;
  int *piVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined4 local_f0;
  undefined **local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  longlong local_c0 [3];
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_1416a0eb0();
  local_e8 = &PTR__scalar_deleting_destructor__143f76dd8;
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  plVar4 = (longlong *)FUN_1415c3d50();
  puVar5 = (undefined8 *)FUN_14167cf00(local_c0);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar5;
  }
  cVar3 = (**(code **)(*plVar4 + 0x88))(plVar4,puVar9,&local_e8);
  if (local_c0[0] != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    plVar12 = local_e0 + (longlong)(int)local_d8 * 2;
    for (plVar4 = local_e0; plVar4 != plVar12; plVar4 = plVar4 + 2) {
      plVar6 = (longlong *)FUN_1415c3d50();
      if ((int)plVar4[1] == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*plVar4;
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6,puVar9,0);
      if (plVar6 != (longlong *)0x0) {
        local_a8 = 0x4f46434d;
        local_a4 = 1;
        FEngineVersion::FEngineVersion(local_98);
        local_78 = 0;
        local_5c = 0;
        local_54 = 0;
        local_4c = 0;
        uStack_70 = 0;
        FUN_1404c0a30(plVar6,&local_a8);
        (**(code **)(*plVar6 + 0xe8))(plVar6);
        if ((local_a8 == 0x4f46434d) && (local_a4 != 0)) {
          uVar7 = FEngineVersion::Current();
          cVar3 = FEngineVersion::IsCompatibleWith(uVar7,local_98);
          if (cVar3 == '\0') goto LAB_1404e2846;
          bVar2 = false;
        }
        else {
LAB_1404e2846:
          bVar2 = true;
        }
        if (*(char *)(param_1 + 0x20) == '\0') {
LAB_1404e28e4:
          if (bVar2) goto LAB_1404e28e9;
        }
        else {
          piVar8 = *(int **)(param_1 + 0x28);
          piVar11 = piVar8 + (longlong)*(int *)(param_1 + 0x30) * 4;
          if (piVar8 != piVar11) {
            do {
              if (((piVar8[1] == local_78._4_4_ && piVar8[2] == (int)uStack_70) &&
                  piVar8[3] == uStack_70._4_4_) && *piVar8 == (int)local_78) goto LAB_1404e28e4;
              piVar8 = piVar8 + 4;
            } while (piVar8 != piVar11);
          }
          if (!bVar2) {
            local_f0 = 0;
            local_f8 = 0;
            FTimespan::Assign(&local_d0,0x1e);
            plVar6 = (longlong *)FDateTime::UtcNow(local_c8);
            if (*plVar6 - local_a0 <= local_d0) goto LAB_1404e2946;
          }
LAB_1404e28e9:
          plVar6 = (longlong *)FUN_1415c3d50();
          if ((int)plVar4[1] == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)*plVar4;
          }
          local_f8 = local_f8 & 0xffffff00;
          cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,puVar9);
          if (cVar3 != '\0') {
            iVar10 = *(int *)(param_1 + 0x40);
            *(int *)(param_1 + 0x40) = iVar10 + 1;
            if (*(int *)(param_1 + 0x44) < iVar10 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,iVar10);
            }
            puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar10 * 0x10);
            *puVar1 = (int)local_78;
            puVar1[1] = local_78._4_4_;
            puVar1[2] = (int)uStack_70;
            puVar1[3] = uStack_70._4_4_;
          }
        }
LAB_1404e2946:
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar4 = local_e0;
  for (iVar10 = (int)local_d8; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_e0 != (longlong *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}



// FUNCTION 1404e29e0 FUN_1404e29e0 body=805 status=ok
// SIG undefined FUN_1404e29e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404e29e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined1 local_110;
  undefined4 local_108;
  longlong local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  int local_e0;
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  int local_b8;
  int local_b4;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int iStack_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_1404cf470(param_1,&local_e8);
  FUN_1416a0eb0();
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar6 = &DAT_143f3eda8;
  if (local_e0 != 0) {
    puVar6 = local_e8;
  }
  cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,puVar6);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    goto LAB_1404e2cbd;
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar6 = &DAT_143f3eda8;
  if (local_e0 != 0) {
    puVar6 = local_e8;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar6,0);
  if (plVar3 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 2;
    goto LAB_1404e2cbd;
  }
  local_b8 = 0x4f46434d;
  local_b4 = 1;
  FEngineVersion::FEngineVersion(local_a8);
  lVar7 = 0;
  uVar8 = 0;
  local_6c = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_60 = 0;
  local_5c = 0;
  iStack_58 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_1404c0a30(plVar3,&local_b8);
  if ((((char)plVar3[5] < '\0') || (local_b8 != 0x4f46434d)) || (local_b4 != 1)) {
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  else {
    uVar4 = FEngineVersion::Current();
    cVar1 = FEngineVersion::IsCompatibleWith(uVar4,local_a8);
    if ((cVar1 == '\0') || (local_78 != *(int *)(param_1 + 0x30))) {
      *(undefined4 *)(param_1 + 0x1c) = 4;
    }
    else {
      uVar9 = 0;
      local_f8 = 0;
      local_f0 = 0;
      if (local_70 != 0) {
        local_f0 = (ulonglong)local_70;
        uVar8 = local_70;
        uVar9 = 0;
        if (0 < (int)local_70) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          uVar8 = (uint)local_f0;
          uVar9 = local_f0._4_4_;
        }
        lVar7 = local_f8;
        (**(code **)(*plVar3 + 0x50))(plVar3,local_f8,(longlong)(int)uVar8);
      }
      (**(code **)(*plVar3 + 0xe8))(plVar3);
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x54)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
      }
      iVar2 = *(int *)(param_1 + 0x50) + local_74;
      *(int *)(param_1 + 0x50) = iVar2;
      if (*(int *)(param_1 + 0x54) < iVar2) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x48);
      }
      plVar3 = (longlong *)(param_1 + 0x48);
      lVar5 = lVar7;
      if (local_6c == 0) {
        if (plVar3 != &local_f8) {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          lVar5 = 0;
          *plVar3 = lVar7;
          local_f8 = 0;
          local_f0 = 0;
          *(uint *)(param_1 + 0x50) = uVar8;
          *(undefined4 *)(param_1 + 0x54) = uVar9;
        }
      }
      else {
        local_108 = 0xf;
        local_110 = 0;
        local_118 = uVar8;
        FUN_14165b8a0(local_6c,*plVar3,local_74,lVar7);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      FSHA1::HashBuffer(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
      if (((local_d8 == CONCAT44(local_64,uStack_68)) && (local_d0 == CONCAT44(local_5c,uStack_60)))
         && (local_c8 == iStack_58)) {
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        if ((((*(longlong *)(param_1 + 0x34) != 0) || (*(longlong *)(param_1 + 0x3c) != 0)) ||
            (*(int *)(param_1 + 0x44) != 0)) &&
           (((local_d8 != *(longlong *)(param_1 + 0x34) ||
             (local_d0 != *(longlong *)(param_1 + 0x3c))) || (local_c8 != *(int *)(param_1 + 0x44)))
           )) goto LAB_1404e2c6f;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
LAB_1404e2c6f:
        *(undefined4 *)(param_1 + 0x1c) = 2;
      }
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
LAB_1404e2cbd:
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (local_e8 != (undefined2 *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}



// FUNCTION 1404e2d10 FUN_1404e2d10 body=598 status=ok
// SIG undefined FUN_1404e2d10(void)

void FUN_1404e2d10(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  FUN_1404cf5f0(param_1,&local_48);
  plVar3 = (longlong *)FUN_1416a0eb0();
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  cVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,puVar5);
  if (cVar2 != '\0') {
    puVar5 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar5 = local_48;
    }
    cVar2 = (**(code **)(*plVar3 + 0x78))(plVar3,puVar5);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x1c) = 6;
      *(undefined1 *)(param_1 + 0x18) = 1;
      goto LAB_1404e2f40;
    }
  }
  puVar4 = (undefined8 *)FDateTime::UtcNow(local_res18);
  *(undefined8 *)(param_1 + 0x50) = *puVar4;
  puVar4 = (undefined8 *)FEngineVersion::Current();
  *(undefined8 *)(param_1 + 0x58) = *puVar4;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar4 + 1);
  FString::operator=(param_1 + 0x68,puVar4 + 2);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x94) = 1;
  local_38 = 0;
  local_2c = 0;
  local_res10[0] = FUN_1416452d0(1,*(undefined4 *)(param_1 + 0x40),0xf);
  lVar7 = 0;
  local_30 = local_res10[0];
  if (0 < local_res10[0]) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_38,0);
    lVar7 = local_38;
  }
  FUN_141645020(1,lVar7,local_res10,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),
                0xf);
  *(int *)(param_1 + 0x90) = local_res10[0];
  FSHA1::HashBuffer(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),param_1 + 0x98);
  puVar4 = (undefined8 *)FUN_141672d20(local_28,&local_48);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar4;
  }
  (**(code **)(*plVar3 + 0x150))(plVar3,puVar5);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,puVar5,0);
  if (plVar3 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 5;
  }
  else {
    FUN_1404c0a30(plVar3,param_1 + 0x48);
    if (*(int *)(param_1 + 0x94) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x8c);
      lVar6 = *(longlong *)(param_1 + 0x38);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x90);
      lVar6 = lVar7;
    }
    (**(code **)(*plVar3 + 0x50))(plVar3,lVar6,uVar1);
    (**(code **)(*plVar3 + 0xe8))(plVar3);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
LAB_1404e2f40:
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404e2f70 FUN_1404e2f70 body=1812 status=ok
// SIG undefined FUN_1404e2f70(void)

void FUN_1404e2f70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  
  plVar17 = *(longlong **)(param_1 + 0x18);
  local_d8 = 0;
  local_d0 = 0;
  plVar3 = plVar17 + *(int *)(param_1 + 0x20);
  local_e8 = 0;
  local_e0 = 0;
  for (; plVar17 != plVar3; plVar17 = plVar17 + 1) {
    plVar8 = (longlong *)*plVar17;
    local_70 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_c8);
      plVar14 = local_c8 + (int)local_c0;
      for (plVar18 = local_c8; plVar18 != plVar14; plVar18 = plVar18 + 1) {
        plVar8 = (longlong *)*plVar18;
        if (plVar8 != (longlong *)0x0) {
          local_108 = (undefined8 *)0x0;
          local_100 = 0;
          (**(code **)(*plVar8 + 0x10))(plVar8,0,&local_108);
          iVar12 = (int)local_100;
          iVar15 = 0;
          if ((int)local_100 != 0) {
            if (local_d0._4_4_ < (int)local_d0 + (int)local_100) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_d8);
            }
            puVar9 = (undefined8 *)((longlong)(int)local_d0 * 0x10 + local_d8);
            puVar10 = local_108;
            iVar15 = iVar12;
            do {
              *puVar9 = *puVar10;
              lVar11 = puVar10[1];
              puVar9[1] = lVar11;
              if (lVar11 != 0) {
                LOCK();
                *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                UNLOCK();
              }
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 2;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + iVar12);
            iVar15 = (int)local_100;
          }
          if ((longlong)local_100 < 0) {
            iVar12 = local_100._4_4_;
            if (iVar15 != 0) {
              plVar13 = local_108 + 1;
              do {
                plVar5 = (longlong *)*plVar13;
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar5 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar5)(plVar5);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    iVar12 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar12 == 1) {
                      (**(code **)(*plVar5 + 8))(plVar5,1);
                    }
                  }
                }
                plVar13 = plVar13 + 2;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
              iVar12 = local_100._4_4_;
            }
            local_100 = local_100 & 0xffffffff00000000;
            if (iVar12 != 0) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_108,0);
            }
          }
          else {
            if (iVar15 != 0) {
              plVar13 = local_108 + 1;
              do {
                plVar5 = (longlong *)*plVar13;
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar5 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar5)(plVar5);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    iVar12 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar12 == 1) {
                      (**(code **)(*plVar5 + 8))(plVar5,1);
                    }
                  }
                }
                plVar13 = plVar13 + 2;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
            }
            local_100 = local_100 & 0xffffffff00000000;
          }
          (**(code **)(*plVar8 + 0x10))(plVar8,1,&local_108);
          iVar12 = (int)local_100;
          if ((int)local_100 != 0) {
            if (local_e0._4_4_ < (int)local_e0 + (int)local_100) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_e8);
            }
            puVar9 = (undefined8 *)((longlong)(int)local_e0 * 0x10 + local_e8);
            puVar10 = local_108;
            iVar15 = iVar12;
            do {
              *puVar9 = *puVar10;
              lVar11 = puVar10[1];
              puVar9[1] = lVar11;
              if (lVar11 != 0) {
                LOCK();
                *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                UNLOCK();
              }
              puVar9 = puVar9 + 2;
              puVar10 = puVar10 + 2;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + iVar12);
            if ((int)local_100 != 0) {
              plVar8 = local_108 + 1;
              iVar12 = (int)local_100;
              do {
                plVar13 = (longlong *)*plVar8;
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar13 + 1;
                  lVar11 = *plVar5;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar13 + 0xc);
                    iVar15 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar15 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13);
                    }
                  }
                }
                plVar8 = plVar8 + 2;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
          }
          if (local_108 != (undefined8 *)0x0) {
            FMemory::Free();
          }
        }
        plVar8 = local_70;
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
      if (plVar8 != (longlong *)0x0) {
        local_f8 = (undefined8 *)0x0;
        local_f0 = 0;
        (**(code **)(*plVar8 + 0x10))(plVar8,0,&local_f8);
        iVar12 = (int)local_f0;
        iVar15 = 0;
        if ((int)local_f0 != 0) {
          if (local_d0._4_4_ < (int)local_d0 + (int)local_f0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_d8);
          }
          puVar9 = (undefined8 *)((longlong)(int)local_d0 * 0x10 + local_d8);
          puVar10 = local_f8;
          iVar15 = iVar12;
          do {
            *puVar9 = *puVar10;
            lVar11 = puVar10[1];
            puVar9[1] = lVar11;
            if (lVar11 != 0) {
              LOCK();
              *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
              UNLOCK();
            }
            puVar9 = puVar9 + 2;
            puVar10 = puVar10 + 2;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
          local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + iVar12);
          iVar15 = (int)local_f0;
        }
        if ((longlong)local_f0 < 0) {
          iVar12 = local_f0._4_4_;
          if (iVar15 != 0) {
            plVar14 = local_f8 + 1;
            do {
              plVar18 = (longlong *)*plVar14;
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                plVar13 = plVar18 + 1;
                lVar11 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar18 + 0xc);
                  iVar12 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar18 + 8))(plVar18,1);
                  }
                }
              }
              plVar14 = plVar14 + 2;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            iVar12 = local_f0._4_4_;
          }
          local_f0 = local_f0 & 0xffffffff00000000;
          if (iVar12 != 0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_f8,0);
          }
        }
        else {
          if (iVar15 != 0) {
            plVar14 = local_f8 + 1;
            do {
              plVar18 = (longlong *)*plVar14;
              if (plVar18 != (longlong *)0x0) {
                LOCK();
                plVar13 = plVar18 + 1;
                lVar11 = *plVar13;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar18 + 0xc);
                  iVar12 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar18 + 8))(plVar18,1);
                  }
                }
              }
              plVar14 = plVar14 + 2;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          local_f0 = local_f0 & 0xffffffff00000000;
        }
        (**(code **)(*plVar8 + 0x10))(plVar8,1,&local_f8);
        iVar12 = (int)local_f0;
        if ((int)local_f0 != 0) {
          if (local_e0._4_4_ < (int)local_e0 + (int)local_f0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_e8);
          }
          puVar9 = (undefined8 *)((longlong)(int)local_e0 * 0x10 + local_e8);
          puVar10 = local_f8;
          iVar15 = iVar12;
          do {
            *puVar9 = *puVar10;
            lVar11 = puVar10[1];
            puVar9[1] = lVar11;
            if (lVar11 != 0) {
              LOCK();
              *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
              UNLOCK();
            }
            puVar9 = puVar9 + 2;
            puVar10 = puVar10 + 2;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
          local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + iVar12);
          if ((int)local_f0 != 0) {
            plVar8 = local_f8 + 1;
            iVar12 = (int)local_f0;
            do {
              plVar14 = (longlong *)*plVar8;
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar18 = plVar14 + 1;
                lVar11 = *plVar18;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar14)(plVar14);
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
              plVar8 = plVar8 + 2;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
        if (local_f8 != (undefined8 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  plVar3 = (longlong *)(param_1 + 0x38);
  local_b8 = 0;
  iVar12 = *(int *)(param_1 + 0x60);
  puStack_b0 = (uint *)(param_1 + 0x48);
  uStack_b4 = 1;
  iStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar12 != 0) {
    puVar16 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar16 = puStack_b0;
    }
    uVar4 = *puVar16;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar4 == 0) {
      lVar11 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar15 = local_b8 + 1;
      bVar6 = (int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar15;
      if (bVar6) goto LAB_1404e359d;
      uVar4 = puVar16[lVar11 + 1];
    }
    uStack_b4 = -uVar4 & uVar4;
    iVar15 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    iStack_a4 = (iStack_a0 - iVar15) + 0x1f;
    if (iVar12 < iStack_a4) {
LAB_1404e359d:
      iStack_a4 = iVar12;
    }
  }
  local_a8 = 0xffffffff;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  uStack_50 = 0xffffffff;
  iStack_4c = iStack_a4;
  iStack_48 = iStack_a0;
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_a4;
  local_78 = iStack_a0;
  local_98 = plVar3;
  local_88 = puStack_b0;
  local_68 = plVar3;
  uStack_60 = uStack_90;
  puStack_58 = puStack_b0;
  if (iStack_a4 < iVar12) {
    do {
      puVar10 = *(undefined8 **)((longlong)iStack_7c * 0x20 + 8 + *local_98);
      puVar9 = puVar10 + (longlong)*(int *)((longlong)iStack_7c * 0x20 + 0x10 + *local_98) * 2;
      for (; puVar10 != puVar9; puVar10 = puVar10 + 2) {
        cVar7 = (**(code **)(*(longlong *)*puVar10 + 0x30))();
        plVar17 = &local_e8;
        if (cVar7 == '\0') {
          plVar17 = &local_d8;
        }
        FUN_1404dc890(param_1,puVar10,plVar17);
      }
      uStack_90._4_4_ = (uint)((ulonglong)uStack_90 >> 0x20);
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  FUN_1404df5e0(plVar3);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_e8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_d8);
  return;
}



// FUNCTION 1404e36a0 FUN_1404e36a0 body=737 status=ok
// SIG undefined FUN_1404e36a0(void)

void FUN_1404e36a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 local_res20 [8];
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"OnlineImageManager",L"ImagePoolMaxSize",param_1 + 0x38,&DAT_1468e2360
              );
    FUN_1404d30b0(param_1 + 0x40);
  }
  lVar11 = *(longlong *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  lVar14 = (longlong)iVar6 * 0x30 + lVar11;
  if (lVar11 != lVar14) {
    lVar13 = lVar11 + 8;
    do {
      if (*(int *)(lVar13 + 0x1c) == 0) {
        lVar1 = FUN_1404ccd90(param_1 + 0x40,lVar13);
        if (lVar1 == 0) {
          FUN_1404c9fc0(param_1,lVar11);
        }
        else {
          *(undefined4 *)(lVar13 + 0x1c) = 1;
          lVar1 = FUN_1404ccd90(param_1 + 0x40,lVar13);
          if ((lVar1 != 0) && (lVar2 = FUN_1404cf3e0(), lVar2 != 0)) {
            plVar3 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar3 != (longlong *)0x0) {
              plVar3[1] = param_1;
              *plVar3 = (longlong)&DAT_143f3ed00;
              plVar3[2] = (longlong)FUN_1404d9ec0;
              lVar4 = FDelegateHandle::GenerateNewID();
              plVar3[4] = lVar4;
              *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
            }
            uVar8 = 0;
            if (plVar3 != (longlong *)0x0) {
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 8,1);
              puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res20);
              iVar6 = *(int *)(lVar2 + 0x10);
              uVar8 = *puVar5;
              *(int *)(lVar2 + 0x10) = iVar6 + 1;
              if (*(int *)(lVar2 + 0x14) < iVar6 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 8,iVar6);
              }
              puVar5 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar2 + 8));
              *puVar5 = plVar3;
              *(undefined4 *)(puVar5 + 1) = 3;
            }
            *(undefined8 *)(lVar13 + 0x20) = uVar8;
            FUN_1404dd230(lVar2,lVar1 + 0x10,*(undefined4 *)(lVar1 + 0x20),lVar1 + 0x24);
          }
        }
      }
      lVar11 = lVar11 + 0x30;
      lVar13 = lVar13 + 0x30;
    } while (lVar11 != lVar14);
    iVar6 = *(int *)(param_1 + 0x30);
  }
  if (iVar6 != 0) {
    iVar15 = 0;
    lVar14 = (longlong)iVar6;
    bVar16 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x24) != 3;
    lVar11 = 0;
    iVar6 = 0;
    do {
      lVar11 = lVar11 + 1;
      iVar10 = iVar6 + 1;
      if (lVar11 < lVar14) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0x28) + 0x24 + lVar11 * 0x30);
        do {
          if (bVar16 != (*piVar7 != 3)) break;
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 1;
          piVar7 = piVar7 + 0xc;
        } while (lVar11 < lVar14);
      }
      iVar12 = iVar10 - iVar6;
      if (bVar16 == false) {
        puVar9 = (undefined4 *)((longlong)iVar6 * 0x30 + *(longlong *)(param_1 + 0x28));
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (*(longlong *)(puVar9 + 2) != 0) {
            FMemory::Free();
          }
          FUN_1416f8340(*puVar9);
          puVar9 = puVar9 + 0xc;
        }
      }
      else {
        if (iVar15 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar15 * 0x30 + *(longlong *)(param_1 + 0x28)),
                     (void *)((longlong)iVar6 * 0x30 + *(longlong *)(param_1 + 0x28)),
                     (longlong)iVar12 * 0x30);
        }
        iVar15 = iVar15 + iVar12;
      }
      bVar16 = (bool)(bVar16 ^ 1);
      iVar6 = iVar10;
    } while (lVar11 < lVar14);
    *(int *)(param_1 + 0x30) = iVar15;
  }
  return;
}



// FUNCTION 1404e3990 FUN_1404e3990 body=794 status=ok
// SIG undefined FUN_1404e3990(void)

void FUN_1404e3990(longlong param_1,float param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  longlong local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  int local_4c;
  
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 0xa8) + -1;
  local_78 = 0;
  local_6c = 0;
  lVar13 = 0;
  if (-1 < iVar7) {
    plVar10 = (longlong *)(param_1 + 0xa0);
    lVar12 = (longlong)iVar7 * 0x48;
    lVar6 = (longlong)*(int *)(param_1 + 0xa8) * 0x48;
    lVar13 = lVar12;
    do {
      lVar11 = *plVar10 + lVar13;
      fVar14 = *(float *)(lVar11 + 0x40) - param_2;
      *(float *)(lVar11 + 0x40) = fVar14;
      if (fVar14 <= 0.0) {
        lVar4 = (longlong)iVar8;
        local_70 = iVar8 + 1;
        if (iVar9 < local_70) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_78,iVar8);
        }
        iVar8 = local_70;
        puVar5 = (undefined8 *)(local_78 + lVar4 * 0x48);
        FUN_1404bdf40(puVar5,lVar11);
        *puVar5 = &PTR_FUN_143f74340;
        *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(lVar11 + 0x40);
        lVar11 = *plVar10;
        *(undefined ***)(lVar12 + lVar11) = &PTR_FUN_143f74338;
        FUN_1404bebc0(lVar11 + 0x30 + lVar12);
        FUN_1404bf980(lVar11 + 8 + lVar12);
        iVar9 = *(int *)(param_1 + 0xa8);
        iVar3 = (iVar9 - iVar7) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar10 + lVar12),(void *)(*plVar10 + lVar6),(longlong)iVar3 * 0x48);
          iVar9 = *(int *)(param_1 + 0xa8);
        }
        *(int *)(param_1 + 0xa8) = iVar9 + -1;
        TArray<FMiniMapEntry,FDefaultAllocator>::ResizeShrink(plVar10);
        iVar9 = local_6c;
      }
      lVar6 = lVar6 + -0x48;
      lVar12 = lVar12 + -0x48;
      lVar13 = lVar13 + -0x48;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    lVar13 = local_78;
    if (0 < iVar8) {
      local_68 = 0;
      local_60 = iVar8;
      TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(&local_68,iVar8,0);
      lVar6 = local_68;
      lVar13 = local_78;
      lVar11 = local_68 - local_78;
      lVar12 = local_78;
      iVar9 = iVar8;
      do {
        puVar5 = (undefined8 *)(lVar11 + lVar12);
        FUN_1404bdf40(puVar5,lVar12);
        *puVar5 = &PTR_FUN_143f74340;
        *(undefined4 *)(lVar11 + 0x40 + lVar12) = *(undefined4 *)(lVar12 + 0x40);
        lVar12 = lVar12 + 0x48;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (((*(int *)(param_1 + 0xf8) != 0) && (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0))
         && (cVar2 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))(), iVar9 = local_60,
            cVar2 != '\0')) {
        if (*(int *)(param_1 + 0xf8) == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = *(longlong **)(param_1 + 0xf0);
        }
        local_58 = (undefined8 *)0x0;
        local_50 = local_60;
        if (local_60 == 0) {
          local_4c = local_60;
        }
        else {
          TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                    (&local_58,local_60,0);
          puVar5 = local_58;
          do {
            FUN_1404bdf40(puVar5,lVar6);
            *puVar5 = &PTR_FUN_143f74340;
            puVar1 = (undefined4 *)(lVar6 + 0x40);
            lVar6 = lVar6 + 0x48;
            *(undefined4 *)(puVar5 + 8) = *puVar1;
            puVar5 = puVar5 + 9;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        (**(code **)(*plVar10 + 0x40))(plVar10,param_1 + -0x30,&local_58);
      }
      FUN_1404bed10(&local_68);
    }
  }
  if (iVar8 != 0) {
    lVar6 = lVar13 + 8;
    do {
      *(undefined ***)(lVar6 + -8) = &PTR_FUN_143f74338;
      FUN_1404bebc0(lVar6 + 0x28);
      FUN_1404bf980(lVar6);
      lVar6 = lVar6 + 0x48;
      iVar8 = iVar8 + -1;
      lVar13 = local_78;
    } while (iVar8 != 0);
  }
  if (lVar13 != 0) {
    FMemory::Free(lVar13);
  }
  return;
}



// FUNCTION 1404e3cb0 FUN_1404e3cb0 body=2288 status=ok
// SIG undefined FUN_1404e3cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404e3cb0(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  void *pvVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_628 [32];
  longlong *local_608;
  ulonglong local_600;
  uint local_5f8;
  ulonglong local_5f0;
  undefined1 local_5e8;
  int local_5d8 [2];
  undefined8 local_5d0;
  longlong *local_5c8;
  undefined1 *local_5c0;
  longlong *local_5b8;
  longlong *local_5b0;
  void *local_5a8;
  int local_5a0;
  undefined4 local_59c;
  undefined2 *local_598;
  longlong *plStack_590;
  longlong local_588;
  undefined8 local_580;
  longlong *local_578;
  undefined2 *local_570;
  int local_568;
  undefined4 local_564;
  void *local_560;
  int local_558;
  LARGE_INTEGER local_548;
  LARGE_INTEGER local_540;
  undefined1 *local_538;
  int local_530;
  char local_52c;
  undefined8 local_528;
  undefined4 local_520;
  LARGE_INTEGER local_518;
  undefined1 local_510 [16];
  longlong local_500 [2];
  longlong local_4f0;
  longlong local_4d8;
  longlong local_4c8;
  longlong *local_4b8;
  int local_4b0;
  longlong local_4a8;
  undefined1 local_490 [24];
  undefined1 local_478 [1024];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_628;
  FUN_1425d2d00();
  lVar15 = param_1[0x1a];
  lVar18 = 0;
  if (lVar15 != 0) {
    lVar10 = *(longlong *)(lVar15 + 0x170);
    lVar15 = (longlong)*(int *)(lVar15 + 0x178) * 0x80 + lVar10;
    for (; (lVar18 = 0, lVar10 != lVar15 &&
           (lVar18 = lVar10, *(longlong **)(lVar10 + 0x10) != param_1)); lVar10 = lVar10 + 0x80) {
    }
  }
  FUN_1428c2380(local_510,lVar18);
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x378))(param_1);
  local_578 = plVar11;
  QueryPerformanceCounter(&local_548);
  local_5c0 = local_478;
  dVar5 = (double)local_548.QuadPart * DAT_1468b02f8 + 16777216.0 + (double)DAT_1461fb7d0;
  (**(code **)(*plVar11 + 0x70))(plVar11,&local_5b8,0,0);
  lVar15 = param_1[0xac];
  do {
    if (lVar15 == 0) {
LAB_1404e451a:
      QueryPerformanceCounter(&local_518);
      if (local_5b0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_5b0 + 1;
        lVar15 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_5b0)(local_5b0);
          LOCK();
          piVar1 = (int *)((longlong)local_5b0 + 0xc);
          iVar22 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*local_5b0 + 8))(local_5b0,1);
          }
        }
      }
      FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(local_510);
      return;
    }
    uVar19 = 0;
    QueryPerformanceCounter(&local_540);
    dVar4 = (double)local_540.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (dVar5 < dVar4) {
      bVar6 = false;
      DAT_1461fb87c = DAT_1461fb87c + 1;
      lVar15 = (longlong)(DAT_1461fb870 + -1);
      if (-1 < DAT_1461fb870 + -1) {
        lVar18 = lVar15 << 4;
        do {
          if (((*(int *)(DAT_1461fb868 + 8 + lVar18) == 0) ||
              (*(longlong **)(DAT_1461fb868 + lVar18) == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(**(longlong **)(DAT_1461fb868 + lVar18) + 0x40))(), cVar8 == '\0'
             )) {
            bVar6 = true;
          }
          lVar18 = lVar18 + -0x10;
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
      }
      iVar22 = DAT_1461fb870;
      DAT_1461fb87c = DAT_1461fb87c + -1;
      if ((bVar6) && (DAT_1461fb87c < 1)) {
        uVar21 = uVar19;
        if (0 < DAT_1461fb870) {
          do {
            if (((*(int *)(DAT_1461fb868 + 8 + uVar19) == 0) ||
                (*(longlong **)(DAT_1461fb868 + uVar19) == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(**(longlong **)(DAT_1461fb868 + uVar19) + 0x10))(),
               cVar8 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1461fb868,uVar21,1,1);
            }
            else {
              uVar21 = (ulonglong)((int)uVar21 + 1);
              uVar19 = uVar19 + 0x10;
            }
          } while ((int)uVar21 < DAT_1461fb870);
        }
        _DAT_1461fb878 = DAT_1461fb870 * 2;
        if (_DAT_1461fb878 < 3) {
          _DAT_1461fb878 = 2;
        }
        if ((_DAT_1461fb878 < iVar22) && (DAT_1461fb874 != DAT_1461fb870)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1461fb868);
        }
      }
      dVar5 = (double)DAT_1461fb7d0 + dVar4;
      plVar11 = local_578;
    }
    local_5d8[0] = 0;
    local_600 = local_600 & 0xffffffff00000000;
    local_608 = local_5b8;
    cVar8 = (**(code **)(*(longlong *)param_1[0xac] + 0x58))
                      ((longlong *)param_1[0xac],local_478,0x400,local_5d8);
    if (cVar8 == '\0') {
      iVar22 = (**(code **)(*plVar11 + 0x88))(plVar11);
      if ((iVar22 == 7) || (iVar22 == 0)) goto LAB_1404e451a;
      if (iVar22 == 0xc) {
        if (param_1[0x12] != 0) {
          plVar11 = *(longlong **)(param_1[0x12] + 0x1978);
          (**(code **)(*plVar11 + 0x70))(plVar11,local_5b8);
        }
        goto LAB_1404e451a;
      }
      if ((iVar22 != 0x1a) && (iVar22 != 0x34)) goto LAB_1404e451a;
    }
    else if (local_5d8[0] == 0) goto LAB_1404e451a;
    plVar11 = (longlong *)param_1[0x12];
    plVar14 = (longlong *)0x0;
    if ((plVar11 != (longlong *)0x0) &&
       (cVar9 = (**(code **)(*(longlong *)plVar11[0x32f] + 0x70))
                          ((longlong *)plVar11[0x32f],local_5b8), cVar9 != '\0')) {
      plVar14 = plVar11;
    }
    iVar22 = 0;
    if (0 < (int)param_1[0x14]) {
      lVar15 = 0;
      do {
        if (plVar14 != (longlong *)0x0) break;
        plVar11 = *(longlong **)(lVar15 + param_1[0x13]);
        plVar3 = (longlong *)plVar11[0x32f];
        cVar9 = (**(code **)(*plVar3 + 0x70))(plVar3,local_5b8);
        if (cVar9 != '\0') {
          plVar14 = plVar11;
        }
        iVar22 = iVar22 + 1;
        lVar15 = lVar15 + 8;
      } while (iVar22 < (int)param_1[0x14]);
    }
    if (cVar8 == '\0') {
      if (((plVar14 != (longlong *)0x0) && (plVar14 != (longlong *)param_1[0x12])) &&
         ((*(int *)((longlong)plVar14 + 300) != 3 || ((*(byte *)(param_1 + 0xa9) & 2) == 0)))) {
        (**(code **)(*plVar14 + 0x300))(plVar14);
      }
      goto LAB_1404e44c1;
    }
    if (plVar14 == (longlong *)0x0) {
      if (((undefined8 *)param_1[0x2d] != (undefined8 *)0x0) &&
         (iVar22 = (*(code *)**(undefined8 **)param_1[0x2d])(), iVar22 == 1)) {
        bVar6 = true;
        local_598 = (undefined2 *)0x0;
        plStack_590 = (longlong *)0x0;
        if ((param_1[0x15] != 0) && (param_1[0x16] != 0)) {
          puVar20 = (undefined2 *)0x0;
          if (param_1[0x17] != 0) {
            piVar1 = (int *)(param_1[0x17] + 8);
            LOCK();
            iVar22 = *piVar1;
            if (iVar22 == 0) {
              *piVar1 = 0;
              iVar22 = 0;
            }
            UNLOCK();
            if (0 < iVar22) {
              local_5c8 = (longlong *)param_1[0x17];
              local_598 = puVar20;
              if (local_5c8 != (longlong *)0x0) {
                LOCK();
                uVar2 = *(uint *)(local_5c8 + 1);
                bVar23 = uVar2 == 0;
                if (bVar23) {
                  *(uint *)(local_5c8 + 1) = 0;
                  puVar12 = puVar20;
                }
                else {
                  puVar12 = (undefined2 *)(ulonglong)uVar2;
                }
                UNLOCK();
                while (!bVar23) {
                  iVar22 = (int)puVar12;
                  LOCK();
                  bVar23 = iVar22 == (int)local_5c8[1];
                  if (bVar23) {
                    *(int *)(local_5c8 + 1) = iVar22 + 1;
                  }
                  UNLOCK();
                  if (bVar23) {
                    local_598 = (undefined2 *)0x0;
                    if (local_5c8 != (longlong *)0x0) {
                      local_598 = (undefined2 *)param_1[0x16];
                    }
                    goto LAB_1404e412c;
                  }
                  puVar12 = (undefined2 *)0x0;
                  LOCK();
                  uVar2 = *(uint *)(local_5c8 + 1);
                  bVar23 = uVar2 == 0;
                  if (bVar23) {
                    *(uint *)(local_5c8 + 1) = 0;
                  }
                  else {
                    puVar12 = (undefined2 *)(ulonglong)uVar2;
                  }
                  UNLOCK();
                }
                local_598 = (undefined2 *)0x0;
                local_5c8 = (longlong *)0x0;
              }
LAB_1404e412c:
              local_5d0 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_590,&local_5c8);
              plVar11 = local_5c8;
              if (local_5c8 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_5c8 + 1;
                lVar15 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (**(code **)*local_5c8)(local_5c8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    (**(code **)(*local_5c8 + 8))(local_5c8,1);
                  }
                }
              }
              (**(code **)(*local_5b8 + 0x68))(local_5b8,&local_560,1);
              pvVar7 = local_560;
              lVar15 = (longlong)local_558;
              local_5a8 = (void *)0x0;
              local_5a0 = local_558;
              if (local_558 == 0) {
                local_59c = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_5a8,local_558,0);
                _guard_xfg_dispatch_icall_nop(local_5a8,pvVar7,lVar15 * 2);
              }
              iVar22 = local_5d8[0];
              lVar15 = param_1[0x15];
              local_600 = FString::FString(local_490,&local_5a8);
              local_608 = (longlong *)CONCAT71(local_608._1_7_,1);
              FUN_1421e1a00(lVar15,&local_538,local_5c0,iVar22);
              if (local_5a8 != (void *)0x0) {
                FMemory::Free();
              }
              pvVar7 = local_560;
              puVar12 = local_598;
              if (local_52c == '\0') {
                lVar15 = (longlong)local_558;
                local_570 = (undefined2 *)0x0;
                local_568 = local_558;
                if (local_558 == 0) {
                  local_564 = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_570,local_558,0);
                  puVar20 = local_570;
                  _guard_xfg_dispatch_icall_nop(local_570,pvVar7,lVar15 * 2);
                }
                puVar17 = &DAT_143f3eda8;
                if (local_568 != 0) {
                  puVar17 = puVar20;
                }
                if (*(int *)(puVar12 + 0x30) == 0) {
                  puVar16 = &DAT_143f3eda8;
                }
                else {
                  puVar16 = *(undefined2 **)(puVar12 + 0x2c);
                }
                iVar22 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar17);
                if (puVar20 != (undefined2 *)0x0) {
                  FMemory::Free(puVar20);
                }
                if (iVar22 != 0) goto LAB_1404e42d3;
                bVar23 = true;
                local_5d8[0] = (int)(local_530 + 7 + (local_530 + 7 >> 0x1f & 7U)) >> 3;
                if (0 < local_5d8[0]) {
                  bVar6 = false;
                  local_5c0 = local_538;
                }
              }
              else {
LAB_1404e42d3:
                bVar23 = false;
              }
              if (local_560 != (void *)0x0) {
                FMemory::Free();
              }
              if (bVar23) {
                lVar15 = param_1[0x20];
                local_588 = 0;
                uVar13 = GetTransientPackage();
                lVar18 = local_588;
                local_580 = 0;
                if (local_588 == 0) {
                  FUN_1417846f0(uVar13,
                                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                               );
                }
                local_5e8 = 0;
                local_5f0 = 0;
                local_5f8 = local_5f8 & 0xffffff00;
                local_600 = 0;
                local_608 = (longlong *)((ulonglong)local_608 & 0xffffffff00000000);
                plVar14 = (longlong *)FUN_1417985e0(lVar15,uVar13,lVar18,0);
                if (puVar12 != (undefined2 *)0x0) {
                  (**(code **)(*plVar14 + 0x330))
                            (plVar14,*(undefined4 *)(puVar12 + 0x36),*(undefined4 *)(puVar12 + 0x34)
                            );
                }
                plVar11 = local_5b8;
                lVar15 = *plVar14;
                uVar13 = FURL::FURL(local_500,0);
                local_5f0 = local_5f0 & 0xffffffff00000000;
                local_5f8 = 0;
                local_600 = CONCAT44(local_600._4_4_,3);
                local_608 = plVar11;
                (**(code **)(lVar15 + 0x310))(plVar14,param_1,param_1[0xac],uVar13);
                plVar11 = local_4b8;
                iVar22 = local_4b0;
                if (local_4a8 != 0) {
                  FMemory::Free();
                  plVar11 = local_4b8;
                  iVar22 = local_4b0;
                }
                for (; iVar22 != 0; iVar22 = iVar22 + -1) {
                  if (*plVar11 != 0) {
                    FMemory::Free();
                  }
                  plVar11 = plVar11 + 2;
                }
                if (local_4b8 != (longlong *)0x0) {
                  FMemory::Free(local_4b8);
                }
                if (local_4c8 != 0) {
                  FMemory::Free();
                }
                if (local_4d8 != 0) {
                  FMemory::Free();
                }
                if (local_4f0 != 0) {
                  FMemory::Free();
                }
                if (local_500[0] != 0) {
                  FMemory::Free();
                }
                if (plVar14[0x27] != 0) {
                  local_528 = 0;
                  local_520 = 0;
                  FUN_1421e1490(plVar14[0x27],&local_528);
                }
                (**(code **)(*(longlong *)param_1[0x2d] + 8))((longlong *)param_1[0x2d],plVar14);
                FUN_1425b2240(param_1,plVar14);
              }
              plVar11 = plStack_590;
              if (plStack_590 != (longlong *)0x0) {
                LOCK();
                plVar3 = plStack_590 + 1;
                lVar15 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (**(code **)*plStack_590)(plStack_590);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar22 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    (**(code **)(*plStack_590 + 8))(plStack_590,1);
                  }
                }
              }
              if ((plVar14 != (longlong *)0x0) && (!bVar6)) goto LAB_1404e44a8;
            }
          }
        }
      }
    }
    else {
LAB_1404e44a8:
      (**(code **)(*plVar14 + 0x350))(plVar14,local_5c0,local_5d8[0]);
    }
LAB_1404e44c1:
    lVar15 = param_1[0xac];
    plVar11 = local_578;
  } while( true );
}



// FUNCTION 1404e45a0 FUN_1404e45a0 body=30 status=ok
// SIG undefined FUN_1404e45a0(void)

undefined8 FUN_1404e45a0(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 1404e45c0 FUN_1404e45c0 body=123 status=ok
// SIG undefined FUN_1404e45c0(void)

wchar_t * FUN_1404e45c0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"NetDriverAlreadyExists";
  case 1:
    return L"NetDriverCreateFailure";
  case 2:
    return L"NetDriverListenFailure";
  case 3:
    return L"ConnectionLost";
  case 4:
    return L"ConnectionTimeout";
  case 5:
    return L"FailureReceived";
  case 6:
    return L"OutdatedClient";
  case 7:
    return L"OutdatedServer";
  case 8:
    return L"PendingConnectionFailure";
  case 9:
    return L"NetGuidMismatch";
  case 10:
    return L"NetChecksumMismatch";
  default:
    return L"Unknown ENetworkFailure error occurred.";
  }
}



// FUNCTION 1404e4670 FUN_1404e4670 body=98 status=ok
// SIG undefined FUN_1404e4670(void)

wchar_t * FUN_1404e4670(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"Success";
  case 1:
    return L"Failed_NoFile";
  case 2:
    return L"Failed_Corrupt";
  case 3:
    return L"Failed_FreeSpace";
  case 4:
    return L"Failed_Version";
  case 5:
    return L"Failed_Open";
  case 6:
    return L"Failed_Delete";
  case 7:
    return L"Failed_Unknown";
  default:
    return L"";
  }
}



// FUNCTION 1404e4700 FUN_1404e4700 body=44 status=ok
// SIG undefined FUN_1404e4700(void)

undefined8 FUN_1404e4700(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404e4670(*(undefined4 *)(param_1 + 0x1c));
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskFileCacheCleanCache Result:%s",uVar1);
  return param_2;
}



// FUNCTION 1404e4730 FUN_1404e4730 body=112 status=ok
// SIG undefined FUN_1404e4730(void)

undefined8 FUN_1404e4730(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_1404cf470(param_1,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_1404e4670(*(undefined4 *)(param_1 + 0x1c));
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskFileCacheReadFile Result:%ls (%ls)",uVar2,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404e47a0 FUN_1404e47a0 body=112 status=ok
// SIG undefined FUN_1404e47a0(void)

undefined8 FUN_1404e47a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_1404cf5f0(param_1,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_1404e4670(*(undefined4 *)(param_1 + 0x1c));
  FString::PrintfImpl(param_2,L"FOnlineAsyncTaskFileCacheWriteFile Result:%ls (%ls)",uVar2,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404e4810 ToString body=220 status=ok
// SIG undefined ToString(void)

longlong * FUniqueNetIdWrapper::ToString(longlong param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong local_28 [4];
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (cVar3 != '\0') {
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                         (*(longlong **)(param_1 + 8),local_28 + 2);
      bVar2 = true;
      bVar1 = false;
      goto LAB_1404e4890;
    }
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"INVALID",0x10);
  plVar4 = local_28;
  bVar2 = false;
  bVar1 = true;
LAB_1404e4890:
  *param_2 = 0;
  *param_2 = *plVar4;
  *plVar4 = 0;
  *(int *)(param_2 + 1) = (int)plVar4[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  if (bVar1) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1404e48f0 FUN_1404e48f0 body=8 status=ok
// SIG undefined FUN_1404e48f0(void)

longlong FUN_1404e48f0(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0xa0);
}



// FUNCTION 1404e4900 FUN_1404e4900 body=167 status=ok
// SIG undefined FUN_1404e4900(void)

void FUN_1404e4900(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  bVar3 = false;
  *(int *)(lVar1 + 0x4c) = *(int *)(lVar1 + 0x4c) + 1;
  iVar6 = *(int *)(lVar1 + 0x4c);
  iVar5 = *(int *)(lVar1 + 0x40) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *(longlong *)(lVar1 + 0x38)) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + *(longlong *)(lVar1 + 0x38)), plVar2 == (longlong *)0x0))
      {
LAB_1404e4962:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1 + 0x38);
        if (cVar4 == '\0') goto LAB_1404e4962;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(lVar1 + 0x4c);
  }
  *(int *)(lVar1 + 0x4c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x38,0);
    return;
  }
  return;
}



// FUNCTION 1404e49b0 FUN_1404e49b0 body=184 status=ok
// SIG undefined FUN_1404e49b0(void)

void FUN_1404e49b0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  bVar4 = false;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  iVar7 = *(int *)(lVar2 + 0x1c);
  iVar6 = *(int *)(lVar2 + 0x10) + -1;
  lVar9 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar8 = lVar9 << 4;
    bVar4 = false;
    do {
      if ((*(int *)(lVar8 + 8 + *(longlong *)(lVar2 + 8)) == 0) ||
         (plVar3 = *(longlong **)(lVar8 + *(longlong *)(lVar2 + 8)), plVar3 == (longlong *)0x0)) {
LAB_1404e4a1e:
        bVar4 = true;
      }
      else {
        cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1 + 0x20,uVar1,param_1 + 0x48);
        if (cVar5 == '\0') goto LAB_1404e4a1e;
      }
      lVar8 = lVar8 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    iVar7 = *(int *)(lVar2 + 0x1c);
  }
  *(int *)(lVar2 + 0x1c) = iVar7 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 8,0);
    return;
  }
  return;
}



// FUNCTION 1404e4a70 FUN_1404e4a70 body=184 status=ok
// SIG undefined FUN_1404e4a70(void)

void FUN_1404e4a70(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  bVar4 = false;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
  iVar7 = *(int *)(lVar2 + 0x34);
  iVar6 = *(int *)(lVar2 + 0x28) + -1;
  lVar9 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar8 = lVar9 << 4;
    bVar4 = false;
    do {
      if ((*(int *)(lVar8 + 8 + *(longlong *)(lVar2 + 0x20)) == 0) ||
         (plVar3 = *(longlong **)(lVar8 + *(longlong *)(lVar2 + 0x20)), plVar3 == (longlong *)0x0))
      {
LAB_1404e4ade:
        bVar4 = true;
      }
      else {
        cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1 + 0x20,uVar1,param_1 + 0x48);
        if (cVar5 == '\0') goto LAB_1404e4ade;
      }
      lVar8 = lVar8 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    iVar7 = *(int *)(lVar2 + 0x34);
  }
  *(int *)(lVar2 + 0x34) = iVar7 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x20,0);
    return;
  }
  return;
}



// FUNCTION 1404e4b50 FUN_1404e4b50 body=196 status=ok
// SIG undefined FUN_1404e4b50(void)

void FUN_1404e4b50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x144);
  iVar5 = *(int *)(param_1 + 0x138) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x130);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e4bc6:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e4bc6;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x144);
  }
  *(int *)(param_1 + 0x144) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x130),0);
    return;
  }
  return;
}



// FUNCTION 1404e4c20 FUN_1404e4c20 body=196 status=ok
// SIG undefined FUN_1404e4c20(void)

void FUN_1404e4c20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x15c);
  iVar5 = *(int *)(param_1 + 0x150) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x148);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e4c96:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e4c96;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x15c);
  }
  *(int *)(param_1 + 0x15c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x148),0);
    return;
  }
  return;
}



// FUNCTION 1404e4d40 FUN_1404e4d40 body=238 status=ok
// SIG undefined FUN_1404e4d40(void)

void FUN_1404e4d40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  iVar6 = *(int *)(param_1 + 0xfc);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0xf0) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar8 = lVar7 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xe8);
      if ((*(int *)(lVar8 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e4dd2:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5,param_6);
        if (cVar4 == '\0') goto LAB_1404e4dd2;
      }
      lVar8 = lVar8 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar6 = *(int *)(param_1 + 0xfc);
  }
  *(int *)(param_1 + 0xfc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xe8),0);
    return;
  }
  return;
}



// FUNCTION 1404e4e50 FUN_1404e4e50 body=202 status=ok
// SIG undefined FUN_1404e4e50(void)

void FUN_1404e4e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  iVar6 = *(int *)(param_1 + 0x114);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x108) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar8 = lVar7 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x100);
      if ((*(int *)(lVar8 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e4ec8:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e4ec8;
      }
      lVar8 = lVar8 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar6 = *(int *)(param_1 + 0x114);
  }
  *(int *)(param_1 + 0x114) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x100),0);
    return;
  }
  return;
}



// FUNCTION 1404e4f20 FUN_1404e4f20 body=224 status=ok
// SIG undefined FUN_1404e4f20(void)

void FUN_1404e4f20(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xe4);
  iVar5 = *(int *)(param_1 + 0xd8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xd0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e4fad:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4,param_5);
        if (cVar4 == '\0') goto LAB_1404e4fad;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xe4);
  }
  *(int *)(param_1 + 0xe4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xd0),0);
    return;
  }
  return;
}



// FUNCTION 1404e5000 FUN_1404e5000 body=196 status=ok
// SIG undefined FUN_1404e5000(void)

void FUN_1404e5000(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xa8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0xa0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e5076:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e5076;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xb4);
  }
  *(int *)(param_1 + 0xb4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xa0),0);
    return;
  }
  return;
}



// FUNCTION 1404e50d0 FUN_1404e50d0 body=176 status=ok
// SIG undefined FUN_1404e50d0(void)

void FUN_1404e50d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  iVar6 = *(int *)(param_1 + 0x3c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x30) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e5137:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1404e5137;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x3c);
  }
  *(int *)(param_1 + 0x3c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x28),0);
    return;
  }
  return;
}



// FUNCTION 1404e5180 FUN_1404e5180 body=504 status=ok
// SIG undefined FUN_1404e5180(void)

void FUN_1404e5180(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  
  iVar9 = (int)param_3[1];
  lVar12 = *param_3;
  local_68 = 0;
  local_60 = iVar9;
  if (iVar9 == 0) {
    local_5c = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(&local_68,iVar9);
    lVar11 = local_68 - lVar12;
    do {
      puVar8 = (undefined8 *)(lVar11 + lVar12);
      FUN_1404bdf40(puVar8);
      *puVar8 = &PTR_FUN_143f74340;
      *(undefined4 *)(lVar11 + 0x40 + lVar12) = *(undefined4 *)(lVar12 + 0x40);
      lVar12 = lVar12 + 0x48;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar5 = local_60;
  bVar4 = false;
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
  iVar9 = *(int *)(param_1 + 0x18c);
  iVar7 = *(int *)(param_1 + 0x180) + -1;
  lVar12 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar11 = lVar12 << 4;
    bVar4 = false;
    do {
      lVar10 = local_68;
      lVar2 = *(longlong *)(param_1 + 0x178);
      if ((*(int *)(lVar11 + 8 + lVar2) == 0) ||
         (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_1404e52f4:
        bVar4 = true;
      }
      else {
        local_58 = (undefined8 *)0x0;
        local_50 = iVar5;
        if (iVar5 == 0) {
          local_4c = 0;
        }
        else {
          TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                    (&local_58,iVar5,0);
          puVar8 = local_58;
          iVar9 = iVar5;
          do {
            FUN_1404bdf40(puVar8,lVar10);
            *puVar8 = &PTR_FUN_143f74340;
            puVar1 = (undefined4 *)(lVar10 + 0x40);
            lVar10 = lVar10 + 0x48;
            *(undefined4 *)(puVar8 + 8) = *puVar1;
            puVar8 = puVar8 + 9;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        cVar6 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2,&local_58);
        if (cVar6 == '\0') goto LAB_1404e52f4;
      }
      lVar11 = lVar11 + -0x10;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
    iVar9 = *(int *)(param_1 + 0x18c);
  }
  *(int *)(param_1 + 0x18c) = iVar9 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x178),0);
  }
  FUN_1404bed10(&local_68);
  FUN_1404bed10(param_3);
  return;
}



// FUNCTION 1404e5380 FUN_1404e5380 body=196 status=ok
// SIG undefined FUN_1404e5380(void)

void FUN_1404e5380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x174);
  iVar5 = *(int *)(param_1 + 0x168) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x160);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e53f6:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e53f6;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x174);
  }
  *(int *)(param_1 + 0x174) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x160),0);
    return;
  }
  return;
}



// FUNCTION 1404e5450 FUN_1404e5450 body=164 status=ok
// SIG undefined FUN_1404e5450(void)

void FUN_1404e5450(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar6 = *(int *)(param_1 + 0x24);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x18) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e54b0:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_1404e54b0;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x24);
  }
  *(int *)(param_1 + 0x24) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x10),0);
    return;
  }
  return;
}



// FUNCTION 1404e5500 FUN_1404e5500 body=202 status=ok
// SIG undefined FUN_1404e5500(void)

void FUN_1404e5500(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  iVar6 = *(int *)(param_1 + 300);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x120) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar8 = lVar7 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x118);
      if ((*(int *)(lVar8 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e5578:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e5578;
      }
      lVar8 = lVar8 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar6 = *(int *)(param_1 + 300);
  }
  *(int *)(param_1 + 300) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x118),0);
    return;
  }
  return;
}



// FUNCTION 1404e55d0 FUN_1404e55d0 body=197 status=ok
// SIG undefined FUN_1404e55d0(void)

void FUN_1404e55d0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x234);
  iVar5 = *(int *)(param_1 + 0x228) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x220);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e5647:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e5647;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x234);
  }
  *(int *)(param_1 + 0x234) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x220),0);
    return;
  }
  return;
}



// FUNCTION 1404e56a0 FUN_1404e56a0 body=188 status=ok
// SIG undefined FUN_1404e56a0(void)

void FUN_1404e56a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x1d4);
  iVar5 = *(int *)(param_1 + 0x1c8) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1c0);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1404e5713:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
        if (cVar4 == '\0') goto LAB_1404e5713;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1d4);
  }
  *(int *)(param_1 + 0x1d4) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1c0),0);
    return;
  }
  return;
}



// FUNCTION 1404e57a0 FUN_1404e57a0 body=197 status=ok
// SIG undefined FUN_1404e57a0(void)

void FUN_1404e57a0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

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
LAB_1404e5817:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e5817;
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



// FUNCTION 1404e5870 FUN_1404e5870 body=197 status=ok
// SIG undefined FUN_1404e5870(void)

void FUN_1404e5870(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

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
LAB_1404e58e7:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_1404e58e7;
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



// FUNCTION 1404e5940 FUN_1404e5940 body=148 status=ok
// SIG undefined FUN_1404e5940(void)

undefined8 FUN_1404e5940(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_18;
  longlong *local_10;
  
  uVar6 = 0;
  FUN_1404cf2e0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    uVar6 = (**(code **)(*local_18 + 200))();
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 1404e59e0 FUN_1404e59e0 body=210 status=ok
// SIG undefined FUN_1404e59e0(void)

void FUN_1404e59e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x80) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x78), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x78),0,0);
      *(undefined8 *)(param_1 + 0x78) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if ((*(int *)(param_1 + 0x90) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x88), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x88) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x88),0,0);
      *(undefined8 *)(param_1 + 0x88) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if ((*(int *)(param_1 + 0xa0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x98), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x98) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x98),0,0);
      *(undefined8 *)(param_1 + 0x98) = uVar2;
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1404e5ac0 FUN_1404e5ac0 body=535 status=ok
// SIG undefined FUN_1404e5ac0(void)

void FUN_1404e5ac0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1404e59e0();
  if ((*(int *)(param_1 + 0xf0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xe8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0xe8),0,0);
      *(undefined8 *)(param_1 + 0xe8) = uVar2;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if ((*(int *)(param_1 + 0x100) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xf8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0xf8),0,0);
      *(undefined8 *)(param_1 + 0xf8) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  if ((*(int *)(param_1 + 0x120) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x118) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x118),0,0);
      *(undefined8 *)(param_1 + 0x118) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  if ((*(int *)(param_1 + 0x130) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x128), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x128) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x128),0,0);
      *(undefined8 *)(param_1 + 0x128) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  if ((*(int *)(param_1 + 0x140) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x138), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x138) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x138),0,0);
      *(undefined8 *)(param_1 + 0x138) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  if ((*(int *)(param_1 + 0x150) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x148), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x148) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x148),0,0);
      *(undefined8 *)(param_1 + 0x148) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  if ((*(int *)(param_1 + 0x160) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x158), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x158) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x158),0,0);
      *(undefined8 *)(param_1 + 0x158) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  if ((*(int *)(param_1 + 0x170) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x168) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x168),0,0);
      *(undefined8 *)(param_1 + 0x168) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  return;
}



// FUNCTION 1404e5ce0 FUN_1404e5ce0 body=346 status=ok
// SIG undefined FUN_1404e5ce0(void)

void FUN_1404e5ce0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_1404e59e0();
  if ((*(int *)(param_1 + 0xe8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xe0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0xe0),0,0);
      *(undefined8 *)(param_1 + 0xe0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  if ((*(int *)(param_1 + 0xf8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xf0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0xf0),0,0);
      *(undefined8 *)(param_1 + 0xf0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if ((*(int *)(param_1 + 0x128) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x120), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x120) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x120),0,0);
      *(undefined8 *)(param_1 + 0x120) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if ((*(int *)(param_1 + 0x138) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x130), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x130) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x130),0,0);
      *(undefined8 *)(param_1 + 0x130) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  if ((*(int *)(param_1 + 0x148) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x140), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x140) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x140),0,0);
      *(undefined8 *)(param_1 + 0x140) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  return;
}



// FUNCTION 1404e5e40 FUN_1404e5e40 body=504 status=ok
// SIG undefined FUN_1404e5e40(void)

undefined1
FUN_1404e5e40(undefined8 param_1,undefined8 param_2,undefined1 param_3,longlong param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_1404d0fe0(param_1,&local_38,param_2,param_3);
  if (local_38 != 0) {
    FUN_1404d13e0(&local_48,param_2);
    plVar3 = local_40;
    if (local_48 != (longlong *)0x0) {
      local_28 = local_38;
      plStack_20 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      lVar5 = *local_48;
      uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_4 + 8,local_18);
      uVar6 = (**(code **)(lVar5 + 0x98))(local_48,&local_28,uVar7,param_5);
      plVar3 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_20)(plStack_20);
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
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_10 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)local_10 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      goto LAB_1404e5fe0;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  uVar6 = 0;
LAB_1404e5fe0:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1404e6040 FUN_1404e6040 body=230 status=ok
// SIG undefined FUN_1404e6040(void)

void FUN_1404e6040(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_1404d0b50(&local_28,param_2,*(undefined8 *)(param_1 + 0x30));
  if (local_28 != (longlong *)0x0) {
    lVar5 = *local_28;
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_4 + 8,local_18);
    (**(code **)(lVar5 + 0x2f8))(local_28,param_3,uVar6);
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 1404e6130 FUN_1404e6130 body=359 status=ok
// SIG undefined FUN_1404e6130(void)

void FUN_1404e6130(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  plVar8 = (longlong *)0x0;
  plVar6 = (longlong *)FUN_1404b02e0(0);
  bVar9 = plVar6 == (longlong *)0x0;
  if (bVar9) {
    puVar7 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x68))(plVar6,local_40);
    plVar8 = (longlong *)*puVar7;
  }
  plVar6 = (longlong *)puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  plVar3 = plStack_48;
  if (bVar9) {
    if (plStack_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_48 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_48)(plStack_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_48 + 8))(plStack_48,1);
        }
      }
    }
  }
  if ((!bVar9) && (local_38 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8,param_2,param_3,param_4,param_5);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 1404e62a0 FUN_1404e62a0 body=333 status=ok
// SIG undefined FUN_1404e62a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404e62a0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  pfVar6 = (float *)(param_1 + 0x280);
  if (((*(float *)(param_1 + 0x1f8) != *pfVar6) ||
      (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
     (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
    local_28 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar7._12_4_ = 0;
    auVar7._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar1 = (float)DAT_146852ef0;
    fVar2 = DAT_146852ef0._4_4_;
    fVar3 = DAT_146852ef0._8_4_;
    auVar7 = divps(auVar7,_DAT_146852ef0);
    fVar9 = (float)local_28 - (float)(int)auVar7._0_4_ * fVar1;
    fVar10 = (float)((ulonglong)local_28 >> 0x20) - (float)(int)auVar7._4_4_ * fVar2;
    fVar11 = *(float *)(param_1 + 0x200) - (float)(int)auVar7._8_4_ * fVar3;
    fVar9 = (float)(((uint)(fVar1 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                   (uint)(fVar1 + fVar9));
    fVar10 = (float)(((uint)(fVar2 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar2 + fVar10));
    fVar11 = (float)(((uint)(fVar3 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar3 + fVar11));
    uVar8 = ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(fRam0000000146852ee8 < fVar11) ^
            (uint)fVar11;
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar8);
    *(ulonglong *)pfVar6 =
         CONCAT44(((uint)(fVar10 - fVar2) ^ (uint)fVar10) & -(uint)(fRam0000000146852ee4 < fVar10) ^
                  (uint)fVar10,
                  ((uint)(fVar9 - fVar1) ^ (uint)fVar9) & -(uint)(_DAT_146852ee0 < fVar9) ^
                  (uint)fVar9);
    *(uint *)(param_1 + 0x288) = uVar8;
    puVar5 = (undefined8 *)FRotator::Quaternion(pfVar6,local_18);
    uVar4 = puVar5[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar5;
    *(undefined8 *)(param_1 + 0x278) = uVar4;
  }
  local_28 = *(undefined8 *)(param_1 + 0x270);
  uStack_20 = *(undefined8 *)(param_1 + 0x278);
  FUN_14239b520(param_1,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),param_2,
                &local_28,param_3);
  return;
}



// FUNCTION 1404e63f0 FUN_1404e63f0 body=140 status=ok
// SIG undefined FUN_1404e63f0(void)

byte FUN_1404e63f0(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  
  if (0 < (int)param_1[0x55]) {
    lVar2 = *(longlong *)(param_1[0x54] + -8 + (longlong)(int)param_1[0x55] * 8);
    *(byte *)(lVar2 + 0x1b8) = *(byte *)(lVar2 + 0x1b8) | 2;
    *(undefined4 *)(lVar2 + 0x10) = 3;
    *(undefined4 *)(lVar2 + 0x74) = 0xffffffff;
    return *(byte *)((longlong)param_1 + 0x24c) >> 1 & 1;
  }
  if ((DAT_146531d70 != 1) || (bVar1 = *(byte *)((longlong)param_1 + 0x24c), (bVar1 & 2) == 0)) {
    cVar3 = (**(code **)(*param_1 + 0x480))();
    *(byte *)((longlong)param_1 + 0x24c) =
         *(byte *)((longlong)param_1 + 0x24c) ^
         (cVar3 * '\x02' ^ *(byte *)((longlong)param_1 + 0x24c)) & 2;
    bVar1 = *(byte *)((longlong)param_1 + 0x24c);
  }
  return bVar1 >> 1 & 1;
}



// FUNCTION 1404e6480 FUN_1404e6480 body=208 status=ok
// SIG undefined FUN_1404e6480(void)

void FUN_1404e6480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,char param_6,char param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404d0b50(&local_18,param_2,*(undefined8 *)(param_1 + 0x30));
  if (local_18 != (longlong *)0x0) {
    lVar6 = (**(code **)(*local_18 + 0x2c8))(local_18,param_3);
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x15) = param_5;
      *(undefined1 *)(lVar6 + 0x10) = param_4;
      if ((param_6 == '\0') || (param_7 != '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(char *)(lVar6 + 0x18) = param_7;
      *(undefined1 *)(lVar6 + 0x17) = uVar5;
      (**(code **)(*local_18 + 0x80))(local_18,param_3,lVar6,1);
    }
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
  return;
}



// FUNCTION 1404e6550 FUN_1404e6550 body=238 status=ok
// SIG undefined FUN_1404e6550(void)

void FUN_1404e6550(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (local_res10[0] = param_2, local_res18[0] = param_3, local_res20[0] = param_4,
     cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar7 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if ((*plVar7 != 0) && (lVar5 = FUN_1425bd330(*plVar7,6), lVar5 != 0)) {
        lVar6 = FUN_1404e6fc0();
        iVar2 = *(int *)(lVar6 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar2) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar2 * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_1404bc330(lVar5,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0xc,local_res10,local_res18
                        ,local_res20);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404e6640 FUN_1404e6640 body=278 status=ok
// SIG undefined FUN_1404e6640(void)

void FUN_1404e6640(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if ((*(longlong **)(param_1 + 0x48) != (longlong *)0x0) &&
     (local_res18[0] = param_3, local_res20[0] = param_4,
     cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x390))(), cVar4 != '\0')) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x98);
    plVar1 = plVar7 + *(int *)(*(longlong *)(param_1 + 0x48) + 0xa0);
    if (plVar7 != plVar1) {
      while ((lVar5 = *plVar7, lVar5 == 0 ||
             (cVar4 = FUniqueNetIdWrapper::operator==(lVar5 + 0x158,param_2), cVar4 == '\0'))) {
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar1) {
          return;
        }
      }
      lVar5 = FUN_1425bd330(lVar5,6);
      if (lVar5 != 0) {
        lVar6 = FUN_1404e6fc0();
        iVar2 = *(int *)(lVar6 + 0x90);
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar2) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)iVar2 * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_1404bc330(lVar5,CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),0xc,local_res18,local_res20
                        ,&stack0x00000028);
        }
      }
    }
  }
  return;
}



// FUNCTION 1404e67e0 FUN_1404e67e0 body=84 status=ok
// SIG undefined FUN_1404e67e0(void)

ulonglong FUN_1404e67e0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  
  if (0 < param_2) {
    iVar1 = FUN_1404cfa50();
    iVar2 = FUN_1404cfb00(param_1);
    uVar3 = iVar2 + param_2 + iVar1;
    in_RAX = (ulonglong)uVar3;
    if ((int)uVar3 <= *(int *)(param_1 + 0xcc)) {
      return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1404e6840 FUN_1404e6840 body=454 status=ok
// SIG undefined FUN_1404e6840(void)

undefined8 FUN_1404e6840(longlong param_1,short *param_2,char param_3)

{
  int iVar1;
  wint_t wVar2;
  wint_t wVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  wint_t *pwVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  
  if (param_3 != '\0') {
    return 1;
  }
  lVar8 = 0;
  local_48 = 0;
  local_40 = 0;
  lVar10 = -1;
  if ((param_2 != (short *)0x0) && (lVar6 = lVar10, *param_2 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_40 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar5 * 2);
  }
  FUN_141672300(&local_38,&local_48,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  pwVar7 = &DAT_143f76de8;
  puVar12 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar12 = local_38;
  }
  do {
    wVar2 = *(wint_t *)((longlong)(puVar12 + -0xa1fbb6f4) + (longlong)pwVar7);
    if ((wVar2 == 0) && (*pwVar7 == 0)) goto LAB_1404e6945;
    if (wVar2 != *pwVar7) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*pwVar7);
      if (wVar2 != wVar3) {
        if (wVar2 == wVar3) {
LAB_1404e6945:
          local_48 = 0;
          uVar11 = 0;
          local_40 = local_40 & 0xffffffff;
          uVar5 = 0;
          if ((param_2 != (short *)0x0) && (uVar5 = uVar11, *param_2 != 0)) {
            do {
              lVar10 = lVar10 + 1;
            } while (param_2[lVar10] != 0);
            uVar9 = (int)lVar10 + 1;
            local_40 = (ulonglong)uVar9;
            uVar5 = uVar9;
            uVar11 = 0;
            if (0 < (int)uVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              uVar5 = (uint)local_40;
              uVar11 = local_40._4_4_;
            }
            lVar8 = local_48;
            FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar9 * 2);
          }
          iVar1 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar1 + 1;
          if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
          }
          plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
          *plVar4 = lVar8;
          *(uint *)(plVar4 + 1) = uVar5;
          *(uint *)((longlong)plVar4 + 0xc) = uVar11;
        }
        if (local_38 == (undefined2 *)0x0) {
          return 1;
        }
        FMemory::Free();
        return 1;
      }
    }
    pwVar7 = pwVar7 + 1;
  } while( true );
}



// FUNCTION 1404e6a20 FUN_1404e6a20 body=247 status=ok
// SIG undefined FUN_1404e6a20(void)

void FUN_1404e6a20(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)operator_new(0xb0);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    FUN_1404bdac0(puVar6,param_1);
    *puVar6 = &PTR_FUN_143f76d10;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(puVar6 + 6) = param_3;
    *(undefined4 *)(puVar6 + 4) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar3;
    *(undefined4 *)(puVar6 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar5;
    puVar6[7] = 0;
    iVar1 = *(int *)(param_4 + 1);
    _Src = (void *)*param_4;
    *(int *)(puVar6 + 8) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar6 + 0x44) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar6 + 7,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar6[7],_Src,(longlong)iVar1);
    }
    *(undefined4 *)(puVar6 + 9) = 0x4f46434d;
    *(undefined4 *)((longlong)puVar6 + 0x4c) = 1;
    FEngineVersion::FEngineVersion(puVar6 + 0xb);
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x94) = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    *(undefined4 *)(puVar6 + 0x15) = 0;
  }
  FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(param_1 + 0x50),puVar6);
  return;
}



// FUNCTION 1404e6b20 FUN_1404e6b20 body=162 status=ok
// SIG undefined FUN_1404e6b20(void)

longlong FUN_1404e6b20(void)

{
  if (DAT_1468530e0 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"OnlineEngineInterfaceImpl",&DAT_1468530e0,
                  FUN_140447710,0xe0,0x10000000,0,L"Engine",&LAB_1404e7980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UOnlineEngineInterface::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468530e0;
}



// FUNCTION 1404e6bf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSparseGridManager::GetPrivateStaticClass(void)

{
  if (DAT_1468530d0 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"OnlineBeaconHost",&DAT_1468530d0,FUN_140447710,
                  0x170,0x1000000c,0,L"Engine",&LAB_1404e7960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e6e20,&LAB_140447700,0);
  }
  return DAT_1468530d0;
}



// FUNCTION 1404e6ca0 FUN_1404e6ca0 body=162 status=ok
// SIG undefined FUN_1404e6ca0(void)

longlong FUN_1404e6ca0(void)

{
  if (DAT_146853110 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"OnlineSessionClient",&DAT_146853110,
                  FUN_140447710,0x198,0x10000000,0,L"Game",&LAB_1404e79c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UOnlineSession::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146853110;
}



// FUNCTION 1404e6d70 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UOnlinePIESettings::StaticClass(void)

{
  if (DAT_146853100 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"OnlinePIESettings",&DAT_146853100,FUN_140447710,
                  0x50,0x10000004,0,L"EditorPerProjectUserSettings",&LAB_1404e79a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDeveloperSettings::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146853100;
}



// FUNCTION 1404e6e20 FUN_1404e6e20 body=151 status=ok
// SIG undefined FUN_1404e6e20(void)

longlong FUN_1404e6e20(void)

{
  if (DAT_1468530a8 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"OnlineBeacon",&DAT_1468530a8,FUN_140447710,200,
                  0x1000000c,0,L"Engine",&LAB_1404e7920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468530a8;
}



// FUNCTION 1404e6ec0 FUN_1404e6ec0 body=53 status=ok
// SIG undefined FUN_1404e6ec0(void)

void FUN_1404e6ec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_143f7afe0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1404e6f10 FUN_1404e6f10 body=162 status=ok
// SIG undefined FUN_1404e6f10(void)

longlong FUN_1404e6f10(void)

{
  if (DAT_1468530c0 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"OnlineBeaconClient",&DAT_1468530c0,FUN_140447710
                  ,0x198,0x1000000c,0,L"Engine",&LAB_1404e7940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e6e20,&LAB_140447700,0);
  }
  return DAT_1468530c0;
}



// FUNCTION 1404e6fc0 FUN_1404e6fc0 body=162 status=ok
// SIG undefined FUN_1404e6fc0(void)

longlong FUN_1404e6fc0(void)

{
  if (DAT_146853028 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"BeaconChannel",&DAT_146853028,FUN_140447710,0x70
                  ,0x10000008,0,L"Engine",FUN_1404e7790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UChannel::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146853028;
}



// FUNCTION 1404e7070 FUN_1404e7070 body=47 status=ok
// SIG undefined FUN_1404e7070(void)

longlong FUN_1404e7070(void)

{
  if (DAT_146853118 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146853118,&PTR_s__Script_OnlineSubsystemUtils_143f7b0f8);
  }
  return DAT_146853118;
}



// FUNCTION 1404e70b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong ALandscapeStreamingProxy::StaticClass(void)

{
  if (DAT_146853130 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"VoipListenerSynthComponent",&DAT_146853130,
                  FUN_1404e7f70,0x660,0x10000000,0,L"Engine",FUN_1404e79e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1404e7f60,&LAB_140447700,0);
  }
  return DAT_146853130;
}



// FUNCTION 1404e7160 FUN_1404e7160 body=162 status=ok
// SIG undefined FUN_1404e7160(void)

longlong FUN_1404e7160(void)

{
  if (DAT_146853038 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"DownloadableContentData",&DAT_146853038,
                  FUN_140447710,0x78,0x10000000,0,L"Engine",FUN_1404e77c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146853038;
}



// FUNCTION 1404e7210 FUN_1404e7210 body=47 status=ok
// SIG undefined FUN_1404e7210(void)

longlong FUN_1404e7210(void)

{
  if (DAT_146853128 == 0) {
    FUN_141786440(&DAT_146853128,&PTR_StaticClass_143f78ca0);
  }
  return DAT_146853128;
}



// FUNCTION 1404e7240 FUN_1404e7240 body=47 status=ok
// SIG undefined FUN_1404e7240(void)

longlong FUN_1404e7240(void)

{
  if (DAT_146853120 == 0) {
    FUN_141786a30(&DAT_146853120,&PTR_FUN_1461fc5c0);
  }
  return DAT_146853120;
}



// FUNCTION 1404e7290 FUN_1404e7290 body=162 status=ok
// SIG undefined FUN_1404e7290(void)

longlong FUN_1404e7290(void)

{
  if (DAT_146853048 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"DownloadableContentLicenseData",&DAT_146853048,
                  FUN_140447710,0x60,0x10000001,0,L"Engine",FUN_1404e7800,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146853048;
}



// FUNCTION 1404e7350 FUN_1404e7350 body=162 status=ok
// SIG undefined FUN_1404e7350(void)

longlong FUN_1404e7350(void)

{
  if (DAT_146853058 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"DownloadablePackageData",&DAT_146853058,
                  FUN_140447710,0x70,0x10000000,0,L"Engine",FUN_1404e7840,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146853058;
}



// FUNCTION 1404e7430 FUN_1404e7430 body=162 status=ok
// SIG undefined FUN_1404e7430(void)

longlong FUN_1404e7430(void)

{
  if (DAT_146853068 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"DownloadablePackageLicenseItem",&DAT_146853068,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",InternalConstructor<UAIResource_Logic>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146853068;
}



// FUNCTION 1404e74f0 FUN_1404e74f0 body=162 status=ok
// SIG undefined FUN_1404e74f0(void)

longlong FUN_1404e74f0(void)

{
  if (DAT_146853098 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"IpNetDriver",&DAT_146853098,FUN_140447710,0x578,
                  0x1000000c,0,L"Engine",&LAB_1404e7900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2a30,thunk_FUN_1429c3150,
                  &LAB_140447700,0);
  }
  return DAT_146853098;
}



// FUNCTION 1404e75a0 FUN_1404e75a0 body=162 status=ok
// SIG undefined FUN_1404e75a0(void)

longlong FUN_1404e75a0(void)

{
  if (DAT_146853078 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"IpBeaconNetDriver",&DAT_146853078,FUN_140447710,
                  0x578,0x1000000c,0,L"Engine",&LAB_1404e78c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2a30,FUN_1404e74f0,&LAB_140447700
                  ,0);
  }
  return DAT_146853078;
}



// FUNCTION 1404e7650 FUN_1404e7650 body=47 status=ok
// SIG undefined FUN_1404e7650(void)

longlong FUN_1404e7650(void)

{
  if (DAT_146853090 == 0) {
    FUN_141786440(&DAT_146853090,&PTR_FUN_143f79b90);
  }
  return DAT_146853090;
}



// FUNCTION 1404e7690 FUN_1404e7690 body=162 status=ok
// SIG undefined FUN_1404e7690(void)

longlong FUN_1404e7690(void)

{
  if (DAT_146853088 == 0) {
    FUN_14171ccd0(L"/Script/OnlineSubsystemUtils",L"IpConnection",&DAT_146853088,FUN_140447710,
                  0x19a0,0x1000000c,0,L"Engine",&LAB_1404e78e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_1425b2600,thunk_FUN_1429c30a0,
                  &LAB_140447700,0);
  }
  return DAT_146853088;
}



// FUNCTION 1404e7760 FUN_1404e7760 body=47 status=ok
// SIG undefined FUN_1404e7760(void)

longlong FUN_1404e7760(void)

{
  if (DAT_1468530a0 == 0) {
    FUN_141786440(&DAT_1468530a0,&PTR_FUN_143f79cf0);
  }
  return DAT_1468530a0;
}



// FUNCTION 1404e7790 FUN_1404e7790 body=48 status=ok
// SIG undefined FUN_1404e7790(void)

void FUN_1404e7790(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UChannel::UChannel(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x44) = 6;
    *puVar1 = &PTR_FUN_143f7a148;
  }
  return;
}



// FUNCTION 1404e77c0 FUN_1404e77c0 body=64 status=ok
// SIG undefined FUN_1404e77c0(void)

void FUN_1404e77c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f7a448;
    FText::FText(puVar1 + 9);
    FText::FText(puVar1 + 0xc);
    return;
  }
  return;
}



// FUNCTION 1404e7800 FUN_1404e7800 body=61 status=ok
// SIG undefined FUN_1404e7800(void)

void FUN_1404e7800(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f7a6e8;
    puVar1[7] = 0;
    FText::FText(puVar1 + 8);
    return;
  }
  return;
}


