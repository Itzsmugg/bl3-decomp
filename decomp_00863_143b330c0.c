// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b330c0 FUN_143b330c0 body=186 status=ok
// SIG undefined FUN_143b330c0(void)

int FUN_143b330c0(longlong param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_143b33180(param_1,param_2,param_3);
  if (iVar2 < 0) {
    iVar3 = -1;
  }
  else {
    iVar2 = iVar2 + (param_2 >> 5 & 0x3fU);
    iVar3 = *(int *)(param_1 + 0x880 + (longlong)iVar2 * 4);
    cVar1 = FUN_143b332c0(param_1,iVar3);
    if (cVar1 == '\0') {
      iVar3 = FUN_143b321f0(param_1,iVar3);
      if (iVar3 < 0) {
        iVar3 = -1;
      }
      else {
        FUN_143b333f0(param_1,iVar2,iVar3);
      }
    }
  }
  return iVar3;
}



// FUNCTION 143b33180 FUN_143b33180 body=149 status=ok
// SIG undefined FUN_143b33180(void)

int FUN_143b33180(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  
  if (((param_2 & 0xfffffc00) == 0xd800) && (param_3 != '\0')) {
    iVar1 = 0x800;
  }
  else {
    iVar1 = *(int *)(param_1 + (longlong)((int)param_2 >> 0xb) * 4);
    if (iVar1 == *(int *)(param_1 + 0x23320)) {
      iVar1 = FUN_143b323a0(param_1);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      else {
        *(int *)(param_1 + (longlong)((int)param_2 >> 0xb) * 4) = iVar1;
      }
    }
  }
  return iVar1;
}



// FUNCTION 143b33220 FUN_143b33220 body=151 status=ok
// SIG undefined FUN_143b33220(void)

bool FUN_143b33220(longlong param_1,uint param_2,char param_3)

{
  int local_14;
  
  if (((param_2 & 0xfffffc00) == 0xd800) && (param_3 != '\0')) {
    local_14 = ((int)param_2 >> 5) + 0x140;
  }
  else {
    local_14 = ((int)param_2 >> 5 & 0x3fU) + *(int *)(param_1 + (longlong)((int)param_2 >> 0xb) * 4)
    ;
  }
  return *(int *)(param_1 + 0x880 + (longlong)local_14 * 4) == *(int *)(param_1 + 0x23324);
}



// FUNCTION 143b332c0 FUN_143b332c0 body=73 status=ok
// SIG undefined FUN_143b332c0(void)

undefined1 FUN_143b332c0(longlong param_1,int param_2)

{
  undefined1 local_18;
  
  if ((param_2 == *(int *)(param_1 + 0x23324)) ||
     (*(int *)(param_1 + 0x23330 + (longlong)(param_2 >> 5) * 4) != 1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b33310 FUN_143b33310 body=60 status=ok
// SIG undefined FUN_143b33310(void)

void FUN_143b33310(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x23330 + (longlong)(param_2 >> 5) * 4) = -*(int *)(param_1 + 0x2331c);
  *(int *)(param_1 + 0x2331c) = param_2;
  return;
}



// FUNCTION 143b33350 FUN_143b33350 body=145 status=ok
// SIG undefined FUN_143b33350(void)

void FUN_143b33350(longlong param_1,uint param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x2332c) != '\0')) {
    *param_5 = 0x1e;
  }
  else {
    iVar1 = FUN_143b330c0(param_1,param_2,param_3);
    if (iVar1 < 0) {
      *param_5 = 7;
    }
    else {
      *(undefined4 *)
       (*(longlong *)(param_1 + 0x23300) + (longlong)(int)(iVar1 + (param_2 & 0x1f)) * 4) = param_4;
    }
  }
  return;
}



// FUNCTION 143b333f0 FUN_143b333f0 body=183 status=ok
// SIG undefined FUN_143b333f0(void)

void FUN_143b333f0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x23330 + (longlong)(param_3 >> 5) * 4) =
       *(int *)(param_1 + 0x23330 + (longlong)(param_3 >> 5) * 4) + 1;
  iVar1 = *(int *)(param_1 + 0x880 + (longlong)param_2 * 4);
  iVar2 = iVar1 >> 5;
  iVar3 = *(int *)(param_1 + 0x23330 + (longlong)iVar2 * 4) + -1;
  *(int *)(param_1 + 0x23330 + (longlong)iVar2 * 4) = iVar3;
  if (iVar3 == 0) {
    FUN_143b33310(param_1,iVar1);
  }
  *(int *)(param_1 + 0x880 + (longlong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 143b334b0 FUN_143b334b0 body=71 status=ok
// SIG undefined FUN_143b334b0(void)

void FUN_143b334b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *local_res8;
  
  for (local_res8 = param_1; local_res8 < param_1 + 0x20; local_res8 = local_res8 + 1) {
    *local_res8 = param_2;
  }
  return;
}



// FUNCTION 143b33500 FUN_143b33500 body=1711 status=ok
// SIG undefined FUN_143b33500(void)

void FUN_143b33500(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined2 local_res10;
  int local_68;
  short *local_60;
  int local_58;
  int *local_48;
  int local_40;
  int local_38;
  uint local_1c;
  
  cVar4 = FUN_143a8b0e0(*param_3);
  if (cVar4 == '\0') {
    if (((param_1 == (undefined8 *)0x0) || ((int)param_2 < 0)) || (1 < (int)param_2)) {
      *param_3 = 1;
    }
    else {
      lVar1 = param_1[9];
      if (lVar1 == 0) {
        local_1c = (uint)(param_1[1] == 0);
        if (param_2 != local_1c) {
          *param_3 = 1;
        }
      }
      else {
        if (*(char *)(lVar1 + 0x2332c) == '\0') {
          FUN_143b32b00(param_1,param_3);
          cVar4 = FUN_143a8b0e0(*param_3);
          if (cVar4 != '\0') {
            return;
          }
        }
        iVar5 = *(int *)((longlong)param_1 + 0x2c);
        if (iVar5 < 0x10001) {
          local_38 = 0x840;
        }
        else {
          local_38 = *(int *)(lVar1 + 0x23310);
        }
        if (param_2 == 0) {
          local_58 = local_38;
        }
        else {
          local_58 = 0;
        }
        if (((local_38 < 0x10000) && (local_58 + *(int *)(lVar1 + 0x23324) < 0x10000)) &&
           ((local_58 + 0x880 < 0x10000 && (local_58 + *(int *)(lVar1 + 0x23318) < 0x3fffd)))) {
          if (param_2 == 0) {
            local_40 = *(int *)(lVar1 + 0x23318) * 2;
          }
          else {
            local_40 = *(int *)(lVar1 + 0x23318) * 4;
          }
          local_40 = local_38 * 2 + 0x10 + local_40;
          uVar6 = FUN_143aa7a40((longlong)local_40);
          param_1[7] = uVar6;
          if (param_1[7] == 0) {
            *param_3 = 7;
          }
          else {
            *(int *)(param_1 + 8) = local_40;
            *(undefined1 *)((longlong)param_1 + 0x44) = 1;
            *(int *)(param_1 + 3) = local_38;
            *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x23318);
            if (iVar5 < 0x10001) {
              *(undefined2 *)(param_1 + 4) = 0xffff;
            }
            else {
              *(undefined2 *)(param_1 + 4) = *(undefined2 *)(lVar1 + 0x23320);
            }
            sVar3 = (short)local_58;
            *(short *)((longlong)param_1 + 0x22) = sVar3 + (short)*(undefined4 *)(lVar1 + 0x23324);
            *(int *)(param_1 + 6) = local_58 + -4 + *(int *)((longlong)param_1 + 0x1c);
            puVar2 = (undefined4 *)param_1[7];
            *puVar2 = 0x54726932;
            local_res10 = (undefined2)param_2;
            *(undefined2 *)(puVar2 + 1) = local_res10;
            *(undefined2 *)((longlong)puVar2 + 6) = *(undefined2 *)(param_1 + 3);
            *(short *)(puVar2 + 2) = (short)(*(int *)((longlong)param_1 + 0x1c) >> 2);
            *(undefined2 *)((longlong)puVar2 + 10) = *(undefined2 *)(param_1 + 4);
            *(undefined2 *)(puVar2 + 3) = *(undefined2 *)((longlong)param_1 + 0x22);
            *(short *)((longlong)puVar2 + 0xe) = (short)(iVar5 >> 0xb);
            local_60 = (short *)(puVar2 + 4);
            *param_1 = local_60;
            local_48 = (int *)(lVar1 + 0x880);
            for (local_68 = 0x820; 0 < local_68; local_68 = local_68 + -1) {
              *local_60 = (short)((uint)(local_58 + *local_48) >> 2);
              local_60 = local_60 + 1;
              local_48 = local_48 + 1;
            }
            for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
              *local_60 = sVar3 + 0x80;
              local_60 = local_60 + 1;
            }
            for (; local_68 < 0x20; local_68 = local_68 + 1) {
              *local_60 = sVar3 + (short)*(undefined4 *)
                                          (lVar1 + 0x880 + (longlong)(local_68 << 1) * 4);
              local_60 = local_60 + 1;
            }
            if (0x10000 < iVar5) {
              local_68 = iVar5 + -0x10000 >> 0xb;
              iVar5 = local_68 + 0x840;
              local_48 = (int *)(lVar1 + 0x80);
              for (; 0 < local_68; local_68 = local_68 + -1) {
                *local_60 = (short)*local_48;
                local_60 = local_60 + 1;
                local_48 = (int *)((longlong)local_48 + 4);
              }
              local_48 = (int *)(lVar1 + 0x880 + (longlong)iVar5 * 4);
              for (local_68 = *(int *)(lVar1 + 0x23310) - iVar5; 0 < local_68;
                  local_68 = local_68 + -1) {
                *local_60 = (short)((uint)(local_58 + *local_48) >> 2);
                local_60 = local_60 + 1;
                local_48 = local_48 + 1;
              }
            }
            if (param_2 == 0) {
              param_1[1] = local_60;
              param_1[2] = 0;
              local_48 = *(int **)(lVar1 + 0x23300);
              for (local_68 = *(int *)(lVar1 + 0x23318); 0 < local_68; local_68 = local_68 + -1) {
                *local_60 = (short)*local_48;
                local_60 = local_60 + 1;
                local_48 = (int *)((longlong)local_48 + 4);
              }
            }
            else {
              if (param_2 != 1) {
                *param_3 = 1;
                return;
              }
              param_1[1] = 0;
              param_1[2] = local_60;
              _guard_xfg_dispatch_icall_nop
                        (local_60,*(void **)(lVar1 + 0x23300),
                         (longlong)(*(int *)(lVar1 + 0x23318) << 2));
            }
            FUN_143aa79f0(*(undefined8 *)(lVar1 + 0x23300));
            FUN_143aa79f0(lVar1);
            param_1[9] = 0;
          }
        }
        else {
          *param_3 = 8;
        }
      }
    }
  }
  return;
}



// FUNCTION 143b33bb0 FUN_143b33bb0 body=1140 status=ok
// SIG undefined FUN_143b33bb0(void)

void * FUN_143b33bb0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  void *_Dst;
  longlong lVar2;
  longlong lVar3;
  int local_28;
  int local_24;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    _Dst = (void *)FUN_143aa7a40(0x50);
    lVar2 = FUN_143aa7a40(0x453c0);
    lVar3 = FUN_143aa7a40(0x10000);
    if (((_Dst == (void *)0x0) || (lVar2 == 0)) || (lVar3 == 0)) {
      FUN_143aa79f0(_Dst);
      FUN_143aa79f0(lVar2);
      FUN_143aa79f0(lVar3);
      *param_3 = 7;
      _Dst = (void *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x50);
      *(undefined4 *)((longlong)_Dst + 0x24) = param_1;
      *(undefined4 *)((longlong)_Dst + 0x28) = param_2;
      *(undefined4 *)((longlong)_Dst + 0x2c) = 0x110000;
      *(longlong *)((longlong)_Dst + 0x48) = lVar2;
      *(longlong *)(lVar2 + 0x23300) = lVar3;
      *(undefined4 *)(lVar2 + 0x23314) = 0x4000;
      *(undefined4 *)(lVar2 + 0x23308) = param_1;
      *(undefined4 *)(lVar2 + 0x2330c) = param_2;
      *(undefined4 *)(lVar2 + 0x23328) = 0x110000;
      *(undefined4 *)(lVar2 + 0x2331c) = 0;
      *(undefined1 *)(lVar2 + 0x2332c) = 0;
      for (local_28 = 0; local_28 < 0x80; local_28 = local_28 + 1) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x23300) + (longlong)local_28 * 4) = param_1;
      }
      for (; local_28 < 0xc0; local_28 = local_28 + 1) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x23300) + (longlong)local_28 * 4) = param_2;
      }
      for (local_28 = 0xc0; local_28 < 0x100; local_28 = local_28 + 1) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x23300) + (longlong)local_28 * 4) = param_1;
      }
      *(undefined4 *)(lVar2 + 0x23324) = 0xc0;
      *(undefined4 *)(lVar2 + 0x23318) = 0x100;
      local_28 = 0;
      for (local_24 = 0; local_24 < 0x80; local_24 = local_24 + 0x20) {
        *(int *)(lVar2 + 0x880 + (longlong)local_28 * 4) = local_24;
        *(undefined4 *)(lVar2 + 0x23330 + (longlong)local_28 * 4) = 1;
        local_28 = local_28 + 1;
      }
      for (; local_24 < 0xc0; local_24 = local_24 + 0x20) {
        *(undefined4 *)(lVar2 + 0x23330 + (longlong)local_28 * 4) = 0;
        local_28 = local_28 + 1;
      }
      *(undefined4 *)(lVar2 + 0x23330 + (longlong)local_28 * 4) = 0x881d;
      while( true ) {
        local_24 = local_24 + 0x20;
        local_28 = local_28 + 1;
        if (0xff < local_24) break;
        *(undefined4 *)(lVar2 + 0x23330 + (longlong)local_28 * 4) = 0;
      }
      for (local_28 = 4; local_28 < 0x820; local_28 = local_28 + 1) {
        *(undefined4 *)(lVar2 + 0x880 + (longlong)local_28 * 4) = 0xc0;
      }
      for (local_28 = 0; local_28 < 0x240; local_28 = local_28 + 1) {
        *(undefined4 *)(lVar2 + 0x880 + (longlong)(local_28 + 0x820) * 4) = 0xffffffff;
      }
      for (local_28 = 0; local_28 < 0x40; local_28 = local_28 + 1) {
        *(undefined4 *)(lVar2 + 0x880 + (longlong)(local_28 + 0xa60) * 4) = 0xc0;
      }
      *(undefined4 *)(lVar2 + 0x23320) = 0xa60;
      *(undefined4 *)(lVar2 + 0x23310) = 0xaa0;
      local_24 = 0;
      for (local_28 = 0; local_28 < 0x20; local_28 = local_28 + 1) {
        *(int *)(lVar2 + (longlong)local_28 * 4) = local_24;
        local_24 = local_24 + 0x40;
      }
      for (; local_28 < 0x220; local_28 = local_28 + 1) {
        *(undefined4 *)(lVar2 + (longlong)local_28 * 4) = 0xa60;
      }
      for (local_28 = 0x80; local_28 < 0x800; local_28 = local_28 + 0x20) {
        FUN_143b340b0(_Dst,local_28,param_1,param_3);
      }
    }
  }
  else {
    _Dst = (void *)0x0;
  }
  return _Dst;
}



// FUNCTION 143b34030 FUN_143b34030 body=114 status=ok
// SIG undefined FUN_143b34030(void)

void FUN_143b34030(longlong param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((param_2 & 0xfffffc00) == 0xd800) {
      FUN_143b33350(*(undefined8 *)(param_1 + 0x48),param_2,0,param_3,param_4);
    }
    else {
      *param_4 = 1;
    }
  }
  return;
}



// FUNCTION 143b340b0 FUN_143b340b0 body=108 status=ok
// SIG undefined FUN_143b340b0(void)

void FUN_143b340b0(longlong param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_2 < 0x110000) {
      FUN_143b33350(*(undefined8 *)(param_1 + 0x48),param_2,1,param_3,param_4);
    }
    else {
      *param_4 = 1;
    }
  }
  return;
}



// FUNCTION 143b34120 FUN_143b34120 body=1169 status=ok
// SIG undefined FUN_143b34120(void)

void FUN_143b34120(longlong param_1,uint param_2,uint param_3,int param_4,char param_5,
                  undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint local_res10;
  int local_24;
  
  cVar4 = FUN_143a8b0e0(*param_6);
  if (cVar4 == '\0') {
    if (((param_2 < 0x110000) && (param_3 < 0x110000)) && ((int)param_2 <= (int)param_3)) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      if ((lVar2 == 0) || (*(char *)(lVar2 + 0x2332c) != '\0')) {
        *param_6 = 0x1e;
      }
      else if ((param_5 != '\0') || (param_4 != *(int *)(lVar2 + 0x23308))) {
        param_3 = param_3 + 1;
        local_res10 = param_2;
        if ((param_2 & 0x1f) != 0) {
          iVar5 = FUN_143b330c0(lVar2,param_2,1);
          if (iVar5 < 0) {
            *param_6 = 7;
            return;
          }
          local_res10 = param_2 + 0x20 & 0xffffffe0;
          if ((int)param_3 < (int)local_res10) {
            FUN_143b32d20(*(longlong *)(lVar2 + 0x23300) + (longlong)iVar5 * 4,param_2 & 0x1f,
                          param_3 & 0x1f,param_4,*(undefined4 *)(lVar2 + 0x23308),param_5);
            return;
          }
          FUN_143b32d20(*(longlong *)(lVar2 + 0x23300) + (longlong)iVar5 * 4,param_2 & 0x1f,0x20,
                        param_4,*(undefined4 *)(lVar2 + 0x23308),param_5);
        }
        if (param_4 == *(int *)(lVar2 + 0x23308)) {
          local_24 = *(int *)(lVar2 + 0x23324);
        }
        else {
          local_24 = -1;
        }
        while ((int)local_res10 < (int)(param_3 & 0xffffffe0)) {
          bVar3 = false;
          if ((param_4 == *(int *)(lVar2 + 0x23308)) &&
             (cVar4 = FUN_143b33220(lVar2,local_res10,1), cVar4 != '\0')) {
            local_res10 = local_res10 + 0x20;
          }
          else {
            iVar5 = FUN_143b33180(lVar2,local_res10,1);
            if (iVar5 < 0) {
              *param_6 = 5;
              return;
            }
            iVar5 = iVar5 + ((int)local_res10 >> 5 & 0x3fU);
            iVar1 = *(int *)(lVar2 + 0x880 + (longlong)iVar5 * 4);
            cVar4 = FUN_143b332c0(lVar2,iVar1);
            if (cVar4 == '\0') {
              if ((*(int *)(*(longlong *)(lVar2 + 0x23300) + (longlong)iVar1 * 4) != param_4) &&
                 ((param_5 != '\0' || (iVar1 == *(int *)(lVar2 + 0x23324))))) {
                bVar3 = true;
              }
            }
            else if ((param_5 == '\0') || (iVar1 < 0x880)) {
              FUN_143b32d20(*(longlong *)(lVar2 + 0x23300) + (longlong)iVar1 * 4,0,0x20,param_4,
                            *(undefined4 *)(lVar2 + 0x23308),param_5);
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if (local_24 < 0) {
                local_24 = FUN_143b330c0(lVar2,local_res10,1);
                if (local_24 < 0) {
                  *param_6 = 7;
                  return;
                }
                FUN_143b334b0(*(longlong *)(lVar2 + 0x23300) + (longlong)local_24 * 4,param_4);
              }
              else {
                FUN_143b333f0(lVar2,iVar5,local_24);
              }
            }
            local_res10 = local_res10 + 0x20;
          }
        }
        if ((param_3 & 0x1f) != 0) {
          iVar5 = FUN_143b330c0(lVar2,local_res10,1);
          if (iVar5 < 0) {
            *param_6 = 7;
          }
          else {
            FUN_143b32d20(*(longlong *)(lVar2 + 0x23300) + (longlong)iVar5 * 4,0,param_3 & 0x1f,
                          param_4,*(undefined4 *)(lVar2 + 0x23308),param_5);
          }
        }
      }
    }
    else {
      *param_6 = 1;
    }
  }
  return;
}



// FUNCTION 143b345c0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::FilteredNormalizer2::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b345f0 FUN_143b345f0 body=62 status=ok
// SIG undefined FUN_143b345f0(void)

void FUN_143b345f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b34da0(param_1,param_2,param_3,0,param_4);
  return;
}



// FUNCTION 143b34630 FUN_143b34630 body=144 status=ok
// SIG undefined FUN_143b34630(void)

undefined4 FUN_143b34630(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(undefined8 *)(param_1 + 0x10),param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(undefined8 *)(param_1 + 0x10),param_3), cVar1 != '\0')) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                      (*(undefined8 *)(param_1 + 8),param_2,param_3);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 143b346c0 FUN_143b346c0 body=103 status=ok
// SIG undefined FUN_143b346c0(void)

undefined1 FUN_143b346c0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(undefined8 *)(param_1 + 0x10),param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(undefined8 *)(param_1 + 8),param_2)
    ;
  }
  return uVar2;
}



// FUNCTION 143b34730 FUN_143b34730 body=115 status=ok
// SIG undefined FUN_143b34730(void)

undefined1 FUN_143b34730(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(undefined8 *)(param_1 + 0x10),param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                        (*(undefined8 *)(param_1 + 8),param_2,param_3), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b347b0 FUN_143b347b0 body=115 status=ok
// SIG undefined FUN_143b347b0(void)

undefined1 FUN_143b347b0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(undefined8 *)(param_1 + 0x10),param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(undefined8 *)(param_1 + 8),param_2,param_3), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b34830 FUN_143b34830 body=105 status=ok
// SIG undefined FUN_143b34830(void)

undefined1 FUN_143b34830(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(undefined8 *)(param_1 + 0x10),param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                        (*(undefined8 *)(param_1 + 8),param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 143b348a0 FUN_143b348a0 body=105 status=ok
// SIG undefined FUN_143b348a0(void)

undefined1 FUN_143b348a0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(undefined8 *)(param_1 + 0x10),param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                        (*(undefined8 *)(param_1 + 8),param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 143b34910 FUN_143b34910 body=105 status=ok
// SIG undefined FUN_143b34910(void)

undefined1 FUN_143b34910(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(undefined8 *)(param_1 + 0x10),param_2);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                        (*(undefined8 *)(param_1 + 8),param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 143b34980 FUN_143b34980 body=438 status=ok
// SIG undefined FUN_143b34980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b34980(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  char local_68;
  uint local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64 = 0;
  FUN_143b207e0(param_2,param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_60 = 2;
    local_5c = 0;
    while (iVar2 = FUN_143a904f0(param_2), local_5c < iVar2) {
      local_54 = FUN_143b35310(*(undefined8 *)(param_1 + 0x10),param_2,local_5c,local_60);
      if (local_60 == 0) {
        local_60 = 2;
      }
      else {
        local_50 = FUN_143b355b0(param_2,local_38,local_5c,local_54);
        local_64 = local_64 | 1;
        local_48 = local_50;
        cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                          (*(undefined8 *)(param_1 + 8),local_50,param_3);
        if ((cVar1 == '\0') || (cVar1 = FUN_143a8b0e0(*param_3), cVar1 != '\0')) {
          local_58 = 1;
        }
        else {
          local_58 = 0;
        }
        local_68 = (char)local_58;
        if ((local_64 & 1) != 0) {
          local_64 = local_64 & 0xfffffffe;
          FUN_143a8dc60(local_38);
        }
        if (local_68 != '\0') {
          return 0;
        }
        local_60 = 0;
      }
      local_5c = local_54;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b34b40 FUN_143b34b40 body=447 status=ok
// SIG undefined FUN_143b34b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b34b40(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 *param_5
             )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_res20;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_143a8ac30(local_68);
  local_98 = 0;
  local_res20 = param_4;
  while (iVar2 = FUN_143a904f0(param_2), local_98 < iVar2) {
    local_90 = FUN_143b35310(*(undefined8 *)(param_1 + 0x10),param_2,local_98,local_res20);
    local_94 = local_90 - local_98;
    if (local_res20 == 0) {
      if (local_94 != 0) {
        FUN_143acc540(param_3,param_2,local_98,local_94);
      }
      local_res20 = 2;
    }
    else {
      if (local_94 != 0) {
        local_88 = FUN_143b355b0(param_2,local_40,local_98,local_90);
        local_80 = local_88;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
                          (*(undefined8 *)(param_1 + 8),local_88,local_68,param_5);
        FUN_143a8e070(param_3,uVar3);
        FUN_143a8dc60(local_40);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') break;
      }
      local_res20 = 0;
    }
    local_98 = local_90;
  }
  local_78 = param_3;
  FUN_143a8dc60(local_68);
  return local_78;
}



// FUNCTION 143b34d00 FUN_143b34d00 body=156 status=ok
// SIG undefined FUN_143b34d00(void)

longlong FUN_143b34d00(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  
  FUN_143b207e0(param_2,param_4);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_3 == param_2) {
      *param_4 = 1;
    }
    else {
      FUN_143a90910(param_3);
      param_3 = FUN_143b34b40(param_1,param_2,param_3,2,param_4);
    }
  }
  else {
    FUN_143a90e90(param_3);
  }
  return param_3;
}



// FUNCTION 143b34da0 FUN_143b34da0 body=898 status=ok
// SIG undefined FUN_143b34da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b34da0(longlong *param_1,longlong param_2,longlong param_3,char param_4,
                      undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_143b207e0(param_2,param_5);
  FUN_143b207e0(param_3,param_5);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_2 == param_3) {
      *param_5 = 1;
    }
    else {
      cVar1 = FUN_143a903a0(param_2);
      if (cVar1 == '\0') {
        local_98 = FUN_143b35310(param_1[2],param_3,0,2);
        if (local_98 != 0) {
          FUN_143a90ff0(param_3,local_88,0,local_98);
          local_94 = FUN_143b353b0(param_1[2],param_2,0x7fffffff,2);
          if (local_94 == 0) {
            if (param_4 == '\0') {
              (**(code **)(*(longlong *)param_1[1] + 0x20))(param_1[1],param_2,local_88,param_5);
            }
            else {
              (**(code **)(*(longlong *)param_1[1] + 0x18))(param_1[1],param_2,local_88,param_5);
            }
          }
          else {
            FUN_143a8d470(local_60,param_2,local_94,0x7fffffff);
            if (param_4 == '\0') {
              (**(code **)(*(longlong *)param_1[1] + 0x20))(param_1[1],local_60,local_88,param_5);
            }
            else {
              (**(code **)(*(longlong *)param_1[1] + 0x18))(param_1[1],local_60,local_88,param_5);
            }
            FUN_143b20580(param_2,local_94,0x7fffffff,local_60);
            FUN_143a8dc60(local_60);
          }
          FUN_143a8dc60(local_88);
        }
        iVar2 = FUN_143a904f0(param_3);
        if (local_98 < iVar2) {
          FUN_143a90ff0(param_3,local_38,local_98,0x7fffffff);
          if (param_4 == '\0') {
            FUN_143a8e070(param_2,local_38);
          }
          else {
            local_a8 = param_5;
            FUN_143b34b40(param_1,local_38,param_2,0);
          }
          FUN_143a8dc60(local_38);
        }
      }
      else if (param_4 == '\0') {
        param_2 = FUN_143a8dcd0(param_2,param_3);
      }
      else {
        param_2 = (**(code **)(*param_1 + 0x10))(param_1,param_3,param_2,param_5);
      }
    }
  }
  return param_2;
}



