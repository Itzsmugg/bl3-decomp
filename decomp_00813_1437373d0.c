// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437373d0 FUN_1437373d0 body=55 status=ok
// SIG undefined FUN_1437373d0(void)

undefined8 FUN_1437373d0(undefined8 param_1,byte param_2)

{
  FUN_143702b50();
  if ((param_2 & 5) == 5) {
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143737410 FUN_143737410 body=120 status=ok
// SIG undefined FUN_143737410(void)

longlong FUN_143737410(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143737160();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x1d8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1d8);
    }
  }
  return param_1;
}



// FUNCTION 143737490 FUN_143737490 body=189 status=ok
// SIG undefined FUN_143737490(void)

void FUN_143737490(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = FUN_1437369c0(*param_2,param_2[1]);
  if (lVar4 != 0) {
    uVar2 = *param_2;
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x4000;
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    return;
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x20;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(uint *)(param_1 + 0x178) == (*(uint *)(param_1 + 0x17c) & 0x3fffffff)) {
    FUN_14370c460(&PTR_vftable_1467f0638,(longlong *)(param_1 + 0x170),0x18);
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x170) + (longlong)*(int *)(param_1 + 0x178) * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    uVar3 = param_2[2];
    puVar1[2] = uVar3;
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
  }
  *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
  return;
}



// FUNCTION 143737550 FUN_143737550 body=12 status=ok
// SIG undefined FUN_143737550(void)

void FUN_143737550(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  FUN_143737de0();
  return;
}



// FUNCTION 143737560 FUN_143737560 body=15 status=ok
// SIG undefined FUN_143737560(void)

void FUN_143737560(longlong param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  FUN_143737de0(param_1,param_2,0);
  return;
}



// FUNCTION 143737570 FUN_143737570 body=144 status=ok
// SIG undefined FUN_143737570(void)

void FUN_143737570(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x20000;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  iVar1 = *(int *)(param_1 + 0x1a8);
  uVar3 = *(uint *)(param_1 + 0x1ac) & 0x3fffffff;
  iVar5 = iVar1 + 1;
  if ((int)uVar3 < iVar5) {
    iVar2 = uVar3 * 2;
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,(longlong *)(param_1 + 0x1a0),iVar5,0x10);
  }
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1a0));
  *puVar4 = param_2;
  puVar4[1] = (longlong)param_3;
  return;
}



// FUNCTION 143737600 FUN_143737600 body=350 status=ok
// SIG undefined FUN_143737600(void)

longlong FUN_143737600(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,
                      undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)(param_1 + 0x1b0);
  if ((param_4 & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x1c0);
    *(int *)(param_1 + 0x1c0) = iVar3 + 1;
    iVar4 = *(int *)(param_1 + 0x1b8);
    uVar6 = *(uint *)(param_1 + 0x1bc) & 0x3fffffff;
    iVar1 = iVar4 + 1;
    if (((int)uVar6 < iVar1) && ((int)uVar6 < iVar1)) {
      iVar5 = iVar1;
      if (iVar1 < (int)(uVar6 * 2)) {
        iVar5 = uVar6 * 2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,plVar2,iVar5,0x1d8);
    }
    lVar7 = (longlong)iVar3 * 0x1d8;
    FUN_143732890(*plVar2 + lVar7 + 0x1d8,*plVar2 + lVar7,(longlong)(iVar4 - iVar3) * 0x1d8);
    if (*plVar2 + lVar7 != 0) {
      FUN_143737060();
    }
    *(int *)(param_1 + 0x1b8) = iVar1;
    lVar7 = *plVar2 + lVar7;
  }
  else {
    if (*(uint *)(param_1 + 0x1b8) == (*(uint *)(param_1 + 0x1bc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,plVar2,0x1d8);
    }
    if ((longlong)*(int *)(param_1 + 0x1b8) * 0x1d8 + *plVar2 != 0) {
      FUN_143737060();
    }
    lVar7 = (longlong)*(int *)(param_1 + 0x1b8) * 0x1d8 + *plVar2;
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x4000000;
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_143738110(lVar7,*(undefined8 *)(param_1 + 0x168));
  UMovieScenePropertyTrack::SetSectionToKey(lVar7,param_5);
  FUN_1437380c0(lVar7,param_2,param_3,param_4);
  return lVar7;
}



// FUNCTION 143737760 FUN_143737760 body=250 status=ok
// SIG undefined FUN_143737760(void)

void FUN_143737760(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x40000;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_1437452b0(&local_98,&DAT_145b8371c,param_3,0,0,0,0);
  iVar1 = *(int *)(param_1 + 0x198);
  uVar3 = *(uint *)(param_1 + 0x19c) & 0x3fffffff;
  iVar6 = iVar1 + 1;
  if ((int)uVar3 < iVar6) {
    iVar2 = uVar3 * 2;
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,(longlong *)(param_1 + 400),iVar6,0x10);
  }
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 400));
  uVar4 = FUN_14370c890(local_98,param_1 + 8);
  puVar5[1] = uVar4;
  *puVar5 = param_2;
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143737860 FUN_143737860 body=250 status=ok
// SIG undefined FUN_143737860(void)

void FUN_143737860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x40000;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_1437452b0(&local_98,&DAT_145b90540,param_3,0,0,0,0);
  iVar1 = *(int *)(param_1 + 0x198);
  uVar3 = *(uint *)(param_1 + 0x19c) & 0x3fffffff;
  iVar6 = iVar1 + 1;
  if ((int)uVar3 < iVar6) {
    iVar2 = uVar3 * 2;
    if (iVar6 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,(longlong *)(param_1 + 400),iVar6,0x10);
  }
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 400));
  uVar4 = FUN_14370c890(local_98,param_1 + 8);
  puVar5[1] = uVar4;
  *puVar5 = param_2;
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143737960 FUN_143737960 body=286 status=ok
// SIG undefined FUN_143737960(void)

undefined4 *
FUN_143737960(longlong *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_48 [64];
  
  *param_4 = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x800001) == 1) {
    if (DAT_146b82828 != '\0') {
      FUN_14373a730(local_48,&DAT_146b82820,1);
      lVar2 = FUN_14373bbd0(local_48,"You must have an Opt::SIZE_ALIGN if you have an Opt::FORMAT",
                            &DAT_145b909f0,0);
      *(char **)(lVar2 + 0x20) = "Reflect\\Builder\\hkTypeBuilder.cpp";
      *(undefined8 *)(lVar2 + 0x28) = 0x244;
      *(undefined4 *)(lVar2 + 0xc) = 0x18bd024f;
      FUN_14373a950(local_48);
    }
    *param_2 = 0x80040200;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 8))();
    if ((param_1[0x39] != 0) &&
       (*(longlong **)(param_1[0x39] + 8) = param_3, (char)param_1[0x3a] != '\0')) {
      *(longlong *)(param_1[0x39] + 0x10) = (longlong)iVar1;
    }
    uVar3 = (**(code **)(*param_3 + 8))(param_3,iVar1);
    FUN_14370c720(uVar3,0,(longlong)iVar1);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1,uVar3,iVar1);
    *param_4 = uVar3;
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143737a80 FUN_143737a80 body=32 status=ok
// SIG undefined FUN_143737a80(void)

undefined8 FUN_143737a80(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  FUN_143737960(param_1,local_res18,param_2,&local_res20);
  return local_res20;
}



// FUNCTION 143737aa0 SetSectionToKey body=5 status=ok
// SIG undefined SetSectionToKey(void)

void UMovieScenePropertyTrack::SetSectionToKey(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



// FUNCTION 143737ab0 FUN_143737ab0 body=67 status=ok
// SIG undefined FUN_143737ab0(void)

void FUN_143737ab0(longlong param_1,longlong param_2,undefined8 param_3)

{
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 1;
  *(undefined8 *)(param_1 + 0x58) = param_3;
  *(undefined8 *)(param_1 + 0x68) = 7;
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x4000000;
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (param_2 != 0) {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 8;
    *(longlong *)(param_1 + 0x80) = param_2;
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x800000;
  *(undefined8 *)(param_1 + 0x120) = 0;
  return;
}



// FUNCTION 143737b00 FUN_143737b00 body=174 status=ok
// SIG undefined FUN_143737b00(void)

void FUN_143737b00(longlong param_1,ulonglong *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_res18 [2];
  
  puVar4 = (undefined8 *)(param_1 + 0x68);
  *(ulonglong *)(param_1 + 0x58) = param_2[1];
  uVar2 = 1;
  lVar3 = 0x20;
  *(ulonglong *)(param_1 + 0x60) = (ulonglong)param_3 & *param_2;
  do {
    if ((*(ulonglong *)(param_1 + 0x60) & (longlong)(int)uVar2) == 0) {
      *puVar4 = 0;
    }
    else {
      if ((*param_2 & (longlong)(int)uVar2) != 0) {
        puVar1 = (undefined8 *)FUN_1437143d0(param_2,uVar2);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar4 = *puVar1;
          goto LAB_143737b74;
        }
      }
      *puVar4 = 0;
    }
LAB_143737b74:
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    puVar4 = puVar4 + 1;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      FUN_143715390(param_2,local_res18);
      *(undefined4 *)(param_1 + 0x50) = local_res18[0];
      return;
    }
  } while( true );
}



// FUNCTION 143737bb0 FUN_143737bb0 body=88 status=ok
// SIG undefined FUN_143737bb0(void)

ulonglong FUN_143737bb0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(ulonglong **)(param_1 + 8);
  uVar2 = *puVar1;
  uVar3 = (longlong)param_2 + uVar2;
  *puVar1 = uVar3;
  if (puVar1[1] < uVar3) {
    FUN_143732400(0xdeadf11d,
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                  ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
  }
  return uVar2;
}



// FUNCTION 143737c10 FUN_143737c10 body=60 status=ok
// SIG undefined FUN_143737c10(void)