// FUNCTION 143b35130 FUN_143b35130 body=62 status=ok
// SIG undefined FUN_143b35130(void)

void FUN_143b35130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b34da0(param_1,param_2,param_3,1,param_4);
  return;
}



// FUNCTION 143b35170 FUN_143b35170 body=401 status=ok
// SIG undefined FUN_143b35170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b35170(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_143b207e0(param_2,param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_5c = 1;
    local_68 = 2;
    local_60 = 0;
    while (iVar2 = FUN_143a904f0(param_2), local_60 < iVar2) {
      local_58 = FUN_143b35310(*(undefined8 *)(param_1 + 0x10),param_2,local_60,local_68);
      if (local_68 == 0) {
        local_68 = 2;
      }
      else {
        local_50 = FUN_143b355b0(param_2,local_38,local_60,local_58);
        local_48 = local_50;
        local_64 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))
                             (*(undefined8 *)(param_1 + 8),local_50,param_3);
        FUN_143a8dc60(local_38);
        cVar1 = FUN_143a8b0e0(*param_3);
        if (cVar1 != '\0') {
          return local_64;
        }
        if (local_64 == 0) {
          return 0;
        }
        if (local_64 == 2) {
          local_5c = local_64;
        }
        local_68 = 0;
      }
      local_60 = local_58;
    }
  }
  else {
    local_5c = 2;
  }
  return local_5c;
}



// FUNCTION 143b35310 FUN_143b35310 body=146 status=ok
// SIG undefined FUN_143b35310(void)

int FUN_143b35310(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res18;
  
  iVar1 = FUN_143a904f0(param_2);
  if (param_3 < 0) {
    local_res18 = 0;
  }
  else {
    local_res18 = param_3;
    if (iVar1 < param_3) {
      local_res18 = iVar1;
    }
  }
  lVar2 = FUN_143a8fe10(param_2);
  iVar1 = FUN_143b15fb0(param_1,lVar2 + (longlong)local_res18 * 2,iVar1 - local_res18,param_4);
  return local_res18 + iVar1;
}



// FUNCTION 143b353b0 FUN_143b353b0 body=111 status=ok
// SIG undefined FUN_143b353b0(void)

void FUN_143b353b0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_res18;
  
  iVar1 = FUN_143a904f0(param_2);
  if (param_3 < 0) {
    local_res18 = 0;
  }
  else {
    local_res18 = param_3;
    if (iVar1 < param_3) {
      local_res18 = iVar1;
    }
  }
  uVar2 = FUN_143a8fe10(param_2);
  FUN_143b16280(param_1,uVar2,local_res18,param_4);
  return;
}



// FUNCTION 143b35420 FUN_143b35420 body=395 status=ok
// SIG undefined FUN_143b35420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b35420(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_143b207e0(param_2,param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_64 = 2;
    local_68 = 0;
    while (iVar2 = FUN_143a904f0(param_2), local_68 < iVar2) {
      local_60 = FUN_143b35310(*(undefined8 *)(param_1 + 0x10),param_2,local_68,local_64);
      if (local_64 == 0) {
        local_64 = 2;
      }
      else {
        local_58 = FUN_143b355b0(param_2,local_40,local_68,local_60);
        local_50 = local_58;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))
                          (*(undefined8 *)(param_1 + 8),local_58,param_3);
        local_5c = local_68 + iVar2;
        FUN_143a8dc60(local_40);
        cVar1 = FUN_143a8b0e0(*param_3);
        if ((cVar1 != '\0') || ((int)local_5c < local_60)) {
          return (ulonglong)local_5c;
        }
        local_64 = 0;
      }
      local_68 = local_60;
    }
    uVar3 = FUN_143a904f0(param_2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b355b0 FUN_143b355b0 body=88 status=ok
// SIG undefined FUN_143b355b0(void)

undefined8 FUN_143b355b0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  FUN_143a90ff0(param_1,param_2,param_3,param_4 - param_3,0);
  return param_2;
}



// FUNCTION 143b35610 FUN_143b35610 body=54 status=ok
// SIG undefined FUN_143b35610(void)

undefined8 * FUN_143b35610(undefined8 *param_1,undefined8 param_2)

{
  FUN_143a8abc0(param_1,param_2);
  *param_1 = icu_53::Collator::vftable;
  return param_1;
}



// FUNCTION 143b35650 FUN_143b35650 body=60 status=ok
// SIG undefined FUN_143b35650(void)

undefined8 * FUN_143b35650(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Collator::vftable;
  return param_1;
}



// FUNCTION 143b35690 FUN_143b35690 body=147 status=ok
// SIG undefined FUN_143b35690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b35690(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = FUN_143a8d9f0(local_40,"icudt53l-coll",0xffffffff,0);
  local_50 = local_58;
  FUN_143acecd0(param_1,local_58);
  FUN_143a8dc60(local_40);
  *param_1 = icu_53::ICUCollatorFactory::vftable;
  return param_1;
}



// FUNCTION 143b35730 FUN_143b35730 body=249 status=ok
// SIG undefined FUN_143b35730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b35730(undefined8 *param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = FUN_143a8d4f0(local_40,1,L"Collator",0xffffffff);
  local_50 = local_60;
  FUN_143acef70(param_1,local_60);
  FUN_143a8dc60(local_40);
  *param_1 = icu_53::ICUCollatorService::vftable;
  local_78[0] = 0;
  local_70 = FUN_143a8d310(0x60);
  if (local_70 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_143b35690(local_70);
  }
  local_58 = local_68;
  FUN_143ace0b0(param_1,local_68,local_78);
  return param_1;
}



// FUNCTION 143b35830 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::Collator::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b35860 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ICUCollatorFactory::vftable;
  UPrimalCharacterSetting::~UPrimalCharacterSetting(param_1);
  return;
}



// FUNCTION 143b35890 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(CHttpFile *param_1)

{
  *(undefined ***)param_1 = icu_53::ICUCollatorService::vftable;
  CHttpFile::~CHttpFile(param_1);
  return;
}



// FUNCTION 143b358c0 FUN_143b358c0 body=64 status=ok
// SIG undefined FUN_143b358c0(void)

bool FUN_143b358c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143b35900 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b35940 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b35980 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b359c0 FUN_143b359c0 body=35 status=ok
// SIG undefined FUN_143b359c0(void)

void FUN_143b359c0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 143b359f0 FUN_143b359f0 body=63 status=ok
// SIG undefined FUN_143b359f0(void)

void FUN_143b359f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3,local_18);
  return;
}



// FUNCTION 143b35a30 FUN_143b35a30 body=78 status=ok
// SIG undefined FUN_143b35a30(void)

void FUN_143b35a30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4,local_18);
  return;
}



// FUNCTION 143b35a80 FUN_143b35a80 body=86 status=ok
// SIG undefined FUN_143b35a80(void)

void FUN_143b35a80(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5,local_18);
  return;
}



// FUNCTION 143b35ae0 FUN_143b35ae0 body=61 status=ok
// SIG undefined FUN_143b35ae0(void)

undefined8 FUN_143b35ae0(void)

{
  char cVar1;
  undefined4 *in_R9;
  
  cVar1 = FUN_143a8b110(*in_R9);
  if (cVar1 != '\0') {
    *in_R9 = 0x10;
  }
  return 0;
}



// FUNCTION 143b35b20 FUN_143b35b20 body=210 status=ok
// SIG undefined FUN_143b35b20(void)

undefined8
FUN_143b35b20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_e8 [112];
  undefined1 local_78 [120];
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_2);
    uVar3 = FUN_143a8b510(param_2);
    FUN_143a94010(local_78,uVar3,uVar2);
    uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_3);
    uVar3 = FUN_143a8b510(param_3);
    FUN_143a94010(local_e8,uVar3,uVar2);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1,local_78,local_e8,param_4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b35c00 FUN_143b35c00 body=210 status=ok
// SIG undefined FUN_143b35c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b35c00(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4);
  if (cVar1 == '\0') {
    local_1b0 = 0;
  }
  else {
    local_1b8 = param_2;
    FUN_143a8aad0(local_198);
    (**(code **)(*local_1b8 + 0x50))(local_1b8,local_198);
    local_1b0 = FUN_143b362d0(local_198,param_4);
    FUN_143a8acf0(local_198);
  }
  return local_1b0;
}



// FUNCTION 143b35ce0 FUN_143b35ce0 body=193 status=ok
// SIG undefined FUN_143b35ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b35ce0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b36070();
    if (cVar1 == '\0') {
      local_1a8 = FUN_143b362d0(param_1,param_2);
    }
    else {
      FUN_143a8aad0(local_198);
      local_1a8 = FUN_143acf7c0(DAT_146bc7de0,param_1,local_198,param_2);
      FUN_143a8acf0(local_198);
    }
  }
  else {
    local_1a8 = 0;
  }
  return local_1a8;
}



// FUNCTION 143b35db0 FUN_143b35db0 body=152 status=ok
// SIG undefined FUN_143b35db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b35db0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 *local_res18;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_143a8ac30(local_38);
  local_res18 = param_3;
  if (param_3 == (undefined1 *)0x0) {
    local_res18 = local_38;
  }
  local_48 = FUN_143acd870(param_1,param_2,local_res18,param_4);
  FUN_143a8dc60(local_38);
  return local_48;
}



// FUNCTION 143b35e50 FUN_143b35e50 body=11 status=ok
// SIG undefined FUN_143b35e50(void)

undefined8 FUN_143b35e50(void)

{
  return 0x1001;
}



// FUNCTION 143b35e60 FUN_143b35e60 body=61 status=ok
// SIG undefined FUN_143b35e60(void)

undefined8 FUN_143b35e60(void)

{
  char cVar1;
  undefined4 *in_R9;
  
  cVar1 = FUN_143a8b110(*in_R9);
  if (cVar1 != '\0') {
    *in_R9 = 0x10;
  }
  return 0;
}



// FUNCTION 143b35ea0 `dynamic_atexit_destructor_for_'Singleton'' body=35 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

undefined8
`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  FUN_143a9aa60(&DAT_146bc7de8,FUN_143b360b0);
  return DAT_146bc7de0;
}



// FUNCTION 143b35ed0 FUN_143b35ed0 body=51 status=ok
// SIG undefined FUN_143b35ed0(void)

void FUN_143b35ed0(longlong *param_1)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0xb8))(param_1,5,local_18);
  return;
}



// FUNCTION 143b35f10 FUN_143b35f10 body=123 status=ok
// SIG undefined FUN_143b35f10(void)

undefined8 FUN_143b35f10(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_20;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x58);
    if (lVar2 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_143b11d30(lVar2,0,0x10ffff);
    }
  }
  else {
    local_20 = 0;
  }
  return local_20;
}



// FUNCTION 143b35f90 FUN_143b35f90 body=209 status=ok
// SIG undefined FUN_143b35f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b35f90(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1b8 = param_2;
  if (param_3 != 0) {
    FUN_143a99400(param_3,0);
  }
  local_1c8 = 0;
  FUN_143a8a690(local_198,&DAT_145af3922,0,0);
  (**(code **)(*local_1b8 + 0x50))(local_1b8,local_198);
  local_1b0 = FUN_143b362d0(local_198,param_4);
  FUN_143a8acf0(local_198);
  return local_1b0;
}



// FUNCTION 143b36070 FUN_143b36070 body=64 status=ok
// SIG undefined FUN_143b36070(void)

undefined1 FUN_143b36070(void)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_143aa0050(&DAT_146bc7de8);
  if ((cVar1 == '\0') &&
     (lVar2 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
              _dynamic_atexit_destructor_for__Singleton__(), lVar2 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b360b0 FUN_143b360b0 body=106 status=ok
// SIG undefined FUN_143b360b0(void)

void FUN_143b360b0(void)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x200);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b35730(lVar1);
  }
  DAT_146bc7de0 = local_20;
  FUN_143b68380(0x17,FUN_143b36520);
  return;
}



// FUNCTION 143b36120 FUN_143b36120 body=294 status=ok
// SIG undefined FUN_143b36120(void)

undefined8
FUN_143b36120(longlong *param_1,char *param_2,int param_3,char *param_4,int param_5,
             undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong local_48;
  ulonglong local_40;
  undefined1 local_28 [16];
  undefined1 local_18 [24];
  
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if (((param_2 == (char *)0x0) && (param_3 != 0)) || ((param_4 == (char *)0x0 && (param_5 != 0)))
       ) {
      *param_6 = 1;
      uVar2 = 0;
    }
    else {
      if (param_5 < 0) {
        local_48 = _guard_xfg_dispatch_icall_nop(param_4);
      }
      else {
        local_48 = (ulonglong)param_5;
      }
      if (param_3 < 0) {
        local_40 = _guard_xfg_dispatch_icall_nop(param_2);
      }
      else {
        local_40 = (ulonglong)param_3;
      }
      uVar2 = FUN_143a94320(local_28,param_4,local_48 & 0xffffffff);
      uVar3 = FUN_143a94320(local_18,param_2,local_40 & 0xffffffff);
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1,uVar3,uVar2,param_6);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b36250 FUN_143b36250 body=61 status=ok
// SIG undefined FUN_143b36250(void)

undefined8 FUN_143b36250(void)

{
  char cVar1;
  undefined4 *in_stack_00000028;
  
  cVar1 = FUN_143a8b110(*in_stack_00000028);
  if (cVar1 != '\0') {
    *in_stack_00000028 = 0x10;
  }
  return 0;
}



// FUNCTION 143b36290 FUN_143b36290 body=61 status=ok
// SIG undefined FUN_143b36290(void)

undefined8 FUN_143b36290(void)

{
  char cVar1;
  undefined4 *in_stack_00000030;
  
  cVar1 = FUN_143a8b110(*in_stack_00000030);
  if (cVar1 != '\0') {
    *in_stack_00000030 = 0x10;
  }
  return 0;
}



// FUNCTION 143b362d0 FUN_143b362d0 body=328 status=ok
// SIG undefined FUN_143b362d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b362d0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1e8 = 0;
  FUN_143a8a690(local_198,&DAT_145af3922,0,0);
  local_1d8 = FUN_143b5f5e0(param_1,local_198,param_2);
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 != '\0') {
    local_1d0 = FUN_143a8d310(0x1a0);
    if (local_1d0 == 0) {
      local_1c8 = 0;
    }
    else {
      local_1c8 = FUN_143b60e90(local_1d0,local_1d8,local_198);
    }
    local_1b8 = local_1c8;
    local_1c0 = local_1c8;
    if (local_1c8 != 0) {
      local_1a8 = local_1c8;
      FUN_143a8acf0(local_198);
      return local_1a8;
    }
    *param_2 = 7;
  }
  if (local_1d8 != 0) {
    FUN_143e1a140(local_1d8);
  }
  local_1b0 = 0;
  FUN_143a8acf0(local_198);
  return local_1b0;
}



// FUNCTION 143b36420 FUN_143b36420 body=30 status=ok
// SIG undefined FUN_143b36420(void)

void FUN_143b36420(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 143b36440 FUN_143b36440 body=21 status=ok
// SIG undefined FUN_143b36440(void)

void FUN_143b36440(void)

{
  return;
}



// FUNCTION 143b36460 FUN_143b36460 body=58 status=ok
// SIG undefined FUN_143b36460(void)

undefined8 FUN_143b36460(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    *param_3 = 0x10;
  }
  return param_1;
}



// FUNCTION 143b364a0 FUN_143b364a0 body=59 status=ok
// SIG undefined FUN_143b364a0(void)

void FUN_143b364a0(void)

{
  char cVar1;
  undefined4 *in_R9;
  
  cVar1 = FUN_143a8b110(*in_R9);
  if (cVar1 != '\0') {
    *in_R9 = 0x10;
  }
  return;
}



// FUNCTION 143b364e0 FUN_143b364e0 body=60 status=ok
// SIG undefined FUN_143b364e0(void)

void FUN_143b364e0(longlong *param_1,undefined4 param_2)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0xb0))(param_1,5,param_2,local_18);
  return;
}



// FUNCTION 143b36520 FUN_143b36520 body=283 status=ok
// SIG undefined FUN_143b36520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143b36520(void)

{
  if (DAT_146bc7de0 != (undefined8 *)0x0) {
    if (DAT_146bc7de0 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc7de0)(DAT_146bc7de0,1);
    }
    DAT_146bc7de0 = (undefined8 *)0x0;
  }
  FUN_143a9a9f0(&DAT_146bc7de8);
  if (DAT_146bc7dd8 != (undefined8 *)0x0) {
    if (DAT_146bc7dd8 != (undefined8 *)0x0) {
      if (DAT_146bc7dd8[-1] == 0) {
        FMemory::operator_delete(DAT_146bc7dd8 + -1);
      }
      else {
        (**(code **)*DAT_146bc7dd8)(DAT_146bc7dd8,3);
      }
    }
    DAT_146bc7dd8 = (undefined8 *)0x0;
  }
  _DAT_146bc7df0 = 0;
  FUN_143a9a9f0(&DAT_146bc7df8);
  return 1;
}



// FUNCTION 143b36640 FUN_143b36640 body=89 status=ok
// SIG undefined FUN_143b36640(void)

void FUN_143b36640(longlong param_1,longlong *param_2)

{
  if (param_1 != *param_2) {
    if (*param_2 != 0) {
      FUN_143e1a1c0(*param_2);
    }
    *param_2 = param_1;
    if (param_1 != 0) {
      FUN_143e1a120(param_1);
    }
  }
  return;
}



// FUNCTION 143b366a0 FUN_143b366a0 body=90 status=ok
// SIG undefined FUN_143b366a0(void)

void FUN_143b366a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_143e1a6f0(param_1,param_2,param_4);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143b36640(uVar2,param_3);
  }
  return;
}



// FUNCTION 143b36700 FUN_143b36700 body=49 status=ok
// SIG undefined FUN_143b36700(void)

longlong * FUN_143b36700(longlong *param_1)

{
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0x28;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 143b36740 FUN_143b36740 body=203 status=ok
// SIG undefined FUN_143b36740(void)

undefined8 * FUN_143b36740(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  wchar_t *_Source;
  undefined8 uVar2;
  
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = FUN_143b694f0();
  if ((lVar1 != 0) &&
     (lVar1 = _guard_xfg_dispatch_icall_nop
                        (lVar1,0,&icu_53::UObject::RTTI_Type_Descriptor,
                         &icu_53::CurrencyAmount::RTTI_Type_Descriptor,0), lVar1 != 0)) {
    _Source = (wchar_t *)FUN_143b382a0(lVar1);
    wcscpy((wchar_t *)(param_1 + 1),_Source);
    uVar2 = FUN_143accb70(lVar1);
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
  *(undefined2 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 143b36810 FUN_143b36810 body=100 status=ok
// SIG undefined FUN_143b36810(void)

undefined8 * FUN_143b36810(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::FieldPosition::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 143b36880 FUN_143b36880 body=44 status=ok
// SIG undefined FUN_143b36880(void)

CMonikerFile * FUN_143b36880(CMonikerFile *param_1)

{
  CMonikerFile::CMonikerFile(param_1);
  *(undefined ***)param_1 = icu_53::ICUNumberFormatFactory::vftable;
  return param_1;
}



// FUNCTION 143b368b0 FUN_143b368b0 body=265 status=ok
// SIG undefined FUN_143b368b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b368b0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = FUN_143a8d4f0(local_40,1,L"Number Format",0xffffffff);
  local_50 = local_60;
  FUN_143acef70(param_1,local_60);
  FUN_143a8dc60(local_40);
  *param_1 = icu_53::ICUNumberFormatService::vftable;
  local_70[0] = 0;
  local_78 = (undefined1 *)FUN_143a8d310(0x60);
  if (local_78 == (undefined1 *)0x0) {
    local_68 = 0;
  }
  else {
    puVar2 = local_78;
    for (lVar1 = 0x60; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_68 = FUN_143b36880(local_78);
  }
  local_58 = local_68;
  FUN_143ace0b0(param_1,local_68,local_70);
  return param_1;
}



// FUNCTION 143b369c0 FUN_143b369c0 body=80 status=ok
// SIG undefined FUN_143b369c0(void)

undefined8 *
FUN_143b369c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b69a00(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::NumberFormat::vftable;
  FUN_143b36d60(param_1,param_2);
  return param_1;
}



// FUNCTION 143b36a10 FUN_143b36a10 body=179 status=ok
// SIG undefined FUN_143b36a10(void)

undefined8 * FUN_143b36a10(undefined8 *param_1)

{
  FUN_143b69a50(param_1);
  *param_1 = icu_53::NumberFormat::vftable;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 2000000000;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x154) = 3;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15d) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0x15e) = 0;
  return param_1;
}



// FUNCTION 143b36ad0 FUN_143b36ad0 body=63 status=ok
// SIG undefined FUN_143b36ad0(void)

_AfxBindHost * FUN_143b36ad0(_AfxBindHost *param_1,undefined8 param_2)

{
  _AfxBindHost::_AfxBindHost(param_1);
  *(undefined ***)param_1 = icu_53::SharedNumberFormat::vftable;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}



// FUNCTION 143b36b10 _AfxBindHost body=56 status=ok
// SIG undefined _AfxBindHost(_AfxBindHost * this)

/* Library Function - Single Match
    public: __cdecl _AfxBindHost::_AfxBindHost(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

_AfxBindHost * __thiscall _AfxBindHost::_AfxBindHost(_AfxBindHost *this)

{
  GetTestRenderTransformPivot(this);
  *(undefined ***)this = icu_53::SharedObject::vftable;
  *(undefined4 *)(this + 8) = 0;
  return this;
}



// FUNCTION 143b36b50 FUN_143b36b50 body=81 status=ok
// SIG undefined FUN_143b36b50(void)

undefined8 *
FUN_143b36b50(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143e1a280(param_1,param_2,param_4);
  *param_1 = icu_53::SimpleLRUCache::vftable;
  param_1[5] = param_3;
  return param_1;
}



// FUNCTION 143b36bb0 FUN_143b36bb0 body=102 status=ok
// SIG undefined FUN_143b36bb0(void)

void FUN_143b36bb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143b1b790(param_1);
  return;
}



// FUNCTION 143b36c20 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ICUNumberFormatFactory::vftable;
  UPrimalCharacterSetting::~UPrimalCharacterSetting(param_1);
  return;
}



// FUNCTION 143b36c50 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(CHttpFile *param_1)

{
  *(undefined ***)param_1 = icu_53::ICUNumberFormatService::vftable;
  CHttpFile::~CHttpFile(param_1);
  return;
}



// FUNCTION 143b36c80 FUN_143b36c80 body=37 status=ok
// SIG undefined FUN_143b36c80(void)

void FUN_143b36c80(undefined8 *param_1)

{
  FUN_143aa2ef0(*param_1);
  FUN_143b1b790(param_1);
  return;
}



// FUNCTION 143b36cb0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::NumberFormat::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b36ce0 FUN_143b36ce0 body=118 status=ok
// SIG undefined FUN_143b36ce0(void)

void FUN_143b36ce0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::SharedNumberFormat::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b36d60 FUN_143b36d60 body=271 status=ok
// SIG undefined FUN_143b36d60(void)

longlong FUN_143b36d60(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_143b69b20(param_1,param_2);
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined1 *)(param_1 + 0x15c) = *(undefined1 *)(param_2 + 0x15c);
    FUN_143ab47f0(param_1 + 0x15e,param_2 + 0x15e,4);
    *(undefined1 *)(param_1 + 0x15d) = *(undefined1 *)(param_2 + 0x15d);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  }
  return param_1;
}



// FUNCTION 143b36e70 FUN_143b36e70 body=343 status=ok
// SIG undefined FUN_143b36e70(void)

undefined1 FUN_143b36e70(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_18;
  
  if (param_1 == param_2) {
LAB_143b36fb8:
    local_18 = 1;
  }
  else {
    cVar1 = FUN_143ab1dd0(param_1,param_2);
    if (((((cVar1 != '\0') && (*(int *)(param_1 + 0x14c) == *(int *)(param_2 + 0x14c))) &&
         (*(int *)(param_1 + 0x150) == *(int *)(param_2 + 0x150))) &&
        ((*(int *)(param_1 + 0x154) == *(int *)(param_2 + 0x154) &&
         (*(int *)(param_1 + 0x158) == *(int *)(param_2 + 0x158))))) &&
       ((*(char *)(param_1 + 0x148) == *(char *)(param_2 + 0x148) &&
        (*(char *)(param_1 + 0x15c) == *(char *)(param_2 + 0x15c))))) {
      iVar2 = FUN_143ab4670(param_1 + 0x15e,param_2 + 0x15e);
      if (((iVar2 == 0) && (*(char *)(param_1 + 0x15d) == *(char *)(param_2 + 0x15d))) &&
         (*(int *)(param_1 + 0x168) == *(int *)(param_2 + 0x168))) goto LAB_143b36fb8;
    }
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b36fd0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b37010 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b37050 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b37090 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b370d0 FUN_143b370d0 body=54 status=ok
// SIG undefined FUN_143b370d0(void)

undefined8 FUN_143b370d0(undefined8 param_1,uint param_2)

{
  FUN_143b36ce0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b37110 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b37150 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b37190 FUN_143b37190 body=99 status=ok
// SIG undefined FUN_143b37190(void)

void FUN_143b37190(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 143b37200 Attach body=45 status=ok
// SIG void Attach(CHeapPtrBase<wchar_t,ATL::CComAllocator> * this, wchar_t * param_1)

/* Library Function - Single Match
    public: void __cdecl ATL::CHeapPtrBase<wchar_t,class ATL::CComAllocator>::Attach(wchar_t *
   __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

void __thiscall
ATL::CHeapPtrBase<wchar_t,ATL::CComAllocator>::Attach
          (CHeapPtrBase<wchar_t,ATL::CComAllocator> *this,wchar_t *param_1)

{
  FUN_143aa2ef0(*(undefined8 *)this);
  *(wchar_t **)this = param_1;
  return;
}



// FUNCTION 143b37230 FUN_143b37230 body=39 status=ok
// SIG undefined FUN_143b37230(void)

void FUN_143b37230(undefined8 param_1,undefined8 param_2)

{
  FUN_143b372c0(param_1,2,param_2);
  return;
}



// FUNCTION 143b37260 FUN_143b37260 body=37 status=ok
// SIG undefined FUN_143b37260(void)

void FUN_143b37260(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a8b650();
  FUN_143b372c0(uVar1,1,param_1);
  return;
}



// FUNCTION 143b37290 FUN_143b37290 body=39 status=ok
// SIG undefined FUN_143b37290(void)

void FUN_143b37290(undefined8 param_1,undefined8 param_2)

{
  FUN_143b372c0(param_1,1,param_2);
  return;
}



// FUNCTION 143b372c0 FUN_143b372c0 body=168 status=ok
// SIG undefined FUN_143b372c0(void)

longlong FUN_143b372c0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_2 == 1) {
    uVar3 = FUN_143b373a0(param_1,1,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)
               TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
               ::GetBoundProgramCounterForTimerManager(uVar3);
      lVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
      FUN_143e1a1c0(uVar3);
      if (lVar2 == 0) {
        *param_3 = 7;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = FUN_143b385d0(param_1,param_2,param_3);
  }
  return lVar2;
}



// FUNCTION 143b37370 FUN_143b37370 body=39 status=ok
// SIG undefined FUN_143b37370(void)

void FUN_143b37370(undefined8 param_1,undefined8 param_2)

{
  FUN_143b372c0(param_1,3,param_2);
  return;
}



// FUNCTION 143b373a0 FUN_143b373a0 body=110 status=ok
// SIG undefined FUN_143b373a0(void)

undefined8 FUN_143b373a0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18 [3];
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == 1) {
      local_18[0] = 0;
      uVar2 = FUN_143a8c200(param_1);
      FUN_143b38380(uVar2,local_18,param_3);
    }
    else {
      *param_3 = 0x10;
      local_18[0] = 0;
    }
  }
  else {
    local_18[0] = 0;
  }
  return local_18[0];
}



// FUNCTION 143b37410 FUN_143b37410 body=376 status=ok
// SIG undefined FUN_143b37410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b37410(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 *local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_1f8 = 0;
    FUN_143a8a690(local_198,param_1,0,0);
    local_1d8 = (undefined8 *)FUN_143b385d0(local_198,1,param_2);
    FUN_143a8acf0(local_198);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      local_1c8 = FUN_143a8d310(0x18);
      if (local_1c8 == 0) {
        local_1d0 = 0;
      }
      else {
        local_1d0 = FUN_143b36ad0(local_1c8,local_1d8);
      }
      local_1c0 = local_1d0;
      local_1e0 = local_1d0;
      if (local_1d0 == 0) {
        *param_2 = 7;
        local_1b0 = local_1d8;
        local_1e8 = local_1d8;
        if (local_1d8 != (undefined8 *)0x0) {
          (**(code **)*local_1d8)(local_1d8,1);
        }
        local_1d0 = 0;
      }
    }
    else {
      local_1d0 = 0;
    }
  }
  else {
    local_1d0 = 0;
  }
  return local_1d0;
}



// FUNCTION 143b37590 FUN_143b37590 body=130 status=ok
// SIG undefined FUN_143b37590(void)

void FUN_143b37590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_143a904f0(param_3);
  uVar2 = FUN_143a904f0(param_2);
  uVar3 = FUN_143a904f0(param_1);
  FUN_143a8fb00(param_1,0,uVar3,param_2,0,uVar2,param_3,0,uVar1);
  return;
}



// FUNCTION 143b37620 FUN_143b37620 body=102 status=ok
// SIG undefined FUN_143b37620(void)

undefined8 FUN_143b37620(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [40];
  
  FUN_143b36810(local_28,0);
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,local_28);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
  return uVar1;
}



// FUNCTION 143b37690 FUN_143b37690 body=121 status=ok
// SIG undefined FUN_143b37690(void)

undefined8
FUN_143b37690(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    uVar2 = FUN_143b75c80(param_2);
    (**(code **)(*param_1 + 0x88))(param_1,uVar2,param_3,param_4,param_5);
  }
  return param_3;
}



// FUNCTION 143b37710 FUN_143b37710 body=121 status=ok
// SIG undefined FUN_143b37710(void)

undefined8
FUN_143b37710(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    uVar2 = FUN_143b75c80(param_2);
    (**(code **)(*param_1 + 0x80))(param_1,uVar2,param_3,param_4,param_5);
  }
  return param_3;
}



// FUNCTION 143b37790 FUN_143b37790 body=821 status=ok
// SIG undefined FUN_143b37790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b37790(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined8 local_88;
  int local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_30 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_143a8b0e0(*param_5);
  local_48 = param_3;
  if (cVar1 == '\0') {
    FUN_143b36740(local_28,param_1,param_2,param_5);
    local_88 = FUN_143a8b510(local_28);
    local_68 = FUN_143accb70(local_28);
    cVar1 = FUN_143b39ec0(local_28);
    if (cVar1 != '\0') {
      uVar4 = FUN_143b381a0(param_1);
      iVar2 = FUN_143ab4670(local_68,uVar4);
      if (iVar2 != 0) {
        uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
        UE4Tuple_Private::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                  (local_78,uVar4);
        local_70 = (longlong *)FUN_143a8b510(local_78);
        (**(code **)(*local_70 + 0xf0))(local_70,local_68,param_5);
        local_60 = (longlong *)FUN_143a8b510(local_78);
        local_98 = param_5;
        local_58 = (**(code **)(*local_60 + 0x28))(local_60,local_88,param_3,param_4);
        FUN_143b36bb0(local_78);
        FUN_143b1b790(local_28);
        return local_58;
      }
    }
    cVar1 = FUN_143b69680(local_88);
    if ((cVar1 == '\0') ||
       (lVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetBoundProgramCounterForTimerManager(local_88), lVar5 == 0)) {
      local_80 = FUN_143b695b0(local_88);
      if (local_80 == 1) {
        uVar3 = FUN_143b381e0(local_88);
        (**(code **)(*param_1 + 0x90))(param_1,uVar3,param_3,param_4);
      }
      else if (local_80 == 2) {
        uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_88);
        local_40 = *param_1;
        (**(code **)(local_40 + 0x78))(param_1,uVar3,param_3,param_4);
      }
      else if (local_80 == 5) {
        uVar4 = FUN_143ac0690(local_88);
        local_50 = *param_1;
        (**(code **)(local_50 + 0x60))(param_1,uVar4,param_3,param_4);
      }
      else {
        *param_5 = 3;
      }
    }
    else {
      uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetBoundProgramCounterForTimerManager(local_88);
      local_38 = *param_1;
      local_98 = param_5;
      (**(code **)(local_38 + 0x38))(param_1,uVar4,param_3,param_4);
    }
    FUN_143b1b790(local_28);
  }
  return local_48;
}



// FUNCTION 143b37ad0 FUN_143b37ad0 body=864 status=ok
// SIG undefined FUN_143b37ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b37ad0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined8 local_88;
  int local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_30 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_143a8b0e0(*param_5);
  local_48 = param_3;
  if (cVar1 == '\0') {
    FUN_143b36740(local_28,param_1,param_2,param_5);
    local_88 = FUN_143a8b510(local_28);
    local_68 = FUN_143accb70(local_28);
    cVar1 = FUN_143b39ec0(local_28);
    if (cVar1 != '\0') {
      uVar4 = FUN_143b381a0(param_1);
      iVar2 = FUN_143ab4670(local_68,uVar4);
      if (iVar2 != 0) {
        uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
        UE4Tuple_Private::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
        TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                  (local_78,uVar4);
        local_70 = (longlong *)FUN_143a8b510(local_78);
        (**(code **)(*local_70 + 0xf0))(local_70,local_68,param_5);
        local_60 = (longlong *)FUN_143a8b510(local_78);
        local_98 = param_5;
        local_58 = (**(code **)(*local_60 + 0x20))(local_60,local_88,param_3,param_4);
        FUN_143b36bb0(local_78);
        FUN_143b1b790(local_28);
        return local_58;
      }
    }
    cVar1 = FUN_143b69680(local_88);
    if ((cVar1 == '\0') ||
       (lVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetBoundProgramCounterForTimerManager(local_88), lVar5 == 0)) {
      local_80 = FUN_143b695b0(local_88);
      if (local_80 == 1) {
        uVar3 = FUN_143b381e0(local_88);
        local_98 = param_5;
        (**(code **)(*param_1 + 0x80))(param_1,uVar3,param_3,param_4);
      }
      else if (local_80 == 2) {
        uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_88);
        local_40 = *param_1;
        local_98 = param_5;
        (**(code **)(local_40 + 0x68))(param_1,uVar3,param_3,param_4);
      }
      else if (local_80 == 5) {
        uVar4 = FUN_143ac0690(local_88);
        local_50 = *param_1;
        local_98 = param_5;
        (**(code **)(local_50 + 0x50))(param_1,uVar4,param_3,param_4);
      }
      else {
        *param_5 = 3;
      }
    }
    else {
      uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetBoundProgramCounterForTimerManager(local_88);
      local_38 = *param_1;
      local_98 = param_5;
      (**(code **)(local_38 + 0x40))(param_1,uVar4,param_3,param_4);
    }
    FUN_143b1b790(local_28);
  }
  return local_48;
}



// FUNCTION 143b37e30 FUN_143b37e30 body=199 status=ok
// SIG undefined FUN_143b37e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b37e30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_100;
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_100 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_143b686d0(local_f8);
  FUN_143b69720(local_f8,param_2,param_5);
  local_118 = param_5;
  (**(code **)(*param_1 + 0x20))(param_1,local_f8,param_3,param_4);
  local_108 = param_3;
  Concurrency::
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
  ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            (local_f8);
  return local_108;
}



// FUNCTION 143b37f00 FUN_143b37f00 body=84 status=ok
// SIG undefined FUN_143b37f00(void)

undefined8
FUN_143b37f00(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    param_3 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3,param_4);
  }
  return param_3;
}



// FUNCTION 143b37f60 FUN_143b37f60 body=63 status=ok
// SIG undefined FUN_143b37f60(void)

undefined8
FUN_143b37f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    *param_5 = 0x10;
  }
  return param_3;
}



// FUNCTION 143b37fa0 FUN_143b37fa0 body=91 status=ok
// SIG undefined FUN_143b37fa0(void)

undefined8
FUN_143b37fa0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    param_3 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4);
  }
  return param_3;
}



// FUNCTION 143b38000 FUN_143b38000 body=65 status=ok
// SIG undefined FUN_143b38000(void)

undefined8
FUN_143b38000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    *param_5 = 0x10;
  }
  return param_3;
}



// FUNCTION 143b38050 FUN_143b38050 body=59 status=ok
// SIG undefined FUN_143b38050(void)

void FUN_143b38050(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143b38090 FUN_143b38090 body=86 status=ok
// SIG undefined FUN_143b38090(void)

undefined8
FUN_143b38090(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    param_3 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,param_4);
  }
  return param_3;
}



// FUNCTION 143b380f0 FUN_143b380f0 body=64 status=ok
// SIG undefined FUN_143b380f0(void)

undefined8
FUN_143b380f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    *param_5 = 0x10;
  }
  return param_3;
}



// FUNCTION 143b38130 FUN_143b38130 body=79 status=ok
// SIG undefined FUN_143b38130(void)

undefined4 FUN_143b38130(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x168);
    }
    else {
      *param_3 = 1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b38180 FUN_143b38180 body=24 status=ok
// SIG undefined FUN_143b38180(void)

void FUN_143b38180(undefined8 param_1)

{
  FUN_143b38410(param_1);
  return;
}



// FUNCTION 143b381a0 FUN_143b381a0 body=17 status=ok
// SIG undefined FUN_143b381a0(void)

longlong FUN_143b381a0(longlong param_1)

{
  return param_1 + 0x15e;
}



// FUNCTION 143b381c0 GetParentPrimalUI body=18 status=ok
// SIG undefined GetParentPrimalUI(void)

undefined8 UInventoryPanelWidget::GetParentPrimalUI(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x720);
}



// FUNCTION 143b381e0 FUN_143b381e0 body=16 status=ok
// SIG undefined FUN_143b381e0(void)

undefined8 FUN_143b381e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 143b381f0 FUN_143b381f0 body=163 status=ok
// SIG undefined FUN_143b381f0(void)

void FUN_143b381f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  short *psVar1;
  undefined8 local_18;
  
  psVar1 = (short *)FUN_143b381a0(param_1);
  if (*psVar1 == 0) {
    local_18 = FUN_143b69c80(param_1,1,param_3);
    if (local_18 == 0) {
      local_18 = FUN_143a96a30();
    }
    FUN_143b6e350(local_18,param_2,4,param_3);
  }
  else {
    FUN_143ab47f0(param_2,psVar1,3);
    *(undefined2 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 143b382a0 FUN_143b382a0 body=32 status=ok
// SIG undefined FUN_143b382a0(void)

void FUN_143b382a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b38180(param_1);
  FUN_143b382c0(uVar1);
  return;
}



// FUNCTION 143b382c0 FUN_143b382c0 body=15 status=ok
// SIG undefined FUN_143b382c0(void)

longlong FUN_143b382c0(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 143b382d0 FUN_143b382d0 body=17 status=ok
// SIG undefined FUN_143b382d0(void)

undefined4 FUN_143b382d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x154);
}



// FUNCTION 143b382f0 FUN_143b382f0 body=17 status=ok
// SIG undefined FUN_143b382f0(void)

undefined4 FUN_143b382f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14c);
}



// FUNCTION 143b38310 FUN_143b38310 body=17 status=ok
// SIG undefined FUN_143b38310(void)

undefined4 FUN_143b38310(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x158);
}



// FUNCTION 143b38330 FUN_143b38330 body=17 status=ok
// SIG undefined FUN_143b38330(void)

undefined4 FUN_143b38330(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x150);
}



// FUNCTION 143b38350 `dynamic_atexit_destructor_for_'Singleton'' body=35 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