void FUN_143737c10(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  FUN_143737c50();
                    /* WARNING: Could not recover jumptable at 0x000143737c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_1,param_3);
  return;
}



// FUNCTION 143737c50 FUN_143737c50 body=389 status=ok
// SIG undefined FUN_143737c50(void)

void FUN_143737c50(uint *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_28;
  uint *local_20;
  ulonglong local_18;
  
  if ((((*param_1 & 0x20) != 0) &&
      (plVar3 = (longlong *)FUN_1437143d0(param_1,0x20), plVar3 != (longlong *)0x0)) &&
     (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)) {
    plVar5 = plVar3 + 1;
    iVar2 = (int)((*plVar3 << 4) >> 4);
    lVar6 = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        cVar1 = FUN_143714910(plVar5[1],&DAT_1467de3d0);
        local_28 = *plVar5;
        if (cVar1 == '\0') {
          local_20 = (uint *)plVar5[1];
          uVar4 = 0;
          if (local_20 != (uint *)0x0) {
            uVar4 = FUN_1437151a0();
          }
        }
        else {
          local_20 = param_1;
          uVar4 = FUN_1437151a0(param_1);
        }
        local_18 = uVar4;
        if ((uVar4 & 1) != 0) {
          FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
        }
        FUN_1437428e0(&local_28,3,1);
        if ((local_18 & 1) != 0) {
          FUN_143733a60(local_18 & 0xfffffffffffffffe);
        }
        *plVar5 = 0;
        plVar5[1] = (longlong)&DAT_1467df8b8;
        plVar5 = plVar5 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  if ((*param_1 >> 0xe & 1) != 0) {
    plVar3 = (longlong *)FUN_1437143d0(param_1,0x4000);
    if ((plVar3 != (longlong *)0x0) && (local_28 = *plVar3, local_28 != 0)) {
      local_20 = param_1;
      local_18 = FUN_1437151a0(param_1);
      if ((local_18 & 1) != 0) {
        FUN_1437329e0(local_18 & 0xfffffffffffffffe);
      }
      FUN_1437428e0(&local_28,3,1);
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
    }
  }
  return;
}



// FUNCTION 143737de0 FUN_143737de0 body=252 status=ok
// SIG undefined FUN_143737de0(void)

void FUN_143737de0(longlong param_1,code *param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  pcVar5 = FUN_143737c10;
  if (param_2 != (code *)0x0) {
    pcVar5 = param_2;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  plVar2 = (longlong *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
  *(longlong **)(param_1 + 0x1c8) = plVar2;
  *plVar2 = (longlong)pcVar5;
  *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x10) = param_3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    puVar3 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_14371d5c0(&local_38,*(longlong *)(param_1 + 0x1c8),&DAT_1467e4e10);
  }
  local_28 = *puVar3;
  local_20 = puVar3[1];
  if (local_20 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1437151a0();
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  local_18 = uVar4;
  FUN_143737490(param_1,&local_28);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143737ee0 FUN_143737ee0 body=324 status=ok
// SIG undefined FUN_143737ee0(void)

int FUN_143737ee0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x178) != 0) {
    iVar5 = *(int *)(param_1 + 0x178) * 0x10 + 8;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  lVar3 = (longlong)iVar1;
  if ((iVar1 != 0) && (iVar5 = iVar5 + iVar1 * 0x40 + 0x10, 0 < iVar1)) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x180) + 0x28);
    do {
      iVar1 = *piVar4;
      piVar4 = piVar4 + 0xe;
      iVar5 = iVar5 + 0x10 + iVar1 * 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (((*(uint *)(param_1 + 0x60) >> 0x12 & 1) != 0) && (*(longlong *)(param_1 + 0xf8) == 0)) {
    iVar1 = FUN_1437152e0(*(undefined4 *)(param_1 + 0x198));
    iVar5 = iVar5 + iVar1;
    uVar9 = uVar7;
    if (0 < *(int *)(param_1 + 0x198)) {
      do {
        iVar1 = FUN_14370c910(*(undefined8 *)(*(longlong *)(param_1 + 400) + 8 + uVar7));
        uVar7 = uVar7 + 0x10;
        uVar8 = (int)uVar9 + 1;
        iVar5 = iVar5 + (iVar1 + 8U & 0xfffffff8);
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x198));
    }
  }
  if ((*(ulonglong *)(param_1 + 0x60) >> 0x11 & 1) != 0) {
    iVar5 = iVar5 + *(int *)(param_1 + 0x1a8) * 0x10 + 8;
  }
  if (((*(ulonglong *)(param_1 + 0x60) >> 0x1a & 1) != 0) && (*(longlong *)(param_1 + 0x138) == 0))
  {
    iVar5 = iVar5 + (*(int *)(param_1 + 0x1b8) + 1) * 8;
    iVar1 = *(int *)(param_1 + 0x1b8);
    lVar3 = *(longlong *)(param_1 + 0x1b0);
    for (plVar6 = *(longlong **)(param_1 + 0x1b0);
        plVar6 != (longlong *)((longlong)iVar1 * 0x1d8 + lVar3); plVar6 = plVar6 + 0x3b) {
      iVar2 = (**(code **)(*plVar6 + 8))(plVar6);
      iVar5 = iVar5 + iVar2;
    }
    iVar5 = iVar5 + 8;
  }
  return iVar5;
}



// FUNCTION 143738030 FUN_143738030 body=87 status=ok
// SIG undefined FUN_143738030(void)

int FUN_143738030(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x60) - (*(uint *)(param_1 + 0x60) >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  iVar1 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8;
  iVar2 = iVar1 + 0x10;
  if ((*(longlong *)(param_1 + 0x168) != 0) && ((*(byte *)(param_1 + 0x60) & 1) == 0)) {
    iVar2 = iVar1 + 8;
  }
  return iVar2;
}



// FUNCTION 143738090 getTotalNeededMemory body=43 status=ok
// SIG undefined getTotalNeededMemory(void)

int hkReflect::TypeBuilder::getTotalNeededMemory(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  return iVar2 + iVar1;
}



// FUNCTION 1437380c0 FUN_1437380c0 body=75 status=ok
// SIG undefined FUN_1437380c0(void)

void FUN_1437380c0(longlong param_1,undefined8 param_2,ushort param_3,ulonglong param_4)

{
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x80000;
  *(undefined8 *)(param_1 + 0x100) = param_2;
  if ((param_4 & 0x30) == 0) {
    param_4 = (ulonglong)((uint)param_4 | 0x20);
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x100000;
  *(ulonglong *)(param_1 + 0x108) = (param_4 & 0xffff) << 0x10 | (ulonglong)param_3;
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x200000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 143738110 FUN_143738110 body=37 status=ok
// SIG undefined FUN_143738110(void)

void FUN_143738110(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x168) = param_2;
  if (param_2 == 0) {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xffffffffdfffffff;
    return;
  }
  *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | 0x20000000;
  *(longlong *)(param_1 + 0x150) = param_2;
  return;
}



// FUNCTION 143738140 FUN_143738140 body=1440 status=ok
// SIG undefined FUN_143738140(void)

undefined8 FUN_143738140(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined **local_38;
  ulonglong *local_30;
  
  uVar17 = 0;
  if (*(int *)(param_1 + 0x178) != 0) {
    plVar11 = (longlong *)*param_3;
    uVar8 = (longlong)(*(int *)(param_1 + 0x178) * 0x10 + 8) + (longlong)plVar11;
    *param_3 = uVar8;
    if (param_3[1] < uVar8) {
      FUN_143732400(0xdeadf11d,
                    "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                    ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
    }
    plVar16 = plVar11 + 1;
    *plVar11 = (longlong)*(int *)(param_1 + 0x178);
    uVar8 = uVar17;
    uVar15 = uVar17;
    if (0 < *(int *)(param_1 + 0x178)) {
      do {
        uVar18 = (int)uVar15 + 1;
        *plVar16 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0x170));
        plVar16[1] = *(longlong *)(*(longlong *)(param_1 + 0x170) + -0x10 + uVar8 + 0x18);
        plVar16 = plVar16 + 2;
        uVar8 = uVar8 + 0x18;
        uVar15 = (ulonglong)uVar18;
      } while ((int)uVar18 < *(int *)(param_1 + 0x178));
    }
    puVar9 = (ulonglong *)FUN_1437143d0(param_2,0x20);
    *puVar9 = (ulonglong)plVar11;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    puVar9 = (ulonglong *)*param_3;
    *param_3 = (ulonglong)(puVar9 + 2);
    if ((ulonglong *)param_3[1] < puVar9 + 2) {
      FUN_143732400(0xdeadf11d,
                    "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                    ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
    }
    puVar10 = (ulonglong *)FUN_1437143d0(param_2,0x800);
    *puVar10 = (ulonglong)puVar9;
    uVar8 = *param_3;
    uVar15 = (longlong)(*(int *)(param_1 + 0x188) << 6) + uVar8;
    *param_3 = uVar15;
    if (param_3[1] < uVar15) {
      FUN_143732400(0xdeadf11d,
                    "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                    ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
    }
    *puVar9 = uVar8;
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined2 *)((longlong)puVar9 + 0xc) = 0;
    uVar15 = uVar17;
    uVar19 = uVar17;
    if (0 < *(int *)(param_1 + 0x188)) {
      do {
        lVar20 = *(longlong *)(param_1 + 0x180);
        if (*(char *)(uVar19 + 0x30 + lVar20) == '\0') {
          FUN_1437386e0((longlong)(int)uVar15 * 0x38 + lVar20,
                        *(undefined8 *)(uVar19 + lVar20 + 0x18),param_2,uVar8,param_3);
          *(short *)(puVar9 + 1) = (short)puVar9[1] + 1;
          uVar8 = uVar8 + 0x40;
        }
        uVar18 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar18;
        uVar19 = uVar19 + 0x38;
      } while ((int)uVar18 < *(int *)(param_1 + 0x188));
    }
    uVar15 = uVar17;
    uVar19 = uVar17;
    if (0 < *(int *)(param_1 + 0x188)) {
      do {
        if (*(char *)(uVar19 + 0x30 + *(longlong *)(param_1 + 0x180)) == '\x01') {
          FUN_1437386e0((longlong)(int)uVar15 * 0x38 + *(longlong *)(param_1 + 0x180),param_2,0,
                        uVar8,param_3);
          *(short *)((longlong)puVar9 + 10U) = *(short *)((longlong)puVar9 + 10U) + 1;
          uVar8 = uVar8 + 0x40;
        }
        uVar18 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar18;
        uVar19 = uVar19 + 0x38;
      } while ((int)uVar18 < *(int *)(param_1 + 0x188));
    }
    uVar15 = uVar17;
    uVar19 = uVar17;
    if (0 < *(int *)(param_1 + 0x188)) {
      do {
        lVar20 = *(longlong *)(param_1 + 0x180);
        if (*(char *)(uVar19 + 0x30 + lVar20) == '\x02') {
          FUN_1437386e0((longlong)(int)uVar15 * 0x38 + lVar20,
                        *(undefined8 *)(uVar19 + lVar20 + 0x18),0,uVar8,param_3);
          *(short *)((longlong)puVar9 + 0xcU) = *(short *)((longlong)puVar9 + 0xcU) + 1;
          uVar8 = uVar8 + 0x40;
        }
        uVar18 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar18;
        uVar19 = uVar19 + 0x38;
      } while ((int)uVar18 < *(int *)(param_1 + 0x188));
    }
  }
  if ((*(uint *)(param_1 + 0x60) >> 0x12 & 1) != 0) {
    lVar20 = *(longlong *)(param_1 + 0xf8);
    if (lVar20 == 0) {
      iVar7 = *(int *)(param_1 + 0x198);
      lVar20 = (longlong)iVar7;
      puVar3 = (undefined8 *)*param_3;
      uVar8 = (longlong)((iVar7 + 1) * 0x10) + (longlong)puVar3;
      *param_3 = uVar8;
      if (param_3[1] < uVar8) {
        FUN_143732400(0xdeadf11d,
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                      ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
      }
      *puVar3 = 0;
      puVar3[1] = lVar20;
      puVar12 = (undefined8 *)FUN_1437143d0(param_2,0x40000);
      *puVar12 = puVar3;
      uVar8 = uVar17;
      if (0 < iVar7) {
        do {
          iVar7 = FUN_14370c910(*(undefined8 *)(uVar8 + 8 + *(longlong *)(param_1 + 400)));
          uVar15 = *param_3;
          *param_3 = *param_3 + ((longlong)(iVar7 + 8) & 0xfffffffffffffff8U);
          if (param_3[1] < *param_3) {
            FUN_143732400(0xdeadf11d,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                          ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
          }
          FUN_14370c700(uVar15,*(undefined8 *)(uVar8 + 8 + *(longlong *)(param_1 + 400)),iVar7 + 1);
          *(undefined8 *)((longlong)puVar3 + uVar8 + 0x10) =
               *(undefined8 *)(uVar8 + *(longlong *)(param_1 + 400));
          *(ulonglong *)((longlong)puVar3 + uVar8 + 0x18) = uVar15;
          lVar20 = lVar20 + -1;
          uVar8 = uVar8 + 0x10;
        } while (lVar20 != 0);
      }
    }
    else {
      plVar11 = (longlong *)FUN_1437143d0(param_2,0x40000);
      *plVar11 = lVar20;
    }
  }
  if ((*(uint *)(param_1 + 0x60) >> 0x11 & 1) != 0) {
    iVar7 = *(int *)(param_1 + 0x1a8);
    lVar20 = (longlong)iVar7;
    plVar11 = (longlong *)*param_3;
    uVar8 = (longlong)(iVar7 * 0x10 + 8) + (longlong)plVar11;
    *param_3 = uVar8;
    if (param_3[1] < uVar8) {
      FUN_143732400(0xdeadf11d,
                    "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                    ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
    }
    *plVar11 = lVar20;
    uVar8 = uVar17;
    if (0 < iVar7) {
      do {
        puVar1 = (undefined4 *)(uVar8 + *(longlong *)(param_1 + 0x1a0));
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)((longlong)plVar11 + uVar8 + 8);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        lVar20 = lVar20 + -1;
        uVar8 = uVar8 + 0x10;
      } while (lVar20 != 0);
    }
    puVar9 = (ulonglong *)FUN_1437143d0(param_2,0x20000);
    *puVar9 = (ulonglong)plVar11;
  }
  if ((*(uint *)(param_1 + 0x60) >> 0x1a & 1) != 0) {
    if (*(longlong *)(param_1 + 0x138) == 0) {
      local_38 = `public:_virtual_class_hkReflect::Type*___ptr64___cdecl_hkReflect::TypeBuilder::writeBodyOnBuffer(hkReflect::Type*___ptr64,hkLinearBuffer&___ptr64)___ptr64'
                 ::__l48::Alloc::vftable;
      local_30 = param_3;
      puVar12 = (undefined8 *)
                FUN_143714780(0,*(int *)(param_1 + 0x1c0),
                              *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1c0),&local_38);
      uVar8 = uVar17;
      puVar3 = puVar12;
      if (0 < *(int *)(param_1 + 0x1b8)) {
        do {
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x1b0) + uVar8);
          uVar13 = (**(code **)(*plVar11 + 0x20))(plVar11,param_3);
          puVar14 = (undefined8 *)FUN_1437143d0(uVar13,0x200000);
          uVar18 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar18;
          *puVar14 = param_2;
          puVar3[1] = uVar13;
          uVar8 = uVar8 + 0x1d8;
          puVar3 = puVar3 + 1;
        } while ((int)uVar18 < *(int *)(param_1 + 0x1b8));
      }
      plVar11 = (longlong *)FUN_1437143d0(param_2,0x4000000);
      *plVar11 = (longlong)puVar12;
      FUN_143702b50(&local_38);
    }
    if (*(char *)(param_1 + 0x1d1) != '\0') {
      FUN_143736450(param_2);
    }
  }
  if (*(char *)(param_1 + 0x1d2) != '\0') {
    FUN_14374a0d0(param_2,1);
  }
  return param_2;
}



// FUNCTION 1437386e0 FUN_1437386e0 body=396 status=ok
// SIG undefined FUN_1437386e0(void)

void FUN_1437386e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  ulonglong *param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  ulonglong uVar13;
  
  uVar10 = 0;
  puVar2 = (undefined1 *)*param_5;
  *param_5 = (ulonglong)(puVar2 + 0x10);
  if ((undefined1 *)param_5[1] < puVar2 + 0x10) {
    FUN_143732400(0xdeadf11d,
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                  ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
  }
  uVar13 = *param_5;
  uVar11 = (longlong)(*(int *)(param_1 + 5) << 4) + uVar13;
  *param_5 = uVar11;
  if (param_5[1] < uVar11) {
    FUN_143732400(0xdeadf11d,
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                  ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
  }
  *puVar2 = *(undefined1 *)(param_1 + 5);
  *(undefined8 *)(puVar2 + 8) = param_2;
  puVar2[1] = 0;
  *(undefined2 *)(puVar2 + 2) = 0;
  if (0 < *(int *)(param_1 + 5)) {
    puVar12 = (ushort *)(uVar13 + 8);
    uVar13 = uVar10;
    do {
      uVar3 = *(undefined8 *)(uVar13 + param_1[4]);
      iVar8 = FUN_143714d40(uVar3);
      if ((int)(uint)(byte)puVar2[1] < iVar8) {
        uVar4 = FUN_143714d40(uVar3);
        puVar2[1] = uVar4;
      }
      sVar5 = FUN_143714d40(uVar3);
      sVar7 = *(short *)(puVar2 + 2);
      sVar6 = FUN_143714d40(uVar3);
      *(undefined8 *)(puVar12 + -4) = uVar3;
      *puVar12 = ~(sVar6 - 1U) & sVar7 + -1 + sVar5;
      sVar7 = FUN_1437152f0(uVar3);
      uVar1 = *puVar12;
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      puVar12 = puVar12 + 8;
      *(ushort *)(puVar2 + 2) = sVar7 + uVar1;
      uVar13 = uVar13 + 8;
    } while ((int)uVar9 < *(int *)(param_1 + 5));
  }
  uVar3 = param_1[2];
  *param_4 = param_1[1];
  param_4[1] = uVar3;
  param_4[2] = puVar2;
  param_4[3] = param_3;
  param_4[5] = *param_1;
  return;
}



// FUNCTION 143738870 FUN_143738870 body=292 status=ok
// SIG undefined FUN_143738870(void)

undefined8 * FUN_143738870(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (((*(ulonglong *)(param_1 + 0x60) & 1) == 0) && (*(longlong *)(param_1 + 0x168) != 0)) {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & 0xffffffffdfffffff;
  }
  puVar2 = (undefined8 *)*param_2;
  *param_2 = (ulonglong)(puVar2 + 2);
  if ((undefined8 *)param_2[1] < puVar2 + 2) {
    FUN_143732400(0xdeadf11d,
                  "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                  ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
  }
  puVar6 = (undefined8 *)(param_1 + 0x68);
  *puVar2 = *(undefined8 *)(param_1 + 0x60);
  lVar5 = 0x20;
  puVar2[1] = *(undefined8 *)(param_1 + 0x58);
  uVar4 = 1;
  do {
    if ((*(ulonglong *)(param_1 + 0x60) & (longlong)(int)uVar4) != 0) {
      puVar3 = (undefined8 *)*param_2;
      puVar1 = puVar3 + 1;
      *param_2 = (ulonglong)puVar1;
      if ((undefined8 *)param_2[1] < puVar1) {
        FUN_143732400(0xdeadf11d,
                      "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl"
                      ,0x15,"hkLinearBuffer exhausted",&DAT_145b909f0,0);
      }
      *puVar3 = *puVar6;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    puVar6 = puVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return puVar2;
}



// FUNCTION 1437389a0 writeOnBuffer body=65 status=ok
// SIG undefined writeOnBuffer(void)

undefined8 hkReflect::TypeBuilder::writeOnBuffer(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x38))(param_1,uVar1,param_2);
  return uVar1;
}



// FUNCTION 1437389f0 writeOnBuffer body=41 status=ok
// SIG undefined writeOnBuffer(void)

void hkReflect::TypeBuilder::writeOnBuffer(longlong *param_1,longlong param_2,int param_3)

{
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = param_3 + param_2;
  local_28 = param_2;
  local_18 = param_2;
  (**(code **)(*param_1 + 0x20))(param_1,&local_28);
  return;
}



// FUNCTION 143738a20 FUN_143738a20 body=139 status=ok
// SIG undefined FUN_143738a20(void)

longlong FUN_143738a20(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143738b80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x58;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 143738ac0 FUN_143738ac0 body=180 status=ok
// SIG undefined FUN_143738ac0(void)

undefined8 FUN_143738ac0(longlong *param_1)

{
  LPVOID pvVar1;
  undefined8 *_Dst;
  undefined1 local_res8;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    _Dst = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))();
    if (_Dst == (undefined8 *)0x0) {
      _Dst = (undefined8 *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x58);
      _Dst[1] = 0;
      *_Dst = ReflectStrings::vftable;
      *(undefined4 *)(_Dst + 2) = 0x1ffff;
      FUN_14370d870(_Dst + 3,0);
      FUN_14373bf20(_Dst + 8,local_res8);
    }
    if (_Dst != (undefined8 *)*param_1) {
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *param_1 = (longlong)_Dst;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143738b80 FUN_143738b80 body=208 status=ok
// SIG undefined FUN_143738b80(void)

void FUN_143738b80(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  
  *param_1 = ReflectStrings::vftable;
  uVar2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getIterator
                    (param_1 + 8);
  iVar1 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                    (param_1 + 8,uVar2);
  while (iVar1 != 0) {
    iVar1 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getValue
                      (param_1 + 8,uVar2);
    if (iVar1 != 0) {
      uVar3 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getKey
                        (param_1 + 8,uVar2);
      pvVar4 = TlsGetValue(DAT_146b7bf70);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = DAT_146b7bf68;
      }
      FUN_1437039c0(*(undefined8 *)((longlong)pvVar4 + 0x58),uVar3);
    }
    uVar2 = FUN_14373c200(param_1 + 8,uVar2);
    iVar1 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                      (param_1 + 8,uVar2);
  }
  FUN_14373bf70(param_1 + 8);
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143738c50 FUN_143738c50 body=59 status=ok
// SIG undefined FUN_143738c50(void)

int FUN_143738c50(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_1 != 0; param_1 = hkReflect::RecordType::getParentRecord(param_1)) {
    iVar1 = FUN_143715240(param_1);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}



// FUNCTION 143738c90 FUN_143738c90 body=399 status=ok
// SIG undefined FUN_143738c90(void)

longlong FUN_143738c90(longlong param_1,longlong param_2,uint param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong local_28;
  uint local_20;
  uint local_1c;
  
  lVar5 = (longlong)(int)param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  local_1c = 0x80000000;
  local_28 = 0;
  local_20 = 0;
  if (param_3 != 0xffffffff) {
    uVar1 = 0;
    if (0 < (int)param_3) {
      uVar1 = param_3;
      if ((int)param_3 < 0) {
        uVar1 = 0;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,&local_28,uVar1,1);
      uVar1 = local_20;
    }
    puVar4 = (undefined1 *)((int)uVar1 + local_28);
    if (0 < (int)param_3) {
      param_2 = param_2 - (longlong)puVar4;
      do {
        *puVar4 = puVar4[param_2];
        puVar4 = puVar4 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    local_20 = param_3;
    if (param_3 == (local_1c & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,&local_28,1);
    }
    *(undefined1 *)((int)local_20 + local_28) = 0;
    local_20 = local_20 + 1;
    param_2 = local_28;
  }
  lVar5 = param_1 + 0x40;
  uVar3 = FUN_14373bfe0(lVar5,param_2);
  iVar2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                    (lVar5,uVar3);
  if (iVar2 == 0) {
    if (param_4 != '\0') {
      param_2 = FUN_14370c870(param_2);
    }
    FUN_14373c2f0(lVar5,param_2,param_4);
  }
  else {
    param_2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getKey
                        (lVar5,uVar3);
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_28,1,local_1c & 0x3fffffff);
  }
  local_28 = 0;
  local_1c = 0x80000000;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 143738e20 internCopy body=21 status=ok
// SIG undefined internCopy(void)

void hkReflectUtil::internCopy(undefined8 param_1,undefined4 param_2)

{
  FUN_143738c90(DAT_146b82898,param_1,param_2,1);
  return;
}



// FUNCTION 143738e40 FUN_143738e40 body=34 status=ok
// SIG undefined FUN_143738e40(void)

void FUN_143738e40(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      *param_1 = *(undefined8 *)(param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143738e70 FUN_143738e70 body=46 status=ok
// SIG undefined FUN_143738e70(void)

void FUN_143738e70(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)((param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar2 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar2;
      puVar4[2] = *(undefined8 *)((param_2 - (longlong)param_1) + -8 + (longlong)(puVar4 + 3));
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 3;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 143738ea0 FUN_143738ea0 body=399 status=ok
// SIG undefined FUN_143738ea0(void)

uint * FUN_143738ea0(longlong *param_1,uint *param_2,int *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  
  plVar1 = param_1 + 2;
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(plVar1);
  }
  iVar3 = *param_3;
  uVar10 = iVar3 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar8 = (ulonglong)(*(uint *)(param_1 + 3) & uVar10);
  puVar9 = (uint *)(*plVar1 + uVar8 * 8);
  if (-1 < *(int *)(*plVar1 + 4 + uVar8 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar9[1] * 0x18) == iVar3) {
        *param_2 = puVar9[1];
        goto LAB_143739000;
      }
      lVar5 = *plVar1;
      uVar8 = ((longlong)puVar9 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar9 = (uint *)(lVar5 + uVar8 * 8);
    } while (-1 < *(int *)(lVar5 + 4 + uVar8 * 8));
  }
  uVar4 = *(uint *)(param_1 + 1);
  *puVar9 = uVar10;
  puVar9[1] = uVar4;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,0x18);
  }
  lVar5 = *param_1 + (longlong)(int)param_1[1] * 0x18;
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x14) = 0x80000000;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined4 *)(lVar5 + 0x10) = 0;
  }
  piVar2 = (int *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar2 = *param_3;
  iVar3 = *(int *)(param_4 + 1);
  uVar6 = *param_4;
  uVar7 = FUN_143703a50();
  if ((int)(piVar2[5] & 0x3fffffffU) < iVar3) {
    FUN_14370c310(uVar7,piVar2 + 2,iVar3,8);
  }
  FUN_143738e40(*(undefined8 *)(piVar2 + 2),uVar6,iVar3);
  *param_2 = uVar4;
  piVar2[4] = iVar3;
LAB_143739000:
  param_2[1] = (uint)((longlong)puVar9 - *plVar1 >> 3);
  return param_2;
}



// FUNCTION 143739030 FUN_143739030 body=49 status=ok
// SIG undefined FUN_143739030(void)

undefined8 * FUN_143739030(undefined8 *param_1,undefined8 param_2)

{
  hkReflect::Detail::Impl::Impl();
  param_1[2] = param_2;
  *param_1 = hkSerialize::Detail::IndexedArrayImpl::vftable;
  return param_1;
}



// FUNCTION 143739070 FUN_143739070 body=159 status=ok
// SIG undefined FUN_143739070(void)

undefined8 * FUN_143739070(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_143734d20();
  *param_1 = hkSerialize::Detail::IndexedBundle::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_143739030(param_1 + 5,param_1 + 3);
  FUN_143739110(param_1 + 8,param_1 + 3);
  FUN_143739150(param_1 + 0xb,param_1 + 3);
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 2) == (*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 1,8);
  }
  *(undefined8 *)(param_1[1] + (longlong)*(int *)(param_1 + 2) * 8) = 0;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return param_1;
}



// FUNCTION 143739110 FUN_143739110 body=49 status=ok
// SIG undefined FUN_143739110(void)

undefined8 * FUN_143739110(undefined8 *param_1,undefined8 param_2)

{
  hkReflect::Detail::Impl::Impl();
  param_1[2] = param_2;
  *param_1 = hkSerialize::Detail::IndexedPointerImpl::vftable;
  return param_1;
}



// FUNCTION 143739150 FUN_143739150 body=49 status=ok
// SIG undefined FUN_143739150(void)

undefined8 * FUN_143739150(undefined8 *param_1,undefined8 param_2)

{
  hkReflect::Detail::Impl::Impl();
  param_1[2] = param_2;
  *param_1 = hkSerialize::Detail::IndexedStringImpl::vftable;
  return param_1;
}



// FUNCTION 143739190 FUN_143739190 body=120 status=ok
// SIG undefined FUN_143739190(void)

longlong FUN_143739190(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1436fc1a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x70);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 143739210 FUN_143739210 body=96 status=ok
// SIG undefined FUN_143739210(void)

longlong FUN_143739210(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = (ulonglong)
          ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)(param_1 + 3));
  iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar5) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar5 * 0x18) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 143739270 FUN_143739270 body=382 status=ok
// SIG undefined FUN_143739270(void)

void FUN_143739270(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_143739210(param_1,*param_1 + (longlong)(int)uVar4 * 0x18);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  lVar5 = *param_1 + (longlong)(int)uVar2 * 0x18;
  uVar6 = FUN_143703a50();
  *(undefined4 *)(lVar5 + 0x10) = 0;
  if (-1 < (int)*(uint *)(lVar5 + 0x14)) {
    FUN_143702e10(uVar6,*(undefined8 *)(lVar5 + 8),8,*(uint *)(lVar5 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x14) = 0x80000000;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar7 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x18);
    lVar5 = 3;
    lVar9 = (*param_1 + (longlong)(int)*(uint *)(param_1 + 1) * 0x18) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined8 *)(lVar9 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar8 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar8 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar8 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar8 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar8 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1437393f0 FUN_1437393f0 body=226 status=ok
// SIG undefined FUN_1437393f0(void)

void FUN_1437393f0(longlong *param_1,longlong *param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  int local_res18 [4];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 == -1) {
    *param_2 = (longlong)&DAT_1467df8b8;
    return;
  }
  if ((param_3 < (int)(param_4[1] - *param_4 >> 3)) &&
     (lVar1 = *(longlong *)(*param_4 + (longlong)param_3 * 8), lVar1 != 0)) {
    *param_2 = lVar1;
    return;
  }
  local_14 = 0x80000000;
  *param_2 = (longlong)&DAT_1467df8b8;
  local_20 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  piVar2 = (int *)FUN_143738ea0(param_1,local_28,local_res18,&local_20);
  lVar1 = *param_1 + (longlong)*piVar2 * 0x18;
  uVar3 = FUN_143703a50();
  if (*(uint *)(lVar1 + 0x10) == (*(uint *)(lVar1 + 0x14) & 0x3fffffff)) {
    FUN_14370c460(uVar3,lVar1 + 8,8);
  }
  *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)*(int *)(lVar1 + 0x10) * 8) = param_2;
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  FUN_143703a50();
  return;
}



// FUNCTION 1437394e0 FUN_1437394e0 body=76 status=ok
// SIG undefined FUN_1437394e0(void)

void FUN_1437394e0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x18,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143739530 FUN_143739530 body=183 status=ok
// SIG undefined FUN_143739530(void)

void FUN_143739530(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0x10,*(uint *)(param_1 + 0x44) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x10,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1437395f0 FUN_1437395f0 body=497 status=ok
// SIG undefined FUN_1437395f0(void)

void FUN_1437395f0(undefined8 param_1,uint *param_2,int *param_3,undefined4 *param_4)

{
  short *psVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (0 < *param_3) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    FUN_1437393f0(local_38,param_2 + 2,*param_3,&local_38);
  }
  uVar7 = 0;
  if (0 < param_3[1]) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    uVar2 = uVar7;
    if ((*param_2 & 2) != 0) {
      uVar2 = FUN_1437143d0(param_2,2);
    }
    FUN_1437393f0(param_1,uVar2,param_3[1],&local_38);
  }
  if (((((*param_2 >> 0x1a & 1) != 0) &&
       (puVar3 = (undefined8 *)FUN_1437143d0(param_2,0x4000000), puVar3 != (undefined8 *)0x0)) &&
      (psVar1 = (short *)*puVar3, psVar1 != (short *)0x0)) &&
     (uVar2 = uVar7, uVar8 = uVar7, uVar9 = uVar7, 0 < *psVar1)) {
    do {
      local_38 = *param_4;
      uStack_34 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      FUN_1437393f0(param_1,*(longlong *)(uVar8 + 8 + (longlong)psVar1) + 8,
                    *(undefined4 *)(uVar9 + *(longlong *)(param_3 + 2)),&local_38);
      uVar6 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar6;
      uVar8 = uVar8 + 8;
      uVar9 = uVar9 + 4;
    } while ((int)uVar6 < (int)*psVar1);
  }
  if ((param_3[0x28] != 0) &&
     (lVar4 = FUN_143715320(param_2), uVar2 = uVar7, uVar8 = uVar7, 0 < param_3[0x28])) {
    do {
      if (**(char **)(lVar4 + 0x18) == 't') {
        local_38 = *param_4;
        uStack_34 = param_4[1];
        uStack_30 = param_4[2];
        uStack_2c = param_4[3];
        FUN_1437393f0(param_1,lVar4 + 0x10,*(undefined4 *)(*(longlong *)(param_3 + 0x26) + uVar8),
                      &local_38);
        uVar2 = (ulonglong)((int)uVar2 + 1);
        uVar8 = uVar8 + 4;
      }
      lVar4 = lVar4 + 0x10;
    } while ((int)uVar2 < param_3[0x28]);
  }
  if (param_3[0x4c] != 0) {
    uVar2 = uVar7;
    if (((*param_2 >> 0x11 & 1) != 0) &&
       (puVar5 = (ulonglong *)FUN_1437143d0(param_2,0x20000), puVar5 != (ulonglong *)0x0)) {
      uVar2 = *puVar5;
    }
    uVar8 = uVar7;
    if (0 < param_3[0x4c]) {
      do {
        local_38 = *param_4;
        uStack_34 = param_4[1];
        uStack_30 = param_4[2];
        uStack_2c = param_4[3];
        FUN_1437393f0(param_1,(longlong)(int)uVar7 * 0x10 + uVar2 + 8,
                      *(undefined4 *)(uVar8 + *(longlong *)(param_3 + 0x4a)),&local_38);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 4;
      } while ((int)uVar6 < param_3[0x4c]);
    }
  }
  return;
}



// FUNCTION 1437397f0 FUN_1437397f0 body=219 status=ok
// SIG undefined FUN_1437397f0(void)

undefined8 * FUN_1437397f0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  if (*(int *)(param_1 + 0x20) < 2) {
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    puVar3 = &local_20;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_30 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18);
    if (local_30 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_1437151a0();
    }
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar3 = &local_38;
    bVar2 = true;
    bVar1 = false;
  }
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  puVar3[2] = 0;
  if (bVar1) {
    if ((local_10 & 1) != 0) {
      FUN_143733a60(local_10 & 0xfffffffffffffffe);
    }
  }
  if ((bVar2) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437398d0 FUN_1437398d0 body=175 status=ok
// SIG undefined FUN_1437398d0(void)

undefined8 * FUN_1437398d0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  bVar1 = *(int *)(param_1 + 0x20) < 2;
  if (bVar1) {
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    puVar2 = &local_38;
  }
  else {
    puVar2 = (undefined8 *)FUN_1436ea2a0(param_1,local_20,1);
  }
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  puVar2[2] = 0;
  if (bVar1) {
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
  }
  if ((!bVar1) && ((local_10 & 1) != 0)) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143739980 FUN_143739980 body=189 status=ok
// SIG undefined FUN_143739980(void)

int FUN_143739980(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x18);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar3,param_2,iVar2,0x18);
  }
  iVar6 = iVar2;
  if ((int)param_2[1] < iVar2) {
    iVar6 = (int)param_2[1];
  }
  FUN_143738e70(*param_2,lVar7,iVar6);
  puVar4 = (undefined8 *)(*param_2 + (longlong)iVar6 * 0x18);
  lVar5 = (longlong)(iVar2 - iVar6);
  if (0 < iVar2 - iVar6) {
    lVar7 = ((longlong)iVar6 * 0x18 - (longlong)puVar4) + lVar7;
    do {
      if (puVar4 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(lVar7 + (longlong)puVar4);
        uVar3 = puVar1[1];
        *puVar4 = *puVar1;
        puVar4[1] = uVar3;
        puVar4[2] = *(undefined8 *)(lVar7 + 0x10 + (longlong)puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *(int *)(param_2 + 1) = iVar2;
  return iVar2;
}



// FUNCTION 143739a40 FUN_143739a40 body=602 status=ok
// SIG undefined FUN_143739a40(void)

undefined4 FUN_143739a40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar12 = 0;
  iVar10 = (*(int *)(param_1 + 0x40) - (uint)(*(int *)(param_1 + 0x40) != 0)) +
           *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x20);
  uVar4 = FUN_143703a50();
  lVar11 = 0x18;
  uVar7 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar7 < iVar10) {
    iVar2 = uVar7 * 2;
    iVar3 = iVar10;
    if (iVar10 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_14370c310(uVar4,param_2,iVar3,0x18);
  }
  iVar3 = iVar10 - (int)param_2[1];
  lVar8 = (longlong)iVar3;
  if (0 < iVar3) {
    puVar5 = (undefined1 *)(*param_2 + (longlong)(int)param_2[1] * 0x18 + 0x10);
    do {
      if ((undefined8 *)(puVar5 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar5 + -0x10) = 0;
        *(undefined8 *)(puVar5 + -8) = 0;
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 4) = 0;
      }
      puVar5 = puVar5 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  iVar3 = 1;
  *(int *)(param_2 + 1) = iVar10;
  iVar10 = 1;
  if (1 < *(int *)(param_1 + 0x20)) {
    do {
      puVar6 = (undefined8 *)FUN_1436ea2a0(param_1,local_38,iVar10);
      *(undefined8 *)(lVar11 + *param_2) = *puVar6;
      if ((local_28 & 1) != 0) {
        FUN_143733a60(local_28 & 0xfffffffffffffffe);
      }
      lVar8 = FUN_1436ea2a0(param_1,local_38,iVar10);
      *(undefined8 *)(lVar11 + 8 + *param_2) = *(undefined8 *)(lVar8 + 8);
      if ((local_28 & 1) != 0) {
        FUN_143733a60(local_28 & 0xfffffffffffffffe);
      }
      iVar10 = iVar10 + 1;
      *(undefined1 *)(lVar11 + 0x10 + *param_2) = 0;
      *(undefined4 *)(lVar11 + 0x14 + *param_2) = 0xffffffff;
      lVar11 = lVar11 + 0x18;
    } while (iVar10 < *(int *)(param_1 + 0x20));
  }
  uVar13 = uVar12;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      lVar8 = (longlong)(*(int *)(param_1 + 0x20) + (int)uVar13);
      uVar7 = (int)uVar13 + 1;
      lVar11 = lVar8 * 0x18;
      *(undefined8 *)(lVar11 + *param_2) = *(undefined8 *)(uVar12 + *(longlong *)(param_1 + 0x28));
      *(undefined8 *)(*param_2 + 8 + lVar8 * 0x18) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 8) +
            (longlong)*(int *)(uVar12 + 8 + *(longlong *)(param_1 + 0x28)) * 8);
      *(undefined1 *)(lVar11 + 0x10 + *param_2) = 2;
      *(undefined4 *)(lVar11 + 0x14 + *param_2) =
           *(undefined4 *)(uVar12 + 0xc + *(longlong *)(param_1 + 0x28));
      uVar12 = uVar12 + 0x10;
      uVar13 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 0x30));
  }
  if (1 < *(int *)(param_1 + 0x40)) {
    lVar11 = 0x10;
    do {
      lVar8 = lVar11 + 0x10;
      iVar10 = *(int *)(param_1 + 0x30) + -1 + *(int *)(param_1 + 0x20) + iVar3;
      iVar3 = iVar3 + 1;
      lVar9 = (longlong)iVar10;
      lVar1 = lVar9 * 0x18;
      *(undefined8 *)(lVar1 + *param_2) = *(undefined8 *)(lVar11 + *(longlong *)(param_1 + 0x38));
      *(undefined8 *)(*param_2 + 8 + lVar9 * 0x18) =
           *(undefined8 *)
            (*(longlong *)(param_1 + 8) +
            (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + -8 + lVar8) * 8);
      *(undefined1 *)(lVar1 + 0x10 + *param_2) = 1;
      *(undefined4 *)(lVar1 + 0x14 + *param_2) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4 + lVar8);
      lVar11 = lVar8;
    } while (iVar3 < *(int *)(param_1 + 0x40));
  }
  return (int)param_2[1];
}



// FUNCTION 143739ca0 FUN_143739ca0 body=164 status=ok
// SIG undefined FUN_143739ca0(void)

/* WARNING: Removing unreachable block (ram,0x000143739d34) */

longlong * FUN_143739ca0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar3 = 0;
  uVar4 = (ulonglong)*(uint *)*param_3;
  if (*(uint *)(*(longlong *)(param_1 + 0x50) + 8) <= *(uint *)*param_3) {
    uVar4 = uVar3;
  }
  plVar2 = (longlong *)(lVar1 + (longlong)(int)uVar4 * 0x18);
  if (*(char *)(lVar1 + 0x10 + (longlong)(int)uVar4 * 0x18) != '\x02') {
    if ((*plVar2 != 0) || (*(int *)((longlong)plVar2 + 0x14) < 1)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return param_2;
    }
    plVar2 = (longlong *)(lVar1 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 0x18);
  }
  lVar1 = plVar2[1];
  *param_2 = *plVar2;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    uVar3 = FUN_1437151a0();
  }
  param_2[2] = uVar3;
  if ((uVar3 & 1) == 0) {
    return param_2;
  }
  FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  return param_2;
}