undefined8
`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  FUN_143a9aa60(&DAT_146bc7e88,FUN_143b38560);
  return DAT_146bc7e80;
}



// FUNCTION 143b38380 FUN_143b38380 body=134 status=ok
// SIG undefined FUN_143b38380(void)

void FUN_143b38380(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143aa29a0(&DAT_146bc7e38,FUN_143b39760,param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143a8ab50(local_18,&DAT_146bc7e08);
    FUN_143b366a0(DAT_146bc7e00,param_1,param_2,param_3);
    FUN_143a8ad90(local_18);
  }
  return;
}



// FUNCTION 143b38410 FUN_143b38410 body=18 status=ok
// SIG undefined FUN_143b38410(void)

undefined8 FUN_143b38410(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// FUNCTION 143b38430 FUN_143b38430 body=48 status=ok
// SIG undefined FUN_143b38430(void)

void FUN_143b38430(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143b386a0(param_2,param_3,param_5);
  return;
}



// FUNCTION 143b38460 FUN_143b38460 body=185 status=ok
// SIG undefined FUN_143b38460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b38460(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1b8 = param_2;
  local_1b0 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_143a8aad0(local_198);
  (**(code **)(*local_1b8 + 0x58))(local_1b8,local_198);
  local_1a8 = FUN_143b386a0(local_198,local_1b0,param_4);
  FUN_143a8acf0(local_198);
  return local_1a8;
}



// FUNCTION 143b38520 FUN_143b38520 body=55 status=ok
// SIG undefined FUN_143b38520(void)

undefined1 FUN_143b38520(void)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_143aa0050(&DAT_146bc7e88);
  if ((cVar1 == '\0') &&
     (lVar2 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
              _dynamic_atexit_destructor_for__Singleton__(), lVar2 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b38560 FUN_143b38560 body=106 status=ok
// SIG undefined FUN_143b38560(void)

void FUN_143b38560(void)

{
  longlong lVar1;
  undefined8 local_20;
  
  FUN_143b68380(0x12,FUN_143b39ed0);
  lVar1 = FUN_143a8d310(0x200);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b368b0(lVar1);
  }
  DAT_146bc7e80 = local_20;
  return;
}



// FUNCTION 143b385d0 FUN_143b385d0 body=83 status=ok
// SIG undefined FUN_143b385d0(void)

void FUN_143b385d0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b38520();
  if (cVar1 == '\0') {
    FUN_143b386a0(param_1,param_2,param_3);
  }
  else {
    FUN_143acf580(DAT_146bc7e80,param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 143b38630 FUN_143b38630 body=18 status=ok
// SIG undefined FUN_143b38630(void)

undefined1 FUN_143b38630(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x148);
}



// FUNCTION 143b38650 FUN_143b38650 body=18 status=ok
// SIG undefined FUN_143b38650(void)

undefined1 FUN_143b38650(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x15d);
}



// FUNCTION 143b38670 FUN_143b38670 body=46 status=ok
// SIG undefined FUN_143b38670(void)

bool FUN_143b38670(int param_1)

{
  return *(longlong *)(&DAT_145d0c9f0 + (longlong)param_1 * 8) != 0;
}



// FUNCTION 143b386a0 FUN_143b386a0 body=45 status=ok
// SIG undefined FUN_143b386a0(void)

void FUN_143b386a0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_143b386d0(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 143b386d0 FUN_143b386d0 body=4109 status=ok
// SIG undefined FUN_143b386d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143b386d0(undefined8 param_1,int param_2,char param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *_Str2;
  undefined1 auStack_6f8 [32];
  int *local_6d8;
  undefined1 local_6c8;
  wchar_t *local_6c0;
  undefined1 local_6b8 [8];
  undefined1 local_6b0 [8];
  longlong *local_6a8;
  CHeapPtrBase<wchar_t,ATL::CComAllocator> local_6a0 [8];
  int local_698;
  int local_694;
  int local_690;
  undefined4 local_68c;
  undefined4 local_688;
  longlong *local_680;
  undefined4 local_678;
  longlong *local_670;
  longlong *local_668;
  undefined8 local_660;
  longlong local_658;
  int local_650;
  undefined8 *local_648;
  longlong *local_640;
  longlong *local_638;
  longlong local_630;
  undefined8 local_628;
  longlong *local_620;
  longlong local_618;
  undefined8 local_610;
  longlong *local_608;
  undefined8 local_600;
  longlong local_5f8;
  longlong local_5f0;
  longlong *local_5e8;
  longlong local_5e0;
  undefined8 *local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  longlong *local_5b8;
  undefined8 local_5b0;
  undefined8 *local_5a8;
  longlong *local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  longlong *local_588;
  undefined8 local_580;
  undefined8 local_578;
  longlong *local_570;
  longlong *local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  longlong *local_548;
  undefined8 local_540;
  longlong *local_538;
  longlong *local_530;
  longlong *local_528;
  undefined8 local_520;
  undefined8 local_518;
  longlong *local_510;
  undefined8 local_508;
  longlong *local_500;
  undefined8 local_4f8;
  undefined1 local_4f0 [8];
  longlong *local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined1 local_4c8 [40];
  undefined1 local_4a0 [40];
  undefined1 local_478 [40];
  undefined1 local_450 [40];
  undefined1 local_428 [48];
  undefined1 local_3f8 [64];
  undefined1 local_3b8 [40];
  undefined1 local_390 [40];
  undefined1 local_368 [40];
  undefined1 local_340 [40];
  undefined1 local_318 [384];
  undefined1 local_198 [384];
  char local_18 [8];
  ulonglong local_10;
  
  local_4d0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_6f8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    return (longlong *)0x0;
  }
  if ((param_2 < 0) || (0xc < param_2)) {
    *param_4 = 1;
    return (longlong *)0x0;
  }
  cVar1 = FUN_143b38670(param_2);
  if (cVar1 == '\0') {
    *param_4 = 0x10;
    return (longlong *)0x0;
  }
  if (param_3 == '\0') {
    local_6d8 = param_4;
    local_650 = FUN_143a8b730(param_1,"compat",local_18,8);
    cVar1 = FUN_143a8b110(*param_4);
    if (((cVar1 != '\0') && (0 < local_650)) &&
       (iVar2 = _guard_xfg_dispatch_icall_nop(local_18,"host"), iVar2 == 0)) {
      local_640 = (longlong *)0x0;
      local_6c8 = 1;
      local_694 = param_2;
      if (param_2 == 1) {
        local_6c8 = 0;
      }
      else if ((param_2 != 2) && ((param_2 < 10 || (0xc < param_2)))) goto LAB_143b3893a;
      local_5e0 = FUN_143a8d310(0x308);
      if (local_5e0 == 0) {
        local_620 = (longlong *)0x0;
      }
      else {
        local_620 = (longlong *)FUN_143b73e80(local_5e0,param_1,local_6c8,param_4);
      }
      local_5c0 = local_620;
      local_640 = local_620;
      cVar1 = FUN_143a8b110(*param_4);
      if (cVar1 != '\0') {
        return local_640;
      }
      local_510 = local_640;
      local_668 = local_640;
      if (local_640 == (longlong *)0x0) {
        local_5b0 = 0;
      }
      else {
        local_5b0 = (**(code **)*local_640)(local_640,1);
      }
    }
  }
LAB_143b3893a:
  FUN_143a9aa60(&DAT_146bc7e78,FUN_143b396e0);
  UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
  TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_6b0,0);
  local_6a8 = (longlong *)0x0;
  if (DAT_146bc7e40 == 0) {
    uVar4 = FUN_143b6f670(param_1,param_4);
    FUN_143b37190(local_6b0,uVar4);
    local_6a8 = (longlong *)FUN_143a8b510(local_6b0);
  }
  else {
    local_678 = FUN_143a8c250(param_1);
    FUN_143a8ab50(local_4f0,&DAT_146bc7e48);
    local_6a8 = (longlong *)FUN_143ab3400(DAT_146bc7e40,local_678);
    if (local_6a8 == (longlong *)0x0) {
      local_6a8 = (longlong *)FUN_143b6f670(param_1,param_4);
      FUN_143ab34d0(DAT_146bc7e40,local_678,local_6a8,param_4);
    }
    FUN_143a8ad90(local_4f0);
  }
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((param_3 == '\0') || (cVar1 = FUN_143b6fde0(local_6a8), cVar1 == '\0')) {
      UE4Tuple_Private::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_6b8,0);
      FUN_143a8ac30(local_4c8);
      uVar4 = FUN_143a8c200(param_1);
      uVar4 = FUN_143aa5b10(0,uVar4,param_4);
      UE4Tuple_Private::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_6a0,uVar4)
      ;
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 == '\0') {
        local_5f0 = FUN_143a8d310(0x818);
        if (local_5f0 == 0) {
          local_600 = 0;
        }
        else {
          local_600 = FUN_143b6a160(local_5f0,param_1,param_4);
        }
        local_580 = local_600;
        FUN_143b37190(local_6b8,local_600);
        cVar1 = FUN_143b1fd90(local_6b8);
        if (cVar1 != '\0') {
          *param_4 = 7;
          local_528 = (longlong *)0x0;
          FUN_143b36c80(local_6a0);
          FUN_143a8dc60(local_4c8);
          FUN_143b36bb0(local_6b8);
          FUN_143b36bb0(local_6b0);
          return local_528;
        }
        local_6c0 = (wchar_t *)FUN_143b20430(local_6a0);
        local_660 = FUN_143aa3350(local_6c0,PTR_s_NumberElements_1468328a0,0,param_4);
        uVar4 = FUN_143b6fdc0(local_6a8);
        local_6c0 = (wchar_t *)FUN_143aa3350(local_660,uVar4,local_6c0,param_4);
        local_6c0 = (wchar_t *)FUN_143aa3350(local_6c0,PTR_s_patterns_1468328b0,local_6c0,param_4);
        ATL::CHeapPtrBase<wchar_t,ATL::CComAllocator>::Attach(local_6a0,local_6c0);
        local_68c = 0;
        local_628 = FUN_143aa4fe0(local_6c0,*(undefined8 *)(&DAT_1468328c0 + (longlong)param_2 * 8),
                                  &local_68c,param_4);
        if (*param_4 == 2) {
          _Str2 = (char *)FUN_143b6fdc0(local_6a8);
          iVar2 = _guard_xfg_dispatch_icall_nop(PTR_DAT_1468328a8,_Str2);
          if (iVar2 != 0) {
            *param_4 = 0;
            local_6c0 = (wchar_t *)FUN_143aa3350(local_660,PTR_DAT_1468328a8,local_6c0,param_4);
            local_6c0 = (wchar_t *)
                        FUN_143aa3350(local_6c0,PTR_s_patterns_1468328b0,local_6c0,param_4);
            local_628 = FUN_143aa4fe0(local_6c0,
                                      *(undefined8 *)(&DAT_1468328c0 + (longlong)param_2 * 8),
                                      &local_68c,param_4);
          }
        }
        FUN_143aa2ef0(local_660);
        FUN_143a90d80(local_4c8,1,local_628,local_68c);
      }
      else {
        *param_4 = -0x80;
        local_630 = FUN_143a8d310(0x818);
        if (local_630 == 0) {
          local_610 = 0;
        }
        else {
          local_610 = FUN_143b69f20(local_630,param_4);
        }
        local_590 = local_610;
        FUN_143b37190(local_6b8,local_610);
        cVar1 = FUN_143b1fd90(local_6b8);
        if (cVar1 != '\0') {
          *param_4 = 7;
          local_500 = (longlong *)0x0;
          FUN_143b36c80(local_6a0);
          FUN_143a8dc60(local_4c8);
          FUN_143b36bb0(local_6b8);
          FUN_143b36bb0(local_6b0);
          return local_500;
        }
        FUN_143a90d80(local_4c8,1,*(undefined8 *)(&DAT_145d0c9f0 + (longlong)param_2 * 8),0xffffffff
                     );
      }
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 == '\0') {
        if (((param_2 == 2) || (param_2 == 10)) || (param_2 == 0xc)) {
          uVar4 = FUN_143a8b510(local_6b8);
          local_658 = UInventoryPanelWidget::GetParentPrimalUI(uVar4);
          if (local_658 != 0) {
            uVar3 = FreeLib(local_658);
            FUN_143ab21b0(local_4c8,local_658,uVar3);
          }
        }
        cVar1 = FUN_143b6fde0(local_6a8);
        if (cVar1 == '\0') {
          if (param_2 == 10) {
            local_4e0 = FUN_143a8d4f0(local_390,1,&DAT_145d0c9e0,2);
            local_4d8 = local_4e0;
            local_5c8 = FUN_143a8d4f0(local_340,1,&DAT_145d0c95c,1);
            local_520 = local_5c8;
            FUN_143b37590(local_4c8,local_5c8,local_4e0);
            FUN_143a8dc60(local_340);
            FUN_143a8dc60(local_390);
          }
          local_5d8 = (undefined8 *)FUN_143b20430(local_6b8);
          local_5f8 = FUN_143a8d310(0x300);
          if (local_5f8 == 0) {
            local_5e8 = (longlong *)0x0;
          }
          else {
            local_6d8 = param_4;
            local_5e8 = (longlong *)FUN_143b3a6d0(local_5f8,local_4c8,local_5d8,param_2);
          }
          local_5b8 = local_5e8;
          local_680 = local_5e8;
          if (local_5e8 == (longlong *)0x0) {
            local_5a8 = local_5d8;
            local_648 = local_5d8;
            if (local_5d8 == (undefined8 *)0x0) {
              local_598 = 0;
            }
            else {
              local_598 = (**(code **)*local_5d8)(local_5d8,1);
            }
            *param_4 = 7;
            local_588 = (longlong *)0x0;
            FUN_143b36c80(local_6a0);
            FUN_143a8dc60(local_4c8);
            FUN_143b36bb0(local_6b8);
            FUN_143b36bb0(local_6b0);
            return local_588;
          }
        }
        else {
          FUN_143a8ac30(local_4a0);
          FUN_143a8ac30(local_450);
          FUN_143a8ac30(local_478);
          FUN_143a8aad0(local_318);
          local_688 = 3;
          local_560 = (**(code **)(*local_6a8 + 0x10))(local_6a8,local_3b8);
          local_518 = local_560;
          FUN_143a8dcd0(local_4a0,local_560);
          FUN_143a8dc60(local_3b8);
          local_698 = FUN_143acddd0(local_4a0,0x2f);
          local_690 = FUN_143b0c690(local_4a0,0x2f);
          if (local_698 < local_690) {
            FUN_143aa03f0(local_3f8);
            local_550 = FUN_143a90ff0(local_4a0,local_368,0,local_698);
            local_508 = local_550;
            FUN_143ad0270(local_3f8,local_550,param_4);
            FUN_143a8dc60(local_368);
            FUN_143a90d20(local_450,local_4a0,local_698 + 1,(local_690 - local_698) + -1);
            FUN_143a90ca0(local_478,local_4a0,local_690 + 1);
            uVar4 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_3f8);
            local_540 = FUN_143a8b2a0(local_198,uVar4);
            local_4f8 = local_540;
            FUN_143a8adb0(local_318,local_540);
            FUN_143a8acf0(local_198);
            FUN_143a8d4f0(local_428,1,L"SpelloutRules",0xffffffff);
            cVar1 = FUN_143b0fd00(local_450,local_428);
            if (cVar1 == '\0') {
              local_688 = 0;
            }
            FUN_143a8dc60(local_428);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_3f8);
          }
          else {
            FUN_143a8adb0(local_318,param_1);
            FUN_143a8dcd0(local_478,local_4a0);
          }
          local_618 = FUN_143a8d310(0x368);
          if (local_618 == 0) {
            local_608 = (longlong *)0x0;
          }
          else {
            local_608 = (longlong *)FUN_143b700f0(local_618,local_688,local_318,param_4);
          }
          local_4e8 = local_608;
          local_670 = local_608;
          if (local_608 == (longlong *)0x0) {
            *param_4 = 7;
            local_530 = (longlong *)0x0;
            FUN_143a8acf0(local_318);
            FUN_143a8dc60(local_478);
            FUN_143a8dc60(local_450);
            FUN_143a8dc60(local_4a0);
            FUN_143b36c80(local_6a0);
            FUN_143a8dc60(local_4c8);
            FUN_143b36bb0(local_6b8);
            FUN_143b36bb0(local_6b0);
            return local_530;
          }
          (**(code **)(*local_608 + 0x160))(local_608,local_478,param_4);
          local_680 = local_670;
          FUN_143a8acf0(local_318);
          FUN_143a8dc60(local_478);
          FUN_143a8dc60(local_450);
          FUN_143a8dc60(local_4a0);
        }
        uVar4 = FUN_143a8b510(local_6a0);
        local_578 = FUN_143aa4780(uVar4,0,param_4);
        uVar4 = FUN_143a8b510(local_6a0);
        uVar4 = FUN_143aa4780(uVar4,1,param_4);
        FUN_143b69ce0(local_680,uVar4,local_578);
        cVar1 = FUN_143a8b0e0(*param_4);
        if (cVar1 == '\0') {
          local_538 = local_680;
          FUN_143b36c80(local_6a0);
          FUN_143a8dc60(local_4c8);
          FUN_143b36bb0(local_6b8);
          FUN_143b36bb0(local_6b0);
          local_5a0 = local_538;
        }
        else {
          local_568 = local_680;
          local_638 = local_680;
          if (local_680 == (longlong *)0x0) {
            local_558 = 0;
          }
          else {
            local_558 = (**(code **)*local_680)(local_680,1);
          }
          local_548 = (longlong *)0x0;
          FUN_143b36c80(local_6a0);
          FUN_143a8dc60(local_4c8);
          FUN_143b36bb0(local_6b8);
          FUN_143b36bb0(local_6b0);
          local_5a0 = local_548;
        }
      }
      else {
        local_570 = (longlong *)0x0;
        FUN_143b36c80(local_6a0);
        FUN_143a8dc60(local_4c8);
        FUN_143b36bb0(local_6b8);
        FUN_143b36bb0(local_6b0);
        local_5a0 = local_570;
      }
    }
    else {
      *param_4 = 0x10;
      local_5d0 = (longlong *)0x0;
      FUN_143b36bb0(local_6b0);
      local_5a0 = local_5d0;
    }
  }
  else {
    local_5a0 = (longlong *)0x0;
    FUN_143b36bb0(local_6b0);
  }
  return local_5a0;
}



// FUNCTION 143b396e0 FUN_143b396e0 body=116 status=ok
// SIG undefined FUN_143b396e0(void)

void FUN_143b396e0(void)

{
  char cVar1;
  undefined4 local_18 [6];
  
  FUN_143b68380(0x12,FUN_143b39ed0);
  local_18[0] = 0;
  DAT_146bc7e40 = (ios_base *)FUN_143ab3680(FUN_143ab33a0,FUN_143ab3020,0,local_18);
  cVar1 = FUN_143a8b0e0(local_18[0]);
  if (cVar1 == '\0') {
    std::ios_base::width(DAT_146bc7e40,0x143a8d180);
  }
  else {
    DAT_146bc7e40 = (ios_base *)0x0;
  }
  return;
}



// FUNCTION 143b39760 FUN_143b39760 body=224 status=ok
// SIG undefined FUN_143b39760(void)

void FUN_143b39760(undefined4 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *local_38;
  
  FUN_143b68380(0x12,FUN_143b39ed0);
  lVar2 = FUN_143a8d310(0x30);
  if (lVar2 == 0) {
    local_38 = (undefined8 *)0x0;
  }
  else {
    local_38 = (undefined8 *)FUN_143b36b50(lVar2,100,FUN_143b37410,param_1);
  }
  DAT_146bc7e00 = local_38;
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 != '\0') {
    if (DAT_146bc7e00 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc7e00)(DAT_146bc7e00,1);
    }
    DAT_146bc7e00 = (undefined8 *)0x0;
  }
  return;
}



// FUNCTION 143b39840 FUN_143b39840 body=141 status=ok
// SIG undefined FUN_143b39840(void)

void FUN_143b39840(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_20 [32];
  
  uVar3 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143b16ce0(local_20,0);
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3,local_20,uVar3);
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_20);
    if (iVar2 == 0) {
      *param_4 = 3;
    }
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_20);
  }
  return;
}



// FUNCTION 143b398d0 FUN_143b398d0 body=441 status=ok
// SIG undefined FUN_143b398d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b398d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  int local_134;
  undefined1 local_130 [8];
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_100 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_143b686d0(local_f8);
  local_134 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_3);
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,local_f8,param_3);
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_3);
  if (iVar2 != local_134) {
    local_138 = 0;
    (**(code **)(*param_1 + 0x108))(param_1,local_18,&local_138);
    cVar1 = FUN_143a8b110(local_138);
    if (cVar1 != '\0') {
      local_120 = FUN_143a8d310(0xe8);
      if (local_120 == 0) {
        local_128 = 0;
      }
      else {
        local_128 = FUN_143b69d80(local_120,local_f8,local_18,&local_138);
      }
      local_118 = local_128;
      UE4Tuple_Private::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                (local_130,local_128);
      cVar1 = FUN_143a8b0e0(local_138);
      if (cVar1 == '\0') {
        local_110 = FUN_143b20430(local_130);
        FUN_143b36bb0(local_130);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_110;
      }
      FUN_143b0fce0(param_3,local_134);
      FUN_143b36bb0(local_130);
    }
  }
  local_108 = 0;
  Concurrency::
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
  ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            (local_f8);
  return local_108;
}



// FUNCTION 143b39a90 FUN_143b39a90 body=63 status=ok
// SIG undefined FUN_143b39a90(void)

void FUN_143b39a90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143b39ad0 FUN_143b39ad0 body=219 status=ok
// SIG undefined FUN_143b39ad0(void)

void * FUN_143b39ad0(undefined8 *param_1,int param_2,int param_3)

{
  void *_Dst;
  int local_res18;
  
  if (param_2 < 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_143aa7a40((longlong)param_2 + 0xc);
    if (_Dst != (void *)0x0) {
      if (param_3 < 0) {
        local_res18 = 0;
      }
      else {
        local_res18 = param_3;
        if (0 < param_3) {
          if (*(int *)(param_1 + 1) < param_3) {
            local_res18 = *(int *)(param_1 + 1);
          }
          if (param_2 < local_res18) {
            local_res18 = param_2;
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(longlong)local_res18 + 0xc);
      FUN_143a8ce70(param_1);
      *param_1 = _Dst;
      *(int *)(param_1 + 1) = param_2;
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
  }
  return _Dst;
}



// FUNCTION 143b39bb0 FUN_143b39bb0 body=84 status=ok
// SIG undefined FUN_143b39bb0(void)

void FUN_143b39bb0(longlong param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 >> 8 == 1) {
      *(uint *)(param_1 + 0x168) = param_2;
    }
    else {
      *param_3 = 1;
    }
  }
  return;
}



// FUNCTION 143b39c10 FUN_143b39c10 body=133 status=ok
// SIG undefined FUN_143b39c10(void)

void FUN_143b39c10(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0();
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      *(undefined2 *)(param_1 + 0x15e) = 0;
    }
    else {
      FUN_143ab47f0(param_1 + 0x15e,param_2,3);
      *(undefined2 *)(param_1 + 0x164) = 0;
    }
  }
  return;
}



// FUNCTION 143b39ca0 FUN_143b39ca0 body=26 status=ok
// SIG undefined FUN_143b39ca0(void)

void FUN_143b39ca0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 143b39cc0 FUN_143b39cc0 body=26 status=ok
// SIG undefined FUN_143b39cc0(void)

void FUN_143b39cc0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x15d) = param_2;
  return;
}



// FUNCTION 143b39ce0 FUN_143b39ce0 body=98 status=ok
// SIG undefined FUN_143b39ce0(void)

void FUN_143b39ce0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143ac1240(param_2,2000000000);
  uVar1 = FUN_143ac1210(0,uVar1);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  if (*(int *)(param_1 + 0x154) < *(int *)(param_1 + 0x158)) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x154);
  }
  return;
}



// FUNCTION 143b39d50 FUN_143b39d50 body=98 status=ok
// SIG undefined FUN_143b39d50(void)

void FUN_143b39d50(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143ac1240(param_2,2000000000);
  uVar1 = FUN_143ac1210(0,uVar1);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  if (*(int *)(param_1 + 0x14c) < *(int *)(param_1 + 0x150)) {
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x14c);
  }
  return;
}



// FUNCTION 143b39dc0 FUN_143b39dc0 body=98 status=ok
// SIG undefined FUN_143b39dc0(void)

void FUN_143b39dc0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143ac1240(param_2,0x7f);
  uVar1 = FUN_143ac1210(0,uVar1);
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  if (*(int *)(param_1 + 0x154) < *(int *)(param_1 + 0x158)) {
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x158);
  }
  return;
}



// FUNCTION 143b39e30 FUN_143b39e30 body=98 status=ok
// SIG undefined FUN_143b39e30(void)

void FUN_143b39e30(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143ac1240(param_2,0x7f);
  uVar1 = FUN_143ac1210(0,uVar1);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  if (*(int *)(param_1 + 0x14c) < *(int *)(param_1 + 0x150)) {
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x150);
  }
  return;
}



// FUNCTION 143b39ea0 FUN_143b39ea0 body=26 status=ok
// SIG undefined FUN_143b39ea0(void)

void FUN_143b39ea0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x15c) = param_2;
  return;
}



// FUNCTION 143b39ec0 FUN_143b39ec0 body=15 status=ok
// SIG undefined FUN_143b39ec0(void)

undefined1 FUN_143b39ec0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// FUNCTION 143b39ed0 FUN_143b39ed0 body=254 status=ok
// SIG undefined FUN_143b39ed0(void)

undefined8 FUN_143b39ed0(void)

{
  FUN_143a9a9f0(&DAT_146bc7e88);
  if (DAT_146bc7e80 != (undefined8 *)0x0) {
    if (DAT_146bc7e80 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc7e80)(DAT_146bc7e80,1);
    }
    DAT_146bc7e80 = (undefined8 *)0x0;
  }
  FUN_143a9a9f0(&DAT_146bc7e78);
  if (DAT_146bc7e40 != 0) {
    FUN_143ab2e80(DAT_146bc7e40);
    DAT_146bc7e40 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc7e38);
  if (DAT_146bc7e00 != (undefined8 *)0x0) {
    if (DAT_146bc7e00 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc7e00)(DAT_146bc7e00,1);
    }
    DAT_146bc7e00 = (undefined8 *)0x0;
  }
  return 1;
}



// FUNCTION 143b39fd0 FUN_143b39fd0 body=132 status=ok
// SIG undefined FUN_143b39fd0(void)

void FUN_143b39fd0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 == (longlong *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 143b3a060 FUN_143b3a060 body=126 status=ok
// SIG undefined FUN_143b3a060(void)

void FUN_143b3a060(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = CreateInternalContext(param_2);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 143b3a0e0 FUN_143b3a0e0 body=225 status=ok
// SIG undefined FUN_143b3a0e0(void)

void FUN_143b3a0e0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong local_38;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_1 = 0;
  }
  else if (*param_1 == 0) {
    lVar2 = FUN_143a8d310(0x818);
    if (lVar2 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143b6a050(lVar2,param_2);
    }
    *param_1 = local_38;
  }
  else {
    FUN_143b6a370(*param_1,param_2);
  }
  return;
}



// FUNCTION 143b3a1d0 FUN_143b3a1d0 body=225 status=ok
// SIG undefined FUN_143b3a1d0(void)

void FUN_143b3a1d0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong local_38;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_1 = 0;
  }
  else if (*param_1 == 0) {
    lVar2 = FUN_143a8d310(0x28);
    if (lVar2 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143a8d3a0(lVar2,param_2);
    }
    *param_1 = local_38;
  }
  else {
    FUN_143a8dcd0(*param_1,param_2);
  }
  return;
}



// FUNCTION 143b3a2c0 FUN_143b3a2c0 body=211 status=ok
// SIG undefined FUN_143b3a2c0(void)

longlong FUN_143b3a2c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined1 param_6)

{
  FUN_143a8ac30(param_1);
  FUN_143a8ac30(param_1 + 0x28);
  FUN_143a8ac30(param_1 + 0x50);
  FUN_143a8ac30(param_1 + 0x78);
  FUN_143a8dcd0(param_1,param_2);
  FUN_143a8dcd0(param_1 + 0x28,param_3);
  FUN_143a8dcd0(param_1 + 0x50,param_4);
  FUN_143a8dcd0(param_1 + 0x78,param_5);
  *(undefined1 *)(param_1 + 0xa0) = param_6;
  return param_1;
}



// FUNCTION 143b3a3a0 FUN_143b3a3a0 body=196 status=ok
// SIG undefined FUN_143b3a3a0(void)

longlong FUN_143b3a3a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  FUN_143a8ac30(param_1);
  FUN_143a8ac30(param_1 + 0x28);
  FUN_143a8ac30(param_1 + 0x50);
  FUN_143a8ac30(param_1 + 0x78);
  FUN_143a8dcd0(param_1,param_2);
  FUN_143a8dcd0(param_1 + 0x28,param_3);
  FUN_143a8dcd0(param_1 + 0x50,param_4);
  FUN_143a8dcd0(param_1 + 0x78,param_5);
  return param_1;
}



// FUNCTION 143b3a470 FUN_143b3a470 body=210 status=ok
// SIG undefined FUN_143b3a470(void)

undefined8 *
FUN_143b3a470(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b369c0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::DecimalFormat::vftable;
  FUN_143a8ac30(param_1 + 0x2f);
  FUN_143a8ac30(param_1 + 0x34);
  FUN_143a8ac30(param_1 + 0x39);
  FUN_143a8ac30(param_1 + 0x3e);
  FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(param_1 + 0x4e);
  FUN_143a8ac30(param_1 + 0x52);
  FUN_143b42a70(param_1);
  FUN_143b3ae80(param_1,param_2);
  return param_1;
}



// FUNCTION 143b3a550 FUN_143b3a550 body=381 status=ok
// SIG undefined FUN_143b3a550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143b3a550(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_143b36a10(param_1);
  *param_1 = icu_53::DecimalFormat::vftable;
  FUN_143a8ac30(param_1 + 0x2f);
  FUN_143a8ac30(param_1 + 0x34);
  FUN_143a8ac30(param_1 + 0x39);
  FUN_143a8ac30(param_1 + 0x3e);
  FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(param_1 + 0x4e);
  FUN_143a8ac30(param_1 + 0x52);
  FUN_143b42a70(param_1);
  local_88 = FUN_143a8d310(0x818);
  if (local_88 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_143b6a050(local_88,param_3);
  }
  local_78 = local_80;
  local_98 = local_80;
  FUN_143b3f400(param_1,param_4,local_68,param_2);
  return param_1;
}



// FUNCTION 143b3a6d0 FUN_143b3a6d0 body=338 status=ok
// SIG undefined FUN_143b3a6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143b3a6d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_78 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_143b36a10(param_1);
  *param_1 = icu_53::DecimalFormat::vftable;
  FUN_143a8ac30(param_1 + 0x2f);
  FUN_143a8ac30(param_1 + 0x34);
  FUN_143a8ac30(param_1 + 0x39);
  FUN_143a8ac30(param_1 + 0x3e);
  FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(param_1 + 0x4e);
  FUN_143a8ac30(param_1 + 0x52);
  FUN_143b42a70(param_1);
  *(undefined4 *)(param_1 + 0x57) = param_4;
  local_88 = param_3;
  FUN_143b3f400(param_1,param_5,local_68,param_2);
  return param_1;
}



// FUNCTION 143b3a830 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::FieldPositionHandler::vftable;
  return param_1;
}



// FUNCTION 143b3a850 FUN_143b3a850 body=143 status=ok
// SIG undefined FUN_143b3a850(void)

undefined8 * FUN_143b3a850(undefined8 *param_1,char param_2,undefined8 param_3)

{
  code *local_18;
  code *local_10;
  
  *param_1 = 0;
  if (param_2 == '\0') {
    local_18 = FUN_143a91380;
    local_10 = FUN_143a913e0;
  }
  else {
    local_18 = FUN_143aba2a0;
    local_10 = FUN_143aba320;
  }
  FUN_143acde10(param_1,local_10,local_18,0,param_3);
  return param_1;
}



// FUNCTION 143b3a8e0 FUN_143b3a8e0 body=78 status=ok
// SIG undefined FUN_143b3a8e0(void)

void FUN_143b3a8e0(longlong param_1)

{
  FUN_143a8dc60(param_1 + 0x78);
  FUN_143a8dc60(param_1 + 0x50);
  FUN_143a8dc60(param_1 + 0x28);
  FUN_143a8dc60(param_1);
  return;
}



// FUNCTION 143b3a930 FUN_143b3a930 body=1033 status=ok
// SIG undefined FUN_143b3a930(void)

void FUN_143b3a930(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::DecimalFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x43];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x44];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x45];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x46];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x47];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x48] != 0) {
    FUN_143b3bab0(param_1[0x48],1);
  }
  puVar1 = (undefined8 *)param_1[0x4b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x4f] != 0) {
    FUN_143b3bab0(param_1[0x4f],1);
  }
  FUN_143b403a0(param_1);
  FUN_143b402a0(param_1,param_1 + 0x59);
  FUN_143b402a0(param_1,param_1 + 0x5a);
  puVar1 = (undefined8 *)param_1[0x5b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 0x52);
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x270);
  FUN_143a8dc60(param_1 + 0x3e);
  FUN_143a8dc60(param_1 + 0x39);
  FUN_143a8dc60(param_1 + 0x34);
  FUN_143a8dc60(param_1 + 0x2f);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b3ad40 FUN_143b3ad40 body=107 status=ok
// SIG undefined FUN_143b3ad40(void)

void FUN_143b3ad40(longlong param_1)

{
  FUN_143a8dc60(param_1 + 0x148);
  FUN_143a8dc60(param_1 + 0x120);
  FUN_143a8dc60(param_1 + 0xf8);
  FUN_143a8dc60(param_1 + 0xd0);
  Audio::FAudioCaptureSynth::IsStreamOpen(param_1 + 0x48);
  return;
}



// FUNCTION 143b3adb0 FUN_143b3adb0 body=198 status=ok
// SIG undefined FUN_143b3adb0(void)

void FUN_143b3adb0(longlong param_1)

{
  FUN_143a8dc60(param_1 + 0x170);
  FUN_143a8dc60(param_1 + 0x148);
  FUN_143a8dc60(param_1 + 0x120);
  FUN_143a8dc60(param_1 + 0xf8);
  FUN_143a8dc60(param_1 + 0xd0);
  FUN_143a8dc60(param_1 + 0xa8);
  FUN_143a8dc60(param_1 + 0x80);
  FUN_143a8dc60(param_1 + 0x58);
  FUN_143a8dc60(param_1 + 0x30);
  FUN_143a8dc60(param_1 + 8);
  return;
}



// FUNCTION 143b3ae80 FUN_143b3ae80 body=1293 status=ok
// SIG undefined FUN_143b3ae80(void)

longlong * FUN_143b3ae80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 != param_2) {
    local_2c = 0;
    FUN_143b36d60(param_1,param_2);
    lVar1 = FUN_143b82ca0(&local_2c);
    param_1[0x5d] = lVar1;
    FUN_143a8dcd0(param_1 + 0x2f,param_2 + 0x2f);
    FUN_143a8dcd0(param_1 + 0x34,param_2 + 0x34);
    FUN_143a8dcd0(param_1 + 0x39,param_2 + 0x39);
    FUN_143a8dcd0(param_1 + 0x3e,param_2 + 0x3e);
    FUN_143b3a1d0(param_1 + 0x43,param_2[0x43]);
    FUN_143b3a1d0(param_1 + 0x44,param_2[0x44]);
    FUN_143b3a1d0(param_1 + 0x45,param_2[0x45]);
    FUN_143b3a1d0(param_1 + 0x46,param_2[0x46]);
    FUN_143b39fd0(param_1 + 0x47,param_2[0x47]);
    uVar2 = (**(code **)(*param_2 + 0x178))(param_2);
    (**(code **)(*param_1 + 0x180))(param_1,uVar2);
    *(int *)(param_1 + 0x50) = (int)param_2[0x50];
    uVar2 = FUN_143b42610(param_2);
    local_28 = *param_1;
    (**(code **)(local_28 + 0x170))(param_1,uVar2);
    *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)((longlong)param_2 + 0x24c);
    *(int *)(param_1 + 0x4a) = (int)param_2[0x4a];
    *(undefined1 *)((longlong)param_1 + 0x254) = *(undefined1 *)((longlong)param_2 + 0x254);
    FUN_143b3a0e0(param_1 + 0x4b,param_2[0x4b]);
    *(undefined1 *)((longlong)param_1 + 0x26c) = *(undefined1 *)((longlong)param_2 + 0x26c);
    *(undefined1 *)((longlong)param_1 + 0x26e) = *(undefined1 *)((longlong)param_2 + 0x26e);
    icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(param_1 + 0x4e,param_2 + 0x4e);
    *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)((longlong)param_2 + 700);
    *(undefined1 *)((longlong)param_1 + 0x26d) = *(undefined1 *)((longlong)param_2 + 0x26d);
    *(int *)(param_1 + 0x51) = (int)param_2[0x51];
    *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)((longlong)param_2 + 0x284);
    *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)((longlong)param_2 + 0x28c);
    *(undefined4 *)((longlong)param_1 + 0x264) = *(undefined4 *)((longlong)param_2 + 0x264);
    *(int *)(param_1 + 0x4d) = (int)param_2[0x4d];
    *(char *)(param_1 + 0x4c) = (char)param_2[0x4c];
    FUN_143a8dcd0(param_1 + 0x52,param_2 + 0x52);
    *(int *)(param_1 + 0x57) = (int)param_2[0x57];
    FUN_143b3a060(param_1 + 0x5b,param_2[0x5b]);
    FUN_143b403a0(param_1);
    if (param_2[0x58] != 0) {
      local_38 = 0;
      lVar1 = FUN_143b42d90(param_1,&local_38);
      param_1[0x58] = lVar1;
      FUN_143b3ff70(param_1,param_2[0x58],param_1[0x58],&local_38);
    }
    FUN_143b402a0(param_1,param_1 + 0x59);
    if (param_2[0x59] != 0) {
      local_34 = 0;
      lVar1 = FUN_143b42d90(param_1,&local_34);
      param_1[0x59] = lVar1;
      FUN_143b3fd90(param_1,param_2[0x59],param_1[0x59],&local_34);
    }
    FUN_143b402a0(param_1,param_1 + 0x5a);
    if (param_2[0x5a] != 0) {
      local_30 = 0;
      lVar1 = FUN_143b42d90(param_1,&local_30);
      param_1[0x5a] = lVar1;
      FUN_143b3fd90(param_1,param_2[0x5a],param_1[0x5a],&local_30);
    }
    local_18 = FUN_143b42ef0(param_1 + 0x5e);
    local_20 = FUN_143b42ef0(param_2 + 0x5e);
    FUN_143b3b390(local_18,local_20);
  }
  return param_1;
}



// FUNCTION 143b3b390 FUN_143b3b390 body=48 status=ok
// SIG undefined FUN_143b3b390(void)

undefined1 * FUN_143b3b390(undefined1 *param_1,undefined1 *param_2)

{
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 143b3b3c0 FUN_143b3b3c0 body=1602 status=ok
// SIG undefined FUN_143b3b3c0(void)

undefined1 FUN_143b3b3c0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_28;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else {
    cVar1 = FUN_143b36e70(param_1,param_2);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 700) == 3) {
        cVar1 = FUN_143b40580(*(undefined8 *)(param_1 + 0x2c0),*(undefined8 *)(param_2 + 0x2c0));
      }
      else if (((((*(longlong *)(param_1 + 0x218) == *(longlong *)(param_2 + 0x218)) &&
                 (cVar1 = FUN_143a8dd00(param_1 + 0x178,param_2 + 0x178), cVar1 != '\0')) ||
                ((*(longlong *)(param_1 + 0x218) != 0 &&
                 ((*(longlong *)(param_2 + 0x218) != 0 &&
                  (cVar1 = FUN_143a8dd00(*(undefined8 *)(param_1 + 0x218),
                                         *(undefined8 *)(param_2 + 0x218)), cVar1 != '\0')))))) &&
               ((((*(longlong *)(param_1 + 0x220) == *(longlong *)(param_2 + 0x220) &&
                  (cVar1 = FUN_143a8dd00(param_1 + 0x1a0,param_2 + 0x1a0), cVar1 != '\0')) ||
                 (((*(longlong *)(param_1 + 0x220) != 0 && (*(longlong *)(param_2 + 0x220) != 0)) &&
                  (cVar1 = FUN_143a8dd00(*(undefined8 *)(param_1 + 0x220),
                                         *(undefined8 *)(param_2 + 0x220)), cVar1 != '\0')))) &&
                (((*(longlong *)(param_1 + 0x228) == *(longlong *)(param_2 + 0x228) &&
                  (cVar1 = FUN_143a8dd00(param_1 + 0x1c8,param_2 + 0x1c8), cVar1 != '\0')) ||
                 ((*(longlong *)(param_1 + 0x228) != 0 &&
                  ((*(longlong *)(param_2 + 0x228) != 0 &&
                   (cVar1 = FUN_143a8dd00(*(undefined8 *)(param_1 + 0x228),
                                          *(undefined8 *)(param_2 + 0x228)), cVar1 != '\0'))))))))))
              && (((*(longlong *)(param_1 + 0x230) == *(longlong *)(param_2 + 0x230) &&
                   (cVar1 = FUN_143a8dd00(param_1 + 0x1f0,param_2 + 0x1f0), cVar1 != '\0')) ||
                  (((*(longlong *)(param_1 + 0x230) != 0 && (*(longlong *)(param_2 + 0x230) != 0))
                   && (cVar1 = FUN_143a8dd00(*(undefined8 *)(param_1 + 0x230),
                                             *(undefined8 *)(param_2 + 0x230)), cVar1 != '\0'))))))
      {
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\0';
      }
      if (((cVar1 != '\0') &&
          ((*(longlong *)(param_1 + 0x278) == *(longlong *)(param_2 + 0x278) ||
           (((*(longlong *)(param_1 + 0x278) != 0 && (*(longlong *)(param_2 + 0x278) != 0)) &&
            (cVar1 = FUN_143b75090(*(undefined8 *)(param_1 + 0x278),*(undefined8 *)(param_2 + 0x278)
                                  ), cVar1 != '\0')))))) &&
         (*(int *)(param_1 + 0x280) == *(int *)(param_2 + 0x280))) {
        iVar2 = FUN_143b42610(param_1);
        iVar3 = FUN_143b42610(param_2);
        if (((iVar2 == iVar3) && (*(int *)(param_1 + 0x24c) == *(int *)(param_2 + 0x24c))) &&
           (((*(int *)(param_1 + 0x250) == *(int *)(param_2 + 0x250) &&
             ((*(char *)(param_1 + 0x254) == *(char *)(param_2 + 0x254) &&
              (*(char *)(param_1 + 0x26c) == *(char *)(param_2 + 0x26c))))) &&
            ((*(char *)(param_1 + 0x26c) == '\0' ||
             ((*(char *)(param_1 + 0x26d) == *(char *)(param_2 + 0x26d) &&
              (*(char *)(param_1 + 0x26e) == *(char *)(param_2 + 0x26e))))))))) {
          iVar2 = FRollingHash::GetWindowSize(param_1 + 0x270);
          iVar3 = FRollingHash::GetWindowSize(param_2 + 0x270);
          if ((((iVar2 == iVar3) &&
               ((cVar1 = FUN_143b6a520(*(undefined8 *)(param_1 + 600),*(undefined8 *)(param_2 + 600)
                                      ), cVar1 != '\0' &&
                (*(char *)(param_1 + 0x260) == *(char *)(param_2 + 0x260))))) &&
              ((*(char *)(param_1 + 0x260) == '\0' ||
               ((*(int *)(param_1 + 0x264) == *(int *)(param_2 + 0x264) &&
                (*(int *)(param_1 + 0x268) == *(int *)(param_2 + 0x268))))))) &&
             (((((*(int *)(param_1 + 0x288) == *(int *)(param_2 + 0x288) &&
                 ((*(int *)(param_1 + 0x284) == *(int *)(param_2 + 0x284) &&
                  (*(int *)(param_1 + 0x28c) == *(int *)(param_2 + 0x28c))))) &&
                ((*(int *)(param_1 + 0x2b8) != 0xb ||
                 ((*(int *)(param_1 + 0x2b8) == *(int *)(param_2 + 0x2b8) &&
                  (cVar1 = FUN_143a8dd00(param_1 + 0x290,param_2 + 0x290), cVar1 != '\0')))))) &&
               (*(int *)(param_1 + 700) == *(int *)(param_2 + 700))) &&
              (((*(longlong *)(param_1 + 0x2d8) == *(longlong *)(param_2 + 0x2d8) &&
                (*(longlong *)(param_1 + 0x2d8) == 0)) ||
               ((*(longlong *)(param_1 + 0x2d8) != 0 &&
                ((*(longlong *)(param_2 + 0x2d8) != 0 &&
                 (cVar1 = FUN_143b78510(*(undefined8 *)(param_1 + 0x2d8),
                                        *(undefined8 *)(param_2 + 0x2d8)), cVar1 != '\0')))))))))) {
            return 1;
          }
        }
      }
    }
    local_28 = 0;
  }
  return local_28;
}



// FUNCTION 143b3ba10 FUN_143b3ba10 body=32 status=ok
// SIG undefined FUN_143b3ba10(void)

void FUN_143b3ba10(undefined8 param_1,undefined4 param_2)

{
  FUN_143a8e0c0(param_1,param_2);
  return;
}



// FUNCTION 143b3ba30 FUN_143b3ba30 body=54 status=ok
// SIG undefined FUN_143b3ba30(void)

undefined8 FUN_143b3ba30(undefined8 param_1,uint param_2)

{
  FUN_143b3a8e0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b3ba70 FUN_143b3ba70 body=54 status=ok
// SIG undefined FUN_143b3ba70(void)

undefined8 FUN_143b3ba70(undefined8 param_1,uint param_2)

{
  FUN_143b3a930(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b3bab0 FUN_143b3bab0 body=54 status=ok
// SIG undefined FUN_143b3bab0(void)

undefined8 FUN_143b3bab0(undefined8 param_1,uint param_2)

{
  Audio::FAudioCaptureSynth::IsStreamOpen(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b3baf0 FUN_143b3baf0 body=54 status=ok
// SIG undefined FUN_143b3baf0(void)

undefined8 FUN_143b3baf0(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b3bb30 FUN_143b3bb30 body=824 status=ok
// SIG undefined FUN_143b3bb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b3bb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 *local_f0;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b43050(param_2);
    if (cVar1 == '\0') {
      FUN_143b74e90(local_98);
      local_f8 = param_5;
      FUN_143b3c450(param_1,param_2,local_98,local_e8);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        cVar1 = FUN_143b43020(local_98);
        if (cVar1 == '\0') {
          local_f0 = param_5;
          local_f8 = (undefined4 *)((ulonglong)local_f8 & 0xffffffffffffff00);
          local_c0 = FUN_143b46500(param_1,param_3,param_4,local_98);
          Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
          param_3 = local_c0;
        }
        else {
          uVar2 = FUN_143b75c80(local_98);
          local_f0._0_1_ = 1;
          local_d8 = FUN_143b3cce0(param_1,param_3,uVar2,param_4);
          local_e4 = FUN_143a904f0(param_3);
          uVar3 = FUN_143b41c90(param_1,0xe);
          FUN_143a8e070(param_3,uVar3);
          uVar2 = FUN_143a904f0(param_3);
          local_b8 = *param_4;
          (**(code **)(local_b8 + 8))(param_4,0,local_e4,uVar2);
          uVar2 = FUN_143b75c80(local_98);
          local_f0 = (undefined4 *)((ulonglong)local_f0._1_7_ << 8);
          local_f8 = (undefined4 *)CONCAT71(local_f8._1_7_,local_e8[0]);
          local_e0 = FUN_143b3cce0(param_1,param_3,uVar2,param_4);
          local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,local_e0);
          FUN_143b3c8e0(param_1,param_3,param_4,local_d8);
          local_c8 = param_3;
          Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
          param_3 = local_c8;
        }
      }
      else {
        local_b0 = param_3;
        Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
        param_3 = local_b0;
      }
    }
    else {
      local_dc = FUN_143a904f0(param_3);
      uVar3 = FUN_143b41c90(param_1,0xf);
      FUN_143a8e070(param_3,uVar3);
      uVar2 = FUN_143a904f0(param_3);
      local_d0 = *param_4;
      (**(code **)(local_d0 + 8))(param_4,0,local_dc,uVar2);
      local_f8 = (undefined4 *)((ulonglong)local_f8._4_4_ << 0x20);
      FUN_143b3c8e0(param_1,param_3,param_4,0);
    }
  }
  return param_3;
}



// FUNCTION 143b3be70 FUN_143b3be70 body=400 status=ok
// SIG undefined FUN_143b3be70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b3be70(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a919d0(param_2);
    if (cVar1 == '\0') {
      FUN_143b74e90(local_98);
      FUN_143b76670(local_98,param_2);
      local_c8 = param_5;
      FUN_143b3bb30(param_1,local_98,param_3,param_4);
      local_b0 = param_3;
      Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
      param_3 = local_b0;
    }
    else {
      local_b8 = FUN_143a904f0(param_3);
      uVar3 = FUN_143b41c90(param_1,0xf);
      FUN_143a8e070(param_3,uVar3);
      uVar2 = FUN_143a904f0(param_3);
      local_a8 = *param_4;
      (**(code **)(local_a8 + 8))(param_4,0,local_b8,uVar2);
      local_c8 = (undefined4 *)((ulonglong)local_c8._4_4_ << 0x20);
      FUN_143b3c8e0(param_1,param_3,param_4,0);
    }
  }
  return param_3;
}



// FUNCTION 143b3c000 FUN_143b3c000 body=993 status=ok
// SIG undefined FUN_143b3c000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143b3c0bf) */

undefined8
FUN_143b3c000(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined1 local_130;
  undefined1 local_128;
  int local_124;
  undefined1 local_120;
  int local_11c;
  int local_118;
  int local_114;
  longlong local_110;
  int local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [128];
  short asStack_48 [19];
  short sStack_22;
  undefined2 uStack_20;
  ulonglong local_18;
  
  local_d0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_d8 = (char *)FUN_143b42ef0(param_1 + 0x2f0);
    if (*local_d8 == '\x01') {
      local_e0 = 0x15;
      local_124 = 0x14;
      local_f8 = 0x28;
      uStack_20 = 0;
      local_110 = param_2;
      if (param_2 < 1) {
        local_124 = 0x13;
        sStack_22 = 0x30 - (short)(param_2 % 10);
        local_110 = param_2 / -10;
      }
      for (; 0 < local_110; local_110 = local_110 / 10) {
        local_124 = local_124 + -1;
        asStack_48[local_124] = (short)(local_110 % 10) + 0x30;
      }
      local_11c = 0x14 - local_124;
      local_120 = param_2 < 0;
      local_130 = 1;
      local_138 = (undefined4 *)CONCAT71(local_138._1_7_,local_120);
      FUN_143b3cce0(param_1,param_3,SUB84((double)param_2,0),param_4);
      local_118 = FUN_143b382f0(param_1);
      local_104 = local_118;
      if (local_11c <= local_118) {
        local_104 = local_11c;
      }
      local_114 = local_104;
      if ((local_118 < local_11c) &&
         (iVar2 = icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::contains
                            (param_1 + 0x270,0x1000), iVar2 != 0)) {
        *param_5 = 1;
      }
      local_108 = FUN_143b38330(param_1);
      local_108 = local_108 - local_114;
      local_100 = FUN_143a904f0(param_3);
      while( true ) {
        local_fc = local_108;
        if (local_108 < 1) break;
        local_108 = local_108 + -1;
        FUN_143acc590(param_3,0x30);
      }
      local_108 = local_108 + -1;
      FUN_143b17350(param_3,asStack_48 + (longlong)local_124 + (longlong)(local_11c - local_114),
                    local_114);
      uVar3 = FUN_143a904f0(param_3);
      local_f0 = *param_4;
      (**(code **)(local_f0 + 8))(param_4,0,local_100,uVar3);
      local_128 = param_2 < 0;
      local_130 = 0;
      local_138 = (undefined4 *)CONCAT71(local_138._1_7_,local_128);
      FUN_143b3cce0(param_1,param_3,SUB84((double)param_2,0),param_4);
    }
    else {
      FUN_143b74e90(local_c8);
      FUN_143b76770(local_c8,param_2);
      local_138 = param_5;
      local_e8 = FUN_143b3bb30(param_1,local_c8,param_3,param_4);
      Audio::FAudioCaptureSynth::IsStreamOpen(local_c8);
      param_3 = local_e8;
    }
  }
  return param_3;
}



// FUNCTION 143b3c3f0 FUN_143b3c3f0 body=46 status=ok
// SIG undefined FUN_143b3c3f0(void)

int FUN_143b3c3f0(int param_1,int param_2)

{
  int local_18;
  
  local_18 = param_1;
  if (param_1 < param_2) {
    local_18 = param_2;
  }
  return local_18;
}



// FUNCTION 143b3c420 FUN_143b3c420 body=46 status=ok
// SIG undefined FUN_143b3c420(void)

int FUN_143b3c420(int param_1,int param_2)

{
  int local_18;
  
  local_18 = param_2;
  if (param_1 < param_2) {
    local_18 = param_1;
  }
  return local_18;
}



// FUNCTION 143b3c450 FUN_143b3c450 body=1160 status=ok
// SIG undefined FUN_143b3c450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b3c450(longlong param_1,undefined8 param_2,longlong param_3,char *param_4,
                      undefined4 *param_5)

{
  char cVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143b74f60(param_3,param_2);
    *param_4 = '\0';
    cVar1 = FUN_143b43050(param_2);
    if (cVar1 == '\0') {
      FUN_143b768e0(param_3,*(undefined4 *)(param_1 + 0x280));
      if (*(longlong *)(param_1 + 0x240) != 0) {
        FUN_143b76300(param_3,*(undefined8 *)(param_1 + 0x240),param_5);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') {
          return param_3;
        }
      }
      if (*(int *)(param_1 + 0x248) != 0) {
        FUN_143b74e90(local_98);
        FUN_143b76630(local_98,10);
        if (*(int *)(param_1 + 0x248) < 1) {
          for (local_c0 = *(int *)(param_1 + 0x248); local_c0 < 0; local_c0 = local_c0 + 1) {
            FUN_143b753e0(param_3,local_98,param_5);
            cVar1 = FUN_143a8b0e0(*param_5);
            if (cVar1 != '\0') {
              local_b0 = param_3;
              Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
              return local_b0;
            }
          }
        }
        else {
          for (local_c4 = *(int *)(param_1 + 0x248); 0 < local_c4; local_c4 = local_c4 + -1) {
            FUN_143b76300(param_3,local_98,param_5);
            cVar1 = FUN_143a8b0e0(*param_5);
            if (cVar1 != '\0') {
              local_a8 = param_3;
              Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
              return local_a8;
            }
          }
        }
        Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
      }
      cVar1 = FUN_143b430a0(param_3);
      local_c7 = cVar1 == '\0';
      *param_4 = local_c7;
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) & 0xffffffdf;
      if (*(longlong *)(param_1 + 0x278) != 0) {
        FUN_143b753e0(param_3,*(undefined8 *)(param_1 + 0x278),param_5);
        FUN_143b769b0(param_3);
        FUN_143b76300(param_3,*(undefined8 *)(param_1 + 0x278),param_5);
        FUN_143b769e0(param_3);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') {
          return param_3;
        }
      }
      if ((*(int *)(param_1 + 0x280) == 7) && ((*(uint *)(param_3 + 0x14) & 0x20) != 0)) {
        *param_5 = 0x10111;
      }
      else {
        cVar1 = FUN_143b43020(param_3);
        if (cVar1 == '\0') {
          if ((*(char *)(param_1 + 0x26c) == '\0') &&
             (cVar1 = FUN_143b3e500(param_1), cVar1 == '\0')) {
            local_b8 = FUN_143b441d0(param_1);
            FUN_143b76470(param_3,local_b8);
          }
          else {
            local_bc = FUN_143b441d0(param_1);
            if (0 < local_bc) {
              FUN_143b76400(param_3,local_bc);
              local_c8 = *param_4 == '\0';
              FUN_143b76870(param_3,local_c8);
            }
          }
          if ((*(int *)(param_1 + 0x280) == 7) && ((*(uint *)(param_3 + 0x14) & 0x20) != 0)) {
            *param_5 = 0x10111;
          }
        }
      }
    }
  }
  return param_3;
}



// FUNCTION 143b3c8e0 FUN_143b3c8e0 body=428 status=ok
// SIG undefined FUN_143b3c8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3c8e0(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  int param_5)

{
  int iVar1;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x288)) {
    local_54 = FUN_143a904f0(param_2);
    local_54 = *(int *)(param_1 + 0x288) - local_54;
    if (0 < local_54) {
      FUN_143a8ac30(local_40);
      for (local_50 = 0; local_50 < local_54; local_50 = local_50 + 1) {
        FUN_143b3ba10(local_40);
      }
      local_58 = *(int *)(param_1 + 0x28c);
      if (local_58 == 0) {
        FUN_143b42ea0(param_2,0,local_40);
      }
      else if (local_58 == 1) {
        FUN_143b42ea0(param_2,param_4,local_40);
      }
      else if (local_58 == 2) {
        iVar1 = FUN_143a904f0(param_2);
        FUN_143b42ea0(param_2,iVar1 - param_5,local_40);
      }
      else if (local_58 == 3) {
        FUN_143a8e070(param_2,local_40);
      }
      if ((*(int *)(param_1 + 0x28c) == 0) || (*(int *)(param_1 + 0x28c) == 1)) {
        (**(code **)(*param_3 + 0x10))(param_3,local_54);
      }
      FUN_143a8dc60(local_40);
    }
  }
  return;
}



// FUNCTION 143b3ca90 FUN_143b3ca90 body=245 status=ok
// SIG undefined FUN_143b3ca90(void)

void FUN_143b3ca90(longlong param_1,longlong param_2)

{
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    local_20 = *(undefined8 **)(param_1 + 0x2d8);
    local_18 = local_20;
    if (local_20 == (undefined8 *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = (**(code **)*local_20)(local_20,1);
    }
    *(longlong *)(param_1 + 0x2d8) = param_2;
    if (*(int *)(param_1 + 700) != 0) {
      local_28[0] = 0;
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        FUN_143b403a0(param_1);
      }
      FUN_143b45660(param_1,local_28);
      if (*(int *)(param_1 + 700) == 3) {
        FUN_143b45cf0(param_1,param_1 + 0x290,0,1,local_28);
      }
    }
  }
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b3cb90 FUN_143b3cb90 body=322 status=ok
// SIG undefined FUN_143b3cb90(void)

void FUN_143b3cb90(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return;
  }
  bVar2 = false;
  if (*(longlong *)(param_1 + 600) == 0) goto LAB_143b3cc93;
  uVar4 = FUN_143b41cc0(param_2,8);
  uVar5 = FUN_143b41c90(param_1,8);
  cVar3 = FUN_143a8dd00(uVar5,uVar4);
  if (cVar3 == '\0') {
LAB_143b3cc3e:
    bVar2 = false;
  }
  else {
    uVar4 = FUN_143b41cc0(param_2,9);
    uVar5 = FUN_143b41c90(param_1,9);
    cVar3 = FUN_143a8dd00(uVar5,uVar4);
    if (cVar3 == '\0') goto LAB_143b3cc3e;
    bVar2 = true;
  }
  puVar1 = *(undefined8 **)(param_1 + 600);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
LAB_143b3cc93:
  *(longlong *)(param_1 + 600) = param_2;
  if (!bVar2) {
    FUN_143b44890(param_1);
  }
  FUN_143b41110(param_1,0);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b3cce0 FUN_143b3cce0 body=2177 status=ok
// SIG undefined FUN_143b3cce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b3cce0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                       char param_5,char param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined1 local_280;
  undefined8 local_278;
  int local_268;
  int local_264;
  longlong local_260;
  longlong local_258;
  int local_250;
  longlong local_248;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  uint local_230;
  int local_22c;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [48];
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_1b0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if ((*(longlong *)(param_1 + 0x238) != 0) && (*(int *)(param_1 + 700) != 3)) {
    if (param_6 == '\0') {
      if (param_5 == '\0') {
        local_218 = *(longlong *)(param_1 + 0x220);
      }
      else {
        local_218 = *(longlong *)(param_1 + 0x230);
      }
      local_248 = local_218;
    }
    else {
      if (param_5 == '\0') {
        local_228 = *(longlong *)(param_1 + 0x218);
      }
      else {
        local_228 = *(longlong *)(param_1 + 0x228);
      }
      local_248 = local_228;
    }
    if (local_248 != 0) {
      FUN_143a8ac30(local_150);
      local_278 = 0;
      local_280 = 1;
      local_288 = param_4;
      FUN_143b405b0(param_1,local_248,local_150,param_3);
      FUN_143a8e070(param_2,local_150);
      local_230 = FUN_143a904f0(local_150);
      FUN_143a8dc60(local_150);
      return (ulonglong)local_230;
    }
  }
  if (*(int *)(param_1 + 700) == 3) {
    FUN_143a8ac30(local_178);
    local_23c = FUN_143b38310(param_1);
    if (local_23c < 1) {
      uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(*(undefined8 *)(param_1 + 0x2d8));
      local_1e0 = FUN_143b5beb0(uVar4,local_38,param_3);
      local_1c0 = local_1e0;
      FUN_143a8dcd0(local_178,local_1e0);
      FUN_143a8dc60(local_38);
    }
    else {
      uVar2 = FUN_143b38310(param_1);
      FUN_143b57cf0(local_1a8,param_3,uVar2);
      uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(*(undefined8 *)(param_1 + 0x2d8));
      local_1f8 = FUN_143b5be20(uVar4,local_60,local_1a8);
      local_1b8 = local_1f8;
      FUN_143a8dcd0(local_178,local_1f8);
      FUN_143a8dc60(local_60);
    }
    if (*(int *)(param_1 + 0x2b8) == 0xb) {
      local_258 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                            (*(undefined8 *)(param_1 + 0x2d0),local_178);
    }
    else {
      local_258 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                            (*(undefined8 *)(param_1 + 0x2c8),local_178);
    }
    if (param_6 == '\0') {
      if (param_5 == '\0') {
        local_220 = local_258 + 0x78;
      }
      else {
        local_220 = local_258 + 0x28;
      }
      local_260 = local_220;
    }
    else {
      if (param_5 == '\0') {
        local_208 = local_258 + 0x50;
      }
      else {
        local_208 = local_258;
      }
      local_260 = local_208;
    }
    FUN_143a8dc60(local_178);
  }
  else if (param_6 == '\0') {
    if (param_5 == '\0') {
      local_200 = param_1 + 0x1a0;
    }
    else {
      local_200 = param_1 + 0x1f0;
    }
    local_260 = local_200;
  }
  else {
    if (param_5 == '\0') {
      local_210 = param_1 + 0x178;
    }
    else {
      local_210 = param_1 + 0x1c8;
    }
    local_260 = local_210;
  }
  local_264 = FUN_143a904f0(param_2);
  FUN_143a8e070(param_2,local_260);
  cVar1 = (**(code **)(*param_4 + 0x18))(param_4);
  if (cVar1 != '\0') {
    uVar4 = FUN_143b41c90(param_1,8);
    local_268 = FUN_143b0ba90(local_260,uVar4);
    if (-1 < local_268) {
      uVar4 = FUN_143b41c90(param_1,8);
      FUN_143a8d3a0(local_88,uVar4);
      local_234 = local_264 + local_268;
      iVar3 = FUN_143a904f0(local_88);
      local_1d0 = *param_4;
      (**(code **)(local_1d0 + 8))(param_4,7,local_264 + local_268,local_234 + iVar3);
      FUN_143a8dc60(local_88);
    }
    uVar4 = FUN_143b41c90(param_1,9);
    local_268 = FUN_143b0ba90(local_260,uVar4);
    if (-1 < local_268) {
      uVar4 = FUN_143b41c90(param_1,9);
      FUN_143a8d3a0(local_b0,uVar4);
      local_240 = local_264 + local_268;
      iVar3 = FUN_143a904f0(local_b0);
      local_1f0 = *param_4;
      (**(code **)(local_1f0 + 8))(param_4,7,local_264 + local_268,local_240 + iVar3);
      FUN_143a8dc60(local_b0);
    }
    uVar4 = FUN_143b41c90(param_1,6);
    local_268 = FUN_143b0ba90(local_260,uVar4);
    if (-1 < local_268) {
      uVar4 = FUN_143b41c90(param_1,6);
      FUN_143a8d3a0(local_d8,uVar4);
      local_22c = local_264 + local_268;
      iVar3 = FUN_143a904f0(local_d8);
      local_1e8 = *param_4;
      (**(code **)(local_1e8 + 8))(param_4,10,local_264 + local_268,local_22c + iVar3);
      FUN_143a8dc60(local_d8);
    }
    uVar4 = FUN_143b41c90(param_1,3);
    local_268 = FUN_143b0ba90(local_260,uVar4);
    if (-1 < local_268) {
      uVar4 = FUN_143b41c90(param_1,3);
      FUN_143a8d3a0(local_128,uVar4);
      local_238 = local_264 + local_268;
      iVar3 = FUN_143a904f0(local_128);
      local_1d8 = *param_4;
      (**(code **)(local_1d8 + 8))(param_4,8,local_264 + local_268,local_238 + iVar3);
      FUN_143a8dc60(local_128);
    }
    uVar4 = FUN_143b41c90(param_1,0xc);
    local_268 = FUN_143b0ba90(local_260,uVar4);
    if (-1 < local_268) {
      uVar4 = FUN_143b41c90(param_1,0xc);
      FUN_143a8d3a0(local_100,uVar4);
      local_250 = local_264 + local_268;
      iVar3 = FUN_143a904f0(local_100);
      local_1c8 = *param_4;
      (**(code **)(local_1c8 + 8))(param_4,9,local_264 + local_268,local_250 + iVar3);
      FUN_143a8dc60(local_100);
    }
  }
  uVar5 = FUN_143a904f0(local_260);
  return uVar5;
}



// FUNCTION 143b3d570 FUN_143b3d570 body=830 status=ok
// SIG undefined FUN_143b3d570(void)

void FUN_143b3d570(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_14;
  int local_c;
  
  if (param_4 == '\0') {
    iVar2 = FUN_143acddd0(param_3,0x30);
    if (iVar2 < 0) {
      iVar2 = FUN_143acddd0(param_3,0x2c);
      if (iVar2 < 0) {
        iVar2 = FUN_143acddd0(param_3,0x2e);
        if (iVar2 < 0) {
          iVar2 = FUN_143acddd0(param_3,0x25);
          if (iVar2 < 0) {
            iVar2 = FUN_143acddd0(param_3,0x2030);
            if (iVar2 < 0) {
              iVar2 = FUN_143acddd0(param_3,0x23);
              if (iVar2 < 0) {
                iVar2 = FUN_143acddd0(param_3,0x3b);
                if (iVar2 < 0) {
                  iVar2 = FUN_143acddd0(param_3,0x45);
                  if (iVar2 < 0) {
                    iVar2 = FUN_143acddd0(param_3,0x2b);
                    if (iVar2 < 0) {
                      iVar2 = FUN_143acddd0(param_3,0x2d);
                      if (iVar2 < 0) {
                        iVar2 = FUN_143acddd0(param_3,0xa4);
                        if (iVar2 < 0) {
                          bVar1 = false;
                          goto LAB_143b3d7dd;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar1 = true;
  }
  else {
    uVar4 = FUN_143b41c90(param_1,4);
    iVar2 = FUN_143b0ba90(param_3,uVar4);
    if (iVar2 < 0) {
      uVar4 = FUN_143b41c90(param_1,1);
      iVar2 = FUN_143b0ba90(param_3,uVar4);
      if (iVar2 < 0) {
        uVar4 = FUN_143b41c90(param_1,0);
        iVar2 = FUN_143b0ba90(param_3,uVar4);
        if (iVar2 < 0) {
          uVar4 = FUN_143b41c90(param_1,3);
          iVar2 = FUN_143b0ba90(param_3,uVar4);
          if (iVar2 < 0) {
            uVar4 = FUN_143b41c90(param_1,0xc);
            iVar2 = FUN_143b0ba90(param_3,uVar4);
            if (iVar2 < 0) {
              uVar4 = FUN_143b41c90(param_1,5);
              iVar2 = FUN_143b0ba90(param_3,uVar4);
              if (iVar2 < 0) {
                uVar4 = FUN_143b41c90(param_1,2);
                iVar2 = FUN_143b0ba90(param_3,uVar4);
                if (iVar2 < 0) {
                  uVar4 = FUN_143b41c90(param_1,7);
                  iVar2 = FUN_143b0ba90(param_3,uVar4);
                  if (iVar2 < 0) {
                    uVar4 = FUN_143b41c90(param_1,6);
                    iVar2 = FUN_143b0ba90(param_3,uVar4);
                    if (iVar2 < 0) {
                      iVar2 = FUN_143acddd0(param_3,0xa4);
                      if (iVar2 < 0) {
                        bVar1 = false;
                        goto LAB_143b3d7dd;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar1 = true;
  }
LAB_143b3d7dd:
  if (bVar1) {
    FUN_143acc590(param_2,0x27);
  }
  iVar2 = FUN_143acddd0(param_3,0x27);
  if (iVar2 < 0) {
    FUN_143a8e070(param_2,param_3);
  }
  else {
    local_14 = 0;
    while (iVar2 = FUN_143a904f0(param_3), local_14 < iVar2) {
      uVar3 = FUN_143a8e3e0(param_3,local_14);
      if (uVar3 < 0x10000) {
        local_c = 1;
      }
      else {
        local_c = 2;
      }
      local_14 = local_14 + local_c;
      FUN_143b3ba10(param_2,uVar3);
      if (uVar3 == 0x27) {
        FUN_143b3ba10(param_2,0x27);
      }
    }
  }
  if (bVar1) {
    FUN_143acc590(param_2,0x27);
  }
  return;
}



// FUNCTION 143b3d8b0 FUN_143b3d8b0 body=856 status=ok
// SIG undefined FUN_143b3d8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3d8b0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_3 == (longlong *)0x0) {
    FUN_143b3d570(param_1,param_2,param_4,param_5);
  }
  else {
    local_80 = 0;
    while (iVar1 = FUN_143a904f0(param_3), local_80 < iVar1) {
      local_88 = FUN_143b0bae0(param_3,0x27,local_80);
      if (local_88 < 0) {
        FUN_143a8ac30(local_68);
        uVar2 = FUN_143a904f0(param_3);
        local_78 = *param_3;
        (**(code **)(local_78 + 0x10))(param_3,local_80,uVar2,local_68);
        FUN_143b3d570(param_1,param_2,local_68,param_5);
        FUN_143a8dc60(local_68);
        return;
      }
      if (local_80 < local_88) {
        FUN_143a8ac30(local_40);
        (**(code **)(*param_3 + 0x10))(param_3,local_80,local_88,local_40);
        FUN_143b3d570(param_1,param_2,local_40,param_5);
        FUN_143a8dc60(local_40);
      }
      local_88 = local_88 + 1;
      local_84 = FUN_143a8e3e0(param_3,local_88);
      local_88 = local_88 + 1;
      if (local_84 == 0x27) {
        uVar3 = FUN_143a8e0c0(param_2,0x27);
        FUN_143a8e0c0(uVar3,local_84);
      }
      else if (((local_84 == 0xa4) && (iVar1 = FUN_143a904f0(param_3), local_88 < iVar1)) &&
              (iVar1 = FUN_143a8e3e0(param_3,local_88), iVar1 == 0xa4)) {
        local_88 = local_88 + 1;
        uVar3 = FUN_143a8e0c0(param_2,local_84);
        FUN_143a8e0c0(uVar3,local_84);
      }
      else if (param_5 == '\0') {
        FUN_143a8e0c0(param_2,local_84);
      }
      else {
        local_7c = local_84;
        if (local_84 == 0x25) {
          uVar3 = FUN_143b41c90(param_1,3);
          FUN_143a8e070(param_2,uVar3);
        }
        else if (local_84 == 0x2b) {
          uVar3 = FUN_143b41c90(param_1,7);
          FUN_143a8e070(param_2,uVar3);
        }
        else if (local_84 == 0x2d) {
          uVar3 = FUN_143b41c90(param_1,6);
          FUN_143a8e070(param_2,uVar3);
        }
        else if (local_84 == 0x2030) {
          uVar3 = FUN_143b41c90(param_1,0xc);
          FUN_143a8e070(param_2,uVar3);
        }
        else {
          FUN_143a8e0c0(param_2,local_84);
        }
      }
      local_80 = local_88;
    }
  }
  return;
}



// FUNCTION 143b3dc20 FUN_143b3dc20 body=62 status=ok
// SIG undefined FUN_143b3dc20(void)

void FUN_143b3dc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b3dcd0(param_1,param_2,1,param_3,param_4);
  return;
}



// FUNCTION 143b3dc60 FUN_143b3dc60 body=106 status=ok
// SIG undefined FUN_143b3dc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3dc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  FUN_143b3dcd0(param_1,param_2,1,local_68);
  return;
}



// FUNCTION 143b3dcd0 FUN_143b3dcd0 body=495 status=ok
// SIG undefined FUN_143b3dcd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3dcd0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  uint local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1d8 = 0;
  iVar1 = FUN_143acddd0(param_2,0xa4);
  if (iVar1 != -1) {
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      local_1d0 = FUN_143a8d310(0x20);
      if (local_1d0 == 0) {
        local_1c8 = 0;
      }
      else {
        local_1c0 = FUN_143b42560(*(undefined8 *)(param_1 + 600),local_198);
        local_1d8 = local_1d8 | 1;
        local_1b0 = local_1c0;
        local_1c8 = FUN_143b78200(local_1d0,local_1c0,param_5);
      }
      local_1b8 = local_1c8;
      *(undefined8 *)(param_1 + 0x2d8) = local_1c8;
      if ((local_1d8 & 1) != 0) {
        local_1d8 = local_1d8 & 0xfffffffe;
        FUN_143a8acf0(local_198);
      }
    }
    if (*(longlong *)(param_1 + 0x2c0) == 0) {
      FUN_143b45660(param_1,param_5);
    }
    iVar1 = FUN_143b19dc0(param_2,&DAT_145d0d098,3,0);
    if (iVar1 != -1) {
      local_1e8 = param_5;
      FUN_143b45cf0(param_1,param_2,1,0);
    }
  }
  local_1e8 = param_5;
  FUN_143b3dfd0(param_1,param_2,param_3,param_4);
  FUN_143b41090(param_1,0);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b3dec0 FUN_143b3dec0 body=62 status=ok
// SIG undefined FUN_143b3dec0(void)

void FUN_143b3dec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b3dcd0(param_1,param_2,0,param_3,param_4);
  return;
}



// FUNCTION 143b3df00 FUN_143b3df00 body=106 status=ok
// SIG undefined FUN_143b3df00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3df00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  FUN_143b3dcd0(param_1,param_2,0,local_68);
  return;
}



// FUNCTION 143b3df70 FUN_143b3df70 body=90 status=ok
// SIG undefined FUN_143b3df70(void)

void FUN_143b3df70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_143b3dfd0(param_1,param_3,param_4,param_5,param_6);
  FUN_143b41090(param_1,param_2);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b3dfd0 FUN_143b3dfd0 body=1324 status=ok
// SIG undefined FUN_143b3dfd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3dfd0(longlong *param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined1 auStack_398 [32];
  undefined4 *local_378;
  int local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  undefined8 local_348;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  char local_328;
  undefined4 local_324;
  undefined4 local_320;
  char local_31c;
  undefined1 local_318;
  undefined1 local_314;
  undefined4 local_310;
  char local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined4 local_2f8;
  char local_2f4;
  undefined1 local_2f0 [128];
  undefined4 local_270;
  undefined1 local_26c;
  undefined1 local_26b;
  undefined1 local_268 [40];
  undefined1 local_240 [40];
  undefined1 local_218 [40];
  undefined1 local_1f0 [40];
  int local_1c8;
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_348 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143b82fe0(local_1b8);
    if (param_3 != '\0') {
      FUN_143b84f40(local_1b8,param_1[0x4b]);
    }
    FUN_143a8dcd0(param_1 + 0x52,param_2);
    FUN_143b82e60(&local_338);
    local_378 = param_5;
    FUN_143b83330(local_1b8,param_2,&local_338,param_4);
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0xd8))(param_1,local_338);
      (**(code **)(*param_1 + 0xd0))(param_1,local_334);
      (**(code **)(*param_1 + 0xe8))(param_1,local_330);
      (**(code **)(*param_1 + 0xe0))(param_1,local_32c);
      FUN_143b455e0(param_1,local_328);
      if (local_328 != '\0') {
        FUN_143b44f90(param_1,local_324);
        FUN_143b44e50(param_1,local_320);
      }
      *(char *)((longlong)param_1 + 0x26c) = local_31c;
      if (local_31c != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x26d) = local_318;
      }
      *(undefined1 *)((longlong)param_1 + 0x26e) = local_314;
      *(undefined4 *)((longlong)param_1 + 700) = local_310;
      (**(code **)(*param_1 + 200))(param_1,local_30c);
      if (local_30c != '\0') {
        *(undefined4 *)((longlong)param_1 + 0x24c) = local_308;
        *(undefined4 *)(param_1 + 0x4a) = local_304;
      }
      (**(code **)(*param_1 + 0x170))(param_1,local_300);
      *(undefined1 *)((longlong)param_1 + 0x254) = local_2fc;
      *(undefined4 *)(param_1 + 0x51) = local_2f8;
      if (local_2f4 == '\0') {
        (**(code **)(*param_1 + 0x180))(param_1,0);
      }
      else if (param_1[0x4f] == 0) {
        local_360 = FUN_143a8d310(0x80);
        if (local_360 == 0) {
          local_358 = 0;
        }
        else {
          local_358 = FUN_143b74e30(local_360,local_2f0);
        }
        local_350 = local_358;
        param_1[0x4f] = local_358;
        if (param_1[0x4f] == 0) {
          *param_5 = 7;
          FUN_143b3ad40(&local_338);
          FUN_143b3adb0(local_1b8);
          return;
        }
      }
      else {
        FUN_143b74f60(param_1[0x4f],local_2f0);
      }
      *(undefined4 *)((longlong)param_1 + 0x284) = local_270;
      local_368 = local_1c8;
      if (local_1c8 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
      }
      else if (local_1c8 == 1) {
        *(undefined4 *)((longlong)param_1 + 0x28c) = 1;
      }
      else if (local_1c8 == 2) {
        *(undefined4 *)((longlong)param_1 + 0x28c) = 2;
      }
      else if (local_1c8 == 3) {
        *(undefined4 *)((longlong)param_1 + 0x28c) = 3;
      }
      FUN_143b40160(local_268,local_26c,param_1 + 0x45,param_5);
      FUN_143b40160(local_240,local_26c,param_1 + 0x46,param_5);
      FUN_143b40160(local_218,local_26b,param_1 + 0x43,param_5);
      FUN_143b40160(local_1f0,local_26b,param_1 + 0x44,param_5);
      FUN_143b3ad40(&local_338);
      FUN_143b3adb0(local_1b8);
    }
    else {
      FUN_143b3ad40(&local_338);
      FUN_143b3adb0(local_1b8);
    }
  }
  return;
}



// FUNCTION 143b3e500 FUN_143b3e500 body=18 status=ok
// SIG undefined FUN_143b3e500(void)

undefined1 FUN_143b3e500(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x260);
}



// FUNCTION 143b3e520 FUN_143b3e520 body=82 status=ok
// SIG undefined FUN_143b3e520(void)

void FUN_143b3e520(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_4);
  FUN_143aba020(param_1,param_2,param_3,param_4,0,uVar1,param_5);
  return;
}



// FUNCTION 143b3e580 CreateInternalContext body=92 status=ok
// SIG undefined CreateInternalContext(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateInternalContext(void) __ptr64
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateInternalContext(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 CreateInternalContext(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x300);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b3a470(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b3e5e0 FUN_143b3e5e0 body=74 status=ok
// SIG undefined FUN_143b3e5e0(void)

void FUN_143b3e5e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_4);
  FUN_143b0fd50(param_1,param_2,param_3,param_4,0,uVar1);
  return;
}



// FUNCTION 143b3e630 FUN_143b3e630 body=68 status=ok
// SIG undefined FUN_143b3e630(void)

void FUN_143b3e630(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_143b0fd50(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 143b3e680 FUN_143b3e680 body=289 status=ok
// SIG undefined FUN_143b3e680(void)

void FUN_143b3e680(longlong *param_1,undefined8 param_2,undefined4 param_3,char param_4,char param_5
                  ,longlong param_6,char param_7,undefined1 param_8,longlong param_9)

{
  undefined1 uVar1;
  longlong *local_18;
  
  if ((((param_1[0x47] == 0) && (param_9 == 0)) &&
      ((*(int *)((longlong)param_1 + 700) == 0 || (param_7 == '\0')))) || (param_6 == 0)) {
    if (param_4 == '\0') {
      if (param_5 == '\0') {
        local_18 = param_1 + 0x34;
      }
      else {
        local_18 = param_1 + 0x2f;
      }
    }
    else if (param_5 == '\0') {
      local_18 = param_1 + 0x3e;
    }
    else {
      local_18 = param_1 + 0x39;
    }
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
    FUN_143b3ec30(param_1,local_18,param_2,param_3,uVar1);
  }
  else {
    FUN_143b3e7b0(param_1,param_6,param_2,param_3,param_8,param_9);
  }
  return;
}



// FUNCTION 143b3e7b0 FUN_143b3e7b0 body=1136 status=ok
// SIG undefined FUN_143b3e7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b3e7b0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined1 param_5,wchar_t *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_res20;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 *local_80;
  int local_78;
  char local_74;
  char local_73;
  char local_72;
  uint local_70;
  char local_6c;
  uint local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  int local_54;
  int local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  wchar_t local_28 [4];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_30 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_res20 = param_4;
  local_50 = param_4;
LAB_143b3e7f9:
  do {
    while( true ) {
      iVar2 = FUN_143a904f0(param_2);
      if ((iVar2 <= local_78) || (local_res20 < 0)) {
        return local_res20 - local_50;
      }
      local_70 = FUN_143a8e3e0(param_2,local_78);
      if (local_70 < 0x10000) {
        local_58 = 1;
      }
      else {
        local_58 = 2;
      }
      local_78 = local_78 + local_58;
      if (local_70 == 0x27) break;
LAB_143b3ebba:
      local_res20 = FUN_143b431d0(param_3,local_res20,local_70);
      cVar1 = FUN_143b28380(local_70);
      if (cVar1 != '\0') {
        local_78 = FUN_143b46390(param_2,local_78);
      }
    }
    local_70 = FUN_143a8e3e0(param_2,local_78);
    if (local_70 < 0x10000) {
      local_54 = 1;
    }
    else {
      local_54 = 2;
    }
    local_78 = local_78 + local_54;
    local_60 = 0;
    local_68 = local_70;
    if (local_70 == 0x25) {
      local_60 = FUN_143b41c90(param_1,3);
    }
    else if (local_70 == 0x2b) {
      local_60 = FUN_143b41c90(param_1,7);
    }
    else if (local_70 == 0x2d) {
      local_60 = FUN_143b41c90(param_1,6);
    }
    else {
      if (local_70 == 0xa4) {
        iVar2 = FUN_143a904f0(param_2);
        if ((local_78 < iVar2) && (iVar2 = FUN_143a8e3e0(param_2,local_78), iVar2 == 0xa4)) {
          local_73 = '\x01';
        }
        else {
          local_73 = '\0';
        }
        local_72 = local_73;
        if (local_73 != '\0') {
          local_78 = local_78 + 1;
        }
        iVar2 = FUN_143a904f0(param_2);
        if ((local_78 < iVar2) && (iVar2 = FUN_143a8e3e0(param_2,local_78), iVar2 == 0xa4)) {
          local_74 = '\x01';
        }
        else {
          local_74 = '\0';
        }
        local_6c = local_74;
        if (local_74 != '\0') {
          local_78 = local_78 + 1;
          local_72 = '\0';
        }
        uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(param_1[0x5b]);
        local_38 = FUN_143a8c200(uVar3);
        FUN_143b16ce0(local_48,local_res20);
        local_64 = 0;
        local_80 = &local_64;
        local_88 = local_28;
        FUN_143b6eed0(local_38,param_3,local_48,param_5);
        cVar1 = FUN_143a8b110(local_64);
        if ((cVar1 == '\0') ||
           (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_48), iVar2 == local_res20)) {
          cVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
          if (cVar1 == '\0') {
            local_res20 = -1;
          }
        }
        else {
          if (param_6 == (wchar_t *)0x0) {
            (**(code **)(*param_1 + 0x108))(param_1,local_20,&local_64);
            cVar1 = FUN_143a8b0e0(local_64);
            if ((cVar1 != '\0') || (iVar2 = FUN_143ab4770(local_28,local_20,4), iVar2 != 0)) {
              local_res20 = -1;
              UCameraModifier_Climbing::~UCameraModifier_Climbing(local_48);
              goto LAB_143b3e7f9;
            }
          }
          else {
            wcscpy(param_6,local_28);
          }
          local_res20 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                        ::GetIndex(local_48);
        }
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_48);
        goto LAB_143b3e7f9;
      }
      if (local_70 == 0x2030) {
        local_60 = FUN_143b41c90(param_1,0xc);
      }
    }
    if (local_60 == 0) goto LAB_143b3ebba;
    local_res20 = FUN_143b43110(param_3,local_res20,local_60);
  } while( true );
}



// FUNCTION 143b3ec30 FUN_143b3ec30 body=1997 status=ok
// SIG undefined FUN_143b3ec30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b3ec30(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,char param_5)

{
  char cVar1;
  int local_res20;
  undefined1 auStack_f8 [32];
  char local_d8;
  int local_d4;
  char local_d0;
  char local_cf;
  int local_cc;
  int local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  longlong *local_b0;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_a4 = param_4;
  FUN_143a8ac30(local_38);
  FUN_143b49c50(param_2,local_38);
  local_a0 = FUN_143a8e3e0(local_38,0);
  local_cc = FUN_143a904f0(local_38);
  local_a8 = FUN_143a904f0(param_3);
  if (local_a0 < 0x10000) {
    local_7c = 1;
  }
  else {
    local_7c = 2;
  }
  local_9c = local_7c;
  local_50 = 0;
  cVar1 = FUN_143a8b0e0(0);
  if (cVar1 == '\0') {
    local_res20 = param_4;
    if (param_5 == '\0') {
      local_b0 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0x38);
      if ((local_9c == local_cc) &&
         (cVar1 = (**(code **)(*local_b0 + 0x30))(local_b0,local_a0), cVar1 != '\0')) {
        local_94 = FUN_143a8e3e0(param_3,param_4);
        cVar1 = (**(code **)(*local_b0 + 0x30))(local_b0,local_94);
        if (cVar1 != '\0') {
          if (local_94 < 0x10000) {
            local_70 = 1;
          }
          else {
            local_70 = 2;
          }
          local_64 = FUN_143b46290(param_3,param_4 + local_70);
          local_64 = local_64 - local_a4;
          FUN_143a8dc60(local_38);
          return local_64;
        }
      }
      local_d4 = 0;
      do {
        while( true ) {
          if (local_cc <= local_d4) goto LAB_143b3f3bb;
          local_c4 = FUN_143a8e3e0(local_38,local_d4);
          if (local_c4 < 0x10000) {
            local_74 = 1;
          }
          else {
            local_74 = 2;
          }
          local_c0 = local_74;
          cVar1 = FUN_143b28380(local_c4);
          if (cVar1 == '\0') break;
          local_d0 = '\0';
          do {
            while( true ) {
              if (local_a8 <= local_res20) goto LAB_143b3efa9;
              local_b8 = FUN_143a8e3e0(param_3,local_res20);
              if (local_b8 == local_c4) break;
              if (((local_b8 != 0x200e) && (local_b8 != 0x200f)) && (local_b8 != 0x61c))
              goto LAB_143b3efa9;
              local_res20 = local_res20 + 1;
            }
            local_d0 = '\x01';
            local_d4 = local_d4 + local_c0;
            local_res20 = local_res20 + local_c0;
            if (local_d4 == local_cc) break;
            local_c4 = FUN_143a8e3e0(local_38,local_d4);
            if (local_c4 < 0x10000) {
              local_8c = 1;
            }
            else {
              local_8c = 2;
            }
            local_c0 = local_8c;
            cVar1 = FUN_143b28380(local_c4);
          } while (cVar1 != '\0');
LAB_143b3efa9:
          local_d4 = FUN_143b46390(local_38,local_d4);
          local_48 = local_res20;
          local_res20 = FUN_143b463e0(param_3,local_res20);
          if ((local_res20 == local_48) && (local_d0 == '\0')) {
            local_5c = -1;
            FUN_143a8dc60(local_38);
            return local_5c;
          }
          local_d4 = FUN_143b463e0(local_38,local_d4);
        }
        local_d8 = '\0';
        while (local_res20 < local_a8) {
          local_bc = FUN_143a8e3e0(param_3,local_res20);
          if ((local_d8 == '\0') && (local_bc == local_c4)) {
            local_d4 = local_d4 + local_c0;
            local_res20 = local_res20 + local_c0;
            local_d8 = '\x01';
          }
          else {
            if ((local_bc != 0x200e) && ((local_bc != 0x200f && (local_bc != 0x61c)))) break;
            local_res20 = local_res20 + 1;
          }
        }
      } while (local_d8 != '\0');
      local_4c = -1;
      FUN_143a8dc60(local_38);
      local_6c = local_4c;
    }
    else {
      local_cf = '\0';
      local_b0 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0x18);
      if ((local_9c == local_cc) &&
         (cVar1 = (**(code **)(*local_b0 + 0x30))(local_b0,local_a0), cVar1 != '\0')) {
        local_res20 = FUN_143b46460(param_3,param_4);
        local_84 = FUN_143a8e3e0(param_3,local_res20);
        cVar1 = (**(code **)(*local_b0 + 0x30))(local_b0,local_84);
        if (cVar1 != '\0') {
          if (local_84 < 0x10000) {
            local_98 = 1;
          }
          else {
            local_98 = 2;
          }
          local_54 = FUN_143b46290(param_3,local_res20 + local_98);
          local_54 = local_54 - local_a4;
          FUN_143a8dc60(local_38);
          return local_54;
        }
      }
      local_c8 = 0;
      while (local_c8 < local_cc) {
        local_c8 = FUN_143b463e0(local_38,local_c8);
        local_res20 = FUN_143b46460(param_3,local_res20);
        if ((local_cc <= local_c8) || (local_a8 <= local_res20)) break;
        local_90 = FUN_143a8e3e0(local_38,local_c8);
        local_80 = FUN_143a8e3e0(param_3,local_res20);
        cVar1 = FUN_143b404b0(param_1,local_80,local_90);
        if (cVar1 == '\0') {
          local_68 = -1;
          FUN_143a8dc60(local_38);
          return local_68;
        }
        local_cf = '\x01';
        if (local_90 < 0x10000) {
          local_88 = 1;
        }
        else {
          local_88 = 2;
        }
        local_c8 = local_c8 + local_88;
        if (local_80 < 0x10000) {
          local_78 = 1;
        }
        else {
          local_78 = 2;
        }
        local_res20 = FUN_143b46290(param_3,local_res20 + local_78);
      }
      if ((local_cc < 1) || (local_cf != '\0')) {
LAB_143b3f3bb:
        local_58 = local_res20 - local_a4;
        FUN_143a8dc60(local_38);
        local_6c = local_58;
      }
      else {
        local_60 = -1;
        FUN_143a8dc60(local_38);
        local_6c = local_60;
      }
    }
  }
  else {
    local_6c = -1;
    FUN_143a8dc60(local_38);
  }
  return local_6c;
}



// FUNCTION 143b3f400 FUN_143b3f400 body=2433 status=ok
// SIG undefined FUN_143b3f400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3f400(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4,
                  longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *_Str2;
  undefined1 *local_res20;
  undefined1 auStack_4a8 [32];
  int *local_488;
  uint local_478;
  undefined8 local_470;
  undefined4 local_468;
  int local_464;
  undefined1 *local_460;
  undefined8 *local_458;
  undefined8 *local_450;
  undefined8 local_448;
  undefined8 local_440;
  longlong local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  undefined1 *local_408;
  longlong local_400;
  undefined8 local_3f8;
  undefined8 *local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398 [40];
  undefined1 local_370 [40];
  undefined1 local_348 [48];
  undefined1 local_318 [384];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_3a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  local_478 = 0;
  param_1[0x4b] = param_5;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 4;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x2a;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x46] = 0;
    param_1[0x45] = 0;
    (**(code **)(*param_1 + 0x170))(param_1,1);
    *(undefined4 *)((longlong)param_1 + 0x24c) = 3;
    *(undefined4 *)(param_1 + 0x4a) = 0;
    *(undefined1 *)((longlong)param_1 + 0x254) = 0;
    *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x26d) = 0;
    if (param_1[0x4b] == 0) {
      local_410 = FUN_143a8d310(0x818);
      if (local_410 == 0) {
        local_430 = 0;
      }
      else {
        uVar3 = FUN_143a8b650();
        local_430 = FUN_143b6a160(local_410,uVar3,param_2);
      }
      local_400 = local_430;
      param_1[0x4b] = local_430;
      if (param_1[0x4b] == 0) {
        *param_2 = 7;
        return;
      }
    }
    lVar4 = FUN_143b82ca0(param_2);
    param_1[0x5d] = lVar4;
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      local_464 = 0;
      local_450 = (undefined8 *)FUN_143b6f650(&local_464);
      cVar1 = FUN_143a8b0e0(local_464);
      if (cVar1 == '\0') {
        FUN_143a8ac30(local_398);
        local_res20 = param_4;
        if (param_4 == (undefined1 *)0x0) {
          local_468 = 0;
          uVar3 = FUN_143a8b650();
          uVar3 = FUN_143a8c200(uVar3);
          local_448 = FUN_143aa5b10(0,uVar3,param_2);
          local_470 = FUN_143aa3350(local_448,"NumberElements",0,param_2);
          uVar3 = FUN_143b6fdc0(local_450);
          local_470 = FUN_143aa3350(local_470,uVar3,local_470,param_2);
          local_470 = FUN_143aa3350(local_470,"patterns",local_470,param_2);
          local_440 = FUN_143aa4fe0(local_470,"decimalFormat",&local_468,param_2);
          if (*param_2 == 2) {
            _Str2 = (char *)FUN_143b6fdc0(local_450);
            iVar2 = _guard_xfg_dispatch_icall_nop("latn",_Str2);
            if (iVar2 != 0) {
              *param_2 = 0;
              local_470 = FUN_143aa3350(local_448,"NumberElements",local_470,param_2);
              local_470 = FUN_143aa3350(local_470,&DAT_145d0d060,local_470,param_2);
              local_470 = FUN_143aa3350(local_470,"patterns",local_470,param_2);
              local_440 = FUN_143aa4fe0(local_470,"decimalFormat",&local_468,param_2);
            }
          }
          FUN_143a90d80(local_398,1,local_440,local_468);
          local_res20 = local_398;
          FUN_143aa2ef0(local_470);
          FUN_143aa2ef0(local_448);
        }
        local_3f0 = local_450;
        local_458 = local_450;
        if (local_450 == (undefined8 *)0x0) {
          local_3c8 = 0;
        }
        else {
          local_3c8 = (**(code **)*local_450)(local_450,1);
        }
        cVar1 = FUN_143a8b0e0(*param_2);
        if (cVar1 == '\0') {
          iVar2 = FUN_143acddd0(local_res20,0xa4);
          if (iVar2 < 0) {
            (**(code **)(*param_1 + 0x248))(param_1,0,param_2);
          }
          else {
            FUN_143b44890(param_1);
          }
          FUN_143a8ac30(local_370);
          if ((int)param_1[0x57] == 0xb) {
            local_420 = FUN_143a8d310(0x20);
            if (local_420 == 0) {
              local_438 = 0;
            }
            else {
              local_3e0 = FUN_143b42560(param_1[0x4b],local_318);
              local_478 = local_478 | 1;
              local_3b8 = local_3e0;
              local_438 = FUN_143b78200(local_420,local_3e0,param_2);
            }
            local_3d0 = local_438;
            param_1[0x5b] = local_438;
            if ((local_478 & 1) != 0) {
              local_478 = local_478 & 0xfffffffe;
              FUN_143a8acf0(local_318);
            }
            cVar1 = FUN_143a8b0e0(*param_2);
            if (cVar1 != '\0') {
              FUN_143a8dc60(local_370);
              FUN_143a8dc60(local_398);
              return;
            }
            local_3c0 = FUN_143a8d4f0(local_348,1,L"other",5);
            local_3a8 = local_3c0;
            FUN_143b788e0(param_1[0x5b],local_3c0,local_370);
            FUN_143a8dc60(local_348);
            local_460 = local_370;
            FUN_143b44890(param_1);
          }
          else {
            local_460 = local_res20;
          }
          iVar2 = FUN_143acddd0(local_460,0xa4);
          if (iVar2 != -1) {
            if (param_1[0x5b] == 0) {
              local_428 = FUN_143a8d310(0x20);
              if (local_428 == 0) {
                local_418 = 0;
              }
              else {
                local_3f8 = FUN_143b42560(param_1[0x4b],local_198);
                local_478 = local_478 | 2;
                local_3b0 = local_3f8;
                local_418 = FUN_143b78200(local_428,local_3f8,param_2);
              }
              local_3e8 = local_418;
              param_1[0x5b] = local_418;
              if ((local_478 & 2) != 0) {
                local_478 = local_478 & 0xfffffffd;
                FUN_143a8acf0(local_198);
              }
              cVar1 = FUN_143a8b0e0(*param_2);
              if (cVar1 != '\0') {
                FUN_143a8dc60(local_370);
                FUN_143a8dc60(local_398);
                return;
              }
            }
            FUN_143b45660(param_1,param_2);
            iVar2 = FUN_143b19dc0(local_460,&DAT_145d0d098,3,0);
            if (iVar2 != -1) {
              local_488 = param_2;
              FUN_143b45cf0(param_1,local_460,1,1);
            }
          }
          local_488 = param_2;
          FUN_143b3dfd0(param_1,local_460,0,param_3);
          if (*(int *)((longlong)param_1 + 700) != 3) {
            FUN_143b41090(param_1,0);
          }
          if (*(int *)((longlong)param_1 + 700) != 0) {
            uVar3 = FUN_143b381a0(param_1);
            local_3d8 = *param_1;
            (**(code **)(local_3d8 + 0x248))(param_1,uVar3,param_2);
          }
          local_408 = (undefined1 *)FUN_143b42ef0(param_1 + 0x5e);
          *local_408 = 0;
          local_408[1] = 0;
          FUN_143b42830(param_1);
          FUN_143a8dc60(local_370);
          FUN_143a8dc60(local_398);
        }
        else {
          FUN_143a8dc60(local_398);
        }
      }
      else {
        *param_2 = local_464;
      }
    }
  }
  return;
}



// FUNCTION 143b3fd90 FUN_143b3fd90 body=473 status=ok
// SIG undefined FUN_143b3fd90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3fd90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_98[0] = 0xffffffff;
    local_a0 = 0;
    if (param_2 != 0) {
      do {
        local_a0 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(param_2,local_98);
        if (local_a0 == 0) {
          return;
        }
        local_50 = *(undefined8 *)(local_a0 + 0x10);
        local_a8 = *(longlong *)(local_a0 + 8);
        local_70 = local_a8;
        local_48 = local_50;
        local_90 = FUN_143a8d310(0xa8);
        if (local_90 == 0) {
          local_88 = 0;
        }
        else {
          local_b8 = local_a8 + 0x78;
          local_80 = local_a8;
          local_88 = FUN_143b3a3a0(local_90,local_a8,local_a8 + 0x28,local_a8 + 0x50);
        }
        local_60 = local_88;
        local_68 = local_88;
        local_78 = FUN_143a8d3a0(local_38,local_48);
        local_58 = local_78;
        FUN_143acdfd0(param_3,local_78,local_68,param_4);
        FUN_143a8dc60(local_38);
        cVar1 = FUN_143a8b0e0(*param_4);
      } while (cVar1 == '\0');
    }
  }
  return;
}



// FUNCTION 143b3ff70 FUN_143b3ff70 body=491 status=ok
// SIG undefined FUN_143b3ff70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b3ff70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_98[0] = 0xffffffff;
    local_a0 = 0;
    if (param_2 != 0) {
      do {
        local_a0 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(param_2,local_98);
        if (local_a0 == 0) {
          return;
        }
        local_50 = *(undefined8 *)(local_a0 + 0x10);
        local_a8 = *(longlong *)(local_a0 + 8);
        local_70 = local_a8;
        local_48 = local_50;
        local_90 = FUN_143a8d310(0xa8);
        if (local_90 == 0) {
          local_88 = 0;
        }
        else {
          local_b8 = local_a8 + 0x78;
          local_80 = local_a8;
          local_b0 = *(undefined1 *)(local_a8 + 0xa0);
          local_88 = FUN_143b3a2c0(local_90,local_a8,local_a8 + 0x28,local_a8 + 0x50);
        }
        local_60 = local_88;
        local_68 = local_88;
        local_78 = FUN_143a8d3a0(local_38,local_48);
        local_58 = local_78;
        FUN_143acdfd0(param_3,local_78,local_68,param_4);
        FUN_143a8dc60(local_38);
        cVar1 = FUN_143a8b0e0(*param_4);
      } while (cVar1 == '\0');
    }
  }
  return;
}



// FUNCTION 143b40160 FUN_143b40160 body=308 status=ok
// SIG undefined FUN_143b40160(void)

void FUN_143b40160(undefined8 param_1,char param_2,longlong *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong local_38;
  
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 == '\0') {
    if (param_2 == '\0') {
      if (*param_3 == 0) {
        lVar3 = FUN_143a8d310(0x28);
        if (lVar3 == 0) {
          local_38 = 0;
        }
        else {
          local_38 = FUN_143a8d3a0(lVar3,param_1);
        }
        *param_3 = local_38;
        if (*param_3 == 0) {
          *param_4 = 7;
        }
      }
      else {
        FUN_143a8dcd0(*param_3,param_1);
      }
    }
    else {
      puVar1 = (undefined8 *)*param_3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *param_3 = 0;
    }
  }
  return;
}



// FUNCTION 143b402a0 FUN_143b402a0 body=254 status=ok
// SIG undefined FUN_143b402a0(void)

void FUN_143b402a0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_50 [2];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if (*param_2 != 0) {
    local_50[0] = 0xffffffff;
    lVar1 = 0;
    while (lVar1 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                             (*param_2,local_50,param_3,param_4,lVar1), lVar1 != 0) {
      local_48 = *(longlong *)(lVar1 + 8);
      local_38 = local_48;
      local_28 = local_48;
      local_18 = local_48;
      if (local_48 == 0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_143b3ba30(local_48,1);
      }
    }
    local_40 = *param_2;
    if (local_40 != 0) {
      local_20 = local_40;
      FID_conflict__scalar_deleting_destructor_(local_40,1);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143b403a0 FUN_143b403a0 body=265 status=ok
// SIG undefined FUN_143b403a0(void)

void FUN_143b403a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_50 [2];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    local_50[0] = 0xffffffff;
    lVar1 = 0;
    while (lVar1 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                             (*(undefined8 *)(param_1 + 0x2c0),local_50,param_3,param_4,lVar1),
          lVar1 != 0) {
      local_48 = *(longlong *)(lVar1 + 8);
      local_38 = local_48;
      local_28 = local_48;
      local_18 = local_48;
      if (local_48 == 0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_143b3ba30(local_48,1);
      }
    }
    local_40 = *(longlong *)(param_1 + 0x2c0);
    if (local_40 != 0) {
      local_20 = local_40;
      FID_conflict__scalar_deleting_destructor_(local_40,1);
    }
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 143b404b0 FUN_143b404b0 body=207 status=ok
// SIG undefined FUN_143b404b0(void)

ulonglong FUN_143b404b0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte local_28;
  
  if (param_2 != param_3) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0x50);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0x58);
    cVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    if (((cVar3 == '\0') || (cVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_3), cVar3 == '\0'))
       && ((cVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2), cVar3 == '\0' ||
           (cVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_3), cVar3 == '\0')))) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    return (ulonglong)local_28;
  }
  return CONCAT71((uint7)(uint3)((uint)param_3 >> 8),1);
}



// FUNCTION 143b40580 FUN_143b40580 body=40 status=ok
// SIG undefined FUN_143b40580(void)

void FUN_143b40580(undefined8 *param_1,undefined8 *param_2)

{
  FUN_143ab3110(*param_1,*param_2);
  return;
}



// FUNCTION 143b405b0 FUN_143b405b0 body=2777 status=ok
// SIG undefined FUN_143b405b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b405b0(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  longlong *param_5,char param_6,longlong param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  double local_res20;
  undefined1 auStack_558 [32];
  undefined4 *local_538;
  undefined4 *local_530;
  char local_528;
  char local_527;
  uint local_524;
  int local_520;
  char local_51c;
  char local_51b;
  undefined4 local_518;
  char local_514 [4];
  uint local_510;
  undefined4 local_50c;
  uint local_508;
  undefined1 local_504 [4];
  short *local_500;
  int local_4f8;
  int local_4f4;
  undefined8 *local_4f0;
  undefined8 *local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined8 local_4d8;
  longlong local_4d0;
  undefined8 *local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  longlong local_490;
  undefined8 local_488;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  undefined8 local_468;
  longlong local_460;
  undefined8 local_458;
  longlong local_450;
  undefined8 *local_448;
  longlong local_440;
  longlong local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 *local_420;
  undefined8 local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [64];
  undefined1 local_398 [40];
  undefined1 local_370 [40];
  undefined1 local_348 [48];
  undefined1 local_318 [384];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_3f8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  local_524 = 0;
  FUN_143a90910(param_3);
  local_520 = 0;
  local_res20 = param_4;
  while (iVar2 = FUN_143a904f0(param_2), local_520 < iVar2) {
    local_510 = FUN_143a8e3e0(param_2,local_520);
    if (local_510 < 0x10000) {
      local_4f4 = 1;
    }
    else {
      local_4f4 = 2;
    }
    local_520 = local_520 + local_4f4;
    if (local_510 == 0x27) {
      local_510 = FUN_143a8e3e0(param_2,local_520);
      if (local_510 < 0x10000) {
        local_4f8 = 1;
      }
      else {
        local_4f8 = 2;
      }
      local_520 = local_520 + local_4f8;
      local_518 = FUN_143a904f0(param_3);
      local_508 = local_510;
      if (local_510 == 0x25) {
        uVar4 = FUN_143b41c90(param_1,3);
        FUN_143a8e070(param_3,uVar4);
        uVar3 = FUN_143a904f0(param_3);
        local_470 = *param_5;
        (**(code **)(local_470 + 8))(param_5,8,local_518,uVar3);
      }
      else if (local_510 == 0x2b) {
        uVar4 = FUN_143b41c90(param_1,7);
        FUN_143a8e070(param_3,uVar4);
        uVar3 = FUN_143a904f0(param_3);
        local_450 = *param_5;
        (**(code **)(local_450 + 8))(param_5,10,local_518,uVar3);
      }
      else if (local_510 == 0x2d) {
        uVar4 = FUN_143b41c90(param_1,6);
        FUN_143a8e070(param_3,uVar4);
        uVar3 = FUN_143a904f0(param_3);
        local_440 = *param_5;
        (**(code **)(local_440 + 8))(param_5,10,local_518,uVar3);
      }
      else if (local_510 == 0xa4) {
        iVar2 = FUN_143a904f0(param_2);
        if ((local_520 < iVar2) && (iVar2 = FUN_143a8e3e0(param_2,local_520), iVar2 == 0xa4)) {
          local_51b = '\x01';
        }
        else {
          local_51b = '\0';
        }
        local_528 = local_51b;
        local_527 = '\0';
        if (local_51b != '\0') {
          local_520 = local_520 + 1;
          iVar2 = FUN_143a904f0(param_2);
          if ((local_520 < iVar2) && (iVar2 = FUN_143a8e3e0(param_2,local_520), iVar2 == 0xa4)) {
            local_51c = '\x01';
          }
          else {
            local_51c = '\0';
          }
          local_527 = local_51c;
          if (local_51c != '\0') {
            local_528 = '\0';
            local_520 = local_520 + 1;
          }
        }
        local_500 = (short *)FUN_143b381a0(param_1);
        if (*local_500 == 0) {
          if (local_528 == '\0') {
            uVar4 = FUN_143b41c90(param_1,8);
            FUN_143a8e070(param_3,uVar4);
          }
          else {
            uVar4 = FUN_143b41c90(param_1,9);
            FUN_143a8e070(param_3,uVar4);
          }
          uVar3 = FUN_143a904f0(param_3);
          local_480 = *param_5;
          (**(code **)(local_480 + 8))(param_5,7,local_518,uVar3);
        }
        else {
          local_50c = 0;
          if ((local_527 == '\0') || (param_7 == 0)) {
            if (local_528 == '\0') {
              if (*(longlong *)(param_1 + 600) == 0) {
                uVar4 = FUN_143a8b650();
                local_4c0 = FUN_143a8c200(uVar4);
              }
              else {
                local_468 = FUN_143b42560(*(undefined8 *)(param_1 + 600),local_198);
                local_524 = local_524 | 2;
                local_418 = local_468;
                local_4c0 = FUN_143a8c200(local_468);
              }
              local_530 = &local_50c;
              local_538 = &local_4dc;
              local_4b8 = FUN_143b6e7b0(local_500,local_4c0,0,local_514);
              if ((local_524 & 2) != 0) {
                local_524 = local_524 & 0xfffffffd;
                FUN_143a8acf0(local_198);
              }
              if (local_514[0] == '\0') {
                local_4a8 = FUN_143a8db50(local_398,local_4b8,local_4dc);
                local_4a0 = local_4a8;
                FUN_143a8e070(param_3,local_4a8);
                FUN_143a8dc60(local_398);
                uVar3 = FUN_143a904f0(param_3);
                local_490 = *param_5;
                (**(code **)(local_490 + 8))(param_5,7,local_518,uVar3);
              }
              else if (param_6 == '\0') {
                if (*(longlong *)(param_1 + 0x238) == 0) {
                  local_4d0 = FUN_143a8d310(0x1e0);
                  if (local_4d0 == 0) {
                    local_4c8 = (undefined8 *)0x0;
                  }
                  else {
                    local_458 = FUN_143a8dad0(local_370,local_4b8);
                    local_524 = local_524 | 4;
                    local_430 = local_458;
                    local_4c8 = (undefined8 *)FUN_143b77020(local_4d0,local_458);
                  }
                  local_420 = local_4c8;
                  local_4e8 = local_4c8;
                  if ((local_524 & 4) != 0) {
                    local_524 = local_524 & 0xfffffffb;
                    FUN_143a8dc60(local_370);
                  }
                  cVar1 = FUN_143a8b110(local_50c);
                  if (cVar1 != '\0') {
                    FUN_143ab2410(0);
                    if (*(longlong *)(param_1 + 0x238) == 0) {
                      *(undefined8 **)(param_1 + 0x238) = local_4e8;
                      local_4e8 = (undefined8 *)0x0;
                    }
                    FUN_143ab2470(0);
                    local_448 = local_4e8;
                    local_4f0 = local_4e8;
                    if (local_4e8 == (undefined8 *)0x0) {
                      local_410 = 0;
                    }
                    else {
                      local_410 = (**(code **)*local_4e8)(local_4e8,1);
                    }
                  }
                }
                FUN_143acc590(param_3,0xa4);
              }
              else if (*(longlong *)(param_1 + 0x238) == 0) {
                FUN_143b17350(param_3,local_500,0xffffffff);
                uVar3 = FUN_143a904f0(param_3);
                local_438 = *param_5;
                (**(code **)(local_438 + 8))(param_5,7,local_518,uVar3);
              }
              else {
                FUN_143b36810(local_3f0,0);
                if (local_res20 < 0.0) {
                  local_res20 = -local_res20;
                }
                (**(code **)(**(longlong **)(param_1 + 0x238) + 0x90))
                          (*(undefined8 *)(param_1 + 0x238),local_res20,param_3,local_3f0);
                UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3f0);
              }
            }
            else {
              FUN_143b17350(param_3,local_500,0xffffffff);
              uVar3 = FUN_143a904f0(param_3);
              local_478 = *param_5;
              (**(code **)(local_478 + 8))(param_5,7,local_518,uVar3);
            }
          }
          else {
            FUN_143aa03f0(local_3d8);
            FUN_143ad0270(local_3d8,param_7,&local_50c);
            if (*(longlong *)(param_1 + 600) == 0) {
              uVar4 = FUN_143a8b650();
              local_4d8 = FUN_143a8c200(uVar4);
            }
            else {
              local_428 = FUN_143b42560(*(undefined8 *)(param_1 + 600),local_318);
              local_524 = local_524 | 1;
              local_400 = local_428;
              local_4d8 = FUN_143a8c200(local_428);
            }
            uVar4 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_3d8);
            local_530 = &local_50c;
            local_538 = &local_4e0;
            local_498 = FUN_143b6ea40(local_500,local_4d8,local_504,uVar4);
            if ((local_524 & 1) != 0) {
              local_524 = local_524 & 0xfffffffe;
              FUN_143a8acf0(local_318);
            }
            local_4b0 = FUN_143a8db50(local_348,local_498,local_4e0);
            local_488 = local_4b0;
            FUN_143a8e070(param_3,local_4b0);
            FUN_143a8dc60(local_348);
            uVar3 = FUN_143a904f0(param_3);
            local_408 = *param_5;
            (**(code **)(local_408 + 8))(param_5,7,local_518,uVar3);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_3d8);
          }
        }
      }
      else if (local_510 == 0x2030) {
        uVar4 = FUN_143b41c90(param_1,0xc);
        FUN_143a8e070(param_3,uVar4);
        uVar3 = FUN_143a904f0(param_3);
        local_460 = *param_5;
        (**(code **)(local_460 + 8))(param_5,9,local_518,uVar3);
      }
      else {
        FUN_143a8e0c0(param_3,local_510);
      }
    }
    else {
      FUN_143a8e0c0(param_3,local_510);
    }
  }
  return;
}



// FUNCTION 143b41090 FUN_143b41090 body=118 status=ok
// SIG undefined FUN_143b41090(void)

void FUN_143b41090(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_143b41110(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x288)) {
    iVar1 = FUN_143a904f0(param_1 + 0x178);
    iVar2 = FUN_143a904f0(param_1 + 0x1a0);
    *(int *)(param_1 + 0x288) = iVar1 + iVar2 + *(int *)(param_1 + 0x288);
  }
  return;
}



// FUNCTION 143b41110 FUN_143b41110 body=366 status=ok
// SIG undefined FUN_143b41110(void)

void FUN_143b41110(longlong param_1,undefined8 param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(local_18);
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_143b405b0(param_1,*(undefined8 *)(param_1 + 0x218),param_1 + 0x178,0,local_18,0,param_2);
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_143b405b0(param_1,*(undefined8 *)(param_1 + 0x220),param_1 + 0x1a0,0,local_18,0,param_2);
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_143b405b0(param_1,*(undefined8 *)(param_1 + 0x228),param_1 + 0x1c8,0,local_18,0,param_2);
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_143b405b0(param_1,*(undefined8 *)(param_1 + 0x230),param_1 + 0x1f0,0,local_18,0,param_2);
  }
  RtAudioError::~RtAudioError(local_18);
  return;
}



// FUNCTION 143b41280 FUN_143b41280 body=117 status=ok
// SIG undefined FUN_143b41280(void)

undefined8
FUN_143b41280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 local_18 [24];
  
  TopologyObject(local_18,param_4);
  FUN_143b3bb30(param_1,param_2,param_3,local_18,param_5);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_18);
  return param_3;
}



// FUNCTION 143b41300 FUN_143b41300 body=134 status=ok
// SIG undefined FUN_143b41300(void)

undefined8
FUN_143b41300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 local_28 [40];
  
  FUN_143b76a00(local_28,param_4,param_5);
  FUN_143b3bb30(param_1,param_2,param_3,local_28,param_5);
  FUN_143b76b40(local_28);
  return param_3;
}



// FUNCTION 143b41390 FUN_143b41390 body=679 status=ok
// SIG undefined FUN_143b41390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b41390(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  char local_f8;
  char local_f7;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  char *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_c0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_ec = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_2);
  if ((0 < local_ec) && (local_ec < 10)) {
    local_e0 = (char *)FUN_143a8b510(param_2);
    local_d8 = 0;
    local_f7 = '\0';
    local_f8 = '\x01';
    local_f4 = 0;
    if (*local_e0 == '+') {
      local_f4 = 1;
    }
    else if (*local_e0 == '-') {
      local_f7 = '\x01';
      local_f4 = 1;
    }
    local_e8 = 1;
    local_f0 = local_ec;
    while (local_f0 = local_f0 + -1, local_f4 <= local_f0) {
      if ((local_e0[local_f0] < '0') || ('9' < local_e0[local_f0])) {
        local_f8 = '\0';
        break;
      }
      local_d8 = local_d8 + (longlong)local_e8 * (longlong)(local_e0[local_f0] + -0x30);
      local_e8 = local_e8 * 10;
    }
    if (local_f8 != '\0') {
      if (local_f7 != '\0') {
        local_d8 = -local_d8;
      }
      local_108 = param_5;
      uVar2 = (**(code **)(*param_1 + 0x50))(param_1,local_d8,param_3,param_4);
      return uVar2;
    }
  }
  FUN_143b74e90(local_98);
  FUN_143b76520(local_98,param_2,param_5,0);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143b76a00(local_b8,param_4,param_5);
    local_108 = param_5;
    FUN_143b3bb30(param_1,local_98,param_3,local_b8);
    local_d0 = param_3;
    FUN_143b76b40(local_b8);
    Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
    local_c8 = local_d0;
  }
  else {
    local_c8 = param_3;
    Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
  }
  return local_c8;
}



// FUNCTION 143b41640 FUN_143b41640 body=72 status=ok
// SIG undefined FUN_143b41640(void)

void FUN_143b41640(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x60))(param_1,(longlong)param_2,param_3,param_4);
  return;
}



// FUNCTION 143b41690 FUN_143b41690 body=82 status=ok
// SIG undefined FUN_143b41690(void)

void FUN_143b41690(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (**(code **)(*param_1 + 0x58))(param_1,(longlong)param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143b416f0 FUN_143b416f0 body=82 status=ok
// SIG undefined FUN_143b416f0(void)

void FUN_143b416f0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143b41750 FUN_143b41750 body=125 status=ok
// SIG undefined FUN_143b41750(void)

undefined8
FUN_143b41750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [32];
  
  local_28 = 0xfffffffffffffffe;
  local_38[0] = 0;
  TopologyObject(local_20,param_4);
  local_30 = FUN_143b3be70(param_1,param_2,param_3,local_20,local_38);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_20);
  return local_30;
}



// FUNCTION 143b417d0 FUN_143b417d0 body=114 status=ok
// SIG undefined FUN_143b417d0(void)

undefined8
FUN_143b417d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 local_18 [24];
  
  TopologyObject(local_18,param_4);
  uVar1 = FUN_143b3be70(param_1,param_2,param_3,local_18,param_5);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_18);
  return uVar1;
}



// FUNCTION 143b41850 FUN_143b41850 body=128 status=ok
// SIG undefined FUN_143b41850(void)

undefined8
FUN_143b41850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 local_28 [40];
  
  FUN_143b76a00(local_28,param_4,param_5);
  uVar1 = FUN_143b3be70(param_1,param_2,param_3,local_28,param_5);
  FUN_143b76b40(local_28);
  return uVar1;
}



// FUNCTION 143b418d0 FUN_143b418d0 body=123 status=ok
// SIG undefined FUN_143b418d0(void)

undefined8
FUN_143b418d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [32];
  
  local_28 = 0xfffffffffffffffe;
  local_38[0] = 0;
  TopologyObject(local_20,param_4);
  local_30 = FUN_143b3c000(param_1,param_2,param_3,local_20,local_38);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_20);
  return local_30;
}



// FUNCTION 143b41950 FUN_143b41950 body=112 status=ok
// SIG undefined FUN_143b41950(void)

undefined8
FUN_143b41950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 local_18 [24];
  
  TopologyObject(local_18,param_4);
  uVar1 = FUN_143b3c000(param_1,param_2,param_3,local_18,param_5);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_18);
  return uVar1;
}



// FUNCTION 143b419c0 FUN_143b419c0 body=126 status=ok
// SIG undefined FUN_143b419c0(void)

undefined8
FUN_143b419c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 local_28 [40];
  
  FUN_143b76a00(local_28,param_4,param_5);
  uVar1 = FUN_143b3c000(param_1,param_2,param_3,local_28,param_5);
  FUN_143b76b40(local_28);
  return uVar1;
}



// FUNCTION 143b41a40 FUN_143b41a40 body=502 status=ok
// SIG undefined FUN_143b41a40(void)

ulonglong FUN_143b41a40(longlong *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return 0xffffffff;
  }
  if (param_2 < 0x1002) {
    if (0xfff < param_2) {
      uVar2 = icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::contains
                        (param_1 + 0x4e,param_2);
      return uVar2;
    }
    switch(param_2) {
    case 0:
      cVar1 = FUN_143b43080(param_1);
      uVar2 = (ulonglong)(uint)(int)cVar1;
      break;
    case 1:
      cVar1 = FUN_143b38630(param_1);
      uVar2 = (ulonglong)(uint)(int)cVar1;
      break;
    case 2:
      cVar1 = FUN_143b42f00(param_1);
      uVar2 = (ulonglong)(uint)(int)cVar1;
      break;
    case 3:
      uVar2 = FUN_143b382f0(param_1);
      break;
    case 4:
      uVar2 = FUN_143b38330(param_1);
      break;
    case 5:
      uVar2 = FUN_143b38330(param_1);
      break;
    case 6:
      uVar2 = FUN_143b382d0(param_1);
      break;
    case 7:
      uVar2 = FUN_143b38310(param_1);
      break;
    case 8:
      uVar2 = FUN_143b38310(param_1);
      break;
    case 9:
      uVar2 = FUN_143b42610(param_1);
      break;
    case 10:
      uVar2 = UGISInventoryComponent::GetHeroSoulInventoryMaxSize(param_1);
      break;
    case 0xb:
      uVar2 = (**(code **)(*param_1 + 0x188))(param_1);
      break;
    default:
      goto switchD_143b41ab0_caseD_c;
    case 0xd:
      uVar2 = (**(code **)(*param_1 + 0x198))(param_1);
      break;
    case 0xe:
      uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1);
      break;
    case 0xf:
      uVar2 = UGISInventoryComponent::GetUseableHeroSoulInventorySize(param_1);
      break;
    case 0x10:
      cVar1 = FUN_143b3e500(param_1);
      uVar2 = (ulonglong)(uint)(int)cVar1;
      break;
    case 0x11:
      uVar2 = FUN_143b425f0(param_1);
      break;
    case 0x12:
      uVar2 = FUN_143b425b0(param_1);
      break;
    case 0x13:
      cVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
      uVar2 = (ulonglong)(uint)(int)cVar1;
      break;
    case 0x15:
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x49);
    }
  }
  else {
switchD_143b41ab0_caseD_c:
    *param_3 = 0x10;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143b41c90 FUN_143b41c90 body=39 status=ok
// SIG undefined FUN_143b41c90(void)

void FUN_143b41c90(longlong param_1,undefined4 param_2)

{
  FUN_143b41cc0(*(undefined8 *)(param_1 + 600),param_2);
  return;
}



// FUNCTION 143b41cc0 FUN_143b41cc0 body=69 status=ok
// SIG undefined FUN_143b41cc0(void)

longlong FUN_143b41cc0(longlong param_1,int param_2)

{
  undefined8 local_18;
  
  if (param_2 < 0x1b) {
    local_18 = param_1 + 8 + (longlong)param_2 * 0x28;
  }
  else {
    local_18 = param_1 + 0x440;
  }
  return local_18;
}



// FUNCTION 143b41d10 FUN_143b41d10 body=18 status=ok
// SIG undefined FUN_143b41d10(void)

undefined8 FUN_143b41d10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x2d8);
}



// FUNCTION 143b41d30 FUN_143b41d30 body=18 status=ok
// SIG undefined FUN_143b41d30(void)

undefined8 FUN_143b41d30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 600);
}



// FUNCTION 143b41d50 FUN_143b41d50 body=19 status=ok
// SIG undefined FUN_143b41d50(void)

void FUN_143b41d50(void)

{
  FUN_143b427f0();
  return;
}



// FUNCTION 143b41d70 FUN_143b41d70 body=173 status=ok
// SIG undefined FUN_143b41d70(void)

void FUN_143b41d70(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 600) == 0) {
    *param_3 = 7;
  }
  else {
    *param_3 = 0;
    local_18 = (short *)FUN_143b381a0(param_1);
    if (*local_18 == 0) {
      uVar1 = FUN_143b41cc0(*(undefined8 *)(param_1 + 600),9);
      local_18 = (short *)FUN_143a8fe10(uVar1);
    }
    FUN_143ab47f0(param_2,local_18,3);
    *(undefined2 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 143b41e20 FUN_143b41e20 body=597 status=ok
// SIG undefined FUN_143b41e20(void)

undefined8
FUN_143b41e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int local_58;
  int local_50;
  undefined1 local_40 [8];
  int local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined1 local_18;
  undefined1 local_17 [7];
  longlong local_10;
  
  FUN_143b57d40(local_40);
  FUN_143b3c450(param_1,param_3,param_3,local_17,param_4);
  local_58 = FUN_143b75b70(param_3);
  local_58 = local_58 + -0x12;
  if (local_58 < 0) {
    local_58 = 0;
  }
  local_20 = 0;
  for (; iVar2 = FUN_143b75b70(param_3), local_58 < iVar2; local_58 = local_58 + 1) {
    local_10 = local_20 * 10;
    cVar1 = FUN_143b75bf0(param_3,local_58);
    local_20 = local_10 + (int)((int)cVar1 & 0xf);
  }
  if ((local_20 == 0) && (iVar2 = FUN_143b75b70(param_3), 0 < iVar2 + -0x12)) {
    local_20 = 100000000000000000;
  }
  local_38 = 0;
  local_30 = 0;
  local_28 = local_30;
  for (local_58 = FUN_143b75b70(param_3); iVar2 = FUN_143b75b00(param_3), local_58 < iVar2;
      local_58 = local_58 + 1) {
    local_38 = local_38 + 1;
    if (local_30 < 100000000000000000) {
      cVar1 = FUN_143b75bf0(param_3,local_58);
      local_30 = local_30 * 10 + (longlong)(int)((int)cVar1 & 0xfU);
      if (((int)cVar1 & 0xfU) != 0) {
        local_28 = local_30;
      }
    }
  }
  local_18 = local_30 == 0;
  cVar1 = FUN_143b3e500(param_1);
  if (cVar1 == '\0') {
    local_50 = FUN_143b38310(param_1);
  }
  else {
    local_50 = FUN_143b425f0(param_1);
    iVar2 = FUN_143b75b70(param_3);
    local_50 = local_50 - iVar2;
    if (local_50 < 0) {
      local_50 = 0;
    }
  }
  FUN_143b58f40(local_40,local_50);
  FUN_143b57c20(param_2,local_40);
  return param_2;
}



// FUNCTION 143b42080 FUN_143b42080 body=648 status=ok
// SIG undefined FUN_143b42080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b42080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_158 [32];
  int local_138;
  double local_130;
  longlong local_128;
  undefined8 local_120;
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_120 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b69680(param_3);
    if (cVar1 == '\0') {
      *param_4 = 1;
      FUN_143b57d40(param_2);
    }
    else {
      local_128 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                  ::GetBoundProgramCounterForTimerManager(param_3);
      if (local_128 == 0) {
        local_138 = FUN_143b695b0(param_3);
        if ((local_138 == 1) || (local_138 == 2)) {
          uVar4 = FUN_143b69180(param_3,param_4);
          FUN_143b42310(param_1,param_2,uVar4,param_4);
        }
        else if ((((local_138 == 5) &&
                  (local_130 = (double)FUN_143b69180(param_3,param_4),
                  local_130 != 9.223372036854776e+18)) && (local_130 != -9.223372036854776e+18)) &&
                (lVar2 = FUN_143ac0690(param_3), lVar2 == (longlong)local_130)) {
          uVar4 = FUN_143b69180(param_3,param_4);
          FUN_143b42310(param_1,param_2,uVar4,param_4);
        }
        else {
          FUN_143b74e90(local_118);
          uVar3 = FUN_143ac0690(param_3);
          FUN_143b76770(local_118,uVar3);
          FUN_143b41e20(param_1,param_2,local_118,param_4);
          Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
        }
      }
      else {
        FUN_143b74e30(local_98,local_128);
        FUN_143b41e20(param_1,param_2,local_98,param_4);
        Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
      }
    }
  }
  else {
    FUN_143b57d40(param_2);
  }
  return param_2;
}



// FUNCTION 143b42310 FUN_143b42310 body=515 status=ok
// SIG undefined FUN_143b42310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b42310(longlong param_1,undefined8 param_2,double param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  int local_110;
  undefined8 local_e8;
  undefined1 local_e0 [56];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_e8 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_143b57d40(local_118);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    FUN_143b57c20(param_2,local_118);
    return param_2;
  }
  cVar1 = FUN_143a919d0(param_3);
  if (cVar1 == '\0') {
    _guard_xfg_dispatch_icall_nop(param_3);
    cVar1 = FUN_143a91a60();
    if (cVar1 == '\0') {
      if ((((*(longlong *)(param_1 + 0x240) == 0) && (*(int *)(param_1 + 0x248) == 0)) &&
          (*(longlong *)(param_1 + 0x278) == 0)) &&
         (((cVar1 = FUN_143b3e500(param_1), cVar1 == '\0' &&
           (cVar1 = FUN_143b5bcd0(local_118,param_3), cVar1 != '\0')) &&
          (iVar2 = FUN_143b382d0(param_1), local_110 <= iVar2)))) {
        uVar3 = FUN_143b38310(param_1);
        FUN_143b58f40(local_118,uVar3);
      }
      else {
        FUN_143b74e90(local_a8);
        FUN_143b76670(local_a8,param_3);
        puVar4 = (undefined1 *)FUN_143b41e20(param_1,local_e0,local_a8,param_4);
        puVar6 = local_118;
        for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        Audio::FAudioCaptureSynth::IsStreamOpen(local_a8);
      }
      FUN_143b57c20(param_2,local_118);
      return param_2;
    }
  }
  FUN_143b5abe0(local_118,param_3);
  FUN_143b57c20(param_2,local_118);
  return param_2;
}



// FUNCTION 143b42520 FUN_143b42520 body=17 status=ok
// SIG undefined FUN_143b42520(void)

undefined4 FUN_143b42520(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x288);
}



// FUNCTION 143b42540 GetHeroSoulInventoryMaxSize body=17 status=ok
// SIG undefined GetHeroSoulInventoryMaxSize(void)

undefined4 UGISInventoryComponent::GetHeroSoulInventoryMaxSize(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24c);
}



// FUNCTION 143b42560 FUN_143b42560 body=67 status=ok
// SIG undefined FUN_143b42560(void)

undefined8 FUN_143b42560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8a610(param_2,param_1 + 0x468,param_3,param_4,0);
  return param_2;
}



// FUNCTION 143b425b0 FUN_143b425b0 body=17 status=ok
// SIG undefined FUN_143b425b0(void)

undefined4 FUN_143b425b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x268);
}



// FUNCTION 143b425d0 FUN_143b425d0 body=18 status=ok
// SIG undefined FUN_143b425d0(void)

undefined1 FUN_143b425d0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x26d);
}