// FUNCTION 143739d50 FUN_143739d50 body=181 status=ok
// SIG undefined FUN_143739d50(void)

/* WARNING: Removing unreachable block (ram,0x000143739df5) */

undefined8 * FUN_143739d50(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = *(uint *)*param_3;
  if (*(uint *)(*(longlong *)(param_1 + 0x58) + 0x20) <= uVar5) {
    uVar5 = 0;
  }
  if ((*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar5 * 0x10) == 0) &&
     (iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0xc + (longlong)(int)uVar5 * 0x10),
     -1 < iVar2)) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x10);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)(int)puVar1[1] * 8);
    *param_2 = *puVar1;
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      uVar4 = FUN_1437151a0();
    }
    param_2[2] = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      return param_2;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_2;
}



// FUNCTION 143739e10 FUN_143739e10 body=509 status=ok
// SIG undefined FUN_143739e10(void)

undefined4 *
FUN_143739e10(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  
  puVar5 = (ulonglong *)FUN_143714420(param_4,1);
  uVar6 = 0;
  uVar8 = uVar6;
  if (puVar5 != (ulonglong *)0x0) {
    uVar8 = *puVar5;
  }
  iVar9 = (int)(uVar8 >> 8);
  uVar4 = 0;
  if (iVar9 == 0) {
    lVar7 = (longlong)*param_3;
    if (*param_3 != 0) {
      lVar1 = **(longlong **)(param_1 + 0x10);
      if (*(char *)(lVar1 + 0x10 + lVar7 * 0x18) == '\x01') {
        uVar10 = *(uint *)(lVar1 + 0x14 + lVar7 * 0x18);
      }
      else {
        uVar10 = 0xffffffff;
      }
      lVar2 = *(longlong *)(lVar1 + 8 + lVar7 * 0x18);
      uVar3 = *(undefined8 *)(lVar1 + lVar7 * 0x18);
      if (lVar2 != 0) {
        uVar6 = FUN_1437151a0(lVar2);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar8 = 0;
      uVar4 = 0;
      if (lVar2 != 0) {
        uVar4 = FUN_1437152f0(lVar2);
        uVar8 = FUN_1437151a0(lVar2);
        if ((uVar8 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
      }
      *param_5 = uVar3;
      param_5[1] = lVar2;
      *(uint *)(param_5 + 2) = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
      *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
      if ((*(byte *)(param_5 + 3) & 1) != 0) {
        FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
      }
      param_5[3] = uVar8;
      *param_2 = 0;
      if ((uVar6 & 1) == 0) {
        return param_2;
      }
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      return param_2;
    }
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = 0;
  }
  else {
    puVar5 = (ulonglong *)FUN_143714420(param_4,2);
    uVar8 = uVar6;
    if (puVar5 != (ulonglong *)0x0) {
      uVar8 = *puVar5;
    }
    if (uVar8 != 0) {
      uVar4 = FUN_1437152f0(uVar8);
      uVar6 = FUN_1437151a0(uVar8);
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
    }
    *param_5 = param_3;
    param_5[1] = uVar8;
    *(int *)(param_5 + 2) = iVar9;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = uVar6;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373a010 FUN_14373a010 body=220 status=ok
// SIG undefined FUN_14373a010(void)

undefined4 *
FUN_14373a010(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  lVar1 = **(longlong **)(param_1 + 0x10);
  uVar6 = (ulonglong)*param_3;
  if (*(uint *)(*(longlong **)(param_1 + 0x10) + 1) <= *param_3) {
    uVar6 = uVar3;
  }
  puVar2 = (undefined8 *)((longlong)(int)uVar6 * 0x18 + lVar1);
  if (*(char *)(puVar2 + 2) == '\x02') {
    lVar4 = *(longlong *)(lVar1 + 8 + (longlong)*(int *)((longlong)puVar2 + 0x14) * 0x18);
    uVar5 = *(undefined8 *)(lVar1 + (longlong)*(int *)((longlong)puVar2 + 0x14) * 0x18);
    if (lVar4 != 0) {
      uVar3 = FUN_1437151a0(lVar4);
    }
  }
  else {
    lVar4 = puVar2[1];
    uVar5 = *puVar2;
    if (lVar4 != 0) {
      uVar3 = FUN_1437151a0(lVar4);
    }
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  *param_5 = uVar5;
  param_5[1] = lVar4;
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = uVar3;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373a0f0 FUN_14373a0f0 body=179 status=ok
// SIG undefined FUN_14373a0f0(void)

undefined4 *
FUN_14373a0f0(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  iVar1 = *param_3;
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(**(longlong **)(param_1 + 0x10) + (longlong)iVar1 * 0x18);
    if (*(longlong *)(**(longlong **)(param_1 + 0x10) + 8 + (longlong)iVar1 * 0x18) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1437151a0();
    }
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    *param_5 = uVar2;
    if ((uVar3 & 1) != 0) {
      FUN_143733a60(uVar3 & 0xfffffffffffffffe);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0;
  *param_5 = 0;
  return param_2;
}



// FUNCTION 14373a1b0 FUN_14373a1b0 body=512 status=ok
// SIG undefined FUN_14373a1b0(void)

undefined4 *
FUN_14373a1b0(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uStack_2c;
  
  puVar6 = (ulonglong *)FUN_143714420(param_4,1);
  uVar7 = 0;
  uVar8 = uVar7;
  if (puVar6 != (ulonglong *)0x0) {
    uVar8 = *puVar6;
  }
  iVar9 = (int)(uVar8 >> 8);
  uVar5 = 0;
  if (iVar9 == 0) {
    if (*param_3 != 0) {
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) + (longlong)*param_3 * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)(int)uVar4 * 8);
      uVar8 = uVar7;
      if (lVar2 != 0) {
        uVar8 = FUN_1437151a0(lVar2);
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uStack_2c = (uint)((ulonglong)uVar4 >> 0x20);
      if (lVar2 != 0) {
        uVar5 = FUN_1437152f0(lVar2);
        uVar7 = FUN_1437151a0(lVar2);
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
      }
      *(undefined4 *)((longlong)param_5 + 0x14) = uVar5;
      *param_5 = uVar3;
      param_5[1] = lVar2;
      *(uint *)(param_5 + 2) = (uStack_2c ^ (int)uStack_2c >> 0x1f) - ((int)uStack_2c >> 0x1f);
      if ((*(byte *)(param_5 + 3) & 1) != 0) {
        FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
      }
      param_5[3] = uVar7;
      *param_2 = 0;
      if ((uVar8 & 1) == 0) {
        return param_2;
      }
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
      return param_2;
    }
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    *param_2 = 0;
  }
  else {
    puVar6 = (ulonglong *)FUN_143714420(param_4,2);
    uVar8 = uVar7;
    if (puVar6 != (ulonglong *)0x0) {
      uVar8 = *puVar6;
    }
    if (uVar8 != 0) {
      uVar5 = FUN_1437152f0(uVar8);
      uVar7 = FUN_1437151a0(uVar8);
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
    }
    *param_5 = param_3;
    param_5[1] = uVar8;
    *(int *)(param_5 + 2) = iVar9;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar5;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    *param_2 = 0;
  }
  param_5[3] = uVar7;
  return param_2;
}



// FUNCTION 14373a3b0 FUN_14373a3b0 body=148 status=ok
// SIG undefined FUN_14373a3b0(void)

undefined4 *
FUN_14373a3b0(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  uVar2 = *param_3;
  if (*(uint *)(*(longlong *)(param_1 + 0x10) + 0x20) <= *param_3) {
    uVar2 = 0;
  }
  puVar1 = (undefined8 *)FUN_1436ea2a0(*(longlong *)(param_1 + 0x10),local_28,uVar2);
  *param_5 = *puVar1;
  param_5[1] = puVar1[1];
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = puVar1[2];
  puVar1[2] = 0;
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373a450 FUN_14373a450 body=193 status=ok
// SIG undefined FUN_14373a450(void)

undefined4 *
FUN_14373a450(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*param_3 != 0) {
    puVar1 = (undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) + (longlong)*param_3 * 0x10);
    uVar2 = *puVar1;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + (longlong)(int)puVar1[1] * 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1437151a0();
    }
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    *param_5 = uVar2;
    if ((uVar3 & 1) != 0) {
      FUN_143733a60(uVar3 & 0xfffffffffffffffe);
    }
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0;
  *param_5 = 0;
  return param_2;
}



// FUNCTION 14373a520 FUN_14373a520 body=69 status=ok
// SIG undefined FUN_14373a520(void)

undefined8 FUN_14373a520(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  
  if ((*(uint *)*param_3 < *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20)) &&
     (*(uint *)*param_3 != 0)) {
    cVar1 = FUN_143714910(param_2,&DAT_1467e6b20);
    if (cVar1 != '\0') {
      return *param_3;
    }
  }
  return 0;
}



// FUNCTION 14373a570 FUN_14373a570 body=211 status=ok
// SIG undefined FUN_14373a570(void)

void FUN_14373a570(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  lVar5 = FUN_143739210(param_1,local_res10);
  if (lVar5 != 0) {
    lVar3 = param_1[2];
    iVar2 = *(int *)(lVar5 + 4);
    if (-1 < iVar2) {
      uVar7 = 0;
      lVar1 = (longlong)iVar2 * 0x18;
      puVar6 = *(undefined8 **)(*param_1 + 8 + (longlong)iVar2 * 0x18);
      uVar9 = (ulonglong)
              ((longlong)(puVar6 + *(int *)(*param_1 + 0x10 + lVar1)) + (7 - (longlong)puVar6)) >> 3
      ;
      if (puVar6 + *(int *)(*param_1 + 0x10 + lVar1) < puVar6) {
        uVar9 = uVar7;
      }
      if (uVar9 != 0) {
        do {
          puVar4 = (undefined8 *)*puVar6;
          puVar6 = puVar6 + 1;
          uVar7 = uVar7 + 1;
          *puVar4 = param_3;
        } while (uVar7 != uVar9);
      }
      uVar8 = (uint)(lVar5 - lVar3 >> 3);
      if ((*(uint *)(param_1 + 3) < uVar8) ||
         (lVar5 = param_1[2] + (longlong)(int)uVar8 * 8,
         *(int *)(param_1[2] + 4 + (longlong)(int)uVar8 * 8) != iVar2)) {
        lVar5 = FUN_143739210(param_1,*param_1 + lVar1);
      }
      FUN_143739270(param_1,lVar5);
    }
  }
  return;
}



// FUNCTION 14373a660 FUN_14373a660 body=120 status=ok
// SIG undefined FUN_14373a660(void)

undefined8 FUN_14373a660(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0xd0);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14373a850(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 14373a6e0 FUN_14373a6e0 body=78 status=ok
// SIG undefined FUN_14373a6e0(void)

undefined8 *
FUN_14373a6e0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  
  *param_1 = param_2;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  param_1[5] = param_4;
  *(undefined4 *)(param_1 + 6) = param_5;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = 6;
  pvVar5 = TlsGetValue(DAT_146b8297c);
  param_1[4] = pvVar5;
  TlsSetValue(DAT_146b8297c,param_1);
  return param_1;
}



// FUNCTION 14373a730 FUN_14373a730 body=35 status=ok
// SIG undefined FUN_14373a730(void)

undefined8 * FUN_14373a730(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14373a760 FUN_14373a760 body=69 status=ok
// SIG undefined FUN_14373a760(void)

undefined8 * FUN_14373a760(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkLog::MultiOutput::vftable;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_14370d870(param_1 + 6,0);
  return param_1;
}



// FUNCTION 14373a7b0 FUN_14373a7b0 body=44 status=ok
// SIG undefined FUN_14373a7b0(void)

undefined8 *
FUN_14373a7b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  *param_1 = hkLog::PrintOutput::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[4] = param_2;
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14373a7e0 FUN_14373a7e0 body=97 status=ok
// SIG undefined FUN_14373a7e0(void)

undefined8 * FUN_14373a7e0(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined2 *)((longlong)param_1 + 10) = 1;
  FUN_14373a760(param_1 + 2);
  param_1[0xd] = param_2;
  param_1[0xe] = DAT_146b82948;
  *param_1 = param_1 + 2;
  DAT_146b82948 = param_1;
  return param_1;
}



// FUNCTION 14373a850 FUN_14373a850 body=183 status=ok
// SIG undefined FUN_14373a850(void)

undefined8 * FUN_14373a850(undefined8 *param_1)

{
  undefined1 local_res8;
  
  param_1[1] = 0;
  *param_1 = hkLog::Registry::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  FUN_14373a7b0(param_1 + 3,&LAB_14370cb60,0,2);
  param_1[3] = hkLog::Registry::BaseSystemOutput::vftable;
  FUN_14373a760(param_1 + 10);
  FUN_14373bf20(param_1 + 0x15,local_res8);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  FUN_14373af60(param_1,&DAT_146b82948);
  FUN_14373b010(param_1 + 10,param_1 + 3);
  return param_1;
}



// FUNCTION 14373a910 FUN_14373a910 body=50 status=ok
// SIG undefined FUN_14373a910(void)

undefined8 * FUN_14373a910(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkLog::TextOutput::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14373a950 FUN_14373a950 body=143 status=ok
// SIG undefined FUN_14373a950(void)

void FUN_14373a950(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  pvVar3 = TlsGetValue(DAT_146b8297c);
  pvVar4 = TlsGetValue(DAT_146b82978);
  cVar2 = FUN_14373b120(param_1,pvVar4,pvVar3);
  if (cVar2 == '\0') {
    FUN_14373b120(param_1,*(undefined8 *)*param_1,pvVar3);
    uVar1 = FUN_14373af50();
    FUN_14373b120(param_1,uVar1,pvVar3);
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14373b420(pvVar3,*(undefined4 *)(param_1 + 1));
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_143716650(param_1 + 2);
  return;
}



// FUNCTION 14373a9e0 FUN_14373a9e0 body=72 status=ok
// SIG undefined FUN_14373a9e0(void)

void FUN_14373a9e0(undefined8 *param_1)

{
  undefined1 local_48 [48];
  undefined4 local_18;
  
  if (*(int *)(param_1 + 3) < 6) {
    FUN_14373a730(local_48,*param_1);
    local_18 = 0xffffffff;
    FUN_14373a950(local_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00014373aa21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_146b8297c,(LPVOID)param_1[4]);
  return;
}



// FUNCTION 14373aa30 FUN_14373aa30 body=161 status=ok
// SIG undefined FUN_14373aa30(void)

void FUN_14373aa30(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkLog::MultiOutput::vftable;
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  uVar2 = FUN_143703a50();
  lVar1 = param_1[4];
  lVar3 = (longlong)(*(int *)(param_1 + 5) + -1);
  if (-1 < *(int *)(param_1 + 5) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar2,param_1[4],8,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_14373aae0(param_1);
  return;
}



// FUNCTION 14373aae0 FUN_14373aae0 body=15 status=ok
// SIG undefined FUN_14373aae0(void)

void FUN_14373aae0(undefined8 *param_1)

{
  *param_1 = hkLog::Output::vftable;
  FUN_14370c000();
  return;
}



// FUNCTION 14373aaf0 FUN_14373aaf0 body=348 status=ok
// SIG undefined FUN_14373aaf0(void)

void FUN_14373aaf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = hkLog::Registry::vftable;
  FUN_14373ba50();
  puVar1 = param_1 + 0x15;
  uVar3 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getIterator
                    (puVar1);
  iVar2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                    (puVar1,uVar3);
  while (iVar2 != 0) {
    lVar4 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getValue
                      (puVar1,uVar3);
    if (lVar4 != 0) {
      FUN_14370c150(lVar4);
    }
    uVar3 = FUN_14373c200(puVar1,uVar3);
    iVar2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                      (puVar1,uVar3);
  }
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xcc)) {
    FUN_143702e10(uVar3,param_1[0x18],8,*(uint *)((longlong)param_1 + 0xcc) & 0x3fffffff);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  uVar3 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getIterator
                    (puVar1);
  iVar2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                    (puVar1,uVar3);
  while (iVar2 != 0) {
    uVar5 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getKey
                      (puVar1,uVar3);
    uVar6 = FUN_143703a50();
    UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(uVar5,uVar6);
    uVar3 = FUN_14373c200(puVar1,uVar3);
    iVar2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                      (puVar1,uVar3);
  }
  hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::clear(puVar1);
  FUN_14373bf70(puVar1);
  FUN_14373aa30(param_1 + 10);
  FUN_14373aae0(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14373ac50 FUN_14373ac50 body=46 status=ok
// SIG undefined FUN_14373ac50(void)

void FUN_14373ac50(undefined8 *param_1)

{
  TlsSetValue(DAT_146b82978,(LPVOID)*param_1);
                    /* WARNING: Could not recover jumptable at 0x00014373ac77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_146b8297c,(LPVOID)param_1[1]);
  return;
}



// FUNCTION 14373ac80 FUN_14373ac80 body=139 status=ok
// SIG undefined FUN_14373ac80(void)

longlong FUN_14373ac80(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14373aae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 14373ad10 FUN_14373ad10 body=139 status=ok
// SIG undefined FUN_14373ad10(void)

longlong FUN_14373ad10(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14373aa30();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x58;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 14373ada0 FUN_14373ada0 body=139 status=ok
// SIG undefined FUN_14373ada0(void)

longlong FUN_14373ada0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14373aae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x20;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 14373ae30 FUN_14373ae30 body=139 status=ok
// SIG undefined FUN_14373ae30(void)

longlong FUN_14373ae30(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14373aaf0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xd0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
    }
  }
  return param_1;
}



// FUNCTION 14373aec0 FUN_14373aec0 body=139 status=ok
// SIG undefined FUN_14373aec0(void)

longlong FUN_14373aec0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143716990();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 14373af50 FUN_14373af50 body=12 status=ok
// SIG undefined FUN_14373af50(void)

longlong FUN_14373af50(void)

{
  return DAT_146b82980 + 0x50;
}



// FUNCTION 14373af60 FUN_14373af60 body=128 status=ok
// SIG undefined FUN_14373af60(void)

void FUN_14373af60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0xc0);
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    plVar2 = (longlong *)*plVar1;
    uVar5 = uVar4;
    do {
      if (*plVar2 == param_2) {
        if (-1 < (int)uVar5) {
          return;
        }
        break;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 200));
  }
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 200) == (*(uint *)(param_1 + 0xcc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,plVar1,8);
  }
  *(longlong *)(*plVar1 + (longlong)*(int *)(param_1 + 200) * 8) = param_2;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}



// FUNCTION 14373afe0 FUN_14373afe0 body=41 status=ok
// SIG undefined FUN_14373afe0(void)

undefined8 FUN_14373afe0(undefined8 param_1)

{
  if (DAT_146b82980 != 0) {
    FUN_14373af60(DAT_146b82980,param_1);
    return 0;
  }
  return 0x80040200;
}



// FUNCTION 14373b010 FUN_14373b010 body=270 status=ok
// SIG undefined FUN_14373b010(void)

void FUN_14373b010(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  iVar4 = *(int *)(param_1 + 0x28) + -1;
  if (-1 < iVar4) {
    lVar2 = (longlong)iVar4;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar2 * 8);
    do {
      if (*plVar3 == param_2) goto LAB_14373b074;
      iVar4 = iVar4 + -1;
      plVar3 = plVar3 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  iVar4 = -1;
LAB_14373b074:
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  if (iVar4 < 0) {
    if (param_2 != 0) {
      FUN_14370c030(param_2);
    }
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
      FUN_14370c460(uVar1,param_1 + 0x20,8);
    }
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8);
    if ((plVar3 != (longlong *)0x0) && (*plVar3 = param_2, param_2 != 0)) {
      FUN_14370c030(param_2);
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    if (param_2 != 0) {
      FUN_14370c150(param_2);
    }
    iVar4 = *(int *)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x18) < *(int *)(param_1 + 0x18)) {
      iVar4 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00014373b117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 14373b120 FUN_14373b120 body=83 status=ok
// SIG undefined FUN_14373b120(void)

ulonglong FUN_14373b120(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong in_RAX;
  
  if ((param_2 != (longlong *)0x0) &&
     (in_RAX = (ulonglong)*(uint *)(param_1 + 8), (int)*(uint *)(param_1 + 8) <= (int)param_2[3])) {
    if (param_3 != 0) {
      FUN_14373bcc0(param_3);
    }
    in_RAX = (**(code **)(*param_2 + 0x18))(param_2,param_1);
    if ((int)in_RAX == 1) {
      return in_RAX;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14373b180 FUN_14373b180 body=73 status=ok
// SIG undefined FUN_14373b180(void)

void FUN_14373b180(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + *(longlong *)(param_1 + 0x20)) + 0x20))();
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 14373b1d0 FUN_14373b1d0 body=8 status=ok
// SIG undefined FUN_14373b1d0(void)

undefined * FUN_14373b1d0(void)

{
  return &DAT_146b82988;
}



// FUNCTION 14373b1e0 FUN_14373b1e0 body=305 status=ok
// SIG undefined FUN_14373b1e0(void)

bool FUN_14373b1e0(longlong param_1,undefined8 *param_2,char *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  uVar1 = param_2[2];
  if ((uVar1 & 0xfffffffffffffffe) != 0) {
    local_58 = 0x2020202020202020;
    uStack_50 = 0x2020202020202020;
    local_38 = 0x2020202020202020;
    uStack_30 = 0x2020202020202020;
    local_48 = 0x2020202020202020;
    uStack_40 = 0x2020202020202020;
    local_18 = 0x2020202020202020;
    local_28 = 0x20202020;
    uStack_24 = 0x20202020;
    uStack_20 = 0x20202020;
    uStack_1c = 0x20202020;
    local_10 = 0x20202020;
    local_c = 0x20;
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x4d < iVar2) {
      iVar2 = 0x4d;
    }
    puVar3 = (undefined1 *)FUN_14373b320(*param_2);
    puVar4 = &DAT_145af3922;
    if (puVar3 != (undefined1 *)0x0) {
      puVar4 = puVar3;
    }
    hkStringBuf::printf(param_3,"%s[%s] %s",(longlong)&local_58 + (longlong)(0x4d - iVar2),puVar4,
                        uVar1 & 0xfffffffffffffffe);
    if (param_2[4] != 0) {
      hkStringBuf::printf(param_3," (%s:%i)",param_2[4],(ulonglong)*(uint *)(param_2 + 5));
    }
    FUN_143745710(param_3,&DAT_145af0af0,0xffffffff);
  }
  return (param_2[2] & 0xfffffffffffffffe) != 0;
}



// FUNCTION 14373b320 FUN_14373b320 body=20 status=ok
// SIG undefined FUN_14373b320(void)

undefined8 FUN_14373b320(longlong param_1)

{
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x68);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68);
}



// FUNCTION 14373b340 FUN_14373b340 body=121 status=ok
// SIG undefined FUN_14373b340(void)

undefined8 FUN_14373b340(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_143745f20(param_2);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    do {
      FUN_143745710(param_2,*(ulonglong *)(lVar2 + *(longlong *)(param_1 + 0x20)) &
                            0xfffffffffffffffe,0xffffffff);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (iVar1 < *(int *)(param_1 + 0x28));
  }
  if (*(int *)(param_2 + 1) == 1) {
    return 0;
  }
  return *param_2;
}



// FUNCTION 14373b3c0 FUN_14373b3c0 body=87 status=ok
// SIG undefined FUN_14373b3c0(void)

void FUN_14373b3c0(undefined8 *param_1,LPVOID param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b82978);
  *param_1 = pvVar1;
  TlsSetValue(DAT_146b82978,param_2);
  pvVar1 = TlsGetValue(DAT_146b8297c);
  param_1[1] = pvVar1;
                    /* WARNING: Could not recover jumptable at 0x00014373b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_146b8297c,(LPVOID)0x0);
  return;
}



// FUNCTION 14373b420 FUN_14373b420 body=23 status=ok
// SIG undefined FUN_14373b420(void)

void FUN_14373b420(longlong param_1,int param_2)

{
  for (; (param_1 != 0 && (param_2 < *(int *)(param_1 + 0x18)));
      param_1 = *(longlong *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x18) = param_2;
  }
  return;
}



// FUNCTION 14373b440 FUN_14373b440 body=118 status=ok
// SIG undefined FUN_14373b440(void)

undefined8 FUN_14373b440(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar3 * 8);
      iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      if (iVar2 == 1) {
        uVar4 = 1;
        goto LAB_14373b48e;
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  uVar4 = 0;
LAB_14373b48e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return uVar4;
}



// FUNCTION 14373b4c0 FUN_14373b4c0 body=480 status=ok
// SIG undefined FUN_14373b4c0(void)

undefined8 FUN_14373b4c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar7;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  if (*(int *)(param_2 + 1) <= *(int *)(param_1 + 0x18)) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x30);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + *(int *)(param_2 + 6);
    UNLOCK();
    uVar5 = param_2[2] & 0xfffffffffffffffe;
    if (uVar5 != 0) {
      local_98 = local_88;
      local_e8 = 0x2020202020202020;
      uStack_e0 = 0x2020202020202020;
      local_a0 = 0x20202020;
      local_c8 = 0x2020202020202020;
      uStack_c0 = 0x2020202020202020;
      local_d8 = 0x2020202020202020;
      uStack_d0 = 0x2020202020202020;
      local_9c = 0x20;
      local_a8 = 0x2020202020202020;
      local_8c = 0x80000080;
      local_90 = 1;
      local_88[0] = 0;
      local_b8 = 0x20202020;
      uStack_b4 = 0x20202020;
      uStack_b0 = 0x20202020;
      uStack_ac = 0x20202020;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x4d < iVar3) {
        iVar3 = 0x4d;
      }
      lVar6 = (longlong)&local_e8 + (longlong)(0x4d - iVar3);
      puVar2 = (undefined1 *)FUN_14373b320(*param_2);
      puVar4 = &DAT_145af3922;
      if (puVar2 != (undefined1 *)0x0) {
        puVar4 = puVar2;
      }
      if (*(int *)((longlong)param_2 + 0xc) == 0) {
        hkStringBuf::printf((char *)&local_98,"%s[%s] %s",lVar6,puVar4,uVar5);
      }
      else {
        hkStringBuf::printf((char *)&local_98,"%s[%s] [0x%08x] %s",lVar6,puVar4,
                            CONCAT44(uVar7,*(int *)((longlong)param_2 + 0xc)),uVar5);
      }
      if (param_2[4] != 0) {
        hkStringBuf::printf((char *)&local_98," (%s:%i)",param_2[4],
                            (ulonglong)*(uint *)(param_2 + 5));
      }
      FUN_143745710(&local_98,&DAT_145af0af0,0xffffffff);
      (**(code **)(param_1 + 0x20))(local_98,*(undefined8 *)(param_1 + 0x28));
      local_90 = 0;
      if (-1 < (int)local_8c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
      }
    }
  }
  return 0;
}



// FUNCTION 14373b6a0 FUN_14373b6a0 body=571 status=ok
// SIG undefined FUN_14373b6a0(void)

undefined8 FUN_14373b6a0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  local_98 = local_88;
  local_8c = 0x80000080;
  local_90 = 1;
  local_88[0] = 0;
  FUN_14373b1e0(param_1,param_2,&local_98);
  if ((int)*(uint *)(param_2 + 0x30) < 1) {
    if (*(uint *)(param_2 + 0x30) < 0x80000000) {
      iVar1 = *(int *)(param_1 + 0x28) + -1;
      lVar5 = (longlong)iVar1;
      if (-1 < iVar1) {
        lVar4 = lVar5 << 4;
        do {
          if (*(char *)(lVar4 + 8 + *(longlong *)(param_1 + 0x20)) != '\0') break;
          *(undefined1 *)(lVar4 + 8 + *(longlong *)(param_1 + 0x20)) = 1;
          lVar4 = lVar4 + -0x10;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
      uVar2 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
        FUN_14370c460(uVar2,param_1 + 0x20,0x10);
      }
      puVar3 = (undefined8 *)
               ((longlong)*(int *)(param_1 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x20));
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
      }
      lVar5 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x20);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      FUN_143716690(lVar5,&local_98);
      *(undefined1 *)(lVar5 + 8) = 1;
    }
    else if (*(char *)(*(longlong *)(param_1 + 0x20) + 8 +
                      (longlong)(*(int *)(param_1 + 0x28) + -1) * 0x10) == '\0') {
      FUN_143716650((longlong)*(int *)(param_1 + 0x28) * 0x10 +
                    *(longlong *)(param_1 + 0x20) + -0x10);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
    else {
      uVar2 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
        FUN_14370c460(uVar2,param_1 + 0x20,0x10);
      }
      puVar3 = (undefined8 *)
               ((longlong)*(int *)(param_1 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x20));
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
      }
      lVar5 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x20);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      FUN_143716690(lVar5,&local_98);
      *(undefined1 *)(lVar5 + 8) = 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
  }
  else {
    uVar2 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
      FUN_14370c460(uVar2,param_1 + 0x20,0x10);
    }
    puVar3 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x20));
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + *(longlong *)(param_1 + 0x20);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    FUN_143716690(lVar5,&local_98);
    *(undefined1 *)(lVar5 + 8) = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return 0;
}



// FUNCTION 14373b8e0 FUN_14373b8e0 body=161 status=ok
// SIG undefined FUN_14373b8e0(void)

void FUN_14373b8e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    lVar3 = 0;
    plVar1 = *(longlong **)(param_1 + 0xc0);
    while ((longlong *)*plVar1 != param_2) {
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
      plVar1 = plVar1 + 1;
      if (*(int *)(param_1 + 200) <= lVar3) {
        return;
      }
    }
    if (-1 < iVar2) {
      for (lVar3 = *param_2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x70)) {
        FUN_14373b990(lVar3 + 0x10);
      }
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
      if (*(int *)(param_1 + 200) != iVar2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar2 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (longlong)*(int *)(param_1 + 200) * 8);
      }
    }
  }
  return;
}



// FUNCTION 14373b990 FUN_14373b990 body=140 status=ok
// SIG undefined FUN_14373b990(void)

void FUN_14373b990(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_143703a50();
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 14373ba20 FUN_14373ba20 body=41 status=ok
// SIG undefined FUN_14373ba20(void)

undefined8 FUN_14373ba20(undefined8 param_1)

{
  if (DAT_146b82980 != 0) {
    FUN_14373b8e0(DAT_146b82980,param_1);
    return 0;
  }
  return 0x80040200;
}



// FUNCTION 14373ba50 FUN_14373ba50 body=120 status=ok
// SIG undefined FUN_14373ba50(void)

void FUN_14373ba50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    lVar2 = 0;
    do {
      for (lVar1 = **(longlong **)(lVar2 + *(longlong *)(param_1 + 0xc0)); lVar1 != 0;
          lVar1 = *(longlong *)(lVar1 + 0x70)) {
        FUN_14373b990(lVar1 + 0x10);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 200));
  }
  return;
}



// FUNCTION 14373bad0 FUN_14373bad0 body=246 status=ok
// SIG undefined FUN_14373bad0(void)

void FUN_14373bad0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 local_res8;
  ulonglong local_res10 [3];
  
  local_res10[0] = param_2;
  if (10 < param_2) {
    local_res8 = 10;
    cVar2 = FUN_143755360(0,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Types/hkVarArgsV.h"
                          ,0x4e,"hkVarArgs::FixedArray<10>::setSize","size <= N",
                          "Invalid FixedArray size {} greater than array capacity {}.",
                          &DAT_145b90048,local_res10,&local_res8,0);
    if (cVar2 != '\0') {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*param_1 == 0) && (local_res10[0] != 0)) {
    cVar2 = FUN_143755360(0,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Types/hkVarArgsV.h"
                          ,0x4f,"hkVarArgs::FixedArray<10>::setSize","m_begin || (size == 0)",
                          "Cannot setSize({}) with m_begin={}.",&DAT_145b75b78,local_res10,param_1,0
                         );
    if (cVar2 != '\0') {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1[1] = local_res10[0] * 0x10 + *param_1;
  return;
}



// FUNCTION 14373bbd0 FUN_14373bbd0 body=226 status=ok
// SIG undefined FUN_14373bbd0(void)

longlong FUN_14373bbd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined8 *local_168 [2];
  undefined1 *local_158;
  undefined4 local_150;
  uint local_14c;
  undefined1 local_148 [128];
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [160];
  undefined1 local_18 [8];
  
  local_c8 = local_b8;
  local_c0 = local_18;
  local_168[0] = &local_res20;
  local_res20 = param_4;
  uVar1 = FUN_1437810e0(&local_c8,param_3,local_168);
  FUN_14373bad0(&local_c8,uVar1);
  local_158 = local_148;
  local_14c = 0x80000080;
  local_150 = 1;
  local_148[0] = 0;
  ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation(&local_158,param_2,&local_c8);
  FUN_143716690(param_1 + 0x10,&local_158);
  local_150 = 0;
  if (-1 < (int)local_14c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_158,1,local_14c & 0x3fffffff);
  }
  return param_1;
}



// FUNCTION 14373bcc0 FUN_14373bcc0 body=606 status=ok
// SIG undefined FUN_14373bcc0(void)

void FUN_14373bcc0(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  ulonglong local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  ulonglong local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined1 local_138 [128];
  undefined8 local_b8 [20];
  ulonglong uVar7;
  
  if ((int)param_2[3] < *(int *)(param_1 + 3)) {
    local_res10 = param_2;
    if (param_1[4] != 0) {
      FUN_14373bcc0();
    }
    FUN_14373a730(local_188,*param_1,(int)param_2[3]);
    local_168 = param_1[5];
    uVar5 = 0;
    local_198 = param_1[2];
    local_160 = *(undefined4 *)(param_1 + 6);
    local_1a0 = (undefined8 *)param_1[1];
    local_158 = 1;
    local_15c = 0;
    local_res18 = *local_1a0;
    local_190 = 0;
    hkReflect::DeclIterAll::DeclIterAll(&local_1d8,local_198,0);
    do {
      puVar8 = local_1d8 + 1;
      if ((local_1d0 <= local_1d8 + 1) &&
         (cVar3 = FUN_1437144f0(&local_1d8), puVar8 = local_1d8, cVar3 == '\0')) break;
      local_1d8 = puVar8;
      pbVar4 = (byte *)FUN_143714f30(local_1d8,local_res8);
    } while ((*pbVar4 & 0x20) == 0);
    puVar8 = local_b8 + 1;
    uVar7 = uVar5;
LAB_14373bdb0:
    do {
      uVar6 = (uint)uVar7;
      puVar2 = local_1d8 + 1;
      if ((local_1d8 + 1 < local_1d0) ||
         (cVar3 = FUN_1437144f0(&local_1d8), puVar2 = local_1d8, cVar3 != '\0')) {
        local_1d8 = puVar2;
        pbVar4 = (byte *)FUN_143714f30(local_1d8,local_res8);
        if ((*pbVar4 & 0x20) == 0) goto LAB_14373bdb0;
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      FUN_143741f50(&local_1a0,&local_1b8,*local_1d8);
      puVar8[-1] = local_1b8;
      *puVar8 = local_1b0;
      if ((local_1a8 & 1) != 0) {
        FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
      }
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 2;
    } while ((longlong)uVar5 < 10);
    local_148 = local_138;
    local_1b8 = local_b8;
    local_13c = 0x80000080;
    local_1b0 = local_b8 + (longlong)(int)uVar6 * 2;
    local_140 = 1;
    local_138[0] = 0;
    ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation(&local_148,local_res18,&local_1b8);
    FUN_1437166c0(local_178,local_148);
    local_140 = 0;
    if (-1 < (int)local_13c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_148,1,local_13c & 0x3fffffff);
    }
    local_148 = (undefined1 *)0x0;
    local_13c = 0x80000000;
    if ((local_190 & 1) != 0) {
      FUN_143733a60(local_190 & 0xfffffffffffffffe);
    }
    (**(code **)(*local_res10 + 0x18))(local_res10,local_188);
    if (local_170 != 0) {
      FUN_14370c150();
    }
    FUN_143716650(local_178);
  }
  return;
}



// FUNCTION 14373bf20 FUN_14373bf20 body=76 status=ok
// SIG undefined FUN_14373bf20(void)

undefined8 * FUN_14373bf20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  uVar1 = FUN_143702b60(uVar1,0x18,0x10);
  *param_1 = uVar1;
  FUN_14370c720(uVar1,0xff,0x180);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xf;
  return param_1;
}



// FUNCTION 14373bf70 FUN_14373bf70 body=43 status=ok
// SIG undefined FUN_14373bf70(void)

void FUN_14373bf70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  FUN_143702c60(uVar1,*param_1,0x18,*(int *)((longlong)param_1 + 0xc) + 1);
  return;
}



// FUNCTION 14373bfa0 clear body=52 status=ok
// SIG undefined clear(void)

void hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::clear
               (longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((longlong)param_1 + 0xc) + 1) {
    lVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined8 *)(lVar1 + *param_1) = 0xffffffffffffffff;
      lVar1 = lVar1 + 0x18;
    } while (iVar2 < *(int *)((longlong)param_1 + 0xc) + 1);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14373bfe0 FUN_14373bfe0 body=149 status=ok
// SIG undefined FUN_14373bfe0(void)

ulonglong FUN_14373bfe0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = FUN_143740180(param_2);
  uVar5 = (longlong)*(int *)((longlong)param_1 + 0xc) & (ulonglong)uVar3;
  lVar1 = *param_1 + uVar5 * 0x18;
  uVar2 = *(ulonglong *)(*param_1 + uVar5 * 0x18);
  while( true ) {
    if (uVar2 == 0xffffffffffffffff) {
      return (longlong)(*(int *)((longlong)param_1 + 0xc) + 1);
    }
    if ((uVar2 == uVar3) &&
       (iVar4 = hkString::strCmp(param_2,*(undefined8 *)(lVar1 + 8)), iVar4 == 0)) break;
    uVar5 = uVar5 + 1 & (longlong)*(int *)((longlong)param_1 + 0xc);
    lVar1 = *param_1 + uVar5 * 0x18;
    uVar2 = *(ulonglong *)(*param_1 + uVar5 * 0x18);
  }
  return uVar5;
}



// FUNCTION 14373c080 FUN_14373c080 body=206 status=ok
// SIG undefined FUN_14373c080(void)

ulonglong FUN_14373c080(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14373c420(param_1,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  uVar2 = FUN_143740180(param_2);
  uVar5 = (ulonglong)uVar2;
  uVar4 = (longlong)*(int *)((longlong)param_1 + 0xc) & uVar5;
  while( true ) {
    lVar1 = uVar4 * 0x18;
    if ((*(ulonglong *)(lVar1 + *param_1) == uVar5) &&
       (iVar3 = hkString::strCmp(param_2,*(undefined8 *)(lVar1 + 8 + *param_1)), iVar3 == 0)) break;
    if (*(longlong *)(lVar1 + *param_1) == -1) {
      lVar1 = uVar4 * 0x18;
      *(ulonglong *)(lVar1 + *param_1) = uVar5;
      *(undefined8 *)(lVar1 + 8 + *param_1) = param_2;
      *(undefined8 *)(lVar1 + 0x10 + *param_1) = param_3;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      return uVar4;
    }
    uVar4 = uVar4 + 1 & (longlong)*(int *)((longlong)param_1 + 0xc);
  }
  return uVar4;
}



// FUNCTION 14373c150 FUN_14373c150 body=109 status=ok
// SIG undefined FUN_14373c150(void)

undefined4 *
FUN_14373c150(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14373bfe0(param_1,param_3);
  iVar1 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                    (param_1,uVar2);
  if (iVar1 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    uVar2 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getValue
                      (param_1,uVar2);
    *param_4 = uVar2;
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14373c1c0 getIterator body=41 status=ok
// SIG undefined getIterator(void)

longlong hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getIterator
                   (undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    plVar2 = (longlong *)*param_1;
    lVar3 = 0;
    do {
      if (*plVar2 != -1) break;
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 3;
    } while (lVar3 <= *(int *)((longlong)param_1 + 0xc));
  }
  return (longlong)iVar1;
}



// FUNCTION 14373c1f0 getKey body=16 status=ok
// SIG undefined getKey(void)

undefined8
hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getKey
          (longlong *param_1,int param_2)

{
  return *(undefined8 *)(*param_1 + 8 + (longlong)param_2 * 0x18);
}



// FUNCTION 14373c200 FUN_14373c200 body=55 status=ok
// SIG undefined FUN_14373c200(void)

longlong FUN_14373c200(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_2 = param_2 + 1;
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    lVar1 = (longlong)param_2;
    plVar2 = (longlong *)(*param_1 + lVar1 * 0x18);
    do {
      if (*plVar2 != -1) break;
      param_2 = param_2 + 1;
      lVar1 = lVar1 + 1;
      plVar2 = plVar2 + 3;
    } while (lVar1 <= *(int *)((longlong)param_1 + 0xc));
  }
  return (longlong)param_2;
}



// FUNCTION 14373c240 FUN_14373c240 body=100 status=ok
// SIG undefined FUN_14373c240(void)

undefined8 FUN_14373c240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14373bfe0();
  iVar1 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
                    (param_1,uVar2);
  if (iVar1 == 0) {
    FUN_14373c2f0(param_1,param_2,param_3);
  }
  else {
    param_3 = hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getValue
                        (param_1,uVar2);
  }
  return param_3;
}



// FUNCTION 14373c2b0 getValue body=16 status=ok
// SIG undefined getValue(void)

undefined8
hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::getValue
          (longlong *param_1,int param_2)

{
  return *(undefined8 *)(*param_1 + 0x10 + (longlong)param_2 * 0x18);
}



// FUNCTION 14373c2c0 FUN_14373c2c0 body=37 status=ok
// SIG undefined FUN_14373c2c0(void)

undefined8 FUN_14373c2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res20 = param_3;
  FUN_14373c150(param_1,local_res18,param_2,&local_res20);
  return local_res20;
}



// FUNCTION 14373c2f0 FUN_14373c2f0 body=233 status=ok
// SIG undefined FUN_14373c2f0(void)

bool FUN_14373c2f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = FUN_143740180(param_2);
  uVar6 = (ulonglong)uVar4;
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_14373c420(param_1,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  lVar3 = param_1[1];
  uVar7 = (longlong)*(int *)((longlong)param_1 + 0xc) & uVar6;
  lVar1 = uVar7 * 0x18;
  lVar2 = *(longlong *)(lVar1 + *param_1);
  while (lVar2 != -1) {
    if ((*(ulonglong *)(lVar1 + *param_1) == uVar6) &&
       (iVar5 = hkString::strCmp(param_2,*(undefined8 *)(lVar1 + 8 + *param_1)), iVar5 == 0))
    goto LAB_14373c394;
    uVar7 = uVar7 + 1 & (longlong)*(int *)((longlong)param_1 + 0xc);
    lVar1 = uVar7 * 0x18;
    lVar2 = *(longlong *)(lVar1 + *param_1);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
LAB_14373c394:
  lVar1 = uVar7 * 0x18;
  *(ulonglong *)(lVar1 + *param_1) = uVar6;
  *(undefined8 *)(lVar1 + 8 + *param_1) = param_2;
  *(undefined8 *)(lVar1 + 0x10 + *param_1) = param_3;
  return (int)lVar3 != (int)param_1[1];
}



// FUNCTION 14373c3e0 isValid body=9 status=ok
// SIG undefined isValid(void)

bool hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::isValid
               (longlong param_1,int param_2)

{
  return param_2 <= *(int *)(param_1 + 0xc);
}



// FUNCTION 14373c3f0 FUN_14373c3f0 body=36 status=ok
// SIG undefined FUN_14373c3f0(void)

void FUN_14373c3f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar4 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar4 = iVar4 * 2;
    } while (iVar4 < param_2 * 2);
  }
  if (iVar4 <= *(int *)((longlong)param_1 + 0xc) + 1) {
    return;
  }
  lVar1 = *param_1;
  iVar6 = *(int *)((longlong)param_1 + 0xc) + 1;
  uVar2 = FUN_143703a50();
  lVar3 = FUN_143702b60(uVar2,0x18,iVar4);
  *param_1 = lVar3;
  FUN_14370c720(lVar3,0xff,iVar4 * 0x18);
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((longlong)param_1 + 0xc) = iVar4 + -1;
  lVar3 = (longlong)iVar6;
  if (0 < iVar6) {
    puVar5 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar5[-1] != -1) {
        FUN_14373c2f0(param_1,*puVar5,puVar5[1]);
      }
      puVar5 = puVar5 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  FUN_143702c60(uVar2,lVar1,0x18,iVar6);
  return;
}



// FUNCTION 14373c420 FUN_14373c420 body=188 status=ok
// SIG undefined FUN_14373c420(void)

void FUN_14373c420(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar5 = *(int *)((longlong)param_1 + 0xc) + 1;
  uVar2 = FUN_143703a50();
  lVar3 = FUN_143702b60(uVar2,0x18,param_2);
  *param_1 = lVar3;
  FUN_14370c720(lVar3,0xff,param_2 * 0x18);
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((longlong)param_1 + 0xc) = param_2 + -1;
  lVar3 = (longlong)iVar5;
  if (0 < iVar5) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != -1) {
        FUN_14373c2f0(param_1,*puVar4,puVar4[1]);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  FUN_143702c60(uVar2,lVar1,0x18,iVar5);
  return;
}



// FUNCTION 14373c4e0 FUN_14373c4e0 body=16 status=ok
// SIG undefined FUN_14373c4e0(void)

void FUN_14373c4e0(longlong *param_1,int param_2,undefined8 param_3)

{
  *(undefined8 *)(*param_1 + 0x10 + (longlong)param_2 * 0x18) = param_3;
  return;
}



// FUNCTION 14373c4f0 FUN_14373c4f0 body=54 status=ok
// SIG undefined FUN_14373c4f0(void)

undefined4 *
FUN_14373c4f0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  if (*param_5 == 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  FUN_14373ca50();
  return param_2;
}



// FUNCTION 14373c530 func body=50 status=ok
// SIG undefined func(void)

void hkReflect::Detail::Trivial<64>::func(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1437152f0(param_2);
  FUN_14370c720(param_1,0,(longlong)(iVar1 * param_3));
  return;
}



// FUNCTION 14373c570 FUN_14373c570 body=113 status=ok
// SIG undefined FUN_14373c570(void)

void FUN_14373c570(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_14373daa0();
  FUN_14373cbd0(uVar1);
  FUN_14373cd10(uVar1);
  FUN_14373cc70(uVar1);
  puVar2 = (undefined8 *)FUN_143714420(uVar1,2);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  plVar3 = (longlong *)FUN_143714420(uVar4,0x200);
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    puVar2 = (undefined8 *)FUN_1437143d0(uVar1,0x200);
    *puVar2 = FUN_14373e190;
  }
  return;
}



// FUNCTION 14373c5f0 func body=64 status=ok
// SIG undefined func(void)

void hkReflect::Detail::Trivial<512>::func
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_1437152f0(param_3);
  FUN_143732890(param_1,param_2,(longlong)(iVar1 * param_4));
  return;
}



// FUNCTION 14373c630 FUN_14373c630 body=29 status=ok
// SIG undefined FUN_14373c630(void)

undefined8 FUN_14373c630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14373d8d0(param_2,param_3);
  return param_2;
}



// FUNCTION 14373c650 FUN_14373c650 body=26 status=ok
// SIG undefined FUN_14373c650(void)

undefined8
FUN_14373c650(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)*param_1)(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 14373c670 FUN_14373c670 body=11 status=ok
// SIG undefined FUN_14373c670(void)

void FUN_14373c670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14373daf0(param_2,param_3);
  return;
}



// FUNCTION 14373c680 FUN_14373c680 body=99 status=ok
// SIG undefined FUN_14373c680(void)

undefined8 * FUN_14373c680(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::Detail::AllocationImpl::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 14373c6f0 FUN_14373c6f0 body=209 status=ok
// SIG undefined FUN_14373c6f0(void)

undefined4 *
FUN_14373c6f0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)FUN_143714420(param_4,2);
  if (plVar3 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar3;
  }
  lVar1 = param_5[1];
  puVar4 = (undefined8 *)FUN_143714490(lVar7,1);
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*puVar4;
  }
  lVar5 = 0;
  if ((uVar6 & 0xf) == 0) {
    lVar5 = lVar7;
  }
  if ((((lVar5 == 0) && (lVar1 != 0)) && (cVar2 = FUN_143714910(lVar1,lVar7), cVar2 == '\0')) &&
     (*param_5 != 0)) {
    *param_2 = 0x80040200;
    return param_2;
  }
  lVar7 = *param_5;
  lVar1 = *param_3;
  *param_3 = lVar7;
  if (lVar7 != 0) {
    FUN_14370c030();
  }
  if (lVar1 != 0) {
    FUN_14370c150(lVar1);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373c7d0 FUN_14373c7d0 body=56 status=ok
// SIG undefined FUN_14373c7d0(void)

undefined4 *
FUN_14373c7d0(undefined8 param_1,undefined4 *param_2,undefined1 *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_5;
  if ((char)param_5[1] == '\0') {
    if (0xff < uVar1) goto LAB_14373c801;
  }
  else {
    if (0x80 < uVar1) {
LAB_14373c801:
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar1 = (ulonglong)(byte)(~(byte)uVar1 + 1);
  }
  *param_3 = (char)uVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373c810 FUN_14373c810 body=26 status=ok
// SIG undefined FUN_14373c810(void)

undefined4 *
FUN_14373c810(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  byte bVar1;
  
  bVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)bVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 14373c830 FUN_14373c830 body=120 status=ok
// SIG undefined FUN_14373c830(void)

longlong FUN_14373c830(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d030();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373c8b0 FUN_14373c8b0 body=45 status=ok
// SIG undefined FUN_14373c8b0(void)

undefined4 *
FUN_14373c8b0(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,
             double param_5)

{
  *param_2 = 0;
  *param_3 = (short)((uint)((float)param_5 * 1.0039062) >> 0x10);
  return param_2;
}



// FUNCTION 14373c8e0 FUN_14373c8e0 body=39 status=ok
// SIG undefined FUN_14373c8e0(void)

undefined4 *
FUN_14373c8e0(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             double *param_5)

{
  short sVar1;
  
  sVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)(float)((int)sVar1 << 0x10);
  return param_2;
}



// FUNCTION 14373c910 FUN_14373c910 body=120 status=ok
// SIG undefined FUN_14373c910(void)

longlong FUN_14373c910(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d010();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373c990 FUN_14373c990 body=21 status=ok
// SIG undefined FUN_14373c990(void)

undefined4 *
FUN_14373c990(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 14373c9b0 FUN_14373c9b0 body=121 status=ok
// SIG undefined FUN_14373c9b0(void)

undefined4 *
FUN_14373c9b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_5 != 0) {
    iVar1 = FUN_1437152f0(param_4);
    iVar2 = FUN_14370c910(param_5);
    if (iVar1 <= iVar2) {
      *param_2 = 0x80040200;
      return param_2;
    }
    hkString::strNcpy(param_3,iVar1,param_5,iVar1);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373ca30 FUN_14373ca30 body=18 status=ok
// SIG undefined FUN_14373ca30(void)

undefined4 *
FUN_14373ca30(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_2 = 0;
  *param_5 = param_3;
  return param_2;
}



// FUNCTION 14373ca50 FUN_14373ca50 body=183 status=ok
// SIG undefined FUN_14373ca50(void)

undefined4 *
FUN_14373ca50(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)FUN_143714420(param_4,2);
  if (plVar3 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar3;
  }
  lVar1 = param_5[1];
  puVar4 = (undefined8 *)FUN_143714490(lVar7,1);
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*puVar4;
  }
  lVar5 = 0;
  if ((uVar6 & 0xf) == 0) {
    lVar5 = lVar7;
  }
  if ((((lVar5 == 0) && (lVar1 != 0)) && (cVar2 = FUN_143714910(lVar1,lVar7), cVar2 == '\0')) &&
     (*param_5 != 0)) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_3 = *param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373cb10 FUN_14373cb10 body=188 status=ok
// SIG undefined FUN_14373cb10(void)

undefined4 *
FUN_14373cb10(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 local_18 [16];
  
  uVar1 = *param_3;
  puVar3 = (undefined8 *)FUN_143714420(param_4,2);
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar3;
  }
  puVar3 = (undefined8 *)FUN_14371d5c0(local_18,uVar1,uVar5);
  lVar2 = puVar3[1];
  uVar1 = *puVar3;
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1437151a0(lVar2);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  *param_5 = uVar1;
  param_5[1] = lVar2;
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = uVar4;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373cbd0 FUN_14373cbd0 body=146 status=ok
// SIG undefined FUN_14373cbd0(void)

void FUN_14373cbd0(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  puVar1 = (undefined8 *)FUN_143714420(uVar3,0x40);
  pcVar2 = (code *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
  }
  if (pcVar2 == hkReflect::Detail::Trivial<64>::func) {
    puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x40);
    *puVar1 = hkReflect::Detail::Trivial<64>::func;
    return;
  }
  if (pcVar2 != (code *)0x0) {
    puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x40);
    *puVar1 = FUN_14373e220;
    return;
  }
  puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x40);
  *puVar1 = 0;
  return;
}



// FUNCTION 14373cc70 FUN_14373cc70 body=146 status=ok
// SIG undefined FUN_14373cc70(void)

void FUN_14373cc70(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  puVar1 = (undefined8 *)FUN_143714420(uVar3,0x400);
  pcVar2 = (code *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
  }
  if (pcVar2 == hkReflect::Detail::Trivial<512>::func) {
    puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x400);
    *puVar1 = hkReflect::Detail::Trivial<512>::func;
    return;
  }
  if (pcVar2 != (code *)0x0) {
    puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x400);
    *puVar1 = FUN_14373e2b0;
    return;
  }
  puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x400);
  *puVar1 = 0;
  return;
}



// FUNCTION 14373cd10 FUN_14373cd10 body=146 status=ok
// SIG undefined FUN_14373cd10(void)

void FUN_14373cd10(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  puVar1 = (undefined8 *)FUN_143714420(uVar3,0x80);
  pcVar2 = (code *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
  }
  if (pcVar2 == hkReflect::Detail::Trivial<512>::func) {
    puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x80);
    *puVar1 = hkReflect::Detail::Trivial<512>::func;
    return;
  }
  if (pcVar2 != (code *)0x0) {
    puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x80);
    *puVar1 = FUN_14373e340;
    return;
  }
  puVar1 = (undefined8 *)FUN_1437143d0(param_1,0x80);
  *puVar1 = 0;
  return;
}



// FUNCTION 14373cdb0 FUN_14373cdb0 body=104 status=ok
// SIG undefined FUN_14373cdb0(void)

void FUN_14373cdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_143714420(param_3,0x400);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  `anonymous_namespace'::runBinaryFunction(uVar2,param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 14373ce20 FUN_14373ce20 body=116 status=ok
// SIG undefined FUN_14373ce20(void)

void FUN_14373ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)FUN_143714420(param_3,0x80);
  if (puVar1 == (undefined8 *)0x0) {
    pcVar2 = (code *)0x0;
  }
  else {
    pcVar2 = (code *)*puVar1;
  }
  if (pcVar2 != hkReflect::Detail::Trivial<512>::func) {
    `anonymous_namespace'::runBinaryFunction(pcVar2,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 14373cea0 FUN_14373cea0 body=97 status=ok
// SIG undefined FUN_14373cea0(void)

void FUN_14373cea0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_143714420(param_2,0x200);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    `anonymous_namespace'::runUnaryFunction(*plVar1,param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 14373cf10 FUN_14373cf10 body=108 status=ok
// SIG undefined FUN_14373cf10(void)

void FUN_14373cf10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)FUN_143714420(param_2,0x40);
  if (puVar1 == (undefined8 *)0x0) {
    pcVar2 = (code *)0x0;
  }
  else {
    pcVar2 = (code *)*puVar1;
  }
  if (pcVar2 != hkReflect::Detail::Trivial<64>::func) {
    `anonymous_namespace'::runUnaryFunction(pcVar2,param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 14373cf80 RawPointerImpl body=33 status=ok
// SIG undefined RawPointerImpl(void)

undefined8 * hkReflect::Detail::RawPointerImpl::RawPointerImpl(undefined8 *param_1)

{
  Impl::Impl();
  *param_1 = RepeatImpl::vftable;
  return param_1;
}



// FUNCTION 14373cfb0 FUN_14373cfb0 body=15 status=ok
// SIG undefined FUN_14373cfb0(void)

void FUN_14373cfb0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::BoolImplN<unsigned_char>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373cfc0 FUN_14373cfc0 body=15 status=ok
// SIG undefined FUN_14373cfc0(void)

void FUN_14373cfc0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::BoolImplN<unsigned_short>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373cfd0 FUN_14373cfd0 body=15 status=ok
// SIG undefined FUN_14373cfd0(void)

void FUN_14373cfd0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::BoolImplN<unsigned_int>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373cfe0 FUN_14373cfe0 body=15 status=ok
// SIG undefined FUN_14373cfe0(void)

void FUN_14373cfe0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::BoolImplN<bool>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373cff0 FUN_14373cff0 body=15 status=ok
// SIG undefined FUN_14373cff0(void)

void FUN_14373cff0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::FloatImplN<float>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d000 FUN_14373d000 body=15 status=ok
// SIG undefined FUN_14373d000(void)

void FUN_14373d000(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::FloatImplN<double>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d010 FUN_14373d010 body=15 status=ok
// SIG undefined FUN_14373d010(void)

void FUN_14373d010(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::FloatImplN<hkHalf16>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d020 FUN_14373d020 body=15 status=ok
// SIG undefined FUN_14373d020(void)

void FUN_14373d020(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<signed_char>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d030 FUN_14373d030 body=15 status=ok
// SIG undefined FUN_14373d030(void)

void FUN_14373d030(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<char>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d040 FUN_14373d040 body=15 status=ok
// SIG undefined FUN_14373d040(void)

void FUN_14373d040(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned_char>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d050 FUN_14373d050 body=15 status=ok
// SIG undefined FUN_14373d050(void)

void FUN_14373d050(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<short>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d060 FUN_14373d060 body=15 status=ok
// SIG undefined FUN_14373d060(void)

void FUN_14373d060(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned_short>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d070 FUN_14373d070 body=15 status=ok
// SIG undefined FUN_14373d070(void)

void FUN_14373d070(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<int>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d080 FUN_14373d080 body=15 status=ok
// SIG undefined FUN_14373d080(void)

void FUN_14373d080(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned_int>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d090 FUN_14373d090 body=15 status=ok
// SIG undefined FUN_14373d090(void)

void FUN_14373d090(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<long>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d0a0 FUN_14373d0a0 body=15 status=ok
// SIG undefined FUN_14373d0a0(void)

void FUN_14373d0a0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned_long>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d0b0 FUN_14373d0b0 body=15 status=ok
// SIG undefined FUN_14373d0b0(void)

void FUN_14373d0b0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<__int64>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d0c0 FUN_14373d0c0 body=15 status=ok
// SIG undefined FUN_14373d0c0(void)

void FUN_14373d0c0(undefined8 *param_1)

{
  *param_1 = hkReflect::Detail::IntImplN<unsigned___int64>::vftable;
  FUN_143732980();
  return;
}



// FUNCTION 14373d0d0 FUN_14373d0d0 body=120 status=ok
// SIG undefined FUN_14373d0d0(void)

longlong FUN_14373d0d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373cfb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d150 FUN_14373d150 body=120 status=ok
// SIG undefined FUN_14373d150(void)

longlong FUN_14373d150(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373cfc0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d1d0 FUN_14373d1d0 body=120 status=ok
// SIG undefined FUN_14373d1d0(void)

longlong FUN_14373d1d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373cfd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d250 FUN_14373d250 body=120 status=ok
// SIG undefined FUN_14373d250(void)

longlong FUN_14373d250(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373cfe0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d2d0 FUN_14373d2d0 body=120 status=ok
// SIG undefined FUN_14373d2d0(void)

longlong FUN_14373d2d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373cff0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d350 FUN_14373d350 body=120 status=ok
// SIG undefined FUN_14373d350(void)

longlong FUN_14373d350(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d3d0 FUN_14373d3d0 body=120 status=ok
// SIG undefined FUN_14373d3d0(void)

longlong FUN_14373d3d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d020();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d450 FUN_14373d450 body=120 status=ok
// SIG undefined FUN_14373d450(void)

longlong FUN_14373d450(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d040();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d4d0 FUN_14373d4d0 body=120 status=ok
// SIG undefined FUN_14373d4d0(void)

longlong FUN_14373d4d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d050();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d550 FUN_14373d550 body=120 status=ok
// SIG undefined FUN_14373d550(void)

longlong FUN_14373d550(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d060();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d5d0 FUN_14373d5d0 body=120 status=ok
// SIG undefined FUN_14373d5d0(void)

longlong FUN_14373d5d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d070();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d650 FUN_14373d650 body=120 status=ok
// SIG undefined FUN_14373d650(void)

longlong FUN_14373d650(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d080();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d6d0 FUN_14373d6d0 body=120 status=ok
// SIG undefined FUN_14373d6d0(void)

longlong FUN_14373d6d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d090();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d750 FUN_14373d750 body=120 status=ok
// SIG undefined FUN_14373d750(void)

longlong FUN_14373d750(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d0a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d7d0 FUN_14373d7d0 body=120 status=ok
// SIG undefined FUN_14373d7d0(void)

longlong FUN_14373d7d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d0b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d850 FUN_14373d850 body=120 status=ok
// SIG undefined FUN_14373d850(void)

longlong FUN_14373d850(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_14373d0c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
    }
  }
  return param_1;
}



// FUNCTION 14373d8d0 FUN_14373d8d0 body=192 status=ok
// SIG undefined FUN_14373d8d0(void)

undefined8 * FUN_14373d8d0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar2 = FUN_143703a50();
  FUN_14373d990(&local_28,param_2,uVar2);
  plVar3 = (longlong *)FUN_14370d950();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x78))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    lVar1 = *plVar3;
    uVar2 = FUN_1437151f0(param_2);
    (**(code **)(lVar1 + 0xb8))(plVar3,local_28,uVar2);
  }
  param_1[1] = local_20;
  *param_1 = local_28;
  param_1[2] = local_18;
  if ((local_18 & 1) != 0) {
    FUN_1437329e0(local_18 & 0xfffffffffffffffe);
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
  }
  return param_1;
}



// FUNCTION 14373d990 FUN_14373d990 body=136 status=ok
// SIG undefined FUN_14373d990(void)

undefined8 * FUN_14373d990(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_1437152f0(param_2);
  uVar2 = (**(code **)(*param_3 + 8))(param_3,iVar1);
  FUN_14370c720(uVar2,0,(longlong)iVar1);
  *param_1 = uVar2;
  param_1[1] = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1437151a0(param_2);
  }
  param_1[2] = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 14373da20 FUN_14373da20 body=125 status=ok
// SIG undefined FUN_14373da20(void)

undefined8
FUN_14373da20(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)FUN_143714420(param_3,2);
    uVar4 = 0;
    uVar3 = uVar4;
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *puVar2;
    }
    cVar1 = FUN_143714870(param_4,uVar3);
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_143714420(param_3,1);
      if (puVar2 != (undefined8 *)0x0) {
        uVar4 = *puVar2;
      }
      if (param_5 == (int)((ulonglong)uVar4 >> 8)) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14373daa0 FUN_14373daa0 body=68 status=ok
// SIG undefined FUN_14373daa0(void)

/* WARNING: Removing unreachable block (ram,0x00014373dad7) */

undefined8 FUN_14373daa0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_143714490();
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar2 = 0;
  if (((byte)*puVar1 & 0xf) == 8) {
    uVar2 = param_1;
  }
  return uVar2;
}



// FUNCTION 14373daf0 FUN_14373daf0 body=45 status=ok
// SIG undefined FUN_14373daf0(void)

void FUN_14373daf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  FUN_14373db20(param_1,param_2,uVar1);
  return;
}



// FUNCTION 14373db20 FUN_14373db20 body=50 status=ok
// SIG undefined FUN_14373db20(void)

void FUN_14373db20(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1437152f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014373db4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,param_1,uVar1);
  return;
}



// FUNCTION 14373db60 FUN_14373db60 body=317 status=ok
// SIG undefined FUN_14373db60(void)

void FUN_14373db60(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  short *psVar9;
  short *psVar10;
  undefined8 local_res10;
  
  puVar7 = (undefined8 *)FUN_143714420(param_2,0x4000000);
  if ((puVar7 != (undefined8 *)0x0) && (psVar1 = (short *)*puVar7, psVar1 != (short *)0x0)) {
    psVar9 = psVar1 + 4 + (longlong)*psVar1 * 4;
    psVar10 = psVar9;
    for (; psVar9 != psVar1 + 4; psVar9 = psVar9 + -4) {
      psVar10 = psVar10 + -4;
      FUN_143714060(&local_res10,*(undefined8 *)psVar10);
      uVar2 = local_res10;
      iVar4 = FUN_1437152f0(param_2);
      iVar5 = FUN_143715270(&local_res10);
      iVar6 = FUN_1437152f0(param_2);
      FUN_14373cea0((iVar5 + iVar4 * (param_3 + -1)) + param_1,uVar2,param_3,-iVar6);
    }
  }
  puVar7 = (undefined8 *)FUN_143714490(param_2,1);
  if (puVar7 == (undefined8 *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)*puVar7;
  }
  lVar8 = 0;
  if ((bVar3 & 0xf) == 7) {
    lVar8 = param_2;
  }
  if ((lVar8 != 0) && (lVar8 = hkReflect::RecordType::getParentRecord(), lVar8 != 0)) {
    iVar4 = FUN_1437152f0(param_2);
    iVar5 = FUN_1437152f0(param_2);
    FUN_14373cea0(iVar4 * (param_3 + -1) + param_1,lVar8,param_3,-iVar5);
  }
  return;
}



// FUNCTION 14373dca0 FUN_14373dca0 body=288 status=ok
// SIG undefined FUN_14373dca0(void)

void FUN_14373dca0(longlong param_1,longlong param_2,int param_3)

{
  short *psVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  short *psVar8;
  undefined8 local_res10;
  
  iVar4 = FUN_1437152f0(param_2);
  FUN_14370c720(param_1,0,iVar4 * param_3);
  puVar6 = (undefined8 *)FUN_143714490(param_2,1);
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)*puVar6;
  }
  lVar7 = 0;
  if ((bVar3 & 0xf) == 7) {
    lVar7 = param_2;
  }
  if ((lVar7 != 0) && (lVar7 = hkReflect::RecordType::getParentRecord(), lVar7 != 0)) {
    uVar5 = FUN_1437152f0(param_2);
    FUN_14373cf10(param_1,lVar7,param_3,uVar5);
  }
  puVar6 = (undefined8 *)FUN_143714420(param_2,0x4000000);
  if ((puVar6 != (undefined8 *)0x0) && (psVar1 = (short *)*puVar6, psVar1 != (short *)0x0)) {
    psVar8 = psVar1 + 4;
    psVar1 = psVar8 + (longlong)*psVar1 * 4;
    for (; psVar8 != psVar1; psVar8 = psVar8 + 4) {
      FUN_143714060(&local_res10,*(undefined8 *)psVar8);
      uVar2 = local_res10;
      iVar4 = FUN_143715270(&local_res10);
      uVar5 = FUN_1437152f0(param_2);
      FUN_14373cf10(iVar4 + param_1,uVar2,param_3,uVar5);
    }
  }
  return;
}



// FUNCTION 14373ddc0 FUN_14373ddc0 body=604 status=ok
// SIG undefined FUN_14373ddc0(void)

void FUN_14373ddc0(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  code *pcVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  short *psVar12;
  short *local_38;
  short *local_30;
  
  puVar6 = (undefined8 *)FUN_143714420(param_3,0x4000000);
  if ((puVar6 != (undefined8 *)0x0) && (psVar1 = (short *)*puVar6, psVar1 != (short *)0x0)) {
    psVar12 = psVar1 + 4;
    local_30 = psVar12 + (longlong)*psVar1 * 4;
    local_38 = psVar12;
    puVar6 = (undefined8 *)FUN_143714490(param_3,1);
    uVar11 = 0;
    if (puVar6 == (undefined8 *)0x0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)*puVar6;
    }
    uVar9 = uVar11;
    if ((bVar2 & 0xf) == 7) {
      uVar9 = param_3;
    }
    if ((uVar9 != 0) && (lVar7 = hkReflect::RecordType::getParentRecord(), lVar7 != 0)) {
      pcVar8 = (code *)FUN_14374a220(lVar7);
      if ((int)((longlong)local_30 - (longlong)psVar12 >> 3) == 0) {
        (*pcVar8)(param_1,param_2,lVar7,param_4);
      }
      else {
        iVar3 = FUN_143715270(psVar12);
        iVar4 = FUN_1437152f0(lVar7);
        if (iVar3 < iVar4) {
          if (pcVar8 == hkReflect::Detail::Trivial<512>::func) {
            if (0 < param_4) {
              do {
                iVar3 = FUN_1437152f0(param_3);
                iVar10 = (int)uVar11;
                iVar4 = FUN_1437152f0(param_3);
                uVar5 = FUN_143715270(psVar12);
                hkString::strNcmp(iVar4 * iVar10 + param_1,iVar3 * iVar10 + param_2,uVar5);
                uVar11 = (ulonglong)(iVar10 + 1U);
              } while ((int)(iVar10 + 1U) < param_4);
            }
          }
          else {
            uVar5 = FUN_1437152f0(param_3);
            `anonymous_namespace'::runBinaryFunction(pcVar8,param_1,param_2,lVar7,param_4,uVar5);
          }
        }
        else if (0 < param_4) {
          do {
            iVar3 = FUN_1437152f0(param_3);
            iVar10 = (int)uVar11;
            iVar4 = FUN_1437152f0(param_3);
            (*pcVar8)(iVar4 * iVar10 + param_1,iVar3 * iVar10 + param_2,lVar7,1);
            uVar11 = (ulonglong)(iVar10 + 1U);
            psVar12 = local_38;
          } while ((int)(iVar10 + 1U) < param_4);
        }
      }
    }
    if (psVar12 != local_30) {
      do {
        FUN_143714060(&local_38,*(undefined8 *)psVar12);
        psVar1 = local_38;
        iVar3 = FUN_143715270(&local_38);
        iVar4 = FUN_143715270(&local_38);
        uVar5 = FUN_1437152f0(param_3);
        FUN_14373cdb0(iVar4 + param_1,iVar3 + param_2,psVar1,param_4,uVar5);
        psVar12 = psVar12 + 4;
      } while (psVar12 != local_30);
    }
  }
  return;
}



// FUNCTION 14373e020 FUN_14373e020 body=355 status=ok
// SIG undefined FUN_14373e020(void)

void FUN_14373e020(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  short *psVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  short *psVar9;
  undefined8 local_res18 [2];
  
  iVar4 = FUN_1437152f0(param_3);
  hkString::strNcmp(param_1,param_2,iVar4 * param_4);
  puVar7 = (undefined8 *)FUN_143714490(param_3,1);
  if (puVar7 == (undefined8 *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)*puVar7;
  }
  lVar8 = 0;
  if ((bVar3 & 0xf) == 7) {
    lVar8 = param_3;
  }
  if ((lVar8 != 0) && (lVar8 = hkReflect::RecordType::getParentRecord(), lVar8 != 0)) {
    uVar5 = FUN_1437152f0(param_3);
    FUN_14373ce20(param_1,param_2,lVar8,param_4,uVar5);
    FUN_14374a410(param_1,param_3,param_4);
  }
  puVar7 = (undefined8 *)FUN_143714420(param_3,0x4000000);
  if ((puVar7 != (undefined8 *)0x0) && (psVar1 = (short *)*puVar7, psVar1 != (short *)0x0)) {
    psVar9 = psVar1 + 4;
    psVar1 = psVar9 + (longlong)*psVar1 * 4;
    for (; psVar9 != psVar1; psVar9 = psVar9 + 4) {
      FUN_143714060(local_res18,*(undefined8 *)psVar9);
      uVar2 = local_res18[0];
      iVar4 = FUN_143715270(local_res18);
      iVar6 = FUN_143715270(local_res18);
      uVar5 = FUN_1437152f0(param_3);
      FUN_14373ce20(iVar6 + param_1,param_2 + iVar4,uVar2,param_4,uVar5);
    }
  }
  return;
}



// FUNCTION 14373e190 FUN_14373e190 body=139 status=ok
// SIG undefined FUN_14373e190(void)

void FUN_14373e190(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_14373daa0(param_2);
  puVar2 = (undefined8 *)FUN_143714420(uVar1,1);
  uVar4 = 0;
  uVar3 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
  }
  puVar2 = (undefined8 *)FUN_143714420(uVar1,2);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
  }
  FUN_143749de0(param_1,uVar4,(int)((ulonglong)uVar3 >> 8) * param_3);
  return;
}



// FUNCTION 14373e220 FUN_14373e220 body=139 status=ok
// SIG undefined FUN_14373e220(void)

void FUN_14373e220(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_14373daa0(param_2);
  puVar2 = (undefined8 *)FUN_143714420(uVar1,1);
  uVar4 = 0;
  uVar3 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
  }
  puVar2 = (undefined8 *)FUN_143714420(uVar1,2);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
  }
  FUN_143749d80(param_1,uVar4,(int)((ulonglong)uVar3 >> 8) * param_3);
  return;
}



// FUNCTION 14373e2b0 FUN_14373e2b0 body=141 status=ok
// SIG undefined FUN_14373e2b0(void)

void FUN_14373e2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_14373daa0(param_3);
  puVar2 = (undefined8 *)FUN_143714420(uVar1,1);
  uVar4 = 0;
  uVar3 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
  }
  puVar2 = (undefined8 *)FUN_143714420(uVar1,2);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
  }
  FUN_1437498d0(param_1,param_2,uVar4,(int)((ulonglong)uVar3 >> 8) * param_4);
  return;
}



// FUNCTION 14373e340 FUN_14373e340 body=141 status=ok
// SIG undefined FUN_14373e340(void)

void FUN_14373e340(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_14373daa0(param_3);
  puVar2 = (undefined8 *)FUN_143714420(uVar1,1);
  uVar4 = 0;
  uVar3 = uVar4;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
  }
  puVar2 = (undefined8 *)FUN_143714420(uVar1,2);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *puVar2;
  }
  FUN_143749930(param_1,param_2,uVar4,(int)((ulonglong)uVar3 >> 8) * param_4);
  return;
}



// FUNCTION 14373e3d0 FUN_14373e3d0 body=24 status=ok
// SIG undefined FUN_14373e3d0(void)

undefined4 *
FUN_14373e3d0(undefined8 param_1,undefined4 *param_2,char *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  
  cVar1 = *param_3;
  *param_2 = 0;
  *(bool *)param_5 = cVar1 != '\0';
  return param_2;
}



// FUNCTION 14373e3f0 FUN_14373e3f0 body=25 status=ok
// SIG undefined FUN_14373e3f0(void)

undefined4 *
FUN_14373e3f0(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             undefined8 param_5)

{
  short sVar1;
  
  sVar1 = *param_3;
  *param_2 = 0;
  *(bool *)param_5 = sVar1 != 0;
  return param_2;
}



// FUNCTION 14373e410 FUN_14373e410 body=24 status=ok
// SIG undefined FUN_14373e410(void)

undefined4 *
FUN_14373e410(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  
  iVar1 = *param_3;
  *param_2 = 0;
  *(bool *)param_5 = iVar1 != 0;
  return param_2;
}



// FUNCTION 14373e430 FUN_14373e430 body=27 status=ok
// SIG undefined FUN_14373e430(void)

undefined4 *
FUN_14373e430(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double *param_5)

{
  float fVar1;
  
  fVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)fVar1;
  return param_2;
}



// FUNCTION 14373e450 FUN_14373e450 body=49 status=ok
// SIG undefined FUN_14373e450(void)

undefined4 *
FUN_14373e450(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             longlong *param_5)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *param_3;
  if ((char)bVar1 < '\0') {
    lVar2 = (longlong)~(int)(char)bVar1 + 1;
  }
  else {
    lVar2 = (longlong)(char)bVar1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = bVar1 >> 7;
  return param_2;
}



// FUNCTION 14373e490 FUN_14373e490 body=51 status=ok
// SIG undefined FUN_14373e490(void)

undefined4 *
FUN_14373e490(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             longlong *param_5)

{
  short sVar1;
  longlong lVar2;
  
  sVar1 = *param_3;
  if (sVar1 < 0) {
    lVar2 = (longlong)~(int)sVar1 + 1;
  }
  else {
    lVar2 = (longlong)sVar1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)((ushort)sVar1 >> 0xf);
  return param_2;
}



// FUNCTION 14373e4d0 FUN_14373e4d0 body=26 status=ok
// SIG undefined FUN_14373e4d0(void)

undefined4 *
FUN_14373e4d0(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 14373e4f0 FUN_14373e4f0 body=46 status=ok
// SIG undefined FUN_14373e4f0(void)

undefined4 *
FUN_14373e4f0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *param_3;
  lVar2 = (longlong)(int)uVar1;
  if ((int)uVar1 < 0) {
    lVar2 = (longlong)(int)~uVar1 + 1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)(uVar1 >> 0x1f);
  return param_2;
}



// FUNCTION 14373e520 FUN_14373e520 body=25 status=ok
// SIG undefined FUN_14373e520(void)

undefined4 *
FUN_14373e520(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 14373e540 FUN_14373e540 body=39 status=ok
// SIG undefined FUN_14373e540(void)

undefined4 *
FUN_14373e540(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  lVar2 = lVar1;
  if (lVar1 < 0) {
    lVar2 = -lVar1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)((ulonglong)lVar1 >> 0x3f);
  return param_2;
}



// FUNCTION 14373e570 FUN_14373e570 body=25 status=ok
// SIG undefined FUN_14373e570(void)

undefined4 *
FUN_14373e570(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 14373e590 FUN_14373e590 body=224 status=ok
// SIG undefined FUN_14373e590(void)

undefined4 *
FUN_14373e590(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  puVar2 = (undefined8 *)FUN_143714420(param_4,1);
  if (puVar2 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)((ulonglong)*puVar2 >> 8);
  }
  plVar3 = (longlong *)FUN_143714420(param_4,2);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar3;
  }
  uVar1 = 0;
  uVar4 = 0;
  if (lVar6 != 0) {
    uVar1 = FUN_1437152f0(lVar6);
    uVar4 = FUN_1437151a0(lVar6);
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
  }
  *param_5 = param_3;
  param_5[1] = lVar6;
  *(undefined4 *)(param_5 + 2) = uVar5;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar1;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar4;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373e670 FUN_14373e670 body=41 status=ok
// SIG undefined FUN_14373e670(void)

undefined4 *
FUN_14373e670(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x10))(param_3);
  *param_2 = 0;
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 14373e6a0 runBinaryFunction body=164 status=ok
// SIG undefined runBinaryFunction(void)

void `anonymous_namespace'::runBinaryFunction
               (code *UNRECOVERED_JUMPTABLE,longlong param_2,longlong param_3,undefined8 param_4,
               uint param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_1437152f0(param_4);
  if (param_6 != iVar1) {
    if (0 < (int)param_5) {
      param_3 = param_3 - param_2;
      uVar2 = (ulonglong)param_5;
      do {
        (*UNRECOVERED_JUMPTABLE)(param_2,param_3 + param_2,param_4,1);
        param_2 = param_2 + param_6;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 14373e750 runUnaryFunction body=129 status=ok
// SIG undefined runUnaryFunction(void)

void `anonymous_namespace'::runUnaryFunction
               (code *param_1,longlong param_2,undefined8 param_3,uint param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_4;
  iVar1 = FUN_1437152f0(param_3);
  if (param_5 == iVar1) {
    (*param_1)(param_2,param_3,param_4);
  }
  else if (0 < (int)param_4) {
    do {
      (*param_1)(param_2,param_3,1);
      param_2 = param_2 + param_5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 14373e7e0 FUN_14373e7e0 body=64 status=ok
// SIG undefined FUN_14373e7e0(void)

undefined4 *
FUN_14373e7e0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar2 = (undefined8 *)FUN_143714420(param_4);
  iVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    iVar3 = (int)((ulonglong)*puVar2 >> 8);
  }
  uVar1 = 0x80040200;
  if (param_5 == iVar3) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14373e820 FUN_14373e820 body=21 status=ok
// SIG undefined FUN_14373e820(void)

undefined4 *
FUN_14373e820(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  *param_2 = 0;
  *(bool *)param_3 = param_5 != '\0';
  return param_2;
}



// FUNCTION 14373e840 FUN_14373e840 body=23 status=ok
// SIG undefined FUN_14373e840(void)

undefined4 *
FUN_14373e840(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,char param_5
             )

{
  *param_2 = 0;
  *param_3 = (ushort)(param_5 != '\0');
  return param_2;
}



// FUNCTION 14373e860 FUN_14373e860 body=22 status=ok
// SIG undefined FUN_14373e860(void)

undefined4 *
FUN_14373e860(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,char param_5)

{
  *param_2 = 0;
  *param_3 = (uint)(param_5 != '\0');
  return param_2;
}



// FUNCTION 14373e880 FUN_14373e880 body=25 status=ok
// SIG undefined FUN_14373e880(void)

undefined4 *
FUN_14373e880(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
             double param_5)

{
  *param_2 = 0;
  *param_3 = (float)param_5;
  return param_2;
}



// FUNCTION 14373e8a0 FUN_14373e8a0 body=21 status=ok
// SIG undefined FUN_14373e8a0(void)

undefined4 *
FUN_14373e8a0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_3 = param_5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373e8c0 FUN_14373e8c0 body=60 status=ok
// SIG undefined FUN_14373e8c0(void)

undefined4 *
FUN_14373e8c0(undefined8 param_1,undefined4 *param_2,char *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  char cVar1;
  
  if (*param_5 <= (ulonglong)((char)param_5[1] != '\0') + 0x7f) {
    cVar1 = (char)*param_5;
    if ((char)param_5[1] != '\0') {
      cVar1 = -cVar1;
    }
    *param_3 = cVar1;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373e900 FUN_14373e900 body=42 status=ok
// SIG undefined FUN_14373e900(void)

undefined4 *
FUN_14373e900(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((byte)param_5[1] == 0) && ((ulonglong)(byte)*param_5 == *param_5)) {
    *param_3 = (byte)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373e930 FUN_14373e930 body=64 status=ok
// SIG undefined FUN_14373e930(void)

undefined4 *
FUN_14373e930(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  short sVar1;
  
  if (*param_5 <= (ulonglong)((char)param_5[1] != '\0') + 0x7fff) {
    sVar1 = (short)*param_5;
    if ((char)param_5[1] != '\0') {
      sVar1 = -sVar1;
    }
    *param_3 = sVar1;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373e970 FUN_14373e970 body=43 status=ok
// SIG undefined FUN_14373e970(void)

undefined4 *
FUN_14373e970(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((char)param_5[1] == '\0') && ((ulonglong)(ushort)*param_5 == *param_5)) {
    *param_3 = (ushort)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373e9a0 FUN_14373e9a0 body=61 status=ok
// SIG undefined FUN_14373e9a0(void)

undefined4 *
FUN_14373e9a0(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  int iVar1;
  
  if (*param_5 <= (ulonglong)((char)param_5[1] != '\0') + 0x7fffffff) {
    iVar1 = (int)*param_5;
    if ((char)param_5[1] != '\0') {
      iVar1 = -iVar1;
    }
    *param_3 = iVar1;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373e9e0 FUN_14373e9e0 body=41 status=ok
// SIG undefined FUN_14373e9e0(void)

undefined4 *
FUN_14373e9e0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((char)param_5[1] == '\0') && ((ulonglong)(uint)*param_5 == *param_5)) {
    *param_3 = (uint)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373ea10 FUN_14373ea10 body=70 status=ok
// SIG undefined FUN_14373ea10(void)

undefined4 *
FUN_14373ea10(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_5;
  if (uVar1 <= (ulonglong)((char)param_5[1] != '\0') + 0x7fffffffffffffff) {
    if ((char)param_5[1] != '\0') {
      uVar1 = -uVar1;
    }
    *param_3 = uVar1;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373ea60 FUN_14373ea60 body=37 status=ok
// SIG undefined FUN_14373ea60(void)

undefined4 *
FUN_14373ea60(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  if (*(char *)(param_5 + 1) == '\0') {
    *param_3 = *param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373ea90 FUN_14373ea90 body=67 status=ok
// SIG undefined FUN_14373ea90(void)

undefined4 * FUN_14373ea90(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    cVar1 = (**(code **)(param_1 + 0x18))(param_3);
    uVar2 = 0x80040200;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
    *param_2 = uVar2;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14373eae0 FUN_14373eae0 body=510 status=ok
// SIG undefined FUN_14373eae0(void)

undefined8 *
FUN_14373eae0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  undefined1 local_b0 [8];
  undefined1 local_a8 [144];
  
  plVar6 = (longlong *)FUN_1437149e0(param_4,&local_d0,&DAT_1467de470);
  lVar1 = *plVar6;
  if ((local_c0 & 1) != 0) {
    FUN_143733a60(local_c0 & 0xfffffffffffffffe);
  }
  if (lVar1 == 0) {
    (**(code **)*param_1)(param_1,param_2,param_4);
  }
  else {
    uVar4 = FUN_1437152f0(param_4);
    FUN_143781700(local_a8,uVar4);
    hkReflect::DeclIterAll::DeclIterAll(&local_d0,param_4,0);
    uVar13 = 0;
    while ((puVar8 = local_d0 + 1, local_d0 + 1 < local_c8 ||
           (cVar2 = FUN_1437144f0(&local_d0), puVar8 = local_d0, cVar2 != '\0'))) {
      local_d0 = puVar8;
      pbVar7 = (byte *)FUN_143714f30(local_d0,local_b0);
      if ((*pbVar7 & 0x20) != 0) {
        FUN_143714060(&local_d8,*local_d0);
        uVar10 = local_d8;
        puVar8 = (undefined8 *)FUN_143714490(local_d8,1);
        if (puVar8 == (undefined8 *)0x0) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)*puVar8;
        }
        uVar14 = uVar13;
        if ((bVar3 & 0xf) == 8) {
          uVar14 = uVar10;
        }
        if ((uVar14 != 0) && (iVar5 = FUN_1437152f0(uVar14), iVar5 == 4)) {
          puVar9 = (ulonglong *)FUN_143714420(uVar14,1);
          uVar10 = uVar13;
          if (puVar9 != (ulonglong *)0x0) {
            uVar10 = *puVar9;
          }
          if ((int)(uVar10 >> 8) < 1) {
            uVar11 = FUN_1437151f0(&DAT_1467f13d0);
            uVar12 = FUN_1437151f0(uVar14);
            iVar5 = hkString::strCmp(uVar12,uVar11);
            if (iVar5 == 0) {
              uVar11 = FUN_1437151c0(&local_d8);
              FUN_143781720(local_a8,param_3,param_4,uVar11);
            }
          }
        }
      }
    }
    uVar11 = FUN_1437818f0(local_a8);
    if (param_4 != 0) {
      uVar13 = FUN_1437151a0(param_4);
    }
    if ((uVar13 & 1) != 0) {
      FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
    }
    *param_2 = uVar11;
    param_2[1] = param_4;
    param_2[2] = uVar13;
  }
  return param_2;
}



// FUNCTION 14373ece0 FUN_14373ece0 body=41 status=ok
// SIG undefined FUN_14373ece0(void)

longlong * FUN_14373ece0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  FUN_14373d8d0(param_2,param_3);
  *(undefined2 *)(*param_2 + 0x10) = 0xffff;
  return param_2;
}



// FUNCTION 14373ed10 FUN_14373ed10 body=96 status=ok
// SIG undefined FUN_14373ed10(void)

void FUN_14373ed10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  LPVOID pvVar2;
  
  if (*(ushort *)(param_2 + 0x10) == 0xffff) {
    uVar1 = FUN_1437152f0(param_3);
  }
  else {
    uVar1 = (uint)*(ushort *)(param_2 + 0x10);
  }
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  FUN_143702c60(*(undefined8 *)((longlong)pvVar2 + 0x58),param_2,1,uVar1);
  return;
}



// FUNCTION 14373ed70 isInPlaceConstructible body=60 status=ok
// SIG undefined isInPlaceConstructible(void)

bool hkReflect::Detail::ReferencedObjectAllocImpl::isInPlaceConstructible
               (undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  plVar2 = (longlong *)FUN_1437149e0(param_2,local_28,&DAT_1467de470);
  lVar1 = *plVar2;
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return lVar1 == 0;
}



// FUNCTION 14373edb0 FUN_14373edb0 body=243 status=ok
// SIG undefined FUN_14373edb0(void)

undefined4 *
FUN_14373edb0(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  iVar1 = param_3[2];
  iVar2 = *param_3;
  plVar4 = (longlong *)FUN_143714420(param_4,2);
  if (plVar4 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar4;
  }
  puVar5 = (undefined8 *)FUN_143714420(param_4,2);
  if (puVar5 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar5;
  }
  iVar3 = FUN_1437152f0(uVar7);
  uVar7 = *(undefined8 *)param_3;
  uVar6 = 0;
  uVar8 = 0;
  if (lVar9 != 0) {
    uVar8 = FUN_1437152f0(lVar9,(longlong)(iVar1 - iVar2) % (longlong)iVar3 & 0xffffffff);
    uVar6 = FUN_1437151a0(lVar9);
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar7;
  param_5[1] = lVar9;
  *(int *)(param_5 + 2) = (iVar1 - iVar2) / iVar3;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar8;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar6;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373eeb0 FUN_14373eeb0 body=106 status=ok
// SIG undefined FUN_14373eeb0(void)

undefined4 *
FUN_14373eeb0(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined8 *)FUN_143714420(param_4,2);
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
  }
  iVar1 = FUN_1437152f0(uVar3);
  uVar4 = 0x80040200;
  if ((longlong)param_5 == (param_3[1] - *param_3) / (longlong)iVar1) {
    uVar4 = 0;
  }
  *param_2 = uVar4;
  return param_2;
}



// FUNCTION 14373ef20 FUN_14373ef20 body=197 status=ok
// SIG undefined FUN_14373ef20(void)

undefined4 *
FUN_14373ef20(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)FUN_143714420(param_4,2);
  if (plVar4 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar4;
  }
  uVar2 = *param_3;
  uVar3 = 0;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar5 = 0;
  if (lVar6 != 0) {
    uVar3 = FUN_1437152f0(lVar6);
    uVar5 = FUN_1437151a0(lVar6);
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar2;
  param_5[1] = lVar6;
  *(undefined4 *)(param_5 + 2) = uVar1;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar3;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373eff0 FUN_14373eff0 body=91 status=ok
// SIG undefined FUN_14373eff0(void)

undefined8
FUN_14373eff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_143714420(param_4,2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_14373f940(param_1,param_2,param_3,uVar2,param_5);
  return param_2;
}



// FUNCTION 14373f050 FUN_14373f050 body=165 status=ok
// SIG undefined FUN_14373f050(void)

undefined4 *
FUN_14373f050(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,longlong param_7)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_143714420(param_4,2);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  if ((*(longlong *)(param_7 + 8) != 0) && (cVar1 = FUN_143714870(uVar3), cVar1 == '\0')) {
    *param_2 = 0x80040200;
    return param_2;
  }
  FUN_14373fa10(param_1,param_2,param_3,uVar3,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 14373f100 FUN_14373f100 body=152 status=ok
// SIG undefined FUN_14373f100(void)

undefined8
FUN_14373f100(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_143714420(param_3,2);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  cVar1 = FUN_143714870(param_4,uVar4);
  if (cVar1 != '\0') {
    lVar3 = FUN_14374a2b0(param_4);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,param_5);
      return uVar4;
    }
  }
  return 1;
}



// FUNCTION 14373f1a0 FUN_14373f1a0 body=35 status=ok
// SIG undefined FUN_14373f1a0(void)

undefined4 *
FUN_14373f1a0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  *param_3 = param_5;
  *(uint *)(param_3 + 1) = param_7;
  *(uint *)((longlong)param_3 + 0xc) = param_7 | 0x80000000;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373f1d0 FUN_14373f1d0 body=63 status=ok
// SIG undefined FUN_14373f1d0(void)

void FUN_14373f1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_143714420(param_3,2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_14373fc80(param_1,param_2,uVar2);
  return;
}



// FUNCTION 14373f210 FUN_14373f210 body=148 status=ok
// SIG undefined FUN_14373f210(void)

undefined8
FUN_14373f210(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  
  if ((*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff) != 0) {
    return 2;
  }
  iVar1 = FUN_1437152f0(param_4);
  FUN_14373fb70(param_1,param_2,iVar1,param_5);
  FUN_14370c720(*param_2,0,iVar1 * param_5);
  FUN_14374a900(*param_2,param_4,param_5);
  return 0;
}



// FUNCTION 14373f2b0 FUN_14373f2b0 body=198 status=ok
// SIG undefined FUN_14373f2b0(void)

undefined8
FUN_14373f2b0(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  
  iVar1 = FUN_1437152f0(param_3);
  if ((param_2 <= (ulonglong *)*param_2) && ((ulonglong *)*param_2 < param_2 + (longlong)iVar1 * 2))
  {
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff) < param_5) {
      iVar1 = FUN_1437152f0(param_4);
      FUN_14373fb70(param_1,param_2,iVar1,param_5);
      FUN_14370c720(*param_2,0,iVar1 * param_5);
    }
    else {
      *(int *)(param_2 + 1) = param_5;
    }
    FUN_14374a900(*param_2,param_4,param_5);
    return 0;
  }
  return 2;
}



// FUNCTION 14373f380 FUN_14373f380 body=173 status=ok
// SIG undefined FUN_14373f380(void)

undefined4 *
FUN_14373f380(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  lVar2 = param_3[2];
  uVar4 = 0;
  uVar3 = *param_3;
  uVar5 = 0;
  uVar1 = *(undefined4 *)(param_3 + 1);
  if (lVar2 != 0) {
    uVar4 = FUN_1437152f0(lVar2);
    uVar5 = FUN_1437151a0(lVar2);
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar3;
  param_5[1] = lVar2;
  *(undefined4 *)(param_5 + 2) = uVar1;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar5;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373f430 setNumElements body=55 status=ok
// SIG undefined setNumElements(void)

undefined4 *
hkReflect::Detail::HomogeneousArrayImpl::setNumElements
          (undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  if (*(longlong *)(param_3 + 0x10) == 0) {
    *param_2 = 0x80040200;
    return param_2;
  }
  FUN_14373f940();
  return param_2;
}



// FUNCTION 14373f470 FUN_14373f470 body=188 status=ok
// SIG undefined FUN_14373f470(void)

undefined4 *
FUN_14373f470(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,int param_5
             ,int param_6,longlong param_7)

{
  char cVar1;
  
  if (*(longlong *)(param_7 + 8) != 0) {
    if ((*(longlong *)(param_3 + 0x10) != 0) && (cVar1 = FUN_143714870(), cVar1 == '\0')) {
      if ((*(int *)(param_3 + 8) != 0) &&
         ((param_5 != 0 || ((param_6 != *(int *)(param_3 + 8) && (param_6 != -1)))))) {
        *param_2 = 0x80040200;
        return param_2;
      }
      FUN_14375ed90(param_3);
    }
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_7 + 8);
  }
  FUN_14373fa10(param_1,param_2,param_3,*(undefined8 *)(param_3 + 0x10),param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 14373f530 FUN_14373f530 body=109 status=ok
// SIG undefined FUN_14373f530(void)

undefined8
FUN_14373f530(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_2 + 0x10) = param_4;
  lVar1 = FUN_14374a2b0(param_4);
  if (lVar1 == 0) {
    return 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x90))
                    (param_1,param_2,param_3,*(undefined8 *)(param_2 + 0x10),param_5);
  return uVar2;
}



// FUNCTION 14373f5a0 FUN_14373f5a0 body=50 status=ok
// SIG undefined FUN_14373f5a0(void)

undefined4 *
FUN_14373f5a0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  param_3[2] = param_6;
  *param_2 = 0;
  *(uint *)((longlong)param_3 + 0xc) = param_7 | 0x80000000;
  if (param_7 != 0) {
    *param_3 = param_5;
    *(uint *)(param_3 + 1) = param_7;
  }
  return param_2;
}



// FUNCTION 14373f5e0 FUN_14373f5e0 body=9 status=ok
// SIG undefined FUN_14373f5e0(void)

void FUN_14373f5e0(undefined8 param_1,longlong param_2)

{
  FUN_14373fc80(param_1,param_2,*(undefined8 *)(param_2 + 0x10));
  return;
}



// FUNCTION 14373f5f0 FUN_14373f5f0 body=525 status=ok
// SIG undefined FUN_14373f5f0(void)

int * FUN_14373f5f0(undefined8 param_1,int *param_2,undefined8 param_3,longlong param_4,
                   undefined8 *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  longlong *plVar8;
  byte *pbVar9;
  undefined1 local_88 [8];
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 local_48 [16];
  ulonglong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  puVar2 = param_5;
  lVar6 = FUN_142b7ebc0(*param_5,param_5[1],param_4);
  if (((lVar6 != 0) && (puVar7 = (uint *)FUN_143715390(puVar2[1],&param_5), (*puVar7 >> 3 & 1) == 0)
      ) && (iVar5 = FUN_1437498d0(param_3,*puVar2,param_4,1), -1 < iVar5)) {
    *param_2 = 0;
    return param_2;
  }
  lVar6 = hkReflect::RecordType::getParentRecord(param_4);
  if (lVar6 != 0) {
    plVar8 = (longlong *)FUN_1437151a0(lVar6);
    (**(code **)(*plVar8 + 0x48))(plVar8,&param_5,param_3,lVar6,puVar2);
    if ((int)param_5 < 0) {
      *param_2 = (int)param_5;
      return param_2;
    }
  }
  local_80 = param_3;
  local_78 = param_4;
  if (param_4 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_1437151a0(param_4);
  }
  if ((local_70 & 1) != 0) {
    FUN_1437329e0(local_70 & 0xfffffffffffffffe);
  }
  hkReflect::DeclIterAll::DeclIterAll(&local_68,param_4,0);
LAB_14373f6f0:
  puVar3 = local_68 + 1;
  if ((local_68 + 1 < local_60) ||
     (cVar4 = FUN_1437144f0(&local_68), puVar3 = local_68, cVar4 != '\0')) goto LAB_14373f715;
  bVar1 = false;
  goto LAB_14373f729;
LAB_14373f715:
  local_68 = puVar3;
  pbVar9 = (byte *)FUN_143714f30(local_68,local_88);
  if ((*pbVar9 & 0x30) != 0) {
    bVar1 = true;
LAB_14373f729:
    if (!bVar1) {
      *param_2 = 0;
      goto LAB_14373f7c7;
    }
    FUN_143741f50(&local_80,local_30,*local_68);
    FUN_143741f50(puVar2,local_48,*local_68);
    FUN_1437420f0(local_30,&param_5,local_48);
    if ((int)param_5 < 0) {
      *param_2 = (int)param_5;
      if ((local_38 & 1) != 0) {
        FUN_143733a60(local_38 & 0xfffffffffffffffe);
      }
      if ((local_20 & 1) != 0) {
        FUN_143733a60(local_20 & 0xfffffffffffffffe);
      }
LAB_14373f7c7:
      if ((local_70 & 1) != 0) {
        FUN_143733a60(local_70 & 0xfffffffffffffffe);
      }
      return param_2;
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if ((local_20 & 1) != 0) {
      FUN_143733a60(local_20 & 0xfffffffffffffffe);
    }
  }
  goto LAB_14373f6f0;
}



// FUNCTION 14373f800 FUN_14373f800 body=144 status=ok
// SIG undefined FUN_14373f800(void)

undefined4 *
FUN_14373f800(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  ulonglong uVar1;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1437151a0(param_4);
  }
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  *param_5 = param_3;
  param_5[1] = param_4;
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = uVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373f890 FUN_14373f890 body=49 status=ok
// SIG undefined FUN_14373f890(void)

undefined8 * FUN_14373f890(undefined8 *param_1,undefined8 param_2)

{
  hkReflect::Detail::Impl::Impl();
  param_1[2] = param_2;
  *param_1 = hkReflect::Detail::HavokStringImpl::vftable;
  return param_1;
}



// FUNCTION 14373f8d0 FUN_14373f8d0 body=49 status=ok
// SIG undefined FUN_14373f8d0(void)

undefined8 * FUN_14373f8d0(undefined8 *param_1,undefined8 param_2)

{
  hkReflect::Detail::Impl::Impl();
  param_1[2] = param_2;
  *param_1 = hkReflect::Detail::hkArrayImpl::vftable;
  return param_1;
}


